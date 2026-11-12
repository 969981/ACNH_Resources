
undefined8 FUN_0097b460(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (DAT_04cfae30 == 0) {
    return 0;
  }
  lVar3 = *(long *)PTR_DAT_04bb2720;
  if (lVar3 == 0) {
    puVar4 = &DAT_055c04a0;
  }
  else {
    puVar4 = &DAT_055c04a0;
    if (*(long *)(lVar3 + 0x330) != 0) {
      puVar4 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar3 + 0x338));
      iVar1 = FUN_006bd550(*puVar4,0);
      puVar4 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar4 = &DAT_055c04a0;
      }
    }
  }
  if ((*(int *)(puVar4 + 7) == -0x17df00c3) || (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x24a26848)) {
    uVar2 = FUN_01385040(param_1);
    return uVar2;
  }
  if (*(long *)(DAT_04cfae30 + 0xa8) == *(long *)(DAT_04cfae30 + 0x90)) {
    uVar2 = FUN_01384ee0(param_1);
    return uVar2;
  }
  uVar2 = FUN_0180cee0();
  return uVar2;
}

