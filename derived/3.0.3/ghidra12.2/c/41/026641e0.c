
int FUN_026641e0(uint param_1,uint param_2)

{
  char *pcVar1;
  long lVar2;
  char *pcVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar7;
  
  if (DAT_05574040 != 0) {
    puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar5 = (**(code **)(*(long *)*puVar6 + 0x38))();
      if (lVar5 == 0) {
        return -1;
      }
      lVar5 = lVar5 + 0x70;
    }
    else {
      if (puVar6 == (undefined8 *)0x0) {
        return -1;
      }
      if ((long *)puVar6[0x26] == (long *)0x0) {
        return -1;
      }
      lVar5 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
      if (lVar5 == 0) {
        return -1;
      }
    }
    if (param_1 < 10) {
      lVar2 = lVar5 + 0x1962d8 + (ulong)param_1 * 0x10d8;
      if (9 < param_1) {
        lVar2 = lVar5 + 0x1962d8;
      }
      if ((*(long **)(lVar2 + 0x28) == (long *)0x0) ||
         (puVar6 = (undefined8 *)**(long **)(lVar2 + 0x28), puVar6 == (undefined8 *)0x0)) {
        uVar4 = 1;
      }
      else {
        uVar4 = (**(code **)*puVar6)();
        uVar4 = uVar4 ^ 1;
      }
      pcVar1 = (char *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8) + 0x1c4);
      pcVar3 = pcVar1 + param_2;
      if (1 < param_2) {
        pcVar3 = pcVar1;
      }
      iVar7 = (int)*pcVar3;
      if ((uVar4 & 1) != 0) {
        return iVar7;
      }
      if (*(long *)(lVar2 + 0x28) == 0) {
        return iVar7;
      }
      puVar6 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 8);
      if (puVar6 == (undefined8 *)0x0) {
        return iVar7;
      }
      (**(code **)*puVar6)();
      return iVar7;
    }
  }
  return -1;
}

