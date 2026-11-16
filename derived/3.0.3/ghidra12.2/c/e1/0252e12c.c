
undefined4 FUN_0252e12c(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined *local_30;
  char *pcStack_28;
  
  if (*(long *)PTR_DAT_04bb59d8 != 0) {
    lVar2 = *(long *)PTR_DAT_04bb2720;
    if (lVar2 == 0) {
      puVar3 = &DAT_055c04a0;
    }
    else {
      puVar3 = &DAT_055c04a0;
      if (*(long *)(lVar2 + 0x330) != 0) {
        puVar3 = (undefined8 *)
                 (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                           (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar2 + 0x338));
        iVar1 = FUN_006bd550(*puVar3,0);
        puVar3 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar1 != 0x758f7eaf) {
          puVar3 = &DAT_055c04a0;
        }
      }
    }
    if (*(int *)(puVar3 + 7) == -0x17df00c3) {
      return 0xc0a00000;
    }
  }
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "NpcInteriorCoordinate";
  iVar1 = FUN_02743000(&local_30);
  uVar4 = 0;
  if (iVar1 != 0) {
    uVar4 = 0xc0a00000;
  }
  return uVar4;
}

