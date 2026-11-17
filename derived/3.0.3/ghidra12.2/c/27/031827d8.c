
void FUN_031827d8(int *param_1,long *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  uint *puVar12;
  uint *puVar13;
  undefined4 local_4c [3];
  undefined4 local_28;
  undefined4 uStack_24;
  
  puVar1 = (undefined8 *)PTR_DAT_04bc3a80;
  sVar4 = *(short *)PTR_DAT_04bb6298;
  if (sVar4 == -1) {
LAB_031828a4:
    iVar11 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
    if (iVar11 == -0x10e0fba8 || *(long *)PTR_DAT_04bb59d8 == 0) {
      return;
    }
    lVar8 = *(long *)PTR_DAT_04bb2720;
    if (lVar8 == 0) {
      puVar7 = &DAT_055c04a0;
    }
    else {
      puVar7 = &DAT_055c04a0;
      if (*(long *)(lVar8 + 0x330) != 0) {
        puVar7 = (undefined8 *)
                 (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                           (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar8 + 0x338));
        iVar5 = FUN_006bd550(*puVar7,0);
        iVar11 = *(int *)((long)puVar1 + 0x38);
        if (iVar5 != 0x758f7eaf) {
          puVar1 = &DAT_055c04a0;
        }
        puVar7 = puVar1;
      }
    }
    if (*(int *)(puVar7 + 7) != -0x6efba09b) {
      return;
    }
  }
  else {
    local_4c[0] = 3;
    puVar12 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar12 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar12 >> 3 & 1) == 0) {
      local_4c[0] = 0x11;
      puVar12 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
      if (0xff < (uint)(int)sVar4) {
        puVar12 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar12 >> 0x11 & 1) == 0) goto LAB_031828a4;
    }
    iVar11 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
  }
  if (iVar11 == -0x10e0fba8) {
    return;
  }
  lVar8 = FUN_0251b3b0(param_2[1],0);
  lVar9 = FUN_0251bdc4(param_2[1],0);
  if (lVar8 == 0) {
    return;
  }
  if (lVar9 == 0) {
    return;
  }
  uVar10 = FUN_02520240(local_4c,lVar8,lVar9 + 4);
  if ((uVar10 & 1) == 0) {
    return;
  }
  lVar8 = *(long *)PTR_DAT_04bb4208;
  local_28 = *(undefined4 *)(*param_2 + 8);
  uStack_24 = *(undefined4 *)(*param_2 + 0xc);
  uVar6 = FUN_0277d6c4(&local_28);
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0xb50);
  if ((((uVar6 < *(uint *)(lVar8 + 0xb30)) &&
       (puVar12 = *(uint **)(*(long *)(lVar8 + 0xb38) + (long)(int)uVar6 * 8),
       puVar12 != (uint *)0x0)) && (uVar6 = *puVar12, uVar6 != 0)) &&
     (puVar12 != (uint *)(ulong)uVar6)) {
    puVar13 = (uint *)((long)puVar12 - (long)(ulong)uVar6);
    if (((*puVar13 != 0) && (uVar6 = puVar13[1], uVar6 != 0)) && ((ulong)(ushort)puVar13[2] != 0)) {
      lVar8 = 0xc;
      if (*(char *)((long)puVar13 + 10) != '\0') {
        lVar8 = 0x1c;
      }
      lVar8 = (long)puVar13 + lVar8 + (ulong)(ushort)puVar13[2] * 8;
      if (lVar8 != 0) {
        uVar2 = 0;
        if ((ulong)uVar6 != 0) {
          uVar2 = (uint)((ulong)((long)puVar12 - lVar8) / (ulong)uVar6);
        }
        if (*puVar13 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if (((uVar2 < *(uint *)PTR_DAT_04bc3be8) &&
            (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc3be8 + 8) + (long)(int)uVar2 * 2), uVar3 < 2)
            ) && (uVar3 == 1)) {
          iVar11 = 0x2b;
          goto LAB_03182a68;
        }
      }
    }
  }
  iVar11 = 0x29;
LAB_03182a68:
  if (((((*param_1 != iVar11) && (param_1[1] != iVar11)) && (param_1[2] != iVar11)) &&
      ((param_1[3] != iVar11 && (param_1[4] != iVar11)))) &&
     ((param_1[5] != iVar11 && (param_1[6] != iVar11)))) {
    uVar6 = param_1[7];
    uVar10 = (ulong)uVar6;
    if (6 < uVar6) {
      uVar10 = 0;
    }
    param_1[7] = uVar6 + 1;
    param_1[uVar10] = iVar11;
  }
  return;
}

