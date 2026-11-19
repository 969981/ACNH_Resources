
void FUN_03b7a5f0(long param_1,long *param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_468;
  undefined8 local_460;
  int local_458;
  int local_454;
  undefined1 auStack_450 [1024];
  
  lVar3 = *(long *)(param_1 + 8);
  fVar4 = *(float *)(lVar3 + 0x14);
  fVar5 = *(float *)(lVar3 + 0xc);
  local_468 = 0x7f7fffff7f7fffff;
  local_460 = 0xff7fffffff7fffff;
  fVar7 = *(float *)(param_1 + 0x2c);
  fVar6 = *(float *)(param_1 + 0x28) + (*(float *)(lVar3 + 0x10) - *(float *)(lVar3 + 8)) * 0.5;
  local_458 = param_4;
  local_454 = param_3;
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = auStack_450;
  iVar2 = 0x200;
  if (*(undefined1 **)(param_1 + 0x60) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_1 + 0x60);
    iVar2 = *(int *)(param_1 + 0x68);
  }
  FUN_038d4cb0(puVar1,iVar2,param_2[1],iVar2 + -1);
  FUN_038e6fd0(param_1,puVar1,0xffffffff,0,&local_468,*(undefined8 *)(param_1 + 0x10),
               *(undefined8 *)(param_1 + 0x18));
  if (local_454 == 2) {
    fVar6 = fVar6 + ((float)local_460 - (float)local_468) * -0.5;
  }
  else if (local_454 == 1) {
    fVar6 = fVar6 - ((float)local_460 - (float)local_468);
  }
  fVar7 = (fVar4 - fVar5) * 0.5 - fVar7;
  if (local_458 == 2) {
    fVar4 = (local_460._4_4_ - local_468._4_4_) * 0.5;
  }
  else {
    if (local_458 != 1) goto LAB_03b7a724;
    fVar4 = local_460._4_4_ - local_468._4_4_;
  }
  fVar7 = fVar7 - fVar4;
LAB_03b7a724:
  lVar3 = *(long *)(param_1 + 8);
  *(float *)(param_1 + 0x28) = fVar6 - (*(float *)(lVar3 + 0x10) - *(float *)(lVar3 + 8)) * 0.5;
  *(float *)(param_1 + 0x2c) = (*(float *)(lVar3 + 0x14) - *(float *)(lVar3 + 0xc)) * 0.5 - fVar7;
  (**(code **)(*param_2 + 0x18))(param_2);
  FUN_038e6d8c(param_1,param_2[1]);
  return;
}

