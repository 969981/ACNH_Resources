
undefined4 FUN_0194b74c(long *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  switch((int)param_1[2]) {
  case 0:
    break;
  case 1:
    return *(undefined4 *)(*param_1 + 2000);
  case 2:
    return *(undefined4 *)(*param_1 + 0x860);
  case 3:
    return *(undefined4 *)(*param_1 + 0x8c4);
  case 4:
    return *(undefined4 *)(*param_1 + 0x8c8);
  default:
    return DAT_04c9a0c8;
  }
  uVar1 = *(uint *)(param_1 + 1);
  uVar2 = *(uint *)((long)param_1 + 0xc);
  if (*(uint *)(*param_1 + 0x288) <= uVar1) {
    uVar1 = 0;
  }
  lVar3 = *(long *)(*param_1 + 0x290) + (long)(int)uVar1 * 0x30;
  if (*(uint *)(lVar3 + 0x10) <= uVar2) {
    uVar2 = 0;
  }
  return *(undefined4 *)(*(long *)(lVar3 + 0x18) + (long)(int)uVar2 * 4);
}

