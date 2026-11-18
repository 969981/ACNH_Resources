
long * FUN_032dabd4(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined *local_30;
  undefined8 *puStack_28;
  
  plVar4 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0x110,8);
  plVar4[6] = 0;
  puVar3 = PTR_DAT_04bc95f0;
  plVar4[2] = (long)PTR_DAT_04bb2120;
  plVar4[3] = 0;
  puVar2 = PTR_DAT_04bc8e60;
  puVar1 = PTR_DAT_04bb2020;
  *(undefined2 *)(plVar4 + 0xb) = 0x101;
  *(undefined1 *)((long)plVar4 + 0x5a) = 0;
  *plVar4 = (long)(puVar3 + 0x10);
  plVar4[1] = (long)(puVar1 + 0x10);
  plVar4[4] = 0x20;
  plVar4[5] = (long)(puVar2 + 0x10);
  local_30 = PTR_DAT_04bc8e68 + 0x10;
  puStack_28 = &DAT_0407ebb1;
  FUN_032e24f4(plVar4 + 0xc,&local_30);
  puVar1 = PTR_DAT_04bc9600;
  plVar4[0x1b] = (long)(puVar2 + 0x10);
  plVar4[0x1c] = 0;
  plVar4[0x21] = 0;
  plVar4[0xc] = (long)(puVar1 + 0x10);
  return plVar4;
}

