
ulong FUN_033fa670(void)

{
  int iVar1;
  ulong uVar2;
  short *psVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *local_30;
  char *pcStack_28;
  
  if (*(long *)PTR_DAT_04bb59d8 == 0) {
    return 0;
  }
  lVar5 = *(long *)PTR_DAT_04bb2720;
  if (lVar5 == 0) {
    puVar6 = &DAT_055c04a0;
  }
  else {
    puVar6 = &DAT_055c04a0;
    if (*(long *)(lVar5 + 0x330) != 0) {
      puVar6 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar5 + 0x338));
      iVar1 = FUN_006bd550(*puVar6,0);
      puVar6 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar6 = &DAT_055c04a0;
      }
    }
  }
  if ((*(int *)(puVar6 + 7) == -0x17df00c3) &&
     ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0 || ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)))
     ) {
    local_30 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "Unlock_Insect";
    uVar2 = FUN_02758850(&local_30);
    if (((int)uVar2 != 0) && (uVar2 = 0, *(long *)PTR_DAT_04bb47e0 != 0)) {
      psVar3 = (short *)FUN_01952450();
      uVar4 = (uint)(*psVar3 != -2);
      if (psVar3[4] != -2) {
        uVar4 = uVar4 + 1;
      }
      if (psVar3[8] != -2) {
        uVar4 = uVar4 + 1;
      }
      if (psVar3[0xc] != -2) {
        uVar4 = uVar4 + 1;
      }
      if (psVar3[0x10] != -2) {
        uVar4 = uVar4 + 1;
      }
      if (psVar3[0x14] != -2) {
        uVar4 = uVar4 + 1;
      }
      if (psVar3[0x18] != -2) {
        uVar4 = uVar4 + 1;
      }
      if (psVar3[0x1c] != -2) {
        uVar4 = uVar4 + 1;
      }
      if (psVar3[0x20] != -2) {
        uVar4 = uVar4 + 1;
      }
      if (psVar3[0x24] != -2) {
        uVar4 = uVar4 + 1;
      }
      if (psVar3[0x28] != -2) {
        uVar4 = uVar4 + 1;
      }
      if (psVar3[0x2c] != -2) {
        uVar4 = uVar4 + 1;
      }
      uVar2 = (ulong)uVar4;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

