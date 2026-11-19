
void FUN_03845528(long param_1)

{
  int *piVar1;
  long lVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  piVar1 = (int *)(DAT_055f6860 + 0x63804);
  uVar4 = *(uint *)(FUN_0011e5e0 + DAT_055f6860);
  if ((uVar4 != 0xffffffff) && (*(long *)(DAT_055f6860 + 0x11e610) != 0)) {
    if (*(uint *)(DAT_055f6860 + 0x11e608) <= uVar4) {
      uVar4 = 0;
    }
    lVar2 = *(long *)(DAT_055f6860 + 0x11e610) + (long)(int)uVar4 * 0x80;
    uVar5 = *(uint *)(lVar2 + 8);
    uVar4 = uVar5 - 0x20;
    if ((int)uVar5 < 0x20) {
      uVar4 = uVar5;
    }
    uVar6 = 0x1ffbf;
    if ((int)uVar5 < 0x20) {
      uVar6 = 0xfffffff8;
    }
    *(byte *)(param_1 + 0x34) = (byte)(uVar6 >> (ulong)(uVar4 & 0x1f)) & 1;
    uVar4 = *(uint *)(lVar2 + 8);
    pbVar3 = (byte *)(*(long *)PTR_DAT_04bb28b0 + 0x1f60) + (ulong)uVar4 * 0x50;
    if (0x32 < uVar4) {
      pbVar3 = (byte *)(*(long *)PTR_DAT_04bb28b0 + 0x1f60);
    }
    *(bool *)(param_1 + 0x35) = pbVar3[1] == 1;
    *(byte *)(param_1 + 0x36) = *pbVar3 >> 5 & 1;
  }
  *(bool *)(param_1 + 0x37) = *piVar1 == 4;
  lVar2 = DAT_05aebb78;
  if (DAT_05aebb78 == 0) {
    *(undefined8 *)(param_1 + 0x698) = 0x3f800000;
    *(undefined1 **)(param_1 + 0x6a0) = &DAT_3f8000003f800000;
  }
  else {
    if ((*(int **)(DAT_05aebb78 + 0x10) == (int *)0x0) || (**(int **)(DAT_05aebb78 + 0x10) != 2)) {
      uVar8 = 0x3f800000;
      uVar7 = 0;
    }
    else {
      uVar7 = 0x3ec0fef1;
      uVar8 = 0x3f64dd2f;
    }
    *(undefined4 *)(param_1 + 0x698) = uVar8;
    *(undefined4 *)(param_1 + 0x69c) = uVar7;
    *(undefined1 **)(param_1 + 0x6a0) = &DAT_3f8000003f800000;
    if ((*(int **)(lVar2 + 0x10) != (int *)0x0) && (**(int **)(lVar2 + 0x10) == 2)) {
      uVar7 = 0x3ec0fef1;
      uVar8 = 0x3f64dd2f;
      goto LAB_038456bc;
    }
  }
  uVar7 = 0;
  uVar8 = 0x3f800000;
LAB_038456bc:
  *(undefined4 *)(param_1 + 0x6b0) = uVar8;
  *(undefined4 *)(param_1 + 0x6b4) = uVar7;
  *(undefined1 **)(param_1 + 0x6b8) = &DAT_3f8000003f800000;
  return;
}

