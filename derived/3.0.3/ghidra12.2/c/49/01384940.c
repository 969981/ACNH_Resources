
void FUN_01384940(undefined1 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  long *plVar6;
  short *psVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  undefined **local_b0 [4];
  uint local_90;
  undefined4 local_8c;
  undefined *local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 local_68;
  
  puVar5 = PTR_DAT_04bb27a8;
  uVar10 = 0;
  lVar8 = *(long *)PTR_DAT_04bb27a8 + 0x30;
  do {
    iVar9 = (int)uVar10;
    if (*(long *)(lVar8 + (-(uVar10 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3)) != 0) {
      FUN_01258c6c();
      plVar6 = *(long **)(lVar8 + (long)iVar9 * 8);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      *(undefined8 *)(lVar8 + (long)iVar9 * 8) = 0;
    }
    uVar10 = (ulong)(iVar9 + 1U);
  } while (iVar9 + 1U != 0x39);
  iVar9 = *(int *)(param_1 + 4);
  FUN_0131e120(*(long *)puVar5 + 0x28,iVar9);
  if (iVar9 == 0) {
    FUN_011a2b58(DAT_050d57c8 + 0x10);
    FUN_012e2e4c(*(long *)puVar5 + 0x4b30);
    lVar8 = *(long *)puVar5;
    *(undefined8 *)(lVar8 + 0x4b68) = 0;
    *(undefined4 *)(lVar8 + 0x4b70) = 0;
  }
  else {
    lVar8 = *(long *)puVar5;
    *(undefined8 *)(lVar8 + 0x4b38) = 0;
    *(undefined1 *)(lVar8 + 0x4b30) = 0;
    *(undefined2 *)(lVar8 + 0x4b32) = 0;
    FUN_0126dab0(lVar8 + 0x4b68);
  }
  FUN_00946e10(*(long *)PTR_DAT_04bb27c8 + 0x28,1);
  if (*(int *)(*(long *)puVar5 + 0x200) == 0) {
    FUN_011b71a0(DAT_050d57c8 + 0x920);
    FUN_011b78a0(DAT_050d57c8 + 0x920);
    lVar8 = DAT_050d57c8;
    local_b0[0] = &PTR_FUN_04986a00;
    uVar11 = *(uint *)(DAT_050d57c8 + 0x50);
    if (0 < (int)uVar11) {
      uVar10 = 0;
      puVar1 = PTR_DAT_04bbc1a0 + 0x10;
      do {
        lVar14 = *(long *)(lVar8 + 0x58);
        if (**(int **)(lVar14 + uVar10 * 8) != 0x7e3d1e46) {
          puStack_80 = &DAT_048f9750;
          local_90 = (uint)uVar10;
          local_70 = &DAT_048f9750;
          local_8c = **(undefined4 **)(lVar14 + uVar10 * 8);
          lVar14 = *(long *)(lVar14 + uVar10 * 8);
          local_78 = *(undefined8 *)(lVar14 + 0x18);
          local_68 = *(undefined8 *)(lVar14 + 0x28);
          local_88 = puVar1;
          (*(code *)*local_b0[0])(local_b0,&local_90);
        }
        uVar10 = uVar10 + 1;
      } while (uVar11 != uVar10);
    }
    uVar4 = 0x6622bd46;
  }
  else {
    uVar4 = 0xdb5d97b8;
  }
  FUN_02b3d230(*(long *)PTR_DAT_04bb5008 + 0x26e8,uVar4);
  if (*(int *)(param_1 + 4) == 0) {
    FUN_012a72d0(*(long *)puVar5 + 0x1648);
  }
  puVar1 = PTR_DAT_04bb3170;
  lVar8 = *(long *)(DAT_05231900 + 0x100);
  if (lVar8 != 0) {
    iVar9 = *(int *)(*(long *)puVar5 + 0x4738);
    if (iVar9 != 0) {
      lVar14 = *(long *)(*(long *)puVar5 + 0x4740);
      iVar13 = 0;
      do {
        psVar7 = (short *)(lVar14 + (long)iVar13 * 0x70);
        if ((0 < *(int *)(psVar7 + 0x16)) && (((ushort)psVar7[8] >> 6 & 1) == 0)) {
          if (((ushort)psVar7[8] >> 2 & 1) == 0) {
            if (*psVar7 != *(short *)puVar1) {
LAB_01384c10:
              if (*(long *)(psVar7 + 0xc) != 0) {
                FUN_015a30c0(lVar8);
              }
            }
          }
          else if (*(long *)(psVar7 + 4) != 0) goto LAB_01384c10;
        }
        uVar3 = *(undefined2 *)puVar1;
        *(int *)(psVar7 + 0x16) = 0;
        *(undefined2 *)(lVar14 + (long)iVar13 * 0x70 + 0x28) = uVar3;
        iVar13 = iVar13 + 1;
      } while (iVar9 != iVar13);
    }
  }
  if (param_1[1] != '\0') {
    lVar8 = *(long *)puVar5;
    uVar11 = 0;
LAB_01384c64:
    do {
      if (uVar11 == 0) {
        lVar14 = *(long *)(lVar8 + 0x1f8);
      }
      else {
        plVar6 = (long *)(lVar8 + 0x30) + uVar11;
        if (0x38 < uVar11) {
          plVar6 = (long *)(lVar8 + 0x30);
        }
        lVar14 = *plVar6;
      }
      if (lVar14 != 0) {
        if ((uVar11 == 0) && ((*(byte *)(lVar14 + 8) & 1) != 0)) {
          uVar11 = 1;
          goto LAB_01384c64;
        }
        local_90 = uVar11;
        FUN_01259024(lVar14,0);
        FUN_0125934c(lVar14);
        lVar8 = *(long *)puVar5;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != 0x39);
  }
  uVar11 = 0;
  do {
    uVar10 = (ulong)uVar11;
    if (0x38 < uVar11) {
      uVar10 = 0;
    }
    if (((byte)(&DAT_051a5280)[uVar10] >> (ulong)(*(uint *)(param_1 + 4) & 0x1f) & 1) != 0) {
      local_b0[0] = (undefined **)CONCAT44(local_b0[0]._4_4_,uVar11);
      if (uVar11 != 0) {
        if (uVar11 == 0) {
          lVar8 = *(long *)(*(long *)puVar5 + 0x1f8);
        }
        else {
          plVar6 = (long *)(*(long *)puVar5 + 0x30);
          plVar2 = plVar6 + uVar11;
          if (0x38 < uVar11) {
            plVar2 = plVar6;
          }
          lVar8 = *plVar2;
        }
        if ((lVar8 != 0) && (*(long *)(lVar8 + 0xb0) != 0)) {
          local_90 = uVar11;
          FUN_01381fa0(*(long *)(lVar8 + 0xb0),*param_1);
        }
      }
    }
    uVar12 = 0x39;
    if ((int)uVar11 < 0x39) {
      uVar12 = uVar11 + 1;
    }
    uVar11 = uVar12;
  } while (uVar12 != 0x39);
  return;
}

