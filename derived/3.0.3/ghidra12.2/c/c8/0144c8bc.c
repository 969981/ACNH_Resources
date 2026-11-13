
void FUN_0144c8bc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *local_30;
  char *pcStack_28;
  
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "State::cOn";
  FUN_03ebaf40(param_1 + 0x278,0,&local_30);
  puVar2 = PTR_LAB_04bbcbb8;
  puVar1 = PTR_LAB_04bbcbb0;
  puVar3 = *(undefined8 **)(param_1 + 0x2a8);
  *puVar3 = &PTR_LAB_0499ff18;
  puVar3[1] = param_1;
  puVar3[2] = puVar1;
  puVar3[3] = 0;
  puVar1 = PTR_LAB_04bbcbc0;
  puVar3[4] = puVar2;
  puVar3[5] = 0;
  puVar3[6] = puVar1;
  puVar3[7] = 0;
  return;
}

