
void FUN_02e3c6d8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *local_40;
  char *pcStack_38;
  
  lVar1 = param_1 + 8;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "State::cCheckPOPID";
  local_40 = puVar2;
  FUN_03ebaf40(lVar1,8,&local_40);
  puVar3 = (undefined8 *)
           (*(long *)(param_1 + 0x38) + (ulong)(8 < *(uint *)(param_1 + 0x30)) * 0x200);
  puVar3[2] = &LAB_02e3c80c;
  puVar3[3] = 0;
  *puVar3 = &PTR_LAB_04ad4b50;
  puVar3[1] = param_1;
  puVar3[4] = &LAB_02e3c890;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  pcStack_38 = "State::cUploadProfile";
  local_40 = puVar2;
  FUN_03ebaf40(lVar1,9,&local_40);
  lVar4 = 0x240;
  if (*(uint *)(param_1 + 0x30) < 10) {
    lVar4 = 0;
  }
  puVar3 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar4);
  puVar3[2] = &LAB_02e3c8b0;
  puVar3[3] = 0;
  *puVar3 = &PTR_LAB_04ad4b50;
  puVar3[1] = param_1;
  puVar3[4] = &LAB_02e3c978;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  pcStack_38 = "State::cSuccess";
  local_40 = puVar2;
  FUN_03ebaf40(lVar1,10,&local_40);
  lVar1 = 0x280;
  if (*(uint *)(param_1 + 0x30) < 0xb) {
    lVar1 = 0;
  }
  puVar3 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar1);
  *puVar3 = &PTR_LAB_04ad4b50;
  puVar3[1] = param_1;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = &LAB_02e3c990;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  return;
}

