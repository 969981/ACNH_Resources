
void FUN_014cc640(void)

{
  long lVar1;
  
  lVar1 = *(long *)PTR_DAT_04bb4908;
  *(undefined1 *)(*(long *)(*(long *)PTR_DAT_04bb48f8 + 0x10) + 0x24) = 1;
  if (*(int *)(lVar1 + 0x10) == 0) {
    return;
  }
  *(undefined8 *)(lVar1 + 0x58) = 0;
  *(undefined1 *)(lVar1 + 0x99) = 0;
  *(undefined4 *)(lVar1 + 0x9c) = 3;
  FUN_03ebb160(lVar1 + 8,0);
  return;
}

