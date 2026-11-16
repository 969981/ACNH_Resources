
undefined8 FUN_02918030(undefined4 param_1,undefined8 param_2,undefined4 *param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if ((DAT_055c9188 & 1) != 0) {
    return 0;
  }
  uVar4 = FUN_02930ed0(&DAT_055c10d0,param_1,param_2);
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  if ((DAT_05292338 != 0) && ((long)(short)DAT_04c487d4 != 0xffffffffffffffff)) {
    puVar1 = &DAT_055c11c8 + ((long)(short)DAT_04c487d4 & 0xffffffffU) * 2;
    if (0xff < DAT_04c487d4) {
      puVar1 = &DAT_055c11c8;
    }
    if (((*puVar1 >> 0x15 & 1) != 0) && (*(char *)(DAT_05292338 + 0xf5c) != '\0')) {
      if (DAT_05694df8 == 0) {
        return 1;
      }
      lVar5 = *(long *)(DAT_05694df8 + 8);
      if (lVar5 == 0) {
        return 1;
      }
      if (*(int *)(DAT_05694df8 + 0x10) != 0) {
        return 1;
      }
      uVar7 = param_3[3];
      uVar8 = param_3[4];
      uVar2 = param_3[2];
      uVar3 = *(undefined1 *)(param_3 + 5);
      uVar6 = *(undefined1 *)((long)param_3 + 0x15);
      *(undefined8 *)(lVar5 + 0x338) = 0x800000000;
      *(undefined4 *)(lVar5 + 0x340) = uVar2;
      *(undefined4 *)(lVar5 + 0x348) = uVar8;
      *(undefined1 *)(lVar5 + 0x34c) = uVar3;
      *(undefined4 *)(lVar5 + 0x344) = uVar7;
      goto LAB_02918178;
    }
  }
  if (DAT_05694df8 == 0) {
    return 1;
  }
  lVar5 = *(long *)(DAT_05694df8 + 8);
  if (lVar5 == 0) {
    return 1;
  }
  if (*(int *)(DAT_05694df8 + 0x10) != 0) {
    return 1;
  }
  *(undefined4 *)(lVar5 + 0x338) = *param_3;
  *(undefined4 *)(lVar5 + 0x33c) = param_3[1];
  *(undefined4 *)(lVar5 + 0x340) = param_3[2];
  *(undefined4 *)(lVar5 + 0x344) = param_3[3];
  *(undefined4 *)(lVar5 + 0x348) = param_3[4];
  *(undefined1 *)(lVar5 + 0x34c) = *(undefined1 *)(param_3 + 5);
  uVar6 = *(undefined1 *)((long)param_3 + 0x15);
LAB_02918178:
  *(undefined1 *)(lVar5 + 0x34d) = uVar6;
  return 1;
}

