
void FUN_0014a208(long param_1)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_8;
  
  if ((*(long *)(param_1 + 0xc28) != -1) && (*(long *)(param_1 + 200) != 0)) {
    if (*(long *)(param_1 + 0xe8) != 0) {
      FUN_0014b7c4(param_1,3,2);
    }
    local_8 = 0;
    FUN_00146418(&local_8);
    local_30 = *(undefined8 *)(param_1 + 0xc28);
    uStack_28 = local_8;
    FUN_0014b1d8(*(undefined8 *)(param_1 + 200),&local_30,&LAB_0014ae58);
    if (*(long *)(param_1 + 0xe8) != 0) {
      FUN_0014b80c(param_1,3);
    }
  }
  return;
}

