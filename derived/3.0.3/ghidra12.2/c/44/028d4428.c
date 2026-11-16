
bool FUN_028d4428(void)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  if (DAT_05574040 != 0) {
    puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar5 = (**(code **)(*(long *)*puVar6 + 0x38))();
      lVar7 = 0;
      if (lVar5 != 0) {
        lVar7 = lVar5 + 0x70;
      }
      goto LAB_028d4494;
    }
    if (puVar6 != (undefined8 *)0x0) {
      lVar7 = 0;
      if ((long *)puVar6[0x26] != (long *)0x0) {
        lVar7 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
      }
      goto LAB_028d4494;
    }
  }
  lVar7 = 0;
LAB_028d4494:
  if ((*(long **)(lVar7 + 0x1a0b70) == (long *)0x0) ||
     (puVar6 = (undefined8 *)**(long **)(lVar7 + 0x1a0b70), puVar6 == (undefined8 *)0x0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = (**(code **)*puVar6)();
    uVar3 = uVar3 ^ 1;
  }
  uVar1 = *(uint *)(*(long *)(lVar7 + 0x1a0b58) + *(long *)(lVar7 + 0x1a0b50));
  if (3 < uVar1) {
    uVar1 = 0;
  }
  if ((((uVar3 & 1) == 0) && (*(long *)(lVar7 + 0x1a0b70) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar7 + 0x1a0b70) + 8), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  if ((int)uVar1 < 2) {
    bVar2 = false;
  }
  else {
    lVar7 = *(long *)PTR_DAT_04bb32e8;
    iVar4 = nn::time::GetDayOfWeek
                      ((int)*(short *)(lVar7 + 0x4060),(int)*(char *)(lVar7 + 0x4062),
                       (int)*(char *)(lVar7 + 0x4063));
    bVar2 = iVar4 == 0;
  }
  return bVar2;
}

