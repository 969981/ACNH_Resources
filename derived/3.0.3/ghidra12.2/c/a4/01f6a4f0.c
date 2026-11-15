
void FUN_01f6a4f0(long param_1)

{
  undefined1 local_2c;
  undefined1 local_2b;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  FUN_02085a50(*(undefined8 *)(param_1 + 0x18),0,0);
  local_2b = 0;
  local_28 = 0;
  local_22 = 0;
  local_24 = 0xff00;
  local_2c = (undefined1)*(undefined4 *)(*(long *)(param_1 + 8) + 0x508);
  if (-1 < DAT_053d1190) {
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d1190,&local_28,&local_2c,2,0);
  }
  *(undefined8 *)(param_1 + 0x136b8) = 0;
  *(undefined4 *)(param_1 + 0x136c0) = 0;
  return;
}

