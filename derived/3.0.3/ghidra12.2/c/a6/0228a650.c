
undefined4 FUN_0228a650(long param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined8 local_124;
  ulong local_11c;
  undefined *local_110;
  undefined1 *puStack_108;
  undefined4 local_100;
  undefined1 local_fc [127];
  undefined1 local_7d;
  undefined4 local_78;
  undefined2 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  lVar6 = *(long *)PTR_DAT_04bb46b0;
  if (lVar6 != 0) {
    puVar7 = *(undefined8 **)(lVar6 + 0x10);
    if ((*(byte *)(lVar6 + 0x453) & 1) == 0) {
      lVar4 = (**(code **)(*(long *)*puVar7 + 0x38))();
      lVar6 = 0;
      if (lVar4 != 0) {
        lVar6 = lVar4 + 0x70;
      }
      goto LAB_0228a6d0;
    }
    if (puVar7 != (undefined8 *)0x0) {
      lVar6 = 0;
      if ((long *)puVar7[0x26] != (long *)0x0) {
        lVar6 = (**(code **)(*(long *)puVar7[0x26] + 0x38))();
      }
      goto LAB_0228a6d0;
    }
  }
  lVar6 = 0;
LAB_0228a6d0:
  lVar4 = lVar6 + 0x1bfdd0 + (ulong)param_2 * 0x9a0;
  if (3 < param_2) {
    lVar4 = lVar6 + 0x1bfdd0;
  }
  if ((*(long *)(lVar4 + 0x28) == 0) ||
     (puVar7 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 0x10), puVar7 == (undefined8 *)0x0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = (**(code **)*puVar7)();
    uVar2 = uVar2 ^ 1;
  }
  local_130 = 0;
  local_140 = 0x4f00000000;
  local_138 = 0;
  local_12c = 0x3f800000;
  puStack_108 = local_fc;
  local_100 = 0x80;
  local_7d = 0;
  local_fc[0] = 0;
  local_110 = PTR_DAT_04bb2d88 + 0x10;
  local_70 = 0;
  local_74 = 0;
  local_11c = 0;
  local_124 = 0;
  local_78 = 7;
  lVar6 = *(long *)(lVar4 + 0x28);
  if ((lVar6 != 0) && (plVar5 = *(long **)(lVar6 + 0x20), plVar5 != (long *)0x0)) {
    local_68 = *(undefined8 *)(lVar4 + 8);
    uStack_60 = *(undefined8 *)(lVar4 + 0x10);
    local_58 = 0x6c;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_68);
    lVar6 = *(long *)(lVar4 + 0x28);
  }
  puVar7 = (undefined8 *)(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8));
  local_138 = *puVar7;
  local_130 = *(undefined4 *)(puVar7 + 1);
  local_124 = CONCAT44(local_124._4_4_,param_2);
  if ((lVar6 != 0) && (plVar5 = *(long **)(lVar6 + 0x20), plVar5 != (long *)0x0)) {
    local_68 = *(undefined8 *)(lVar4 + 8);
    uStack_60 = *(undefined8 *)(lVar4 + 0x10);
    local_58 = 0x6c;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_68);
    lVar6 = *(long *)(lVar4 + 0x28);
  }
  local_124 = CONCAT44(*(undefined4 *)(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8) + 0xc),
                       (undefined4)local_124);
  local_11c = local_11c & 0xffffffff00000000;
  if ((lVar6 != 0) && (plVar5 = *(long **)(lVar6 + 0x20), plVar5 != (long *)0x0)) {
    local_68 = *(undefined8 *)(lVar4 + 8);
    uStack_60 = *(undefined8 *)(lVar4 + 0x10);
    local_58 = 0x6c;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_68);
  }
  local_12c = CONCAT44(local_12c._4_4_,
                       *(undefined4 *)(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8) + 0x10));
  uVar3 = FUN_007402e0(DAT_04c93e08,&local_140,*(undefined4 *)(param_1 + 0x230),1);
  puVar1 = (undefined4 *)(param_1 + 0x364) + (ulong)param_2 * 6;
  if (3 < param_2) {
    puVar1 = (undefined4 *)(param_1 + 0x364);
  }
  *puVar1 = uVar3;
  if ((((uVar2 & 1) == 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return uVar3;
}

