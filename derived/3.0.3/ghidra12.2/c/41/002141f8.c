
undefined8 FUN_002141f8(long param_1,short param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (((*(char *)(param_1 + 0x18) != '\0') || (lVar2 = *(long *)(param_1 + 0x10), lVar2 == 0)) ||
     (param_2 == 0)) {
    return 0;
  }
  puVar1 = (undefined8 *)(lVar2 + 0x88);
  if (param_2 == 10) {
    puVar1 = (undefined8 *)(lVar2 + 0x80);
  }
  return *puVar1;
}

