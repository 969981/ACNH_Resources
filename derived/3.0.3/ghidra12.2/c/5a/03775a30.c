
/* WARNING: Removing unreachable block (ram,0x03775aac) */

long FUN_03775a30(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  
  if (((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) || ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)
      ) || (*(long *)(DAT_05ab7608 + 8) == 0)) {
    if (((DAT_05574040 != 0) && (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0)) &&
       (lVar2 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))(),
       lVar2 != 0)) {
      if ((*(long **)(lVar2 + 0x36620) == (long *)0x0) ||
         (puVar3 = (undefined8 *)**(long **)(lVar2 + 0x36620), puVar3 == (undefined8 *)0x0)) {
        uVar1 = 1;
      }
      else {
        uVar1 = (**(code **)*puVar3)();
        uVar1 = uVar1 ^ 1;
      }
      uVar4 = FUN_029066e0(*(long *)(lVar2 + 0x36608) + *(long *)(lVar2 + 0x36600),param_1);
      if ((((uVar1 & 1) == 0) && (*(long *)(lVar2 + 0x36620) != 0)) &&
         (puVar3 = *(undefined8 **)(*(long *)(lVar2 + 0x36620) + 8), puVar3 != (undefined8 *)0x0)) {
        (**(code **)*puVar3)();
      }
      if ((uVar4 & 1) != 0) {
        return lVar2 + 0x36668;
      }
    }
    lVar5 = FUN_03762b90(param_1);
    lVar2 = 0;
    if (lVar5 != 0) {
      lVar2 = lVar5 + 0x1768;
    }
  }
  else {
    lVar2 = *(long *)(DAT_05ab7608 + 8) + 0x1768;
  }
  return lVar2;
}

