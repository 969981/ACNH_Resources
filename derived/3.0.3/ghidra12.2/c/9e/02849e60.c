
undefined8 FUN_02849e60(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 local_28;
  undefined8 local_8;
  
  if (*(char *)(param_1 + 0x2f) == '\x02') {
    local_8 = *(undefined8 *)(param_1 + 0x1c);
    local_28 = *(undefined8 *)(param_1 + 0x24);
    lVar1 = FUN_00a8255c(&local_28,&local_8);
    lVar2 = FUN_00a8255c(*(long *)PTR_DAT_04bb32e8 + 0x4060,&local_8);
    if (lVar1 * 2 <= lVar2) {
      return 1;
    }
  }
  return 0;
}

