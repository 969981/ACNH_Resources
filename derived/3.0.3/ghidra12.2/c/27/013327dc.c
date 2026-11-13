
void FUN_013327dc(long param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x6b0);
  if ((uVar1 & 1) == 0) {
    uVar3 = *(undefined8 *)(*param_2 + 0xa8);
    lVar2 = (**(code **)(*(long *)(param_1 + 0x6b8) + 0xf0))(param_1 + 0x6b8);
    FUN_01342080(param_1,uVar3,lVar2 + 8,1,1);
    uVar1 = *(uint *)(param_1 + 0x6b0);
  }
  if ((uVar1 >> 1 & 1) == 0) {
    FUN_013425a0(param_1,*(undefined8 *)(*param_2 + 0xb8),1,1);
    uVar1 = *(uint *)(param_1 + 0x6b0);
  }
  if ((uVar1 >> 2 & 1) == 0) {
    FUN_0134278c(param_1,*param_2,0x1f);
    uVar1 = *(uint *)(param_1 + 0x6b0);
  }
  if ((uVar1 >> 3 & 1) == 0) {
    FUN_01342bc0(param_1,*param_2);
    uVar1 = *(uint *)(param_1 + 0x6b0);
  }
  if ((uVar1 >> 4 & 1) == 0) {
    FUN_01342d60(param_1,*param_2);
    uVar1 = *(uint *)(param_1 + 0x6b0);
  }
  if ((uVar1 >> 5 & 1) == 0) {
    FUN_01342f00(param_1,*param_2);
    uVar1 = *(uint *)(param_1 + 0x6b0);
  }
  if ((uVar1 >> 6 & 1) == 0) {
    FUN_01343124(param_1);
    return;
  }
  return;
}

