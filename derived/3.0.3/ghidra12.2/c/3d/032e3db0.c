
void FUN_032e3db0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    lVar1 = param_1[2];
    if (lVar1 != 0) {
      lVar2 = param_1[3];
      goto LAB_032e3ddc;
    }
  }
  else {
    lVar2 = param_1[3];
    if (*(long **)(lVar1 + 8) == param_1) {
      if (lVar2 == 0) {
        *(undefined8 *)(lVar1 + 8) = 0;
      }
      else {
        *(long *)(lVar1 + 8) = lVar2;
        *(undefined8 *)(param_1[3] + 0x10) = 0;
      }
      goto LAB_032e3e0c;
    }
    lVar1 = param_1[2];
LAB_032e3ddc:
    *(long *)(lVar1 + 0x18) = lVar2;
  }
  if (param_1[3] != 0) {
    *(long *)(param_1[3] + 0x10) = param_1[2];
  }
LAB_032e3e0c:
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

