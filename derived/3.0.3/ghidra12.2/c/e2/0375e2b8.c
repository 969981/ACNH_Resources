
void FUN_0375e2b8(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  FUN_0370d7e0(param_1 + 0x10);
  if (DAT_05aed670 == 0) {
    puVar2 = &DAT_055c04a0;
  }
  else {
    puVar2 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar2 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar1 = FUN_006bd550(*puVar2,0);
      puVar2 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar2 = &DAT_055c04a0;
      }
    }
  }
  if (*(int *)(puVar2 + 7) == -0x17df00c3) {
    FUN_0375e404(param_1);
    return;
  }
  return;
}

