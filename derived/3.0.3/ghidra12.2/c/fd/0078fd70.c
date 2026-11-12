
void FUN_0078fd70(undefined8 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  uint *puVar8;
  ushort uVar9;
  uint *puVar10;
  bool bVar11;
  uint *puVar12;
  undefined8 uVar13;
  char *__dest;
  long lVar14;
  long lVar15;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  FUN_00705c50();
  puVar5 = PTR_DAT_04bdf1d8;
  __dest = (char *)param_1[0xc];
  *(undefined1 *)(param_1 + 0x55) = 0;
  param_1[0x56] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x57] = puVar5 + 0x10;
  if (__dest != "XLink") {
    iVar1 = 5;
    if (*(int *)(param_1 + 0xd) < 6) {
      iVar1 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(__dest,"XLink",(long)iVar1);
    __dest[iVar1] = '\0';
  }
  *param_1 = &PTR_LAB_0490d680;
  *(undefined2 *)(param_1 + 0x5b) = *(undefined2 *)param_2;
  *(undefined1 *)((long)param_1 + 0x2da) = *(undefined1 *)((long)param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x2db) = *(undefined1 *)((long)param_2 + 3);
  uVar3 = param_2[1];
  param_1[0x5c] = &PTR_LAB_0490d7e8;
  uVar4 = *(undefined4 *)(PTR_DAT_04bb2f78 + 8);
  *(undefined8 *)((long)param_1 + 0x31c) = *(undefined8 *)PTR_DAT_04bb2f78;
  puVar6 = PTR_PTR_04bb2238;
  *(undefined8 *)((long)param_1 + 0x304) = 0;
  *(undefined8 *)((long)param_1 + 0x30c) = 0;
  *(undefined8 *)((long)param_1 + 0x314) = 0;
  *(undefined4 *)((long)param_1 + 0x324) = uVar4;
  puVar5 = PTR_DAT_04bb2020;
  param_1[0x5f] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  *(undefined1 *)(param_1 + 0x5f) = 1;
  *(undefined1 *)(param_1 + 0x67) = 0;
  *(undefined4 *)(param_1 + 0x60) = 1;
  *(undefined4 *)((long)param_1 + 0x2dc) = uVar3;
  uVar13 = *(undefined8 *)(puVar6 + 8);
  param_1[0x65] = puVar5 + 0x10;
  *(undefined4 *)((long)param_1 + 0x2fc) = 2;
  param_1[0x66] = uVar13;
  puVar5 = PTR_DAT_04bb43c0;
  lVar15 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(param_2);
  lVar14 = *(long *)puVar5;
  if (lVar14 == 0) {
    return;
  }
  lVar15 = *(long *)(lVar15 + 0x57e58);
  uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
  if (*(uint *)(lVar15 + 0x1d8) <= uVar7) {
    return;
  }
  if (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) == 0) {
    return;
  }
  local_48 = 0;
  local_50 = *param_2;
  uStack_4c = param_2[1];
  uVar7 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar5 == 0) {
LAB_00790118:
    puVar8 = (uint *)0x0;
    uVar9 = 0xbc;
    bVar11 = true;
LAB_00790128:
    if (uVar9 != 0) {
      return;
    }
    if (!bVar11) {
LAB_00790178:
      puVar12 = (uint *)(ulong)*puVar8;
      puVar10 = (uint *)((long)puVar8 - (long)puVar12);
      goto LAB_00790180;
    }
  }
  else {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((*(uint *)(lVar14 + 0x1d8) <= uVar7) ||
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_00790118;
    lVar14 = *(long *)PTR_DAT_04bc0428;
    uVar7 = FUN_0277d6c4(param_2);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((*(uint *)(lVar14 + 0x1d8) <= uVar7) ||
       (puVar8 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8), puVar8 == (uint *)0x0
       )) goto LAB_00790118;
    puVar12 = (uint *)(ulong)*puVar8;
    if ((*puVar8 == 0) || (puVar8 == puVar12)) {
LAB_00790080:
      uVar9 = 0;
      uVar7 = *puVar8;
      if ((uVar7 == 0) || (puVar8 == (uint *)(ulong)uVar7)) {
LAB_00790208:
        bVar11 = false;
      }
      else {
        puVar12 = (uint *)((long)puVar8 - (long)(ulong)uVar7);
        uVar9 = 0;
        if (*puVar12 == 0) goto LAB_00790208;
        uVar7 = puVar12[1];
        if ((uVar7 == 0) || ((ulong)(ushort)puVar12[2] == 0)) {
LAB_00790204:
          uVar9 = 0;
          goto LAB_00790208;
        }
        lVar14 = 0xc;
        if (*(char *)((long)puVar12 + 10) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar12 + lVar14 + (ulong)(ushort)puVar12[2] * 8;
        if (lVar14 == 0) goto LAB_00790204;
        uVar2 = 0;
        if ((ulong)uVar7 != 0) {
          uVar2 = (uint)((ulong)((long)puVar8 - lVar14) / (ulong)uVar7);
        }
        if (*puVar12 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if (*(uint *)PTR_DAT_04bc00c8 <= uVar2) goto LAB_00790204;
        uVar9 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2);
        if (uVar9 < 0xbd) goto LAB_00790208;
        bVar11 = false;
        uVar9 = 0;
      }
      goto LAB_00790128;
    }
    puVar10 = (uint *)((long)puVar8 - (long)puVar12);
    if (*puVar10 == 0) goto LAB_00790080;
    uVar7 = puVar10[1];
    if ((uVar7 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
      lVar14 = 0xc;
      if (*(char *)((long)puVar10 + 10) != '\0') {
        lVar14 = 0x1c;
      }
      lVar14 = (long)puVar10 + lVar14 + (ulong)(ushort)puVar10[2] * 8;
      if (lVar14 == 0) goto LAB_00790008;
      uVar2 = 0;
      if ((ulong)uVar7 != 0) {
        uVar2 = (uint)((ulong)((long)puVar8 - lVar14) / (ulong)uVar7);
      }
      if (*puVar10 <= uVar2) {
        uVar2 = 0xffffffff;
      }
      if ((*(uint *)PTR_DAT_04bc00c8 <= uVar2) ||
         (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2) != 1))
      goto LAB_00790008;
      goto LAB_00790178;
    }
LAB_00790008:
    if ((*puVar10 == 0) || ((uVar7 = puVar10[1], uVar7 == 0 || ((ulong)(ushort)puVar10[2] == 0))))
    goto LAB_00790080;
    lVar14 = 0xc;
    if (*(char *)((long)puVar10 + 10) != '\0') {
      lVar14 = 0x1c;
    }
    lVar14 = (long)puVar10 + lVar14 + (ulong)(ushort)puVar10[2] * 8;
    if (lVar14 == 0) goto LAB_00790080;
    uVar2 = 0;
    if ((ulong)uVar7 != 0) {
      uVar2 = (uint)((ulong)((long)puVar8 - lVar14) / (ulong)uVar7);
    }
    if (*puVar10 <= uVar2) {
      uVar2 = 0xffffffff;
    }
    if (((*(uint *)PTR_DAT_04bc00c8 <= uVar2) ||
        (uVar9 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2), 0xbc < uVar9))
       || (uVar9 != 2)) goto LAB_00790080;
LAB_00790180:
    uVar9 = 0;
    if (((int)puVar12 == 0) || (puVar8 == puVar12)) goto LAB_00790144;
    if (*puVar10 != 0) {
      uVar7 = puVar10[1];
      uVar9 = 0;
      if (uVar7 == 0) goto LAB_00790144;
      if ((ulong)(ushort)puVar10[2] != 0) {
        lVar14 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar10 + lVar14 + (ulong)(ushort)puVar10[2] * 8;
        if (lVar14 != 0) {
          uVar2 = 0;
          if ((ulong)uVar7 != 0) {
            uVar2 = (uint)((ulong)((long)puVar8 - lVar14) / (ulong)uVar7);
          }
          if (*puVar10 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < *(uint *)PTR_DAT_04bc0058) &&
             (uVar9 = *(ushort *)(*(long *)(PTR_DAT_04bc0058 + 8) + (long)(int)uVar2 * 2), uVar9 < 4
             )) goto LAB_00790144;
        }
      }
    }
  }
  uVar9 = 0;
LAB_00790144:
  if ((uVar9 & 0xfffe) == 2) {
    *(undefined1 *)(param_1 + 0x67) = 1;
  }
  return;
}

