
undefined * FUN_001a7560(uint param_1)

{
  undefined *puVar1;
  uint *puVar2;
  
  puVar1 = PTR_DAT_04bcbb78;
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar2 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    if (*puVar2 != 0) {
      return (undefined *)
             (*(long *)(puVar1 + (ulong)param_1 * 0x2a8 + 0x10) + (ulong)*puVar2 * 0x148);
    }
  }
  return puVar1 + (ulong)param_1 * 0x2a8 + 0x18;
}

