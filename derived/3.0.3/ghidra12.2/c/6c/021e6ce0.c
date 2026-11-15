
bool FUN_021e6ce0(void)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  undefined *local_30;
  char *pcStack_28;
  
  puVar1 = PTR_DAT_04bb32f0;
  uVar3 = FUN_00883550(*(undefined8 *)PTR_DAT_04bb32f0);
  if ((uVar3 < 2) || (uVar3 = FUN_00883068(*(undefined8 *)puVar1), uVar3 < 2)) {
    bVar2 = true;
  }
  else {
    local_30 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "Easter";
    uVar3 = FUN_008841f4(*(undefined8 *)puVar1,&local_30);
    bVar2 = uVar3 < 2;
  }
  return bVar2;
}

