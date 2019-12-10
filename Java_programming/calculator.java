import java.awt.*;
import java.awt.event.*;
 
class calculator implements ActionListener
{
Frame f=new Frame();
TextField tf1=new TextField();
 
Button b0=new Button("0");
Button b1=new Button("1");
Button b2=new Button("2");
Button b3=new Button("3");
Button b4=new Button("4");
Button b5=new Button("5");
Button b6=new Button("6");
Button b7=new Button("7");
Button b8=new Button("8");
Button b9=new Button("9");
Button badd=new Button("+");
Button bmin=new Button("-");
Button bmul =new Button("*");
Button bdiv =new Button("/");
Button equal = new Button("=");
 
calculator()
{
tf1.setBounds(50,30,300,50);
b1.setBounds(50,80,50,50);
b2.setBounds(110,80,50,50);
b3.setBounds(170,80,50,50);
b4.setBounds(50,150,50,50);
b5.setBounds(110,150,50,50);
b6.setBounds(170,150,50,50);
b7.setBounds(50,220,50,50);
b8.setBounds(110,220,50,50);
b9.setBounds(170,220,50,50);
b0.setBounds(110,290,50,50);
badd.setBounds(250,80,50,50);
bmin.setBounds(320,80,50,50);
bmul.setBounds(250,150,50,50);
bdiv.setBounds(320,150,50,50);
equal.setBounds(250, 220, 50, 50);
 
 
 
f.add(tf1);
f.add(b0);
f.add(b1);
f.add(b2);
f.add(b3);
f.add(b4);
f.add(b5);
f.add(b6);
f.add(b7);
f.add(b8);
f.add(b9);
f.add(badd);
f.add(bmin);
f.add(bmul);
f.add(bdiv);
f.add(equal);
 
b0.addActionListener(this);
b1.addActionListener(this);
b2.addActionListener(this);
b3.addActionListener(this);
b4.addActionListener(this);
b5.addActionListener(this);
b6.addActionListener(this);
b7.addActionListener(this);
b8.addActionListener(this);
b9.addActionListener(this);
badd.addActionListener(this);
bmin.addActionListener(this);
bmul.addActionListener(this);
bdiv.addActionListener(this);
equal.addActionListener(this);
 
 
f.setLayout(null);
f.setVisible(true);
f.setSize(500,500);
 
}
String s="";
String s2="";
char toDo = 'a';
public void actionPerformed(ActionEvent e)
{  
    if(e.getSource()==b0)
{
    s=s+"0";
    tf1.setText(s);
    if(toDo=='+')
    {
        tf1.setText(s2+"+"+s);
    }
    if(toDo=='-')
    {
        tf1.setText(s2+"-"+s);
    }
    if(toDo=='*')
    {
        tf1.setText(s2+"*"+s);
    }
    if(toDo=='/')
    {
        tf1.setText(s2+"/"+s);
    }
}
  if(e.getSource()==b1)
{
    s=s+"1";
    tf1.setText(s);
    if(toDo=='+')
    {
        tf1.setText(s2+"+"+s);
    }
    if(toDo=='-')
    {
        tf1.setText(s2+"-"+s);
    }
    if(toDo=='*')
    {
        tf1.setText(s2+"*"+s);
    }
    if(toDo=='/')
    {
        tf1.setText(s2+"/"+s);
    }
}
  if(e.getSource()==b2)
{
    s=s+"2";
    tf1.setText(s);    
    if(toDo=='+')
    {
        tf1.setText(s2+"+"+s);
    }
    if(toDo=='-')
    {
        tf1.setText(s2+"-"+s);
    }
    if(toDo=='*')
    {
        tf1.setText(s2+"*"+s);
    }
    if(toDo=='/')
    {
        tf1.setText(s2+"/"+s);
    }
}
  if(e.getSource()==b3)
{
    s=s+"3";
    tf1.setText(s);
    if(toDo=='+')
    {
        tf1.setText(s2+"+"+s);
    }
    if(toDo=='-')
    {
        tf1.setText(s2+"-"+s);
    }
    if(toDo=='*')
    {
        tf1.setText(s2+"*"+s);
    }
    if(toDo=='/')
    {
        tf1.setText(s2+"/"+s);
    }
}
  if(e.getSource()==b4)
{
    s=s+"4";
    tf1.setText(s);
    if(toDo=='+')
    {
        tf1.setText(s2+"+"+s);
    }
    if(toDo=='-')
    {
        tf1.setText(s2+"-"+s);
    }
    if(toDo=='*')
    {
        tf1.setText(s2+"*"+s);
    }
    if(toDo=='/')
    {
        tf1.setText(s2+"/"+s);
    }
}
  if(e.getSource()==b5)
{
    s=s+"5";
    tf1.setText(s);
    if(toDo=='+')
    {
        tf1.setText(s2+"+"+s);
    }
    if(toDo=='-')
    {
        tf1.setText(s2+"-"+s);
    }
    if(toDo=='*')
    {
        tf1.setText(s2+"*"+s);
    }
    if(toDo=='/')
    {
        tf1.setText(s2+"/"+s);
    }
}
  if(e.getSource()==b6)
{
    s=s+"6";
    tf1.setText(s);
    if(toDo=='+')
    {
        tf1.setText(s2+"+"+s);
    }
    if(toDo=='-')
    {
        tf1.setText(s2+"-"+s);
    }
    if(toDo=='*')
    {
        tf1.setText(s2+"*"+s);
    }
    if(toDo=='/')
    {
        tf1.setText(s2+"/"+s);
    }
}
  if(e.getSource()==b7)
{
    s=s+"7";
    tf1.setText(s);
    if(toDo=='+')
    {
        tf1.setText(s2+"+"+s);
    }
    if(toDo=='-')
    {
        tf1.setText(s2+"-"+s);
    }
    if(toDo=='*')
    {
        tf1.setText(s2+"*"+s);
    }
    if(toDo=='/')
    {
        tf1.setText(s2+"/"+s);
    }
}
  if(e.getSource()==b8)
{
    s=s+"8";
    tf1.setText(s);
    if(toDo=='+')
    {
        tf1.setText(s2+"+"+s);
    }
    if(toDo=='-')
    {
        tf1.setText(s2+"-"+s);
    }
    if(toDo=='*')
    {
        tf1.setText(s2+"*"+s);
    }
    if(toDo=='/')
    {
        tf1.setText(s2+"/"+s);
    }
}
  if(e.getSource()==b9)
{
    s=s+"9";
    tf1.setText(s);
    if(toDo=='+')
    {
        tf1.setText(s2+"+"+s);
    }
    if(toDo=='-')
    {
        tf1.setText(s2+"-"+s);
    }
    if(toDo=='*')
    {
        tf1.setText(s2+"*"+s);
    }
    if(toDo=='/')
    {
        tf1.setText(s2+"/"+s);
    }
}
    if(e.getSource()==badd)
    {
        s2 = s;
        s = "";
        toDo = '+';
    }
    if(e.getSource()==bmin)
    {
        s2 = s;
        s = "";
        toDo = '-';
    }
    if(e.getSource()==bmul)
    {
        s2 = s;
        s = "";
        toDo = '*';
    }
    if(e.getSource()==bdiv)
    {
        s2 = s;
        s = "";
        toDo = '/';
    }
 
    if(e.getSource()==equal)
    {
        int num1 = Integer.parseInt(s);
        int num2 = Integer.parseInt(s2);
        String sum = String.valueOf(num1+num2);
        String diff = String.valueOf(num1-num2);
        String prod = String.valueOf(num1*num2);
        String div = String.valueOf(num1/num2);
        if(toDo=='+') tf1.setText(sum);
        if(toDo=='-') tf1.setText(diff);
        if(toDo=='*') tf1.setText(prod);
        if(toDo=='/') tf1.setText(div);
    }
 
 
}
 
public static void main(String args[])
{
     new calculator();
}
}