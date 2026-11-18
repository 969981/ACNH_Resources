
bool FUN_033710d0(long *param_1,int param_2,int param_3,long param_4)

{
  int iVar1;
  ushort uVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_d8 [12];
  float local_cc;
  float local_b8;
  long *local_b0;
  char local_a0;
  float local_98;
  
  if (param_4 == 0) {
LAB_033715cc:
    bVar4 = *(int *)((long)param_1 + 0xc) <= param_2;
  }
  else {
    FUN_00358b98(auStack_d8);
    puVar3 = PTR_DAT_04bc9498;
    plVar6 = (long *)(**(code **)(**(long **)PTR_DAT_04bc9498 + 0x60))(*(long **)PTR_DAT_04bc9498,0)
    ;
    plVar7 = *(long **)puVar3;
    plVar7 = (long *)(**(code **)(*plVar7 + 0x60))(plVar7,1);
    plVar8 = *(long **)puVar3;
    plVar8 = (long *)(**(code **)(*plVar8 + 0x60))(plVar8,2);
    local_b0 = plVar6;
    FUN_00350090(*(undefined4 *)(param_4 + 0xf8),*(undefined4 *)(param_4 + 0xfc),auStack_d8);
    local_98 = *(float *)(param_4 + 0x104);
    iVar1 = *(int *)((long)param_1 + 0xc);
    if (iVar1 < 1) {
      if (-1 < param_3) goto LAB_033712d8;
    }
    else {
      fVar13 = *(float *)(param_4 + 0x50);
      fVar14 = 0.0;
      iVar11 = 0;
      iVar10 = 0;
LAB_033711d0:
      do {
        uVar2 = *(ushort *)(*param_1 + (long)iVar10 * 2);
        if (uVar2 == 10) {
          iVar10 = iVar10 + 1;
        }
        else {
          fVar12 = 0.0;
          if (0x1f < uVar2) {
            lVar9 = 0;
            bVar4 = false;
            do {
              if (*(ushort *)((long)&DAT_0418dd00 + lVar9) <= uVar2) {
                bVar4 = (bool)(uVar2 <= *(ushort *)((long)&DAT_0418dd02 + lVar9) | bVar4);
              }
              if (*(ushort *)((long)&DAT_0418dd04 + lVar9) <= uVar2) {
                bVar4 = (bool)(uVar2 <= *(ushort *)((long)&DAT_0418dd06 + lVar9) | bVar4);
              }
              lVar9 = lVar9 + 8;
            } while (lVar9 != 0x398);
            if (bVar4) {
              if (local_a0 == '\0') {
                iVar5 = (**(code **)(*local_b0 + 0x80))(local_b0,uVar2);
                fVar12 = local_cc * (float)iVar5;
              }
              else {
                fVar12 = local_b8;
              }
            }
            else {
              fVar12 = local_cc * 41.0;
            }
          }
          if ((fVar14 + fVar12 < fVar13) && (iVar5 = iVar10 + 1, iVar10 = iVar1, iVar5 != iVar1)) {
            fVar14 = fVar14 + fVar12 + local_98;
            iVar10 = iVar5;
            if (iVar1 <= iVar5) break;
            goto LAB_033711d0;
          }
        }
        fVar14 = 0.0;
        iVar5 = 1;
        if (iVar10 == iVar1 && uVar2 == 10) {
          iVar5 = 2;
        }
        iVar11 = iVar5 + iVar11;
      } while (iVar10 < iVar1);
      if (iVar11 <= param_3) {
LAB_033712d8:
        local_b0 = plVar7;
        FUN_00350090(*(undefined4 *)(param_4 + 0xf8),*(undefined4 *)(param_4 + 0xfc),auStack_d8);
        local_98 = *(float *)(param_4 + 0x104);
        iVar1 = *(int *)((long)param_1 + 0xc);
        if (iVar1 < 1) {
          if (-1 < param_3) goto LAB_03371448;
        }
        else {
          fVar13 = *(float *)(param_4 + 0x50);
          fVar14 = 0.0;
          iVar11 = 0;
          iVar10 = 0;
LAB_03371344:
          do {
            uVar2 = *(ushort *)(*param_1 + (long)iVar10 * 2);
            if (uVar2 == 10) {
              iVar10 = iVar10 + 1;
            }
            else {
              fVar12 = 0.0;
              if (0x1f < uVar2) {
                lVar9 = 0;
                bVar4 = false;
                do {
                  if (*(ushort *)((long)&DAT_0418dd00 + lVar9) <= uVar2) {
                    bVar4 = (bool)(uVar2 <= *(ushort *)((long)&DAT_0418dd02 + lVar9) | bVar4);
                  }
                  if (*(ushort *)((long)&DAT_0418dd04 + lVar9) <= uVar2) {
                    bVar4 = (bool)(uVar2 <= *(ushort *)((long)&DAT_0418dd06 + lVar9) | bVar4);
                  }
                  lVar9 = lVar9 + 8;
                } while (lVar9 != 0x398);
                if (bVar4) {
                  if (local_a0 == '\0') {
                    iVar5 = (**(code **)(*local_b0 + 0x80))(local_b0,uVar2);
                    fVar12 = local_cc * (float)iVar5;
                  }
                  else {
                    fVar12 = local_b8;
                  }
                }
                else {
                  fVar12 = local_cc * 41.0;
                }
              }
              if ((fVar14 + fVar12 < fVar13) && (iVar5 = iVar10 + 1, iVar10 = iVar1, iVar5 != iVar1)
                 ) {
                fVar14 = fVar14 + fVar12 + local_98;
                iVar10 = iVar5;
                if (iVar1 <= iVar5) break;
                goto LAB_03371344;
              }
            }
            fVar14 = 0.0;
            iVar5 = 1;
            if (iVar10 == iVar1 && uVar2 == 10) {
              iVar5 = 2;
            }
            iVar11 = iVar5 + iVar11;
          } while (iVar10 < iVar1);
          if (iVar11 <= param_3) {
LAB_03371448:
            local_b0 = plVar8;
            FUN_00350090(*(undefined4 *)(param_4 + 0xf8),*(undefined4 *)(param_4 + 0xfc),auStack_d8)
            ;
            local_98 = *(float *)(param_4 + 0x104);
            iVar1 = *(int *)((long)param_1 + 0xc);
            if (iVar1 < 1) {
              if (-1 < param_3) goto LAB_033715c0;
            }
            else {
              fVar13 = *(float *)(param_4 + 0x50);
              fVar14 = 0.0;
              iVar11 = 0;
              iVar10 = 0;
LAB_033714b4:
              do {
                uVar2 = *(ushort *)(*param_1 + (long)iVar10 * 2);
                if (uVar2 == 10) {
                  iVar10 = iVar10 + 1;
                }
                else {
                  fVar12 = 0.0;
                  if (0x1f < uVar2) {
                    lVar9 = 0;
                    bVar4 = false;
                    do {
                      if (*(ushort *)((long)&DAT_0418dd00 + lVar9) <= uVar2) {
                        bVar4 = (bool)(uVar2 <= *(ushort *)((long)&DAT_0418dd02 + lVar9) | bVar4);
                      }
                      if (*(ushort *)((long)&DAT_0418dd04 + lVar9) <= uVar2) {
                        bVar4 = (bool)(uVar2 <= *(ushort *)((long)&DAT_0418dd06 + lVar9) | bVar4);
                      }
                      lVar9 = lVar9 + 8;
                    } while (lVar9 != 0x398);
                    if (bVar4) {
                      if (local_a0 == '\0') {
                        iVar5 = (**(code **)(*local_b0 + 0x80))(local_b0,uVar2);
                        fVar12 = local_cc * (float)iVar5;
                      }
                      else {
                        fVar12 = local_b8;
                      }
                    }
                    else {
                      fVar12 = local_cc * 41.0;
                    }
                  }
                  if ((fVar14 + fVar12 < fVar13) &&
                     (iVar5 = iVar10 + 1, iVar10 = iVar1, iVar5 != iVar1)) {
                    fVar14 = fVar14 + fVar12 + local_98;
                    iVar10 = iVar5;
                    if (iVar1 <= iVar5) break;
                    goto LAB_033714b4;
                  }
                }
                fVar14 = 0.0;
                iVar5 = 1;
                if (iVar10 == iVar1 && uVar2 == 10) {
                  iVar5 = 2;
                }
                iVar11 = iVar5 + iVar11;
              } while (iVar10 < iVar1);
              if (iVar11 <= param_3) {
LAB_033715c0:
                thunk_FUN_0035008c(auStack_d8);
                goto LAB_033715cc;
              }
            }
          }
        }
      }
    }
    thunk_FUN_0035008c(auStack_d8);
    bVar4 = false;
  }
  return bVar4;
}

