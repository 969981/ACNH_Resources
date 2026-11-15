
void FUN_01fa7a0c(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 local_14;
  
  if (((*(long *)PTR_DAT_04bb5ce0 != 0) && (DAT_05aed670 != 0)) &&
     (*(long *)(DAT_05aed670 + 0x330) != 0)) {
    puVar2 = (undefined8 *)
             (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338))
    ;
    iVar1 = FUN_006bd550(*puVar2,0);
    if (((iVar1 == 0x758f7eaf) && (DAT_05aed670 != 0)) &&
       ((*(long *)(DAT_05aed670 + 0x330) != 0 &&
        (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244) != 0)))) {
      return;
    }
  }
  if ((int)param_1[0x15f1] != 1) {
    FUN_01e57c78(param_1[2],PTR_DAT_04bb37e0,0,1);
    if ((int)param_1[0xef6] != 0x37) {
      (**(code **)(*param_1 + 0x38))(param_1,0x37,0,0);
    }
    local_14 = 0;
    *(uint *)(param_1[1] + 0x69c) = *(uint *)(param_1[1] + 0x69c) & 0xfffffbff;
    *(undefined4 *)(param_1[1] + 0x750) = 0;
    FUN_01e39778(param_1[1],param_2,&local_14,0);
    *(uint *)(param_1[1] + 0x69c) = *(uint *)(param_1[1] + 0x69c) | 0x400;
  }
  return;
}

