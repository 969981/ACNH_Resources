
void FUN_011cc6d8(undefined2 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = DAT_05586008;
  *(undefined1 *)(param_1 + 1) = DAT_0558600a;
  *(undefined1 *)((long)param_1 + 3) = DAT_0558600b;
  *(undefined4 *)(param_1 + 2) = DAT_0558600c;
  if ((DAT_050de808 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_050de808);
    if (iVar1 != 0) {
      FUN_011d0e00();
      __cxa_guard_release(&DAT_050de808);
    }
  }
  if ((DAT_050de7f8 == '\x01') && (*DAT_050de800 != 0)) {
    if (DAT_050de800[1] == 0) {
      uVar2 = 1;
      goto LAB_011cc7e0;
    }
    if (DAT_050de800[2] == 0) {
      uVar2 = 2;
      goto LAB_011cc7e0;
    }
    if (DAT_050de800[3] == 0) {
      uVar2 = 3;
      goto LAB_011cc7e0;
    }
    if (DAT_050de800[4] == 0) {
      uVar2 = 4;
      goto LAB_011cc7e0;
    }
    if (DAT_050de800[5] == 0) {
      uVar2 = 5;
      goto LAB_011cc7e0;
    }
    if (DAT_050de800[6] == 0) {
      uVar2 = 6;
      goto LAB_011cc7e0;
    }
    if (DAT_050de800[7] == 0) {
      uVar2 = 7;
      goto LAB_011cc7e0;
    }
    if (DAT_050de800[8] == 0) {
      uVar2 = 8;
      goto LAB_011cc7e0;
    }
    if (DAT_050de800[9] == 0) {
      uVar2 = 9;
      goto LAB_011cc7e0;
    }
    if (DAT_050de800[10] == 0) {
      uVar2 = 10;
      goto LAB_011cc7e0;
    }
    if (DAT_050de800[0xb] == 0) {
      uVar2 = 0xb;
      goto LAB_011cc7e0;
    }
    if (DAT_050de800[0xc] == 0) {
      uVar2 = 0xc;
      goto LAB_011cc7e0;
    }
    if (DAT_050de800[0xd] == 0) {
      uVar2 = 0xd;
      goto LAB_011cc7e0;
    }
    if (DAT_050de800[0xe] == 0) {
      uVar2 = 0xe;
      goto LAB_011cc7e0;
    }
    if (DAT_050de800[0xf] == 0) {
      uVar2 = 0xf;
      goto LAB_011cc7e0;
    }
    if (DAT_050de800[0x10] == 0) {
      uVar2 = 0x10;
      goto LAB_011cc7e0;
    }
    if (DAT_050de800[0x11] == 0) {
      uVar2 = 0x11;
      goto LAB_011cc7e0;
    }
    if (DAT_050de800[0x12] == 0) {
      uVar2 = 0x12;
      goto LAB_011cc7e0;
    }
    if (DAT_050de800[0x13] == 0) {
      uVar2 = 0x13;
      goto LAB_011cc7e0;
    }
    if (DAT_050de800[0x14] == 0) {
      uVar2 = 0x14;
      goto LAB_011cc7e0;
    }
  }
  uVar2 = 0;
LAB_011cc7e0:
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0x72) = 0x3f80000000000000;
  *(undefined1 **)(param_1 + 0x76) = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0x7a) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x7c) = uVar2;
  *(undefined8 *)(param_1 + 0x7e) = 0x1e00000004;
  *(undefined2 *)((long)param_1 + 0x115) = 0;
  *(undefined4 *)(param_1 + 0x82) = 0;
  *(undefined1 *)(param_1 + 0x8a) = 0xff;
  *(undefined8 *)(param_1 + 0x6e) = 0;
  *(undefined1 *)(param_1 + 0x88) = 0xff;
  param_1[0x89] = 0;
  *(undefined1 *)((long)param_1 + 0x117) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *(undefined8 *)(param_1 + 0x66) = 0;
  *(undefined8 *)(param_1 + 0x6a) = 0;
  param_1[0x8c] = 0xffff;
  *(undefined1 *)(param_1 + 0x8d) = 0xff;
  return;
}

