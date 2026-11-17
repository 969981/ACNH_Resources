
void FUN_02b81fc4(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x174);
  if (*(uint *)(param_1 + 0x550) == 0x1f) {
    FUN_02b93360(uVar1);
  }
  else {
    if ((*(uint *)(param_1 + 0x550) & 0xfffffffe) != 0x1a) {
      return;
    }
    FUN_02b93e60(uVar1);
  }
  lVar3 = *(long *)PTR_DAT_04bb5008;
  if (DAT_05aed670 == 0) {
    puVar4 = &DAT_055c04a0;
  }
  else {
    puVar4 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar4 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar2 = FUN_006bd550(*puVar4,0);
      puVar4 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar2 != 0x758f7eaf) {
        puVar4 = &DAT_055c04a0;
      }
    }
  }
  FUN_02b3cfa0(lVar3 + 0x26e8,uVar1,*(undefined4 *)(puVar4 + 7));
  return;
}

