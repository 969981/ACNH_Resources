
/* WARNING: Removing unreachable block (ram,0x00cf7d44) */

undefined8 FUN_00cf7cbc(void)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (DAT_05ab5ea8 == 0) {
    return 0;
  }
  if (((*(int *)(DAT_05ab5ea8 + 0x14) == 0) ||
      ((DAT_05ab8198 != (ushort *)0x0 && ((*DAT_05ab8198 & 1) != 0)))) &&
     (*(int *)(DAT_05ab5ea8 + 0x14) != 7)) {
    if (((DAT_05574040 != 0) && (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0)) &&
       (lVar4 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))(),
       lVar4 != 0)) {
      if ((*(long **)(lVar4 + 0x36620) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x36620), puVar5 == (undefined8 *)0x0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = (**(code **)*puVar5)();
        uVar2 = uVar2 ^ 1;
      }
      cVar1 = *(char *)(*(long *)(lVar4 + 0x36608) + *(long *)(lVar4 + 0x36600));
      if ((((uVar2 & 1) == 0) && (*(long *)(lVar4 + 0x36620) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x36620) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
      if (cVar1 != '\0') goto LAB_00cf7d08;
    }
    uVar3 = 1;
  }
  else {
LAB_00cf7d08:
    uVar3 = 0;
  }
  return uVar3;
}

