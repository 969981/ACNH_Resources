
undefined8 FUN_00dc8abc(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_DAT_04bb89b8;
  if (*(long *)PTR_DAT_04bb89b8 != 0) {
    FUN_028c29b0();
  }
  if (DAT_0557e208 != 0) {
    if (*(long *)puVar1 == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = *(undefined4 *)(*(long *)puVar1 + 0x184);
    }
    *(undefined4 *)(DAT_0557e208 + 8) = uVar2;
  }
  *(undefined1 *)(param_1 + 0xd8) = 1;
  return 1;
}

