
uint FUN_02649620(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined *puVar1;
  short sVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  uint local_94;
  undefined *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  long local_80;
  undefined *local_78;
  char *local_70;
  undefined8 local_68;
  
  uVar8 = FUN_02649430(param_2);
  puVar3 = PTR_DAT_04bb46b0;
  if ((uVar8 & 1) == 0) {
    sVar2 = *(short *)PTR_DAT_04bb6298;
    if (sVar2 != -1) {
      local_78 = (undefined *)CONCAT44(local_78._4_4_,0x20);
      puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8;
      if (0xff < (uint)(int)sVar2) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar1 + 4) & 1) != 0) goto LAB_026496ec;
    }
    if ((*(long *)PTR_DAT_04bb46b0 != 0) &&
       (lVar9 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,*param_1), lVar9 != 0)) {
      lVar15 = lVar9 + 0x194b0;
      plVar16 = (long *)(lVar9 + 0x194b8);
      if (*plVar16 == 0) {
        lVar13 = *(long *)(*(long *)puVar3 + 0x20);
        lVar12 = *(long *)(lVar13 + 0x1090);
        if (lVar12 != 0) goto LAB_02649724;
LAB_02649740:
        local_94 = 0;
      }
      else {
        lVar12 = *(long *)(lVar9 + 0x1a540);
        lVar13 = lVar15;
        if (lVar12 == 0) goto LAB_02649740;
LAB_02649724:
        if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) goto LAB_02649740;
        local_94 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
      }
      puVar1 = PTR_DAT_04bb43c0;
      lVar14 = *(long *)PTR_DAT_04bb43c0;
      uVar4 = FUN_0277d6c4(param_2);
      lVar12 = *(long *)puVar1;
      if (lVar12 == 0) {
LAB_0264987c:
        uVar4 = 0;
      }
      else {
        lVar14 = *(long *)(lVar14 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if ((*(uint *)(lVar14 + 0x1d8) <= uVar4) ||
           (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0264987c;
        local_80 = 0;
        local_88 = *param_2;
        uStack_84 = param_2[1];
        local_90 = PTR_DAT_04bc0510 + 0x10;
        uVar4 = FUN_0277d6c4(&local_88);
        if (*(long *)puVar1 != 0) {
          lVar12 = *(long *)(lVar12 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar12 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
            lVar12 = *(long *)PTR_DAT_04bc0428;
            uVar4 = FUN_0277d6c4(param_2);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar12 + 0x1d8)) &&
               (lVar12 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8), lVar12 != 0))
            {
              local_80 = lVar12;
            }
          }
        }
        iVar5 = FUN_01ad78cc(&local_90);
        if ((*(long *)puVar3 != 0) && (lVar12 = FUN_026eec4c(*(long *)puVar3,*param_1), lVar12 != 0)
           ) {
          FUN_0279ef38(lVar12,param_2);
        }
        if (iVar5 == 7) {
          local_70 = "HasGottenMarinesuit";
LAB_026498b4:
          local_78 = PTR_DAT_04bb2020 + 0x10;
          FUN_0274d104(param_1,&local_78,1);
        }
        else if (iVar5 == 0x12) {
          local_70 = "HasGottenToolChangeStick";
          goto LAB_026498b4;
        }
        iVar5 = FUN_01ad7260(&local_90);
        if (iVar5 == 0) {
          uVar6 = 0;
        }
        else {
          uVar4 = FUN_01b00960(param_2);
          if (uVar4 == 0xffffffff) {
            uVar4 = 0;
          }
          else {
            lVar12 = lVar15;
            if (*plVar16 == 0) {
              lVar12 = *(long *)(*(long *)puVar3 + 0x20);
            }
            if ((*(long **)(lVar12 + 0x1100) == (long *)0x0) ||
               (puVar10 = (undefined8 *)**(long **)(lVar12 + 0x1100), puVar10 == (undefined8 *)0x0))
            {
              uVar6 = 1;
            }
            else {
              uVar6 = (**(code **)*puVar10)();
              uVar6 = uVar6 ^ 1;
            }
            if (uVar4 >> 7 < 0x7d) {
              uVar4 = *(uint *)(*(long *)(lVar12 + 0x10e8) + *(long *)(lVar12 + 0x10e0) +
                               (ulong)(uVar4 >> 5) * 4) >> (ulong)(uVar4 & 0x1f) & 1;
            }
            else {
              uVar4 = 0;
            }
            if ((((uVar6 & 1) == 0) && (*(long *)(lVar12 + 0x1100) != 0)) &&
               (puVar10 = *(undefined8 **)(*(long *)(lVar12 + 0x1100) + 8),
               puVar10 != (undefined8 *)0x0)) {
              (**(code **)*puVar10)();
            }
          }
          uVar6 = FUN_0264cb90(lVar9,param_2);
          uVar6 = uVar6 & (uVar4 ^ 1);
        }
        if ((*(long *)(lVar13 + 0x1090) != 0) &&
           (plVar11 = *(long **)(*(long *)(lVar13 + 0x1090) + 0x20), plVar11 != (long *)0x0)) {
          local_78 = *(undefined **)(lVar13 + 0x1070);
          local_70 = *(char **)(lVar13 + 0x1078);
          local_68 = 0x754;
          (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
        }
        uVar7 = FUN_0277a1f4(*(long *)(lVar13 + 0x1078) + *(long *)(lVar13 + 0x1070),param_2);
        if ((*(long *)(lVar13 + 0x1090) != 0) &&
           (plVar11 = *(long **)(*(long *)(lVar13 + 0x1090) + 0x20), plVar11 != (long *)0x0)) {
          local_78 = *(undefined **)(lVar13 + 0x1070);
          local_70 = *(char **)(lVar13 + 0x1078);
          local_68 = 0x754;
          (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
        }
        uVar4 = FUN_02779e74(*(long *)(lVar13 + 0x1078) + *(long *)(lVar13 + 0x1070),param_2,
                             param_3 & 1);
        if (((uVar4 & 1) == 0) || (((uVar7 ^ 1) & 1) == 0)) {
          if (uVar6 != 0) goto LAB_02649a60;
        }
        else {
          FUN_02649b30(param_1);
LAB_02649a60:
          if (*plVar16 == 0) {
            lVar15 = *(long *)(*(long *)puVar3 + 0x20);
          }
          plVar16 = (long *)(lVar15 + 0x2c500);
          lVar9 = *(long *)(lVar15 + 0x2c520);
          if (lVar9 == 0) {
            FUN_02790410(*(long *)(lVar15 + 0x2c508) + *plVar16,param_2,*param_1);
          }
          else {
            if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
              uVar8 = 0;
LAB_02649ac0:
              plVar11 = *(long **)(lVar9 + 0x20);
              if (plVar11 != (long *)0x0) {
                local_78 = (undefined *)*plVar16;
                local_70 = *(char **)(lVar15 + 0x2c508);
                local_68 = 0x644;
                (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
              }
            }
            else {
              uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
              lVar9 = *(long *)(lVar15 + 0x2c520);
              uVar8 = uVar8 & 0xffffffff;
              if (lVar9 != 0) goto LAB_02649ac0;
            }
            FUN_02790410(*(long *)(lVar15 + 0x2c508) + *plVar16,param_2,*param_1);
            if ((((uVar8 & 1) != 0) && (*(long *)(lVar15 + 0x2c520) != 0)) &&
               (puVar10 = *(undefined8 **)(*(long *)(lVar15 + 0x2c520) + 0x18),
               puVar10 != (undefined8 *)0x0)) {
              (**(code **)*puVar10)();
            }
          }
        }
      }
      if ((((local_94 & 1) != 0) && (*(long *)(lVar13 + 0x1090) != 0)) &&
         (puVar10 = *(undefined8 **)(*(long *)(lVar13 + 0x1090) + 0x18),
         puVar10 != (undefined8 *)0x0)) {
        (**(code **)*puVar10)();
      }
      goto LAB_026496f0;
    }
  }
LAB_026496ec:
  uVar4 = 0;
LAB_026496f0:
  return uVar4 & 1;
}

