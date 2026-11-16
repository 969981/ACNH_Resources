
uint FUN_02926980(void)

{
  int iVar1;
  uint uVar2;
  undefined *local_20;
  char *pcStack_18;
  
  if ((((*(long **)PTR_DAT_04bb27d0 == (long *)0x0) ||
       (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2)) &&
      ((*(long *)PTR_DAT_04bb39b0 == 0 || (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 0)))) &&
     (iVar1 = FUN_0292e540(*(undefined4 *)PTR_DAT_04bbb0f8), 0xfffffffd < iVar1 - 4U)) {
    local_20 = PTR_DAT_04bb2020 + 0x10;
    pcStack_18 = "HghStayMarket";
    uVar2 = FUN_0273f0a0(&local_20);
  }
  else {
    uVar2 = 0;
  }
  return uVar2 & 1;
}

