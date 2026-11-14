
byte FUN_016cecbc(void)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  iVar3 = FUN_0252d29c();
  if (DAT_05574040 != 0) {
    puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar5 = (**(code **)(*(long *)*puVar6 + 0x38))();
      if (lVar5 != 0) {
        lVar5 = lVar5 + (long)iVar3 * 0xcb0;
        lVar1 = lVar5 + 0x211c90;
        plVar7 = *(long **)(lVar5 + 0x211cb8);
joined_r0x016ced4c:
        if ((plVar7 == (long *)0x0) || ((undefined8 *)*plVar7 == (undefined8 *)0x0)) {
          uVar4 = 1;
        }
        else {
          uVar4 = (*(code *)**(undefined8 **)*plVar7)();
          uVar4 = uVar4 ^ 1;
        }
        bVar2 = *(byte *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x1590) & 1;
        if ((uVar4 & 1) != 0) {
          return bVar2;
        }
        if (*(long *)(lVar1 + 0x28) == 0) {
          return bVar2;
        }
        puVar6 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 8);
        if (puVar6 == (undefined8 *)0x0) {
          return bVar2;
        }
        (**(code **)*puVar6)();
        return bVar2;
      }
    }
    else if (((puVar6 != (undefined8 *)0x0) && ((long *)puVar6[0x26] != (long *)0x0)) &&
            (lVar5 = (**(code **)(*(long *)puVar6[0x26] + 0x38))(), lVar5 != 0)) {
      lVar5 = lVar5 + (long)iVar3 * 0xcb0;
      lVar1 = lVar5 + 0x211c20;
      plVar7 = *(long **)(lVar5 + 0x211c48);
      goto joined_r0x016ced4c;
    }
  }
  return 0;
}

