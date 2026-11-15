
void FUN_01df4778(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined *local_40;
  char *pcStack_38;
  
  FUN_03ebac90(param_1,4,0,param_2,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "State::cIdle";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,0,&local_40);
  puVar6 = *(undefined8 **)(param_1 + 0x30);
  puVar6[2] = &LAB_01df49a8;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5c308;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01df49ac;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_38 = "State::cCheckNSA";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,1,&local_40);
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x30) + (ulong)(1 < *(uint *)(param_1 + 0x28)) * 0x40)
  ;
  puVar6[2] = &LAB_01df49b0;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5c308;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01df4a44;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_38 = "State::cAction";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,2,&local_40);
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x30) + (ulong)(2 < *(uint *)(param_1 + 0x28)) * 0x80)
  ;
  puVar6[2] = &LAB_01df4ac0;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5c308;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01df4c8c;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_38 = "State::cFinalize";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,3,&local_40);
  lVar7 = 0xc0;
  if (*(uint *)(param_1 + 0x28) < 4) {
    lVar7 = 0;
  }
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar7);
  puVar6[2] = &LAB_01df4cfc;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5c308;
  puVar6[1] = param_1;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[4] = &LAB_01df4d90;
  puVar6[5] = 0;
  *(undefined1 *)(param_1 + 0x21) = 1;
  uVar2 = *(uint *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0xc);
  *(uint *)(param_1 + 8) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (uVar2 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x28) <= uVar2) {
      uVar2 = 0;
    }
    puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x30) + (long)(int)uVar2 * 0x40);
    if (puVar6 != (undefined8 *)0x0) {
      (*(code *)*puVar6)();
    }
  }
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    pvVar5 = malloc(0xc90);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar4 = (long *)(lVar7 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    pvVar5 = (void *)0x0;
    if (plVar4 != (long *)0x0) {
      pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0xc90,8);
    }
  }
  *(void **)(param_1 + 0x68) = pvVar5;
  return;
}

