
void FUN_0293f15c(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar1 = PTR_DAT_04bb2720;
  lVar3 = *(long *)PTR_DAT_04bb2720;
  if (lVar3 == 0) {
    puVar4 = &DAT_055c04a0;
  }
  else {
    puVar4 = &DAT_055c04a0;
    if (*(long *)(lVar3 + 0x330) != 0) {
      puVar4 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar3 + 0x338));
      iVar2 = FUN_006bd550(*puVar4,0);
      puVar4 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar2 != 0x758f7eaf) {
        puVar4 = &DAT_055c04a0;
      }
    }
  }
  if (*(int *)(puVar4 + 7) != -0x6efba09b) {
    lVar3 = *(long *)puVar1;
    if (lVar3 == 0) {
      puVar4 = &DAT_055c04a0;
    }
    else {
      puVar4 = &DAT_055c04a0;
      if (*(long *)(lVar3 + 0x330) != 0) {
        puVar4 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar3 + 0x338));
        iVar2 = FUN_006bd550(*puVar4,0);
        puVar4 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar2 != 0x758f7eaf) {
          puVar4 = &DAT_055c04a0;
        }
      }
    }
    if ((*(int *)(puVar4 + 7) != -0x17df00c3) && ((param_2 & 1) != 0)) {
      FUN_013cece0(param_1);
      return;
    }
  }
  return;
}

