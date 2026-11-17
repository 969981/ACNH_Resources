
bool FUN_02a70b90(long param_1,byte *param_2)

{
  int iVar1;
  long lVar2;
  undefined *local_50;
  char *pcStack_48;
  undefined *local_40;
  undefined1 *puStack_38;
  undefined4 local_30;
  byte local_2c;
  undefined1 local_2b;
  undefined8 local_28;
  
  lVar2 = *(long *)(param_1 + 0x48);
  if (lVar2 != 0) {
    pcStack_48 = (char *)FUN_02a70c30();
    local_30 = *(undefined4 *)(lVar2 + 0x230);
    local_2c = *param_2;
    local_2b = 0;
    local_28 = 0;
    local_50 = PTR_DAT_04bb2020 + 0x10;
    if (7 < local_2c) {
      local_2c = 0xff;
    }
    puStack_38 = &DAT_04066c7f;
    if (*pcStack_48 != '\0') {
      local_40 = local_50;
      iVar1 = FUN_01180950(*(undefined8 *)PTR_DAT_04bb3240,&local_50,0);
      return iVar1 == 2;
    }
  }
  return false;
}

