
long * FUN_0316d73c(long param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
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
  plVar4 = *(long **)(param_3 + 0x58);
  local_80 = (long *)0x0;
  local_c0 = PTR_DAT_04bb2020 + 0x10;
  local_b0 = local_c0;
  if (plVar4 == (long *)0x0) {
    local_a0 = (long *)0x0;
    local_b8 = *(undefined8 *)(param_1 + 0x48);
    local_a8 = *(undefined8 *)(param_4 + 8);
  }
  else {
    (**(code **)(*plVar4 + 0x28))(plVar4,&local_80);
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
  plVar4 = (long *)FUN_02c04e2c(param_2,param_4,&local_c0);
  FUN_03c684c0(plVar4,param_1 + 0x40,param_3 + 0x18,0);
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  if (puVar5 != (undefined8 *)0x0) {
    plStack_78 = plVar4 + 8;
    uStack_68 = *(undefined8 *)(param_1 + 0x48);
    local_70 = puVar2 + 0x10;
    uStack_58 = *(undefined8 *)(param_4 + 8);
    local_80 = plVar4;
    local_60 = local_70;
    (**(code **)*puVar5)(puVar5,&local_80);
  }
  lVar3 = DAT_05ae7600;
  plVar7 = (long *)plVar4[3];
  lVar8 = plVar4[7];
  if (plVar7[0x4a] == 0) {
    if (DAT_05ae7600 == 0) {
      puVar5 = malloc(0x20);
    }
    else {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar5 = (undefined8 *)(lVar3 + 8);
      if (lVar6 != 0) {
        puVar5 = (undefined8 *)(lVar6 + 0xa8);
      }
      puVar5 = (undefined8 *)(**(code **)(*(long *)*puVar5 + 0x30))((long *)*puVar5,0x20,8);
    }
    puVar5[2] = puVar5 + 1;
    puVar5[3] = 0x20800000000;
    *puVar5 = &PTR_LAB_04b2b230;
    puVar5[1] = puVar5 + 1;
    plVar7[0x4a] = (long)puVar5;
  }
  FUN_030bc030(plVar7,plVar4,lVar8);
  FUN_03c5d720(plVar4[3]);
  plVar4[3] = 0;
  plVar1 = (long *)((long)*(int *)(param_2 + 0x8c) + (long)plVar4);
  if (*plVar1 != 0) {
    *(long *)(*plVar1 + 8) = plVar1[1];
  }
  if ((long *)plVar1[1] != (long *)0x0) {
    *(long *)plVar1[1] = *plVar1;
  }
  *plVar1 = 0;
  plVar1[1] = 0;
  *(int *)(param_2 + 0x88) = *(int *)(param_2 + 0x88) + -1;
  (**(code **)(*plVar4 + 8))(plVar4);
  FUN_03d677b0(param_1,plVar7);
  (**(code **)(*plVar7 + 0xd0))(plVar7,param_1);
  FUN_0385e770(param_1,plVar7);
  return plVar7;
}

