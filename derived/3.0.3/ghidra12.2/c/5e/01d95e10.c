
void FUN_01d95e10(byte *param_1,undefined8 param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined **local_a0;
  undefined *local_98;
  undefined8 uStack_90;
  int local_88;
  undefined **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  int local_5c;
  undefined4 local_58;
  byte local_4c [4];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_18;
  
  local_4c[0] = *param_1;
  if (7 < local_4c[0]) {
    local_4c[0] = 0xff;
  }
  local_18 = param_2;
  lVar6 = FUN_02583354(DAT_055021a0,local_4c,1);
  if (lVar6 == 0) {
    return;
  }
  lVar10 = lVar6 + 0x194b0;
  if (*(long *)(lVar6 + 0x194b8) == 0) {
    lVar10 = *(long *)(DAT_05574040 + 0x20);
  }
  plVar2 = (long *)(lVar10 + 0x2aeb0);
  lVar6 = *(long *)(lVar10 + 0x2aed0);
  if (lVar6 == 0) {
    uVar7 = 0;
  }
  else {
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar7 = 0;
      plVar8 = *(long **)(lVar6 + 0x20);
    }
    else {
      uVar7 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      uVar7 = uVar7 & 0xffffffff;
      if (*(long *)(lVar10 + 0x2aed0) == 0) goto LAB_01d95ef0;
      plVar8 = *(long **)(*(long *)(lVar10 + 0x2aed0) + 0x20);
    }
    if (plVar8 != (long *)0x0) {
      local_80 = (undefined **)*plVar2;
      local_78 = *(undefined8 *)(lVar10 + 0x2aeb8);
      uStack_70 = 800;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_80);
    }
  }
LAB_01d95ef0:
  FUN_026d67c0(*(long *)(lVar10 + 0x2aeb8) + *plVar2,&local_18);
  local_48 = CONCAT44(local_48._4_4_,4);
  local_98 = PTR_s_dream_land_add_black_list_04a85670;
  local_a0 = &PTR_LAB_048f9770;
  FUN_025ffac8(&local_80,&local_a0,param_1);
  local_a0 = (undefined **)((ulong)local_a0 & 0xffffffff00000000);
  local_80 = &PTR_FUN_04a85688;
  local_58 = (undefined4)local_48;
  local_98 = (undefined *)local_18;
  uStack_90 = 0;
  if ((*(long *)(lVar10 + 0x2aed0) != 0) &&
     (plVar8 = *(long **)(*(long *)(lVar10 + 0x2aed0) + 0x20), plVar8 != (long *)0x0)) {
    local_48 = *plVar2;
    local_40 = *(undefined8 *)(lVar10 + 0x2aeb8);
    uStack_38 = 800;
    (**(code **)(*plVar8 + 0x20))(plVar8,&local_48);
  }
  local_88 = 0;
  uVar11 = 0;
  do {
    uVar3 = uVar11 << 3;
    uVar4 = uVar11 >> 0x1f;
    uVar1 = (int)uVar11 + 1;
    uVar11 = (ulong)uVar1;
    if (*(long *)(*(long *)(lVar10 + 0x2aeb8) + *plVar2 + (-uVar4 & 0xfffffff800000000 | uVar3)) !=
        0) {
      local_88 = local_88 + 1;
    }
  } while (uVar1 != 100);
  FUN_025970dc(&local_80,&local_a0);
  local_80 = &PTR_FUN_04a85688;
  iVar5 = FUN_025974d4(&local_80);
  if (iVar5 != -1) {
    iVar5 = (*(code *)local_80[4])(&local_80);
    local_a0 = (undefined **)CONCAT44(local_a0._4_4_,iVar5);
    if (iVar5 < 0xd) goto LAB_01d96014;
  }
  if (local_5c == 0) {
    local_5c = 1;
  }
LAB_01d96014:
  FUN_02601530(&local_80);
  if ((((uVar7 & 1) != 0) && (*(long *)(lVar10 + 0x2aed0) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar10 + 0x2aed0) + 0x18), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
  return;
}

