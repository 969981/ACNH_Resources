
bool FUN_03a37d38(long param_1,long param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined *local_98;
  char *pcStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  uint local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined **ppuStack_50;
  
  lVar2 = *(long *)(param_1 + 8);
  if (*(char *)(lVar2 + 0x570) == '\0' || (*(byte *)(param_3 + 0x3c8) & 0x10) == 0) {
    bVar1 = false;
  }
  else {
    local_70 = 0x800001;
    if (((uint)(*(char *)(lVar2 + 0x5b0) != '\0') & (*(byte *)(param_3 + 0x3c8) & 0x40) >> 6) == 0)
    {
      local_70 = 1;
    }
    bVar1 = *(char *)(lVar2 + 0x1100) == '\0';
    if (*(char *)(lVar2 + 0x1100) == '\0') {
      local_70 = local_70 | 0x40;
      local_88 = *(undefined8 *)(param_3 + 1000);
      uStack_80 = 0x10;
      local_58 = 0x300000003;
      pcStack_90 = "Model(ZPrePass)";
    }
    else {
      local_88 = *(undefined8 *)(param_3 + 1000);
      uStack_80 = 0x400040;
      pcStack_90 = "Model(ZPrePass/Selectable)";
      local_58 = 0x300000002;
    }
    local_64 = 1;
    local_6c = 0xf0000ffff;
    local_78 = 2;
    local_98 = PTR_DAT_04bb2020 + 0x10;
    local_5c = 0xffffffff;
    ppuStack_50 = &PTR_LAB_04b6bbc0;
    FUN_039eec04(param_3,param_2,&local_98);
    if ((*(char *)(*(long *)(param_1 + 8) + 0x5b0) != '\0') &&
       ((*(byte *)(param_3 + 0x3c8) >> 6 & 1) != 0)) {
      (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),0x28);
    }
  }
  return bVar1;
}

