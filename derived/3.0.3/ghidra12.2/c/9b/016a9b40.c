
void FUN_016a9b40(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined2 local_60;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_55;
  undefined4 local_54;
  undefined2 local_50;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined4 local_4c;
  undefined2 local_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined4 local_44;
  undefined2 local_40;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined4 local_3c;
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_35;
  undefined4 local_34;
  
  puVar3 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_70 = "HotelConstruction";
  local_78 = puVar1;
  uVar6 = FUN_0273f0a0(&local_78);
  if ((uVar6 & 1) != 0) {
    return;
  }
  local_70 = "HotelBuilt";
  local_78 = puVar1;
  uVar6 = FUN_0273f0a0(&local_78);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (((char)param_1[5] == '\0') && (*param_1 == 0)) {
    local_78 = puVar3 + 0x10;
    local_70 = "GrowUpAfterPatch3_0";
    uVar6 = FUN_0273f0a0(&local_78);
    if ((uVar6 & 1) != 0) goto LAB_016a9eac;
  }
  FUN_016a9ee0();
  FUN_016a9fa0();
  FUN_016aa180();
  FUN_016aa2fc();
  FUN_016aa8f0();
  if (DAT_05574040 != 0) {
    puVar9 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar7 = (**(code **)(*(long *)*puVar9 + 0x38))();
      if (lVar7 != 0) {
        lVar7 = lVar7 + 0x70;
LAB_016a9c28:
        plVar2 = (long *)(lVar7 + 0x2181a8);
        lVar10 = *(long *)(lVar7 + 0x2181c8);
        if (lVar10 == 0) {
          FUN_00d2cc74(*(long *)(lVar7 + 0x2181b0) + *plVar2);
        }
        else {
          if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
            uVar6 = 0;
LAB_016a9c70:
            plVar8 = *(long **)(lVar10 + 0x20);
            if (plVar8 != (long *)0x0) {
              local_78 = (undefined *)*plVar2;
              local_70 = *(char **)(lVar7 + 0x2181b0);
              local_68 = 0x179e4;
              (**(code **)(*plVar8 + 0x20))(plVar8,&local_78);
            }
          }
          else {
            uVar6 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
            lVar10 = *(long *)(lVar7 + 0x2181c8);
            uVar6 = uVar6 & 0xffffffff;
            if (lVar10 != 0) goto LAB_016a9c70;
          }
          FUN_00d2cc74(*(long *)(lVar7 + 0x2181b0) + *plVar2);
          if ((((uVar6 & 1) != 0) && (*(long *)(lVar7 + 0x2181c8) != 0)) &&
             (puVar9 = *(undefined8 **)(*(long *)(lVar7 + 0x2181c8) + 0x18),
             puVar9 != (undefined8 *)0x0)) {
            (**(code **)*puVar9)();
          }
        }
      }
    }
    else if (((puVar9 != (undefined8 *)0x0) && ((long *)puVar9[0x26] != (long *)0x0)) &&
            (lVar7 = (**(code **)(*(long *)puVar9[0x26] + 0x38))(), lVar7 != 0)) goto LAB_016a9c28;
  }
  uVar6 = FUN_016ab120(param_1);
  FUN_016ab990(uVar6,uVar6 & 0xffffffff);
  uVar4 = FUN_016d5d28(param_1 + 3);
  uVar5 = FUN_016d5d28(param_1 + 2);
  if ((uVar4 & 1) != (uVar5 & 1)) {
    puVar3 = puVar3 + 0x10;
    local_70 = "HotelIsEditedMannequin0";
    local_78 = puVar3;
    uVar6 = FUN_0273f0a0(&local_78);
    if ((uVar6 & 1) == 0) {
      local_78._0_3_ = CONCAT12(DAT_0558600a,DAT_05586008);
      local_78._0_4_ = CONCAT13(DAT_0558600b,(undefined3)local_78);
      local_78 = (undefined *)CONCAT44(DAT_0558600c,(undefined4)local_78);
      local_70._0_3_ = CONCAT12(DAT_0558600a,DAT_05586008);
      local_70._0_4_ = CONCAT13(DAT_0558600b,(undefined3)local_70);
      local_70 = (char *)CONCAT44(DAT_0558600c,(undefined4)local_70);
      local_68._0_3_ = CONCAT12(DAT_0558600a,DAT_05586008);
      local_68._0_4_ = CONCAT13(DAT_0558600b,(undefined3)local_68);
      local_68 = CONCAT44(DAT_0558600c,(undefined4)local_68);
      local_60 = DAT_05586008;
      local_5e = DAT_0558600a;
      local_5d = DAT_0558600b;
      local_5c = DAT_0558600c;
      local_58 = DAT_05586008;
      local_56 = DAT_0558600a;
      local_55 = DAT_0558600b;
      local_54 = DAT_0558600c;
      local_50 = DAT_05586008;
      local_4e = DAT_0558600a;
      local_4d = DAT_0558600b;
      local_4c = DAT_0558600c;
      local_48 = DAT_05586008;
      local_46 = DAT_0558600a;
      local_45 = DAT_0558600b;
      local_44 = DAT_0558600c;
      local_40 = DAT_05586008;
      local_3e = DAT_0558600a;
      local_3d = DAT_0558600b;
      local_3c = DAT_0558600c;
      local_38 = DAT_05586008;
      local_36 = DAT_0558600a;
      local_35 = DAT_0558600b;
      local_34 = DAT_0558600c;
      FUN_016d3390(&local_78,0);
      FUN_016c9dd8(0,&local_78);
    }
    local_70 = "HotelIsEditedMannequin1";
    local_78 = puVar3;
    uVar6 = FUN_0273f0a0(&local_78);
    if ((uVar6 & 1) == 0) {
      local_78._0_3_ = CONCAT12(DAT_0558600a,DAT_05586008);
      local_78._0_4_ = CONCAT13(DAT_0558600b,(undefined3)local_78);
      local_78 = (undefined *)CONCAT44(DAT_0558600c,(undefined4)local_78);
      local_70._0_3_ = CONCAT12(DAT_0558600a,DAT_05586008);
      local_70._0_4_ = CONCAT13(DAT_0558600b,(undefined3)local_70);
      local_70 = (char *)CONCAT44(DAT_0558600c,(undefined4)local_70);
      local_68._0_3_ = CONCAT12(DAT_0558600a,DAT_05586008);
      local_68._0_4_ = CONCAT13(DAT_0558600b,(undefined3)local_68);
      local_68 = CONCAT44(DAT_0558600c,(undefined4)local_68);
      local_60 = DAT_05586008;
      local_5e = DAT_0558600a;
      local_5d = DAT_0558600b;
      local_5c = DAT_0558600c;
      local_58 = DAT_05586008;
      local_56 = DAT_0558600a;
      local_55 = DAT_0558600b;
      local_54 = DAT_0558600c;
      local_50 = DAT_05586008;
      local_4e = DAT_0558600a;
      local_4d = DAT_0558600b;
      local_4c = DAT_0558600c;
      local_48 = DAT_05586008;
      local_46 = DAT_0558600a;
      local_45 = DAT_0558600b;
      local_44 = DAT_0558600c;
      local_40 = DAT_05586008;
      local_3e = DAT_0558600a;
      local_3d = DAT_0558600b;
      local_3c = DAT_0558600c;
      local_38 = DAT_05586008;
      local_36 = DAT_0558600a;
      local_35 = DAT_0558600b;
      local_34 = DAT_0558600c;
      FUN_016d3390(&local_78,1);
      FUN_016c9dd8(1,&local_78);
    }
  }
  FUN_016ac2a0();
LAB_016a9eac:
  local_98 = param_1[2];
  lStack_90 = param_1[3];
  local_88 = param_1[4];
  lStack_80 = param_1[5];
  local_a8 = *param_1;
  lStack_a0 = param_1[1];
  FUN_016ac6a0(&local_a8);
  return;
}

