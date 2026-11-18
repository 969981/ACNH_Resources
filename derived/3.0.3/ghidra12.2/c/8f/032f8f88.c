
undefined8 FUN_032f8f88(int *param_1,long param_2,char param_3)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_2 == 0) {
    return 0x8001;
  }
  if (param_3 == -1) {
    return 0x801b;
  }
  if (*(char *)(param_2 + 0x70380) == param_3) {
    *(char *)(param_2 + 2) = param_3;
    *(undefined2 *)(param_2 + 0x79e98) = 0;
    memcpy((void *)(param_2 + 0x78ee0),(void *)(param_2 + 0x70f68),0x6d0);
    *param_1 = (int)*(short *)(param_2 + 0x78eba);
    param_1[4] = (int)*(short *)(param_2 + 0x78ebc);
    memcpy((void *)(param_2 + 0x6f518),(void *)(param_2 + 0x78ee0),0x6d0);
    bVar1 = *(byte *)(param_2 + 2);
    if (((bVar1 < 0x31) && ((1L << ((ulong)bVar1 & 0x3f) & 0x1124924800090U) != 0)) ||
       (bVar1 == 0xfe)) {
      *(undefined4 *)(param_2 + 0x79c80) = 0x2012c;
      *(undefined8 *)(param_2 + 0x79c98) = 0;
      *(undefined8 *)(param_2 + 0x79ca0) = 0;
      *(undefined1 **)(param_2 + 0x79ca8) = &LAB_032f0d70;
      *(long *)(param_2 + 0x79cb0) = param_2;
    }
    else {
      *(undefined4 *)(param_2 + 0x79c80) = 0x4000a;
      *(undefined8 *)(param_2 + 0x79c98) = 0;
      *(undefined8 *)(param_2 + 0x79ca0) = 0;
      *(undefined8 *)(param_2 + 0x79ca8) = 0;
      *(undefined8 *)(param_2 + 0x79cb0) = 0;
    }
    uVar3 = FUN_001008b0(param_2 + 8,param_2 + 0x79c80);
    if (((uint)uVar3 >> 0xf & 1) == 0) {
      FUN_032f9170(uVar3,param_2);
      uVar2 = *(byte *)(param_2 + 2) - 1;
      if (uVar2 < 10) {
        uVar3 = 0;
        if ((0x36dU >> (ulong)(uVar2 & 0x1f) & 1) != 0) {
          lVar4 = *(long *)(&DAT_0418ce58 + (long)(char)uVar2 * 8);
          *(undefined8 *)(param_2 + 0x86b48) = *(undefined8 *)(&PTR_DAT_04b1c520)[lVar4 * 3];
          *(undefined8 *)(param_2 + 0x86b74) = *(undefined8 *)(&PTR_DAT_04b1c528)[lVar4 * 3];
          *(undefined8 *)(param_2 + 0x86ba0) = *(undefined8 *)(&PTR_DAT_04b1c530)[lVar4 * 3];
        }
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0x8064;
    }
  }
  else {
    uVar3 = 0x801b;
  }
  return uVar3;
}

