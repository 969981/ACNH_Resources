
void FUN_0284b6d8(long param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  
  bVar1 = *(byte *)(param_1 + 0x36);
  if ((bVar1 & 1) != 0) {
    return;
  }
  if ((bVar1 >> 2 & 1) != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x35) == '\x01') {
    return;
  }
  if (*(char *)(param_1 + 0x2f) != '\x02') {
    if (*(char *)(param_1 + 0x2f) != '\x03') {
      return;
    }
    if ((bVar1 >> 1 & 1) == 0) {
      return;
    }
  }
  cVar2 = *(char *)(param_1 + 0x2c);
  lVar5 = FUN_0265c2a0((int)cVar2);
  if (lVar5 != 0) {
    if ((*(long **)(lVar5 + 0x28) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x28), puVar6 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar6)();
      uVar3 = uVar3 ^ 1;
    }
    iVar4 = FUN_026b318c(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8),param_1);
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar5 + 0x28) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x28) + 8), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
    if (-1 < iVar4) {
      FUN_021d7650((int)cVar2,iVar4,0xfffffffb,1);
      return;
    }
  }
  return;
}

