
undefined8 FUN_0014ae60(long *param_1,uint param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 1;
  if ((((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) && (param_5 != 0)) {
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
    param_1[5] = 0;
    *(uint *)(param_1 + 4) = param_2;
    lVar2 = FUN_001432f0(-(ulong)(param_2 >> 0x1f) & 0xffffffe000000000 | (ulong)param_2 << 5);
    *param_1 = lVar2;
    if (lVar2 == 0) {
      uVar1 = 1;
      *(undefined4 *)(param_1 + 4) = 0;
    }
    else {
      if (0 < (int)param_2) {
        lVar2 = 0;
        do {
          FUN_00143a84(*param_1 + lVar2,FUN_0014af00);
          lVar2 = lVar2 + 0x20;
        } while ((ulong)param_2 * 0x20 != lVar2);
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}

