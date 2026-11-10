
int FUN_0015d304(long *param_1,int param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = *(long *)(lVar1 + 0x1e8);
  *(byte *)(lVar1 + 0x1280) = *(byte *)(lVar1 + 0x1280) & 0xfd;
  *(byte *)(lVar1 + 0x12a0) = *(byte *)(lVar1 + 0x12a0) & 0xfd;
  FUN_00161dd4();
  param_1[0xa4] = *(long *)(lVar1 + 0x6f0);
  param_1[0xa5] = *(long *)(lVar1 + 0x778);
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x210) != 0) {
      FUN_0015e0d0(lVar2 + 0x210);
    }
    FUN_00159670(param_1,param_3 & 1);
    FUN_001532b0(lVar2 + 0x28);
    if (param_2 != 0) {
      return param_2;
    }
    if ((param_3 & 1) != 0) {
      return 0;
    }
    if ((((*(byte *)((long)param_1 + 0x41d) >> 5 & 1) == 0) &&
        ((*(byte *)(lVar1 + 0xf64) >> 6 & 1) == 0)) &&
       (*(long *)(lVar1 + 0x110) + *(long *)(lVar1 + 0x100) <= *(long *)(lVar1 + 0x118))) {
      FUN_0014d5f8(lVar1,"Empty reply from server");
      return 0x34;
    }
  }
  return 0;
}

