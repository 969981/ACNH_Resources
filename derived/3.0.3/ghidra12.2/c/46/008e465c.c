
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_008e465c(long *param_1,long param_2,float *param_3,float *param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  int *piVar12;
  float *pfVar13;
  uint *puVar14;
  long lVar15;
  uint *puVar16;
  undefined *puVar17;
  char cVar18;
  long lVar19;
  long *plVar20;
  float fVar21;
  float fVar22;
  undefined *local_d0;
  int local_c8;
  int iStack_c4;
  long local_c0;
  int local_b8;
  int local_b4;
  long local_b0;
  long local_a8;
  undefined *local_a0;
  uint local_98;
  uint local_94;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  
  fStack_8c = (float)*(int *)(param_2 + 0x14) * 5.0;
  local_90 = (float)*(int *)(param_2 + 0x10) * 5.0;
  fStack_84 = (float)*(int *)(param_2 + 0x24) * 5.0 + 5.0;
  local_88 = (float)*(int *)(param_2 + 0x20) * 5.0 + 5.0;
  uVar10 = FUN_01735310(&local_90,*(undefined4 *)(*param_1 + 0x230),*(undefined4 *)PTR_DAT_04bb3238,
                        0);
  puVar7 = PTR_DAT_04bb27c8;
  if ((uVar10 & 1) == 0) {
    lVar15 = param_1[1];
    uVar5 = *(uint *)(param_2 + 0x10);
    if (((((int)uVar5 < *(int *)(lVar15 + 0x10)) ||
         (*(int *)(lVar15 + 0x20) < *(int *)(param_2 + 0x20))) ||
        (local_94 = *(uint *)(param_2 + 0x14), (int)local_94 < *(int *)(lVar15 + 0x14))) ||
       (*(int *)(lVar15 + 0x24) < *(int *)(param_2 + 0x24))) {
      uVar11 = 2;
    }
    else {
      local_b0 = param_2 + 8;
      local_a8 = param_2 + 0x18;
      uVar1 = *(int *)(param_2 + 0x24) + 1;
      puVar2 = PTR_DAT_04bb2010 + 0x10;
      if (uVar1 != local_94) {
        puVar3 = PTR_DAT_04bc35c0 + 0x10;
        puVar4 = PTR_DAT_04bc0510 + 0x10;
        plVar20 = (long *)PTR_DAT_04bbbc68;
        local_a0 = puVar2;
        local_98 = uVar5;
        do {
          piVar12 = (int *)FUN_01a5190c(param_1[2],0,&local_a0,0);
          local_b8 = *piVar12;
          local_b4 = piVar12[1];
          uVar10 = FUN_0277da10(&local_b8);
          if ((uVar10 & 1) != 0) {
            if (NAN(*param_4)) goto LAB_008e46f4;
            local_c8 = local_b8;
            iStack_c4 = local_b4;
            local_d0 = puVar3;
            iVar8 = FUN_0277d6c4(&local_c8);
            if (iVar8 - 0xf619U < 7) {
              fVar21 = 3.4028235e+38;
            }
            else {
              lVar15 = *plVar20;
              if (((((lVar15 != 0) && (*(long *)(lVar15 + 0xb0) != 0)) &&
                   ((*(long *)(*(long *)(lVar15 + 0xb0) + 8) != 0 &&
                    ((*(long *)(lVar15 + 0x488) != 0 &&
                     (*(long *)(*(long *)(lVar15 + 0x488) + 8) != 0)))))) &&
                  (*(long *)(lVar15 + 0x2b0) != 0)) &&
                 (*(long *)(*(long *)(lVar15 + 0x2b0) + 8) != 0)) {
                uVar9 = FUN_0277d6c4(&local_b8);
                uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
                   (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) == 0))
                goto LAB_008e490c;
                FUN_0124c030(&local_d0,&local_b8);
                fVar21 = 0.0;
                if (local_c0 != 0) {
                  pfVar13 = (float *)FUN_01246470(local_c0,0,0xc315945,
                                                  *(undefined8 *)PTR_DAT_04bbbca8);
                  if (pfVar13 != (float *)0x0) {
                    fVar21 = *pfVar13;
                  }
                  goto LAB_008e4bd0;
                }
                goto LAB_008e4bcc;
              }
LAB_008e490c:
              uVar10 = FUN_0277e158(&local_b8);
              puVar17 = PTR_DAT_04bb43c0;
              fVar21 = 5.0;
              if ((uVar10 & 1) == 0) {
                lVar19 = *(long *)PTR_DAT_04bb43c0;
                uVar9 = FUN_0277d6c4(&local_b8);
                plVar20 = (long *)PTR_DAT_04bbbc68;
                lVar15 = *(long *)puVar17;
                fVar21 = 0.0;
                if (lVar15 != 0) {
                  lVar19 = *(long *)(lVar19 + 0x57e58);
                  uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
                  if (uVar9 < *(uint *)(lVar19 + 0x1d8)) {
                    if (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar9 * 8) != 0) {
                      local_c0 = 0;
                      local_c8 = local_b8;
                      iStack_c4 = local_b4;
                      local_d0 = puVar4;
                      uVar9 = FUN_0277d6c4(&local_c8);
                      if (*(long *)PTR_DAT_04bb43c0 != 0) {
                        lVar15 = *(long *)(lVar15 + 0x57e58);
                        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                        if ((uVar9 < *(uint *)(lVar15 + 0x1d8)) &&
                           (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
                          lVar15 = *(long *)PTR_DAT_04bc0428;
                          uVar9 = FUN_0277d6c4(&local_b8);
                          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                          if ((uVar9 < *(uint *)(lVar15 + 0x1d8)) &&
                             (lVar15 = *(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8),
                             lVar15 != 0)) {
                            local_c0 = lVar15;
                          }
                        }
                      }
                      uVar10 = FUN_01ae59b0(&local_d0);
                      puVar17 = PTR_DAT_04bb43c0;
                      if ((uVar10 & 1) == 0) goto LAB_008e4bd0;
                      local_c0 = 0;
                      local_c8 = local_b8;
                      iStack_c4 = local_b4;
                      local_d0 = PTR_DAT_04bc0510 + 0x10;
                      lVar15 = *(long *)PTR_DAT_04bb43c0;
                      uVar9 = FUN_0277d6c4(&local_c8);
                      if (*(long *)puVar17 != 0) {
                        lVar15 = *(long *)(lVar15 + 0x57e58);
                        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                        if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
                           (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) == 0))
                        goto LAB_008e4bd0;
                        lVar15 = *(long *)PTR_DAT_04bc0428;
                        uVar9 = FUN_0277d6c4(&local_b8);
                        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                        if ((uVar9 < *(uint *)(lVar15 + 0x1d8)) &&
                           ((puVar16 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8),
                            puVar16 != (uint *)0x0 && (uVar9 = *puVar16, uVar9 != 0)))) {
                          cVar18 = *PTR_DAT_04bbfe88;
                          puVar17 = PTR_DAT_04bbfe90;
                          do {
                            if (cVar18 == '\0') {
                              *PTR_DAT_04bbfe88 = 1;
                              cVar18 = '\x01';
                              memset(puVar17,0xff,0x1ac);
                              uVar9 = *puVar16;
                            }
                            else {
                              uVar6 = *(uint *)(puVar17 + 0x28);
                              if (-1 < (int)uVar6) {
                                plVar20 = (long *)PTR_DAT_04bbbc68;
                                if ((float *)((ulong)uVar6 + (long)puVar16) != (float *)0x0) {
                                  fVar21 = *(float *)((ulong)uVar6 + (long)puVar16);
                                }
                                goto LAB_008e4bd0;
                              }
                              if (uVar6 != 0xffffffff) goto LAB_008e4bbc;
                            }
                            puVar14 = (uint *)(ulong)uVar9;
                            if ((puVar14 == (uint *)0x0) || (puVar16 == puVar14)) goto LAB_008e4bbc;
                            lVar15 = 0xc;
                            if (*(char *)((long)puVar16 + (10 - (long)puVar14)) != '\0') {
                              lVar15 = 0x1c;
                            }
                            lVar15 = (long)puVar16 + (lVar15 - (long)puVar14);
                            if (lVar15 == 0) goto LAB_008e4bbc;
                            uVar10 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar14));
                            *(undefined4 *)(puVar17 + 0x28) = 0xfffffffe;
                            puVar17 = PTR_DAT_04bbfe90;
                            if (uVar10 == 0) goto LAB_008e4bbc;
                            piVar12 = (int *)(lVar15 + 4);
                            while (piVar12[-1] != -0x3e783aea) {
                              piVar12 = piVar12 + 2;
                              uVar10 = uVar10 - 1;
                              if (uVar10 == 0) goto LAB_008e4bbc;
                            }
                            iVar8 = 0;
                            if (*piVar12 != -1) {
                              iVar8 = *piVar12;
                            }
                            *(int *)(PTR_DAT_04bbfe90 + 0x28) = iVar8;
                            uVar9 = *puVar16;
                            if (uVar9 == 0) goto LAB_008e4bbc;
                          } while( true );
                        }
                      }
                    }
LAB_008e4bcc:
                    fVar21 = 0.0;
                    goto LAB_008e4bd0;
                  }
                }
LAB_008e4bbc:
                plVar20 = (long *)PTR_DAT_04bbbc68;
              }
            }
LAB_008e4bd0:
            if (NAN(*param_4)) {
              *param_4 = 0.0;
              if (0.0 < fVar21) goto LAB_008e46f4;
            }
            else if (*param_4 < fVar21) goto LAB_008e46f4;
          }
          if (*(char *)param_1[3] != '\0') {
            local_c8 = 0;
            local_d0 = (undefined *)0x0;
            local_d0 = (undefined *)0x100;
            local_c8 = 0;
            lVar15 = *(long *)puVar7;
            if ((lVar15 != 0) && (*(long *)(lVar15 + 0xa8) != 0)) {
              uVar10 = FUN_00949ac8(lVar15 + 0x28,&local_a0,&local_d0);
              if ((uVar10 & 1) != 0) goto LAB_008e46f4;
              lVar15 = *(long *)puVar7;
            }
            if ((((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0xa8), lVar15 != 0)) &&
                (-1 < (int)local_98)) &&
               (((((-1 < (int)local_94 && (local_98 < *(uint *)(lVar15 + 0x38))) &&
                  ((local_94 < *(uint *)(lVar15 + 0x3c) &&
                   ((uVar9 = local_98 + *(uint *)(lVar15 + 0x38) * local_94,
                    uVar9 < *(uint *)(lVar15 + 0x68) && (*(long *)(lVar15 + 0x70) != 0)))))) &&
                 ((*(uint *)(*(long *)(lVar15 + 0x70) + (long)(int)uVar9 * 4) >> 3 & 1) != 0)) ||
                (((((-1 < (int)local_98 && (-1 < (int)local_94)) &&
                   (local_98 < *(uint *)(lVar15 + 0x38))) &&
                  ((local_94 < *(uint *)(lVar15 + 0x3c) &&
                   (uVar9 = local_98 + *(uint *)(lVar15 + 0x38) * local_94,
                   uVar9 < *(uint *)(lVar15 + 0x68))))) &&
                 ((*(long *)(lVar15 + 0x70) != 0 &&
                  ((*(uint *)(*(long *)(lVar15 + 0x70) + (long)(int)uVar9 * 4) >> 5 & 1) != 0)))))))
               ) goto LAB_008e46f4;
            local_c8 = (int)((float)(int)*param_3 / 5.0) - (uint)(*param_3 < 0.0);
            iStack_c4 = (int)((float)(int)param_3[2] / 5.0) - (uint)(param_3[2] < 0.0);
            local_d0 = puVar2;
            fVar21 = (float)FUN_013866c0(&local_d0,0);
            fVar22 = (float)FUN_013866c0(&local_a0,0);
            if (fVar21 - fVar22 < -5.0) goto LAB_008e46f4;
          }
          if ((int)local_98 < *(int *)(local_a8 + 8)) {
            local_98 = local_98 + 1;
          }
          else {
            local_94 = local_94 + 1;
            local_98 = *(uint *)(local_b0 + 8);
          }
        } while ((uVar5 != local_98) || (uVar1 != local_94));
      }
      uVar11 = 0;
    }
  }
  else {
LAB_008e46f4:
    uVar11 = 1;
  }
  return uVar11;
}

