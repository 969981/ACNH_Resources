
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_030de6c4(int param_1)

{
  long lVar1;
  
  if ((DAT_056ed3c0 == param_1) || (_DAT_056ed3c4 == param_1)) {
    lVar1 = 0;
  }
  else if ((DAT_056ed430 == param_1) || (_DAT_056ed434 == param_1)) {
    lVar1 = 1;
  }
  else if ((DAT_056ed4a0 == param_1) || (_DAT_056ed4a4 == param_1)) {
    lVar1 = 2;
  }
  else if ((DAT_056ed510 == param_1) || (_DAT_056ed514 == param_1)) {
    lVar1 = 3;
  }
  else if (((int)DAT_056ed580 == param_1) || (DAT_056ed580._4_4_ == param_1)) {
    lVar1 = 4;
  }
  else if (((int)DAT_056ed5f0 == param_1) || (DAT_056ed5f0._4_4_ == param_1)) {
    lVar1 = 5;
  }
  else if (((int)DAT_056ed660 == param_1) || (DAT_056ed660._4_4_ == param_1)) {
    lVar1 = 6;
  }
  else if (((int)DAT_056ed6d0 == param_1) || (DAT_056ed6d0._4_4_ == param_1)) {
    lVar1 = 7;
  }
  else if (((int)DAT_056ed740 == param_1) || (DAT_056ed740._4_4_ == param_1)) {
    lVar1 = 8;
  }
  else if (((int)DAT_056ed7b0 == param_1) || (DAT_056ed7b0._4_4_ == param_1)) {
    lVar1 = 9;
  }
  else if (((int)DAT_056ed820 == param_1) || (DAT_056ed820._4_4_ == param_1)) {
    lVar1 = 10;
  }
  else if (((int)DAT_056ed890 == param_1) || (DAT_056ed890._4_4_ == param_1)) {
    lVar1 = 0xb;
  }
  else if (((int)DAT_056ed900 == param_1) || (DAT_056ed900._4_4_ == param_1)) {
    lVar1 = 0xc;
  }
  else {
    if (((int)DAT_056ed970 != param_1) && (DAT_056ed970._4_4_ != param_1)) {
      return 0;
    }
    lVar1 = 0xd;
  }
  return (&DAT_056ed3c8)[lVar1 * 0x1c];
}

