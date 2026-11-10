
void FUN_001f8f1c(long param_1)

{
  undefined4 local_2c;
  undefined1 auStack_28 [24];
  
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  local_2c = 0x10001;
  FUN_0018aa70(auStack_28,&local_2c);
  FUN_0018ab44(param_1 + 0x40,auStack_28);
  return;
}

