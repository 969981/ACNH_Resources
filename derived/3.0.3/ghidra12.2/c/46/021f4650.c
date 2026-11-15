
bool FUN_021f4650(undefined4 *param_1,long param_2,ushort *param_3,undefined1 *param_4)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  long lVar16;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  long local_d8;
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  undefined *puStack_c0;
  undefined8 local_b8;
  undefined *puStack_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined *puStack_70;
  undefined8 local_68;
  undefined *puStack_60;
  undefined8 local_58;
  
  puVar4 = PTR_DAT_04bb43c0;
  local_58 = 0x3ffffffff;
  puVar15 = auStack_90;
  puStack_c0 = PTR_DAT_04bb2010 + 0x10;
  local_68 = 0x300000003;
  local_c8 = 0x500000002;
  local_88 = 0x300000002;
  uStack_98 = 0x2ffffffff;
  local_78 = 0xffffffff00000002;
  local_b8 = 0xffffffff00000002;
  local_a8 = 0x200000005;
  if (3 < (*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x10)) + 1) {
    if (3 < (*(int *)(param_2 + 0x24) - *(int *)(param_2 + 0x14)) + 1) {
      puVar15 = auStack_d0;
    }
  }
  local_d8 = 0;
  local_e8 = PTR_DAT_04bc0510 + 0x10;
  local_e0 = *param_1;
  uStack_dc = param_1[1];
  lVar16 = *(long *)PTR_DAT_04bb43c0;
  puStack_b0 = puStack_c0;
  local_a0 = puStack_c0;
  puStack_80 = puStack_c0;
  puStack_70 = puStack_c0;
  puStack_60 = puStack_c0;
  uVar5 = FUN_0277d6c4(&local_e0);
  if (*(long *)puVar4 != 0) {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar16 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar16 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(param_1);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if (uVar5 < *(uint *)(lVar16 + 0x1d8)) {
        lVar16 = *(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar5 * 8);
        if (lVar16 != 0) {
          local_d8 = lVar16;
        }
      }
    }
  }
  iVar6 = FUN_01ae98d0(&local_e8);
  puVar14 = puVar15;
  if (iVar6 == 0) {
LAB_021f47d4:
    lVar16 = 0x18;
    if (iVar6 != 0) {
      lVar16 = 8;
    }
    iVar11 = *(int *)(param_2 + 0x14);
    lVar12 = 0x1c;
    if (iVar6 != 0) {
      lVar12 = 0xc;
    }
    uVar2 = *param_3;
    uVar9 = (uint)uVar2;
    uVar5 = *(int *)(puVar14 + 8) + *(int *)(param_2 + 0x10);
    uVar7 = 0;
    uVar8 = *(int *)(puVar15 + lVar16) + *(int *)(param_2 + 0x10);
    uVar10 = (uint)uVar2;
    uVar13 = (uVar10 + param_3[6]) - 1;
    if (((uint)uVar2 <= (uVar5 & 0xffff)) && ((uVar5 & 0xffff) <= (uVar13 & 0xffff))) {
      uVar7 = 0;
      uVar1 = *(int *)(puVar14 + 0xc) + iVar11;
      uVar3 = param_3[1];
      if (((uint)uVar3 <= (uVar1 & 0xffff)) &&
         ((uVar1 & 0xffff) <= (((uint)uVar3 + (uint)param_3[8]) - 1 & 0xffff))) {
        uVar7 = (uVar5 - uVar10) + *(int *)(*(long *)(param_3 + 0x20) + 0x1c) * (uVar1 - uVar3);
        if ((*(uint *)(*(long *)(*(long *)(param_3 + 0x20) + 0x10) + (long)((int)uVar7 >> 5) * 4) >>
             (ulong)(uVar7 & 0x1f) & 1) == 0) {
LAB_021f49d8:
          uVar7 = 0;
        }
        else {
          uVar7 = 1;
          if ((*(int *)(DAT_053e0208 + 0x2e18) <= (int)uVar5) &&
             ((int)uVar5 <= *(int *)(DAT_053e0208 + 0x2e28))) {
            if ((int)uVar1 < *(int *)(DAT_053e0208 + 0x2e1c)) {
              uVar7 = 1;
              if ((uVar8 & 0xffff) < (uint)uVar2) goto LAB_021f4a9c;
            }
            else {
              uVar7 = (uint)(*(int *)(DAT_053e0208 + 0x2e2c) < (int)uVar1);
              if ((uVar8 & 0xffff) < uVar10) goto LAB_021f4a9c;
            }
            goto LAB_021f49e4;
          }
        }
      }
    }
LAB_021f49dc:
    if ((uVar8 & 0xffff) < uVar9) goto LAB_021f4a9c;
  }
  else {
    if (iVar6 == 2) {
      puVar14 = puVar15 + 0x10;
      goto LAB_021f47d4;
    }
    if (iVar6 == 1) {
      puVar14 = puVar15 + 0x20;
    }
    else {
      if (iVar6 != 3) {
        uVar7 = 0;
        goto LAB_021f4a9c;
      }
      puVar14 = puVar15 + 0x30;
    }
    lVar16 = 0x38;
    if (iVar6 != 1) {
      lVar16 = 0x28;
    }
    iVar11 = *(int *)(param_2 + 0x14);
    lVar12 = 0x3c;
    if (iVar6 != 1) {
      lVar12 = 0x2c;
    }
    uVar2 = *param_3;
    uVar9 = (uint)uVar2;
    uVar5 = *(int *)(puVar14 + 8) + *(int *)(param_2 + 0x10);
    uVar7 = 0;
    uVar8 = *(int *)(puVar15 + lVar16) + *(int *)(param_2 + 0x10);
    uVar10 = (uint)uVar2;
    uVar13 = (uVar10 + param_3[6]) - 1;
    if (((uVar5 & 0xffff) < (uint)uVar2) || ((uVar13 & 0xffff) < (uVar5 & 0xffff)))
    goto LAB_021f49dc;
    uVar7 = 0;
    uVar1 = *(int *)(puVar14 + 0xc) + iVar11;
    uVar3 = param_3[1];
    if (((uVar1 & 0xffff) < (uint)uVar3) ||
       ((((uint)uVar3 + (uint)param_3[8]) - 1 & 0xffff) < (uVar1 & 0xffff))) goto LAB_021f49dc;
    uVar7 = (uVar5 - uVar10) + *(int *)(*(long *)(param_3 + 0x20) + 0x1c) * (uVar1 - uVar3);
    if ((*(uint *)(*(long *)(*(long *)(param_3 + 0x20) + 0x10) + (long)((int)uVar7 >> 5) * 4) >>
         (ulong)(uVar7 & 0x1f) & 1) == 0) goto LAB_021f49d8;
    uVar7 = 1;
    if (((int)uVar5 < *(int *)(DAT_053e0208 + 0x2e18)) ||
       (*(int *)(DAT_053e0208 + 0x2e28) < (int)uVar5)) goto LAB_021f49dc;
    if ((int)uVar1 < *(int *)(DAT_053e0208 + 0x2e1c)) {
      uVar7 = 1;
      if ((uVar8 & 0xffff) < (uint)uVar2) goto LAB_021f4a9c;
    }
    else {
      uVar7 = (uint)(*(int *)(DAT_053e0208 + 0x2e2c) < (int)uVar1);
      if ((uVar8 & 0xffff) < uVar10) goto LAB_021f4a9c;
    }
  }
LAB_021f49e4:
  if ((uVar8 & 0xffff) <= (uVar13 & 0xffff)) {
    uVar5 = *(int *)(puVar15 + lVar12) + iVar11;
    uVar2 = param_3[1];
    if ((((uint)uVar2 <= (uVar5 & 0xffff)) &&
        ((uVar5 & 0xffff) <= (((uint)uVar2 + (uint)param_3[8]) - 1 & 0xffff))) &&
       (uVar13 = (uVar8 - uVar9) + *(int *)(*(long *)(param_3 + 0x20) + 0x1c) * (uVar5 - uVar2),
       (*(uint *)(*(long *)(*(long *)(param_3 + 0x20) + 0x10) + (long)((int)uVar13 >> 5) * 4) >>
        (ulong)(uVar13 & 0x1f) & 1) != 0)) {
      if ((((int)uVar8 < *(int *)(DAT_053e0208 + 0x2e18)) ||
          (*(int *)(DAT_053e0208 + 0x2e28) < (int)uVar8)) ||
         ((int)uVar5 < *(int *)(DAT_053e0208 + 0x2e1c))) {
        uVar7 = uVar7 | 4;
      }
      else if (*(int *)(DAT_053e0208 + 0x2e2c) < (int)uVar5) {
        uVar7 = uVar7 | 4;
      }
    }
  }
LAB_021f4a9c:
  iVar6 = (uVar7 >> 2) + (uVar7 & 0x33333333);
  if (iVar6 != 0) {
    *param_4 = (char)uVar7;
  }
  return iVar6 != 0;
}

