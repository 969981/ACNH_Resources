
undefined8 FUN_004c9cd0(long *param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_0047c5a0();
  if (*(uint *)(param_1 + 1) == uVar2) {
    if ((*(uint *)((long)param_1 + 0xc) & 0x3fffffff) == uVar2) {
      FUN_00426990(PTR_DAT_048607b8,param_1,0x10);
      uVar2 = *(uint *)(param_1 + 1);
    }
    lVar1 = *param_1 + (long)(int)uVar2 * 0x10;
    FUN_0043bd50(lVar1,param_2);
    *(undefined4 *)(lVar1 + 8) = *param_3;
    *(uint *)(param_1 + 1) = uVar2 + 1;
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
    *(undefined4 *)(*param_1 + ((long)((ulong)uVar2 << 0x20) >> 0x1c) + 8) = *param_3;
  }
  return uVar3;
}

