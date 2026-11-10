
void FUN_002eb5f0(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  puVar1 = PTR_DAT_04bcb8b0;
  lVar2 = 0;
  *param_1 = (long)(PTR_DAT_04bce2b0 + 0x10);
  param_1[8] = (long)(puVar1 + 0x10);
  param_1[9] = (long)param_1 + 0x5c;
  *(undefined4 *)(param_1 + 10) = 0x400;
  *(undefined1 *)((long)param_1 + 0x5c) = 0;
  plVar3 = param_1;
  do {
    *(undefined2 *)((long)plVar3 + 0x5d) = 0;
    lVar2 = lVar2 + 4;
    *(undefined1 *)((long)plVar3 + 0x5f) = 0;
    plVar3 = (long *)((long)param_1 + lVar2);
    *(undefined1 *)((long)plVar3 + 0x5c) = 0;
  } while (lVar2 != 0x400);
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  puVar1 = PTR_DAT_04bce2b8;
  lVar2 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined2 *)((long)param_1 + 0x2c) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined2 *)(param_1 + 0xce) = 0;
  *(undefined4 *)((long)param_1 + 0x672) = 0;
  *(undefined2 *)((long)param_1 + 0x676) = 0;
  *(undefined2 *)(param_1 + 0xd0) = 0;
  *(undefined2 *)((long)param_1 + 0x686) = 0;
  param_1[0xcd] = (long)(puVar1 + 0x10);
  param_1[0xcf] = (long)(puVar1 + 0x10);
  *(undefined4 *)((long)param_1 + 0x682) = 0;
  *(undefined1 *)((long)param_1 + 0x5c) = 0;
  plVar3 = param_1;
  do {
    *(undefined2 *)((long)plVar3 + 0x5d) = 0;
    lVar2 = lVar2 + 4;
    *(undefined1 *)((long)plVar3 + 0x5f) = 0;
    plVar3 = (long *)((long)param_1 + lVar2);
    *(undefined1 *)((long)plVar3 + 0x5c) = 0;
  } while (lVar2 != 0x400);
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  memset(param_1 + 2,0,0x18);
  memset(param_1 + 0x8c,0,0x200);
  return;
}

