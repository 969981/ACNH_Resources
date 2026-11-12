
void FUN_009370b8(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  char *__dest;
  
  FUN_00705c50();
  *(undefined4 *)(param_1 + 0x4f) = 0;
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfffffff0 | 4;
  *param_1 = &PTR_LAB_04928c18;
  FUN_0093c1e0(param_1 + 0x50);
  param_1[0x9f6] = 0;
  puVar2 = PTR_DAT_04bb2cc0;
  param_1[0x9f7] = 0;
  param_1[0x9f8] = 0;
  param_1[0x9f9] = 0;
  param_1[0x9f5] = puVar2 + 0x10;
  *(undefined4 *)(param_1 + 0x9fa) = 0;
  param_1[0x9fc] = 0;
  param_1[0x9fd] = 0;
  param_1[0xa03] = 0;
  *(undefined8 *)((long)param_1 + 0x4ff4) = 0;
  *(undefined8 *)((long)param_1 + 0x4ffc) = 0;
  param_1[0x9fb] = &PTR_LAB_048fc248;
  *(undefined4 *)(param_1 + 0x9fe) = 7;
  *(undefined8 *)((long)param_1 + 0x5001) = 0;
  *(undefined4 *)(param_1 + 0xa04) = 0;
  *(undefined1 *)((long)param_1 + 0x5024) = 0;
  param_1[0xa02] = &DAT_048f9750;
  param_1[0xa05] = 0xc3fa0000c3fa0000;
  *(undefined4 *)(param_1 + 0xa0e) = param_2;
  __dest = (char *)param_1[0xc];
  param_1[0xa10] = 0;
  param_1[0xa0f] = 0;
  param_1[0xa06] = &PTR_FUN_048fc6e0;
  param_1[0xa0a] = &PTR_FUN_048fc6e0;
  *(undefined2 *)((long)param_1 + 0x5074) = 0x101;
  *(undefined1 *)((long)param_1 + 0x5076) = 1;
  *(undefined4 *)((long)param_1 + 0x508f) = 0;
  param_1[0xa11] = 0;
  if (__dest != "ColActorComponentBgCheck") {
    iVar1 = 0x18;
    if (*(int *)(param_1 + 0xd) < 0x19) {
      iVar1 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(__dest,"ColActorComponentBgCheck",(long)iVar1);
    __dest[iVar1] = '\0';
  }
  return;
}

