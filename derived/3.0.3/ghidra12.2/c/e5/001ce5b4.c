
void FUN_001ce5b4(undefined8 param_1,long param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_168 [144];
  undefined1 local_d8;
  undefined1 auStack_d0 [144];
  undefined1 local_40;
  long local_38;
  
  if (*(char *)(param_2 + 0x78) == '\0') {
    FUN_001b8590(param_2 + 0x10);
  }
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  FUN_001e1500(auStack_168);
  FUN_001e15a8(auStack_168,uVar1);
  local_d8 = param_3;
  FUN_001e1564(auStack_d0,auStack_168);
  local_40 = local_d8;
  local_38 = param_2;
  FUN_001dc4e0(param_1,auStack_d0,auStack_d0);
  FUN_001e1868(auStack_d0);
  FUN_001e1868(auStack_168);
  return;
}

