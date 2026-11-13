
void FUN_013db2a0(long param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  short *psVar4;
  ulong uVar5;
  short local_28 [4];
  
  if ((param_2 != (long *)0x0) && (0 < *(int *)(param_1 + 0x78))) {
    uVar5 = 0;
    do {
      if (uVar5 < *(uint *)(param_1 + 0x58)) {
        lVar3 = *(long *)(*(long *)(param_1 + 0x60) + uVar5 * 8);
      }
      else {
        lVar3 = 0;
      }
      psVar4 = (short *)(**(code **)(*(long *)(lVar3 + 0xf0) + 0xf0))();
      local_28[0] = *psVar4;
      local_28[1] = 0;
      local_28[2] = 0;
      local_28[3] = 0;
      FUN_0277d4ac(local_28);
      if (local_28[0] != -2) {
        FUN_0277dedc(local_28);
        lVar3 = (**(code **)(*param_2 + 0x18))(param_2);
        uVar2 = FUN_0277d6c4(local_28);
        if ((uVar2 >> 3 & 0x1fff) < 0x753) {
          lVar1 = (ulong)((uVar2 & 0xffff) >> 5) * 4;
          *(uint *)(lVar3 + lVar1) = *(uint *)(lVar3 + lVar1) | 1 << (ulong)(uVar2 & 0x1f);
        }
      }
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)*(int *)(param_1 + 0x78));
  }
  return;
}

