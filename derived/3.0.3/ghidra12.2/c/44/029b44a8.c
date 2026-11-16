
void FUN_029b44a8(long param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (*param_2 == '\0') {
    iVar1 = *(int *)(param_1 + 0x34);
    *(int *)(param_1 + 0x34) = iVar1 + 1;
    if (1 < iVar1) {
      uVar6 = *(undefined4 *)(param_1 + 0x2c);
      uVar5 = *(undefined4 *)(param_1 + 0x30);
      uVar2 = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x34) = 3;
      uVar4 = FUN_02a215b0(uVar5,param_1 + 0x38);
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x1c) = uVar4;
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x28) = uVar2;
      *(undefined4 *)(param_1 + 0x2c) = uVar6;
      *(undefined4 *)(param_1 + 0x30) = uVar5;
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfe;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x34) = 0;
    if ((param_2[1] != '\0') && ((*(byte *)(param_1 + 8) & 1) == 0)) {
      *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0x18);
      *(float *)(param_1 + 0x1c) = *(float *)(param_1 + 0x14) + *(float *)(param_1 + 0x18);
      uVar2 = *(undefined4 *)(param_2 + 4);
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 1;
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x28) = uVar2;
    }
    iVar1 = *(int *)(param_1 + 0x24);
    *(int *)(param_1 + 0x24) = iVar1 + 1;
    fVar3 = *(float *)(param_1 + 0xc) +
            (float)iVar1 *
            ((*(float *)(param_1 + 0x1c) - *(float *)(param_1 + 0xc)) /
            (float)*(int *)(param_1 + 0x28));
    if (*(int *)(param_1 + 0x28) <= iVar1) {
      fVar3 = *(float *)(param_1 + 0x1c);
    }
    *(float *)(param_1 + 0x18) = fVar3;
  }
  return;
}

