
/* WARNING: Removing unreachable block (ram,0x027cd258) */
/* WARNING: Removing unreachable block (ram,0x027cd250) */
/* WARNING: Removing unreachable block (ram,0x027cd3d4) */

void FUN_027cd1e0(uint param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined *local_b0;
  undefined1 local_a8;
  int local_a4;
  undefined *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined2 local_8c;
  undefined *local_88;
  int local_80;
  undefined **local_78;
  undefined **ppuStack_70;
  undefined1 *local_68;
  undefined *local_58;
  undefined *puStack_50;
  int local_48;
  int local_44;
  undefined *local_40;
  int local_38;
  int iStack_34;
  
  local_88 = PTR_DAT_04bc43f8 + 0x10;
  if (9 < param_1) {
    param_1 = 0;
  }
  local_80 = (&DAT_05636e30)[(int)param_1];
  local_58 = (undefined *)CONCAT44(local_58._4_4_,1);
  local_b0 = PTR_DAT_04bc4608 + 0x10;
  local_a8 = PTR_DAT_04bbc570[8];
  puVar1 = &DAT_05636dd8;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
    puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
  }
  local_a4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
  local_a0 = PTR_DAT_04bb2010 + 0x10;
  local_98 = *(ulong *)(PTR_DAT_04bbc570 + 0x18);
  local_90 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
  local_8c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
  if (local_80 != 0) {
    ppuStack_70 = &local_88;
    local_78 = &PTR_FUN_04a9b150;
    local_68 = (undefined1 *)&local_b0;
    if (puVar1[1] != 0) {
      local_68 = (undefined1 *)&local_b0;
      plVar6 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
      iVar5 = (**(code **)(*plVar6 + 0x18))();
      if (0 < iVar5) {
        iVar10 = 0;
        do {
          FUN_01360490(&local_58,puVar1[1],iVar10);
          uVar7 = (*(code *)*local_78)(&local_78,&local_58);
          if ((uVar7 & 1) != 0) break;
          bVar4 = iVar5 + -1 != iVar10;
          iVar10 = iVar10 + 1;
        } while (bVar4);
      }
    }
  }
  if ((local_a4 != 0) && (lVar9 = puVar1[1], lVar9 != 0)) {
    if ((uint)local_98 < 0x120) {
      if (((local_98._4_4_ < 0x100) &&
          (uVar8 = *(uint *)(lVar9 + (local_98 & 0xffffffff) * 0x400 + (ulong)local_98._4_4_ * 4 +
                            0x30), uVar8 < *(uint *)(lVar9 + 0x48030))) &&
         (lVar9 = *(long *)(lVar9 + 0x48038), lVar9 != 0)) {
        if ((*(byte *)(lVar9 + (long)(int)uVar8 * 0x718 + 8) >> 1 & 1) == 0) {
          lVar9 = lVar9 + (long)(int)uVar8 * 0x718 + 0x18;
        }
        else {
          lVar9 = lVar9 + (long)(int)uVar8 * 0x718 + 0x350;
        }
        puStack_50 = PTR_DAT_04bb2018 + 0x10;
        local_58 = PTR_DAT_04bbc5d8 + 0x10;
        fVar12 = (float)*(int *)(lVar9 + 0x14) * 0.5;
        fVar11 = (float)*(int *)(lVar9 + 0x10) * 0.5;
        fVar14 = (float)*(int *)(lVar9 + 0x20) * 0.5;
        fVar13 = (float)*(int *)(lVar9 + 0x24) * 0.5;
        uVar8 = 0;
        if (fVar11 != (float)(int)fVar11) {
          uVar8 = (uint)(fVar11 < 0.0);
        }
        iVar5 = (int)fVar11 - uVar8;
        uVar8 = 0;
        if (fVar12 != (float)(int)fVar12) {
          uVar8 = (uint)(fVar12 < 0.0);
        }
        iVar10 = (int)fVar12 - uVar8;
        uVar8 = 0;
        if (fVar14 != (float)(int)fVar14) {
          uVar8 = (uint)(fVar14 < 0.0);
        }
        iVar2 = (int)fVar14 - uVar8;
        uVar8 = 0;
        if (fVar13 != (float)(int)fVar13) {
          uVar8 = (uint)(fVar13 < 0.0);
        }
        iVar3 = (int)fVar13 - uVar8;
        local_48 = iVar5;
        if (iVar2 <= iVar5) {
          local_48 = iVar2;
        }
        if (iVar5 <= iVar2) {
          iVar5 = iVar2;
        }
        local_44 = iVar10;
        if (iVar3 <= iVar10) {
          local_44 = iVar3;
        }
        if (iVar10 <= iVar3) {
          iVar10 = iVar3;
        }
        _local_38 = CONCAT44(iVar10,iVar5);
        local_40 = puStack_50;
        FUN_01385eb0(&local_58);
      }
    }
  }
  return;
}

