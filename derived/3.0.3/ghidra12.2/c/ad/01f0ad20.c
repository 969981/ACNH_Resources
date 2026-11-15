
void FUN_01f0ad20(long param_1,long param_2)

{
  uint uVar1;
  undefined4 local_24;
  
  local_24 = *(undefined4 *)(param_2 + 0x10);
  FUN_01e39778(*(undefined8 *)(param_1 + 8),param_2 + 4,&local_24,0);
  uVar1 = *(uint *)(param_2 + 0x14);
  if (3 < uVar1) {
    uVar1 = 0;
  }
  *(uint *)(*(long *)(param_1 + 8) + 0x750) = uVar1;
  return;
}

