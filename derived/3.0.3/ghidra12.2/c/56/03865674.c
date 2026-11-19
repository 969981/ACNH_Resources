
void FUN_03865674(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  float fVar11;
  long local_68;
  int local_60;
  int iStack_5c;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  
  uVar2 = *(uint *)(param_1 + 0x298);
  iVar3 = *(int *)(param_1 + 0x440);
  if (uVar2 < 2) {
    iVar9 = 0;
    iVar8 = 0;
  }
  else {
    iVar9 = *(int *)(param_1 + 0x444) + *(int *)(param_1 + 0x2e8) * iVar3;
    iVar8 = *(int *)(param_1 + 0x444) + *(int *)(param_1 + 0x2e8) * param_2;
  }
  *(int *)(param_1 + 0x440) = param_2;
  if (*(int *)(param_1 + 0x3d4) <= iVar8) {
    iVar5 = *(int *)(param_1 + 0x3d4) + -1;
    iVar8 = *(int *)(param_1 + 0x2e8);
    iVar4 = 0;
    if (iVar8 != 0) {
      iVar4 = iVar5 / iVar8;
    }
    *(int *)(param_1 + 0x444) = iVar5 - iVar4 * iVar8;
  }
  if ((*(int *)(param_1 + 0x418) == 2) ||
     (fVar11 = *(float *)(param_1 + 0x424) - *(float *)(param_1 + 0x428),
     *(float *)(param_1 + 0x428) - *(float *)(param_1 + 0x424) < 1.0 ||
     fVar11 <= 0.0001 && -0.0001 <= fVar11)) {
    bVar10 = false;
  }
  else {
    uVar6 = iVar3 - param_2;
    uVar1 = -uVar6;
    if (-1 < (int)uVar6) {
      uVar1 = uVar6;
    }
    bVar10 = 1 < uVar1;
  }
  iVar3 = *(int *)(param_1 + 0x2e8);
  iVar8 = *(int *)(param_1 + 0x444);
  uVar7 = (**(code **)(*(long *)(param_1 + 0x370) + 0x10))(param_1 + 0x370);
  if ((uVar7 & 1) != 0) {
    iStack_5c = iVar8 + iVar3 * param_2;
    if (uVar2 < 2) {
      iStack_5c = 0;
    }
    iVar3 = 0;
    if (*(int *)(param_1 + 0x2e8) != 0) {
      iVar3 = iStack_5c / *(int *)(param_1 + 0x2e8);
    }
    local_58 = iVar3 == 0;
    local_57 = iVar3 == *(int *)(param_1 + 0x3d0) + -1;
    local_68 = param_1;
    local_60 = iVar9;
    local_56 = bVar10;
    (*(code *)**(undefined8 **)(param_1 + 0x370))(param_1 + 0x370,&local_68);
  }
  return;
}

