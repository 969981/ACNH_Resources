
undefined8 FUN_01e7b914(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  uint *puVar9;
  
  if (*(int *)(param_1 + 0xafc4) == 8) {
    return 0;
  }
  if (1 < *(int *)(*(long *)(param_1 + 8) + 0x750) - 1U) {
    return 0;
  }
  if (DAT_04c487d4 == -1) {
    return 0;
  }
  puVar9 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
  if (0xff < (uint)(int)DAT_04c487d4) {
    puVar9 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar9 >> 1 & 1) == 0) {
    return 0;
  }
  uVar3 = FUN_00a86724(DAT_04da7238);
  puVar2 = PTR_DAT_04bb3968;
  if (3 < uVar3) {
    return 0;
  }
  lVar8 = *(long *)PTR_DAT_04bb3968;
  if (lVar8 != 0) {
    uVar3 = 8;
    if ((int)*(uint *)(lVar8 + 0x16ca0) < 1) {
      if ((((*(long *)(lVar8 + 0x16b90) != 0) &&
           (puVar9 = *(uint **)(*(long *)(lVar8 + 0x16b90) + 8), puVar9 != (uint *)0x0)) &&
          ((*(uint *)(lVar8 + 0x16ba8) < 9 || (*(char *)(*(long *)(lVar8 + 0x16bb0) + 8) != '\0'))))
         && (((8 < *puVar9 && (puVar9[1] != 0)) && ((ushort)puVar9[2] != 0)))) {
        iVar4 = 0xc;
        if (*(char *)((long)puVar9 + 10) != '\0') {
          iVar4 = 0x1c;
        }
        puVar5 = (undefined4 *)
                 ((ulong)(puVar9[1] * 8 + (uint)(ushort)puVar9[2] * 8 + iVar4) + (long)puVar9);
        goto joined_r0x01e7ba70;
      }
    }
    else if (8 < *(uint *)(lVar8 + 0x16ca0)) {
      if (*(uint *)(lVar8 + 0x16c90) < 9) {
        uVar3 = 0;
      }
      puVar5 = *(undefined4 **)(*(long *)(lVar8 + 0x16c98) + (ulong)uVar3 * 8);
joined_r0x01e7ba70:
      if (puVar5 != (undefined4 *)0x0) goto LAB_01e7ba7c;
    }
  }
  puVar5 = &DAT_053dce00;
LAB_01e7ba7c:
  bVar1 = *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
  if (bVar1 < 5) {
    iVar4 = 5;
  }
  else if (bVar1 < 8) {
    iVar4 = 0;
  }
  else if (bVar1 < 0xc) {
    iVar4 = 1;
  }
  else if (bVar1 < 0x10) {
    iVar4 = 2;
  }
  else {
    iVar4 = 3;
    if (0x12 < bVar1) {
      iVar4 = 4;
    }
  }
  iVar4 = (*(code *)(&PTR_LAB_04a71bb8)[(long)iVar4 * 2])(puVar5);
  if ((iVar4 == 0) &&
     (uVar6 = FUN_021fe3b0(*(undefined4 *)(*(long *)(param_1 + 8) + 0x508)), (uVar6 & 1) != 0)) {
    iVar4 = FUN_01e2caa0(100);
    piVar7 = (int *)(**(code **)(*(long *)(*(long *)puVar2 + 0x2178) + 0xf0))
                              (*(long *)puVar2 + 0x2178);
    if (iVar4 < *piVar7) {
      return 1;
    }
  }
  return 0;
}

