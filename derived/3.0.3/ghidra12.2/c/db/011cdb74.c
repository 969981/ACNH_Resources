
void FUN_011cdb74(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((DAT_050de808 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_050de808);
    if (iVar1 != 0) {
      FUN_011d0e00();
      __cxa_guard_release(&DAT_050de808);
    }
  }
  if (DAT_050de7f8 == '\x01') {
    if (*DAT_050de800 != param_2) {
      if (DAT_050de800[1] == param_2) {
        uVar2 = 1;
        goto LAB_011cdbb8;
      }
      if (DAT_050de800[2] == param_2) {
        uVar2 = 2;
        goto LAB_011cdbb8;
      }
      if (DAT_050de800[3] == param_2) {
        uVar2 = 3;
        goto LAB_011cdbb8;
      }
      if (DAT_050de800[4] == param_2) {
        uVar2 = 4;
        goto LAB_011cdbb8;
      }
      if (DAT_050de800[5] == param_2) {
        uVar2 = 5;
        goto LAB_011cdbb8;
      }
      if (DAT_050de800[6] == param_2) {
        uVar2 = 6;
        goto LAB_011cdbb8;
      }
      if (DAT_050de800[7] == param_2) {
        uVar2 = 7;
        goto LAB_011cdbb8;
      }
      if (DAT_050de800[8] == param_2) {
        uVar2 = 8;
        goto LAB_011cdbb8;
      }
      if (DAT_050de800[9] == param_2) {
        uVar2 = 9;
        goto LAB_011cdbb8;
      }
      if (DAT_050de800[10] == param_2) {
        uVar2 = 10;
        goto LAB_011cdbb8;
      }
      if (DAT_050de800[0xb] == param_2) {
        uVar2 = 0xb;
        goto LAB_011cdbb8;
      }
      if (DAT_050de800[0xc] == param_2) {
        uVar2 = 0xc;
        goto LAB_011cdbb8;
      }
      if (DAT_050de800[0xd] == param_2) {
        uVar2 = 0xd;
        goto LAB_011cdbb8;
      }
      if (DAT_050de800[0xe] == param_2) {
        uVar2 = 0xe;
        goto LAB_011cdbb8;
      }
      if (DAT_050de800[0xf] == param_2) {
        uVar2 = 0xf;
        goto LAB_011cdbb8;
      }
      if (DAT_050de800[0x10] == param_2) {
        uVar2 = 0x10;
        goto LAB_011cdbb8;
      }
      if (DAT_050de800[0x11] == param_2) {
        uVar2 = 0x11;
        goto LAB_011cdbb8;
      }
      if (DAT_050de800[0x12] == param_2) {
        uVar2 = 0x12;
        goto LAB_011cdbb8;
      }
      if (DAT_050de800[0x13] == param_2) {
        uVar2 = 0x13;
        goto LAB_011cdbb8;
      }
      if (DAT_050de800[0x14] == param_2) {
        uVar2 = 0x14;
        goto LAB_011cdbb8;
      }
    }
  }
  uVar2 = 0;
LAB_011cdbb8:
  *param_1 = uVar2;
  return;
}

