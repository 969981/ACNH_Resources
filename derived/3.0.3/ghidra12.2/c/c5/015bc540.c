
void FUN_015bc540(long param_1,long param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  undefined *local_58;
  undefined *puStack_50;
  int local_48;
  int iStack_44;
  undefined *local_40;
  int local_38;
  int iStack_34;
  
  if (*(long *)(param_1 + 0xda0) != 0) {
    local_48 = *(int *)(param_2 + 0x10);
    iStack_44 = *(int *)(param_2 + 0x14);
    puStack_50 = PTR_DAT_04bb2010 + 0x10;
    lVar8 = *(long *)(param_1 + 0xd98);
    local_58 = PTR_DAT_04bbc1a0 + 0x10;
    iVar2 = *(int *)(param_2 + 0x20);
    iVar4 = *(int *)(param_2 + 0x24);
    iVar3 = *(int *)(lVar8 + 0x20);
    iVar5 = *(int *)(lVar8 + 0x24);
    iVar6 = local_48 + -1;
    if (local_48 + -1 <= *(int *)(lVar8 + 0x10)) {
      iVar6 = *(int *)(lVar8 + 0x10);
    }
    iVar1 = iStack_44 + -1;
    if (iStack_44 + -1 <= *(int *)(lVar8 + 0x14)) {
      iVar1 = *(int *)(lVar8 + 0x14);
    }
    if (iVar6 <= local_48) {
      local_48 = iVar6;
    }
    if (iVar1 <= iStack_44) {
      iStack_44 = iVar1;
    }
    local_38 = iVar2;
    if (iVar2 <= iVar6) {
      local_38 = iVar6;
    }
    iStack_34 = iVar4;
    if (iVar4 <= iVar1) {
      iStack_34 = iVar1;
    }
    if (iVar2 + 1 < iVar3) {
      iVar3 = iVar2 + 1;
    }
    if (iVar4 + 1 < iVar5) {
      iVar5 = iVar4 + 1;
    }
    if (iVar3 <= local_48) {
      local_48 = iVar3;
    }
    if (iVar5 <= iStack_44) {
      iStack_44 = iVar5;
    }
    if (local_38 <= iVar3) {
      local_38 = iVar3;
    }
    if (iStack_34 <= iVar5) {
      iStack_34 = iVar5;
    }
    local_40 = puStack_50;
    FUN_0155aff0(*(long *)(param_1 + 0xda0),&local_58);
  }
  if ((param_3 & 1) != 0) {
    fVar9 = (float)*(int *)(param_2 + 0x10) * 0.5;
    uVar7 = 0;
    if (fVar9 != (float)(int)fVar9) {
      uVar7 = (uint)(fVar9 < 0.0);
    }
    iVar6 = (int)fVar9 - uVar7;
    fVar9 = (float)*(int *)(param_2 + 0x14) * 0.5;
    uVar7 = 0;
    if (fVar9 != (float)(int)fVar9) {
      uVar7 = (uint)(fVar9 < 0.0);
    }
    iVar3 = (int)fVar9 - uVar7;
    fVar9 = (float)*(int *)(param_2 + 0x20) * 0.5;
    uVar7 = 0;
    if (fVar9 != (float)(int)fVar9) {
      uVar7 = (uint)(fVar9 < 0.0);
    }
    iVar5 = (int)fVar9 - uVar7;
    fVar9 = (float)*(int *)(param_2 + 0x24) * 0.5;
    uVar7 = 0;
    if (fVar9 != (float)(int)fVar9) {
      uVar7 = (uint)(fVar9 < 0.0);
    }
    iVar4 = (int)fVar9 - uVar7;
    iVar2 = iVar6;
    if (iVar5 <= iVar6) {
      iVar2 = iVar5;
    }
    if (iVar6 <= iVar5) {
      iVar6 = iVar5;
    }
    iVar5 = iVar3;
    if (iVar4 <= iVar3) {
      iVar5 = iVar4;
    }
    if (iVar3 <= iVar4) {
      iVar3 = iVar4;
    }
    fVar9 = ((float)iVar2 * 10.0 + (float)iVar6 * 10.0 + 10.0) * 0.5;
    fVar10 = ((float)iVar5 * 10.0 + (float)iVar3 * 10.0 + 10.0) * 0.5;
    *(uint *)(param_1 + 0xdc8) = (int)((float)(int)fVar9 / 10.0) - (uint)(fVar9 < 0.0);
    *(uint *)(param_1 + 0xdcc) = (int)((float)(int)fVar10 / 10.0) - (uint)(fVar10 < 0.0);
    *(undefined1 *)(param_1 + 0xdb8) = 1;
  }
  return;
}

