
void FUN_018980d0(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  char *__dest;
  undefined *local_40;
  char *pcStack_38;
  
  FUN_01889870();
  __dest = (char *)param_1[0xc];
  *param_1 = &PTR_LAB_049cf5f0;
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (__dest != "InsectActionMuseumWaitAtLargeTree") {
    iVar1 = 0x21;
    if (*(int *)(param_1 + 0xd) < 0x22) {
      iVar1 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(__dest,"InsectActionMuseumWaitAtLargeTree",(long)iVar1);
    __dest[iVar1] = '\0';
  }
  FUN_03ebac90(param_1 + 0x4f,1,0,0,0);
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "State::cWait";
  FUN_03ebaf40(param_1 + 0x4f,0,&local_40);
  puVar2 = (undefined8 *)param_1[0x55];
  *puVar2 = &PTR_LAB_049cf7e8;
  puVar2[1] = param_1;
  puVar2[2] = &LAB_018981d0;
  puVar2[3] = 0;
  puVar2[4] = &LAB_018981dc;
  puVar2[5] = 0;
  puVar2[6] = &LAB_018981e0;
  puVar2[7] = 0;
  return;
}

