object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Form2'
  ClientHeight = 450
  ClientWidth = 884
  Color = clTeal
  TransparentColor = True
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 320
    Top = 127
    Width = 9
    Height = 16
    Caption = 'X'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 512
    Top = 127
    Width = 18
    Height = 16
    Caption = 'DX'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label3: TLabel
    Left = 736
    Top = 127
    Width = 9
    Height = 16
    Caption = 'X'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Button1: TButton
    Left = 104
    Top = 96
    Width = 105
    Height = 25
    Caption = 'Insertar datos'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 0
    OnClick = Button1Click
  end
  object StringGrid1: TStringGrid
    Left = 40
    Top = 159
    Width = 217
    Height = 98
    TabOrder = 1
  end
  object Button2: TButton
    Left = 291
    Top = 96
    Width = 75
    Height = 25
    Caption = 'Insertar X'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 2
    OnClick = Button2Click
  end
  object StringGrid2: TStringGrid
    Left = 291
    Top = 159
    Width = 75
    Height = 100
    TabOrder = 3
    RowHeights = (
      24
      26
      24
      24
      24)
  end
  object Button3: TButton
    Left = 598
    Top = 96
    Width = 75
    Height = 25
    Caption = 'Paso 1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 4
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 134
    Top = 278
    Width = 75
    Height = 25
    Caption = 'Paso 2'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 5
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 523
    Top = 278
    Width = 75
    Height = 25
    Caption = 'Paso 3'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 6
    OnClick = Button5Click
  end
  object StringGrid3: TStringGrid
    Left = 418
    Top = 159
    Width = 207
    Height = 98
    TabOrder = 7
  end
  object StringGrid4: TStringGrid
    Left = 643
    Top = 159
    Width = 206
    Height = 98
    TabOrder = 8
  end
  object StringGrid5: TStringGrid
    Left = 249
    Top = 278
    Width = 212
    Height = 100
    TabOrder = 9
    ColWidths = (
      64
      64
      64
      64
      64)
  end
  object StringGrid6: TStringGrid
    Left = 635
    Top = 278
    Width = 75
    Height = 108
    TabOrder = 10
    RowHeights = (
      24
      32
      24
      88
      24)
  end
  object Edit1: TEdit
    Left = 249
    Top = 16
    Width = 400
    Height = 63
    Font.Charset = ANSI_CHARSET
    Font.Color = clRed
    Font.Height = -48
    Font.Name = 'Arial Rounded MT Bold'
    Font.Style = [fsUnderline]
    ParentFont = False
    TabOrder = 11
    Text = 'M'#233'todo de Crout'
  end
end
