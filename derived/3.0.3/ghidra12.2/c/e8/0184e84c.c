
/* WARNING: Removing unreachable block (ram,0x0184e8f0) */
/* WARNING: Removing unreachable block (ram,0x0184e900) */
/* WARNING: Removing unreachable block (ram,0x0184e90c) */

undefined8 FUN_0184e84c(float param_1,float param_2,int param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  float *pfVar15;
  uint uVar16;
  long lVar17;
  uint *puVar18;
  int *piVar19;
  char cVar20;
  int iVar21;
  int iVar22;
  uint *puVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  long local_e8;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  byte local_d0;
  float local_c4 [2];
  float local_bc;
  undefined *local_b8;
  int local_b0;
  int iStack_ac;
  undefined *local_a8;
  int local_a0;
  int iStack_9c;
  undefined4 local_88;
  undefined4 local_84;
  
  puVar6 = PTR_DAT_04bb2010;
  local_e0 = (undefined *)((ulong)local_e0 & 0xffffffff00000000);
  local_a8 = PTR_DAT_04bb2010 + 0x10;
  fVar26 = (float)param_3 * 0.5;
  fVar27 = (float)param_4 * 0.5;
  uVar10 = 0;
  if (fVar26 != (float)(int)fVar26) {
    uVar10 = (uint)(fVar26 < 0.0);
  }
  uVar16 = 0;
  if (fVar27 != (float)(int)fVar27) {
    uVar16 = (uint)(fVar27 < 0.0);
  }
  lVar17 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  if ((((lVar17 != 0) && (!(param_3 < *(int *)(lVar17 + 0x20) || *(int *)(lVar17 + 0x30) < param_3))
       ) && (*(int *)(lVar17 + 0x24) <= param_4)) && (param_4 <= *(int *)(lVar17 + 0x34))) {
    local_a0 = param_3;
    iStack_9c = param_4;
    uVar11 = FUN_01a1ddd0(&local_a8,PTR_LAB_04bbe6c0);
    if ((uVar11 & 1) == 0) {
      uVar11 = FUN_01a1d5d0(&local_a8);
      puVar7 = PTR_DAT_04bb2200;
      if ((uVar11 & 1) == 0) {
        fVar26 = (float)(int)((int)fVar26 - uVar10) * 10.0;
        fVar27 = (float)(int)((int)fVar27 - uVar16) * 10.0;
        fVar24 = fVar26 + 2.5;
        fVar25 = fVar27 + 2.5;
        fVar26 = fVar26 + 10.0 + -2.5;
        fVar27 = fVar27 + 10.0 + -2.5;
        iVar4 = (int)((float)(int)fVar24 / 5.0) - (uint)(fVar24 < 0.0);
        iVar22 = (int)((float)(int)fVar25 / 5.0) - (uint)(fVar25 < 0.0);
        iVar5 = (int)((float)(int)fVar26 / 5.0) - (uint)(fVar26 < 0.0);
        iVar3 = iVar4;
        if (iVar5 <= iVar4) {
          iVar3 = iVar5;
        }
        if (iVar4 <= iVar5) {
          iVar4 = iVar5;
        }
        iVar21 = (int)((float)(int)fVar27 / 5.0) - (uint)(fVar27 < 0.0);
        iVar5 = iVar22;
        if (iVar22 <= iVar21) {
          iVar5 = iVar21;
        }
        if (iVar21 <= iVar22) {
          iVar22 = iVar21;
        }
        if (iVar5 + 1 == iVar22) {
          uVar12 = 1;
        }
        else {
          puVar1 = PTR_DAT_04bbfe68 + 0x10;
          puVar2 = PTR_DAT_04bc0510 + 0x10;
          iVar21 = iVar3;
          do {
            local_c4[0] = (float)iVar21 * 5.0 + 2.5;
            local_bc = (float)iVar22 * 5.0 + 2.5;
            if ((*(long *)puVar7 != 0) && (*(long *)(*(long *)puVar7 + 0x50) != 0)) {
              local_e0 = (undefined *)((ulong)local_e0 & 0xffffffff00000000);
            }
            local_b8 = puVar6 + 0x10;
            local_b0 = iVar21;
            iStack_ac = iVar22;
            fVar26 = (float)FUN_015cb8d4(0,local_c4,0);
            if (param_1 < fVar26) goto LAB_0184e968;
            local_d8 = 0;
            lVar17 = *(long *)PTR_DAT_04bb2720;
            local_e0 = puVar1;
            if ((lVar17 == 0) || (*(long *)(lVar17 + 0x330) == 0)) {
              puVar13 = &DAT_055c04a0;
            }
            else {
              puVar13 = (undefined8 *)
                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                  (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
              iVar9 = FUN_006bd550(*puVar13,0);
              puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
              if (iVar9 != 0x758f7eaf) {
                puVar13 = &DAT_055c04a0;
              }
            }
            local_d4 = *(undefined4 *)(puVar13 + 7);
            local_d0 = FUN_017baf44();
            local_d0 = local_d0 & 1;
            puVar14 = (undefined4 *)FUN_01a5190c(&local_e0,0,&local_b8,0);
            local_88 = *puVar14;
            local_84 = puVar14[1];
            iVar9 = FUN_0277ebd0(&local_88);
            local_f8 = (undefined *)CONCAT44(local_f8._4_4_,iVar9);
            if (iVar9 != 0) {
              lVar17 = *(long *)PTR_DAT_04bbbc68;
              if ((((lVar17 == 0) || (*(long *)(lVar17 + 0xb0) == 0)) ||
                  (*(long *)(*(long *)(lVar17 + 0xb0) + 8) == 0)) ||
                 (((*(long *)(lVar17 + 0x488) == 0 ||
                   (*(long *)(*(long *)(lVar17 + 0x488) + 8) == 0)) ||
                  ((*(long *)(lVar17 + 0x2b0) == 0 ||
                   (*(long *)(*(long *)(lVar17 + 0x2b0) + 8) == 0)))))) {
LAB_0184ec78:
                uVar11 = FUN_0277e294(&local_88);
                puVar8 = PTR_DAT_04bb43c0;
                if ((uVar11 & 1) == 0) goto LAB_0184ee6c;
                local_e8 = 0;
                local_f0 = local_88;
                uStack_ec = local_84;
                lVar17 = *(long *)PTR_DAT_04bb43c0;
                local_f8 = puVar2;
                uVar10 = FUN_0277d6c4(&local_f0);
                fVar26 = 0.0;
                if (*(long *)puVar8 != 0) {
                  lVar17 = *(long *)(lVar17 + 0x57e58);
                  uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
                  if ((uVar10 < *(uint *)(lVar17 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                    lVar17 = *(long *)PTR_DAT_04bc0428;
                    uVar10 = FUN_0277d6c4(&local_88);
                    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
                    if ((uVar10 < *(uint *)(lVar17 + 0x1d8)) &&
                       ((puVar23 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8),
                        puVar23 != (uint *)0x0 && (uVar10 = *puVar23, uVar10 != 0)))) {
                      cVar20 = *PTR_DAT_04bbfe88;
                      do {
                        if (cVar20 == '\0') {
                          *PTR_DAT_04bbfe88 = 1;
                          memset(PTR_DAT_04bbfe90,0xff,0x1ac);
                          uVar10 = *puVar23;
                          cVar20 = '\x01';
                        }
                        else {
                          uVar16 = *(uint *)(PTR_DAT_04bbfe90 + 0x28);
                          if (-1 < (int)uVar16) {
                            if ((float *)((ulong)uVar16 + (long)puVar23) != (float *)0x0) {
                              fVar26 = *(float *)((ulong)uVar16 + (long)puVar23);
                            }
                            break;
                          }
                          if (uVar16 != 0xffffffff) break;
                        }
                        puVar18 = (uint *)(ulong)uVar10;
                        if ((puVar18 == (uint *)0x0) || (puVar23 == puVar18)) break;
                        lVar17 = 0xc;
                        if (*(char *)((long)puVar23 + (10 - (long)puVar18)) != '\0') {
                          lVar17 = 0x1c;
                        }
                        lVar17 = (long)puVar23 + (lVar17 - (long)puVar18);
                        if (lVar17 == 0) break;
                        uVar11 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar18));
                        *(undefined4 *)(PTR_DAT_04bbfe90 + 0x28) = 0xfffffffe;
                        if (uVar11 == 0) break;
                        piVar19 = (int *)(lVar17 + 4);
                        while (piVar19[-1] != -0x3e783aea) {
                          piVar19 = piVar19 + 2;
                          uVar11 = uVar11 - 1;
                          if (uVar11 == 0) goto LAB_0184ee64;
                        }
                        iVar9 = 0;
                        if (*piVar19 != -1) {
                          iVar9 = *piVar19;
                        }
                        *(int *)(PTR_DAT_04bbfe90 + 0x28) = iVar9;
                        uVar10 = *puVar23;
                        if (uVar10 == 0) break;
                      } while( true );
                    }
                  }
                }
              }
              else {
                uVar10 = FUN_0277d6c4(&local_88);
                uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
                if ((*(uint *)(lVar17 + 0x1d8) <= uVar10) ||
                   (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8) == 0))
                goto LAB_0184ec78;
                FUN_0124c030(&local_f8,&local_88);
                fVar26 = 0.0;
                if ((local_e8 != 0) &&
                   (pfVar15 = (float *)FUN_01246470(local_e8,0,0xc315945,
                                                    *(undefined8 *)PTR_DAT_04bbbca8),
                   pfVar15 != (float *)0x0)) {
                  fVar26 = *pfVar15;
                }
              }
LAB_0184ee64:
              if (param_2 < fVar26) goto LAB_0184e968;
            }
LAB_0184ee6c:
            if (iVar21 < iVar4) {
              iVar21 = iVar21 + 1;
            }
            else {
              iVar22 = iVar22 + 1;
              iVar21 = iVar3;
            }
          } while ((iVar3 != iVar21) || (uVar12 = 1, iVar5 + 1 != iVar22));
        }
        goto LAB_0184e96c;
      }
    }
  }
LAB_0184e968:
  uVar12 = 0;
LAB_0184e96c:
  return uVar12;
}

