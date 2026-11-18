
void FUN_034122ec(long param_1,long param_2,undefined4 *param_3)

{
  int iVar1;
  long *plVar2;
  undefined *local_30;
  undefined4 local_28;
  
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x30) = *param_3;
    iVar1 = FUN_03411f40(param_2,(undefined4 *)(param_1 + 0x30));
    *(int *)(param_1 + 0x34) = iVar1;
    if (iVar1 != -1) {
      *(undefined4 *)(param_1 + 0x38) = 1;
      plVar2 = *(long **)(param_1 + 0x28);
      if ((plVar2 != (long *)0x0) && (plVar2[1] != 0)) {
        local_30 = PTR_DAT_04bc0cb8 + 0x10;
        local_28 = 0x14;
        (**(code **)(*plVar2 + 0x18))(plVar2,&local_30);
        (**(code **)(plVar2[3] + 0x158))(plVar2[1],0);
      }
    }
  }
  return;
}

