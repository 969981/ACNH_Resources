
ulong FUN_0311daa0(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  
  if (*(long *)(param_1 + 0x1068) == 0) {
    if ((*(byte *)(param_1 + 0x2d8) >> 1 & 1) == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x3c0) == 1) {
      return 0;
    }
    uVar3 = FUN_00817520(param_1 + 0x2c0);
    if ((uVar3 & 1) != 0) {
      if ((*(byte *)(param_1 + 0x4d0) >> 1 & 1) == 0) {
        return 0;
      }
      if (*(int *)(param_1 + 0x5b8) == 1) {
        return 0;
      }
      uVar3 = FUN_00817520(param_1 + 0x4b8);
      if ((uVar3 & 1) != 0) {
        if ((*(byte *)(param_1 + 0x6c8) >> 1 & 1) == 0) {
          return 0;
        }
        if (*(int *)(param_1 + 0x7b0) == 1) {
          return 0;
        }
        uVar3 = FUN_00817520(param_1 + 0x6b0);
        if ((uVar3 & 1) != 0) {
          if ((*(byte *)(param_1 + 0x8c0) >> 1 & 1) == 0) {
            return 0;
          }
          if (*(int *)(param_1 + 0x9a8) == 1) {
            return 0;
          }
          uVar3 = FUN_00817520(param_1 + 0x8a8);
          if ((uVar3 & 1) != 0) {
            if ((*(byte *)(param_1 + 0xab8) >> 1 & 1) == 0) {
              return 0;
            }
            if (*(int *)(param_1 + 0xba0) == 1) {
              return 0;
            }
            uVar3 = FUN_00817520(param_1 + 0xaa0);
            if ((uVar3 & 1) != 0) {
              if ((*(byte *)(param_1 + 0xcb0) >> 1 & 1) == 0) {
                return 0;
              }
              if (*(int *)(param_1 + 0xd98) == 1) {
                return 0;
              }
              uVar3 = FUN_00817520(param_1 + 0xc98);
              if ((uVar3 & 1) != 0) {
                if ((*(byte *)(param_1 + 0xea8) >> 1 & 1) == 0) {
                  return 0;
                }
                if (*(int *)(param_1 + 0xf90) == 1) {
                  return 0;
                }
                uVar3 = FUN_00817520(param_1 + 0xe90);
                return uVar3;
              }
            }
          }
        }
      }
    }
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x2b8);
    if (((((uVar2 != 0xffffffff) && (uVar2 < 0x10e)) &&
         (lVar1 = *(long *)(param_1 + 0x1068) + 8,
         *(int *)(lVar1 + (ulong)uVar2 * 0x1a8 + 0x1a0) == 2)) &&
        ((((*(uint *)(param_1 + 0x4b0) < 0x10e &&
           (*(int *)(lVar1 + (ulong)*(uint *)(param_1 + 0x4b0) * 0x1a8 + 0x1a0) == 2)) &&
          ((*(uint *)(param_1 + 0x6a8) < 0x10e &&
           ((*(int *)(lVar1 + (ulong)*(uint *)(param_1 + 0x6a8) * 0x1a8 + 0x1a0) == 2 &&
            (*(uint *)(param_1 + 0x8a0) < 0x10e)))))) &&
         (*(int *)(lVar1 + (ulong)*(uint *)(param_1 + 0x8a0) * 0x1a8 + 0x1a0) == 2)))) &&
       ((((*(uint *)(param_1 + 0xa98) < 0x10e &&
          (*(int *)(lVar1 + (ulong)*(uint *)(param_1 + 0xa98) * 0x1a8 + 0x1a0) == 2)) &&
         (*(uint *)(param_1 + 0xc90) < 0x10e)) &&
        ((*(int *)(lVar1 + (ulong)*(uint *)(param_1 + 0xc90) * 0x1a8 + 0x1a0) == 2 &&
         (*(uint *)(param_1 + 0xe88) < 0x10e)))))) {
      return (ulong)(*(int *)(lVar1 + (ulong)*(uint *)(param_1 + 0xe88) * 0x1a8 + 0x1a0) == 2);
    }
  }
  return 0;
}

