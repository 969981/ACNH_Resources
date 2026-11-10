
undefined8 FUN_00153a08(long param_1,long param_2,int param_3)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return 0x2b;
  }
  uVar1 = *(uint *)(param_1 + 0x80);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x58) != param_2) {
      FUN_0014e11c();
      uVar1 = *(uint *)(param_1 + 0x80);
    }
    uVar1 = uVar1 & 0xfffffffe;
    *(uint *)(param_1 + 0x80) = uVar1;
  }
  *(long *)(param_1 + 0x58) = param_2;
  if ((param_2 != 0) && (param_3 != 0)) {
    *(uint *)(param_1 + 0x80) = uVar1 | 1;
  }
  return 0;
}

