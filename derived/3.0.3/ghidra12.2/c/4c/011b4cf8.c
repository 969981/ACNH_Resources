
void FUN_011b4cf8(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  byte bVar4;
  char *__dest;
  
  FUN_00705c50();
  __dest = (char *)param_1[0xc];
  param_1[0x4f] = 0;
  *(undefined2 *)((long)param_1 + 0x284) = 0;
  puVar1 = PTR_DAT_04bbc1a0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  param_1[0x51] = puVar1 + 0x10;
  puVar1 = PTR_DAT_04bb2010;
  param_1[0x55] = 0;
  param_1[0x52] = puVar1 + 0x10;
  param_1[0x54] = puVar1 + 0x10;
  if (__dest != "EventPlazaObjModule") {
    iVar2 = 0x13;
    if (*(int *)(param_1 + 0xd) < 0x14) {
      iVar2 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(__dest,"EventPlazaObjModule",(long)iVar2);
    __dest[iVar2] = '\0';
  }
  puVar1 = PTR_DAT_04bb32e0;
  param_1[0x58] = 0xffffffff;
  param_1[0x59] = 0xffffffff;
  puVar3 = PTR_DAT_04bd4738;
  param_1[0x5a] = 0xffffffff;
  *(undefined2 *)(param_1 + 0x5b) = 0;
  bVar4 = *puVar1;
  *param_1 = &PTR_LAB_04985d50;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[0x57] = puVar3 + 0x10;
  param_1[0x5f] = 0;
  if (7 < bVar4) {
    bVar4 = 0xff;
  }
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  puVar1 = PTR_DAT_04bbb868 + 0x10;
  *(byte *)(param_1 + 0x56) = bVar4;
  *(undefined4 *)(param_1 + 0x62) = 0;
  param_1[0x61] = puVar1;
  puVar1 = PTR_DAT_04bbb848;
  *(undefined1 *)((long)param_1 + 0x373) = 0;
  *(undefined1 *)((long)param_1 + 0x334) = 0;
  param_1[99] = puVar1 + 0x10;
  param_1[0x65] = (long)param_1 + 0x334;
  *(undefined4 *)(param_1 + 0x66) = 0x40;
  puVar1 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(param_1 + 0x71) = 0x40;
  *(undefined1 *)((long)param_1 + 0x38c) = 0;
  *(undefined1 *)((long)param_1 + 0x3cb) = 0;
  param_1[0x7a] = 0;
  param_1[0x70] = (undefined1 *)((long)param_1 + 0x38c);
  *(undefined2 *)(param_1 + 0x7b) = 0xff;
  param_1[0x7c] = 0;
  param_1[100] = puVar1 + 0x10;
  param_1[0x6f] = puVar1 + 0x10;
  return;
}

