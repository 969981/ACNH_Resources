
undefined8 FUN_0202e3d0(long param_1,float *param_2,int *param_3,uint param_4)

{
  undefined *puVar1;
  int iVar2;
  float *pfVar3;
  ushort *puVar4;
  ushort uVar5;
  uint *puVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 uVar12;
  short sVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  char *pcVar19;
  undefined4 uVar20;
  byte *pbVar21;
  ushort uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 local_80;
  char *local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined1 local_64;
  undefined1 local_5d;
  undefined4 local_54;
  uint local_38 [2];
  
  uVar20 = 0;
  param_2[0] = 10.0;
  param_2[1] = 0.0;
  param_2[2] = 10.0;
  *param_3 = 0;
  local_38[0] = param_4;
  if (param_4 < 10) {
    lVar16 = FUN_0265c2a0(param_4);
    if (lVar16 == 0) {
LAB_0202e4ac:
      local_80 = (undefined *)CONCAT44(local_80._4_4_,param_4);
      uVar22 = *(ushort *)(param_1 + 0x2b4);
      lVar16 = *(long *)PTR_DAT_04bb4760 + (ulong)param_4 * 0x15;
      if (0x6c < param_4) {
        lVar16 = *(long *)PTR_DAT_04bb4760;
      }
      if (uVar22 == 0xffff) {
LAB_0202e570:
        uVar22 = 0xffff;
      }
      else {
        local_80 = (undefined *)CONCAT44(local_80._4_4_,3);
        puVar6 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar22 * 8);
        if (0xff < uVar22) {
          puVar6 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar6 >> 3 & 1) != 0) {
          if (DAT_055c1b60 != &DAT_055c1b58) {
            uVar22 = 0;
            puVar17 = DAT_055c1b60;
            do {
              if (*(int *)(puVar17 + -1) == 0x6622bd46) goto LAB_0202e574;
              puVar17 = (undefined8 *)puVar17[1];
              uVar22 = uVar22 + 1;
            } while (puVar17 != &DAT_055c1b58);
          }
          goto LAB_0202e570;
        }
      }
LAB_0202e574:
      uVar5 = (ushort)*(byte *)(lVar16 + 4) | (*(byte *)(lVar16 + 5) & 3) << 8;
      if (0x1ff < uVar5) {
        uVar5 = uVar5 | 0xfc00;
      }
      if (uVar5 == uVar22) {
        local_80 = (undefined *)
                   (CONCAT44(local_80._4_4_,(uint)(*(byte *)(lVar16 + 7) >> 2)) & 0xffffffff00000003
                   );
        uVar20 = 6;
        if ((uint)local_80 != 1) {
          uVar20 = 4;
        }
        goto LAB_0202e890;
      }
      if (*(uint *)(*(long *)PTR_DAT_04bb27d0 + 0x80) < 2) {
        local_54 = 0;
        lVar16 = *(long *)PTR_DAT_04bb2720;
        if (lVar16 == 0) {
          puVar17 = &DAT_055c04a0;
        }
        else {
          puVar17 = &DAT_055c04a0;
          if (*(long *)(lVar16 + 0x330) != 0) {
            puVar17 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar16 + 0x338));
            iVar14 = FUN_006bd550(*puVar17,0);
            puVar17 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar14 != 0x758f7eaf) {
              puVar17 = &DAT_055c04a0;
            }
          }
        }
        uVar18 = FUN_02b5f400(&local_54,*(undefined4 *)(puVar17 + 7));
        if ((uVar18 & 1) != 0) {
          local_80 = (undefined *)CONCAT44(local_80._4_4_,local_54);
          lVar16 = *(long *)PTR_DAT_04bb46b0;
          if (lVar16 != 0) {
            puVar17 = *(undefined8 **)(lVar16 + 0x10);
            if ((*(byte *)(lVar16 + 0x453) & 1) == 0) {
              lVar16 = (**(code **)(*(long *)*puVar17 + 0x38))();
              if (lVar16 != 0) {
                lVar16 = lVar16 + 0x70;
                goto LAB_0202e6a4;
              }
            }
            else if (((puVar17 != (undefined8 *)0x0) && ((long *)puVar17[0x26] != (long *)0x0)) &&
                    (lVar16 = (**(code **)(*(long *)puVar17[0x26] + 0x38))(), lVar16 != 0)) {
LAB_0202e6a4:
              if ((uint)local_80 < 8) {
                lVar7 = lVar16 + 0x119228 + ((ulong)local_80 & 0xffffffff) * 0xfa08;
                if (7 < (uint)local_80) {
                  lVar7 = lVar16 + 0x119228;
                }
                if ((*(long **)(lVar7 + 0x28) == (long *)0x0) ||
                   (puVar17 = (undefined8 *)**(long **)(lVar7 + 0x28), puVar17 == (undefined8 *)0x0)
                   ) {
                  uVar15 = 1;
                }
                else {
                  uVar15 = (**(code **)*puVar17)();
                  uVar15 = uVar15 ^ 1;
                }
                uVar9 = *(uint *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8));
                if (8 < uVar9) {
                  uVar9 = 0;
                }
                local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar9);
                if ((((uVar15 & 1) == 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
                   (puVar17 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 8),
                   puVar17 != (undefined8 *)0x0)) {
                  (**(code **)*puVar17)();
                }
                if (1 < (int)uVar9) {
                  uVar15 = *(uint *)(param_1 + 0x115f8);
                  if (uVar15 == param_4) {
                    pcVar19 = (char *)FUN_0265b2e0();
                    if (pcVar19 != (char *)0x0) {
                      local_70 = CONCAT31(local_70._1_3_,1);
                      local_78 = pcVar19;
                      if (*(long **)(pcVar19 + 0x28) == (long *)0x0) {
                        uVar12 = 0;
                      }
                      else {
                        puVar17 = (undefined8 *)**(long **)(pcVar19 + 0x28);
                        uVar12 = 0;
                        if (puVar17 != (undefined8 *)0x0) {
                          uVar12 = (**(code **)*puVar17)();
                        }
                      }
                      local_70 = CONCAT22(local_70._2_2_,CONCAT11(uVar12,(undefined1)local_70)) &
                                 0xffff01ff;
                      local_38[1] = 0;
                      local_80 = PTR_DAT_04bb7000 + 0x10;
                      uVar20 = 3;
                      if ((*(byte *)(*(long *)(pcVar19 + 0x10) + *(long *)(pcVar19 + 8) + 0x36) & 1)
                          == 0) {
                        uVar20 = 1;
                      }
                      FUN_02640184(&local_80);
                      goto LAB_0202e890;
                    }
                    uVar15 = *(uint *)(param_1 + 0x115f8);
                  }
                  if (((int)uVar15 < 0) && (DAT_05405fcc == param_4)) {
                    puVar1 = PTR_DAT_04bb2020 + 0x10;
                    local_78 = "SurpriseVisitEntered";
                    local_80 = puVar1;
                    sVar13 = FUN_02196ed0(local_38,&local_80);
                    if (sVar13 != 0) {
                      FUN_025494e8();
                      FUN_02549d0c();
                      DAT_05453f6c = param_4;
                    }
                    local_78 = "SurpriseVisitEntered";
                    local_80 = puVar1;
                    iVar14 = FUN_021991a0(&DAT_053fe348 + (ulong)param_4 * 0xba0,&local_80);
                    if (iVar14 == 0) {
                      if ((((&DAT_053fee41)[(ulong)param_4 * 0xba0] != '\0') &&
                          ((&DAT_053fede8)[(ulong)param_4 * 0x174] != 0)) &&
                         (*(int *)((&DAT_053fede8)[(ulong)param_4 * 0x174] + 4) == 1))
                      goto LAB_0202e88c;
                      uVar20 = 2;
                    }
                    else {
                      FUN_025196e4(&local_80);
                      uVar18 = FUN_02917170(&local_80);
                      if ((uVar18 & 1) == 0) goto LAB_0202e88c;
                      uVar20 = 4;
                    }
                    goto LAB_0202e890;
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      if ((*(long **)(lVar16 + 0x28) == (long *)0x0) ||
         (puVar17 = (undefined8 *)**(long **)(lVar16 + 0x28), puVar17 == (undefined8 *)0x0)) {
        uVar18 = 0;
      }
      else {
        uVar18 = (**(code **)*puVar17)();
        uVar18 = uVar18 & 0xffffffff;
      }
      local_80 = PTR_DAT_04bb2020 + 0x10;
      local_78 = "MoveInCompletion";
      iVar14 = FUN_02749340(*(long *)(lVar16 + 0x10) + *(long *)(lVar16 + 8) + 0x1267c,&local_80);
      if ((((uVar18 & 1) != 0) && (*(long *)(lVar16 + 0x28) != 0)) &&
         (puVar17 = *(undefined8 **)(*(long *)(lVar16 + 0x28) + 8), puVar17 != (undefined8 *)0x0)) {
        (**(code **)*puVar17)();
      }
      if (iVar14 != 0) goto LAB_0202e4ac;
    }
LAB_0202e88c:
    uVar20 = 0;
  }
LAB_0202e890:
  local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar20);
  switch(uVar20) {
  case 1:
  case 2:
    local_5d = 0;
    local_70 = 0x10;
    local_64 = 0;
    local_6c = 0x65636e6172746e45;
    local_78 = (char *)&local_6c;
    local_80 = PTR_DAT_04bb2ab0 + 0x10;
    lVar16 = FUN_02917a1c(&local_80);
    if (lVar16 == 0) {
      param_2[0] = 160.0;
      param_2[1] = 0.0;
      param_2[2] = 235.0;
    }
    else {
      fVar23 = (float)NEON_ucvtf(*(undefined4 *)(lVar16 + 0x20));
      fVar27 = *(float *)(lVar16 + 0xc);
      fVar28 = *(float *)(lVar16 + 0x10);
      pfVar3 = (float *)(PTR_DAT_04bb2d00 +
                        ((ulong)(long)(fVar23 * 11930465.0) >> 0x18 & 0xff) * 0x10);
      fVar23 = (float)((uint)(long)(fVar23 * 11930465.0) & 0xffffff) * 5.9604645e-08;
      fVar24 = *(float *)(lVar16 + 0x24) + *(float *)(lVar16 + 0x1c) * 0.5 + 0.0;
      fVar25 = *pfVar3 + fVar23 * pfVar3[1];
      fVar23 = pfVar3[2] + fVar23 * pfVar3[3];
      fVar26 = fVar25 * 0.0;
      param_2[2] = fVar24 * fVar23 + *(float *)(lVar16 + 0x14) +
                   (fVar23 * 0.0 * 0.0 - fVar25 * 0.0) + fVar23 * -15.0;
      *param_2 = fVar27 + fVar24 * fVar25 + fVar26 * 0.0 + fVar23 * 0.0 + (fVar25 + 0.0) * -15.0;
      param_2[1] = fVar28 + 0.0 + (fVar26 * 0.0 + 1.0) * 0.0 + fVar23 * 0.0 * 0.0 + fVar26 * -15.0;
    }
    break;
  case 3:
    pfVar3 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)PTR_DAT_04bc2250 >> 0x14) & 0xff0));
    fVar23 = (float)(*(uint *)PTR_DAT_04bc2250 & 0xffffff) * 5.9604645e-08;
    fVar24 = *pfVar3 + fVar23 * pfVar3[1];
    fVar23 = pfVar3[2] + fVar23 * pfVar3[3];
    fVar25 = fVar24 * 0.0;
    fVar26 = *(float *)PTR_DAT_04bb76e8;
    fVar27 = *(float *)(PTR_DAT_04bb76e8 + 4);
    param_2[2] = *(float *)(PTR_DAT_04bb76e8 + 8) +
                 (fVar23 * 0.0 * 0.0 - fVar24 * 0.0) + fVar23 * -20.0;
    *param_2 = fVar26 + fVar25 * 0.0 + fVar23 * 0.0 + (fVar24 + 0.0) * -20.0;
    param_2[1] = fVar27 + (fVar25 * 0.0 + 1.0) * 0.0 + fVar23 * 0.0 * 0.0 + fVar25 * -20.0;
    break;
  case 4:
    pbVar21 = *(byte **)PTR_DAT_04bb4760 + (ulong)param_4 * 0x15;
    if (0x6c < param_4) {
      pbVar21 = *(byte **)PTR_DAT_04bb4760;
    }
    goto LAB_0202eac8;
  case 5:
    pbVar21 = (byte *)(*(long *)PTR_DAT_04bbaed0 + (long)(int)param_4 * 6);
LAB_0202eac8:
    uVar15 = (uint)*pbVar21 | (pbVar21[1] & 0xf) << 8;
    if ((pbVar21[1] & 8) != 0) {
      uVar15 = uVar15 | 0xfffff000;
    }
    *param_2 = (float)(int)uVar15;
    uVar9 = (uint)(pbVar21[1] >> 4) | (uint)pbVar21[2] << 4;
    uVar15 = uVar9 | 0xfffff000;
    if (-1 < (char)pbVar21[2]) {
      uVar15 = uVar9;
    }
    param_2[2] = (float)(int)uVar15;
    *param_3 = (uint)pbVar21[3] << 0x18;
    break;
  case 6:
    uVar15 = nn::os::GetSystemTick();
    lVar16 = *(long *)(param_1 + 0x5898);
    if (0 < (int)*(uint *)(lVar16 + 8)) {
      puVar4 = (ushort *)(param_1 + 0x5858);
      uVar10 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 1;
      uVar15 = 0;
      uVar9 = uVar10 ^ uVar10 * 0x800;
      uVar10 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 2;
      uVar10 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 3;
      uVar10 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 4;
      uVar18 = (ulong)*(uint *)(lVar16 + 0x18) *
               (ulong)(uVar9 >> 8 ^ uVar10 >> 0x13 ^ uVar9 ^ uVar10) >> 0x20;
      do {
        if ((*(uint *)(*(long *)(lVar16 + 0x10) + (ulong)(uVar15 >> 5) * 4) >>
             (ulong)(uVar15 & 0x1f) & 1) != 0) {
          if ((int)uVar18 == 0) {
            iVar8 = *(int *)(lVar16 + 0x1c);
            uVar22 = *puVar4;
            iVar14 = 0;
            if (iVar8 != 0) {
              iVar14 = (int)uVar15 / iVar8;
            }
            iVar8 = iVar14 * iVar8;
            iVar14 = iVar14 + (uint)*(ushort *)(param_1 + 0x585a);
            iVar11 = iVar14 + -1;
            iVar2 = ((uint)uVar22 - iVar8) + uVar15;
            param_2[2] = (float)iVar14 * 5.0;
            *param_2 = (float)iVar2 * 5.0;
            iVar2 = iVar2 + -1;
            FUN_035a4360(puVar4,iVar2,iVar11,0);
            FUN_035a4360(puVar4,iVar2,iVar11 + (uint)DAT_057763a8,0);
            FUN_035a4360(puVar4,(((uint)uVar22 + (uint)DAT_057763b0) - iVar8) + uVar15 + -1,iVar11,0
                        );
            FUN_035a4360(puVar4,(((uint)uVar22 + (uint)DAT_057763b8) - iVar8) + uVar15 + -1,
                         iVar11 + (uint)DAT_057763c0,0);
            return 1;
          }
          uVar18 = (ulong)((int)uVar18 - 1);
        }
        uVar15 = uVar15 + 1;
      } while (*(uint *)(lVar16 + 8) != uVar15);
    }
    lVar16 = *(long *)PTR_DAT_04bb5ce0;
    if (lVar16 == 0) {
      fVar23 = 40.0;
      fVar24 = 40.0;
    }
    else {
      fVar23 = *(float *)(lVar16 + 0xd74);
      fVar24 = *(float *)(lVar16 + 0xd7c);
    }
    *param_2 = (float)(int)((int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0)) * 5.0;
    param_2[2] = (float)(int)((int)((float)(int)fVar24 / 5.0) - (uint)(fVar24 < 0.0)) * 5.0;
    break;
  default:
    return 0;
  }
  return 1;
}

