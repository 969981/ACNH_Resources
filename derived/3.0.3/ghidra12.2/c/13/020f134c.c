
void FUN_020f134c(byte *param_1)

{
  byte bVar1;
  byte local_2c [4];
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  bVar1 = *param_1;
  local_24 = 0xff00;
  local_28 = 0;
  local_22 = 0;
  local_2c[0] = bVar1;
  if (7 < bVar1) {
    local_2c[0] = 0xff;
  }
  if (-1 < DAT_053d1430) {
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d1430,&local_28,local_2c,1,0);
    bVar1 = *param_1;
  }
  if (7 < bVar1) {
    bVar1 = 0xff;
  }
  *(byte *)(*(long *)PTR_DAT_04bb4128 + 0x269) = bVar1;
  return;
}

