
void FUN_02a0779c(long param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  
  if (*(char *)(param_1 + 0x149c) != '\0') {
    return;
  }
  *(char *)(param_1 + 0x149e) = (char)param_2[6];
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 4);
  if (0.0 <= (float)param_2[7]) {
    *(undefined1 *)(param_1 + 0x149d) = 1;
    fVar6 = (float)param_2[7] * (float)param_2[7];
  }
  else {
    *(undefined1 *)(param_1 + 0x149d) = 0;
    fVar6 = 3.4028235e+38;
  }
  *(float *)(param_1 + 0x1484) = fVar6;
  iVar5 = *param_2;
  *(undefined4 *)(param_1 + 0x1488) = 0;
  *(int *)(param_1 + 0x148c) = iVar5;
  uVar4 = (*param_2 - 1U) - (*param_2 - 1U >> 1 & 0x55555555);
  uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
  uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
  uVar4 = uVar4 + (uVar4 >> 8);
  cVar2 = *PTR_DAT_04bd22e0;
  uVar4 = uVar4 + (uVar4 >> 0x10) & 0x3f;
  *(uint *)(param_1 + 0x1494) = 0x20 - uVar4;
  *(int *)(param_1 + 0x1490) = -1 << (ulong)(-uVar4 & 0x1f);
  iVar5 = 0x40;
  if (cVar2 != '\0') {
    iVar5 = 0x80;
  }
  iVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = iVar5 / iVar1;
  }
  uVar4 = (iVar3 - 1U) - (iVar3 - 1U >> 1 & 0x55555555);
  uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
  uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
  uVar4 = uVar4 + (uVar4 >> 8);
  *(uint *)(param_1 + 0x1498) = uVar4 + (uVar4 >> 0x10) & 0x3f;
  *(char *)(param_1 + 0x149c) = '\x01';
  return;
}

