
bool FUN_033fa570(void)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *local_30;
  char *pcStack_28;
  
  if (*(long *)PTR_DAT_04bb59d8 == 0) {
    return false;
  }
  lVar3 = *(long *)PTR_DAT_04bb2720;
  if (lVar3 == 0) {
    puVar4 = &DAT_055c04a0;
  }
  else {
    puVar4 = &DAT_055c04a0;
    if (*(long *)(lVar3 + 0x330) != 0) {
      puVar4 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar3 + 0x338));
      iVar2 = FUN_006bd550(*puVar4,0);
      puVar4 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar2 != 0x758f7eaf) {
        puVar4 = &DAT_055c04a0;
      }
    }
  }
  if ((*(int *)(puVar4 + 7) == -0x17df00c3) &&
     ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0 || ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)))
     ) {
    local_30 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "Unlock_Insect";
    iVar2 = FUN_02758850(&local_30);
    bVar1 = iVar2 != 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

