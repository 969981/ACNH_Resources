
bool FUN_02683390(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  if (DAT_04ca9180 != 0) {
    lVar2 = *(long *)(DAT_04ca9180 + 0x140);
    lVar3 = *(long *)(DAT_04ca9180 + 0x148);
    if ((lVar2 != 0 || lVar3 != 0) && (DAT_05574040 != 0)) {
      puVar7 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar6 = (**(code **)(*(long *)*puVar7 + 0x38))();
        if (lVar6 != 0) {
          lVar6 = lVar6 + 0x70;
LAB_02683428:
          if ((*(long **)(lVar6 + 0x28) == (long *)0x0) ||
             (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x28), puVar7 == (undefined8 *)0x0)) {
            uVar5 = 1;
          }
          else {
            uVar5 = (**(code **)*puVar7)();
            uVar5 = uVar5 ^ 1;
          }
          lVar1 = *(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8);
          if ((((lVar2 == *(long *)(lVar1 + 0x1e33b0) && lVar3 == *(long *)(lVar1 + 0x1e33b8)) ||
               (lVar2 == *(long *)(lVar1 + 0x1e33f8) && lVar3 == *(long *)(lVar1 + 0x1e3400))) ||
              ((lVar2 == *(long *)(lVar1 + 0x1e3440) && lVar3 == *(long *)(lVar1 + 0x1e3448) ||
               (((lVar2 == *(long *)(lVar1 + 0x1e3488) && lVar3 == *(long *)(lVar1 + 0x1e3490) ||
                 (lVar2 == *(long *)(lVar1 + 0x1e34d0) && lVar3 == *(long *)(lVar1 + 0x1e34d8))) ||
                (lVar2 == *(long *)(lVar1 + 0x1e3518) && lVar3 == *(long *)(lVar1 + 0x1e3520)))))))
             || (lVar2 == *(long *)(lVar1 + 0x1e3560) && lVar3 == *(long *)(lVar1 + 0x1e3568))) {
            bVar4 = true;
          }
          else {
            bVar4 = lVar2 == *(long *)(lVar1 + 0x1e35a8) && lVar3 == *(long *)(lVar1 + 0x1e35b0);
          }
          if ((uVar5 & 1) != 0) {
            return bVar4;
          }
          if (*(long *)(lVar6 + 0x28) == 0) {
            return bVar4;
          }
          puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 8);
          if (puVar7 == (undefined8 *)0x0) {
            return bVar4;
          }
          (**(code **)*puVar7)();
          return bVar4;
        }
      }
      else if (((puVar7 != (undefined8 *)0x0) && ((long *)puVar7[0x26] != (long *)0x0)) &&
              (lVar6 = (**(code **)(*(long *)puVar7[0x26] + 0x38))(), lVar6 != 0))
      goto LAB_02683428;
    }
  }
  return false;
}

