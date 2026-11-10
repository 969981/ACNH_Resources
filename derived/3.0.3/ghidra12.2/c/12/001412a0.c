
int FUN_001412a0(long param_1,long param_2,ulong param_3,long param_4)

{
  long *plVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_198 [344];
  
  if (param_1 == 0) {
    return 0xae75;
  }
  plVar1 = (long *)(param_1 + 0x6fb50);
  if (*plVar1 == 0) {
    return 0x8875;
  }
  uVar4 = FUN_0011f660(*plVar1,0xe);
  if ((uVar4 & 0xffff) != 0) {
    if (param_4 == 0) {
      return 0x8575;
    }
    if ((param_2 == 0) || (uVar5 = FUN_001003e0(param_2), (uVar5 & 0xffff) == 0)) {
      return 0x8175;
    }
    if (0x37 < (uVar5 & 0xffff)) {
      return 0x8675;
    }
    uVar6 = (uint)param_3;
    if ((uVar6 & 0xff) < 2) {
      return 0xa675;
    }
    if ((uVar6 - 0x25 & 0xff) < 0x85) {
      return 0xa675;
    }
    sVar3 = FUN_0013f870(auStack_198,*plVar1,param_2,uVar5,param_3 & 0xffffffff,param_4);
    iVar2 = (int)sVar3;
    if (iVar2 < 0) {
      return iVar2;
    }
    if (iVar2 != 0) {
      if ((uVar6 - 0xb & 0xff) < 2) {
        *(ushort *)(param_4 + 0x72) = *(ushort *)(param_4 + 0x72) & 0x7f | (ushort)(uVar4 << 7);
      }
      *(undefined2 *)(param_4 + 0x80) = 0x874;
      *(undefined1 *)(param_4 + 0x68) = 1;
      *(undefined8 *)(param_4 + 0x30) = 0;
      *(undefined8 *)(param_4 + 0x38) = 0;
      *(undefined8 *)(param_4 + 0x20) = 0;
      *(undefined8 *)(param_4 + 0x28) = 0;
      *(code **)(param_4 + 0x10) = FUN_0013e9c0;
      *(undefined8 *)(param_4 + 0x18) = 0;
      return 1;
    }
    sVar3 = FUN_0013f870(auStack_198,*plVar1,param_2,uVar5,2,param_4);
    iVar2 = (int)sVar3;
    if (iVar2 < 0) {
      return iVar2;
    }
    if (iVar2 != 0) {
      if (((uVar6 & 0xff) < 0x25) && ((1L << (param_3 & 0x3f) & 0x1e00003800U) != 0)) {
        *(ushort *)(param_4 + 0x72) = *(ushort *)(param_4 + 0x72) & 0x7f | (ushort)(uVar4 << 7);
      }
      *(undefined2 *)(param_4 + 0x80) = 0x874;
      return 0;
    }
  }
  return 0xa275;
}

