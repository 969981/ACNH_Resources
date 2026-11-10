
uint FUN_0033779c(undefined8 param_1,long param_2,undefined4 param_3,long param_4,undefined8 param_5
                 ,long param_6)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long local_60;
  undefined8 uStack_58;
  
  FUN_00348260(param_1,*(undefined8 *)(param_4 + 8),0x1ff);
  uVar4 = *(undefined8 *)(param_2 + 0x98);
  FUN_00348090(param_1,*(long *)(param_2 + 0x240) + 0x120);
  FUN_00348134(param_1,*(long *)(param_2 + 0x240) + 0x148);
  FUN_00347f8c(param_1,*(long *)(param_2 + 0x240) + 0x164);
  FUN_0034820c(param_1,*(long *)(param_2 + 0x240) + (ulong)*(uint *)(param_6 + 0x14) * 0x20 + 0x390)
  ;
  FUN_0031ef14(uVar4,param_1,param_2,param_4,param_6);
  FUN_0031f190(uVar4,param_1,param_2,param_4);
  lVar2 = *(long *)(param_2 + 0x240);
  if (*(int *)(lVar2 + 0x3f0) != -1) {
    lVar3 = *(long *)(param_2 + 0x780);
    uStack_58 = *(undefined8 *)(lVar3 + 0x1e0);
    local_60 = (**(long **)(param_2 + 0xc0) - *(long *)(lVar3 + 0x170)) + *(long *)(lVar3 + 0x1d8);
    FUN_0034836c(param_1,*(int *)(lVar2 + 0x3f0),&local_60,0x10,(long)*(int *)(param_2 + 0x28) << 4)
    ;
    lVar2 = *(long *)(param_2 + 0x240);
  }
  if (*(int *)(lVar2 + 0x3f4) != -1) {
    lVar3 = *(long *)(param_2 + 0x780);
    uStack_58 = *(undefined8 *)(lVar3 + 0x1e0);
    local_60 = (*(long *)(*(long *)(param_2 + 0xc0) + 8) - *(long *)(lVar3 + 0x170)) +
               *(long *)(lVar3 + 0x1d8);
    FUN_0034836c(param_1,*(int *)(lVar2 + 0x3f4),&local_60,0x10,(long)*(int *)(param_2 + 0x28) << 4)
    ;
    lVar2 = *(long *)(param_2 + 0x240);
  }
  if (*(int *)(lVar2 + 0x3f8) != -1) {
    lVar3 = *(long *)(param_2 + 0x780);
    uStack_58 = *(undefined8 *)(lVar3 + 0x1e0);
    local_60 = (*(long *)(*(long *)(param_2 + 0xc0) + 0x10) - *(long *)(lVar3 + 0x170)) +
               *(long *)(lVar3 + 0x1d8);
    FUN_0034836c(param_1,*(int *)(lVar2 + 0x3f8),&local_60,0x10,(long)*(int *)(param_2 + 0x28) << 4)
    ;
  }
  uVar4 = FUN_0031e3e8(param_2);
  uVar1 = FUN_0033ee44(uVar4,param_1,param_2,param_3,param_5,param_6);
  return uVar1 & 1;
}

