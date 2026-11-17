
bool FUN_030b0630(long *param_1)

{
  bool bVar1;
  undefined *puVar2;
  TouchScreenState *pTVar3;
  TouchScreenState *pTVar4;
  float *pfVar5;
  long lVar6;
  char cVar7;
  byte bVar8;
  bool bVar9;
  undefined *puVar10;
  bool bVar11;
  ulong uVar12;
  long *plVar13;
  float *pfVar14;
  float *pfVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  TouchScreenState *pTVar19;
  int iVar20;
  float fVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 local_a0;
  undefined4 local_98;
  
  uVar12 = (**(code **)(*param_1 + 8))();
  if ((uVar12 & 1) == 0) {
    return (char)param_1[10] != '\0';
  }
  cVar7 = (char)param_1[1];
  plVar13 = (long *)(**(code **)*param_1)(param_1);
  if ((plVar13 != (long *)0x0) && (plVar13[1] != 0)) {
    puVar2 = PTR_DAT_04bc0cb8 + 0x10;
    local_98 = 0xb;
    local_a0 = puVar2;
    (**(code **)(*plVar13 + 0x20))(plVar13,&local_a0);
    pfVar14 = (float *)(**(code **)(plVar13[3] + 0xd0))(plVar13[1]);
    fVar21 = *pfVar14;
    fVar23 = pfVar14[1];
    local_98 = 0x29;
    local_a0 = puVar2;
    (**(code **)(*plVar13 + 0x20))(plVar13,&local_a0);
    (**(code **)(plVar13[3] + 0x2b0))(&local_a0,plVar13[1]);
    *(float *)(param_1 + 8) = local_a0._4_4_ - fVar23 * 0.5;
    *(float *)((long)param_1 + 0x44) = fVar21 * 0.5 + (float)local_a0;
    *(float *)((long)param_1 + 0x3c) = (float)local_a0 - fVar21 * 0.5;
    *(float *)(param_1 + 9) = fVar23 * 0.5 + local_a0._4_4_;
  }
  pfVar14 = (float *)param_1[0xd];
  if (pfVar14 != (float *)0x0) {
    pTVar3 = (TouchScreenState *)(pfVar14 + 0x26);
    pfVar14[0x20] = 0.0;
    fVar23 = (float)nn::hid::GetTouchScreenStates<16ul>(pTVar3,0x10);
    pfVar14[0x20] = 0.0;
    fVar21 = (float)((int)*(undefined8 *)(pfVar14 + 0x26) - (int)pfVar14[0x22]);
    *(undefined8 *)(pfVar14 + 0x22) = *(undefined8 *)(pfVar14 + 0x26);
    if ((int)fVar23 <= (int)fVar21) {
      fVar21 = fVar23;
    }
    uVar12 = (ulong)(uint)fVar21;
    pfVar14[0x24] = fVar21;
    puVar10 = PTR_DAT_04bb2200;
    puVar2 = PTR_DAT_04bb2158;
    if (0 < (int)fVar21) {
      do {
        pTVar4 = pTVar3 + (uVar12 - 1 & 0xffffffff) * 0x290;
        if (0x10 < uVar12) {
          pTVar4 = pTVar3;
        }
        iVar16 = *(int *)(pTVar4 + 8);
        if (0 < iVar16) {
          lVar18 = 0;
          pTVar19 = pTVar4 + 0x24;
          do {
            iVar20 = *(int *)(pTVar19 + -4);
            iVar22 = *(int *)pTVar19;
            fVar21 = pfVar14[0x20];
            if (fVar21 == 0.0) {
LAB_030b0850:
              pfVar15 = (float *)(**(code **)(**(long **)puVar2 + 0x40))();
              fVar23 = (((float)iVar20 + -640.0) / 1280.0) * *pfVar15;
              fVar21 = (((float)iVar22 + -360.0) / -720.0) * pfVar15[1];
              if (*(long *)puVar10 != 0) {
                fVar23 = (fVar23 / 640.0) * 960.0;
                fVar21 = (fVar21 / 360.0) * 540.0;
              }
              fVar25 = *(float *)((long)param_1 + 0x3c);
              fVar24 = -1.0;
              fVar26 = -1.0;
              if ((fVar25 != 0.0) && (!NAN(fVar25))) {
                fVar27 = *(float *)(param_1 + 8);
                fVar24 = -1.0;
                fVar26 = -1.0;
                if ((fVar27 != 0.0) && (!NAN(fVar27))) {
                  fVar28 = *(float *)((long)param_1 + 0x44);
                  fVar24 = -1.0;
                  fVar26 = -1.0;
                  if ((fVar28 != 0.0) && (!NAN(fVar28))) {
                    fVar29 = *(float *)(param_1 + 9);
                    fVar24 = -1.0;
                    fVar26 = -1.0;
                    if ((fVar29 != 0.0) && (!NAN(fVar29))) {
                      fVar26 = (fVar23 - fVar25) / (fVar28 - fVar25);
                      fVar24 = (fVar21 - fVar27) / (fVar29 - fVar27);
                    }
                  }
                }
              }
              if ((((0.0 <= fVar26) && (fVar26 <= 1.0)) && (0.0 <= fVar24)) && (fVar24 <= 1.0)) {
                pfVar15 = pfVar14 + (ulong)(uint)pfVar14[0x20] * 2;
                if (0xf < (uint)pfVar14[0x20]) {
                  pfVar15 = pfVar14;
                }
                *pfVar15 = fVar23;
                pfVar15[1] = fVar21;
                pfVar14[0x20] = (float)((int)pfVar14[0x20] + 1);
                break;
              }
              iVar16 = *(int *)(pTVar4 + 8);
            }
            else if (0 < (int)fVar21) {
              pfVar15 = pfVar14 + (ulong)((int)fVar21 - 1) * 2;
              if (0x10 < (uint)fVar21) {
                pfVar15 = pfVar14;
              }
              fVar23 = (float)iVar22 - pfVar15[1];
              fVar21 = (float)iVar20 - *pfVar15;
              if (2.0 < SQRT(fVar23 * fVar23 + fVar21 * fVar21)) goto LAB_030b0850;
            }
            lVar18 = lVar18 + 1;
            pTVar19 = pTVar19 + 0x28;
          } while (lVar18 < iVar16);
        }
        bVar1 = 1 < (long)uVar12;
        uVar12 = uVar12 - 1;
      } while (bVar1);
    }
    pfVar14 = (float *)param_1[0xd];
    fVar21 = pfVar14[0x20];
    if (0 < (int)fVar21) {
      fVar23 = *(float *)((long)param_1 + 0x3c);
      fVar24 = 0.0;
      fVar25 = 0.0;
      pfVar15 = pfVar14 + (ulong)((int)fVar21 - 1) * 2;
      if (0x10 < (uint)fVar21) {
        pfVar15 = pfVar14;
      }
      fVar21 = *pfVar15;
      *(float *)((long)param_1 + 0xc) = fVar21;
      fVar26 = pfVar15[1];
      *(float *)(param_1 + 2) = fVar26;
      if ((fVar23 != 0.0) && (!NAN(fVar23))) {
        fVar27 = *(float *)(param_1 + 8);
        if ((fVar27 != 0.0) && (!NAN(fVar27))) {
          fVar28 = *(float *)((long)param_1 + 0x44);
          if ((fVar28 != 0.0) && (!NAN(fVar28))) {
            fVar29 = *(float *)(param_1 + 9);
            if ((fVar29 != 0.0) && (!NAN(fVar29))) {
              fVar25 = (fVar21 - fVar23) / (fVar28 - fVar23);
              fVar24 = (fVar26 - fVar27) / (fVar29 - fVar27);
            }
          }
        }
      }
      if (cVar7 == '\0') {
        bVar1 = fVar24 <= 1.0 && (0.0 <= fVar24 && (fVar25 <= 1.0 && 0.0 <= fVar25));
      }
      else {
        bVar1 = true;
      }
      *(bool *)(param_1 + 1) = bVar1;
      fVar21 = 0.5;
      if (fVar25 <= 1.0) {
        fVar21 = fVar25 + -0.5;
      }
      fVar26 = 0.5;
      if (fVar24 <= 1.0) {
        fVar26 = fVar24 + -0.5;
      }
      fVar27 = -0.5;
      if (0.0 <= fVar25) {
        fVar27 = fVar21;
      }
      fVar25 = 1.0 / *(float *)((long)param_1 + 0x4c);
      fVar21 = -0.5;
      if (0.0 <= fVar24) {
        fVar21 = fVar26;
      }
      *(float *)((long)param_1 + 0x2c) = *(float *)((long)param_1 + 0x54) + fVar27 * fVar25;
      *(float *)(param_1 + 6) = *(float *)(param_1 + 0xb) + fVar21 * fVar25;
      if (bVar1) {
        *(undefined8 *)((long)param_1 + 0x1c) = *(undefined8 *)((long)param_1 + 0x2c);
      }
      fVar21 = pfVar14[0x20];
      if (0 < (int)fVar21) {
        if ((fVar23 != 0.0) && (!NAN(fVar23))) {
          uVar12 = 0;
          pfVar15 = pfVar14;
          do {
            fVar23 = *(float *)((long)param_1 + 0x3c);
            pfVar5 = pfVar15;
            if (0xf < uVar12) {
              pfVar5 = pfVar14;
            }
            if ((((fVar23 != 0.0) && (!NAN(fVar23))) && (*(float *)(param_1 + 8) != 0.0)) &&
               (!NAN(*(float *)(param_1 + 8)))) {
              fVar24 = *(float *)((long)param_1 + 0x44);
              if (((fVar24 != 0.0) && (!NAN(fVar24))) &&
                 ((*(float *)(param_1 + 9) != 0.0 && (!NAN(*(float *)(param_1 + 9)))))) {
                *pfVar5 = (*pfVar5 - fVar23) / (fVar24 - fVar23);
                pfVar5[1] = (pfVar5[1] - *(float *)(param_1 + 8)) /
                            (*(float *)(param_1 + 9) - *(float *)(param_1 + 8));
                fVar21 = pfVar14[0x20];
              }
            }
            uVar12 = uVar12 + 1;
            pfVar15 = pfVar15 + 2;
          } while ((long)uVar12 < (long)(int)fVar21);
          pfVar14 = (float *)param_1[0xd];
          fVar21 = pfVar14[0x20];
          if ((int)fVar21 < 1) goto LAB_030b0c80;
        }
        uVar12 = 0;
        pfVar15 = pfVar14;
        do {
          pfVar5 = pfVar15;
          if (0xf < uVar12) {
            pfVar5 = pfVar14;
          }
          if (pfVar5 != (float *)0x0) {
            fVar23 = *pfVar5;
            fVar24 = pfVar5[1];
            fVar21 = 1.0;
            if (fVar23 <= 1.0) {
              fVar21 = fVar23;
            }
            fVar25 = 0.0;
            if (0.0 <= fVar23) {
              fVar25 = fVar21;
            }
            fVar21 = 1.0;
            if (fVar24 <= 1.0) {
              fVar21 = fVar24;
            }
            fVar23 = 0.0;
            if (0.0 <= fVar24) {
              fVar23 = fVar21;
            }
            *pfVar5 = fVar25;
            pfVar5[1] = fVar23;
            fVar21 = 1.0 / *(float *)((long)param_1 + 0x4c);
            fVar24 = *(float *)(param_1 + 0xb);
            *pfVar5 = *(float *)((long)param_1 + 0x54) + (fVar25 + -0.5) * fVar21;
            pfVar5[1] = fVar24 + fVar21 * (fVar23 + -0.5);
            fVar21 = pfVar14[0x20];
          }
          uVar12 = uVar12 + 1;
          pfVar15 = pfVar15 + 2;
        } while ((long)uVar12 < (long)(int)fVar21);
        lVar18 = param_1[0xd];
        if (0 < *(int *)(lVar18 + 0x80)) {
          uVar12 = 0;
          lVar17 = lVar18;
          do {
            lVar6 = lVar17;
            if (0xf < uVar12) {
              lVar6 = lVar18;
            }
            (**(code **)(*param_1 + 0x28))(param_1);
            (**(code **)(*param_1 + 0x30))(param_1);
            if (lVar6 != 0) {
              *(float *)(lVar6 + 4) = 1.0 - *(float *)(lVar6 + 4);
            }
            uVar12 = uVar12 + 1;
            lVar17 = lVar17 + 8;
          } while ((long)uVar12 < (long)*(int *)(lVar18 + 0x80));
        }
      }
LAB_030b0c80:
      bVar11 = true;
      goto LAB_030b0c84;
    }
  }
  bVar11 = false;
  bVar1 = false;
LAB_030b0c84:
  *(bool *)(param_1 + 10) = bVar11;
  bVar9 = false;
  if (cVar7 == '\0') {
    bVar9 = bVar1;
  }
  *(bool *)((long)param_1 + 0x5c) = bVar9;
  bVar8 = 0;
  if (cVar7 != '\0') {
    bVar8 = bVar1 ^ 1;
  }
  *(byte *)((long)param_1 + 0x5d) = bVar8;
  return bVar11;
}

