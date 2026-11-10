
undefined8 FUN_00144008(void)

{
  undefined8 uVar1;
  
  if ((DAT_04c57b98 & 1) == 0) {
    DAT_04c57b98 = 1;
    uVar1 = (**(code **)(*(long *)PTR_PTR_04bcb710 + 0x20))();
    return uVar1;
  }
  return 1;
}

