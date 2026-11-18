
/* WARNING: Removing unreachable block (ram,0x0376f98c) */

uint FUN_0376f950(ushort param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if ((DAT_05574040 == 0) || (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0)) {
    uVar2 = 0;
  }
  else {
    lVar3 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))();
    uVar2 = 0;
    if ((param_1 < 500) && (lVar3 != 0)) {
      lVar3 = lVar3 + (ulong)param_1 * 0x2d48;
      if ((*(long **)(lVar3 + 0x4cc38) == (long *)0x0) ||
         (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x4cc38), puVar4 == (undefined8 *)0x0)) {
        uVar1 = 1;
      }
      else {
        uVar1 = (**(code **)*puVar4)();
        uVar1 = uVar1 ^ 1;
      }
      uVar2 = FUN_028f41ac(*(long *)(lVar3 + 0x4cc20) + *(long *)(lVar3 + 0x4cc18));
      if ((((uVar1 & 1) == 0) && (*(long *)(lVar3 + 0x4cc38) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x4cc38) + 8), puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)();
      }
    }
  }
  return uVar2 & 1;
}

