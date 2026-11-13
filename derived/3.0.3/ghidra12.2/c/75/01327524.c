
/* WARNING: Removing unreachable block (ram,0x01327730) */

void FUN_01327524(uint param_1)

{
  undefined4 *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_70;
  undefined **local_68;
  undefined8 *local_60;
  uint *local_58;
  undefined1 *puStack_50;
  undefined8 local_48;
  uint local_40;
  undefined4 uStack_3c;
  byte local_38;
  uint local_18;
  undefined4 local_14;
  
  local_70 = 0xfffe;
  FUN_0277d4ac(&local_70);
  local_48 = (undefined **)0xfffe;
  FUN_0277d4ac(&local_48);
  if (DAT_05574040 == 0) {
LAB_013275b0:
    lVar6 = 0;
  }
  else {
    puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar2 = (**(code **)(*(long *)*puVar5 + 0x38))();
      lVar6 = 0;
      if (lVar2 != 0) {
        lVar6 = lVar2 + 0x70;
      }
    }
    else {
      if (puVar5 == (undefined8 *)0x0) goto LAB_013275b0;
      lVar6 = 0;
      if ((long *)puVar5[0x26] != (long *)0x0) {
        lVar6 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
      }
    }
  }
  lVar2 = *(long *)(lVar6 + 0x1c24e8);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(undefined8 **)(lVar2 + 0x10) == (undefined8 *)0x0) {
      uVar3 = 0;
      plVar4 = *(long **)(lVar2 + 0x20);
    }
    else {
      uVar3 = (**(code **)**(undefined8 **)(lVar2 + 0x10))();
      uVar3 = uVar3 & 0xffffffff;
      if (*(long *)(lVar6 + 0x1c24e8) == 0) goto LAB_01327628;
      plVar4 = *(long **)(*(long *)(lVar6 + 0x1c24e8) + 0x20);
    }
    if (plVar4 != (long *)0x0) {
      local_68 = *(undefined ***)(lVar6 + 0x1c24c8);
      local_60 = *(undefined8 **)(lVar6 + 0x1c24d0);
      local_58 = (uint *)0x928;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_68);
    }
  }
LAB_01327628:
  local_14 = 0;
  local_18 = (uint)*(ushort *)(*(long *)(lVar6 + 0x1c24d0) + *(long *)(lVar6 + 0x1c24c8) + 0x900);
  FUN_0277d4ac(&local_18);
  local_48._0_4_ = local_18;
  local_48._4_4_ = local_14;
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar6 + 0x1c24e8) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar6 + 0x1c24e8) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  uVar3 = FUN_0123b7d0(&local_48,&local_70);
  if (((uVar3 & 1) != 0) &&
     (local_48 = (undefined **)CONCAT44(local_48._4_4_,param_1), param_1 != 0)) {
    local_68 = (undefined **)CONCAT44(local_68._4_4_,param_1);
    if (param_1 == 0) {
      lVar6 = *(long *)(DAT_0519d040 + 0x1f8);
    }
    else {
      plVar4 = (long *)(DAT_0519d040 + 0x30) + param_1;
      if (0x38 < param_1) {
        plVar4 = (long *)(DAT_0519d040 + 0x30);
      }
      lVar6 = *plVar4;
    }
    if (lVar6 != 0) {
      local_18 = 0;
      puVar1 = (undefined4 *)((long)(PTR_DAT_04bbbf90 + 8) + (ulong)param_1 * 4);
      if (0x38 < param_1) {
        puVar1 = (undefined4 *)(PTR_DAT_04bbbf90 + 8);
      }
      uStack_3c = *puVar1;
      local_40 = param_1;
      local_38 = FUN_017baf44();
      local_38 = local_38 & 1;
      local_48 = &PTR_LAB_0492e760;
      local_60 = &local_48;
      local_68 = &PTR_LAB_0498e2c0;
      local_58 = &local_18;
      if (*(long *)(lVar6 + 0xd0) != 0) {
        puStack_50 = (undefined1 *)&local_70;
        FUN_012e6150(*(long *)(lVar6 + 0xd0),&local_68,lVar6 + 0x38);
      }
    }
  }
  return;
}

