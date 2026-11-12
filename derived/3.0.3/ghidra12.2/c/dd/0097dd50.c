
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_0097dd50(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined *local_78;
  int local_70;
  int local_6c;
  undefined *local_68;
  undefined *puStack_60;
  int local_58;
  int iStack_54;
  undefined *local_50;
  int local_48;
  int iStack_44;
  
  puVar4 = PTR_DAT_04bb27c8;
  local_68 = PTR_DAT_04bbc1a0 + 0x10;
  local_78 = PTR_DAT_04bb2010 + 0x10;
  fVar10 = (float)*(int *)(param_1 + 0xc) * 10.0;
  fVar8 = (float)*(int *)(param_1 + 8) * 10.0;
  fVar9 = fVar8 + 2.5;
  fVar11 = fVar10 + 2.5;
  fVar12 = fVar8 + 10.0 + -2.5;
  fVar8 = fVar10 + 10.0 + -2.5;
  local_48 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
  iVar2 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
  iVar3 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
  iVar1 = local_48;
  if (iVar3 <= local_48) {
    iVar1 = iVar3;
  }
  if (local_48 <= iVar3) {
    local_48 = iVar3;
  }
  iVar3 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
  local_6c = iVar2;
  if (iVar3 <= iVar2) {
    local_6c = iVar3;
  }
  if (iVar2 <= iVar3) {
    iVar2 = iVar3;
  }
  iStack_44 = iVar2;
  if (iVar2 + 1 == local_6c) {
    uVar7 = 0;
  }
  else {
    lVar6 = *(long *)PTR_DAT_04bb27c8;
    uVar7 = 0;
    local_70 = iVar1;
    puStack_60 = local_78;
    local_58 = iVar1;
    iStack_54 = local_6c;
    local_50 = local_78;
    do {
      if ((lVar6 == 0) || (*(long *)(lVar6 + 0x90) == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_0094b728(lVar6 + 0x28,&local_78,param_2);
        lVar6 = *(long *)puVar4;
      }
      if (local_70 < local_48) {
        local_70 = local_70 + 1;
      }
      else {
        local_6c = local_6c + 1;
        local_70 = local_58;
      }
      uVar7 = uVar5 | uVar7;
    } while (iVar1 != local_70 || iVar2 + 1 != local_6c);
  }
  return uVar7 & 1;
}

