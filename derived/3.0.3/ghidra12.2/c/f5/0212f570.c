
void FUN_0212f570(long param_1)

{
  float *pfVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  int *piVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  uint *puVar14;
  long lVar15;
  byte *pbVar16;
  byte bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 local_a8;
  float local_a0;
  undefined8 local_9c;
  undefined8 local_94;
  byte local_8c [12];
  
  if (*(long *)(param_1 + 0x260) != 0) {
    FUN_02507c6c(local_8c,7,1,1,0);
    puVar5 = PTR_DAT_04bb5038;
    puVar4 = PTR_DAT_04bb4718;
    puVar3 = PTR_DAT_04bb3238;
    puVar2 = PTR_DAT_04bb27c0;
    if (local_8c[0] < 8) {
      fVar20 = 3.4028235e+38;
      bVar17 = 0xff;
      do {
        uVar8 = FUN_025273b8(local_8c);
        if ((uVar8 & 1) != 0) {
          puVar14 = (uint *)puVar3;
          if ((ulong)local_8c[0] < 8) {
            if (*(long *)puVar4 != 0) {
              puVar14 = (uint *)(*(long *)puVar4 + (ulong)local_8c[0] * 4 + 0xde8);
              goto LAB_0212f65c;
            }
            lVar13 = *(long *)puVar2;
          }
          else {
LAB_0212f65c:
            lVar13 = *(long *)puVar2;
          }
          if (lVar13 != 0) {
            uVar12 = *puVar14;
            if ((((uVar12 == 0) ||
                 (lVar15 = *(long *)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) +
                                    ((ulong)(uVar12 >> 0x11) & 0x7ff8)), lVar15 == 0)) ||
                ((*(uint *)(lVar15 + 0x248) >> 1 & 1) != 0)) ||
               (*(uint *)(lVar15 + 0x230) != uVar12)) {
              lVar15 = 0;
            }
            if (*(int *)(lVar13 + 0x288) == 1 || *(int *)(lVar13 + 0x288) == -1) {
              plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68)
                                                  );
              lVar13 = *(long *)puVar2;
              iVar7 = (**(code **)(*plVar9 + 0x60))();
              if (iVar7 < 0x11) {
                uVar12 = 1;
              }
              else {
                if (4 < *(uint *)(lVar13 + 0x5e8)) goto LAB_0212f700;
                uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar13 + 0x5e8) & 0x1f) & 1;
              }
            }
            else {
LAB_0212f700:
              uVar12 = 0;
            }
            if (lVar15 != 0) {
              uVar12 = uVar12 ^ 1;
              if (*(int *)(lVar15 + 0x150) != 1) {
                uVar12 = 1;
              }
              if (uVar12 == 0) {
                lVar13 = *(long *)(lVar15 + 0x68);
                pfVar1 = (float *)(PTR_DAT_04bb2d00 +
                                  ((ulong)(*(uint *)(lVar13 + 0x2b4) >> 0x14) & 0xff0));
                fVar18 = (float)(*(uint *)(lVar13 + 0x2b4) & 0xffffff) * 5.9604645e-08;
                local_a8._0_4_ = (float)*(undefined8 *)(lVar13 + 0x278);
                local_a8._4_4_ = (float)((ulong)*(undefined8 *)(lVar13 + 0x278) >> 0x20);
                local_a8 = CONCAT44(local_a8._4_4_ + 0.0,
                                    (*pfVar1 + fVar18 * pfVar1[1]) * 5.0 + (float)local_a8);
                local_a0 = (pfVar1[2] + fVar18 * pfVar1[3]) * 5.0 + *(float *)(lVar13 + 0x280);
                uVar8 = FUN_02087eec(*(undefined8 *)
                                      (*(long *)(*(long *)(param_1 + 0x2d0) + 8) + 0x3c0),&local_a8,
                                     0);
                if ((uVar8 & 1) != 0) {
                  lVar13 = *(long *)(*(long *)(*(long *)(param_1 + 0x2d0) + 8) + 0x68);
                  fVar18 = *(float *)(lVar13 + 0x278) - (float)local_a8;
                  fVar19 = *(float *)(lVar13 + 0x280) - local_a0;
                  fVar18 = fVar19 * fVar19 + fVar18 * fVar18;
                  if (fVar18 < fVar20) {
                    fVar20 = fVar18;
                    bVar17 = local_8c[0];
                    if (7 < local_8c[0]) {
                      bVar17 = 0xff;
                    }
                  }
                }
              }
            }
          }
        }
        iVar7 = *(int *)(param_1 + 0x2dc);
        if (bVar17 < 8) {
          if (iVar7 == 0) {
            piVar10 = (int *)(**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x20e8) + 0xf0))
                                       (*(long *)PTR_DAT_04bb3968 + 0x20e8);
            local_a8 = 0;
            local_a0._0_1_ = 0xff;
            local_9c = 0;
            *(int *)(param_1 + 0x2dc) = *piVar10 * 0x1e;
            local_94 = 0xfffe;
            FUN_0277d4ac(&local_94);
            local_a0 = (float)CONCAT31(local_a0._1_3_,bVar17);
            local_a8 = CONCAT44(local_a8._4_4_,0xb);
            FUN_0212ea40(param_1,&local_a8);
          }
        }
        else if (0 < iVar7) {
          *(int *)(param_1 + 0x2dc) = iVar7 + -1;
        }
        bVar6 = local_8c[0];
        uVar8 = (ulong)local_8c[0];
        if (7 < local_8c[0]) {
          return;
        }
        if (uVar8 + 1 == 8) {
          return;
        }
        pbVar16 = puVar5 + uVar8 + 1;
        uVar11 = FUN_02507924(local_8c,pbVar16);
        if ((uVar11 & 1) == 0) {
          if (uVar8 + 2 == 8) {
            return;
          }
          pbVar16 = puVar5 + uVar8 + 2;
          uVar11 = FUN_02507924(local_8c,pbVar16);
          if ((uVar11 & 1) == 0) {
            if (uVar8 + 3 == 8) {
              return;
            }
            pbVar16 = puVar5 + uVar8 + 3;
            uVar11 = FUN_02507924(local_8c,pbVar16);
            if ((uVar11 & 1) == 0) {
              if (uVar8 + 4 == 8) {
                return;
              }
              pbVar16 = puVar5 + uVar8 + 4;
              uVar11 = FUN_02507924(local_8c,pbVar16);
              if ((uVar11 & 1) == 0) {
                if (uVar8 + 5 == 8) {
                  return;
                }
                pbVar16 = puVar5 + uVar8 + 5;
                uVar11 = FUN_02507924(local_8c,pbVar16);
                if ((uVar11 & 1) == 0) {
                  if (uVar8 + 6 == 8) {
                    return;
                  }
                  pbVar16 = puVar5 + uVar8 + 6;
                  uVar11 = FUN_02507924(local_8c,pbVar16);
                  if ((uVar11 & 1) == 0) {
                    if (uVar8 + 7 == 8) {
                      return;
                    }
                    pbVar16 = puVar5 + uVar8 + 7;
                    uVar11 = FUN_02507924(local_8c,pbVar16);
                    if ((uVar11 & 1) == 0) {
                      if (bVar6 == 0) {
                        return;
                      }
                      pbVar16 = puVar5 + uVar8 + 8;
                      FUN_02507924(local_8c,pbVar16);
                    }
                  }
                }
              }
            }
          }
        }
        local_8c[0] = *pbVar16;
        if (7 < local_8c[0]) {
          return;
        }
      } while( true );
    }
  }
  return;
}

