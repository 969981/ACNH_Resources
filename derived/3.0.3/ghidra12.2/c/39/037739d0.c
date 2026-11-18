
/* WARNING: Removing unreachable block (ram,0x03773a0c) */

uint FUN_037739d0(uint param_1)

{
  char *pcVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  uint unaff_w19;
  
  uVar2 = 0;
  if (DAT_05574040 != 0) {
    if ((((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) &&
       (lVar3 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))(),
       unaff_w19 = param_1, lVar3 != 0)) {
      if ((*(long **)(lVar3 + 0x36620) == (long *)0x0) ||
         (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x36620), puVar4 == (undefined8 *)0x0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = (**(code **)*puVar4)();
        uVar2 = uVar2 ^ 1;
      }
      pcVar1 = (char *)(*(long *)(lVar3 + 0x36608) + *(long *)(lVar3 + 0x36600));
      if (((((*pcVar1 == '\x02') && (DAT_05ab5ea8 != 0)) && (*(int *)(DAT_05ab5ea8 + 0x14) != 0)) &&
          ((DAT_05ab8198 == (ushort *)0x0 || ((*DAT_05ab8198 & 1) == 0)))) &&
         ((param_1 != 5 && (param_1 != 6)))) {
        unaff_w19 = (uint)(param_1 == *(ushort *)(pcVar1 + 0x899c));
      }
      else {
        unaff_w19 = 0;
      }
      if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0x36620) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x36620) + 8), puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)();
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2 & unaff_w19;
}

