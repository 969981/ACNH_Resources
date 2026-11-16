
bool FUN_02818404(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  if (lVar1 == 0 && lVar2 == 0) {
    return false;
  }
  if ((lVar1 == *param_1) && (lVar2 == param_1[1])) {
    return true;
  }
  if ((lVar1 == param_1[9]) && (lVar2 == param_1[10])) {
    return true;
  }
  if ((lVar1 == param_1[0x12]) && (lVar2 == param_1[0x13])) {
    return true;
  }
  if ((lVar1 == param_1[0x1b]) && (lVar2 == param_1[0x1c])) {
    return true;
  }
  if ((lVar1 == param_1[0x24]) && (lVar2 == param_1[0x25])) {
    return true;
  }
  if ((lVar1 == param_1[0x2d]) && (lVar2 == param_1[0x2e])) {
    return true;
  }
  if ((lVar1 == param_1[0x36]) && (lVar2 == param_1[0x37])) {
    return true;
  }
  return lVar1 == param_1[0x3f] && lVar2 == param_1[0x40];
}

