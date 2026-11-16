
uint FUN_028d560c(void)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined *local_30;
  char *pcStack_28;
  undefined8 local_8;
  
  lVar4 = *(long *)PTR_DAT_04bb27d0;
  if (((lVar4 == 0) || (*(long *)(lVar4 + 0x28) == 0)) || (*(int *)(lVar4 + 0x80) != 1)) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "PynVisitToday";
    local_30 = puVar1;
    iVar2 = FUN_0273ea30(&local_30);
    uVar3 = 0;
    if (iVar2 != 0) {
      pcStack_28 = "pyn";
      local_8 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      local_30 = puVar1;
      uVar3 = FUN_028d4a98(&local_8,&local_30);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}

