
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_009784a0(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined *local_88;
  int local_80;
  int local_7c;
  uint local_74;
  uint local_70;
  uint local_6c;
  undefined *local_68;
  undefined *puStack_60;
  int local_58;
  int iStack_54;
  undefined *local_50;
  int local_48;
  int iStack_44;
  uint local_28;
  uint uStack_24;
  
  puVar5 = PTR_DAT_04bb27c8;
  local_28 = 0;
  uStack_24 = 0;
  local_6c = 0;
  local_68 = PTR_DAT_04bbc1a0 + 0x10;
  local_88 = PTR_DAT_04bb2010 + 0x10;
  local_74 = 0;
  local_70 = 0;
  fVar10 = (float)*(int *)(param_1 + 0xc) * 10.0;
  fVar8 = (float)*(int *)(param_1 + 8) * 10.0;
  fVar9 = fVar8 + 2.5;
  fVar11 = fVar10 + 2.5;
  fVar12 = fVar8 + 10.0 + -2.5;
  fVar8 = fVar10 + 10.0 + -2.5;
  local_48 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
  iStack_44 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
  iVar4 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
  iVar2 = local_48;
  if (iVar4 <= local_48) {
    iVar2 = iVar4;
  }
  if (local_48 <= iVar4) {
    local_48 = iVar4;
  }
  iVar4 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
  local_7c = iStack_44;
  if (iVar4 <= iStack_44) {
    local_7c = iVar4;
  }
  if (iStack_44 <= iVar4) {
    iStack_44 = iVar4;
  }
  iVar4 = iStack_44 + 1;
  uVar6 = 0;
  if (iVar4 != local_7c) {
    lVar7 = *(long *)PTR_DAT_04bb27c8;
    local_80 = iVar2;
    puStack_60 = local_88;
    local_58 = iVar2;
    iStack_54 = local_7c;
    local_50 = local_88;
    do {
      if ((lVar7 != 0) && (*(long *)(lVar7 + 0xa8) != 0)) {
        FUN_009493f8(lVar7 + 0x28,&local_88,&local_28,&local_6c,&local_70,&local_74);
        lVar7 = *(long *)puVar5;
      }
      if (local_28 != 0) {
        uStack_24 = local_28;
      }
      if (local_6c != 0) {
        uStack_24 = local_6c;
      }
      if (local_70 != 0) {
        uStack_24 = local_70;
      }
      if (local_74 != 0) {
        uStack_24 = local_74;
      }
      uVar6 = uStack_24;
      if (uStack_24 != 0) goto LAB_009786a0;
      if (local_80 < local_48) {
        local_80 = local_80 + 1;
      }
      else {
        local_7c = local_7c + 1;
        local_80 = local_58;
      }
    } while ((iVar2 != local_80) || (iVar4 != local_7c));
    uVar6 = 0;
  }
LAB_009786a0:
  lVar7 = *(long *)PTR_DAT_04bb46c8;
  if (((int)uVar6 < 0) || (*(int *)(lVar7 + 0x608) <= (int)uVar6)) {
    *param_2 = 0;
    param_2[1] = 0x3f80000000000000;
  }
  else {
    if (*(uint *)(lVar7 + 0x618) <= uVar6) {
      uVar6 = 0;
    }
    puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x620) + (long)(int)uVar6 * 0x10);
    uVar3 = puVar1[1];
    *param_2 = *puVar1;
    param_2[1] = uVar3;
  }
  return;
}

