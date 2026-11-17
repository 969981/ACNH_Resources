
/* WARNING: Removing unreachable block (ram,0x02b113fc) */

void FUN_02b11360(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined *local_c8;
  undefined *puStack_c0;
  int local_b8;
  int iStack_b4;
  undefined *local_b0;
  int local_a8;
  int iStack_a4;
  undefined *local_a0;
  undefined *puStack_98;
  int local_90;
  int local_8c;
  undefined *local_88;
  int local_80;
  int iStack_7c;
  undefined2 local_74 [2];
  undefined **local_70;
  undefined **ppuStack_68;
  undefined *local_60;
  int local_58;
  int local_54;
  
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x24a26848) {
    uVar9 = *(uint *)(param_2 + 8);
    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar9);
    plVar3 = (long *)(param_1 + 8) + uVar9;
    if (6 < uVar9) {
      plVar3 = (long *)(param_1 + 8);
    }
    if (((long *)*plVar3 != (long *)0x0) &&
       (lVar8 = (**(code **)(*(long *)*plVar3 + 0x38))(), lVar8 != 0)) {
      if ((*(byte *)(lVar8 + 8) >> 1 & 1) == 0) {
        lVar8 = lVar8 + 0x18;
      }
      else {
        lVar8 = lVar8 + 0x350;
      }
      puStack_c0 = PTR_DAT_04bb2018 + 0x10;
      lVar10 = *(long *)(param_1 + 0x70);
      local_c8 = PTR_DAT_04bbc5d8 + 0x10;
      fVar13 = (float)*(int *)(lVar8 + 0x14) * 0.5;
      fVar12 = (float)*(int *)(lVar8 + 0x10) * 0.5;
      fVar15 = (float)*(int *)(lVar8 + 0x20) * 0.5;
      fVar14 = (float)*(int *)(lVar8 + 0x24) * 0.5;
      uVar9 = 0;
      if (fVar12 != (float)(int)fVar12) {
        uVar9 = (uint)(fVar12 < 0.0);
      }
      iVar5 = (int)fVar12 - uVar9;
      uVar9 = 0;
      if (fVar13 != (float)(int)fVar13) {
        uVar9 = (uint)(fVar13 < 0.0);
      }
      iVar6 = (int)fVar13 - uVar9;
      uVar9 = 0;
      if (fVar15 != (float)(int)fVar15) {
        uVar9 = (uint)(fVar15 < 0.0);
      }
      iVar11 = (int)fVar15 - uVar9;
      uVar9 = 0;
      if (fVar14 != (float)(int)fVar14) {
        uVar9 = (uint)(fVar14 < 0.0);
      }
      iVar7 = (int)fVar14 - uVar9;
      iVar1 = iVar5;
      if (iVar11 <= iVar5) {
        iVar1 = iVar11;
      }
      if (iVar5 <= iVar11) {
        iVar5 = iVar11;
      }
      local_a8 = iVar1 + -1;
      iVar11 = iVar6;
      if (iVar7 <= iVar6) {
        iVar11 = iVar7;
      }
      if (iVar6 <= iVar7) {
        iVar6 = iVar7;
      }
      iStack_a4 = iVar11 + -1;
      iVar7 = iVar6 + 1;
      _local_80 = CONCAT44(iVar6,iVar5);
      local_b8 = local_a8;
      if (iVar5 + 1 <= local_a8) {
        local_b8 = iVar5 + 1;
      }
      if (local_a8 <= iVar5 + 1) {
        local_a8 = iVar5 + 1;
      }
      iStack_b4 = iStack_a4;
      if (iVar7 <= iStack_a4) {
        iStack_b4 = iVar6 + 1;
      }
      if (iStack_a4 <= iVar7) {
        iStack_a4 = iVar6 + 1;
      }
      local_b0 = puStack_c0;
      local_a0 = local_c8;
      puStack_98 = puStack_c0;
      local_90 = iVar1;
      local_8c = iVar11;
      local_88 = puStack_c0;
      if (lVar10 != 0) {
        local_70 = &puStack_98;
        ppuStack_68 = &local_88;
        local_60 = puStack_c0;
        local_58 = iVar1;
        local_54 = iVar11;
        if (iVar7 != iVar11) {
          do {
            iVar5 = local_58;
            FUN_01320eac(local_74,lVar10,&local_60);
            if (*(long *)(param_1 + 0x58) != 0) {
              iVar6 = *(int *)(param_1 + 0x68);
              iVar4 = *(int *)(param_1 + 0x60);
              if (iVar6 < iVar4) {
                *(int *)(param_1 + 0x68) = iVar6 + 1;
                iVar6 = *(int *)(param_1 + 100) + iVar6;
                iVar2 = 0;
                if (iVar4 <= iVar6) {
                  iVar2 = iVar4;
                }
                lVar8 = *(long *)(param_1 + 0x58) + (long)(iVar6 - iVar2) * 0x18;
                *(int *)(lVar8 + 8) = iVar5;
                *(int *)(lVar8 + 0xc) = iVar11;
                *(undefined2 *)(lVar8 + 0x10) = local_74[0];
              }
            }
            if (iVar5 < local_80) {
              local_58 = iVar5 + 1;
            }
            else {
              iVar11 = iVar11 + 1;
              local_58 = local_90;
              local_54 = iVar11;
            }
          } while ((iVar1 != local_58) || (iVar7 != iVar11));
        }
        *(undefined1 *)(param_1 + 0x78) = 1;
      }
      if (*(long *)(param_1 + 0xa0) != 0) {
        FUN_0130a670(*(long *)(param_1 + 0xa0),param_1 + 0x80,&local_c8);
        *(undefined1 *)(param_1 + 0xa8) = 1;
      }
    }
  }
  return;
}

