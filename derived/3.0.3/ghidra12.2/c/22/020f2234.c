
void FUN_020f2234(undefined1 param_1,undefined8 *param_2)

{
  undefined1 local_34 [4];
  undefined8 local_30;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  local_34[0] = 0xff;
  local_30 = 0xfffe;
  FUN_0277d4ac(&local_30);
  local_30 = *param_2;
  local_28 = 0;
  local_22 = 0;
  local_24 = 0xff00;
  if (-1 < DAT_053d1640) {
    local_34[0] = param_1;
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d1640,&local_28,local_34,0xc,0);
  }
  return;
}

