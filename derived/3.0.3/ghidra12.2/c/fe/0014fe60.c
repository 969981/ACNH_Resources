
undefined8 * FUN_0014fe60(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  
  puVar2 = (undefined8 *)PTR_PTR_04bcb6c0;
  ppuVar3 = &PTR_PTR_04836398;
  do {
    iVar1 = FUN_00144a90(*puVar2,param_1);
    if (iVar1 != 0) {
      return puVar2;
    }
    puVar2 = (undefined8 *)*ppuVar3;
    ppuVar3 = ppuVar3 + 1;
  } while (puVar2 != (undefined8 *)0x0);
  return (undefined8 *)0x0;
}

