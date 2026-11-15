
undefined8 FUN_020d18e4(long param_1,float *param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  if (((*(int *)(param_1 + 0x2068) == 0) && ((*(byte *)(param_1 + 0x20ac) & 0x2c) == 8)) &&
     (plVar1 = *(long **)(*(long *)(param_1 + 0x20) + 0x178), plVar1 != (long *)0x0)) {
    lVar2 = *plVar1;
    if ((int)plVar1[2] < 1) {
      lVar2 = 0;
    }
    if (lVar2 != 0 && lVar2 != 0x10) {
      iVar3 = *(int *)(lVar2 + -8);
      iVar4 = *(int *)(lVar2 + -4);
      param_2[1] = 0.0;
      *param_2 = (float)iVar3 * 5.0;
      param_2[2] = (float)iVar4 * 5.0;
      return 1;
    }
  }
  return 0;
}

