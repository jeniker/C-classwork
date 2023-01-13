Public Class frmGuess

  Dim highNum As Integer 'upper number of selected range
  Dim lowNum As Integer 'lower number of selected range
  Dim guess As Integer 'the computer's guess
  Dim guessNum As Integer 'increments the number of guesses by the computer

  Private Sub frmGuess_Load(sender As Object, e As EventArgs) Handles MyBase.Load

    MessageBox.Show("Think of an whole number -- DON'T TELL ME!")
    MessageBox.Show("Now give me a range you want me to guess in... like 1 to 100.")
    lowNum = CInt(InputBox("Whats the starting value?", "Lowest Value"))
    highNum = CInt(InputBox("Whats the ending value?", "Highest Value"))
    lblTitle.Text = "I am guessing between " & lowNum & " and " & highNum & "."
    newGuess() 'determines the middle value of the lower and higher numbers
  End Sub

  Sub newGuess() 'determines the computer's guess and displays it
    guess = highNum - ((highNum - lowNum) \ 2)
    guessNum += 1
    MessageBox.Show("My guess is " & guess)
  End Sub

  Private Sub btnLower_Click(sender As Object, e As EventArgs) Handles btnLower.Click
    If guessNum >= 3 And lowNum > guess Then 'if the user changes the number and it becomes lower than
      MessageBox.Show("CHEATER!")  'previously indicated, the game stops and a message shows
      Me.Close()
    End If
    highNum = guess - 1  'subtracts one from the guess for the new highest number 
    newGuess()
  End Sub

  Private Sub btnHigher_Click(sender As Object, e As EventArgs) Handles btnHigher.Click
    lowNum = guess + 1   'adds one to the guess for the new lowest number
    newGuess()
  End Sub

  Private Sub Correct_Click(sender As Object, e As EventArgs) Handles btnCorrect.Click
    MessageBox.Show("I win. I told you I was awesome.")
    Close()

  End Sub
End Class
