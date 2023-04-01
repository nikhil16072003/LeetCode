///array of objects


import java. util. Scanner;
import java.util.ArrayList;
class bfg{
    String a;
    String b;
    int c;
    int d;
    bfg(String l, String m,int n, int o){
        a=l;
        b=m;
        c=n;
        d=o;
    }
    public void display(){
        System. out. println(""+a+" "+b+" "+c+" "+d);
    }
}
class Main{
    public static void main(String[] args){
        Scanner ab=new Scanner(System.in);
        int n, i, j;
        n=ab.nextInt();
        bfg[] s=new bfg[n];
        for(i=0;i<n;i++){
            String p, q;
            int r, t;
            p=ab.next();
            q=ab.next();
            r=ab.nextInt();
            t=ab.nextInt();
            s[i]=new bfg(p, q, r, t);
            
        }
        
        ArrayList<bfg>list1=new ArrayList<>();
        for(i=0;i<n;i++){
            list1.add(s[i]);
        }
        
        int [] h=new int[n];
        for(i=0;i<n;i++){
            h[i]=s[i].d;
        }
        int temp;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(h[i]<h[j]){
                    temp=h[i];
                    h[i]=h[j];
                    h[j]=temp;
                }
            }
        }
        for(i=0;i<n;i++){
           if(h[0]==s[i].d){
               s[i].display();
           }
        }
        for(i=0;i<n;i++){
            if(h[n-1]==s[i].d){
                s[i].display();
            }
        }
    }
}
