
void FUN_0043dae0(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(*(long *)(param_2 + 8) + param_3 * 8 + 8);
  *param_1 = *(undefined8 *)(param_2 + param_3 * 8 + 0x10);
  param_1[1] = lVar1;
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_00428370();
  }
  param_1[2] = uVar2;
  if ((uVar2 & 1) == 0) {
    return;
  }
  FUN_0043dd30(uVar2 & 0xfffffffffffffffe);
  return;
}

