
void FUN_01b3310c(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  long local_70;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(param_2);
  if (*(long *)puVar2 == 0) {
    return;
  }
  lVar10 = *(long *)(lVar10 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if (*(uint *)(lVar10 + 0x1d8) <= uVar3) {
    return;
  }
  if (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) == 0) {
    return;
  }
  lVar10 = *(long *)(param_1 + 0x28);
  if (lVar10 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      lVar10 = *(long *)(param_1 + 0x28);
      uVar4 = uVar4 & 0xffffffff;
      if (lVar10 == 0) goto LAB_01b331e0;
    }
    plVar5 = *(long **)(lVar10 + 0x20);
    if (plVar5 != (long *)0x0) {
      local_70 = *(long *)(param_1 + 8);
      local_68 = *(long *)(param_1 + 0x10);
      local_60 = 0x13230;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_70);
    }
  }
LAB_01b331e0:
  uVar3 = FUN_026a6580(*(long *)(param_1 + 0x10) + *(long *)(param_1 + 8),param_2,0);
  if (-1 < (int)uVar3) {
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (plVar5 = *(long **)(*(long *)(param_1 + 0x28) + 0x20), plVar5 != (long *)0x0)) {
      local_70 = *(long *)(param_1 + 8);
      local_68 = *(long *)(param_1 + 0x10);
      local_60 = 0x13230;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_70);
    }
    uVar1 = uVar3 - 0x18;
    if (uVar3 < 0x18) {
      uVar1 = uVar3;
    }
    lVar10 = *(long *)(param_1 + 0x10) + *(long *)(param_1 + 8);
    lVar8 = lVar10 + 0x10d6c;
    if (uVar3 < 0x18) {
      lVar8 = lVar10 + 0x1094c;
    }
    uVar9 = 0x20;
    if (uVar3 < 0x18) {
      uVar9 = 0x18;
    }
    if (uVar1 < uVar9) {
      plVar5 = (long *)(lVar8 + (ulong)uVar1 * 0x2c);
      if ((*(long *)(param_1 + 0x28) != 0) &&
         (plVar7 = *(long **)(*(long *)(param_1 + 0x28) + 0x20), plVar7 != (long *)0x0)) {
        local_60 = 0x13230;
        local_70 = *(long *)(param_1 + 8);
        local_68 = *(long *)(param_1 + 0x10);
        (**(code **)(*plVar7 + 0x20))(plVar7,&local_70);
        lVar10 = *(long *)(param_1 + 0x10) + *(long *)(param_1 + 8);
      }
      FUN_026b3b80(lVar10,uVar3,1);
      if ((*(long *)(param_1 + 0x28) != 0) &&
         (plVar7 = *(long **)(*(long *)(param_1 + 0x28) + 0x20), plVar7 != (long *)0x0)) {
        local_70 = *(long *)(param_1 + 8);
        local_68 = *(long *)(param_1 + 0x10);
        local_60 = 0x13230;
        (**(code **)(*plVar7 + 0x20))(plVar7,&local_70);
      }
      lVar10 = *(long *)(param_1 + 8);
      lVar8 = *(long *)(param_1 + 0x10);
      goto LAB_01b3335c;
    }
  }
  local_70 = 0xfffe;
  FUN_0277d4ac(&local_70);
  local_48 = 0;
  local_78 = 0;
  local_90 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  local_80 = 0;
  FUN_027d2090(&local_70,param_2,&local_90,7,0,0);
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (plVar5 = *(long **)(*(long *)(param_1 + 0x28) + 0x20), plVar5 != (long *)0x0)) {
    local_90 = *(undefined8 *)(param_1 + 8);
    local_88 = *(undefined8 *)(param_1 + 0x10);
    local_80 = 0x13230;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_90);
  }
  lVar10 = *(long *)(param_1 + 8);
  lVar8 = *(long *)(param_1 + 0x10);
  plVar5 = &local_70;
LAB_01b3335c:
  FUN_026b7690(lVar8 + lVar10,plVar5,param_3,1,1);
  if ((((uVar4 & 1) != 0) && (*(long *)(param_1 + 0x28) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x28) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}

