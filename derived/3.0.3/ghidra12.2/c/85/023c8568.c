
void FUN_023c8568(long param_1)

{
  int local_8;
  int local_4;
  
  if ((*(byte *)(param_1 + 0x17d2) >> 4 & 1) != 0) {
    if (*(long *)(param_1 + 0x4d0) != 0) {
      FUN_0172d084();
      *(int *)(param_1 + 0x1f84) = *(int *)(param_1 + 0x1f84) + 1;
      local_4 = *(int *)(*(long *)(param_1 + 0x4d0) + 8);
      if (local_4 != 0) {
        local_8 = local_4;
        FUN_023c8604(param_1,&local_8);
      }
      FUN_016f8230(param_1,(uint)(*(uint *)(param_1 + 0x1810) < 9) &
                           0x10cU >> (ulong)(*(uint *)(param_1 + 0x1810) & 0x1f),0,0);
    }
    *(int *)(param_1 + 0x2240) = *(int *)(param_1 + 0x2240) + 1;
  }
  return;
}

