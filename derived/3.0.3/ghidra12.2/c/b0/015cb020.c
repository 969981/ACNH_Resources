
/* WARNING: Removing unreachable block (ram,0x015cb064) */
/* WARNING: Removing unreachable block (ram,0x015cb074) */

void FUN_015cb020(long param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  float *pfVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  int iVar33;
  uint uVar34;
  int iVar35;
  uint uVar36;
  uint uVar37;
  int iVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  uint local_98;
  float local_8c [2];
  float local_84;
  undefined1 local_78 [4];
  undefined4 local_74;
  
  lVar24 = *(long *)(param_1 + 0xd98);
  lVar21 = *(long *)(param_1 + 0xb40);
  uVar22 = *(uint *)(lVar21 + 0x10);
  uVar34 = *(uint *)(lVar21 + 0x14);
  fVar40 = (float)*(int *)(lVar24 + 0x14) * 0.5;
  fVar39 = (float)*(int *)(lVar24 + 0x10) * 0.5;
  fVar42 = (float)*(int *)(lVar24 + 0x20) * 0.5;
  fVar41 = (float)*(int *)(lVar24 + 0x24) * 0.5;
  uVar23 = 0;
  if (fVar39 != (float)(int)fVar39) {
    uVar23 = (uint)(fVar39 < 0.0);
  }
  iVar7 = *(int *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0x30);
  iVar8 = *(int *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0x20);
  lVar24 = *(long *)(*(long *)(param_1 + 0x280) + 8);
  uVar26 = 0;
  if (fVar40 != (float)(int)fVar40) {
    uVar26 = (uint)(fVar40 < 0.0);
  }
  uVar28 = 0;
  if (fVar42 != (float)(int)fVar42) {
    uVar28 = (uint)(fVar42 < 0.0);
  }
  uVar27 = 0;
  if (fVar41 != (float)(int)fVar41) {
    uVar27 = (uint)(fVar41 < 0.0);
  }
  iVar33 = (int)fVar39 - uVar23;
  if ((int)((int)fVar42 - uVar28) <= (int)((int)fVar39 - uVar23)) {
    iVar33 = (int)fVar42 - uVar28;
  }
  iVar35 = (int)fVar40 - uVar26;
  if ((int)((int)fVar41 - uVar27) <= (int)((int)fVar40 - uVar26)) {
    iVar35 = (int)fVar41 - uVar27;
  }
  uVar23 = *(int *)(lVar21 + 0x24) + 1;
  if (uVar23 != uVar34) {
    uVar26 = uVar22;
    do {
      uVar28 = uVar34 - *(int *)(*(long *)(param_1 + 0xb40) + 0x14);
      uVar27 = uVar26 - *(int *)(*(long *)(param_1 + 0xb40) + 0x10);
      lVar31 = (long)(int)(uVar27 + *(uint *)(param_1 + 0xb08) * uVar28);
      if (*(uint *)(param_1 + 0xb0c) <= uVar28 || *(uint *)(param_1 + 0xb08) <= uVar27) {
        lVar31 = 0;
      }
      lVar30 = (long)(int)((uVar26 - iVar33) + *(uint *)(param_1 + 0xbf0) * (uVar34 - iVar35));
      if (*(uint *)(param_1 + 0xbf4) <= uVar34 - iVar35 ||
          *(uint *)(param_1 + 0xbf0) <= uVar26 - iVar33) {
        lVar30 = 0;
      }
      *(bool *)(*(long *)(param_1 + 0xb10) + lVar31 * 0x1c + 0xc) =
           (*(byte *)(*(long *)(param_1 + 0xbf8) + lVar30 * 2) & 10) == 8;
      if ((int)uVar26 < *(int *)(lVar21 + 0x20)) {
        uVar26 = uVar26 + 1;
      }
      else {
        uVar26 = *(uint *)(lVar21 + 0x10);
        uVar34 = uVar34 + 1;
      }
    } while ((uVar22 != uVar26) || (uVar23 != uVar34));
    lVar21 = *(long *)(param_1 + 0xb40);
    uVar23 = *(int *)(lVar21 + 0x24) + 1;
    uVar22 = *(uint *)(lVar21 + 0x10);
    uVar34 = *(uint *)(lVar21 + 0x14);
  }
  if (uVar23 != uVar34) {
    uVar26 = uVar22;
    do {
      uVar28 = uVar34 - *(int *)(*(long *)(param_1 + 0xb40) + 0x14);
      uVar27 = uVar26 - *(int *)(*(long *)(param_1 + 0xb40) + 0x10);
      lVar31 = (long)(int)(uVar27 + *(uint *)(param_1 + 0xb08) * uVar28);
      if (*(uint *)(param_1 + 0xb0c) <= uVar28 || *(uint *)(param_1 + 0xb08) <= uVar27) {
        lVar31 = 0;
      }
      if (*(char *)(*(long *)(param_1 + 0xb10) + lVar31 * 0x1c + 0xc) == '\x01') {
        if (uVar26 < 0x20) {
          uVar25 = *(uint *)(param_1 + 0xdd0);
          lVar31 = *(long *)(param_1 + 0xdd8);
          uVar37 = 3;
          lVar30 = 0x78;
          if (uVar25 < 4) {
            lVar30 = 0;
          }
          lVar30 = lVar31 + lVar30;
          local_a8 = *(int *)(lVar30 + 0x14);
          iVar33 = *(int *)(lVar30 + 0x10) + (uVar26 & 0xfffffff0);
          iVar38 = *(int *)(lVar30 + 0x20);
          iVar6 = *(int *)(lVar30 + 0x24);
          local_a0 = *(int *)(lVar30 + 0x10) + 2;
          iVar35 = local_a8 + (uVar34 & 0xfffffff0);
          local_9c = local_a0;
          if (iVar38 <= local_a0) {
            local_9c = iVar38;
          }
          if (local_a0 <= iVar38) {
            local_a0 = iVar38;
          }
          local_a4 = local_a8;
          if (iVar6 <= local_a8) {
            local_a4 = iVar6;
          }
          if (local_a8 <= iVar6) {
            local_a8 = iVar6;
          }
        }
        else if ((int)(uVar26 >> 4) < (int)(((iVar7 - iVar8) + 1U >> 5) - 2)) {
          if (uVar34 < 0x20) {
            uVar25 = *(uint *)(param_1 + 0xdd0);
            lVar31 = *(long *)(param_1 + 0xdd8);
            uVar37 = 2;
            lVar30 = 0x50;
            if (uVar25 < 3) {
              lVar30 = 0;
            }
            lVar30 = lVar31 + lVar30;
            local_a0 = *(int *)(lVar30 + 0x20);
            local_a8 = *(int *)(lVar30 + 0x24);
            iVar33 = local_a0 + (uVar26 & 0xfffffff0);
            local_9c = *(int *)(lVar30 + 0x10);
            local_a4 = *(int *)(lVar30 + 0x14);
            iVar35 = local_a8 + (uVar34 & 0xfffffff0);
          }
          else {
            lVar31 = *(long *)(param_1 + 0xdd8);
            uVar37 = 0;
            local_9c = *(int *)(lVar31 + 0x10);
            local_a4 = *(int *)(lVar31 + 0x14);
            iVar33 = local_9c + (uVar26 & 0xfffffff0);
            local_a0 = *(int *)(lVar31 + 0x20);
            iVar35 = local_a4 + (uVar34 & 0xfffffff0);
            local_a8 = *(int *)(lVar31 + 0x24);
            uVar25 = *(uint *)(param_1 + 0xdd0);
          }
        }
        else {
          uVar25 = *(uint *)(param_1 + 0xdd0);
          lVar31 = *(long *)(param_1 + 0xdd8);
          uVar37 = 1;
          lVar30 = lVar31 + (ulong)(1 < uVar25) * 0x28;
          iVar38 = *(int *)(lVar30 + 0x24);
          iVar33 = *(int *)(lVar30 + 0x20) + (uVar26 & 0xfffffff0);
          local_a0 = *(int *)(lVar30 + 0x10);
          local_a8 = *(int *)(lVar30 + 0x14);
          iVar6 = *(int *)(lVar30 + 0x20) + -2;
          iVar35 = iVar38 + (uVar34 & 0xfffffff0);
          local_9c = local_a0;
          if (iVar6 <= local_a0) {
            local_9c = iVar6;
          }
          if (local_a0 <= iVar6) {
            local_a0 = iVar6;
          }
          local_a4 = local_a8;
          if (iVar38 <= local_a8) {
            local_a4 = iVar38;
          }
          if (local_a8 <= iVar38) {
            local_a8 = iVar38;
          }
        }
        local_98 = uVar26 & 0xfffffff0;
        uVar36 = uVar34 & 0xfffffff0;
        uVar2 = uVar37;
        if (uVar25 <= uVar37) {
          uVar2 = 0;
        }
        lVar31 = lVar31 + (ulong)uVar2 * 0x28;
        iVar4 = *(int *)(lVar31 + 0x10);
        iVar38 = *(int *)(lVar31 + 0x14);
        local_8c[0] = (float)(int)uVar27 * 10.0 + 5.0;
        local_84 = (float)(int)uVar28 * 10.0 + 5.0;
        iVar5 = *(int *)(lVar31 + 0x20);
        iVar6 = *(int *)(lVar31 + 0x24);
        lVar31 = *(long *)PTR_DAT_04bb27c8;
        if (((lVar31 == 0) || (*(long *)(lVar31 + 0xa8) == 0)) ||
           (*(char *)(lVar31 + 0x11c8) != '\0')) {
          fVar39 = -500.0;
        }
        else {
          local_78[0] = 0;
          if (DAT_04c487d4 == -1) {
            local_74 = 7;
          }
          else {
            puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
            if (0xff < (uint)(int)DAT_04c487d4) {
              puVar3 = (uint *)PTR_DAT_04bc39f8;
            }
            local_74 = 7;
            if ((*puVar3 & 2) != 0) {
              local_74 = 5;
            }
          }
          fVar39 = (float)FUN_00962700(*(long *)(lVar31 + 0xa8),local_8c,&local_74,1,local_78);
        }
        iVar38 = iVar38 + uVar36;
        pfVar20 = (float *)(**(code **)(*(long *)(lVar24 + 0x458) + 0xf0))();
        iVar6 = (uVar36 | 1) + iVar6;
        if (iVar6 != iVar38) {
          fVar40 = *pfVar20;
          local_9c = local_98 + local_9c;
          iVar4 = iVar4 + local_98;
          local_a0 = local_98 + local_a0;
          local_a4 = uVar36 + local_a4;
          local_a8 = uVar36 + local_a8;
          iVar29 = iVar4;
          do {
            uVar28 = iVar38 - *(int *)(*(long *)(param_1 + 0xb40) + 0x14);
            uVar27 = iVar29 - *(int *)(*(long *)(param_1 + 0xb40) + 0x10);
            lVar30 = *(long *)(param_1 + 0xb10);
            lVar31 = (long)(int)(uVar27 + *(uint *)(param_1 + 0xb08) * uVar28);
            if (*(uint *)(param_1 + 0xb0c) <= uVar28 || *(uint *)(param_1 + 0xb08) <= uVar27) {
              lVar31 = 0;
            }
            if ((iVar29 == iVar33) && (iVar38 == iVar35)) {
              lVar32 = lVar30 + lVar31 * 0x1c;
              *(undefined1 *)(lVar32 + 0xc) = 2;
              *(char *)(lVar32 + 0xd) = (char)uVar37;
              *(float *)(lVar32 + 0x18) = fVar39 + fVar40;
              *(int *)(lVar32 + 0x10) = iVar33;
              *(int *)(lVar32 + 0x14) = iVar35;
            }
            else {
              lVar32 = lVar30 + lVar31 * 0x1c;
              *(int *)(lVar32 + 0x10) = iVar33;
              *(int *)(lVar32 + 0x14) = iVar35;
              *(undefined1 *)(lVar32 + 0xc) = 3;
            }
            bVar11 = local_9c <= iVar29;
            bVar14 = iVar29 <= local_a0;
            bVar17 = local_a4 <= iVar38;
            bVar18 = SBORROW4(iVar38,local_a8);
            bVar10 = local_9c <= iVar29;
            bVar13 = iVar29 <= local_a0;
            bVar16 = local_a4 <= iVar38;
            bVar19 = iVar38 == local_a8;
            bVar9 = local_9c <= iVar29;
            bVar12 = iVar29 <= local_a0;
            bVar15 = local_a4 <= iVar38;
            iVar1 = iVar38 - local_a8;
            if (iVar29 < (int)(iVar5 + local_98)) {
              iVar29 = iVar29 + 1;
            }
            else {
              iVar38 = iVar38 + 1;
              iVar29 = iVar4;
            }
            *(bool *)(lVar30 + lVar31 * 0x1c + 0xe) =
                 ((bVar10 && bVar13) && bVar16) && bVar19 ||
                 (((bVar9 && bVar12) && bVar15) && iVar1 < 0) !=
                 (((bVar11 && bVar14) && bVar17) && bVar18);
          } while ((iVar4 != iVar29) || (iVar6 != iVar38));
        }
      }
      if ((int)uVar26 < *(int *)(lVar21 + 0x20)) {
        uVar26 = uVar26 + 1;
      }
      else {
        uVar26 = *(uint *)(lVar21 + 0x10);
        uVar34 = uVar34 + 1;
      }
    } while ((uVar22 != uVar26) || (uVar23 != uVar34));
  }
  return;
}

