
/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool FUN_009773f0(long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined *local_98;
  int local_90;
  int local_8c;
  undefined *local_88;
  undefined *puStack_80;
  int local_78;
  int iStack_74;
  undefined *local_70;
  int local_68;
  int iStack_64;
  undefined8 local_60;
  undefined8 local_58;
  
  puVar4 = PTR_DAT_04bb46c8;
  puVar3 = PTR_DAT_04bb27c8;
  local_88 = PTR_DAT_04bbc1a0 + 0x10;
  local_98 = PTR_DAT_04bb2010 + 0x10;
  fVar13 = (float)*(int *)(param_1 + 0xc) * 10.0;
  fVar11 = (float)*(int *)(param_1 + 8) * 10.0;
  fVar12 = fVar11 + 2.5;
  fVar14 = fVar13 + 2.5;
  fVar15 = fVar11 + 10.0 + -2.5;
  fVar11 = fVar13 + 10.0 + -2.5;
  local_68 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
  iStack_64 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
  iVar2 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
  iVar1 = local_68;
  if (iVar2 <= local_68) {
    iVar1 = iVar2;
  }
  if (local_68 <= iVar2) {
    local_68 = iVar2;
  }
  iVar2 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
  local_8c = iStack_64;
  if (iVar2 <= iStack_64) {
    local_8c = iVar2;
  }
  if (iStack_64 <= iVar2) {
    iStack_64 = iVar2;
  }
  iVar2 = iStack_64 + 1;
  if (iVar2 == local_8c) {
    iVar9 = 0;
  }
  else {
    iVar9 = 0;
    local_90 = iVar1;
    puStack_80 = local_98;
    local_78 = iVar1;
    iStack_74 = local_8c;
    local_70 = local_98;
    do {
      lVar8 = *(long *)puVar3;
      local_60 = 0;
      local_58 = 0;
      if (((lVar8 != 0) && (*(long *)(lVar8 + 0xa8) != 0)) &&
         (uVar7 = FUN_009493f8(lVar8 + 0x28,&local_98,(long)&local_58 + 4,&local_58,
                               (long)&local_60 + 4,&local_60), (uVar7 & 1) != 0)) {
        uVar5 = FUN_00980a10(*(undefined8 *)puVar4,local_58._4_4_);
        uVar7 = FUN_00980a10(*(undefined8 *)puVar4,local_58 & 0xffffffff);
        uVar10 = 1;
        if ((uVar5 & 1) != 0) {
          uVar10 = 2;
        }
        if ((uVar7 & 1) == 0) {
          uVar10 = uVar5 & 1;
        }
        uVar5 = FUN_00980a10(*(undefined8 *)puVar4,local_60 & 0xffffffff);
        uVar6 = FUN_00980a10(*(undefined8 *)puVar4,local_60._4_4_);
        if (uVar10 + (uVar5 & 1) != -(uVar6 & 1)) {
          iVar9 = iVar9 + 1;
        }
      }
      if (local_90 < local_68) {
        local_90 = local_90 + 1;
      }
      else {
        local_8c = local_8c + 1;
        local_90 = local_78;
      }
    } while (iVar1 != local_90 || iVar2 != local_8c);
  }
  return 0 < iVar9;
}

