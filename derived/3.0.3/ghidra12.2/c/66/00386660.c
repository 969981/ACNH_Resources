
void FUN_00386660(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  param_1[2] = param_2;
  lVar2 = *(long *)(param_3 + 8);
  if (lVar2 != param_3) {
    do {
      lVar2 = *(long *)(lVar2 + 8);
    } while (lVar2 != param_3);
    lVar2 = FUN_00367b30(0x38);
    if (lVar2 != 0) {
      FUN_00367360(lVar2);
    }
    param_1[1] = lVar2;
    for (lVar2 = *(long *)(param_3 + 8); lVar2 != param_3; lVar2 = *(long *)(lVar2 + 8)) {
      uVar1 = (**(code **)(**(long **)(param_2 + 0x18) + 0x60))
                        (*(long **)(param_2 + 0x18),*(undefined8 *)(lVar2 + 0x10),1);
      FUN_00367494(param_1[1],uVar1);
    }
    uVar1 = (**(code **)*param_1)(param_1);
    param_1[4] = uVar1;
  }
  return;
}

