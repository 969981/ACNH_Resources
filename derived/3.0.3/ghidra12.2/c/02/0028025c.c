
void FUN_0028025c(long param_1,ulong param_2,long param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  if ((0x10 < param_4) &&
     (((uint)param_2 & 0xff) < (*(ushort *)(param_1 + 0x58) & 0xff) &&
      param_4 <= *(ushort *)(param_1 + 0x58) + 0x10)) {
    uVar1 = FUN_00228490(param_3 + 4);
    uVar2 = FUN_00228490(param_3 + 8);
    if (uVar1 != 0) {
      param_2 = param_2 & 0xff;
      if (*(uint *)(param_1 + 0x5c) == uVar1) {
        if (uVar2 <= *(uint *)(*(long *)(param_1 + 0x70) + param_2 * 4)) {
          return;
        }
      }
      else {
        if (uVar1 <= *(uint *)(param_1 + 0x5c)) {
          return;
        }
        *(uint *)(param_1 + 0x5c) = uVar1;
        memset(*(void **)(param_1 + 0x68),0,
               (ulong)*(ushort *)(param_1 + 0x58) * (ulong)*(ushort *)(param_1 + 0x58));
        memset(*(void **)(param_1 + 0x70),0,(ulong)*(ushort *)(param_1 + 0x58) << 2);
        *(undefined4 *)(param_1 + 0x60) = 1;
      }
      memcpy((void *)(*(long *)(param_1 + 0x68) + *(ushort *)(param_1 + 0x58) * param_2),
             (void *)(param_3 + 0x10),(ulong)(param_4 - 0x10));
      *(uint *)(*(long *)(param_1 + 0x70) + param_2 * 4) = uVar2;
    }
  }
  return;
}

