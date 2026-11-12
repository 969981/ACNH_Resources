
long FUN_00689900(long param_1,uint *param_2)

{
  switch((short)param_2[1]) {
  case 1:
    return *(long *)(param_1 + 0x58) + (ulong)*param_2;
  case 2:
    return *(long *)(param_1 + 0x48) + (ulong)*param_2;
  case 3:
    return *(long *)(param_1 + 0x38) + (ulong)*param_2;
  case 4:
    break;
  default:
    return 0;
  }
  if ((byte)param_2[3] - 3 < 2) {
    return *(long *)(param_1 + 0x18) + (ulong)*param_2;
  }
  if ((byte)param_2[3] < 3) {
    return *(long *)(param_1 + 0x28) + (ulong)*param_2;
  }
  return 0;
}

