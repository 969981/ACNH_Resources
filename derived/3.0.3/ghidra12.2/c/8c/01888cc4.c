
void FUN_01888cc4(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x3d0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x2d8) + 0x28))(lVar3 + 0x2d8);
    plVar1 = DAT_0537d558;
    uVar2 = FUN_01d3e29c(*DAT_0537d558 + 8);
    if (((uVar2 & 1) != 0) && (uVar2 = FUN_01d692e8(plVar1[2]), (uVar2 & 1) == 0)) {
      return;
    }
  }
  if (*(int *)(param_1 + 0x280) == 8) {
    return;
  }
  FUN_03ebb160(param_1 + 0x278,8);
  return;
}

