
void FUN_020f3080(undefined1 param_1,undefined2 param_2,undefined8 *param_3)

{
  undefined1 local_3c [2];
  ushort local_3a;
  undefined8 local_38;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  local_3c[0] = 0xff;
  local_3a = *(ushort *)PTR_DAT_04bb9cf0 >> 8 | *(ushort *)PTR_DAT_04bb9cf0 << 8;
  local_38 = 0xfffe;
  FUN_0277d4ac(&local_38);
  local_38 = *param_3;
  local_18 = 0;
  local_12 = 0;
  local_14 = 0xff00;
  if (-1 < DAT_053d16d0) {
    local_3c[0] = param_1;
    local_3a = param_2;
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d16d0,&local_18,local_3c,0xc,0);
  }
  return;
}

