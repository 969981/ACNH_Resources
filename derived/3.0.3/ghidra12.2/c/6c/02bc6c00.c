
void FUN_02bc6c00(long param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  undefined4 uVar11;
  long lVar12;
  byte bVar13;
  ulong uVar14;
  int *piVar15;
  ulong uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  int *piVar23;
  undefined *local_98;
  char *pcStack_90;
  undefined *local_88;
  undefined1 *puStack_80;
  byte local_78;
  undefined8 local_70;
  
  puVar7 = PTR_DAT_04bc4d98;
  puVar1 = (uint *)(param_1 + 0x1c1a8);
  iVar4 = *(int *)(param_1 + 0x1c1ac);
  if (iVar4 == -1) {
    return;
  }
  lVar21 = *(long *)(*(long *)(param_1 + 0x210) + 0x590);
  if (lVar21 == 0) goto LAB_02bc7088;
  piVar23 = (int *)(param_1 + 0x1c200);
  iVar10 = *piVar23;
  if (iVar10 == iVar4) {
    lVar12 = 0;
    piVar15 = piVar23;
LAB_02bc6c94:
    *(undefined4 *)(param_1 + 0x1c1b8 + lVar12 * 4 + 0x14) = 0xffffffff;
    FUN_02bc30b0(param_1 + 0x1c1b8,lVar21);
    *piVar15 = -1;
  }
  else {
    piVar15 = (int *)(param_1 + 0x1c204);
    iVar6 = *piVar15;
    if (iVar6 == iVar4) {
      lVar12 = 1;
      goto LAB_02bc6c94;
    }
    lVar12 = 2;
    piVar15 = (int *)(param_1 + 0x1c208);
    if (*piVar15 == iVar4) goto LAB_02bc6c94;
    bVar8 = -1 < iVar10;
    uVar19 = 1;
    if (!bVar8 || iVar6 >= 0) {
      uVar19 = ~(iVar10 >> 0x1f);
    }
    uVar2 = 2;
    if (bVar8 == (bVar8 && iVar6 < 0) || -1 < *piVar15) {
      uVar2 = uVar19;
    }
    if (-1 < (int)uVar2) {
      iVar10 = *(int *)(param_1 + 0x1c1cc + (ulong)uVar2 * 4);
      if ((-1 < iVar10) && (iVar10 != iVar4)) {
        if (iVar10 < *(int *)(lVar21 + 0x3d4)) {
          iVar6 = *(int *)(lVar21 + 0x2e8);
          iVar18 = 0;
          if (iVar6 != 0) {
            iVar18 = iVar10 / iVar6;
          }
          iVar17 = *(int *)(lVar21 + 0x430) - *(int *)(lVar21 + 0x438);
          if ((*(byte *)(lVar21 + 1000) >> 1 & 1) != 0) {
            uVar5 = *(uint *)(lVar21 + 0x434);
            uVar19 = 0;
            if ((int)uVar5 < iVar17) {
              uVar19 = ~uVar5;
            }
            if (iVar17 < 0) {
              uVar19 = uVar5 + 1;
            }
            iVar17 = uVar19 + iVar17;
          }
          uVar19 = (iVar10 - iVar18 * iVar6) + (iVar18 - iVar17) * iVar6;
          uVar5 = *(uint *)(lVar21 + 0x208);
          bVar9 = (int)uVar19 < 0;
          bVar8 = (int)uVar5 <= (int)uVar19;
          if (bVar9 || bVar8) {
            uVar19 = 0xffffffff;
          }
          if ((((bVar9 || bVar8) || (int)uVar5 <= (int)uVar19) || uVar5 < uVar19) ||
              ((!bVar9 && !bVar8) && (int)uVar19 < (int)uVar5) && uVar5 == uVar19)
          goto LAB_02bc6ff0;
          puVar22 = *(undefined8 **)(*(long *)(lVar21 + 0x210) + (ulong)uVar19 * 8);
        }
        else {
LAB_02bc6ff0:
          puVar22 = (undefined8 *)0x0;
        }
        if (((*PTR_DAT_04bc4d98 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar10 != 0)) {
          *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc4d98);
        }
        if ((puVar22 != (undefined8 *)0x0) &&
           (uVar14 = (**(code **)*puVar22)(puVar22,PTR_DAT_04bc4d90), (uVar14 & 1) != 0)) {
          FUN_030bffe0(puVar22,0);
        }
      }
      if (-1 < iVar4) {
        if (iVar4 < *(int *)(lVar21 + 0x3d4)) {
          iVar10 = *(int *)(lVar21 + 0x2e8);
          iVar6 = 0;
          if (iVar10 != 0) {
            iVar6 = iVar4 / iVar10;
          }
          iVar18 = *(int *)(lVar21 + 0x430) - *(int *)(lVar21 + 0x438);
          if ((*(byte *)(lVar21 + 1000) >> 1 & 1) != 0) {
            uVar5 = *(uint *)(lVar21 + 0x434);
            uVar19 = 0;
            if ((int)uVar5 < iVar18) {
              uVar19 = ~uVar5;
            }
            if (iVar18 < 0) {
              uVar19 = uVar5 + 1;
            }
            iVar18 = uVar19 + iVar18;
          }
          uVar19 = (iVar4 - iVar6 * iVar10) + (iVar6 - iVar18) * iVar10;
          uVar5 = *(uint *)(lVar21 + 0x208);
          bVar9 = (int)uVar19 < 0;
          bVar8 = (int)uVar5 <= (int)uVar19;
          if (bVar9 || bVar8) {
            uVar19 = 0xffffffff;
          }
          if ((((bVar9 || bVar8) || (int)uVar5 <= (int)uVar19) || uVar5 < uVar19) ||
              ((!bVar9 && !bVar8) && (int)uVar19 < (int)uVar5) && uVar5 == uVar19)
          goto LAB_02bc7164;
          puVar22 = *(undefined8 **)(*(long *)(lVar21 + 0x210) + (ulong)uVar19 * 8);
        }
        else {
LAB_02bc7164:
          puVar22 = (undefined8 *)0x0;
        }
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar10 != 0)) {
          *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc4d98);
        }
        if ((puVar22 != (undefined8 *)0x0) &&
           (uVar14 = (**(code **)*puVar22)(puVar22,PTR_DAT_04bc4d90), (uVar14 & 1) != 0)) {
          FUN_030bffe0(puVar22,1);
        }
        *(int *)(param_1 + 0x1c1cc + (ulong)uVar2 * 4) = iVar4;
      }
      piVar23[uVar2] = *(int *)(param_1 + 0x1c1ac);
    }
  }
  iVar4 = -((int)~*(uint *)(param_1 + 0x1c200) >> 0x1f) -
          ((int)~*(uint *)(param_1 + 0x1c204) >> 0x1f);
  if (*(int *)(lVar21 + 0x208) < 1) {
LAB_02bc6d0c:
    iVar10 = -1;
  }
  else {
    lVar12 = **(long **)(lVar21 + 0x210);
    if (lVar12 == 0) goto LAB_02bc6d0c;
    lVar20 = 0;
    iVar10 = -1;
    do {
      if ((*(long **)(lVar21 + 0x210))[lVar20] == lVar12) {
        iVar10 = (int)lVar20;
        break;
      }
      lVar20 = lVar20 + 1;
    } while (*(int *)(lVar21 + 0x208) != (int)lVar20);
  }
  iVar6 = (int)~*(uint *)(param_1 + 0x1c208) >> 0x1f;
  uVar14 = (ulong)*puVar1;
  if (*puVar1 != 0) {
    if (iVar4 - iVar6 == 3) {
      uVar16 = 0;
      do {
        lVar12 = 0;
        if (((-1 < (int)uVar16) && ((int)uVar16 < (int)*(uint *)(lVar21 + 0x208))) &&
           (uVar16 < *(uint *)(lVar21 + 0x208))) {
          lVar12 = *(long *)(*(long *)(lVar21 + 0x210) + uVar16 * 8);
        }
        if (((lVar12 != 0) && (uVar16 != *(uint *)(param_1 + 0x1c200))) &&
           ((uVar16 != *(uint *)(param_1 + 0x1c204) &&
            ((uVar16 != *(uint *)(param_1 + 0x1c208) &&
             (uVar16 != (uint)(*(int *)(param_1 + 0x1c1ac) + iVar10))))))) {
          bVar13 = *(byte *)(lVar12 + 0x2c2) & 0xfe;
          if ((*(byte *)(lVar12 + 0x2c3) & 1) != 0) {
            bVar13 = *(byte *)(lVar12 + 0x2c2) | 2;
          }
          *(byte *)(lVar12 + 0x2c2) = bVar13;
          uVar14 = (ulong)*puVar1;
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar14);
    }
    else {
      uVar16 = 0;
      do {
        lVar12 = 0;
        if (((-1 < (int)uVar16) && ((int)uVar16 < (int)*(uint *)(lVar21 + 0x208))) &&
           (uVar16 < *(uint *)(lVar21 + 0x208))) {
          lVar12 = *(long *)(*(long *)(lVar21 + 0x210) + uVar16 * 8);
        }
        if (((lVar12 != 0) && (uVar16 != *(uint *)(param_1 + 0x1c200))) &&
           ((uVar16 != *(uint *)(param_1 + 0x1c204) &&
            ((uVar16 != *(uint *)(param_1 + 0x1c208) &&
             (uVar16 != (uint)(*(int *)(param_1 + 0x1c1ac) + iVar10))))))) {
          bVar13 = *(byte *)(lVar12 + 0x2c2) | 1;
          if ((*(byte *)(lVar12 + 0x2c3) & 1) != 0) {
            bVar13 = *(byte *)(lVar12 + 0x2c2) & 0xfd;
          }
          *(byte *)(lVar12 + 0x2c2) = bVar13;
          uVar14 = (ulong)*puVar1;
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar14);
    }
  }
  puVar22 = *(undefined8 **)(*(long *)(param_1 + 0x210) + 0x578);
  if ((puVar22 == (undefined8 *)0x0) ||
     ((iVar4 != iVar6) == (bool)(*(byte *)((long)puVar22 + 0x2c3) & 1))) goto LAB_02bc7088;
  local_78 = *(byte *)(param_1 + 0x1f8);
  local_70 = 0;
  local_98 = PTR_DAT_04bb2020 + 0x10;
  if (7 < local_78) {
    local_78 = 0xff;
  }
  pcStack_90 = "AddresseeSelMulti";
  puStack_80 = &DAT_040f3d6d;
  if (iVar4 == iVar6) {
    puStack_80 = &DAT_040a04a3;
  }
  local_88 = local_98;
  if (((*PTR_DAT_04bc4f40 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04bc4f40), iVar10 != 0)) {
    *(undefined ***)PTR_DAT_04bc4f38 = &PTR_LAB_04aa88f0;
    __cxa_guard_release(PTR_DAT_04bc4f40);
  }
  uVar14 = (**(code **)*puVar22)(puVar22,PTR_DAT_04bc4f38);
  puVar3 = puVar22;
  if ((uVar14 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  FUN_030ded60(puVar3,&local_98);
  bVar13 = *(byte *)((long)puVar22 + 0x2c2);
  if (iVar4 == iVar6) {
    if ((*(byte *)((long)puVar22 + 0x2c3) & 1) == 0) {
      bVar13 = bVar13 & 0xfe;
    }
    else {
      bVar13 = bVar13 | 2;
    }
    uVar11 = 2;
  }
  else if ((*(byte *)((long)puVar22 + 0x2c3) & 1) == 0) {
    uVar11 = 0;
    bVar13 = bVar13 | 1;
  }
  else {
    uVar11 = 0;
    bVar13 = bVar13 & 0xfd;
  }
  *(byte *)((long)puVar22 + 0x2c2) = bVar13;
  switch(uVar11) {
  case 0:
    bVar13 = *(byte *)(puVar22 + 0x58) & 0xf8 | 2;
    break;
  case 2:
    bVar13 = *(byte *)(puVar22 + 0x58) & 0xf8 | 1;
    break;
  default:
    goto switchD_02bc7040_default;
  }
  *(byte *)(puVar22 + 0x58) = bVar13;
switchD_02bc7040_default:
  *(undefined4 *)(puVar22 + 0x56) = uVar11;
LAB_02bc7088:
  *(undefined4 *)(param_1 + 0x1c1ac) = 0xffffffff;
  return;
}

