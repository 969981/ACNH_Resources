
long * FUN_02bb289c(long param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined *local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined1 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  long *local_80;
  long *plStack_78;
  undefined *local_70;
  undefined8 uStack_68;
  undefined *local_60;
  undefined8 uStack_58;
  
  puVar2 = PTR_DAT_04bb2020;
  plVar3 = *(long **)(param_3 + 0x58);
  local_80 = (long *)0x0;
  local_c0 = PTR_DAT_04bb2020 + 0x10;
  local_b0 = local_c0;
  if (plVar3 == (long *)0x0) {
    local_a0 = (long *)0x0;
    local_b8 = *(undefined8 *)(param_1 + 0x48);
    local_a8 = *(undefined8 *)(param_4 + 8);
  }
  else {
    (**(code **)(*plVar3 + 0x28))(plVar3,&local_80);
    local_b8 = *(undefined8 *)(param_1 + 0x48);
    local_a8 = *(undefined8 *)(param_4 + 8);
    local_a0 = local_80;
    if (local_80 != (long *)0x0) {
      local_a0 = (long *)0x0;
      if (local_80[0x17] != 0) {
        local_a0 = local_80 + 0x17;
      }
    }
  }
  local_94 = *(undefined4 *)(param_1 + 0x158);
  local_98 = 1;
  local_90 = *(undefined8 *)(param_1 + 0x160);
  uStack_88 = *(undefined8 *)(param_1 + 0x168);
  plVar3 = (long *)FUN_02bb2b08(param_2,param_4,&local_c0);
  FUN_03c684c0(plVar3,param_1 + 0x40,param_3 + 0x18,0);
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (puVar4 != (undefined8 *)0x0) {
    plStack_78 = plVar3 + 8;
    uStack_68 = *(undefined8 *)(param_1 + 0x48);
    local_70 = puVar2 + 0x10;
    uStack_58 = *(undefined8 *)(param_4 + 8);
    local_80 = plVar3;
    local_60 = local_70;
    (**(code **)*puVar4)(puVar4,&local_80);
  }
  plVar5 = (long *)plVar3[3];
  FUN_030bf100(plVar5,plVar3,plVar3[7]);
  FUN_03c5d720(plVar3[3]);
  plVar3[3] = 0;
  plVar1 = (long *)((long)*(int *)(param_2 + 0x8c) + (long)plVar3);
  if (*plVar1 != 0) {
    *(long *)(*plVar1 + 8) = plVar1[1];
  }
  if ((long *)plVar1[1] != (long *)0x0) {
    *(long *)plVar1[1] = *plVar1;
  }
  *plVar1 = 0;
  plVar1[1] = 0;
  *(int *)(param_2 + 0x88) = *(int *)(param_2 + 0x88) + -1;
  (**(code **)(*plVar3 + 8))(plVar3);
  FUN_03d677b0(param_1,plVar5);
  (**(code **)(*plVar5 + 0xd0))(plVar5,param_1);
  FUN_0385e770(param_1,plVar5);
  return plVar5;
}

