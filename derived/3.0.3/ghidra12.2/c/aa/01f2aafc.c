
undefined8 FUN_01f2aafc(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0xaf40) + 0x3b8);
  if ((*(int *)(lVar2 + 0x77b0) - 3U < 5) ||
     (uVar1 = FUN_021305cc(param_1 + 0xaf38), (uVar1 & 1) == 0)) {
    uVar3 = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0xaf5d) = 0;
    uVar3 = 1;
    FUN_01ea5c80(lVar2,PTR_PTR_04bb2238,PTR_PTR_04bb2238,1,0,PTR_DAT_04bb32e0);
  }
  return uVar3;
}

