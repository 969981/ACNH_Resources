
void FUN_003b12a8(long *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (param_1[0xc] != 0) {
    FUN_003a29b0(param_1 + 2);
    uVar2 = 1 << (ulong)(param_2 & 0x1f);
    if (((uVar2 & *(byte *)((long)param_1 + 0x2d)) != 0) || (*(short *)(*param_1 + 0xa0) != 0)) {
      lVar1 = 0;
      if (param_1[8] != 0 && (*(ushort *)(param_1 + 1) & 1) != 0) {
        lVar1 = param_1[8] + (long)(int)param_2 * 0x48;
      }
      uVar3 = FUN_00347cc4(lVar1);
      *(byte *)((long)param_1 + 0x2d) = *(byte *)((long)param_1 + 0x2d) & ((byte)uVar2 ^ 0xff);
      FUN_003b13d0(param_1,uVar3,
                   param_1[3] + (long)(int)(*(int *)((long)param_1 + 0x24) * param_2) * 4);
      uVar2 = *(uint *)((long)param_1 + 0x24);
      if (0 < (int)uVar2) {
        memset((void *)(param_1[3] + (long)(int)(uVar2 * param_2) * 4),0,(ulong)uVar2 << 2);
      }
      lVar1 = 0;
      if (param_1[8] != 0 && (*(ushort *)(param_1 + 1) & 1) != 0) {
        lVar1 = param_1[8] + (long)(int)param_2 * 0x48;
      }
      FUN_00347cdc(lVar1,0,param_1[0xc]);
      lVar1 = 0;
      if (param_1[8] != 0 && (*(ushort *)(param_1 + 1) & 1) != 0) {
        lVar1 = param_1[8] + (long)(int)param_2 * 0x48;
      }
      FUN_00347cd8(lVar1);
      return;
    }
  }
  return;
}

