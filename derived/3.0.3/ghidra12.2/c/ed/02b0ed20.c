
/* WARNING: Removing unreachable block (ram,0x02b0ee24) */
/* WARNING: Removing unreachable block (ram,0x02b0efd4) */
/* WARNING: Removing unreachable block (ram,0x02b0ede4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_02b0ed20(long param_1)

{
  int iVar1;
  undefined *puVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined *local_78;
  int local_70;
  int local_6c;
  undefined *local_68;
  undefined *puStack_60;
  int local_58;
  int local_54;
  undefined *local_50;
  int local_48;
  int iStack_44;
  
  puVar8 = PTR_DAT_04bb3170;
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 == -1) {
    lVar10 = *(long *)PTR_DAT_04bb27a8;
  }
  else {
    puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8;
    if (0xff < (uint)(int)sVar3) {
      puVar2 = PTR_DAT_04bc39f8;
    }
    lVar10 = *(long *)PTR_DAT_04bb27a8;
    if ((*(uint *)(puVar2 + 4) & 1) != 0) {
      plVar11 = (long *)(lVar10 + 0x1c0);
      goto LAB_02b0ede8;
    }
  }
  plVar11 = (long *)(lVar10 + 0x1f8);
LAB_02b0ede8:
  if ((*plVar11 != 0) && (lVar10 = *(long *)(*plVar11 + 0xc0), lVar10 != 0)) {
    if ((*(byte *)(param_1 + 8) >> 1 & 1) == 0) {
      lVar13 = param_1 + 0x90;
    }
    else {
      lVar13 = param_1 + 0x2e0;
    }
    local_78 = PTR_DAT_04bb2018 + 0x10;
    local_68 = PTR_DAT_04bbc5d8 + 0x10;
    fVar15 = (float)*(int *)(lVar13 + 0x14) * 0.5;
    fVar14 = (float)*(int *)(lVar13 + 0x10) * 0.5;
    fVar17 = (float)*(int *)(lVar13 + 0x20) * 0.5;
    fVar16 = (float)*(int *)(lVar13 + 0x24) * 0.5;
    uVar12 = 0;
    if (fVar14 != (float)(int)fVar14) {
      uVar12 = (uint)(fVar14 < 0.0);
    }
    iVar4 = (int)fVar14 - uVar12;
    uVar12 = 0;
    if (fVar15 != (float)(int)fVar15) {
      uVar12 = (uint)(fVar15 < 0.0);
    }
    iVar5 = (int)fVar15 - uVar12;
    uVar12 = 0;
    if (fVar17 != (float)(int)fVar17) {
      uVar12 = (uint)(fVar17 < 0.0);
    }
    iVar6 = (int)fVar17 - uVar12;
    uVar12 = 0;
    if (fVar16 != (float)(int)fVar16) {
      uVar12 = (uint)(fVar16 < 0.0);
    }
    iVar7 = (int)fVar16 - uVar12;
    iVar1 = iVar4;
    if (iVar6 <= iVar4) {
      iVar1 = iVar6;
    }
    if (iVar4 <= iVar6) {
      iVar4 = iVar6;
    }
    local_6c = iVar5;
    if (iVar7 <= iVar5) {
      local_6c = iVar7;
    }
    if (iVar5 <= iVar7) {
      iVar5 = iVar7;
    }
    _local_48 = CONCAT44(iVar5,iVar4);
    if (iVar5 + 1 != local_6c) {
      local_70 = iVar1;
      puStack_60 = local_78;
      local_58 = iVar1;
      local_54 = local_6c;
      local_50 = local_78;
      do {
        uVar9 = FUN_02a7ccc8(param_1,&local_78);
        if ((uVar9 & 1) != 0) {
          FUN_0132101c(lVar10,&local_78,puVar8);
        }
        if (local_70 < local_48) {
          local_70 = local_70 + 1;
        }
        else {
          local_6c = local_6c + 1;
          local_70 = local_58;
        }
      } while (iVar1 != local_70 || iVar5 + 1 != local_6c);
    }
  }
  return;
}

