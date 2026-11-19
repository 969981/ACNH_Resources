
undefined4 FUN_039b0d58(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (5 < (ushort)param_2) {
    return 0;
  }
  switch((ushort)param_2) {
  case 0:
    uVar2 = (uint)*(ushort *)(param_1 + 0x9e);
    break;
  case 1:
    uVar2 = (uint)*(ushort *)(param_1 + 0xa0);
    break;
  case 2:
    uVar2 = (uint)*(ushort *)(param_1 + 0xa2);
    break;
  case 3:
    uVar2 = (uint)*(ushort *)(param_1 + 0xa4);
    break;
  case 4:
    uVar2 = 0;
    if (param_2 * 0x10000 != 0) {
      uVar2 = (uint)*(ushort *)(param_1 + 0xa6);
    }
    uVar2 = uVar2 + (param_2 >> 0x10);
    if (*(uint *)(param_1 + 0x90) <= uVar2) {
      uVar2 = 0;
    }
    return *(undefined4 *)(**(long **)(*(long *)(param_1 + 0x98) + (long)(int)uVar2 * 0x18) + 0x50);
  case 5:
    uVar2 = (uint)*(ushort *)(param_1 + 0xa8);
  }
  uVar1 = 0;
  if (param_2 * 0x10000 != 0) {
    uVar1 = uVar2;
  }
  uVar1 = uVar1 + (param_2 >> 0x10);
  if (*(uint *)(param_1 + 0x90) <= uVar1) {
    uVar1 = 0;
  }
  return *(undefined4 *)(**(long **)(*(long *)(param_1 + 0x98) + (long)(int)uVar1 * 0x18) + 0x58);
}

