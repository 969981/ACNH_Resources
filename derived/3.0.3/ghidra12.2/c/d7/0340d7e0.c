
void FUN_0340d7e0(long *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined **local_30;
  undefined4 local_28;
  
  if (param_1 != (long *)0x0) {
    uVar2 = 0;
    if (*param_2 == 0) {
      uVar2 = *(undefined4 *)(*(long *)PTR_DAT_04bb26a8 + 0xa7440);
    }
    uVar1 = *(undefined4 *)(*(long *)PTR_DAT_04bb26a8 + 0xa7450);
    if (*param_2 != 1) {
      uVar1 = uVar2;
    }
    local_30 = &PTR_LAB_04aa7fe0;
    local_28 = 0x15;
    (**(code **)(*param_1 + 0x18))(param_1,&local_30);
    (**(code **)(param_1[3] + 0x168))(uVar1,param_1[1]);
  }
  return;
}

