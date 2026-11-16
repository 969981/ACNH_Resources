
uint FUN_02648c90(byte *param_1,undefined4 *param_2,uint param_3)

{
  undefined *puVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  uint *puVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  uint *puVar19;
  undefined *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  uint *local_88;
  byte local_80 [4];
  uint local_7c;
  undefined *local_78;
  char *local_70;
  undefined8 local_68;
  
  uVar8 = FUN_02649430(param_2);
  if ((uVar8 & 1) == 0) {
    sVar2 = *(short *)PTR_DAT_04bb6298;
    if (sVar2 == -1) {
      if (7 < *param_1) goto LAB_02648e08;
    }
    else {
      local_78 = (undefined *)CONCAT44(local_78._4_4_,0x20);
      uVar3 = 0;
      puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8;
      if (0xff < (uint)(int)sVar2) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      if (((*(uint *)(puVar1 + 4) & 1) != 0) || (7 < *param_1)) goto LAB_02648e0c;
    }
    uVar3 = FUN_02582d8c(param_1,1);
    if ((uVar3 < 8) &&
       ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0' &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d6) != '\0')))) {
      local_80[0] = *param_1;
      if (7 < local_80[0]) {
        local_80[0] = 0xff;
      }
      lVar9 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_80,1);
      if (lVar9 != 0) {
        lVar17 = lVar9 + 0x194b0;
        plVar16 = (long *)(lVar9 + 0x194b8);
        lVar14 = lVar17;
        if (*plVar16 == 0) {
          lVar14 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
        }
        if ((*(long *)(lVar14 + 0x1090) == 0) ||
           (puVar10 = *(undefined8 **)(*(long *)(lVar14 + 0x1090) + 0x10),
           puVar10 == (undefined8 *)0x0)) {
          uVar8 = 0;
        }
        else {
          uVar8 = (**(code **)*puVar10)();
          uVar8 = uVar8 & 0xffffffff;
        }
        puVar1 = PTR_DAT_04bb43c0;
        lVar15 = *(long *)PTR_DAT_04bb43c0;
        uVar3 = FUN_0277d6c4(param_2);
        lVar18 = *(long *)puVar1;
        if (lVar18 == 0) {
LAB_02648f28:
          uVar3 = 0;
        }
        else {
          lVar15 = *(long *)(lVar15 + 0x57e58);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if ((*(uint *)(lVar15 + 0x1d8) <= uVar3) ||
             (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_02648f28;
          local_88 = (uint *)0x0;
          local_90 = *param_2;
          uStack_8c = param_2[1];
          local_98 = PTR_DAT_04bc0510 + 0x10;
          uVar3 = FUN_0277d6c4(&local_90);
          if (*(long *)puVar1 == 0) {
            puVar19 = (uint *)0x0;
          }
          else {
            lVar15 = *(long *)(lVar18 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
            if (uVar3 < *(uint *)(lVar15 + 0x1d8)) {
              if (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar3 * 8) != 0) {
                lVar15 = *(long *)PTR_DAT_04bc0428;
                uVar3 = FUN_0277d6c4(param_2);
                uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                if (uVar3 < *(uint *)(lVar15 + 0x1d8)) {
                  puVar19 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar3 * 8);
                  if (puVar19 != (uint *)0x0) {
                    local_88 = puVar19;
                  }
                  goto LAB_02648f70;
                }
              }
              puVar19 = (uint *)0x0;
            }
            else {
              puVar19 = (uint *)0x0;
            }
          }
LAB_02648f70:
          iVar4 = FUN_01ad78cc(&local_98);
          FUN_0279ed90(param_1,param_2);
          if (iVar4 == 7) {
            local_70 = "HasGottenMarinesuit";
LAB_02648fb4:
            local_78 = PTR_DAT_04bb2020 + 0x10;
            FUN_0274bfe8(param_1,&local_78,1);
          }
          else if (iVar4 == 0x12) {
            local_70 = "HasGottenToolChangeStick";
            goto LAB_02648fb4;
          }
          uVar3 = 0;
          if (((puVar19 != (uint *)0x0) && (uVar5 = *puVar19, uVar5 != 0)) &&
             (puVar19 != (uint *)(ulong)uVar5)) {
            puVar13 = (uint *)((long)puVar19 - (long)(ulong)uVar5);
            uVar3 = 0;
            if (*puVar13 != 0) {
              uVar3 = puVar13[1];
              if ((uVar3 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
                lVar15 = 0xc;
                if (*(char *)((long)puVar13 + 10) != '\0') {
                  lVar15 = 0x1c;
                }
                lVar15 = (long)puVar13 + lVar15 + (ulong)(ushort)puVar13[2] * 8;
                if (lVar15 != 0) {
                  uVar5 = 0;
                  if ((ulong)uVar3 != 0) {
                    uVar5 = (uint)((ulong)((long)puVar19 - lVar15) / (ulong)uVar3);
                  }
                  if (*puVar13 <= uVar5) {
                    uVar5 = 0xffffffff;
                  }
                  if ((uVar5 < *(uint *)PTR_DAT_04bc0048) &&
                     (uVar3 = (uint)*(ushort *)
                                     (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar5 * 2),
                     uVar3 < 0x52)) goto LAB_02649060;
                }
              }
              uVar3 = 0;
            }
          }
LAB_02649060:
          local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar3);
          if (uVar3 == 2) {
LAB_02649080:
            local_70 = "GotToiletForTips";
LAB_0264909c:
            local_78 = PTR_DAT_04bb2020 + 0x10;
            FUN_0274bfe8(param_1,&local_78,1);
          }
          else {
            if (uVar3 == 0x11) {
              local_70 = "GetDresserForTips";
              goto LAB_0264909c;
            }
            if (uVar3 == 9) goto LAB_02649080;
          }
          local_78 = (undefined *)CONCAT44(local_78._4_4_,0x4e);
          if (puVar19 == (uint *)0x0) {
            local_7c = 0xbc;
          }
          else {
            uVar3 = *puVar19;
            local_7c = 0;
            if ((uVar3 != 0) && (puVar19 != (uint *)(ulong)uVar3)) {
              puVar13 = (uint *)((long)puVar19 - (long)(ulong)uVar3);
              local_7c = 0;
              if (*puVar13 != 0) {
                uVar3 = puVar13[1];
                if ((uVar3 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
                  lVar15 = 0xc;
                  if (*(char *)((long)puVar13 + 10) != '\0') {
                    lVar15 = 0x1c;
                  }
                  lVar15 = (long)puVar13 + lVar15 + (ulong)(ushort)puVar13[2] * 8;
                  if (lVar15 != 0) {
                    uVar5 = 0;
                    if ((ulong)uVar3 != 0) {
                      uVar5 = (uint)((ulong)((long)puVar19 - lVar15) / (ulong)uVar3);
                    }
                    if (*puVar13 <= uVar5) {
                      uVar5 = 0xffffffff;
                    }
                    if ((uVar5 < *(uint *)PTR_DAT_04bc00c8) &&
                       (local_7c = (uint)*(ushort *)
                                          (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar5 * 2),
                       local_7c < 0xbd)) goto LAB_02649158;
                  }
                }
                local_7c = 0;
              }
            }
          }
LAB_02649158:
          if (local_7c == 0x4e) {
            local_78 = PTR_DAT_04bb2020 + 0x10;
            local_70 = "GotBushForTips";
            FUN_0274bfe8(param_1,&local_78,1);
          }
          iVar4 = FUN_01ad7260(&local_98);
          if (iVar4 == 0) {
            uVar5 = 0;
          }
          else {
            uVar3 = FUN_01b00960(param_2);
            if (uVar3 == 0xffffffff) {
              uVar3 = 0;
            }
            else {
              lVar15 = lVar17;
              if (*plVar16 == 0) {
                lVar15 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
              }
              if ((*(long **)(lVar15 + 0x1100) == (long *)0x0) ||
                 (puVar10 = (undefined8 *)**(long **)(lVar15 + 0x1100), puVar10 == (undefined8 *)0x0
                 )) {
                uVar5 = 1;
              }
              else {
                uVar5 = (**(code **)*puVar10)();
                uVar5 = uVar5 ^ 1;
              }
              if (uVar3 >> 7 < 0x7d) {
                uVar3 = *(uint *)(*(long *)(lVar15 + 0x10e8) + *(long *)(lVar15 + 0x10e0) +
                                 (ulong)(uVar3 >> 5) * 4) >> (ulong)(uVar3 & 0x1f) & 1;
              }
              else {
                uVar3 = 0;
              }
              if ((((uVar5 & 1) == 0) && (*(long *)(lVar15 + 0x1100) != 0)) &&
                 (puVar10 = *(undefined8 **)(*(long *)(lVar15 + 0x1100) + 8),
                 puVar10 != (undefined8 *)0x0)) {
                (**(code **)*puVar10)();
              }
            }
            uVar5 = FUN_0264cb90(lVar9,param_2);
            uVar5 = uVar5 & (uVar3 ^ 1);
          }
          if ((*(long *)(lVar14 + 0x1090) != 0) &&
             (plVar11 = *(long **)(*(long *)(lVar14 + 0x1090) + 0x20), plVar11 != (long *)0x0)) {
            local_78 = *(undefined **)(lVar14 + 0x1070);
            local_70 = *(char **)(lVar14 + 0x1078);
            local_68 = 0x754;
            (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
          }
          uVar6 = FUN_0277a1f4(*(long *)(lVar14 + 0x1078) + *(long *)(lVar14 + 0x1070),param_2);
          if ((*(long *)(lVar14 + 0x1090) != 0) &&
             (plVar11 = *(long **)(*(long *)(lVar14 + 0x1090) + 0x20), plVar11 != (long *)0x0)) {
            local_78 = *(undefined **)(lVar14 + 0x1070);
            local_70 = *(char **)(lVar14 + 0x1078);
            local_68 = 0x754;
            (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
          }
          uVar3 = FUN_02779e74(*(long *)(lVar14 + 0x1078) + *(long *)(lVar14 + 0x1070),param_2,
                               param_3 & 1);
          if (((uVar3 & 1) == 0) || (((uVar6 ^ 1) & 1) == 0)) {
            if (uVar5 != 0) goto LAB_02649340;
          }
          else {
            if ((*(long *)PTR_DAT_04bb27a8 == 0) ||
               ((*(byte *)(*(long *)PTR_DAT_04bb27a8 + 0x49f8) & 1) == 0)) {
              FUN_02649500(param_1);
            }
LAB_02649340:
            if (*plVar16 == 0) {
              lVar17 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
            }
            plVar16 = (long *)(lVar17 + 0x2c500);
            lVar9 = *(long *)(lVar17 + 0x2c520);
            if (lVar9 == 0) {
              lVar9 = *plVar16;
              lVar17 = *(long *)(lVar17 + 0x2c508);
              uVar7 = FUN_02582fe0(param_1);
              FUN_02790410(lVar17 + lVar9,param_2,uVar7);
            }
            else {
              if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
                uVar12 = 0;
LAB_026493b4:
                plVar11 = *(long **)(lVar9 + 0x20);
                if (plVar11 != (long *)0x0) {
                  local_78 = (undefined *)*plVar16;
                  local_70 = *(char **)(lVar17 + 0x2c508);
                  local_68 = 0x644;
                  (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
                }
              }
              else {
                uVar12 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
                lVar9 = *(long *)(lVar17 + 0x2c520);
                uVar12 = uVar12 & 0xffffffff;
                if (lVar9 != 0) goto LAB_026493b4;
              }
              lVar9 = *plVar16;
              lVar15 = *(long *)(lVar17 + 0x2c508);
              uVar7 = FUN_02582fe0(param_1);
              FUN_02790410(lVar15 + lVar9,param_2,uVar7);
              if ((((uVar12 & 1) != 0) && (*(long *)(lVar17 + 0x2c520) != 0)) &&
                 (puVar10 = *(undefined8 **)(*(long *)(lVar17 + 0x2c520) + 0x18),
                 puVar10 != (undefined8 *)0x0)) {
                (**(code **)*puVar10)();
              }
            }
          }
        }
        if ((((uVar8 & 1) != 0) && (*(long *)(lVar14 + 0x1090) != 0)) &&
           (puVar10 = *(undefined8 **)(*(long *)(lVar14 + 0x1090) + 0x18),
           puVar10 != (undefined8 *)0x0)) {
          (**(code **)*puVar10)();
        }
        goto LAB_02648e0c;
      }
    }
  }
LAB_02648e08:
  uVar3 = 0;
LAB_02648e0c:
  return uVar3 & 1;
}

