
uint FUN_02649bf0(long param_1,undefined4 *param_2,uint param_3)

{
  undefined *puVar1;
  long lVar2;
  short sVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  long local_80;
  undefined *local_78;
  char *local_70;
  undefined8 local_68;
  byte local_48 [4];
  int local_44;
  
  uVar11 = FUN_02649430(param_2);
  puVar4 = PTR_DAT_04bb43c0;
  if ((uVar11 & 1) != 0) goto LAB_02649c28;
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 == -1) {
    uVar5 = 0;
  }
  else {
    local_78 = (undefined *)CONCAT44(local_78._4_4_,0x20);
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8;
    if (0xff < (uint)(int)sVar3) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    uVar5 = *(uint *)(puVar1 + 4) & 1;
  }
  uVar9 = 0;
  if ((param_1 == 0) || (uVar9 = 0, uVar5 != 0)) goto LAB_02649c2c;
  lVar18 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(param_2);
  lVar17 = *(long *)puVar4;
  if (lVar17 != 0) {
    lVar18 = *(long *)(lVar18 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar18 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      local_80 = 0;
      local_88 = *param_2;
      uStack_84 = param_2[1];
      local_90 = PTR_DAT_04bc0510 + 0x10;
      uVar5 = FUN_0277d6c4(&local_88);
      if (*(long *)puVar4 != 0) {
        lVar17 = *(long *)(lVar17 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar17 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          lVar17 = *(long *)PTR_DAT_04bc0428;
          uVar5 = FUN_0277d6c4(param_2);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar17 + 0x1d8)) &&
             (lVar17 = *(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar5 * 8), lVar17 != 0)) {
            local_80 = lVar17;
          }
        }
      }
      iVar6 = FUN_01ad78cc(&local_90);
      iVar7 = FUN_02669de0(param_1);
      local_44 = iVar7;
      FUN_02669cc0(local_48,param_1);
      if (iVar7 == -1) {
        if (local_48[0] < 8) {
          FUN_0279ed90(local_48,param_2);
        }
      }
      else if ((*(long *)PTR_DAT_04bb46b0 != 0) &&
              (lVar17 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,local_44), lVar17 != 0)) {
        FUN_0279ef38(lVar17,param_2);
      }
      if (iVar6 == 7) {
        if (local_44 == -1) {
          if (local_48[0] < 8) {
            local_70 = "HasGottenMarinesuit";
LAB_02649eac:
            local_78 = PTR_DAT_04bb2020 + 0x10;
            FUN_0274bfe8(local_48,&local_78,1);
          }
        }
        else {
          local_70 = "HasGottenMarinesuit";
LAB_02649e58:
          local_78 = PTR_DAT_04bb2020 + 0x10;
          FUN_0274d104(&local_44,&local_78,1);
        }
      }
      else if (iVar6 == 0x12) {
        if (local_44 != -1) {
          local_70 = "HasGottenToolChangeStick";
          goto LAB_02649e58;
        }
        if (local_48[0] < 8) {
          local_70 = "HasGottenToolChangeStick";
          goto LAB_02649eac;
        }
      }
      iVar6 = FUN_01ad7260(&local_90);
      if (iVar6 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_01b00960(param_2);
        if (uVar5 == 0xffffffff) {
          uVar9 = 0;
        }
        else {
          lVar17 = param_1 + 0x194b0;
          if (*(long *)(param_1 + 0x194b8) == 0) {
            lVar17 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
          }
          if ((*(long **)(lVar17 + 0x1100) == (long *)0x0) ||
             (puVar12 = (undefined8 *)**(long **)(lVar17 + 0x1100), puVar12 == (undefined8 *)0x0)) {
            uVar8 = 1;
          }
          else {
            uVar8 = (**(code **)*puVar12)();
            uVar8 = uVar8 ^ 1;
          }
          if (uVar5 >> 7 < 0x7d) {
            uVar9 = *(uint *)(*(long *)(lVar17 + 0x10e8) + *(long *)(lVar17 + 0x10e0) +
                             (ulong)(uVar5 >> 5) * 4) >> (ulong)(uVar5 & 0x1f) & 1;
          }
          else {
            uVar9 = 0;
          }
          if ((((uVar8 & 1) == 0) && (*(long *)(lVar17 + 0x1100) != 0)) &&
             (puVar12 = *(undefined8 **)(*(long *)(lVar17 + 0x1100) + 8),
             puVar12 != (undefined8 *)0x0)) {
            (**(code **)*puVar12)();
          }
        }
        uVar5 = FUN_0264cb90(param_1,param_2);
        uVar5 = uVar5 & (uVar9 ^ 1);
      }
      lVar17 = param_1 + 0x194b0;
      lVar18 = lVar17;
      if (*(long *)(param_1 + 0x194b8) == 0) {
        lVar18 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
      }
      lVar16 = *(long *)(lVar18 + 0x1090);
      if (lVar16 == 0) {
        uVar11 = 0;
      }
      else {
        if (*(undefined8 **)(lVar16 + 0x10) == (undefined8 *)0x0) {
          uVar11 = 0;
        }
        else {
          uVar11 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
          lVar16 = *(long *)(lVar18 + 0x1090);
          uVar11 = uVar11 & 0xffffffff;
          if (lVar16 == 0) goto LAB_0264a030;
        }
        plVar13 = *(long **)(lVar16 + 0x20);
        if (plVar13 != (long *)0x0) {
          local_78 = *(undefined **)(lVar18 + 0x1070);
          local_70 = *(char **)(lVar18 + 0x1078);
          local_68 = 0x754;
          (**(code **)(*plVar13 + 0x20))(plVar13,&local_78);
        }
      }
LAB_0264a030:
      uVar8 = FUN_0277a1f4(*(long *)(lVar18 + 0x1078) + *(long *)(lVar18 + 0x1070),param_2);
      if ((*(long *)(lVar18 + 0x1090) != 0) &&
         (plVar13 = *(long **)(*(long *)(lVar18 + 0x1090) + 0x20), plVar13 != (long *)0x0)) {
        local_78 = *(undefined **)(lVar18 + 0x1070);
        local_70 = *(char **)(lVar18 + 0x1078);
        local_68 = 0x754;
        (**(code **)(*plVar13 + 0x20))(plVar13,&local_78);
      }
      uVar9 = FUN_02779e74(*(long *)(lVar18 + 0x1078) + *(long *)(lVar18 + 0x1070),param_2,
                           param_3 & 1);
      if (((uVar9 & 1) == 0) || (((uVar8 ^ 1) & 1) == 0)) {
        if (uVar5 != 0) goto LAB_0264a0d8;
      }
      else {
        if (local_44 == -1) {
          if (local_48[0] < 8) {
            FUN_02649500(local_48);
          }
        }
        else {
          FUN_02649b30(&local_44);
        }
LAB_0264a0d8:
        if (*(long *)(param_1 + 0x194b8) == 0) {
          lVar17 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
        }
        plVar13 = (long *)(lVar17 + 0x2c500);
        lVar16 = *(long *)(lVar17 + 0x2c520);
        if (lVar16 == 0) {
          lVar16 = *plVar13;
          lVar17 = *(long *)(lVar17 + 0x2c508);
          uVar10 = FUN_02582fe0(local_48);
          FUN_02790410(lVar17 + lVar16,param_2,uVar10);
        }
        else {
          if (*(undefined8 **)(lVar16 + 0x10) == (undefined8 *)0x0) {
            uVar14 = 0;
LAB_0264a14c:
            plVar15 = *(long **)(lVar16 + 0x20);
            if (plVar15 != (long *)0x0) {
              local_78 = (undefined *)*plVar13;
              local_70 = *(char **)(lVar17 + 0x2c508);
              local_68 = 0x644;
              (**(code **)(*plVar15 + 0x20))(plVar15,&local_78);
            }
          }
          else {
            uVar14 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
            lVar16 = *(long *)(lVar17 + 0x2c520);
            uVar14 = uVar14 & 0xffffffff;
            if (lVar16 != 0) goto LAB_0264a14c;
          }
          lVar16 = *plVar13;
          lVar2 = *(long *)(lVar17 + 0x2c508);
          uVar10 = FUN_02582fe0(local_48);
          FUN_02790410(lVar2 + lVar16,param_2,uVar10);
          if ((((uVar14 & 1) != 0) && (*(long *)(lVar17 + 0x2c520) != 0)) &&
             (puVar12 = *(undefined8 **)(*(long *)(lVar17 + 0x2c520) + 0x18),
             puVar12 != (undefined8 *)0x0)) {
            (**(code **)*puVar12)();
          }
        }
      }
      if ((((uVar11 & 1) != 0) && (*(long *)(lVar18 + 0x1090) != 0)) &&
         (puVar12 = *(undefined8 **)(*(long *)(lVar18 + 0x1090) + 0x18),
         puVar12 != (undefined8 *)0x0)) {
        (**(code **)*puVar12)();
      }
      goto LAB_02649c2c;
    }
  }
LAB_02649c28:
  uVar9 = 0;
LAB_02649c2c:
  return uVar9 & 1;
}

