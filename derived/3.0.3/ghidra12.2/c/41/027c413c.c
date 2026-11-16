
undefined8 FUN_027c413c(void)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  if (((((DAT_0556aa70 == 0) || (iVar1 = *(int *)(DAT_0556aa70 + 0x10), iVar1 == 0)) || (iVar1 == 3)
       ) || (((iVar1 == 9 || (iVar1 == 0x11)) ||
             ((iVar1 == 0x15 || ((iVar1 == 0x18 || (iVar1 == 0x1d)))))))) && (DAT_05574040 != 0)) {
    puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar4 = (**(code **)(*(long *)*puVar6 + 0x38))();
      if (lVar4 == 0) {
        return 1;
      }
      lVar4 = lVar4 + 0x70;
    }
    else {
      if (puVar6 == (undefined8 *)0x0) {
        return 1;
      }
      if ((long *)puVar6[0x26] == (long *)0x0) {
        return 1;
      }
      lVar4 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
      if (lVar4 == 0) {
        return 1;
      }
    }
    lVar2 = DAT_05574040;
    if (DAT_05574040 != 0) {
      if ((*(long **)(lVar4 + 0x28) == (long *)0x0) ||
         (puVar6 = (undefined8 *)**(long **)(lVar4 + 0x28), puVar6 == (undefined8 *)0x0)) {
        uVar3 = 1;
      }
      else {
        uVar3 = (**(code **)*puVar6)();
        uVar3 = uVar3 ^ 1;
      }
      nn::os::GetSystemTick();
      uVar5 = FUN_028bdcc0();
      if ((((uVar5 & 1) != 0) && (DAT_05554928 != 0)) && (DAT_04ccc690 != 0)) {
        if ((*(ulong *)(DAT_05554928 + 0xb8) & 1) != 0) {
          FUN_008122f0();
        }
        FUN_026cb020();
        FUN_028bdff0();
        nn::os::GetSystemTick();
      }
      FUN_026f52ac(lVar2);
      FUN_026f64f0(lVar2);
      FUN_026f5394(lVar2);
      if (((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x28) != 0)) {
        puVar6 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 8);
        if (puVar6 == (undefined8 *)0x0) {
          return 0;
        }
        (**(code **)*puVar6)();
      }
      return 0;
    }
  }
  return 1;
}

