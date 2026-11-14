
void FUN_01c8ed1c(long param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *local_60;
  char *pcStack_58;
  
  puVar3 = PTR_DAT_04bb3350;
  if (param_2 == (long *)0x0) {
    lVar8 = 1;
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)(lVar4 + 0xa8);
    *(long **)(lVar4 + 0xa8) = param_2;
  }
  FUN_03ebac90(param_1,3,0,param_2,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "State::cWait";
  local_60 = puVar1;
  FUN_03ebaf40(param_1,0,&local_60);
  puVar7 = *(undefined8 **)(param_1 + 0x30);
  puVar7[2] = &LAB_01c8ef60;
  puVar7[3] = 0;
  *puVar7 = &PTR_LAB_04a447d0;
  puVar7[1] = param_1;
  puVar7[4] = &LAB_01c8ef68;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  pcStack_58 = "State::cInvalid";
  local_60 = puVar1;
  FUN_03ebaf40(param_1,1,&local_60);
  puVar7 = (undefined8 *)(*(long *)(param_1 + 0x30) + (ulong)(1 < *(uint *)(param_1 + 0x28)) * 0x40)
  ;
  puVar7[2] = &LAB_01c8efdc;
  puVar7[3] = 0;
  *puVar7 = &PTR_LAB_04a447d0;
  puVar7[1] = param_1;
  puVar7[4] = &LAB_01c8efe0;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  pcStack_58 = "State::cValid";
  local_60 = puVar1;
  FUN_03ebaf40(param_1,2,&local_60);
  puVar7 = (undefined8 *)(*(long *)(param_1 + 0x30) + (ulong)(2 < *(uint *)(param_1 + 0x28)) * 0x80)
  ;
  puVar7[2] = &LAB_01c8f04c;
  puVar7[3] = 0;
  *puVar7 = &PTR_LAB_04a447d0;
  puVar7[1] = param_1;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[4] = &LAB_01c8f050;
  puVar7[5] = 0;
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
    puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x30) + (long)(int)uVar2 * 0x40);
    if (puVar7 != (undefined8 *)0x0) {
      (*(code *)*puVar7)();
    }
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    pvVar6 = malloc(0x260);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
      puVar7 = (undefined8 *)(lVar4 + 8);
      if (lVar5 != 0) {
        puVar7 = (undefined8 *)(lVar5 + 0xa8);
      }
      param_2 = (long *)*puVar7;
      if (param_2 == (long *)0x0) goto LAB_01c8ef1c;
    }
    pvVar6 = (void *)(**(code **)(*param_2 + 0x30))(param_2,0x260,8);
  }
  if (pvVar6 != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(void **)(param_1 + 0x88) = pvVar6;
    *(undefined8 *)(param_1 + 0x90) = 4;
  }
LAB_01c8ef1c:
  if (lVar8 != 1) {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    *(long *)(lVar4 + 0xa8) = lVar8;
  }
  return;
}

