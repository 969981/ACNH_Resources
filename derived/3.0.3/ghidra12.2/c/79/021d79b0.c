
ulong FUN_021d79b0(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  lVar2 = FUN_0265c2a0();
  if (lVar2 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    if ((*(long **)(lVar2 + 0x28) == (long *)0x0) ||
       (puVar3 = (undefined8 *)**(long **)(lVar2 + 0x28), puVar3 == (undefined8 *)0x0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)*puVar3)();
      uVar1 = uVar1 ^ 1;
    }
    uVar4 = 0;
    uVar6 = 0xffffffff;
    plVar5 = (long *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8) + 0x2fa4);
    do {
      if ((*(int *)((long)plVar5 + -4) == *(int *)(param_2 + 0x1c)) &&
         ((*(long *)(param_2 + 0x20) == *plVar5 && *(long *)(param_2 + 0x28) == plVar5[1]) &&
          *(int *)(param_2 + 0x30) == (int)plVar5[2])) {
        uVar6 = uVar4 & 0xffffffff;
        break;
      }
      uVar4 = uVar4 + 1;
      plVar5 = plVar5 + 0x2b;
    } while (uVar4 != 0xa0);
    if ((((uVar1 & 1) == 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
       (puVar3 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 8), puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)();
    }
  }
  return uVar6;
}

