
undefined2 FUN_001a6144(void)

{
  uint *puVar1;
  
  if (DAT_04c58c68 != '\0') {
    puVar1 = (uint *)FUN_03876070(DAT_04c58c60);
    if (*puVar1 != 0) {
      return *(undefined2 *)(DAT_04c5e500 + (ulong)*puVar1 * 2);
    }
  }
  return DAT_04c5e508;
}

