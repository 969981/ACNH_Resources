
void FUN_02e3bec4(long param_1)

{
  undefined8 *puVar1;
  undefined *local_30;
  char *pcStack_28;
  
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "State::cSuccess";
  FUN_03ebaf40(param_1 + 8,8,&local_30);
  puVar1 = (undefined8 *)
           (*(long *)(param_1 + 0x38) + (ulong)(8 < *(uint *)(param_1 + 0x30)) * 0x200);
  *puVar1 = &PTR_LAB_04ad4a88;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = &LAB_02e3bf44;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}

