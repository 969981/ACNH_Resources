
void FUN_003c2440(long param_1,long param_2,uint param_3,float *param_4,long param_5,long param_6)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_d0 [4];
  float afStack_c0 [20];
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x280) + 0x10))();
  uVar7 = (ulong)uVar1;
  if (0 < (int)uVar1) {
    memset(local_d0,0,uVar7 << 2);
  }
  lVar9 = 0;
  uVar8 = 0;
  do {
    if ((*(uint *)(param_1 + 0x208) >> (ulong)((uint)lVar9 & 0x1f) & 1) != 0) {
      lVar3 = FUN_03b38a74();
      uVar8 = uVar8 | *(byte *)(lVar3 + lVar9 + 0x510);
    }
    lVar9 = lVar9 + 1;
  } while (lVar9 != 0x20);
  if (((uVar8 >> (ulong)(param_3 & 0x1f) & 1) != 0) && (0 < (int)uVar1)) {
    fVar11 = param_4[0x10] + 1.0;
    uVar4 = (**(code **)(**(long **)(param_1 + 0x280) + 0x20))(*(long **)(param_1 + 0x280),0);
    fVar12 = 0.0;
    if (0.0 <= fVar11) {
      fVar12 = fVar11;
    }
    local_d0[0] = 1.0;
    if (fVar11 <= 1.0) {
      local_d0[0] = fVar12;
    }
    fVar12 = 0.0;
    if (0.0 <= fVar11) {
      fVar12 = fVar11;
    }
    if ((uVar4 & 1) == 0) {
      local_d0[0] = fVar12;
    }
    if (uVar1 == 1) goto LAB_003c26b8;
    fVar12 = param_4[0x11];
    uVar4 = (**(code **)(**(long **)(param_1 + 0x280) + 0x20))(*(long **)(param_1 + 0x280),1);
    if ((uVar4 & 1) == 0) {
      local_d0[1] = 0.0;
      if (0.0 <= fVar12) {
        local_d0[1] = fVar12;
      }
    }
    else {
      fVar11 = 0.0;
      if (0.0 <= fVar12) {
        fVar11 = fVar12;
      }
      local_d0[1] = 1.0;
      if (fVar12 <= 1.0) {
        local_d0[1] = fVar11;
      }
    }
    if (uVar1 == 2) goto LAB_003c26b8;
    fVar12 = param_4[0x12];
    uVar4 = (**(code **)(**(long **)(param_1 + 0x280) + 0x20))(*(long **)(param_1 + 0x280),2);
    if ((uVar4 & 1) == 0) {
      local_d0[2] = 0.0;
      if (0.0 <= fVar12) {
        local_d0[2] = fVar12;
      }
    }
    else {
      fVar11 = 0.0;
      if (0.0 <= fVar12) {
        fVar11 = fVar12;
      }
      local_d0[2] = 1.0;
      if (fVar12 <= 1.0) {
        local_d0[2] = fVar11;
      }
    }
    if (uVar1 == 3) goto LAB_003c26b8;
    fVar12 = param_4[0x13];
    uVar4 = (**(code **)(**(long **)(param_1 + 0x280) + 0x20))(*(long **)(param_1 + 0x280),3);
    if ((uVar4 & 1) == 0) {
      local_d0[3] = 0.0;
      if (0.0 <= fVar12) {
        local_d0[3] = fVar12;
      }
    }
    else {
      fVar11 = 0.0;
      if (0.0 <= fVar12) {
        fVar11 = fVar12;
      }
      local_d0[3] = 1.0;
      if (fVar12 <= 1.0) {
        local_d0[3] = fVar11;
      }
    }
    if (uVar1 == 4) goto LAB_003c26b8;
    uVar4 = 4;
    do {
      while( true ) {
        if ((param_5 == 0) || (uVar5 = FUN_003c039c(param_5), (uVar5 & 1) == 0)) goto LAB_003c26b0;
        uVar5 = (**(code **)(**(long **)(param_1 + 0x280) + 0x20))
                          (*(long **)(param_1 + 0x280),uVar4 & 0xffffffff);
        fVar12 = (float)FUN_003c0374(param_5,uVar4 & 0xffffffff);
        if ((uVar5 & 1) == 0) break;
        fVar11 = 0.0;
        if (0.0 <= fVar12) {
          fVar11 = fVar12;
        }
        fVar10 = 1.0;
        if (fVar12 <= 1.0) {
          fVar10 = fVar11;
        }
        local_d0[uVar4] = fVar10;
        uVar4 = uVar4 + 1;
        if (uVar7 == uVar4) goto LAB_003c26b0;
      }
      fVar11 = 0.0;
      if (0.0 <= fVar12) {
        fVar11 = fVar12;
      }
      local_d0[uVar4] = fVar11;
      uVar4 = uVar4 + 1;
    } while (uVar7 != uVar4);
  }
LAB_003c26b0:
  if ((int)uVar1 < 1) {
    return;
  }
LAB_003c26b8:
  if (param_5 == 0) {
    uVar4 = 0;
    do {
      iVar2 = (**(code **)(**(long **)(param_1 + 0x280) + 8))();
      if (0 < iVar2) {
        iVar2 = (**(code **)(**(long **)(param_1 + 0x280) + 8))();
        iVar6 = (int)uVar4;
        uVar5 = -(ulong)((uint)(iVar2 * iVar6) >> 0x1f) & 0xfffffffc00000000 |
                (ulong)(uint)(iVar2 * iVar6) << 2;
        *(float *)(param_2 + uVar5) = *param_4 * local_d0[uVar4] * *(float *)(param_6 + uVar5);
        iVar2 = (**(code **)(**(long **)(param_1 + 0x280) + 8))();
        if (5 < iVar2) {
          iVar2 = 6;
        }
        if (1 < iVar2) {
          iVar2 = (**(code **)(**(long **)(param_1 + 0x280) + 8))();
          lVar9 = (-(ulong)((uint)(iVar2 * iVar6) >> 0x1f) & 0xfffffffc00000000 |
                  (ulong)(uint)(iVar2 * iVar6) << 2) + 4;
          *(float *)(param_2 + lVar9) = *param_4 * local_d0[uVar4] * *(float *)(param_6 + lVar9);
          iVar2 = (**(code **)(**(long **)(param_1 + 0x280) + 8))();
          if (5 < iVar2) {
            iVar2 = 6;
          }
          if (2 < iVar2) {
            iVar2 = (**(code **)(**(long **)(param_1 + 0x280) + 8))();
            lVar9 = (-(ulong)((uint)(iVar2 * iVar6) >> 0x1f) & 0xfffffffc00000000 |
                    (ulong)(uint)(iVar2 * iVar6) << 2) + 8;
            *(float *)(param_2 + lVar9) = *param_4 * local_d0[uVar4] * *(float *)(param_6 + lVar9);
            iVar2 = (**(code **)(**(long **)(param_1 + 0x280) + 8))();
            if (5 < iVar2) {
              iVar2 = 6;
            }
            if (3 < iVar2) {
              iVar2 = (**(code **)(**(long **)(param_1 + 0x280) + 8))();
              lVar9 = (-(ulong)((uint)(iVar2 * iVar6) >> 0x1f) & 0xfffffffc00000000 |
                      (ulong)(uint)(iVar2 * iVar6) << 2) + 0xc;
              *(float *)(param_2 + lVar9) = *param_4 * local_d0[uVar4] * *(float *)(param_6 + lVar9)
              ;
              iVar2 = (**(code **)(**(long **)(param_1 + 0x280) + 8))();
              if (5 < iVar2) {
                iVar2 = 6;
              }
              if (4 < iVar2) {
                iVar2 = (**(code **)(**(long **)(param_1 + 0x280) + 8))();
                lVar9 = (-(ulong)((uint)(iVar2 * iVar6) >> 0x1f) & 0xfffffffc00000000 |
                        (ulong)(uint)(iVar2 * iVar6) << 2) + 0x10;
                *(float *)(param_2 + lVar9) =
                     *param_4 * local_d0[uVar4] * *(float *)(param_6 + lVar9);
                iVar2 = (**(code **)(**(long **)(param_1 + 0x280) + 8))();
                if (5 < iVar2) {
                  iVar2 = 6;
                }
                if (5 < iVar2) {
                  iVar2 = (**(code **)(**(long **)(param_1 + 0x280) + 8))();
                  lVar9 = (-(ulong)((uint)(iVar2 * iVar6) >> 0x1f) & 0xfffffffc00000000 |
                          (ulong)(uint)(iVar2 * iVar6) << 2) + 0x14;
                  *(float *)(param_2 + lVar9) =
                       *param_4 * local_d0[uVar4] * *(float *)(param_6 + lVar9);
                  (**(code **)(**(long **)(param_1 + 0x280) + 8))();
                }
              }
            }
          }
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar7 != uVar4);
  }
  else {
    uVar4 = 0;
    do {
      iVar2 = (**(code **)(**(long **)(param_1 + 0x280) + 8))();
      if (0 < iVar2) {
        iVar2 = (**(code **)(**(long **)(param_1 + 0x280) + 8))();
        iVar6 = (int)uVar4;
        fVar12 = *param_4 * local_d0[uVar4] * *(float *)(param_6 + (long)(iVar2 * iVar6) * 4);
        uVar5 = FUN_003c04b4(param_5);
        if (((uVar5 & 1) != 0) &&
           (uVar5 = FUN_003c047c(param_5,uVar4 & 0xffffffff), (uVar5 & 1) == 0)) {
          fVar11 = (float)FUN_003c0460(param_5);
          fVar12 = fVar12 * fVar11;
        }
        *(float *)(param_2 + (long)(iVar2 * iVar6) * 4) = fVar12;
        iVar2 = (**(code **)(**(long **)(param_1 + 0x280) + 8))();
        if (5 < iVar2) {
          iVar2 = 6;
        }
        if (1 < iVar2) {
          iVar2 = (**(code **)(**(long **)(param_1 + 0x280) + 8))();
          lVar9 = (long)(iVar2 * iVar6) + 1;
          fVar12 = *param_4 * local_d0[uVar4] * *(float *)(param_6 + lVar9 * 4);
          uVar5 = FUN_003c04b4(param_5);
          if (((uVar5 & 1) != 0) &&
             (uVar5 = FUN_003c047c(param_5,uVar4 & 0xffffffff), (uVar5 & 1) == 0)) {
            fVar11 = (float)FUN_003c0460(param_5);
            fVar12 = fVar12 * fVar11;
          }
          *(float *)(param_2 + lVar9 * 4) = fVar12;
          iVar2 = (**(code **)(**(long **)(param_1 + 0x280) + 8))();
          if (5 < iVar2) {
            iVar2 = 6;
          }
          if (2 < iVar2) {
            iVar2 = (**(code **)(**(long **)(param_1 + 0x280) + 8))();
            lVar9 = (long)(iVar2 * iVar6) + 2;
            fVar12 = *param_4 * local_d0[uVar4] * *(float *)(param_6 + lVar9 * 4);
            uVar5 = FUN_003c04b4(param_5);
            if (((uVar5 & 1) != 0) &&
               (uVar5 = FUN_003c047c(param_5,uVar4 & 0xffffffff), (uVar5 & 1) == 0)) {
              fVar11 = (float)FUN_003c0460(param_5);
              fVar12 = fVar12 * fVar11;
            }
            *(float *)(param_2 + lVar9 * 4) = fVar12;
            iVar2 = (**(code **)(**(long **)(param_1 + 0x280) + 8))();
            if (5 < iVar2) {
              iVar2 = 6;
            }
            if (3 < iVar2) {
              iVar2 = (**(code **)(**(long **)(param_1 + 0x280) + 8))();
              lVar9 = (long)(iVar2 * iVar6) + 3;
              fVar12 = *param_4 * local_d0[uVar4] * *(float *)(param_6 + lVar9 * 4);
              uVar5 = FUN_003c04b4(param_5);
              if (((uVar5 & 1) != 0) &&
                 (uVar5 = FUN_003c047c(param_5,uVar4 & 0xffffffff), (uVar5 & 1) == 0)) {
                fVar11 = (float)FUN_003c0460(param_5);
                fVar12 = fVar12 * fVar11;
              }
              *(float *)(param_2 + lVar9 * 4) = fVar12;
              iVar2 = (**(code **)(**(long **)(param_1 + 0x280) + 8))();
              if (5 < iVar2) {
                iVar2 = 6;
              }
              if (4 < iVar2) {
                iVar2 = (**(code **)(**(long **)(param_1 + 0x280) + 8))();
                lVar9 = (long)(iVar2 * iVar6) + 4;
                fVar12 = *param_4 * local_d0[uVar4] * *(float *)(param_6 + lVar9 * 4);
                uVar5 = FUN_003c04b4(param_5);
                if (((uVar5 & 1) != 0) &&
                   (uVar5 = FUN_003c047c(param_5,uVar4 & 0xffffffff), (uVar5 & 1) == 0)) {
                  fVar11 = (float)FUN_003c0460(param_5);
                  fVar12 = fVar12 * fVar11;
                }
                *(float *)(param_2 + lVar9 * 4) = fVar12;
                iVar2 = (**(code **)(**(long **)(param_1 + 0x280) + 8))();
                if (5 < iVar2) {
                  iVar2 = 6;
                }
                if (5 < iVar2) {
                  iVar2 = (**(code **)(**(long **)(param_1 + 0x280) + 8))();
                  lVar9 = (long)(iVar2 * iVar6) + 5;
                  fVar12 = *param_4 * local_d0[uVar4] * *(float *)(param_6 + lVar9 * 4);
                  uVar5 = FUN_003c04b4(param_5);
                  if (((uVar5 & 1) != 0) &&
                     (uVar5 = FUN_003c047c(param_5,uVar4 & 0xffffffff), (uVar5 & 1) == 0)) {
                    fVar11 = (float)FUN_003c0460(param_5);
                    fVar12 = fVar12 * fVar11;
                  }
                  *(float *)(param_2 + lVar9 * 4) = fVar12;
                  (**(code **)(**(long **)(param_1 + 0x280) + 8))();
                }
              }
            }
          }
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar7 != uVar4);
  }
  return;
}

