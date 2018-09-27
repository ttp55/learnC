Dim a%(100), n%

Private Sub Form_Load()  n = InputBox(输入数值) End Sub

Private Sub Command1_Click() Cls

Print n & "个随机整数"

For i = 1 To n

a(i) = Int(Rnd * 90 + 10)  Print a(i);

b = b + 1
If b Mod 10 = 0 Then    Print

End If

Next i

For i = 1 To n - 1

For j = n To i + 1 Step -1   If a(j) < a(j - 1) Then   t = a(j)

a(j) = a(j - 1)

a(j - 1) = t

End If

Next j

Next i

End Sub

Private Sub Command2_Click() Picture1.Cls

Label1.Caption = ""

Dim c%(100)

b = 0

For i = 1 To n

If a(i) Mod 2 = 1 Then   Picture1.Print a(i);   b = b + 1

If b Mod 10 = 0 Then     Picture1.Print

End If

End If

Next i

Label2.Caption = b & "个奇数"
For i = 1 To n - 1

For j = i + 1 To n

If a(i) < a(j) Then

t = a(i)

a(i) = a(j)

a(j) = t

End If

Next j

Next i

d = 0

For i = 1 To n

If a(i) Mod 2 = 0 Then

d = d + 1

c(d) = a(i)
If d Mod 10 = 0 Then

Label1.Caption = Label1.Caption & c(d) & "  " & vbCrLf   Else

Label1.Caption = Label1.Caption & c(d) & "  "

End If

End If

Label3.Caption = d & "个偶数"

Next i

End Sub

Private Sub Command3_Click()

Text1.Text = ""

e = 0If d Mod 10 = 0 Then

Label1.Caption = Label1.Caption & c(d) & "  " & vbCrLf   Else

Label1.Caption = Label1.Caption & c(d) & "  "

End If

End If

Label3.Caption = d & "个偶数"

Next i

End Sub

Private Sub Command3_Click()

Text1.Text = ""

e = 0Text1.Text = Text1.Text & a(i) & "  "

End If

End If

Next i

Label4.Caption = e & "个素数"

Text1.Text = Text1.Text & vbCrLf & "素数的和：" & s

End Sub

Private Sub Command4_Click()  End

End Sub

