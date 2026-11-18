
undefined2 FUN_036e4f3c(long param_1)

{
  undefined2 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined2 uVar4;
  long lVar5;
  
  if ((((DAT_05ab8198 == (ushort *)0x0) || ((*DAT_05ab8198 & 1) == 0)) || (DAT_05ab7608 == 0)) ||
     (lVar5 = *(long *)(DAT_05ab7608 + 8), lVar5 == 0)) {
    puVar1 = (undefined2 *)(param_1 + 0x2c);
    if ((*(ushort *)(param_1 + 0x28) & 0x40) != 0) {
      puVar1 = (undefined2 *)(param_1 + 0x2a);
    }
    uVar4 = *puVar1;
  }
  else if ((*(long **)(lVar5 + 0x60) == (long *)0x0) ||
          (puVar2 = (undefined8 *)**(long **)(lVar5 + 0x60), puVar2 == (undefined8 *)0x0)) {
    uVar4 = *(undefined2 *)(*(long *)(lVar5 + 0x48) + *(long *)(lVar5 + 0x40) + 2);
  }
  else {
    uVar3 = (**(code **)*puVar2)();
    uVar4 = *(undefined2 *)(*(long *)(lVar5 + 0x48) + *(long *)(lVar5 + 0x40) + 2);
    if ((((uVar3 & 1) != 0) && (*(long *)(lVar5 + 0x60) != 0)) &&
       (puVar2 = *(undefined8 **)(*(long *)(lVar5 + 0x60) + 8), puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)();
    }
  }
  return uVar4;
}

