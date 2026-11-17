
void FUN_02e3f414(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *local_40;
  char *pcStack_38;
  
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "State::cRequest";
  local_40 = puVar1;
  FUN_03ebaf40(param_1 + 8,8,&local_40);
  puVar2 = (undefined8 *)
           (*(long *)(param_1 + 0x38) + (ulong)(8 < *(uint *)(param_1 + 0x30)) * 0x200);
  *puVar2 = &PTR_LAB_04ad4d78;
  puVar2[1] = param_1;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = FUN_02e3f4ec;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  pcStack_38 = "State::cUserDetail";
  local_40 = puVar1;
  FUN_03ebaf40(param_1 + 8,9,&local_40);
  lVar3 = 0x240;
  if (*(uint *)(param_1 + 0x30) < 10) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar3);
  *puVar2 = &PTR_LAB_04ad4d78;
  puVar2[1] = param_1;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = FUN_02e3f6f8;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  return;
}

