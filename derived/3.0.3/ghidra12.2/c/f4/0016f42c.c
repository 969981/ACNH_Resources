
undefined8 FUN_0016f42c(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 0x10);
  lVar2 = *(long *)(lVar3 + 8);
  if (*(int *)(param_2 + 8) == 0) {
    if (lVar2 != 0) goto LAB_0016f490;
  }
  else if (lVar2 == 0) {
    lVar2 = FUN_001726f0(param_1);
    if (lVar2 == 0) {
      return 0;
    }
    if ((*(byte *)(lVar2 + 0xe4) >> 1 & 1) != 0) {
      return 0;
    }
    if (*(int *)(lVar2 + 0xdc) == 3) {
      return 0;
    }
    if (*(int *)(lVar2 + 0xdc) == 5) {
      return 0;
    }
LAB_0016f490:
    if (*(long *)(lVar3 + 0x18) != 0) {
      if (*(code **)(param_1 + 0x7e8) == (code *)0x0) {
        return 0;
      }
      iVar1 = (**(code **)(param_1 + 0x7e8))(param_1,param_2,*(undefined8 *)(param_1 + 0x8b8));
      goto joined_r0x0016f4b0;
    }
  }
  if (*(code **)(param_1 + 0x7f0) == (code *)0x0) {
    return 0;
  }
  iVar1 = (**(code **)(param_1 + 0x7f0))
                    (param_1,param_2,0xfffffe07,*(undefined8 *)(param_1 + 0x8b8));
joined_r0x0016f4b0:
  if (iVar1 == 0) {
    return 0;
  }
  return 0xfffffc7a;
}

