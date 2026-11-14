
undefined8 FUN_016d2444(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined1 local_18 [4];
  uint local_14;
  
  local_14 = FUN_02582fe0(param_2);
  if ((local_14 == 0xffffffff) || (local_18[0] = 1, 7 < local_14)) {
    return 0;
  }
  lVar1 = FUN_016c6a84(local_18);
  if (lVar1 == 0) {
    return 0;
  }
  if ((*(long **)(lVar1 + 0x6f0) == (long *)0x0) ||
     (puVar2 = (undefined8 *)**(long **)(lVar1 + 0x6f0), puVar2 == (undefined8 *)0x0)) {
    FUN_02774cf0(*(long *)(lVar1 + 0x6d8) + *(long *)(lVar1 + 0x6d0),param_1);
  }
  else {
    uVar3 = (**(code **)*puVar2)();
    FUN_02774cf0(*(long *)(lVar1 + 0x6d8) + *(long *)(lVar1 + 0x6d0),param_1);
    if ((((uVar3 & 1) != 0) && (*(long *)(lVar1 + 0x6f0) != 0)) &&
       (puVar2 = *(undefined8 **)(*(long *)(lVar1 + 0x6f0) + 8), puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)();
    }
  }
  return 1;
}

