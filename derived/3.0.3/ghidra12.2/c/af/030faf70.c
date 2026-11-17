
/* WARNING: Removing unreachable block (ram,0x030fafc4) */
/* WARNING: Removing unreachable block (ram,0x030fafcc) */

void FUN_030faf70(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long lVar16;
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
  int local_b0 [12];
  
  puVar4 = PTR_DAT_04bbc570;
  puVar3 = &DAT_05636dd8;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
    puVar3 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
  }
  if (puVar3[1] != 0) {
    local_d4 = 0;
    lVar14 = 0;
    local_e8 = PTR_DAT_04bc43f8 + 0x10;
    puVar1 = PTR_DAT_04bc4608 + 0x10;
    local_e0 = 0;
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    do {
      lVar16 = *(long *)(param_1 + 0x210 + lVar14 * 8);
      if (lVar16 != 0) {
        local_b0[0] = 0;
        uVar9 = FUN_02b674f0(local_b0,lVar14);
        if ((uVar9 & 1) != 0) {
          local_e0 = local_b0[0];
        }
        local_108 = puVar4[8];
        local_f0 = *(undefined4 *)(puVar4 + 0x20);
        local_104 = *(int *)(puVar4 + 0xc);
        local_f8 = *(int *)(puVar4 + 0x18);
        iStack_f4 = *(int *)(puVar4 + 0x1c);
        local_ec = *(undefined2 *)(puVar4 + 0x24);
        local_110 = puVar1;
        local_100 = puVar2;
        if (local_e0 != 0) {
          local_c0 = &local_110;
          ppuStack_c8 = &local_e8;
          local_d0 = &PTR_FUN_04a9b150;
          if (puVar3[1] != 0) {
            plVar10 = (long *)(*(code *)**(undefined8 **)(puVar3[1] + 0x10))();
            iVar6 = (**(code **)(*plVar10 + 0x18))();
            if (0 < iVar6) {
              iVar15 = 0;
              do {
                FUN_01360490(local_b0,puVar3[1],iVar15);
                uVar9 = (*(code *)*local_d0)(&local_d0,local_b0);
                if ((uVar9 & 1) != 0) break;
                bVar5 = iVar6 + -1 != iVar15;
                iVar15 = iVar15 + 1;
              } while (bVar5);
            }
          }
        }
        iVar15 = iStack_f4;
        iVar6 = local_f8;
        local_d4 = local_104;
        if (local_104 != 0) {
          uVar7 = FUN_0266ce40(lVar14);
          uVar8 = FUN_0266ca90(lVar14);
          lVar13 = param_1 + 0x508 + lVar14 * 0x68;
          uVar11 = (*(undefined8 **)(lVar16 + 0x230))[(ulong)(2 < *(uint *)(lVar16 + 0x228)) * 2];
          uVar12 = **(undefined8 **)(lVar16 + 0x230);
          *(int *)(lVar13 + 0x58) = (int)lVar14;
          *(undefined4 *)(lVar13 + 0x5c) = uVar7;
          *(float *)(lVar13 + 0xc) = (float)iVar6 * 5.0 + 2.5;
          *(undefined4 *)(lVar13 + 0x10) = 0;
          *(float *)(lVar13 + 0x14) = (float)iVar15 * 5.0 + 2.5;
          *(undefined4 *)(lVar13 + 0x60) = uVar8;
          *(undefined8 *)(lVar13 + 0x28) = uVar12;
          *(long *)(lVar13 + 0x18) = lVar16;
          *(undefined8 *)(lVar13 + 0x20) = uVar11;
          *(undefined1 *)(lVar13 + 8) = 1;
        }
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 != 8);
  }
  return;
}

