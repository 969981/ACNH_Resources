
long FUN_029a77ec(long param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined1 local_44 [4];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined1 local_38;
  undefined8 local_34;
  undefined8 local_2c;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar1 = *(int *)(param_1 + 0xe8);
  if (iVar1 == -1) {
    return 0;
  }
  if (iVar1 == 0) {
    local_40 = *param_2;
    uStack_3c = param_2[1];
    local_18 = param_2[10];
    uStack_14 = param_2[0xb];
    local_44[0] = 0;
    local_38 = *(undefined1 *)(param_2 + 2);
    local_2c = *(undefined8 *)(param_2 + 5);
    local_34 = *(undefined8 *)(param_2 + 3);
    local_24 = param_2[7];
    local_20 = *(undefined8 *)(param_2 + 8);
    lVar3 = FUN_02999800(param_1 + 0xf0,local_44);
    return lVar3;
  }
  uVar2 = iVar1 - 1;
  if (*(uint *)(param_1 + 0x2798) <= uVar2) {
    uVar2 = 0;
  }
  lVar4 = *(long *)(param_1 + 0x27a0) + (long)(int)uVar2 * 0x228;
  lVar3 = lVar4 + 0x1b8;
  if (param_2[6] != 4) {
    lVar3 = lVar4 + 0xb8;
  }
  return lVar3;
}

