
void FUN_00716ba8(long param_1)

{
  long lVar1;
  undefined8 local_8;
  
  local_8 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  if ((*(char *)(param_1 + 0x96e) != '\0') &&
     (lVar1 = FUN_00a8255c(&local_8,param_1 + 0x95e), 5 < lVar1)) {
    *(undefined1 *)(param_1 + 0x96e) = 0;
  }
  if ((*(char *)(param_1 + 0x96f) != '\0') &&
     (lVar1 = FUN_00a8255c(&local_8,param_1 + 0x966), 5 < lVar1)) {
    *(undefined1 *)(param_1 + 0x96f) = 0;
  }
  return;
}

