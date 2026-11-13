
void FUN_01383220(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  param_1[4] = 0;
  puVar1 = PTR_DAT_04bb2018 + 0x10;
  *param_1 = &PTR_LAB_04993a08;
  param_1[1] = puVar1;
  param_1[2] = 0;
  param_1[3] = puVar1;
  fVar9 = (float)*(int *)(param_2 + 0x14) * 0.5;
  fVar8 = (float)*(int *)(param_2 + 0x10) * 0.5;
  fVar11 = (float)*(int *)(param_2 + 0x20) * 0.5;
  fVar10 = (float)*(int *)(param_2 + 0x24) * 0.5;
  uVar7 = 0;
  if (fVar8 != (float)(int)fVar8) {
    uVar7 = (uint)(fVar8 < 0.0);
  }
  iVar3 = (int)fVar8 - uVar7;
  uVar7 = 0;
  if (fVar9 != (float)(int)fVar9) {
    uVar7 = (uint)(fVar9 < 0.0);
  }
  iVar4 = (int)fVar9 - uVar7;
  uVar7 = 0;
  if (fVar11 != (float)(int)fVar11) {
    uVar7 = (uint)(fVar11 < 0.0);
  }
  iVar5 = (int)fVar11 - uVar7;
  uVar7 = 0;
  if (fVar10 != (float)(int)fVar10) {
    uVar7 = (uint)(fVar10 < 0.0);
  }
  iVar6 = (int)fVar10 - uVar7;
  iVar2 = iVar3;
  if (iVar5 <= iVar3) {
    iVar2 = iVar5;
  }
  if (iVar3 <= iVar5) {
    iVar3 = iVar5;
  }
  iVar5 = iVar4;
  if (iVar6 <= iVar4) {
    iVar5 = iVar6;
  }
  if (iVar4 <= iVar6) {
    iVar4 = iVar6;
  }
  *(int *)(param_1 + 2) = iVar2;
  *(int *)((long)param_1 + 0x14) = iVar5;
  *(int *)(param_1 + 4) = iVar3;
  *(int *)((long)param_1 + 0x24) = iVar4;
  return;
}

