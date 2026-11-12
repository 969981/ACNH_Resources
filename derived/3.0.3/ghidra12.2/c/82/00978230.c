
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00978230(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
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
  
  puVar6 = PTR_DAT_04bb27c8;
  local_28 = 0;
  uStack_24 = 0;
  local_6c = 0;
  local_68 = PTR_DAT_04bbc1a0 + 0x10;
  local_88 = PTR_DAT_04bb2010 + 0x10;
  local_74 = 0;
  local_70 = 0;
  fVar11 = (float)*(int *)(param_1 + 0xc) * 10.0;
  fVar9 = (float)*(int *)(param_1 + 8) * 10.0;
  fVar10 = fVar9 + 2.5;
  fVar12 = fVar11 + 2.5;
  fVar13 = fVar9 + 10.0 + -2.5;
  fVar9 = fVar11 + 10.0 + -2.5;
  local_48 = (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0);
  iStack_44 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
  iVar5 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
  iVar2 = local_48;
  if (iVar5 <= local_48) {
    iVar2 = iVar5;
  }
  if (local_48 <= iVar5) {
    local_48 = iVar5;
  }
  iVar5 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
  local_7c = iStack_44;
  if (iVar5 <= iStack_44) {
    local_7c = iVar5;
  }
  if (iStack_44 <= iVar5) {
    iStack_44 = iVar5;
  }
  iVar5 = iStack_44 + 1;
  uVar7 = 0;
  if (iVar5 != local_7c) {
    lVar8 = *(long *)PTR_DAT_04bb27c8;
    local_80 = iVar2;
    puStack_60 = local_88;
    local_58 = iVar2;
    iStack_54 = local_7c;
    local_50 = local_88;
    do {
      if ((lVar8 != 0) && (*(long *)(lVar8 + 0xa8) != 0)) {
        FUN_009493f8(lVar8 + 0x28,&local_88,&local_28,&local_6c,&local_70,&local_74);
        lVar8 = *(long *)puVar6;
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
      uVar7 = uStack_24;
      if (uStack_24 != 0) goto LAB_00978430;
      if (local_80 < local_48) {
        local_80 = local_80 + 1;
      }
      else {
        local_7c = local_7c + 1;
        local_80 = local_58;
      }
    } while ((iVar2 != local_80) || (iVar5 != local_7c));
    uVar7 = 0;
  }
LAB_00978430:
  if (((int)uVar7 < 0) ||
     (uVar4 = *(uint *)(*(long *)PTR_DAT_04bb46c8 + 0x608), (int)uVar4 <= (int)uVar7)) {
    *param_2 = 0;
    param_2[1] = 0x3f80000000000000;
  }
  else {
    if (uVar4 <= uVar7) {
      uVar7 = 0;
    }
    puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb46c8 + 0x610) + (long)(int)uVar7 * 0x10);
    uVar3 = puVar1[1];
    *param_2 = *puVar1;
    param_2[1] = uVar3;
  }
  return;
}

