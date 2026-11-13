
void FUN_0144fe04(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *local_40;
  char *pcStack_38;
  
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "State::cOn";
  local_40 = puVar1;
  FUN_03ebaf40(param_1 + 0x278,0,&local_40);
  puVar2 = PTR_LAB_04bbcbb0;
  puVar5 = *(undefined8 **)(param_1 + 0x2a8);
  *puVar5 = &PTR_LAB_049a0720;
  puVar5[1] = param_1;
  puVar4 = PTR_LAB_04bbcbc0;
  puVar3 = PTR_LAB_04bbcbb8;
  puVar5[2] = puVar2;
  puVar5[3] = 0;
  pcStack_38 = "State::cOff";
  puVar5[4] = puVar3;
  puVar5[5] = 0;
  puVar5[6] = puVar4;
  puVar5[7] = 0;
  local_40 = puVar1;
  FUN_03ebaf40(param_1 + 0x278,1,&local_40);
  puVar2 = PTR_LAB_04bbcbd0;
  puVar1 = PTR_LAB_04bbcbc8;
  puVar5 = (undefined8 *)
           (*(long *)(param_1 + 0x2a8) + (ulong)(1 < *(uint *)(param_1 + 0x2a0)) * 0x40);
  *puVar5 = &PTR_LAB_049a0720;
  puVar5[1] = param_1;
  puVar5[2] = puVar1;
  puVar5[3] = 0;
  puVar1 = PTR_LAB_04bbcbd8;
  puVar5[4] = puVar2;
  puVar5[5] = 0;
  puVar5[6] = puVar1;
  puVar5[7] = 0;
  return;
}

