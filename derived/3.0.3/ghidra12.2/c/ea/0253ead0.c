
undefined8 FUN_0253ead0(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *local_30;
  char *pcStack_28;
  
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
      iVar1 = FUN_006bd550(*puVar4,0);
      puVar4 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar4 = &DAT_055c04a0;
      }
    }
  }
  if (*(int *)(puVar4 + 7) == -0x3e092032 || *(int *)(puVar4 + 7) == -0x7975b8e8) {
    local_30 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "SeqCeilingEventReady";
    uVar2 = FUN_02758850(&local_30);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    lVar3 = *(long *)PTR_DAT_04bb27f8;
    if ((((lVar3 != 0) && (*(int *)(lVar3 + 0x14) != 0)) &&
        ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0 ||
         ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)))) && ((*(ushort *)(lVar3 + 0xc0) & 0xf) == 1))
    {
      return 1;
    }
  }
  return 0;
}

