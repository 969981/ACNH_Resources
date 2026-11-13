
void FUN_0131daa0(long param_1)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  uint *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined4 local_48 [2];
  uint *local_40;
  int local_34;
  
  puVar6 = PTR_DAT_04bb2720;
  lVar10 = *(long *)PTR_DAT_04bb2720;
  if (lVar10 == 0) {
    puVar14 = &DAT_055c04a0;
    lVar10 = *(long *)(param_1 + 0x1d0);
    lVar2 = DAT_04cfae30;
  }
  else {
    puVar14 = &DAT_055c04a0;
    if (*(long *)(lVar10 + 0x330) != 0) {
      puVar14 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar10 + 0x338));
      iVar7 = FUN_006bd550(*puVar14,0);
      puVar14 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar7 != 0x758f7eaf) {
        puVar14 = &DAT_055c04a0;
      }
    }
    lVar10 = *(long *)(param_1 + 0x1d0);
    lVar2 = DAT_04cfae30;
  }
  DAT_04cfae30 = lVar2;
  if (lVar10 != 0) {
    if (lVar2 == 0) {
      return;
    }
    iVar7 = *(int *)(lVar10 + 0x30);
    iVar4 = *(int *)(lVar10 + 0x34);
    iVar3 = *(int *)(lVar10 + 0x20);
    iVar5 = *(int *)(lVar10 + 0x24);
    *(undefined1 *)(lVar2 + 0x1181) = 1;
    *(int *)(lVar2 + 0x1184) = (iVar7 - iVar3) + 1;
    *(int *)(lVar2 + 0x1188) = (iVar4 - iVar5) + 1;
    return;
  }
  local_34 = *(int *)(puVar14 + 7);
  uVar11 = 0;
  do {
    uVar9 = (uint)uVar11;
    piVar1 = (int *)((long)(PTR_DAT_04bbbf90 + 8) + uVar11 * 4);
    if (0x38 < uVar9) {
      piVar1 = (int *)(PTR_DAT_04bbbf90 + 8);
    }
    if (*piVar1 == local_34) goto LAB_0131dbb0;
    uVar13 = 0x39;
    if ((int)uVar9 < 0x39) {
      uVar13 = uVar9 + 1;
    }
    uVar11 = (ulong)uVar13;
  } while (uVar13 != 0x39);
  uVar9 = 0;
LAB_0131dbb0:
  if (DAT_04c487d4 != -1) {
    local_48[0] = 3;
    puVar12 = (uint *)((long)PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 2 * 4);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar12 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar12 >> 3 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_1 + 0x10);
      return;
    }
  }
  if (uVar9 != 0) {
    puVar14 = (undefined8 *)(param_1 + 8) + uVar9;
    if (0x38 < uVar9) {
      puVar14 = (undefined8 *)(param_1 + 8);
    }
    *(undefined8 *)(param_1 + 0x1d0) = *puVar14;
    return;
  }
  if (((*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x10e0fba8) && (*(long *)puVar6 != 0)) &&
     (lVar10 = *(long *)(*(long *)puVar6 + 0x330), lVar10 != 0)) {
    lVar10 = *(long *)(lVar10 + 0xd0);
  }
  else {
    lVar10 = 0;
  }
  uVar9 = (uint)DAT_04c487d4;
  if (uVar9 == 0xffffffff) {
LAB_0131dd20:
    if (lVar10 == 0) goto LAB_0131dd24;
  }
  else {
    puVar12 = (uint *)((long)PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 2 * 4);
    if (0xff < uVar9) {
      puVar12 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar12 >> 0x19 & 1) != 0) {
      if ((*(long *)puVar6 == 0) || (lVar10 = *(long *)(*(long *)puVar6 + 0x330), lVar10 == 0)) {
        lVar10 = 0;
      }
      else {
        lVar10 = *(long *)(lVar10 + 0xd0);
      }
    }
    local_48[0] = 0x1e;
    puVar12 = (uint *)((long)PTR_DAT_04bc39f8 + (ulong)uVar9 * 2 * 4);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar12 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar12 >> 0x1e & 1) == 0) goto LAB_0131dd20;
    if ((*(long *)puVar6 != 0) && (lVar10 = *(long *)(*(long *)puVar6 + 0x330), lVar10 != 0)) {
      lVar10 = *(long *)(lVar10 + 0xd0);
      goto LAB_0131dd20;
    }
LAB_0131dd24:
    lVar10 = *(long *)(DAT_0519d040 + 0x20);
  }
  FUN_01272190(local_48,&local_34);
  if (local_40 == (uint *)0x0) {
    uVar8 = 0;
    goto LAB_0131de08;
  }
  uVar13 = *local_40;
  uVar9 = 0;
  if ((uVar13 != 0) && (local_40 != (uint *)(ulong)uVar13)) {
    puVar12 = (uint *)((long)local_40 - (long)(ulong)uVar13);
    uVar9 = 0;
    if (*puVar12 != 0) {
      uVar9 = puVar12[1];
      if ((uVar9 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
        lVar2 = 0xc;
        if (*(char *)((long)puVar12 + 10) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar12 + lVar2 + (ulong)(ushort)puVar12[2] * 8;
        if (lVar2 != 0) {
          uVar13 = 0;
          if ((ulong)uVar9 != 0) {
            uVar13 = (uint)((ulong)((long)local_40 - lVar2) / (ulong)uVar9);
          }
          if (*puVar12 <= uVar13) {
            uVar13 = 0xffffffff;
          }
          if ((uVar13 < DAT_05160098) &&
             (uVar9 = (uint)*(ushort *)(DAT_051600a0 + (long)(int)uVar13 * 2), uVar9 < 0xe))
          goto LAB_0131ddd8;
        }
      }
      uVar9 = 0;
    }
  }
LAB_0131ddd8:
  if (0xd < uVar9) {
    uVar9 = 0;
  }
  uVar8 = FUN_012aa334((&PTR_DAT_0498df78)[(int)uVar9],lVar10,local_48);
LAB_0131de08:
  *(undefined8 *)(param_1 + 0x1d0) = uVar8;
  FUN_01364c00(uVar8,*(undefined4 *)(puVar14 + 7));
  return;
}

