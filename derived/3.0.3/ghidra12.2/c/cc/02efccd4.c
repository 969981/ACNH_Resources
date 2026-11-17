
bool FUN_02efccd4(undefined8 param_1)

{
  uint *puVar1;
  short sVar2;
  int iVar3;
  undefined *local_20;
  char *pcStack_18;
  
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 & 1) != 0) {
      return false;
    }
  }
  local_20 = PTR_DAT_04bb2020 + 0x10;
  pcStack_18 = "ItemRingEnable";
  iVar3 = FUN_0274bce0(param_1,&local_20);
  return iVar3 != 0;
}

