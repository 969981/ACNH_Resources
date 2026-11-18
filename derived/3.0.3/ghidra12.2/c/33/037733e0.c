
/* WARNING: Removing unreachable block (ram,0x0377345c) */

undefined8 FUN_037733e0(uint *param_1)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (DAT_05ab5ea8 == 0) {
    return 0;
  }
  if (((*(int *)(DAT_05ab5ea8 + 0x14) == 0) ||
      (((DAT_05ab8198 != (ushort *)0x0 && ((*DAT_05ab8198 & 1) != 0)) ||
       (*(int *)(DAT_05ab5ea8 + 0x18) == 3)))) &&
     ((DAT_05574040 != 0 && (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0)))) {
    lVar3 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))();
    if (lVar3 == 0) {
      return 0;
    }
    if ((*(long **)(lVar3 + 0x36620) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x36620), puVar4 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar4)();
      uVar2 = uVar2 ^ 1;
    }
    cVar1 = *(char *)(*(long *)(lVar3 + 0x36608) + *(long *)(lVar3 + 0x36600));
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0x36620) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x36620) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
    if (cVar1 == '\x02') {
      if ((*(long **)(lVar3 + 0x37ca8) == (long *)0x0) ||
         (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x37ca8), puVar4 == (undefined8 *)0x0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = (**(code **)*puVar4)();
        uVar2 = uVar2 ^ 1;
      }
      *param_1 = (uint)*(ushort *)(*(long *)(lVar3 + 0x37c90) + *(long *)(lVar3 + 0x37c88) + 0x408c)
      ;
      if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0x37ca8) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x37ca8) + 8), puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)();
      }
      return 1;
    }
  }
  return 0;
}

