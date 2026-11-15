
undefined8 FUN_0203bcb0(undefined *param_1,uint *param_2,ulong param_3,float *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  long *plVar6;
  int iVar7;
  uint uVar8;
  ushort uVar9;
  char cVar10;
  int iVar11;
  undefined *puVar12;
  undefined4 uVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  int *piVar19;
  uint *puVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 *puVar23;
  long lVar24;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  long *plVar28;
  float fVar29;
  float fVar30;
  undefined **local_e0;
  undefined8 local_d8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined **local_b0;
  undefined8 local_a8;
  undefined **local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if (9 < *param_2) {
    return 0;
  }
  uVar27 = (ulong)*param_2;
  lVar22 = uVar27 * 0xba0;
  if (((&DAT_053fee41)[lVar22] == '\0') ||
     (uVar18 = FUN_0219e890(&DAT_053fe348 + lVar22), puVar12 = PTR_DAT_04bb3968, (uVar18 & 1) == 0))
  goto LAB_0203c674;
  if ((param_3 & 1) == 0) {
    if ((&DAT_053fe998)[uVar27 * 0x2e8] == 0) goto LAB_0203c674;
    if ((&DAT_053fe998)[uVar27 * 0x2e8] == 1) goto LAB_0203bd24;
    fVar29 = *(float *)(&DAT_053fe980 + uVar27 * 0x174);
    bVar14 = *(float *)((long)&DAT_053fe980 + lVar22 + 4) != 0.0;
    if ((bVar14 || fVar29 != 0.0) ||
       (fVar30 = (float)(&DAT_053fe988)[uVar27 * 0x2e8], fVar30 != 0.0)) {
      if (((float)(&DAT_053fe98c)[uVar27 * 0x2e8] == 0.0) &&
         (((float)(&DAT_053fe990)[uVar27 * 0x2e8] == 0.0 &&
          ((float)(&DAT_053fe994)[uVar27 * 0x2e8] == 0.0)))) {
        if (!bVar14 && fVar29 == 0.0) {
          fVar30 = (float)(&DAT_053fe988)[uVar27 * 0x2e8];
          goto LAB_0203c080;
        }
        goto LAB_0203c6b4;
      }
      if (((ulong)*(undefined ***)(*(long *)PTR_DAT_04bb3968 + 0x1308) & 0xffff) == 0)
      goto LAB_0203c6b4;
      local_90 = *(undefined ***)(*(long *)PTR_DAT_04bb3968 + 0x1308);
      FUN_00a80f0c(&local_90,0,1,0);
      iVar16 = FUN_00a813c0(&local_90);
      if (iVar16 != 1) {
        fVar29 = *(float *)(&DAT_053fe980 + uVar27 * 0x174);
        goto LAB_0203c6b4;
      }
      *param_4 = (float)(&DAT_053fe98c)[uVar27 * 0x2e8];
      param_4[1] = (float)(&DAT_053fe990)[uVar27 * 0x2e8];
      fVar29 = (float)(&DAT_053fe994)[uVar27 * 0x2e8];
    }
    else {
LAB_0203c080:
      if (fVar30 == 0.0) goto LAB_0203c674;
LAB_0203c6b4:
      *param_4 = fVar29;
      param_4[1] = *(float *)((long)&DAT_053fe980 + lVar22 + 4);
      fVar29 = (float)(&DAT_053fe988)[uVar27 * 0x2e8];
    }
    param_4[2] = fVar29;
LAB_0203c6c8:
    fVar29 = (float)FUN_0097a900(param_4,0);
LAB_0203c6d4:
    param_4[1] = fVar29;
LAB_0203c6d8:
    uVar21 = 1;
  }
  else {
LAB_0203bd24:
    if ((*(ushort *)(param_1 + 0x105a0) >> (ulong)(*param_2 & 0x1f) & 1) == 0) {
      piVar19 = (int *)(**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x2418) + 0xf0))
                                 (*(long *)PTR_DAT_04bb3968 + 0x2418);
      iVar16 = *piVar19;
      piVar19 = (int *)(**(code **)(*(long *)(*(long *)puVar12 + 0x2448) + 0xf0))
                                 (*(long *)puVar12 + 0x2448);
      puVar2 = PTR_DAT_04bb39d8;
      iVar7 = *piVar19;
      puVar20 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar17 = *puVar20 ^ *puVar20 << 0xb;
      uVar25 = puVar20[3];
      *puVar20 = puVar20[1];
      puVar20[1] = puVar20[2];
      uVar17 = uVar17 >> 8 ^ uVar25 >> 0x13 ^ uVar17 ^ uVar25;
      puVar20[2] = uVar25;
      puVar20[3] = uVar17;
      piVar19 = (int *)(**(code **)(*(long *)(*(long *)puVar12 + 0x2418) + 0xf0))
                                 (*(long *)puVar12 + 0x2418);
      puVar3 = PTR_DAT_04bb5c90;
      if ((int)((ulong)uVar17 * (ulong)(uint)(iVar7 + iVar16) >> 0x20) < *piVar19) {
        local_d8 = (undefined *)((ulong)local_d8._4_4_ << 0x20);
        local_e0 = (undefined **)0x0;
        uVar27 = FUN_021d9480(&local_e0,param_2,0);
        puVar3 = PTR_DAT_04bb2010;
        if ((uVar27 & 1) != 0) {
          puVar1 = param_1 + 0x2f8;
          local_b0 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
          local_a8 = (undefined ***)0x0;
          FUN_021e8490(PTR_DAT_04bb3238,&local_e0,puVar1,0,&local_b0);
          iVar16 = *(int *)(param_1 + 0xf400);
          if (iVar16 != 0) {
            lVar22 = (long)iVar16 << 3;
            plVar28 = *(long **)(param_1 + 0xf408);
            do {
              FUN_02149290(puVar1,*plVar28 + 8,0);
              lVar22 = lVar22 + -8;
              plVar28 = plVar28 + 1;
            } while (lVar22 != 0);
          }
          iVar16 = *(int *)(*(long *)puVar12 + 0x3cc0);
          if (iVar16 != 0) {
            lVar22 = (long)iVar16 << 3;
            plVar28 = *(long **)(*(long *)puVar12 + 0x3cc8);
            do {
              FUN_02149290(puVar1,*plVar28 + 8,0);
              lVar22 = lVar22 + -8;
              plVar28 = plVar28 + 1;
            } while (lVar22 != 0);
          }
          local_90 = &PTR_LAB_04a6edc8;
          local_88 = param_1;
          FUN_0118c170(&local_90);
          FUN_035a6490(puVar1,param_1 + 0x105a8);
          FUN_035a56c0(puVar1,0);
          FUN_035a8914(puVar1,(ulong)local_a8 & 0xffffffff,local_a8._4_4_,0);
          if ((*(float *)PTR_DAT_04bb76e8 != 0.0) || (*(float *)(PTR_DAT_04bb76e8 + 8) != 0.0)) {
            local_88 = puVar3 + 0x10;
            fVar29 = *(float *)PTR_DAT_04bb76e8 + -7.5;
            fVar30 = *(float *)(PTR_DAT_04bb76e8 + 8) + -7.5;
            local_90 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
            iVar16 = (int)((float)(int)fVar29 / 5.0) - (uint)(fVar29 < 0.0);
            iVar7 = (int)((float)(int)fVar30 / 5.0) - (uint)(fVar30 < 0.0);
            local_80 = (undefined *)CONCAT44(iVar7,iVar16);
            local_70 = (undefined *)CONCAT44(iVar7 + 3,iVar16 + 3);
            local_78 = local_88;
            FUN_035a9780(puVar1,&local_90);
          }
          uVar21 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
          lVar22 = *(long *)(param_1 + 0x338);
          iVar16 = FUN_03857320(lVar22,uVar21);
          if (-1 < iVar16) {
            if (param_4 != (float *)0x0) {
              iVar7 = *(int *)(lVar22 + 0x1c);
              iVar11 = 0;
              if (iVar7 != 0) {
                iVar11 = iVar16 / iVar7;
              }
              uVar9 = *(ushort *)(param_1 + 0x2f8);
              param_4[2] = (float)(int)(iVar11 + (uint)*(ushort *)(param_1 + 0x2fa)) * 5.0;
              *param_4 = (float)(int)((iVar16 - iVar11 * iVar7) + (uint)uVar9) * 5.0;
            }
            goto LAB_0203c6c8;
          }
        }
      }
      else {
        puVar2 = param_1 + 0x2f8;
        local_c0 = PTR_DAT_04bb2010 + 0x10;
        local_b8 = 0;
        FUN_021e8490(PTR_DAT_04bb3238,*(long *)PTR_DAT_04bb5c90 + 0x40,puVar2,0,&local_c0);
        iVar16 = *(int *)(param_1 + 0xf400);
        if (iVar16 != 0) {
          lVar22 = (long)iVar16 << 3;
          plVar28 = *(long **)(param_1 + 0xf408);
          do {
            FUN_02149290(puVar2,*plVar28 + 8,0);
            lVar22 = lVar22 + -8;
            plVar28 = plVar28 + 1;
          } while (lVar22 != 0);
        }
        iVar16 = *(int *)(*(long *)puVar12 + 0x3cc0);
        if (iVar16 != 0) {
          lVar22 = (long)iVar16 << 3;
          plVar28 = *(long **)(*(long *)puVar12 + 0x3cc8);
          do {
            FUN_02149290(puVar2,*plVar28 + 8,0);
            lVar22 = lVar22 + -8;
            plVar28 = plVar28 + 1;
          } while (lVar22 != 0);
        }
        puVar12 = PTR_DAT_04bbc1a0;
        lVar22 = *(long *)puVar3;
        uVar17 = *(uint *)(lVar22 + 0x50);
        local_e0 = &PTR_LAB_04a6edf0;
        local_a8 = &local_e0;
        local_b0 = &PTR_FUN_04983c08;
        local_d8 = param_1;
        if (0 < (int)uVar17) {
          uVar27 = 0;
          puVar3 = PTR_DAT_04bbc1a0 + 0x10;
          puVar1 = PTR_DAT_04bb2010 + 0x10;
          do {
            lVar24 = *(long *)(lVar22 + 0x58);
            if (**(int **)(lVar24 + uVar27 * 8) != 0x7e3d1e46) {
              local_90 = (undefined **)CONCAT44(**(undefined4 **)(lVar24 + uVar27 * 8),(int)uVar27);
              lVar24 = *(long *)(lVar24 + uVar27 * 8);
              local_78 = *(undefined **)(lVar24 + 0x18);
              local_68 = *(undefined8 *)(lVar24 + 0x28);
              local_88 = puVar3;
              local_80 = puVar1;
              local_70 = puVar1;
              (*(code *)*local_b0)(&local_b0,&local_90);
            }
            uVar27 = uVar27 + 1;
          } while (uVar17 != uVar27);
        }
        FUN_035a56c0(puVar2,0);
        uVar27 = local_b8;
        uVar13 = local_b8._4_4_;
        param_1[0x340] = 1;
        FUN_035a8968(puVar2,local_b8 & 0xffffffff,local_b8._4_4_);
        FUN_035a81f0(puVar2,uVar27 & 0xffffffff,uVar13,0);
        param_1[0x340] = 0;
        if ((*(float *)PTR_DAT_04bb76e8 != 0.0) || (*(float *)(PTR_DAT_04bb76e8 + 8) != 0.0)) {
          local_90 = (undefined **)(puVar12 + 0x10);
          fVar29 = *(float *)PTR_DAT_04bb76e8 + -7.5;
          fVar30 = *(float *)(PTR_DAT_04bb76e8 + 8) + -7.5;
          local_88 = PTR_DAT_04bb2010 + 0x10;
          iVar16 = (int)((float)(int)fVar29 / 5.0) - (uint)(fVar29 < 0.0);
          iVar7 = (int)((float)(int)fVar30 / 5.0) - (uint)(fVar30 < 0.0);
          local_80 = (undefined *)CONCAT44(iVar7,iVar16);
          local_70 = (undefined *)CONCAT44(iVar7 + 3,iVar16 + 3);
          local_78 = local_88;
          FUN_035a9780(puVar2,&local_90);
        }
        puVar20 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
        uVar17 = *puVar20 ^ *puVar20 << 0xb;
        lVar22 = *(long *)(param_1 + 0x338);
        uVar25 = puVar20[3];
        uVar8 = *(uint *)(lVar22 + 0x18);
        *puVar20 = puVar20[1];
        puVar20[1] = puVar20[2];
        uVar17 = uVar17 >> 8 ^ uVar25 >> 0x13 ^ uVar17 ^ uVar25;
        puVar20[2] = uVar25;
        puVar20[3] = uVar17;
        if (0 < (int)*(uint *)(lVar22 + 8)) {
          uVar25 = 0;
          uVar27 = (ulong)uVar8 * (ulong)uVar17 >> 0x20;
          do {
            if ((*(uint *)(*(long *)(lVar22 + 0x10) + (ulong)(uVar25 >> 5) * 4) >>
                 (ulong)(uVar25 & 0x1f) & 1) != 0) {
              if ((int)uVar27 == 0) {
                if (param_4 != (float *)0x0) {
                  iVar16 = *(int *)(lVar22 + 0x1c);
                  iVar7 = 0;
                  if (iVar16 != 0) {
                    iVar7 = (int)uVar25 / iVar16;
                  }
                  uVar9 = *(ushort *)(param_1 + 0x2f8);
                  param_4[2] = (float)(int)(iVar7 + (uint)*(ushort *)(param_1 + 0x2fa)) * 5.0;
                  *param_4 = (float)(int)((uVar25 - iVar7 * iVar16) + (uint)uVar9) * 5.0;
                }
                lVar22 = *(long *)PTR_DAT_04bb27c8;
                if (((lVar22 == 0) || (*(long *)(lVar22 + 0xa8) == 0)) ||
                   (*(char *)(lVar22 + 0x11c8) != '\0')) {
                  fVar29 = -500.0;
                }
                else {
                  fVar29 = (float)FUN_0093a950(lVar22 + 0x28,param_4,0);
                }
                goto LAB_0203c6d4;
              }
              uVar27 = (ulong)((int)uVar27 - 1);
            }
            uVar25 = uVar25 + 1;
          } while (*(uint *)(lVar22 + 8) != uVar25);
        }
      }
    }
    else {
      local_88 = (undefined *)((long)&local_80 + 4);
      local_78._0_4_ = (uint)(uint3)local_78;
      local_80 = (undefined *)CONCAT35(local_80._5_3_,8);
      local_90 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
      lVar22 = *(long *)PTR_DAT_04bb46b0;
      if (lVar22 != 0) {
        puVar23 = *(undefined8 **)(lVar22 + 0x10);
        if ((*(byte *)(lVar22 + 0x453) & 1) == 0) {
          lVar22 = (**(code **)(*(long *)*puVar23 + 0x38))();
          if (lVar22 != 0) {
            lVar22 = lVar22 + 0x70;
LAB_0203c0ac:
            if ((*(long **)(lVar22 + 0xd0) == (long *)0x0) ||
               (puVar23 = (undefined8 *)**(long **)(lVar22 + 0xd0), puVar23 == (undefined8 *)0x0)) {
              uVar17 = 1;
            }
            else {
              uVar17 = (**(code **)*puVar23)();
              uVar17 = uVar17 ^ 1;
            }
            pbVar4 = (byte *)(*(long *)(lVar22 + 0xb8) + *(long *)(lVar22 + 0xb0));
            pbVar5 = pbVar4 + (ulong)*param_2 * 0x13230;
            if (9 < *param_2) {
              pbVar5 = pbVar4;
            }
            FUN_038d1270(&local_90,"-----");
            if ((ulong)*pbVar5 < 0x23) {
              FUN_038d1270(&local_90,"%s%02d",
                           *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*pbVar5 * 8 + 0xb0),pbVar5[1]);
            }
            if ((((uVar17 & 1) == 0) && (*(long *)(lVar22 + 0xd0) != 0)) &&
               (puVar23 = *(undefined8 **)(*(long *)(lVar22 + 0xd0) + 8),
               puVar23 != (undefined8 *)0x0)) {
              (**(code **)*puVar23)();
            }
          }
        }
        else if (((puVar23 != (undefined8 *)0x0) && ((long *)puVar23[0x26] != (long *)0x0)) &&
                (lVar22 = (**(code **)(*(long *)puVar23[0x26] + 0x38))(), lVar22 != 0))
        goto LAB_0203c0ac;
      }
      uVar27 = 0;
      bVar14 = true;
      do {
        plVar28 = (long *)(param_1 + uVar27 * 0x180 + 0x105d0);
        if ((*(char *)plVar28[1] != '\0') && (param_1[uVar27 + 0x11050] != '\0')) {
          uVar18 = 0;
          do {
            plVar6 = plVar28 + uVar18 * 6;
            if (7 < uVar18) {
              plVar6 = plVar28;
            }
            if (*(char *)((long)plVar6 + 0x2c) != '\0') {
              (**(code **)(*plVar6 + 0x18))(plVar6);
              (**(code **)(*plVar6 + 0x18))(plVar6);
              lVar22 = plVar6[1];
              (*(code *)local_90[3])(&local_90);
              if ((undefined *)lVar22 == local_88) {
LAB_0203c61c:
                *param_4 = *(float *)(plVar6 + 4);
                param_4[1] = *(float *)((long)plVar6 + 0x24);
                param_4[2] = *(float *)(plVar6 + 5);
                if (!bVar14) goto LAB_0203c674;
                lVar22 = *(long *)PTR_DAT_04bb27c8;
                if (((lVar22 == 0) || (*(long *)(lVar22 + 0xa8) == 0)) ||
                   (*(char *)(lVar22 + 0x11c8) != '\0')) {
                  fVar29 = -500.0;
                }
                else {
                  fVar29 = (float)FUN_0093a950(lVar22 + 0x28,param_4,0);
                }
                param_4[1] = fVar29;
                goto LAB_0203c6d8;
              }
              uVar26 = 0;
              bVar15 = true;
              do {
                lVar22 = plVar6[1] + 2 + uVar26;
                cVar10 = *(char *)(lVar22 + -2);
                if (cVar10 != *(char *)((long)local_88 + uVar26)) break;
                if (cVar10 == '\0') {
                  if (bVar15) goto LAB_0203c61c;
                  break;
                }
                cVar10 = *(char *)(lVar22 + -1);
                if (cVar10 != *(char *)((long)local_88 + uVar26 + 1)) break;
                if (cVar10 == '\0') goto LAB_0203c61c;
                cVar10 = *(char *)(plVar6[1] + 2 + uVar26);
                if (cVar10 != *(char *)((long)local_88 + uVar26 + 2)) break;
                if (cVar10 == '\0') goto LAB_0203c61c;
                bVar15 = uVar26 < 0x7fffe;
                uVar26 = uVar26 + 3;
              } while (uVar26 != 0x80001);
            }
            uVar18 = uVar18 + 1;
          } while (uVar18 < (byte)param_1[uVar27 + 0x11050]);
        }
        bVar14 = uVar27 < 6;
        uVar27 = uVar27 + 1;
      } while (uVar27 != 7);
    }
LAB_0203c674:
    uVar21 = 0;
  }
  return uVar21;
}

