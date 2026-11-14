
bool FUN_01b5bd34(uint *param_1)

{
  bool bVar1;
  
  if (((((*param_1 != 0) && (0xe < *param_1 || (1 << (ulong)(*param_1 & 0x1f) & 0x4120U) == 0)) ||
       ((param_1[1] != 0 &&
        ((0xe < param_1[1] || ((1 << (ulong)(param_1[1] & 0x1f) & 0x4120U) == 0)))))) ||
      ((param_1[2] != 0 &&
       ((0xe < param_1[2] || ((1 << (ulong)(param_1[2] & 0x1f) & 0x4120U) == 0)))))) ||
     ((param_1[3] != 0 && ((0xe < param_1[3] || ((1 << (ulong)(param_1[3] & 0x1f) & 0x4120U) == 0)))
      ))) {
    return false;
  }
  if (((*param_1 == 5) || (((param_1[1] == 5 || (param_1[2] == 5)) || (param_1[3] == 5)))) &&
     (((*param_1 == 0xe || (param_1[1] == 0xe)) || ((param_1[2] == 0xe || (param_1[3] == 0xe)))))) {
    if (((*param_1 == 8) || (param_1[1] == 8)) || (param_1[2] == 8)) {
      bVar1 = true;
    }
    else {
      bVar1 = param_1[3] == 8;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

