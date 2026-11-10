
ulong FUN_00215b80(long param_1)

{
  ulong uVar1;
  undefined4 local_2c;
  int local_28 [6];
  
  local_2c = 0x80680010;
  FUN_0018aa70(local_28,&local_2c);
  if (*(int *)(param_1 + 0x218) == local_28[0]) {
    return (ulong)*(uint *)(param_1 + 0x238);
  }
  uVar1 = FUN_0018ab60(param_1 + 0x218);
  return uVar1;
}

