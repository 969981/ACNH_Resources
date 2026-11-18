
ulong FUN_033fa420(void)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  uint extraout_w9;
  uint uVar6;
  undefined8 *puVar7;
  undefined *local_30;
  char *pcStack_28;
  
  if (*(long *)PTR_DAT_04bb59d8 == 0) {
    return 0;
  }
  lVar5 = *(long *)PTR_DAT_04bb2720;
  if (lVar5 == 0) {
    puVar7 = &DAT_055c04a0;
  }
  else {
    puVar7 = &DAT_055c04a0;
    if (*(long *)(lVar5 + 0x330) != 0) {
      puVar7 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar5 + 0x338));
      iVar2 = FUN_006bd550(*puVar7,0);
      puVar7 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar2 != 0x758f7eaf) {
        puVar7 = &DAT_055c04a0;
      }
    }
  }
  puVar1 = PTR_DAT_04bc3a48;
  if ((*(int *)(puVar7 + 7) == -0x17df00c3) &&
     ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0 || ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)))
     ) {
    local_30 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "Unlock_Insect";
    uVar3 = FUN_02758850(&local_30);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    if ((*(ushort **)puVar1 == (ushort *)0x0) || ((**(ushort **)puVar1 & 1) == 0)) {
      lVar5 = *(long *)PTR_DAT_04bb27f8;
      if (lVar5 == 0) {
        uVar4 = 0;
        uVar6 = extraout_w9;
      }
      else if (*(int *)(lVar5 + 0x14) == 4) {
        uVar4 = 1;
        uVar6 = 1;
      }
      else {
        uVar4 = 1;
        uVar6 = (uint)(*(int *)(lVar5 + 0x14) == 5);
      }
      return (ulong)(uVar4 & uVar6);
    }
  }
  return 0;
}

