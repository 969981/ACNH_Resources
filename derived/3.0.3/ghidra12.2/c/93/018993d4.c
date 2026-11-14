
void FUN_018993d4(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  char *__dest;
  undefined *local_40;
  char *pcStack_38;
  
  FUN_01889870();
  param_1[0x86] = 0;
  param_1[0x7f] = 0;
  *(undefined8 *)((long)param_1 + 0x435) = 0;
  *param_1 = &PTR_LAB_049cfa30;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  puVar1 = PTR_DAT_04bcb470 + 0x10;
  param_1[0x94] = param_2;
  __dest = (char *)param_1[0xc];
  param_1[0x89] = 0;
  *(undefined8 *)((long)param_1 + 0x44d) = 0;
  param_1[0x90] = 0;
  param_1[0x85] = puVar1;
  param_1[0x88] = puVar1;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  *(undefined1 *)(param_1 + 0x93) = 0;
  *(undefined2 *)(param_1 + 0x8f) = 0;
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x95) = 0;
  if (__dest != "InsectActionMuseumWorm") {
    iVar3 = 0x16;
    if (*(int *)(param_1 + 0xd) < 0x17) {
      iVar3 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(__dest,"InsectActionMuseumWorm",(long)iVar3);
    __dest[iVar3] = '\0';
  }
  puVar2 = param_1 + 0x4f;
  FUN_03ebac90(puVar2,3,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "State::cWait";
  local_40 = puVar1;
  FUN_03ebaf40(puVar2,0,&local_40);
  puVar4 = (undefined8 *)param_1[0x55];
  puVar4[2] = FUN_018995f0;
  puVar4[3] = 0;
  puVar4[4] = FUN_01899768;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_049cfc28;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_018997cc;
  puVar4[7] = 0;
  pcStack_38 = "State::cMove";
  local_40 = puVar1;
  FUN_03ebaf40(puVar2,1,&local_40);
  puVar4 = (undefined8 *)(param_1[0x55] + (ulong)(1 < *(uint *)(param_1 + 0x54)) * 0x40);
  puVar4[4] = &LAB_0189995c;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_049cfc28;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_018997d0;
  puVar4[3] = 0;
  puVar4[6] = &LAB_01899d34;
  puVar4[7] = 0;
  pcStack_38 = "State::cGyrate";
  local_40 = puVar1;
  FUN_03ebaf40(puVar2,2,&local_40);
  puVar2 = (undefined8 *)(param_1[0x55] + (ulong)(2 < *(uint *)(param_1 + 0x54)) * 0x80);
  *puVar2 = &PTR_LAB_049cfc28;
  puVar2[1] = param_1;
  puVar2[2] = &LAB_01899d38;
  puVar2[3] = 0;
  puVar2[6] = &LAB_0189a0e4;
  puVar2[7] = 0;
  puVar2[4] = &LAB_01899ef8;
  puVar2[5] = 0;
  return;
}

