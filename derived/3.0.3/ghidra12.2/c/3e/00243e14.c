
void FUN_00243e14(long *param_1)

{
  undefined *puVar1;
  
  FUN_002a43d8();
  puVar1 = PTR_DAT_04bcd4b8;
  *(undefined4 *)((long)param_1 + 0x1ac) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined8 *)((long)param_1 + 0xc) = 0xffffffff;
  memset((void *)((long)param_1 + 0x14),0,0x18);
  memset((void *)((long)param_1 + 0x2c),0,0x180);
  return;
}

