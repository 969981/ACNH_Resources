
void FUN_00687470(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 local_58;
  undefined8 local_50;
  ulong local_48;
  
  if ((param_3 != 0) && (0 < *(int *)(param_2 + 0x20))) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      FUN_00687670(param_1,*(long *)(param_2 + 0x18) + lVar1,param_3);
      if (*param_1 != 0) {
        return;
      }
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x18;
    } while (lVar2 < *(int *)(param_2 + 0x20));
  }
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  FUN_00484630(param_1,&local_58);
  if ((local_48 & 1) != 0) {
    FUN_0043dd50(local_48 & 0xfffffffffffffffe);
  }
  return;
}

