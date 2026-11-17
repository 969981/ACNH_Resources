
/* WARNING: Removing unreachable block (ram,0x030fb234) */
/* WARNING: Removing unreachable block (ram,0x030fb23c) */

void FUN_030fb1e0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  undefined *local_110;
  undefined1 local_108;
  int local_104;
  undefined *local_100;
  int local_f8;
  int iStack_f4;
  undefined4 local_f0;
  undefined2 local_ec;
  undefined *local_e8;
  int local_e0;
  int local_d4;
  undefined **local_d0;
  undefined **ppuStack_c8;
  undefined **local_c0;
  uint local_b0 [12];
  
  puVar5 = PTR_DAT_04bbc570;
  puVar4 = &DAT_05636dd8;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
    puVar4 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
  }
  if (puVar4[1] != 0) {
    lVar16 = 0;
    local_d4 = 0;
    local_e8 = PTR_DAT_04bc43f8 + 0x10;
    puVar1 = PTR_DAT_04bc4608 + 0x10;
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    do {
      lVar18 = *(long *)(param_1 + 0x250 + lVar16 * 8);
      if (lVar18 != 0) {
        uVar15 = (uint)lVar16;
        uVar3 = uVar15;
        if (9 < uVar15) {
          uVar3 = 0;
        }
        local_e0 = (&DAT_05636e30)[(int)uVar3];
        local_108 = puVar5[8];
        local_f0 = *(undefined4 *)(puVar5 + 0x20);
        local_f8 = *(int *)(puVar5 + 0x18);
        iStack_f4 = *(int *)(puVar5 + 0x1c);
        local_104 = *(int *)(puVar5 + 0xc);
        local_ec = *(undefined2 *)(puVar5 + 0x24);
        local_110 = puVar1;
        local_100 = puVar2;
        local_b0[0] = uVar15;
        if (local_e0 != 0) {
          local_c0 = &local_110;
          ppuStack_c8 = &local_e8;
          local_d0 = &PTR_FUN_04a9b150;
          if (puVar4[1] != 0) {
            plVar10 = (long *)(*(code *)**(undefined8 **)(puVar4[1] + 0x10))();
            iVar7 = (**(code **)(*plVar10 + 0x18))();
            if (0 < iVar7) {
              iVar17 = 0;
              do {
                FUN_01360490(local_b0,puVar4[1],iVar17);
                uVar11 = (*(code *)*local_d0)(&local_d0,local_b0);
                if ((uVar11 & 1) != 0) break;
                bVar6 = iVar7 + -1 != iVar17;
                iVar17 = iVar17 + 1;
              } while (bVar6);
            }
          }
        }
        iVar17 = iStack_f4;
        iVar7 = local_f8;
        local_d4 = local_104;
        if (local_104 != 0) {
          uVar8 = FUN_026641e0(lVar16,0);
          uVar9 = FUN_026640d0(lVar16);
          lVar14 = param_1 + 0x848 + lVar16 * 0x68;
          uVar12 = (*(undefined8 **)(lVar18 + 0x230))[(ulong)(2 < *(uint *)(lVar18 + 0x228)) * 2];
          uVar13 = **(undefined8 **)(lVar18 + 0x230);
          *(uint *)(lVar14 + 0x58) = uVar15;
          *(undefined4 *)(lVar14 + 0x5c) = uVar8;
          *(undefined4 *)(lVar14 + 0x60) = uVar9;
          *(float *)(lVar14 + 0xc) = (float)iVar7 * 5.0 + 2.5;
          *(undefined4 *)(lVar14 + 0x10) = 0;
          *(float *)(lVar14 + 0x14) = (float)iVar17 * 5.0 + 2.5;
          *(undefined8 *)(lVar14 + 0x28) = uVar13;
          *(long *)(lVar14 + 0x18) = lVar18;
          *(undefined8 *)(lVar14 + 0x20) = uVar12;
          *(undefined1 *)(lVar14 + 8) = 1;
        }
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 != 10);
  }
  return;
}

