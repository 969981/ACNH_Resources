
uint FUN_033f9b30(void)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined1 uStack_5;
  undefined4 local_4;
  
  if ((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
    puVar3 = (undefined8 *)
             (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338))
    ;
    FUN_006bd550(*puVar3,0);
  }
  FUN_0252d11c(&uStack_5);
  if (DAT_05aed670 == 0) {
    puVar3 = &DAT_055c04a0;
  }
  else {
    puVar3 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar3 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar1 = FUN_006bd550(*puVar3,0);
      puVar3 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar3 = &DAT_055c04a0;
      }
    }
  }
  local_4 = 0;
  uVar4 = FUN_02b5f400(&local_4,*(undefined4 *)(puVar3 + 7));
  uVar2 = 0;
  if ((uVar4 & 1) != 0) {
    uVar2 = FUN_02b5f7a0(local_4,&uStack_5);
  }
  return uVar2 & 1;
}

