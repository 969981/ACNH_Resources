
bool FUN_011ceda8(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if ((DAT_050de808 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_050de808);
    if (iVar2 != 0) {
      FUN_011d0e00();
      __cxa_guard_release(&DAT_050de808);
    }
  }
  if (DAT_050de7f8 == '\x01') {
    if (*DAT_050de800 == 0x10) {
      iVar2 = 0;
      goto LAB_011cefb8;
    }
    if (DAT_050de800[1] == 0x10) {
      iVar2 = 1;
      goto LAB_011cefb8;
    }
    if (DAT_050de800[2] == 0x10) {
      iVar2 = 2;
      goto LAB_011cefb8;
    }
    if (DAT_050de800[3] == 0x10) {
      iVar2 = 3;
      goto LAB_011cefb8;
    }
    if (DAT_050de800[4] == 0x10) {
      iVar2 = 4;
      goto LAB_011cefb8;
    }
    if (DAT_050de800[5] == 0x10) {
      iVar2 = 5;
      goto LAB_011cefb8;
    }
    if (DAT_050de800[6] == 0x10) {
      iVar2 = 6;
      goto LAB_011cefb8;
    }
    if (DAT_050de800[7] == 0x10) {
      iVar2 = 7;
      goto LAB_011cefb8;
    }
    if (DAT_050de800[8] == 0x10) {
      iVar2 = 8;
      goto LAB_011cefb8;
    }
    if (DAT_050de800[9] == 0x10) {
      iVar2 = 9;
      goto LAB_011cefb8;
    }
    if (DAT_050de800[10] == 0x10) {
      iVar2 = 10;
      goto LAB_011cefb8;
    }
    if (DAT_050de800[0xb] == 0x10) {
      iVar2 = 0xb;
      goto LAB_011cefb8;
    }
    if (DAT_050de800[0xc] == 0x10) {
      iVar2 = 0xc;
      goto LAB_011cefb8;
    }
    if (DAT_050de800[0xd] == 0x10) {
      iVar2 = 0xd;
      goto LAB_011cefb8;
    }
    if (DAT_050de800[0xe] == 0x10) {
      iVar2 = 0xe;
      goto LAB_011cefb8;
    }
    if (DAT_050de800[0xf] == 0x10) {
      iVar2 = 0xf;
      goto LAB_011cefb8;
    }
    if (DAT_050de800[0x10] == 0x10) {
      iVar2 = 0x10;
      goto LAB_011cefb8;
    }
    if (DAT_050de800[0x11] == 0x10) {
      iVar2 = 0x11;
      goto LAB_011cefb8;
    }
    if (DAT_050de800[0x12] == 0x10) {
      iVar2 = 0x12;
      goto LAB_011cefb8;
    }
    if (DAT_050de800[0x13] == 0x10) {
      iVar2 = 0x13;
      goto LAB_011cefb8;
    }
    if (DAT_050de800[0x14] == 0x10) {
      iVar2 = 0x14;
      goto LAB_011cefb8;
    }
  }
  iVar2 = -1;
LAB_011cefb8:
  return iVar1 == iVar2;
}

