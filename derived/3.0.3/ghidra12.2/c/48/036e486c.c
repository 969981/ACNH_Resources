
undefined2 FUN_036e486c(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined2 uVar3;
  long lVar4;
  
  if ((((DAT_05ab8198 == (ushort *)0x0) || ((*DAT_05ab8198 & 1) == 0)) &&
      ((*(byte *)(param_1 + 0x1a71) >> 2 & 1) == 0)) ||
     ((DAT_05ab7608 == 0 || (lVar4 = *(long *)(DAT_05ab7608 + 8), lVar4 == 0)))) {
    uVar3 = 0xffff;
  }
  else if ((*(long **)(lVar4 + 0x60) == (long *)0x0) ||
          (puVar1 = (undefined8 *)**(long **)(lVar4 + 0x60), puVar1 == (undefined8 *)0x0)) {
    uVar3 = *(undefined2 *)(*(long *)(lVar4 + 0x48) + *(long *)(lVar4 + 0x40) + 2);
  }
  else {
    uVar2 = (**(code **)*puVar1)();
    uVar3 = *(undefined2 *)(*(long *)(lVar4 + 0x48) + *(long *)(lVar4 + 0x40) + 2);
    if ((((uVar2 & 1) != 0) && (*(long *)(lVar4 + 0x60) != 0)) &&
       (puVar1 = *(undefined8 **)(*(long *)(lVar4 + 0x60) + 8), puVar1 != (undefined8 *)0x0)) {
      (**(code **)*puVar1)();
    }
  }
  return uVar3;
}

