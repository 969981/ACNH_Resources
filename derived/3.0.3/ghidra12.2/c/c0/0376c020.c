
/* WARNING: Removing unreachable block (ram,0x0376c064) */

undefined4 FUN_0376c020(long param_1,undefined8 param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (DAT_05574040 != 0) {
    uVar1 = *(ushort *)(param_1 + 8);
    if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) {
      lVar4 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))();
      if (499 < uVar1) {
        return 0;
      }
      if (lVar4 == 0) {
        return 0;
      }
      lVar4 = lVar4 + (ulong)uVar1 * 0x2d48;
      if ((*(long **)(lVar4 + 0x4cca8) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x4cca8), puVar5 == (undefined8 *)0x0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = (**(code **)*puVar5)();
        uVar2 = uVar2 ^ 1;
      }
      uVar3 = FUN_02756d60(*(long *)(lVar4 + 0x4cc90) + *(long *)(lVar4 + 0x4cc88),param_2);
      if ((uVar2 & 1) != 0) {
        return uVar3;
      }
      if (*(long *)(lVar4 + 0x4cca8) == 0) {
        return uVar3;
      }
      puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x4cca8) + 8);
      if (puVar5 == (undefined8 *)0x0) {
        return uVar3;
      }
      (**(code **)*puVar5)();
      return uVar3;
    }
  }
  return 0;
}

