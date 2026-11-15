
bool FUN_021eb670(undefined4 *param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  lVar2 = FUN_0265c2a0(*param_1);
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else if ((*(long **)(lVar2 + 0x28) == (long *)0x0) ||
          (puVar3 = (undefined8 *)**(long **)(lVar2 + 0x28), puVar3 == (undefined8 *)0x0)) {
    bVar1 = *(char *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8) + 0x1267a) == '\x02';
  }
  else {
    uVar4 = (**(code **)*puVar3)();
    bVar1 = *(char *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8) + 0x1267a) == '\x02';
    if ((((uVar4 & 1) != 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
       (puVar3 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 8), puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)();
    }
  }
  return bVar1;
}

