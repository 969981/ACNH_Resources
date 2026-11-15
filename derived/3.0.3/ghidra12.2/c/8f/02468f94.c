
void FUN_02468f94(long param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *local_50;
  char *pcStack_48;
  undefined4 local_24;
  
  FUN_024690c8();
  puVar2 = PTR_DAT_04bb2020;
  lVar1 = param_1 + 0x1ee8;
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "IsOnPlayerMemoriesDivingFirst";
  iVar3 = FUN_0274bce0(lVar1,&local_50);
  if (iVar3 == 0 && *(int *)(param_1 + 0x178) == 0) {
    lVar4 = *(long *)(*(long *)PTR_DAT_04bb27d0 + 0x10);
    if (((lVar4 == 0) || ((*(uint *)(*(long *)PTR_DAT_04bb27d0 + 0x80) & 0xfffffffe) != 2)) ||
       (*(int *)(lVar4 + 0x3e4) == 1)) {
      pcStack_48 = "PE_DivingFirst";
      if (*(long *)(param_1 + 0x298) == 0) {
        puVar5 = PTR_DAT_04bb37e0;
      }
      else {
        lVar4 = *(long *)(*(long *)(param_1 + 0x298) + 0xbde8);
        puVar5 = (undefined *)(lVar4 + ((ulong)*(uint *)(lVar4 + 0x10) & 1) * 0x20 + 0x14);
      }
      uVar6 = *(undefined8 *)PTR_DAT_04bb49a0;
      local_50 = puVar2 + 0x10;
      local_24 = FUN_006bd550("PE_DivingFirst",0);
      uVar6 = FUN_01b5b4b0(uVar6,&local_24);
      FUN_01b5e0b0(&local_50,puVar5,uVar6,lVar1,0);
      pcStack_48 = "IsOnPlayerMemoriesDivingFirst";
      local_50 = puVar2 + 0x10;
      FUN_0274bfe8(lVar1,&local_50,1);
    }
  }
  return;
}

