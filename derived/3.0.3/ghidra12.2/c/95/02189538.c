
void FUN_02189538(void)

{
  undefined *puVar1;
  uint *puVar2;
  short sVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined *local_40;
  char *local_38;
  
  puVar5 = PTR_DAT_04bb32f0;
  puVar4 = PTR_DAT_04bb2020;
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 == -1) {
    return;
  }
  puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
  if (0xff < (uint)(int)sVar3) {
    puVar2 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar2 >> 3 & 1) == 0) {
    return;
  }
  if (1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476)) {
    return;
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_38 = "NormalLive";
  local_40 = puVar1;
  iVar6 = FUN_008841f4(*(undefined8 *)PTR_DAT_04bb32f0,&local_40);
  if (iVar6 != 2) {
    local_38 = "BirthdayLive";
    local_40 = puVar1;
    iVar6 = FUN_008841f4(*(undefined8 *)puVar5,&local_40);
    if (iVar6 != 2) goto LAB_0218963c;
  }
  local_40 = puVar4 + 0x10;
  local_38 = "TkkReturn";
  FUN_0273f3c4(&local_40,1);
LAB_0218963c:
  if (*(long *)PTR_DAT_04bb38d0 != 0) {
    FUN_008a6a18();
  }
  return;
}

