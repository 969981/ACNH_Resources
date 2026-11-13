
void FUN_011aa4f0(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  char *__dest;
  
  FUN_00705c50();
  __dest = (char *)param_1[0xc];
  param_1[0x4f] = 0;
  *(undefined2 *)((long)param_1 + 0x284) = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  param_1[0x51] = &PTR_FUN_0498d548;
  param_1[0x55] = 0;
  param_1[0x52] = &DAT_048f9750;
  param_1[0x54] = &DAT_048f9750;
  if (__dest != "EventPlazaObjModule") {
    iVar2 = 0x13;
    if (*(int *)(param_1 + 0xd) < 0x14) {
      iVar2 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(__dest,"EventPlazaObjModule",(long)iVar2);
    __dest[iVar2] = '\0';
  }
  *(undefined2 *)(param_1 + 0x56) = 0;
  *(undefined4 *)((long)param_1 + 0x2b2) = 0x101;
  *param_1 = &PTR_LAB_04984fe8;
  *(undefined1 *)((long)param_1 + 0x2b6) = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 7;
  param_1[0x5a] = 0xffffffff;
  param_1[0x5b] = 0xffffffff;
  param_1[0x5c] = 0xffffffff;
  *(undefined2 *)(param_1 + 0x5d) = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[0x61] = 0;
  puVar1 = PTR_DAT_04bbbac8 + 0x10;
  *(undefined4 *)(param_1 + 0x62) = 0xffffffff;
  param_1[0x59] = puVar1;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  param_1[0x69] = 0;
  FUN_016100c4(param_1 + 99,0);
  return;
}

