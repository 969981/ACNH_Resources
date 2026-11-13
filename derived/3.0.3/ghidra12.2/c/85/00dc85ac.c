
undefined8 FUN_00dc85ac(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  
  if ((*(long *)PTR_DAT_04bb2720 == 0) ||
     (lVar2 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330), lVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(lVar2 + 0xd0);
  }
  if (DAT_055b3cb0 != 0) {
    FUN_028c1800(DAT_055b3cb0,uVar1);
  }
  if (DAT_0557e208 != 0) {
    if (DAT_055b3cb0 == 0) {
      uVar3 = 5;
    }
    else {
      uVar3 = *(undefined4 *)(DAT_055b3cb0 + 0x180);
    }
    *(undefined4 *)(DAT_0557e208 + 4) = uVar3;
  }
  *(undefined1 *)(param_1 + 0xd8) = 1;
  return 1;
}

