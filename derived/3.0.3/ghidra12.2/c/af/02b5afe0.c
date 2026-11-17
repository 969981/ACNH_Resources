
ushort FUN_02b5afe0(uint param_1)

{
  ushort uVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  uint local_64;
  char local_60;
  undefined4 local_5c;
  bool local_58;
  uint local_54;
  undefined **local_50;
  uint *puStack_48;
  uint *local_40;
  ushort *puStack_38;
  char local_18 [4];
  ushort local_14 [2];
  
  puVar2 = PTR_DAT_04bb46b0;
  local_50 = (undefined **)CONCAT44(local_50._4_4_,param_1);
  uVar5 = param_1;
  if (0xf < param_1) {
    uVar5 = 0;
  }
  local_54 = (&DAT_05636e58)[(int)uVar5];
  switch(param_1) {
  case 0:
    local_58 = false;
    lVar7 = *(long *)PTR_DAT_04bb46b0;
    local_64 = local_54;
    if (lVar7 == 0) {
LAB_02b5b354:
      local_60 = '\0';
    }
    else {
      puVar8 = *(undefined8 **)(lVar7 + 0x10);
      if ((*(byte *)(lVar7 + 0x453) & 1) != 0) {
        if (puVar8 != (undefined8 *)0x0) {
          if ((long *)puVar8[0x26] != (long *)0x0) {
            lVar7 = (**(code **)(*(long *)puVar8[0x26] + 0x38))();
            if (lVar7 != 0) goto LAB_02b5b208;
          }
        }
        goto LAB_02b5b354;
      }
      lVar7 = (**(code **)(*(long *)*puVar8 + 0x38))();
      if (lVar7 == 0) goto LAB_02b5b354;
      lVar7 = lVar7 + 0x70;
LAB_02b5b208:
      if ((*(long **)(lVar7 + 0x1a0b70) == (long *)0x0) ||
         (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x1a0b70), puVar8 == (undefined8 *)0x0)) {
        uVar5 = 1;
      }
      else {
        uVar5 = (**(code **)*puVar8)();
        uVar5 = uVar5 ^ 1;
      }
      uVar6 = *(uint *)(*(long *)(lVar7 + 0x1a0b58) + *(long *)(lVar7 + 0x1a0b50));
      if (3 < uVar6) {
        uVar6 = 0;
      }
      if ((((uVar5 & 1) == 0) && (*(long *)(lVar7 + 0x1a0b70) != 0)) &&
         (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x1a0b70) + 8), puVar8 != (undefined8 *)0x0))
      {
        (**(code **)*puVar8)();
      }
      local_50 = (undefined **)CONCAT44(local_50._4_4_,uVar6);
      if (uVar6 == 0) goto LAB_02b5b354;
      local_60 = (char)uVar6 + -1;
    }
    lVar7 = *(long *)puVar2;
    local_5c = 0;
    if (lVar7 == 0) {
LAB_02b5b3d8:
      uVar5 = 0;
    }
    else {
      puVar8 = *(undefined8 **)(lVar7 + 0x10);
      if ((*(byte *)(lVar7 + 0x453) & 1) == 0) {
        lVar7 = (**(code **)(*(long *)*puVar8 + 0x38))();
        if (lVar7 == 0) goto LAB_02b5b3d8;
        lVar7 = lVar7 + 0x70;
      }
      else if (((puVar8 == (undefined8 *)0x0) || ((long *)puVar8[0x26] == (long *)0x0)) ||
              (lVar7 = (**(code **)(*(long *)puVar8[0x26] + 0x38))(), lVar7 == 0))
      goto LAB_02b5b3d8;
      if ((*(long **)(lVar7 + 0x1a0b70) == (long *)0x0) ||
         (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x1a0b70), puVar8 == (undefined8 *)0x0)) {
        uVar6 = 1;
      }
      else {
        uVar6 = (**(code **)*puVar8)();
        uVar6 = uVar6 ^ 1;
      }
      uVar5 = *(uint *)(*(long *)(lVar7 + 0x1a0b58) + *(long *)(lVar7 + 0x1a0b50));
      if (3 < uVar5) {
        uVar5 = 0;
      }
      if ((((uVar6 & 1) == 0) && (*(long *)(lVar7 + 0x1a0b70) != 0)) &&
         (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x1a0b70) + 8), puVar8 != (undefined8 *)0x0))
      {
        (**(code **)*puVar8)();
      }
    }
    if (uVar5 == 2) {
      local_50 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      puStack_48 = (uint *)0x40fe6f7;
      iVar4 = FUN_0273ea30(&local_50);
      local_58 = 0 < iVar4;
    }
    else {
      local_58 = false;
    }
    break;
  case 1:
    local_60 = '\x01';
    local_5c = 0;
    local_50 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    puStack_48 = (uint *)0x407bea7;
    local_64 = local_54;
    iVar4 = FUN_0273ea30(&local_50);
    local_58 = 0 < iVar4;
    break;
  case 2:
    lVar7 = *(long *)PTR_DAT_04bb46b0;
    local_64 = local_54;
    if (lVar7 == 0) {
LAB_02b5b46c:
      local_60 = '\0';
    }
    else {
      puVar8 = *(undefined8 **)(lVar7 + 0x10);
      if ((*(byte *)(lVar7 + 0x453) & 1) != 0) {
        if (puVar8 != (undefined8 *)0x0) {
          if ((long *)puVar8[0x26] != (long *)0x0) {
            lVar7 = (**(code **)(*(long *)puVar8[0x26] + 0x38))();
            if (lVar7 != 0) goto LAB_02b5b250;
          }
        }
        goto LAB_02b5b46c;
      }
      lVar7 = (**(code **)(*(long *)*puVar8 + 0x38))();
      if (lVar7 == 0) goto LAB_02b5b46c;
      lVar7 = lVar7 + 0x70;
LAB_02b5b250:
      if ((*(long **)(lVar7 + 0x1bf1b8) == (long *)0x0) ||
         (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x1bf1b8), puVar8 == (undefined8 *)0x0)) {
        uVar5 = 1;
      }
      else {
        uVar5 = (**(code **)*puVar8)();
        uVar5 = uVar5 ^ 1;
      }
      uVar6 = *(uint *)(*(long *)(lVar7 + 0x1bf1a0) + *(long *)(lVar7 + 0x1bf198));
      if (5 < uVar6) {
        uVar6 = 0;
      }
      if ((((uVar5 & 1) == 0) && (*(long *)(lVar7 + 0x1bf1b8) != 0)) &&
         (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x1bf1b8) + 8), puVar8 != (undefined8 *)0x0))
      {
        (**(code **)*puVar8)();
      }
      local_50 = (undefined **)CONCAT44(local_50._4_4_,uVar6);
      if (uVar6 == 0) goto LAB_02b5b46c;
      local_60 = (char)uVar6 + -1;
    }
    local_5c = 0;
    bVar3 = FUN_02b5a970();
    goto LAB_02b5b4d8;
  default:
    local_64 = local_64 & 0xffff0000;
    puStack_48 = &local_54;
    local_50 = &PTR_LAB_04aa4ab0;
    local_40 = &local_64;
    puStack_38 = local_14;
    local_14[0] = local_14[0] & 0xff00;
    FUN_02ad1b90(&local_50);
    local_18[0] = (char)local_14[0];
    goto LAB_02b5b584;
  case 5:
    lVar7 = *(long *)PTR_DAT_04bb46b0;
    local_64 = local_54;
    if (lVar7 == 0) {
LAB_02b5b4c8:
      local_60 = '\0';
    }
    else {
      puVar8 = *(undefined8 **)(lVar7 + 0x10);
      if ((*(byte *)(lVar7 + 0x453) & 1) != 0) {
        if (puVar8 != (undefined8 *)0x0) {
          if ((long *)puVar8[0x26] != (long *)0x0) {
            lVar7 = (**(code **)(*(long *)puVar8[0x26] + 0x38))();
            if (lVar7 != 0) goto LAB_02b5b298;
          }
        }
        goto LAB_02b5b4c8;
      }
      lVar7 = (**(code **)(*(long *)*puVar8 + 0x38))();
      if (lVar7 == 0) goto LAB_02b5b4c8;
      lVar7 = lVar7 + 0x70;
LAB_02b5b298:
      if ((*(long **)(lVar7 + 0x1a0da0) == (long *)0x0) ||
         (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x1a0da0), puVar8 == (undefined8 *)0x0)) {
        uVar5 = 1;
      }
      else {
        uVar5 = (**(code **)*puVar8)();
        uVar5 = uVar5 ^ 1;
      }
      uVar6 = *(uint *)(*(long *)(lVar7 + 0x1a0d88) + *(long *)(lVar7 + 0x1a0d80));
      if (2 < uVar6) {
        uVar6 = 0;
      }
      if ((((uVar5 & 1) == 0) && (*(long *)(lVar7 + 0x1a0da0) != 0)) &&
         (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x1a0da0) + 8), puVar8 != (undefined8 *)0x0))
      {
        (**(code **)*puVar8)();
      }
      local_50 = (undefined **)CONCAT44(local_50._4_4_,uVar6);
      if (uVar6 == 0) goto LAB_02b5b4c8;
      local_60 = (char)uVar6 + -1;
    }
    local_5c = 0;
    bVar3 = FUN_02b5acc0();
    goto LAB_02b5b4d8;
  case 6:
    local_64 = 0x19;
    lVar7 = *(long *)PTR_DAT_04bb46b0;
    if (lVar7 == 0) {
LAB_02b5b540:
      local_60 = '\0';
    }
    else {
      puVar8 = *(undefined8 **)(lVar7 + 0x10);
      if ((*(byte *)(lVar7 + 0x453) & 1) != 0) {
        if (((puVar8 != (undefined8 *)0x0) && ((long *)puVar8[0x26] != (long *)0x0)) &&
           (lVar7 = (**(code **)(*(long *)puVar8[0x26] + 0x38))(), lVar7 != 0)) goto LAB_02b5b2e0;
        goto LAB_02b5b540;
      }
      lVar7 = (**(code **)(*(long *)*puVar8 + 0x38))();
      if (lVar7 == 0) goto LAB_02b5b540;
      lVar7 = lVar7 + 0x70;
LAB_02b5b2e0:
      if ((*(long **)(lVar7 + 0x1c28d8) == (long *)0x0) ||
         (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x1c28d8), puVar8 == (undefined8 *)0x0)) {
        uVar5 = 1;
      }
      else {
        uVar5 = (**(code **)*puVar8)();
        uVar5 = uVar5 ^ 1;
      }
      uVar6 = *(uint *)(*(long *)(lVar7 + 0x1c28c0) + *(long *)(lVar7 + 0x1c28b8));
      if ((((uVar5 & 1) == 0) && (*(long *)(lVar7 + 0x1c28d8) != 0)) &&
         (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x1c28d8) + 8), puVar8 != (undefined8 *)0x0))
      {
        (**(code **)*puVar8)();
      }
      if ((3 < uVar6) || (uVar6 == 0)) goto LAB_02b5b540;
      local_60 = (char)uVar6 + -1;
    }
    local_5c = 0;
    local_58 = false;
    break;
  case 0xf:
    local_60 = '\0';
    local_64 = 0x25;
    local_5c = 0;
    local_50 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    puStack_48 = (uint *)0x40c9df0;
    bVar3 = FUN_0273f0a0(&local_50);
LAB_02b5b4d8:
    local_58 = (bool)(bVar3 & 1);
  }
  local_14[0] = 0;
  local_18[0] = '\0';
  puStack_48 = &local_64;
  local_50 = &PTR_LAB_04aa4ad8;
  local_40 = (uint *)local_14;
  puStack_38 = (ushort *)local_18;
  FUN_02ad1b90(&local_50);
  local_64._0_2_ = local_14[0];
LAB_02b5b584:
  uVar1 = 0;
  if (local_18[0] != '\0') {
    uVar1 = (ushort)local_64;
  }
  return uVar1;
}

