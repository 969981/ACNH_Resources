
/* WARNING: Removing unreachable block (ram,0x012ff4e0) */
/* WARNING: Removing unreachable block (ram,0x012ff4f4) */
/* WARNING: Removing unreachable block (ram,0x012ff504) */
/* WARNING: Removing unreachable block (ram,0x012ff514) */
/* WARNING: Removing unreachable block (ram,0x012ff534) */
/* WARNING: Removing unreachable block (ram,0x012ff544) */
/* WARNING: Removing unreachable block (ram,0x012ff554) */
/* WARNING: Removing unreachable block (ram,0x012ff568) */
/* WARNING: Removing unreachable block (ram,0x012ff5e0) */
/* WARNING: Removing unreachable block (ram,0x012ff5e8) */
/* WARNING: Removing unreachable block (ram,0x012ff5f8) */
/* WARNING: Removing unreachable block (ram,0x012ff608) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff8e : 0x012ff5fc */
/* WARNING: Removing unreachable block (ram,0x012ff630) */
/* WARNING: Removing unreachable block (ram,0x012ff638) */
/* WARNING: Removing unreachable block (ram,0x012ff648) */
/* WARNING: Removing unreachable block (ram,0x012ff65c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_012fef90(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  sbyte sVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined2 *puVar6;
  byte *pbVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  ushort uVar13;
  short sVar14;
  short sVar15;
  undefined *puVar16;
  bool bVar17;
  uint *puVar18;
  undefined2 *puVar19;
  ushort uVar20;
  long lVar21;
  int iVar22;
  long lVar23;
  ushort uVar24;
  uint uVar25;
  byte bVar26;
  uint uVar27;
  long lVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  uint *puVar32;
  uint uVar33;
  uint *puVar34;
  ushort uVar35;
  ushort *puVar36;
  ushort local_74 [2];
  byte local_70 [12];
  uint local_64;
  
  lVar21 = param_2[2];
  iVar22 = *(int *)(lVar21 + 0x2c);
  iVar1 = *(int *)(lVar21 + 0x3c) + 1;
  if (iVar1 != iVar22) {
    iVar11 = *(int *)(lVar21 + 0x28);
    lVar9 = *param_2;
    lVar10 = param_2[1];
    uVar12 = *(uint *)(lVar10 + 8);
    lVar2 = lVar10 + 0x44;
    puVar36 = (ushort *)PTR_DAT_04bbc2f8;
    iVar29 = iVar11;
    do {
      puVar16 = PTR_DAT_04bbc2f8;
      sVar14 = *(short *)(lVar9 + 0x3c);
      if (*(short *)(lVar9 + 0x40) <= *(short *)(lVar9 + 0x3c)) {
        sVar14 = *(short *)(lVar9 + 0x40);
      }
      sVar15 = *(short *)(lVar9 + 0x3e);
      if (*(short *)(lVar9 + 0x42) <= *(short *)(lVar9 + 0x3e)) {
        sVar15 = *(short *)(lVar9 + 0x42);
      }
      puVar5 = (ushort *)
               (lVar9 + 0x44 + (ulong)(uint)((iVar22 - sVar15) * 3 + (iVar29 - sVar14)) * 0xe);
      if (2 < (uint)(iVar22 - sVar15) || 2 < (uint)(iVar29 - sVar14)) {
        puVar5 = puVar36;
      }
      puVar4 = puVar5 + (ulong)*(uint *)(lVar9 + 8) * 3;
      if (1 < *(uint *)(lVar9 + 8)) {
        puVar4 = puVar5;
      }
      lVar28 = *(long *)PTR_DAT_04bb27a8;
      uVar24 = *(ushort *)(lVar28 + 0x408);
      uVar27 = *(uint *)(lVar28 + 1000);
      uVar30 = (uint)*puVar4 - (uint)uVar24;
      if (uVar30 < uVar27) {
        puVar34 = *(uint **)(*(long *)(lVar28 + 0x3f0) + (long)(int)uVar30 * 8);
      }
      else {
        puVar34 = (uint *)0x0;
      }
      sVar14 = *(short *)(lVar10 + 0x3c);
      if (*(short *)(lVar10 + 0x40) <= *(short *)(lVar10 + 0x3c)) {
        sVar14 = *(short *)(lVar10 + 0x40);
      }
      sVar15 = *(short *)(lVar10 + 0x3e);
      if (*(short *)(lVar10 + 0x42) <= *(short *)(lVar10 + 0x3e)) {
        sVar15 = *(short *)(lVar10 + 0x42);
      }
      uVar31 = iVar29 - sVar14;
      uVar33 = iVar22 - sVar15;
      uVar30 = uVar33 * 3 + uVar31;
      puVar5 = (ushort *)(lVar2 + (ulong)uVar30 * 0xe);
      if (2 < uVar33 || 2 < uVar31) {
        puVar5 = puVar36;
      }
      puVar36 = puVar5 + (ulong)*(uint *)(lVar10 + 8) * 3;
      if (1 < *(uint *)(lVar10 + 8)) {
        puVar36 = puVar5;
      }
      uVar35 = *puVar36;
      uVar25 = (uint)uVar35 - (uint)uVar24;
      if (uVar25 < uVar27) {
        puVar32 = *(uint **)(*(long *)(lVar28 + 0x3f0) + (long)(int)uVar25 * 8);
        if (puVar32 == (uint *)0x0) goto LAB_012ff1d8;
        uVar25 = *puVar32;
        if (uVar25 == 0 || puVar32 == (uint *)(ulong)uVar25) {
LAB_012ff1f0:
          uVar20 = 0;
joined_r0x012ff360:
          bVar17 = false;
          goto joined_r0x012ff1e0;
        }
        puVar18 = (uint *)((long)puVar32 - (long)(ulong)uVar25);
        if (*puVar18 == 0) goto LAB_012ff1f0;
        uVar25 = puVar18[1];
        uVar20 = 0;
        if (uVar25 == 0) goto joined_r0x012ff360;
        if ((ulong)(ushort)puVar18[2] == 0) goto LAB_012ff1f0;
        lVar23 = 0xc;
        if (*(char *)((long)puVar18 + 10) != '\0') {
          lVar23 = 0x1c;
        }
        lVar23 = (long)puVar18 + lVar23 + (ulong)(ushort)puVar18[2] * 8;
        if (lVar23 == 0) {
          uVar20 = 0;
          goto joined_r0x012ff360;
        }
        uVar8 = 0;
        if ((ulong)uVar25 != 0) {
          uVar8 = (uint)((ulong)((long)puVar32 - lVar23) / (ulong)uVar25);
        }
        if (*puVar18 <= uVar8) {
          uVar8 = 0xffffffff;
        }
        if (*(uint *)PTR_DAT_04bbbe38 <= uVar8) goto LAB_012ff1f0;
        uVar20 = *(ushort *)(*(long *)(PTR_DAT_04bbbe38 + 8) + (long)(int)uVar8 * 2);
        if (uVar20 < 4) goto joined_r0x012ff360;
        bVar17 = false;
        uVar20 = 0;
        if (puVar34 != (uint *)0x0) goto LAB_012ff1fc;
LAB_012ff364:
        if (bVar17) {
          uVar24 = 0;
        }
        else {
          uVar27 = *puVar32;
          uVar24 = 0;
          if ((uVar27 != 0) && (puVar32 != (uint *)(ulong)uVar27)) {
            puVar34 = (uint *)((long)puVar32 - (long)(ulong)uVar27);
            uVar24 = 0;
            if (*puVar34 != 0) {
              uVar27 = puVar34[1];
              if ((uVar27 != 0) && ((ulong)(ushort)puVar34[2] != 0)) {
                lVar28 = 0xc;
                if (*(char *)((long)puVar34 + 10) != '\0') {
                  lVar28 = 0x1c;
                }
                lVar28 = (long)puVar34 + lVar28 + (ulong)(ushort)puVar34[2] * 8;
                if (lVar28 != 0) {
                  uVar30 = 0;
                  if ((ulong)uVar27 != 0) {
                    uVar30 = (uint)((ulong)((long)puVar32 - lVar28) / (ulong)uVar27);
                  }
                  if (*puVar34 <= uVar30) {
                    uVar30 = 0xffffffff;
                  }
                  if ((uVar30 < *(uint *)PTR_DAT_04bbbe38) &&
                     (uVar24 = *(ushort *)(*(long *)(PTR_DAT_04bbbe38 + 8) + (long)(int)uVar30 * 2),
                     uVar24 < 4)) goto LAB_012ff414;
                }
              }
              uVar24 = 0;
            }
          }
        }
LAB_012ff414:
        puVar34 = (uint *)param_2[3];
        uVar27 = puVar34[3];
        sVar3 = 2;
        if (uVar24 != 3) {
          sVar3 = uVar24 == 2;
        }
        uVar30 = *puVar34 ^ *puVar34 << 0xb;
        *puVar34 = puVar34[1];
        puVar34[1] = puVar34[2];
        uVar30 = uVar30 >> 8 ^ uVar27 >> 0x13 ^ uVar30 ^ uVar27;
        puVar34[2] = uVar27;
        puVar34[3] = uVar30;
        uVar24 = (ushort)(((ulong)uVar30 << sVar3) >> 0x20);
        bVar26 = (byte)puVar36[2];
        sVar14 = *(short *)(lVar10 + 0x3c);
        if (*(short *)(lVar10 + 0x40) <= *(short *)(lVar10 + 0x3c)) {
          sVar14 = *(short *)(lVar10 + 0x40);
        }
        sVar15 = *(short *)(lVar10 + 0x3e);
        if (*(short *)(lVar10 + 0x42) <= *(short *)(lVar10 + 0x3e)) {
          sVar15 = *(short *)(lVar10 + 0x42);
        }
        uVar31 = iVar29 - sVar14;
        uVar33 = iVar22 - sVar15;
        uVar30 = uVar33 * 3 + uVar31;
      }
      else {
        puVar32 = (uint *)0x0;
LAB_012ff1d8:
        uVar20 = 0;
        bVar17 = true;
joined_r0x012ff1e0:
        if (puVar34 == (uint *)0x0) goto LAB_012ff364;
LAB_012ff1fc:
        puVar18 = (uint *)((long)puVar34 - (ulong)*puVar34);
        if ((((*puVar34 == 0) || (puVar18 == (uint *)0x0)) || (*puVar18 == 0)) ||
           ((uVar25 = puVar18[1], uVar25 == 0 || ((ulong)(ushort)puVar18[2] == 0))))
        goto LAB_012ff364;
        lVar23 = 0xc;
        if (*(char *)((long)puVar18 + 10) != '\0') {
          lVar23 = 0x1c;
        }
        lVar23 = (long)puVar18 + lVar23 + (ulong)(ushort)puVar18[2] * 8;
        if (lVar23 == 0) goto LAB_012ff364;
        uVar8 = 0;
        if ((ulong)uVar25 != 0) {
          uVar8 = (uint)((ulong)((long)puVar34 - lVar23) / (ulong)uVar25);
        }
        if (*puVar18 <= uVar8) {
          uVar8 = 0xffffffff;
        }
        if ((*(uint *)PTR_DAT_04bbbe38 <= uVar8) ||
           (uVar13 = *(ushort *)(*(long *)(PTR_DAT_04bbbe38 + 8) + (long)(int)uVar8 * 2),
           (3 < uVar13 || uVar20 == 0) || uVar13 == 0)) goto LAB_012ff364;
        if (((uint)*puVar4 - (uint)uVar24 < uVar27) &&
           (puVar34 = *(uint **)(*(long *)(lVar28 + 0x3f0) +
                                (long)(int)((uint)*puVar4 - (uint)uVar24) * 8),
           puVar34 != (uint *)0x0)) {
          uVar27 = *puVar34;
          uVar25 = 0;
          if (uVar27 == 0) goto LAB_012ff6b0;
          if (puVar34 != (uint *)(ulong)uVar27) {
            puVar32 = (uint *)((long)puVar34 - (long)(ulong)uVar27);
            uVar25 = 0;
            if (*puVar32 != 0) {
              uVar27 = puVar32[1];
              if ((uVar27 != 0) && ((ulong)(ushort)puVar32[2] != 0)) {
                lVar28 = 0xc;
                if (*(char *)((long)puVar32 + 10) != '\0') {
                  lVar28 = 0x1c;
                }
                lVar28 = (long)puVar32 + lVar28 + (ulong)(ushort)puVar32[2] * 8;
                if (lVar28 != 0) {
                  uVar25 = 0;
                  if ((ulong)uVar27 != 0) {
                    uVar25 = (uint)((ulong)((long)puVar34 - lVar28) / (ulong)uVar27);
                  }
                  if (*puVar32 <= uVar25) {
                    uVar25 = 0xffffffff;
                  }
                  if ((uVar25 < *(uint *)PTR_DAT_04bbbe38) &&
                     (uVar24 = *(ushort *)(*(long *)(PTR_DAT_04bbbe38 + 8) + (long)(int)uVar25 * 2),
                     uVar24 < 4)) {
                    if (uVar24 == 3) {
                      puVar34 = &DAT_051842c8;
                    }
                    else if (uVar24 == 2) {
                      puVar34 = &DAT_05184208;
                    }
                    else {
                      if (uVar24 != 1) goto LAB_012ff7d4;
                      puVar34 = &DAT_05184168;
                    }
                    uVar27 = *puVar34;
                    lVar28 = *(long *)(puVar34 + 2) + (long)(int)(uVar27 * puVar4[1]) * 4;
                    if (puVar34[1] <= (uint)puVar4[1] || uVar27 == 0) {
                      lVar28 = 0;
                    }
                    bVar17 = lVar28 == 0;
                    if ((int)uVar27 < 1 || bVar17) {
                      lVar28 = 0;
                    }
                    lVar23 = (long)(int)(uint)(byte)puVar4[2];
                    if (((int)uVar27 < 1 || bVar17) || uVar27 <= (byte)puVar4[2]) {
                      lVar23 = 0;
                    }
                    uVar25 = *(uint *)(lVar28 + lVar23 * 4);
                    goto LAB_012ff6b4;
                  }
                }
              }
LAB_012ff7d4:
              uVar25 = 0;
            }
          }
        }
        else {
LAB_012ff6b0:
          uVar25 = 0;
        }
LAB_012ff6b4:
        bVar26 = (byte)puVar36[2];
        uVar27 = (uint)bVar26;
        if (uVar20 == 3) {
          puVar32 = &DAT_05184218;
          uVar35 = *puVar36;
          puVar34 = (uint *)&DAT_05184278;
LAB_012ff728:
          uVar8 = *puVar32;
          lVar28 = *(long *)(puVar32 + 2) + (long)(int)(uVar8 * uVar25) * 2;
          if (puVar32[1] <= uVar25 || uVar8 == 0) {
            lVar28 = 0;
          }
          bVar17 = lVar28 == 0;
          lVar23 = (long)(int)uVar27;
          if ((int)uVar8 < 1 || bVar17) {
            lVar28 = 0;
          }
          if (((int)uVar8 < 1 || bVar17) || uVar8 <= uVar27) {
            lVar23 = 0;
          }
          uVar24 = *(ushort *)(lVar28 + lVar23 * 2);
          uVar8 = *puVar34;
          lVar28 = *(long *)(puVar34 + 2) + (long)(int)(uVar8 * uVar25) * 4;
          if (puVar34[1] <= uVar25 || uVar8 == 0) {
            lVar28 = 0;
          }
          bVar17 = lVar28 == 0;
          lVar23 = (long)(int)uVar27;
          if ((int)uVar8 < 1 || bVar17) {
            lVar28 = 0;
          }
          if (((int)uVar8 < 1 || bVar17) || uVar8 <= uVar27) {
            lVar23 = 0;
          }
          bVar26 = (byte)*(undefined4 *)(lVar28 + lVar23 * 4);
        }
        else {
          if (uVar20 == 2) {
            puVar32 = &DAT_05184178;
            uVar35 = *puVar36;
            puVar34 = (uint *)&DAT_051841d8;
            goto LAB_012ff728;
          }
          if (uVar20 == 1) {
            puVar32 = &DAT_051840c0;
            uVar35 = *puVar36;
            puVar34 = &DAT_05184148;
            goto LAB_012ff728;
          }
          uVar35 = *puVar36;
          uVar24 = puVar36[1];
        }
      }
      puVar19 = (undefined2 *)(lVar2 + (ulong)uVar30 * 0xe);
      local_70[0] = 0;
      local_70[1] = 0;
      local_70[2] = 0xff;
      local_70[3] = 0xff;
      local_70[4] = 0;
      local_70[5] = 0;
      local_70[6] = 0;
      local_70[7] = 0;
      local_74[0] = 0xffff;
      local_74[1] = 0;
      puVar6 = puVar19;
      if (2 < uVar31 || 2 < uVar33) {
        puVar6 = (undefined2 *)puVar16;
      }
      local_70[8] = *(undefined1 *)(puVar6 + 6);
      puVar36 = local_74 + (ulong)uVar12 * 3;
      if (1 < uVar12) {
        puVar36 = local_74;
      }
      local_64 = uVar12;
      *puVar36 = uVar35;
      pbVar7 = local_70 + (ulong)local_64 * 6;
      if (1 < local_64) {
        pbVar7 = local_70;
      }
      local_64 = uVar12;
      *pbVar7 = bVar26;
      puVar36 = local_74 + (ulong)local_64 * 3 + 1;
      if (1 < local_64) {
        puVar36 = (ushort *)((ulong)local_74 | 2);
      }
      *puVar36 = uVar24;
      if (2 >= uVar31 && 2 >= uVar33) {
        local_64 = 0;
        *puVar19 = 0xffff;
        puVar19[1] = 0;
        *(undefined1 *)(puVar19 + 2) = 0;
        local_64 = 1;
        puVar19[3] = 0xffff;
        puVar19[4] = 0;
        *(undefined1 *)(puVar19 + 5) = 0;
        *(byte *)(lVar2 + (ulong)uVar30 * 0xe + 0xc) = local_70[8];
      }
      if (iVar29 < *(int *)(lVar21 + 0x38)) {
        iVar29 = iVar29 + 1;
      }
      else {
        iVar29 = *(int *)(lVar21 + 0x28);
        iVar22 = iVar22 + 1;
      }
      puVar36 = (ushort *)puVar16;
    } while ((iVar11 != iVar29) || (iVar1 != iVar22));
  }
  return;
}

