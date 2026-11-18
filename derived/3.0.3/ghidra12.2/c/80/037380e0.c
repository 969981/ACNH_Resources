
undefined4 FUN_037380e0(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined4 *puVar3;
  long *plVar4;
  short sVar5;
  long lVar6;
  
  if (DAT_05ab5ea8 != 0) {
    if (((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
        ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (DAT_05ab7608 == 0)) {
      if ((*(ushort *)(DAT_05ab5ea8 + 0x28) >> 7 & 1) != 0) goto LAB_037381e4;
      sVar5 = *(short *)(DAT_05ab5ea8 + 0x2c);
    }
    else {
      lVar6 = *(long *)(DAT_05ab7608 + 0x10);
      if ((*(long **)(lVar6 + 0x11b0) == (long *)0x0) ||
         (puVar1 = (undefined8 *)**(long **)(lVar6 + 0x11b0), puVar1 == (undefined8 *)0x0)) {
        sVar5 = *(short *)(*(long *)(lVar6 + 0x1198) + *(long *)(lVar6 + 0x1190) + 2);
      }
      else {
        uVar2 = (**(code **)*puVar1)();
        sVar5 = *(short *)(*(long *)(lVar6 + 0x1198) + *(long *)(lVar6 + 0x1190) + 2);
        if ((((uVar2 & 1) != 0) && (*(long *)(lVar6 + 0x11b0) != 0)) &&
           (puVar1 = *(undefined8 **)(*(long *)(lVar6 + 0x11b0) + 8), puVar1 != (undefined8 *)0x0))
        {
          (**(code **)*puVar1)();
        }
      }
    }
    if ((sVar5 != -1) && (*(int *)(param_1 + 0xe0) != 0)) {
      lVar6 = (long)*(int *)(param_1 + 0xe0) << 3;
      plVar4 = *(long **)(param_1 + 0xe8);
      do {
        if (sVar5 == *(short *)(*plVar4 + 0x38)) {
          puVar3 = (undefined4 *)(*plVar4 + 8);
          break;
        }
        plVar4 = plVar4 + 1;
        lVar6 = lVar6 + -8;
        puVar3 = (undefined4 *)PTR_DAT_04bb3238;
      } while (lVar6 != 0);
      goto LAB_037381ec;
    }
  }
LAB_037381e4:
  puVar3 = &DAT_04c9a0c8;
LAB_037381ec:
  return *puVar3;
}

