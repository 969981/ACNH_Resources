
void FUN_029a7628(long param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  long local_38;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  iVar1 = *(int *)(param_1 + 0xe8);
  if (iVar1 == 0) {
    local_28 = CONCAT44(local_28._4_4_,*param_2);
    local_20 = *(undefined8 *)(param_2 + 2);
    local_38 = CONCAT44(local_38._4_4_,0x85);
    local_18 = CONCAT31(local_18._1_3_,*(undefined1 *)(param_2 + 4));
    local_30 = param_1 + 0x27c0;
    FUN_02998c50(param_1 + 0xf0,&local_38,&local_28);
  }
  else if (iVar1 == -1) {
    local_18 = 0;
    local_28 = 0;
    local_20 = 0xffffffff;
    FUN_029899a0(param_1 + 0x27c0,&local_28);
  }
  else {
    local_28 = *(undefined8 *)(param_2 + 2);
    uVar2 = iVar1 - 1;
    local_38 = param_1 + 0x27c0;
    if (*(uint *)(param_1 + 0x2798) <= uVar2) {
      uVar2 = 0;
    }
    FUN_029906a8(*(long *)(param_1 + 0x27a0) + (long)(int)uVar2 * 0x228,&local_38,&local_28);
  }
  return;
}

