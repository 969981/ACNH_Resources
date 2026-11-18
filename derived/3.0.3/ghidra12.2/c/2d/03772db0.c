
byte FUN_03772db0(void)

{
  long lVar1;
  byte bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  short sVar5;
  long lVar6;
  
  lVar1 = DAT_05ab5ea8;
  bVar2 = 0xa8;
  if (DAT_05ab5ea8 != 0) {
    if ((((DAT_05ab8198 == (ushort *)0x0) || ((*DAT_05ab8198 & 1) == 0)) || (DAT_05ab7608 == 0)) ||
       (lVar6 = *(long *)(DAT_05ab7608 + 8), lVar6 == 0)) {
      sVar5 = *(short *)(DAT_05ab5ea8 + 0x2a);
    }
    else if ((*(long **)(lVar6 + 0x60) == (long *)0x0) ||
            (puVar3 = (undefined8 *)**(long **)(lVar6 + 0x60), puVar3 == (undefined8 *)0x0)) {
      sVar5 = *(short *)(*(long *)(lVar6 + 0x48) + *(long *)(lVar6 + 0x40) + 2);
    }
    else {
      uVar4 = (**(code **)*puVar3)();
      sVar5 = *(short *)(*(long *)(lVar6 + 0x48) + *(long *)(lVar6 + 0x40) + 2);
      if ((((uVar4 & 1) != 0) && (*(long *)(lVar6 + 0x60) != 0)) &&
         (puVar3 = *(undefined8 **)(*(long *)(lVar6 + 0x60) + 8), puVar3 != (undefined8 *)0x0)) {
        (**(code **)*puVar3)();
      }
    }
    if (sVar5 == -1) {
      bVar2 = 0;
    }
    else {
      if (((DAT_05ab8198 == (ushort *)0x0) || ((*DAT_05ab8198 & 1) == 0)) || (DAT_05ab7608 == 0)) {
        sVar5 = *(short *)(lVar1 + 0x2c);
        if ((*(ushort *)(lVar1 + 0x28) & 0x80) != 0) {
          sVar5 = -1;
        }
      }
      else {
        lVar6 = *(long *)(DAT_05ab7608 + 0x10);
        if ((*(long **)(lVar6 + 0x11b0) == (long *)0x0) ||
           (puVar3 = (undefined8 *)**(long **)(lVar6 + 0x11b0), puVar3 == (undefined8 *)0x0)) {
          sVar5 = *(short *)(*(long *)(lVar6 + 0x1198) + *(long *)(lVar6 + 0x1190) + 2);
        }
        else {
          uVar4 = (**(code **)*puVar3)();
          sVar5 = *(short *)(*(long *)(lVar6 + 0x1198) + *(long *)(lVar6 + 0x1190) + 2);
          if ((((uVar4 & 1) != 0) && (*(long *)(lVar6 + 0x11b0) != 0)) &&
             (puVar3 = *(undefined8 **)(*(long *)(lVar6 + 0x11b0) + 8), puVar3 != (undefined8 *)0x0)
             ) {
            (**(code **)*puVar3)();
          }
        }
      }
      bVar2 = sVar5 != -1;
    }
  }
  return lVar1 != 0 & bVar2;
}

