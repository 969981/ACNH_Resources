
void FUN_03d55a70(undefined8 *param_1,ushort *param_2,uint param_3)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  ushort *local_28;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  if (((param_3 != 0) && (uVar2 = *param_2, (uVar2 & 1) == 0)) &&
     ((ulong)uVar2 + 2 <= (ulong)param_3 * 2)) {
    local_28 = param_2 + 1;
    param_1[1] = param_2;
    lVar1 = (long)local_28 + (ulong)uVar2;
    *(undefined4 *)(param_1 + 2) = 2;
    uVar3 = (**(code **)*param_1)((int)param_1,&local_28,lVar1);
    if (((uVar3 & 1) != 0) && (((ulong)local_28 & 1) + (long)local_28 == lVar1)) {
      *(undefined4 *)(param_1 + 2) = 1;
    }
  }
  return;
}

