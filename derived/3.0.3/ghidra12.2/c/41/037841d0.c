
undefined8 FUN_037841d0(undefined2 *param_1,int param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if (((param_2 == 5) || (param_2 == 6)) || (lVar4 = FUN_03776400(), lVar4 == 0)) {
    uVar6 = 0;
  }
  else {
    lVar1 = lVar4 + 0x70 + (ulong)param_3 * 0x658;
    if (2 < param_3) {
      lVar1 = lVar4 + 0x70;
    }
    if ((*(long **)(lVar1 + 0x648) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar1 + 0x648), puVar5 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar5)();
      uVar2 = uVar2 ^ 1;
    }
    *param_1 = *(undefined2 *)(*(long *)(lVar1 + 0x630) + *(long *)(lVar1 + 0x628));
    uVar3 = FUN_0252d29c();
    *(undefined4 *)(param_1 + 2) = uVar3;
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar1 + 0x648) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar1 + 0x648) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
    uVar6 = 1;
  }
  return uVar6;
}

