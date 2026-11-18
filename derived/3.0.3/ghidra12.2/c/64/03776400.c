
/* WARNING: Removing unreachable block (ram,0x03776478) */
/* WARNING: Removing unreachable block (ram,0x037765b0) */

long FUN_03776400(uint param_1)

{
  char *pcVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if ((param_1 != 5) && (param_1 != 6)) {
    if ((DAT_05ab8198 != (ushort *)0x0) && ((*DAT_05ab8198 & 1) != 0)) {
      return *(long *)(DAT_05ab7608 + 0x30);
    }
    if (((DAT_05574040 != 0) && (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0)) &&
       (lVar4 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))(),
       lVar4 != 0)) {
      if ((*(long **)(lVar4 + 0x36620) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x36620), puVar5 == (undefined8 *)0x0)) {
        uVar3 = 1;
      }
      else {
        uVar3 = (**(code **)*puVar5)();
        uVar3 = uVar3 ^ 1;
      }
      pcVar1 = (char *)(*(long *)(lVar4 + 0x36608) + *(long *)(lVar4 + 0x36600));
      if (((*pcVar1 == '\x02') && (DAT_05ab5ea8 != 0)) &&
         ((*(int *)(DAT_05ab5ea8 + 0x14) != 0 &&
          ((((DAT_05ab8198 == (ushort *)0x0 || ((*DAT_05ab8198 & 1) == 0)) && (param_1 != 5)) &&
           (param_1 != 6)))))) {
        bVar2 = param_1 == *(ushort *)(pcVar1 + 0x899c);
      }
      else {
        bVar2 = false;
      }
      if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x36620) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x36620) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
      if (bVar2) {
        return lVar4 + 0x37cb8;
      }
    }
    if (((param_1 != 5) && (DAT_05574040 != 0)) &&
       (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0)) {
      lVar4 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))();
      if (lVar4 == 0) {
        return 0;
      }
      switch(param_1) {
      case 0:
        return lVar4 + 0x390a0;
      case 1:
        return lVar4 + 0x3a488;
      case 2:
        return lVar4 + 0x3b870;
      case 3:
        return lVar4 + 0x3cc58;
      case 4:
        return lVar4 + 0x3e040;
      }
    }
  }
  return 0;
}

