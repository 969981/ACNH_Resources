
long FUN_001545dc(long param_1)

{
  size_t sVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  
  if (*(int *)(param_1 + 0x18) == 4) {
    lVar5 = *(long *)(param_1 + 0x40);
    lVar3 = 0;
    if (lVar5 != 0) {
      sVar1 = strlen((char *)(lVar5 + 0x20));
      lVar6 = *(long *)(lVar5 + 0x10);
      lVar5 = sVar1 + 6;
      lVar3 = lVar5;
      if (lVar6 != 0) {
        do {
          lVar2 = FUN_001545dc(lVar6);
          lVar6 = *(long *)(lVar6 + 0x10);
          lVar4 = lVar2;
          if (-1 < lVar2) {
            lVar4 = lVar3;
          }
          lVar3 = 0;
          if (-1 < lVar4) {
            lVar3 = lVar2 + lVar5;
          }
          lVar3 = lVar3 + lVar4;
        } while (lVar6 != 0);
      }
    }
    *(long *)(param_1 + 0x78) = lVar3;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x78);
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    lVar3 = (**(code **)(*(long *)(param_1 + 0xa0) + 0x10))(param_1);
  }
  if ((-1 < lVar3) && ((*(byte *)(param_1 + 0x80) >> 1 & 1) == 0)) {
    puVar7 = *(undefined8 **)(param_1 + 0x50);
    if (puVar7 == (undefined8 *)0x0) {
      lVar5 = 0;
    }
    else {
      lVar5 = 0;
      do {
        sVar1 = strlen((char *)*puVar7);
        puVar7 = (undefined8 *)puVar7[1];
        lVar5 = lVar5 + sVar1 + 2;
      } while (puVar7 != (undefined8 *)0x0);
    }
    puVar7 = *(undefined8 **)(param_1 + 0x58);
    if (puVar7 == (undefined8 *)0x0) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      do {
        lVar4 = FUN_00154d1c(puVar7,"Content-Type",0xc);
        if (lVar4 == 0) {
          sVar1 = strlen((char *)*puVar7);
          lVar6 = lVar6 + sVar1 + 2;
        }
        puVar7 = (undefined8 *)puVar7[1];
      } while (puVar7 != (undefined8 *)0x0);
    }
    lVar3 = lVar3 + lVar5 + lVar6 + 2;
  }
  return lVar3;
}

