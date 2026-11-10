
undefined8
FUN_00375554(long param_1,int param_2,int param_3,int param_4,uint param_5,ulong param_6,int param_7
            ,uint param_8,int param_9,byte param_10,byte param_11,byte param_12,int param_13,
            int param_14)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  
  uVar2 = (uint)param_6 & 1;
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((((((int)(uVar4 & 3) < param_2) || ((int)(uVar4 >> 2 & 3) < param_3)) ||
       ((int)(uVar4 >> 4 & 3) < param_4)) ||
      ((((int)(uVar4 >> 6 & 7) < (int)param_5 || ((uVar4 >> 9 & 1) < uVar2)) ||
       (((int)(uVar4 >> 10 & 3) < param_7 ||
        (((uVar4 >> 0xc & 1) < (param_8 & 1) || ((int)(uVar4 >> 0xd & 3) < param_9)))))))) ||
     (((uVar4 >> 0xf & 1) < (param_10 & 1) ||
      (((((uVar4 >> 0x10 & 1) < (param_11 & 1) || ((uVar4 >> 0x11 & 1) < (param_12 & 1))) ||
        ((int)(uVar4 >> 0x12 & 3) < param_13)) || ((int)(uVar4 >> 0x14 & 3) < param_14)))))) {
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_00367b50();
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xffc00000;
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffc00000;
    }
    uVar3 = 0xc;
    if ((param_8 & 1) == 0) {
      uVar3 = 0;
    }
    lVar5 = 0x74;
    if ((param_12 & 1) == 0) {
      lVar5 = 0;
    }
    lVar1 = (-(ulong)(param_5 >> 0x1f) & 0xfffffff000000000 | (ulong)param_5 << 4) + 0x1c;
    if ((param_11 & 1) == 0) {
      lVar1 = 0;
    }
    lVar5 = FUN_00367b30((uVar3 | ((long)param_4 + (long)param_2) * 0x10) +
                         ((long)param_7 + (long)(int)param_5) * 4 +
                         ((long)param_9 + (long)param_3) * 0x14 + lVar1 +
                         (((ulong)param_10 & 1) + (param_6 & 1)) * 8 + lVar5 + (long)param_13 * 0x20
                         + (long)param_14 * 0x58 + (ulong)(0 < param_14) * 0x10);
    *(long *)(param_1 + 0x18) = lVar5;
    if (lVar5 == 0) {
      return 0;
    }
    FUN_003779d0(param_1,param_2,param_3,param_4,(ulong)param_5,uVar2,param_7,param_8 & 1,param_9,
                 param_10 & 1,param_11 & 1,param_12 & 1,param_13,param_14);
  }
  return 1;
}

