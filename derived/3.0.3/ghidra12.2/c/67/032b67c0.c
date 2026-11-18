
void FUN_032b67c0(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  undefined *local_58;
  long *local_50;
  undefined *local_28;
  char *pcStack_20;
  undefined4 local_14;
  
  local_14 = 1;
  if (*(long *)(param_1 + 8) != 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 != 0) {
      uVar1 = crc32b(0xffffffff,0x4c,0x4c11db7);
      uVar1 = crc32b(uVar1,0x69,0x4c11db7);
      uVar1 = crc32b(uVar1,0x6d,0x4c11db7);
      uVar1 = crc32b(uVar1,0x69,0x4c11db7);
      uVar2 = crc32b(uVar1,0x74,0x4c11db7);
      do {
        if (*(uint *)(lVar3 + 0x68) == ~uVar2) break;
        lVar3 = *(long *)(lVar3 + 0x10);
      } while (lVar3 != 0);
    }
    if (*(long *)(*(long *)(param_1 + 0x40) + (long)(int)(uint)(1 < *(uint *)(param_1 + 0x38)) * 8)
        != lVar3) {
      local_28 = PTR_DAT_04bc8e68 + 0x10;
      pcStack_20 = "Limit";
      local_58 = PTR_DAT_04bc8e60 + 0x10;
      local_50 = (long *)0x0;
      FUN_032c7d70((long *)(param_1 + 8),&local_28,1,&local_58,0,0);
      if (local_50 != (long *)0x0) {
        (**(code **)(*local_50 + 8))();
      }
    }
  }
  return;
}

