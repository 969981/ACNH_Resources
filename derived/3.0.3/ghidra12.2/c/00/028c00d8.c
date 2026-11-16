
void FUN_028c00d8(long param_1,long param_2,long param_3,undefined4 param_4)

{
  int iVar1;
  undefined **local_60;
  long lStack_58;
  undefined1 *local_50;
  undefined8 uStack_48;
  
  iVar1 = *(int *)(param_1 + 0xc048);
  if ((((iVar1 == 0) || (*(int *)(param_1 + 0xc04c) == 0)) || (*(int *)(param_1 + 0xc050) == 0)) ||
     ((*(int *)(param_1 + 0xc054) == 0 ||
      (((iVar1 == *(int *)(param_2 + 0x24) &&
        (*(int *)(param_1 + 0xc04c) == *(int *)(param_2 + 0x28))) &&
       ((*(int *)(param_1 + 0xc050) == *(int *)(param_3 + 0x24) &&
        (*(int *)(param_1 + 0xc054) == *(int *)(param_3 + 0x28))))))))) {
    *(int *)(param_1 + 0xc048) = *(int *)(param_2 + 0x24);
    *(undefined4 *)(param_1 + 0xc04c) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0xc050) = *(undefined4 *)(param_3 + 0x24);
    *(undefined4 *)(param_1 + 0xc054) = *(undefined4 *)(param_3 + 0x28);
    local_50 = &LAB_028c0fd0;
    uStack_48 = 0;
    lStack_58 = param_1 + 0x6028;
    local_60 = &PTR_LAB_04a923b0;
    if (*(long *)(param_1 + 0x6028) != 0) {
      FUN_028c0fe0(*(long *)(param_1 + 0x6028),&local_60);
    }
    *(undefined4 *)(param_1 + 0x6040) = 0;
    *(undefined8 *)(param_1 + 0x6028) = 0;
    FUN_028c01f0(param_1,param_2,param_3,param_4);
  }
  return;
}

