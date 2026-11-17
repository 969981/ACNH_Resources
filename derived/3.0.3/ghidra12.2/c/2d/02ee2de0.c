
undefined4 FUN_02ee2de0(int param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if ((param_1 == -1) && (param_2 == 0xffffffff)) {
    return 0xffffffff;
  }
  if (param_2 == 0xffffffff) {
    if (DAT_056b3898._4_4_ == param_1) {
      lVar1 = 0;
    }
    else if (DAT_056b38a0._4_4_ == param_1) {
      lVar1 = 1;
    }
    else if (DAT_056b38a8._4_4_ == param_1) {
      lVar1 = 2;
    }
    else if (DAT_056b38b0._4_4_ == param_1) {
      lVar1 = 3;
    }
    else if (DAT_056b38b8._4_4_ == param_1) {
      lVar1 = 4;
    }
    else if (DAT_056b38c0._4_4_ == param_1) {
      lVar1 = 5;
    }
    else if (DAT_056b38c8._4_4_ == param_1) {
      lVar1 = 6;
    }
    else if (DAT_056b38d0._4_4_ == param_1) {
      lVar1 = 7;
    }
    else if (DAT_056b38d8._4_4_ == param_1) {
      lVar1 = 8;
    }
    else if (DAT_056b38e0._4_4_ == param_1) {
      lVar1 = 9;
    }
    else if (DAT_056b38e8._4_4_ == param_1) {
      lVar1 = 10;
    }
    else if (DAT_056b38f0._4_4_ == param_1) {
      lVar1 = 0xb;
    }
    else if (DAT_056b38f8._4_4_ == param_1) {
      lVar1 = 0xc;
    }
    else if (DAT_056b3900._4_4_ == param_1) {
      lVar1 = 0xd;
    }
    else if (DAT_056b3908._4_4_ == param_1) {
      lVar1 = 0xe;
    }
    else if (DAT_056b3910._4_4_ == param_1) {
      lVar1 = 0xf;
    }
    else if (DAT_056b3918._4_4_ == param_1) {
      lVar1 = 0x10;
    }
    else if (DAT_056b3920._4_4_ == param_1) {
      lVar1 = 0x11;
    }
    else if (DAT_056b3928._4_4_ == param_1) {
      lVar1 = 0x12;
    }
    else if (DAT_056b3930._4_4_ == param_1) {
      lVar1 = 0x13;
    }
    else if (DAT_056b3938._4_4_ == param_1) {
      lVar1 = 0x14;
    }
    else {
      if (DAT_056b3940._4_4_ != param_1) {
        return 0xffffffff;
      }
      lVar1 = 0x15;
    }
    puVar2 = &DAT_056b3898 + lVar1;
  }
  else {
    if (5 < param_2) {
      param_2 = 0;
    }
    puVar2 = &DAT_056b3948 + param_2;
  }
  return *(undefined4 *)puVar2;
}

