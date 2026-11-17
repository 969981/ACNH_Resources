
undefined8 FUN_02fe01a4(long *param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = *(int *)(*param_1 + 0x30);
  if (iVar1 == 0) {
LAB_02fe01e0:
    uVar2 = FUN_02ff7cc0(0x3a83126f,param_1[1] + 0x10,param_1[2] + 0x10);
    if ((uVar2 & 1) == 0) {
      return 1;
    }
    if (iVar1 != 2) goto LAB_02fe0208;
LAB_02fe0230:
    uVar2 = FUN_02ff7cc0(0x3a83126f,param_1[1] + 0x30,param_1[2] + 0x30);
    if ((uVar2 & 1) == 0) {
      return 1;
    }
    if (iVar1 != 4) goto LAB_02fe0258;
LAB_02fe0280:
    uVar2 = FUN_02ff7cc0(0x3a83126f,param_1[1] + 0x50,param_1[2] + 0x50);
    if ((uVar2 & 1) == 0) {
      return 1;
    }
    if (iVar1 != 6) goto LAB_02fe02a8;
LAB_02fe02d0:
    uVar2 = FUN_02ff7cc0(0x3a83126f,param_1[1] + 0x70,param_1[2] + 0x70);
    if ((uVar2 & 1) == 0) {
      return 1;
    }
    if (iVar1 != 8) goto LAB_02fe02f8;
LAB_02fe0320:
    uVar2 = FUN_02ff7cc0(0x3a83126f,param_1[1] + 0x90,param_1[2] + 0x90);
    if ((uVar2 & 1) == 0) {
      return 1;
    }
    if (iVar1 != 10) goto LAB_02fe0348;
LAB_02fe0370:
    uVar2 = FUN_02ff7cc0(0x3a83126f,param_1[1] + 0xb0,param_1[2] + 0xb0);
    if ((uVar2 & 1) == 0) {
      return 1;
    }
    if (iVar1 != 0xc) goto LAB_02fe0398;
LAB_02fe03c0:
    uVar2 = FUN_02ff7cc0(0x3a83126f,param_1[1] + 0xd0,param_1[2] + 0xd0);
    if ((uVar2 & 1) == 0) {
      return 1;
    }
    if (iVar1 == 0xe) goto LAB_02fe0410;
  }
  else {
    uVar2 = FUN_02ff7cc0(0x3a83126f,param_1[1],param_1[2]);
    if ((uVar2 & 1) == 0) {
      return 1;
    }
    if (iVar1 != 1) goto LAB_02fe01e0;
LAB_02fe0208:
    uVar2 = FUN_02ff7cc0(0x3a83126f,param_1[1] + 0x20,param_1[2] + 0x20);
    if ((uVar2 & 1) == 0) {
      return 1;
    }
    if (iVar1 != 3) goto LAB_02fe0230;
LAB_02fe0258:
    uVar2 = FUN_02ff7cc0(0x3a83126f,param_1[1] + 0x40,param_1[2] + 0x40);
    if ((uVar2 & 1) == 0) {
      return 1;
    }
    if (iVar1 != 5) goto LAB_02fe0280;
LAB_02fe02a8:
    uVar2 = FUN_02ff7cc0(0x3a83126f,param_1[1] + 0x60,param_1[2] + 0x60);
    if ((uVar2 & 1) == 0) {
      return 1;
    }
    if (iVar1 != 7) goto LAB_02fe02d0;
LAB_02fe02f8:
    uVar2 = FUN_02ff7cc0(0x3a83126f,param_1[1] + 0x80,param_1[2] + 0x80);
    if ((uVar2 & 1) == 0) {
      return 1;
    }
    if (iVar1 != 9) goto LAB_02fe0320;
LAB_02fe0348:
    uVar2 = FUN_02ff7cc0(0x3a83126f,param_1[1] + 0xa0,param_1[2] + 0xa0);
    if ((uVar2 & 1) == 0) {
      return 1;
    }
    if (iVar1 != 0xb) goto LAB_02fe0370;
LAB_02fe0398:
    uVar2 = FUN_02ff7cc0(0x3a83126f,param_1[1] + 0xc0,param_1[2] + 0xc0);
    if ((uVar2 & 1) == 0) {
      return 1;
    }
    if (iVar1 != 0xd) goto LAB_02fe03c0;
  }
  uVar2 = FUN_02ff7cc0(0x3a83126f,param_1[1] + 0xe0,param_1[2] + 0xe0);
  if ((uVar2 & 1) == 0) {
    return 1;
  }
  if (iVar1 == 0xf) {
    return 0;
  }
LAB_02fe0410:
  uVar2 = FUN_02ff7cc0(0x3a83126f,param_1[1] + 0xf0,param_1[2] + 0xf0);
  if ((uVar2 & 1) == 0) {
    return 1;
  }
  return 0;
}

