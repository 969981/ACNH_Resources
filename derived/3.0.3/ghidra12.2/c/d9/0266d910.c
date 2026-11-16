
undefined1 FUN_0266d910(uint param_1,uint param_2)

{
  char *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  
  if (DAT_05574040 != 0) {
    puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar5 = (**(code **)(*(long *)*puVar6 + 0x38))();
      if (lVar5 == 0) {
        return 0;
      }
      lVar5 = lVar5 + 0x70;
    }
    else {
      if (puVar6 == (undefined8 *)0x0) {
        return 0;
      }
      if ((long *)puVar6[0x26] == (long *)0x0) {
        return 0;
      }
      lVar5 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
      if (lVar5 == 0) {
        return 0;
      }
    }
    if (param_1 < 8) {
      lVar2 = lVar5 + 0x119228 + (ulong)param_1 * 0xfa08;
      if (7 < param_1) {
        lVar2 = lVar5 + 0x119228;
      }
      if ((*(long **)(lVar2 + 0xf9f8) == (long *)0x0) ||
         (puVar6 = (undefined8 *)**(long **)(lVar2 + 0xf9f8), puVar6 == (undefined8 *)0x0)) {
        uVar4 = 1;
      }
      else {
        uVar4 = (**(code **)*puVar6)();
        uVar4 = uVar4 ^ 1;
      }
      lVar5 = *(long *)(lVar2 + 0xf9e0) + *(long *)(lVar2 + 0xf9d8);
      pcVar1 = (char *)(lVar5 + 1 + (ulong)param_2);
      if (5 < param_2) {
        pcVar1 = (char *)(lVar5 + 1);
      }
      if (*pcVar1 == '\0') {
        uVar7 = 0;
      }
      else {
        puVar3 = (undefined1 *)(lVar5 + 7) + param_2;
        if (5 < param_2) {
          puVar3 = (undefined1 *)(lVar5 + 7);
        }
        uVar7 = *puVar3;
      }
      if ((uVar4 & 1) != 0) {
        return uVar7;
      }
      if (*(long *)(lVar2 + 0xf9f8) == 0) {
        return uVar7;
      }
      puVar6 = *(undefined8 **)(*(long *)(lVar2 + 0xf9f8) + 8);
      if (puVar6 == (undefined8 *)0x0) {
        return uVar7;
      }
      (**(code **)*puVar6)();
      return uVar7;
    }
  }
  return 0;
}

