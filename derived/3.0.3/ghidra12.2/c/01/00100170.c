
void _fini(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  FUN_00100260(&__DT_FINI_ARRAY,0,DAT_04c57a00);
  puVar1 = PTR___DT_FINI_ARRAY_04bb1e48;
  if (PTR___DT_FINI_ARRAY_04bb1e48 < PTR___DT_FINI_ARRAY_04bb1e50) {
    puVar2 = (undefined8 *)PTR___DT_FINI_ARRAY_04bb1e50;
    do {
      puVar2 = puVar2 + -1;
      (*(code *)*puVar2)();
    } while (puVar1 < puVar2);
  }
  return;
}

