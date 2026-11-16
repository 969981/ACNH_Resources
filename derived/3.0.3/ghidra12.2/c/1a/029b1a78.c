
void FUN_029b1a78(long param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  
  if (*param_2 == '\0') {
    iVar3 = *(int *)(param_1 + 0x38);
    *(int *)(param_1 + 0x38) = iVar3 + 1;
    if (1 < iVar3) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x38) = 3;
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
  }
  else {
    uVar7 = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x38) = 0;
    fVar6 = *(float *)(param_1 + 8);
    fVar5 = *(float *)(param_1 + 0x20);
    iVar3 = *(int *)(param_1 + 0x10);
    iVar1 = *(int *)(param_1 + 0x28);
    if (param_2[1] == '\0') {
      iVar2 = *(int *)(param_1 + 0x14);
    }
    else {
      fVar6 = (float)FUN_02a215b0(*(undefined4 *)(param_1 + 0x1c),param_1 + 0x4c);
      fVar5 = (float)FUN_02a215b0(uVar7,param_1 + 0x3c);
      *(float *)(param_1 + 0xc) = fVar6;
      *(float *)(param_1 + 0x24) = fVar5;
      *(int *)(param_1 + 0x14) = iVar3;
      *(int *)(param_1 + 0x2c) = iVar1;
      iVar2 = iVar3;
    }
    iVar4 = iVar2;
    if (0 < iVar2) {
      iVar4 = iVar2 + -1;
      *(int *)(param_1 + 0x14) = iVar4;
      *(float *)(param_1 + 0xc) = (fVar6 / (float)iVar3) * (float)iVar2;
    }
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    iVar3 = *(int *)(param_1 + 0x2c);
    if (0 < iVar3) {
      *(int *)(param_1 + 0x2c) = iVar3 + -1;
      *(float *)(param_1 + 0x24) = (fVar5 / (float)iVar1) * (float)iVar3;
      iVar3 = iVar3 + -1;
    }
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
  }
  return;
}

