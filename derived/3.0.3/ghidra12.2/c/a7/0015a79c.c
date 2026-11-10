
void FUN_0015a79c(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 local_30;
  undefined4 local_28;
  
  lVar2 = *(long *)(param_1 + 0x1e8);
  if (((*(int *)(param_1 + 0xf10) != *(int *)(param_1 + 0x1560)) ||
      (((uint)((ulong)*(undefined8 *)(param_1 + 0xf60) >> 0x34) & 1) !=
       (*(ushort *)(param_1 + 0x15c4) >> 0xc & 1))) ||
     (*(long *)(param_1 + 0xf08) != *(long *)(param_1 + 0x1558))) {
    local_28 = 0;
    local_30 = 0;
    FUN_0015ba1c(param_1,&local_30);
    iVar1 = FUN_001670d4(param_2,0,*(undefined4 *)(lVar2 + 0x218),&local_30);
    if (iVar1 != 0) {
      return;
    }
  }
  FUN_0016defc(param_2);
  return;
}

