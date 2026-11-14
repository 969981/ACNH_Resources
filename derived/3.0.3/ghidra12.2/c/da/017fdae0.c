
byte FUN_017fdae0(uint param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  
  uVar2 = FUN_01810f30();
  if ((((uVar2 & 1) == 0) || (DAT_05574040 == 0)) || (lVar3 = FUN_026f480c(), lVar3 == 0)) {
    return 0;
  }
  if ((*(long **)(lVar3 + 0x103d0) == (long *)0x0) ||
     (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x103d0), puVar4 == (undefined8 *)0x0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = (**(code **)*puVar4)();
    uVar1 = uVar1 ^ 1;
  }
  if (param_1 < 0x30) {
    bVar5 = *(byte *)(*(long *)(lVar3 + 0x103b8) + *(long *)(lVar3 + 0x103b0) +
                      (ulong)(param_1 >> 3) + 0x18) >> (ulong)(param_1 & 7) & 1;
  }
  else {
    bVar5 = 0;
  }
  if ((((uVar1 & 1) == 0) && (*(long *)(lVar3 + 0x103d0) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x103d0) + 8), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return bVar5;
}

