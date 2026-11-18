
void FUN_033a5bd0(long *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_04bb2718;
  *param_1 = (long)(PTR_DAT_04bcb5f0 + 0x10);
  uVar1 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0x418) + 0xc);
  *(undefined1 *)((long)param_1 + 0xe) = 0xff;
  *(undefined2 *)((long)param_1 + 0xc) = 1;
  puVar2 = PTR_DAT_04bc5040;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 1) = uVar1;
  *param_1 = (long)(puVar2 + 0x10);
  FUN_007ef010(param_1 + 5,PTR_DAT_04bb3170);
  *(undefined4 *)((long)param_1 + 0x2c) = 0xffffffff;
  *(undefined2 *)(param_1 + 6) = 0x100;
  *(undefined1 *)((long)param_1 + 0x32) = 1;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  return;
}

