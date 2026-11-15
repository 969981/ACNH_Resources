
void FUN_02049ee0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  uint uVar11;
  long *plVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined *local_b8;
  undefined8 *puStack_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined1 local_9c;
  undefined1 local_95;
  
  plVar12 = (long *)PTR_DAT_04bb3350;
  lVar15 = *(long *)(param_1 + 0x2b8);
  if (lVar15 == 0) {
    lVar16 = 1;
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar16 = *(long *)(lVar8 + 0xa8);
    *(long *)(lVar8 + 0xa8) = lVar15;
  }
  if (*(int *)(param_1 + 0x2c0) < *(int *)(param_1 + 0x2c4)) {
    local_95 = 0;
    local_a8 = 0x10;
    local_9c = 0;
    local_a4 = 0x65636e6172746e45;
    puStack_b0 = &local_a4;
    local_b8 = PTR_DAT_04bb2ab0 + 0x10;
    uVar6 = FUN_02931830(PTR_DAT_04bc39e0,&local_b8,0);
    puVar2 = PTR_DAT_04bb2720;
    puVar1 = PTR_DAT_04bb2640;
    if (((-1 < (int)uVar6) && (lVar15 = *(long *)PTR_DAT_04bb2720, lVar15 != 0)) &&
       (*(long *)(lVar15 + 0x330) != 0)) {
      puVar9 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
      iVar7 = FUN_006bd550(*puVar9,0);
      if (((iVar7 == 0x758f7eaf) && (lVar15 = *(long *)puVar2, lVar15 != 0)) &&
         ((lVar8 = *(long *)(lVar15 + 0x330), lVar8 != 0 && (uVar6 < *(uint *)(lVar8 + 0x260))))) {
        lVar8 = lVar8 + 0x250;
        uVar11 = uVar6 + 1 & 3;
        if (2 < uVar6) {
          uVar14 = uVar6 + 1 & 0xfffffffc;
          do {
            uVar14 = uVar14 - 4;
            lVar8 = *(long *)(*(long *)(*(long *)(*(long *)(lVar8 + 8) + 8) + 8) + 8);
          } while (uVar14 != 0);
        }
        for (; uVar11 != 0; uVar11 = uVar11 - 1) {
          lVar8 = *(long *)(lVar8 + 8);
        }
        if (((lVar8 != 0) && (lVar8 != 0x40)) && (*(char *)(lVar8 + -4) != '\0')) {
          puVar9 = (undefined8 *)
                   (**(code **)(**(long **)puVar1 + 0x18))
                             (*(long **)puVar1,*(undefined4 *)(lVar15 + 0x338));
          iVar7 = FUN_006bd550(*puVar9,0);
          if ((((iVar7 == 0x758f7eaf) && (lVar15 = *(long *)puVar2, lVar15 != 0)) &&
              (lVar15 = *(long *)(lVar15 + 0x330), lVar15 != 0)) &&
             (uVar6 < *(uint *)(lVar15 + 0x260))) {
            uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
            lVar15 = lVar15 + 0x250;
            uVar11 = uVar6 + 1;
            uVar14 = uVar11 & 3;
            if (2 < uVar6) {
              uVar11 = uVar11 & 0xfffffffc;
              do {
                uVar11 = uVar11 - 4;
                lVar15 = *(long *)(*(long *)(*(long *)(*(long *)(lVar15 + 8) + 8) + 8) + 8);
              } while (uVar11 != 0);
            }
            for (; uVar14 != 0; uVar14 = uVar14 - 1) {
              lVar15 = *(long *)(lVar15 + 8);
            }
            if ((lVar15 != 0) && (lVar15 != 0x40)) {
              uVar17 = *(undefined4 *)(lVar15 + -0x34);
              uVar18 = *(undefined4 *)(lVar15 + -0x30);
              uVar20 = *(undefined4 *)(lVar15 + -0x24);
              uVar19 = *(undefined4 *)(lVar15 + -0x2c);
              uVar21 = *(undefined4 *)(lVar15 + -0x28);
              lVar15 = *(long *)PTR_DAT_04bb2698;
              if (lVar15 == 0) {
                plVar10 = malloc(0x1f0);
              }
              else {
                lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
                plVar10 = (long *)(lVar15 + 8);
                if (lVar8 != 0) {
                  plVar10 = (long *)(lVar8 + 0xa8);
                }
                plVar10 = (long *)*plVar10;
                if (plVar10 == (long *)0x0) {
                  plVar10 = (long *)0x0;
                }
                else {
                  plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x1f0,8);
                }
              }
              *(undefined8 *)((long)plVar10 + 0x1d) = 0;
              puVar4 = PTR_DAT_04bb5cb0;
              puVar2 = PTR_DAT_04bb5bb8;
              plVar10[2] = 0;
              plVar10[3] = 0;
              puVar3 = PTR_DAT_04bb5ba8;
              plVar10[0x10] = 0;
              plVar10[0x11] = 0;
              plVar10[0x16] = 0;
              plVar10[0x17] = 0;
              puVar1 = puVar3 + 0x10;
              plVar10[10] = (long)(puVar2 + 0x10);
              *plVar10 = (long)(puVar4 + 0x10);
              plVar10[1] = 0;
              plVar10[0xc] = (long)puVar1;
              plVar10[0xd] = 0;
              plVar10[0xe] = 0;
              plVar10[0xf] = (long)puVar1;
              plVar10[0x12] = (long)puVar1;
              plVar10[0x13] = 0;
              plVar10[0x14] = 0;
              plVar10[0x15] = (long)puVar1;
              plVar10[0x18] = (long)puVar1;
              plVar10[0x19] = 0;
              plVar10[0x1a] = 0;
              plVar10[0x1b] = (long)puVar1;
              plVar10[0x1c] = 0;
              plVar10[0x1d] = 0;
              plVar10[0x1e] = (long)puVar1;
              plVar10[0x1f] = 0;
              plVar10[0x20] = 0;
              plVar10[0x21] = (long)puVar1;
              plVar10[0x22] = 0;
              plVar10[0x23] = 0;
              plVar10[0x24] = (long)puVar1;
              plVar10[0x25] = 0;
              plVar10[0x26] = 0;
              plVar10[0x27] = (long)puVar1;
              plVar10[0x28] = 0;
              plVar10[0x29] = 0;
              plVar10[0x2a] = (long)puVar1;
              plVar10[0x2b] = 0;
              plVar10[0x2c] = 0;
              plVar10[0x2d] = (long)puVar1;
              plVar10[0x2e] = 0;
              plVar10[0x2f] = 0;
              plVar10[0x30] = (long)puVar1;
              plVar10[0x31] = 0;
              plVar10[0x32] = 0;
              plVar10[0x33] = (long)puVar1;
              plVar10[0x34] = 0;
              plVar10[0x35] = 0;
              *(undefined4 *)(plVar10 + 0x36) = 0;
              puVar5 = PTR_DAT_04bbc1a0;
              puVar1 = PTR_DAT_04bbc1a0 + 0x10;
              *(undefined1 *)(plVar10 + 0x37) = 0;
              puVar4 = PTR_DAT_04bb2010;
              puVar2 = PTR_DAT_04bb2010 + 0x10;
              plVar10[0x3a] = 0;
              *(undefined4 *)(plVar10 + 0x3d) = 0;
              *(undefined4 *)(plVar10 + 5) = uVar21;
              *(undefined4 *)((long)plVar10 + 0x2c) = 0x41200000;
              *(undefined4 *)(plVar10 + 6) = uVar20;
              *(undefined8 *)((long)plVar10 + 0x34) = 0;
              *(undefined4 *)((long)plVar10 + 0x3c) = 0;
              *(undefined4 *)(plVar10 + 8) = uVar17;
              *(undefined4 *)((long)plVar10 + 0x44) = uVar18;
              *(undefined4 *)(plVar10 + 9) = uVar19;
              *(undefined4 *)(plVar10 + 0xb) = 0;
              plVar10[0x38] = (long)puVar1;
              plVar10[0x39] = (long)puVar2;
              *(undefined4 *)((long)plVar10 + 0x1c) = 0x800;
              *(undefined1 *)((long)plVar10 + 0x1ec) = 1;
              plVar10[0x3b] = (long)puVar2;
              plVar10[0x3c] = 0;
              *(undefined4 *)((long)plVar10 + 0x4c) = 0x200000;
              if (*(int *)(param_1 + 0x2c0) < *(int *)(param_1 + 0x2c4)) {
                *(long **)(*(long *)(param_1 + 0x2c8) + (long)*(int *)(param_1 + 0x2c0) * 8) =
                     plVar10;
                *(int *)(param_1 + 0x2c0) = *(int *)(param_1 + 0x2c0) + 1;
              }
              puVar1 = PTR_DAT_04bb27c8;
              lVar15 = *(long *)PTR_DAT_04bb27c8;
              if ((lVar15 != 0) && (plVar10[2] == 0 && plVar10[1] == 0)) {
                nn::os::LockMutex((MutexType *)(lVar15 + 0x50));
                plVar12 = (long *)(lVar15 + 0x70);
                lVar8 = *plVar12;
                plVar10 = (long *)((long)*(int *)(lVar15 + 0x84) + (long)plVar10);
                *plVar12 = (long)plVar10;
                *plVar10 = lVar8;
                plVar10[1] = (long)plVar12;
                if (lVar8 != 0) {
                  *(long **)(lVar8 + 8) = plVar10;
                }
                *(int *)(lVar15 + 0x80) = *(int *)(lVar15 + 0x80) + 1;
                nn::os::UnlockMutex((MutexType *)(lVar15 + 0x50));
                plVar12 = (long *)PTR_DAT_04bb3350;
              }
              lVar15 = *(long *)PTR_DAT_04bb2698;
              if (lVar15 == 0) {
                plVar10 = malloc(0x1f0);
              }
              else {
                lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
                plVar10 = (long *)(lVar15 + 8);
                if (lVar8 != 0) {
                  plVar10 = (long *)(lVar8 + 0xa8);
                }
                plVar10 = (long *)*plVar10;
                if (plVar10 == (long *)0x0) {
                  plVar10 = (long *)0x0;
                }
                else {
                  plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x1f0,8);
                }
              }
              *(undefined8 *)((long)plVar10 + 0x1d) = 0;
              plVar10[2] = 0;
              plVar10[3] = 0;
              *plVar10 = (long)(PTR_DAT_04bb5cb0 + 0x10);
              plVar10[1] = 0;
              puVar2 = PTR_DAT_04bb5bb8 + 0x10;
              plVar10[0x10] = 0;
              plVar10[0x11] = 0;
              plVar10[10] = (long)puVar2;
              puVar3 = puVar3 + 0x10;
              plVar10[0x16] = 0;
              plVar10[0x17] = 0;
              plVar10[0x1c] = 0;
              plVar10[0x1d] = 0;
              plVar10[0x22] = 0;
              plVar10[0x23] = 0;
              plVar10[0x28] = 0;
              plVar10[0x29] = 0;
              plVar10[0x2e] = 0;
              plVar10[0x2f] = 0;
              plVar10[0x34] = 0;
              plVar10[0x35] = 0;
              plVar10[0xc] = (long)puVar3;
              plVar10[0xd] = 0;
              plVar10[0xe] = 0;
              plVar10[0xf] = (long)puVar3;
              plVar10[0x12] = (long)puVar3;
              plVar10[0x13] = 0;
              plVar10[0x14] = 0;
              plVar10[0x15] = (long)puVar3;
              plVar10[0x18] = (long)puVar3;
              plVar10[0x19] = 0;
              plVar10[0x1a] = 0;
              plVar10[0x1b] = (long)puVar3;
              plVar10[0x1e] = (long)puVar3;
              plVar10[0x1f] = 0;
              plVar10[0x20] = 0;
              plVar10[0x21] = (long)puVar3;
              plVar10[0x24] = (long)puVar3;
              plVar10[0x25] = 0;
              plVar10[0x26] = 0;
              plVar10[0x27] = (long)puVar3;
              plVar10[0x2a] = (long)puVar3;
              plVar10[0x2b] = 0;
              plVar10[0x2c] = 0;
              plVar10[0x2d] = (long)puVar3;
              plVar10[0x30] = (long)puVar3;
              plVar10[0x31] = 0;
              plVar10[0x32] = 0;
              plVar10[0x33] = (long)puVar3;
              *(undefined4 *)(plVar10 + 0x36) = 0;
              *(undefined1 *)(plVar10 + 0x37) = 0;
              plVar10[0x3a] = 0;
              *(undefined4 *)(plVar10 + 0x3d) = 0;
              *(undefined4 *)(plVar10 + 5) = uVar21;
              *(undefined4 *)((long)plVar10 + 0x2c) = 0x41200000;
              *(undefined4 *)(plVar10 + 6) = uVar20;
              *(undefined8 *)((long)plVar10 + 0x34) = 0;
              *(undefined4 *)((long)plVar10 + 0x3c) = 0;
              *(undefined4 *)(plVar10 + 8) = uVar17;
              *(undefined4 *)((long)plVar10 + 0x44) = uVar18;
              *(undefined4 *)(plVar10 + 9) = uVar19;
              *(undefined4 *)(plVar10 + 0xb) = 0;
              *(undefined1 *)((long)plVar10 + 0x1ec) = 0;
              plVar10[0x38] = (long)(puVar5 + 0x10);
              plVar10[0x39] = (long)(puVar4 + 0x10);
              *(undefined4 *)((long)plVar10 + 0x1c) = 0x1000;
              plVar10[0x3b] = (long)(puVar4 + 0x10);
              plVar10[0x3c] = 0;
              *(undefined4 *)((long)plVar10 + 0x4c) = 0x200000;
              if (*(int *)(param_1 + 0x2c0) < *(int *)(param_1 + 0x2c4)) {
                *(long **)(*(long *)(param_1 + 0x2c8) + (long)*(int *)(param_1 + 0x2c0) * 8) =
                     plVar10;
                *(int *)(param_1 + 0x2c0) = *(int *)(param_1 + 0x2c0) + 1;
              }
              lVar15 = *(long *)puVar1;
              if ((lVar15 != 0) && (plVar10[2] == 0 && plVar10[1] == 0)) {
                nn::os::LockMutex((MutexType *)(lVar15 + 0x50));
                plVar13 = (long *)(lVar15 + 0x70);
                lVar8 = *plVar13;
                plVar10 = (long *)((long)*(int *)(lVar15 + 0x84) + (long)plVar10);
                *plVar13 = (long)plVar10;
                *plVar10 = lVar8;
                plVar10[1] = (long)plVar13;
                if (lVar8 != 0) {
                  *(long **)(lVar8 + 8) = plVar10;
                }
                *(int *)(lVar15 + 0x80) = *(int *)(lVar15 + 0x80) + 1;
                nn::os::UnlockMutex((MutexType *)(lVar15 + 0x50));
              }
            }
          }
        }
      }
    }
  }
  if (lVar16 != 1) {
    lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
    *(long *)(lVar15 + 0xa8) = lVar16;
  }
  return;
}

