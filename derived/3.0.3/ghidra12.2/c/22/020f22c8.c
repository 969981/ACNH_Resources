
void FUN_020f22c8(undefined1 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 local_54 [4];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  local_54[0] = 0;
  local_50 = 0xfffe;
  FUN_0277d4ac(&local_50);
  local_48 = 0xfffe;
  FUN_0277d4ac(&local_48);
  local_50 = *param_2;
  local_48 = *param_3;
  local_28 = 0;
  local_22 = 0;
  local_24 = 0xff00;
  if (-1 < DAT_053d1670) {
    local_54[0] = param_1;
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d1670,&local_28,local_54,0x14,0);
  }
  return;
}

