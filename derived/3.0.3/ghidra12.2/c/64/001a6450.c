
void FUN_001a6450(undefined2 param_1)

{
  uint *puVar1;
  
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar1 = (uint *)FUN_03876070(DAT_04c58c60);
    if (*puVar1 != 0) {
      *(undefined2 *)(DAT_04c5e500 + (ulong)*puVar1 * 2) = param_1;
      return;
    }
  }
  DAT_04c5e508 = param_1;
  return;
}

