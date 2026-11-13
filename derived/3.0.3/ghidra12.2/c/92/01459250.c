
void FUN_01459250(long param_1)

{
  undefined8 *puVar1;
  undefined *local_30;
  char *pcStack_28;
  
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "State::cOnKeep";
  FUN_03ebaf40(param_1 + 0x278,2,&local_30);
  puVar1 = (undefined8 *)
           (*(long *)(param_1 + 0x2a8) + (ulong)(2 < *(uint *)(param_1 + 0x2a0)) * 0x80);
  *puVar1 = &PTR_LAB_049a1f88;
  puVar1[1] = param_1;
  puVar1[2] = 0x158;
  puVar1[3] = 1;
  puVar1[4] = 0x160;
  puVar1[5] = 1;
  puVar1[6] = 0x168;
  puVar1[7] = 1;
  return;
}

