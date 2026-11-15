
void FUN_020ef788(undefined1 param_1,byte *param_2,undefined8 *param_3,undefined2 param_4,
                 undefined1 param_5)

{
  byte bVar1;
  undefined2 local_50;
  undefined8 local_4c;
  undefined2 local_44;
  undefined1 local_42;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  local_50 = 0xffff;
  local_4c = 0xfffe;
  FUN_0277d4ac(&local_4c);
  bVar1 = *param_2;
  local_4c = *param_3;
  local_28 = 0;
  if (7 < bVar1) {
    bVar1 = 0xff;
  }
  local_22 = 0;
  local_50 = CONCAT11(bVar1,param_1);
  local_24 = 0xff00;
  if (-1 < DAT_053d1010) {
    local_44 = param_4;
    local_42 = param_5;
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d1010,&local_28,&local_50,0x10,0);
  }
  return;
}

