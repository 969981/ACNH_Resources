
void FUN_01600c5c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x70) + 0x1d0);
  if (*(uint *)(lVar2 + 0x1d0) < *(uint *)(lVar2 + 0x1b0)) {
    lVar2 = *(long *)(*(long *)(lVar2 + 0x1b8) + (long)(int)*(uint *)(lVar2 + 0x1d0) * 8);
    *(long *)(param_2 + 0x318) = lVar2;
    if (lVar2 != 0) {
      lVar1 = (**(code **)(*(long *)(lVar2 + 0x158) + 0xf0))(lVar2 + 0x158);
      *(undefined8 *)(param_2 + 0x328) = *(undefined8 *)(lVar1 + 8);
      *(long *)(lVar2 + 0x1b28) = param_2;
    }
  }
  else {
    *(undefined8 *)(param_2 + 0x318) = 0;
  }
  FUN_015fef10(param_2,PTR_PTR_04bb2238);
  return;
}

