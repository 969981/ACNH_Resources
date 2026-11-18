
void FUN_0345b4a0(long param_1,long param_2)

{
  undefined **local_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    if (1 < *(uint *)(param_1 + 0x298)) {
      if (param_2 == 0) {
        local_20 = &PTR_LAB_04b2b050;
        uStack_18 = 0xffffffff01000101;
        FUN_03864fe0(param_1,&local_20);
        return;
      }
      FUN_03864fe0();
      return;
    }
    if (((((*(int *)(param_1 + 0x2f8) != 0) && (*(int *)(param_1 + 0x208) != 0)) &&
         (*(long *)(param_1 + 0x270) != 0)) && (*(long *)(*(long *)(param_1 + 0x270) + 8) != 0)) &&
       (((*(long *)(param_1 + 0x480) == 0 || (*(int *)(*(long *)(param_1 + 0x480) + 0x14) != -1)) &&
        ((*(long *)(param_1 + 0x2d8) != 0 &&
         ((0 < *(int *)(param_1 + 0x3d8) && (*(int *)(param_1 + 0x3d4) != 0)))))))) {
      FUN_03ebb160(param_1 + 0x290,2);
      return;
    }
  }
  return;
}

