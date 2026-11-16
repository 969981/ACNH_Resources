
void FUN_0281cbe8(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  int local_24;
  
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    local_24 = 0;
    uVar1 = FUN_02b673a0(&local_24,*(undefined4 *)(param_2 + 0xc));
    if (((uVar1 & 1) != 0) && (local_24 == **(int **)(param_1 + 0x10))) {
      FUN_02b3ce70(*(long *)PTR_DAT_04bb5008 + 0x26e8,0x6622bd46);
      lVar2 = *(long *)(*(long *)(param_1 + 8) + 8);
      if ((lVar2 != 0) &&
         (((*(uint *)(param_2 + 0x18) < 0x120 && (*(uint *)(param_2 + 0x1c) < 0x100)) &&
          (*(int *)(lVar2 + (ulong)*(uint *)(param_2 + 0x18) * 0x400 +
                    (ulong)*(uint *)(param_2 + 0x1c) * 4 + 0x30) != -1)))) {
        FUN_01361f00();
      }
    }
  }
  return;
}

