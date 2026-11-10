
void FUN_002214d0(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  FUN_00227770();
  *param_1 = (long)(PTR_DAT_04bccfa0 + 0x10);
  FUN_00220ebc(param_1 + 0xb);
  lVar2 = 0;
  puVar1 = PTR_DAT_04bcb8b0 + 0x10;
  param_1[0x11] = 0;
  param_1[0x12] = (long)puVar1;
  param_1[0x13] = (long)param_1 + 0xac;
  *(undefined4 *)(param_1 + 0x14) = 0x400;
  *(undefined1 *)((long)param_1 + 0xac) = 0;
  plVar3 = param_1;
  do {
    *(undefined2 *)((long)plVar3 + 0xad) = 0;
    lVar2 = lVar2 + 4;
    *(undefined1 *)((long)plVar3 + 0xaf) = 0;
    plVar3 = (long *)((long)param_1 + lVar2);
    *(undefined1 *)((long)plVar3 + 0xac) = 0;
  } while (lVar2 != 0x400);
  lVar2 = 0;
  param_1[0x96] = 0;
  *(undefined1 *)((long)param_1 + 0xac) = 0;
  plVar3 = param_1;
  do {
    *(undefined2 *)((long)plVar3 + 0xad) = 0;
    lVar2 = lVar2 + 4;
    *(undefined1 *)((long)plVar3 + 0xaf) = 0;
    plVar3 = (long *)((long)param_1 + lVar2);
    *(undefined1 *)((long)plVar3 + 0xac) = 0;
  } while (lVar2 != 0x400);
  *(undefined8 *)((long)param_1 + 0xa4) = 0;
  FUN_00220f24(param_1 + 0xb);
  return;
}

