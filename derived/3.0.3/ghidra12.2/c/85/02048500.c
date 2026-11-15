
void FUN_02048500(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  uint uVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined *local_98;
  undefined8 *puStack_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined1 local_7c;
  undefined1 local_75;
  
  puVar3 = PTR_DAT_04bb3350;
  lVar12 = *(long *)(param_1 + 0x2b8);
  if (lVar12 == 0) {
    lVar13 = 1;
    iVar5 = *(int *)(param_1 + 0x2c0);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar13 = *(long *)(lVar6 + 0xa8);
    *(long *)(lVar6 + 0xa8) = lVar12;
    iVar5 = *(int *)(param_1 + 0x2c0);
  }
  if (iVar5 == 0) {
    local_75 = 0;
    local_88 = 0x10;
    local_7c = 0;
    local_84 = 0x65636e6172746e45;
    puStack_90 = &local_84;
    local_98 = PTR_DAT_04bb2ab0 + 0x10;
    uVar4 = FUN_02931830(PTR_DAT_04bc39e0,&local_98,0);
    puVar2 = PTR_DAT_04bb2720;
    puVar1 = PTR_DAT_04bb2640;
    if (((-1 < (int)uVar4) && (lVar12 = *(long *)PTR_DAT_04bb2720, lVar12 != 0)) &&
       (*(long *)(lVar12 + 0x330) != 0)) {
      puVar7 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
      iVar5 = FUN_006bd550(*puVar7,0);
      if (((iVar5 == 0x758f7eaf) && (lVar12 = *(long *)puVar2, lVar12 != 0)) &&
         ((lVar6 = *(long *)(lVar12 + 0x330), lVar6 != 0 && (uVar4 < *(uint *)(lVar6 + 0x260))))) {
        lVar6 = lVar6 + 0x250;
        uVar9 = uVar4 + 1 & 3;
        if (2 < uVar4) {
          uVar11 = uVar4 + 1 & 0xfffffffc;
          do {
            uVar11 = uVar11 - 4;
            lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(lVar6 + 8) + 8) + 8) + 8);
          } while (uVar11 != 0);
        }
        for (; uVar9 != 0; uVar9 = uVar9 - 1) {
          lVar6 = *(long *)(lVar6 + 8);
        }
        if (((lVar6 != 0) && (lVar6 != 0x40)) && (*(char *)(lVar6 + -4) != '\0')) {
          puVar7 = (undefined8 *)
                   (**(code **)(**(long **)puVar1 + 0x18))
                             (*(long **)puVar1,*(undefined4 *)(lVar12 + 0x338));
          iVar5 = FUN_006bd550(*puVar7,0);
          if ((((iVar5 == 0x758f7eaf) && (lVar12 = *(long *)puVar2, lVar12 != 0)) &&
              (lVar12 = *(long *)(lVar12 + 0x330), lVar12 != 0)) &&
             (uVar4 < *(uint *)(lVar12 + 0x260))) {
            uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
            lVar12 = lVar12 + 0x250;
            uVar9 = uVar4 + 1;
            uVar11 = uVar9 & 3;
            if (2 < uVar4) {
              uVar9 = uVar9 & 0xfffffffc;
              do {
                uVar9 = uVar9 - 4;
                lVar12 = *(long *)(*(long *)(*(long *)(*(long *)(lVar12 + 8) + 8) + 8) + 8);
              } while (uVar9 != 0);
            }
            for (; uVar11 != 0; uVar11 = uVar11 - 1) {
              lVar12 = *(long *)(lVar12 + 8);
            }
            if ((lVar12 != 0) && (lVar12 != 0x40)) {
              uVar14 = *(undefined4 *)(lVar12 + -0x34);
              uVar15 = *(undefined4 *)(lVar12 + -0x30);
              uVar17 = *(undefined4 *)(lVar12 + -0x24);
              uVar16 = *(undefined4 *)(lVar12 + -0x2c);
              uVar18 = *(undefined4 *)(lVar12 + -0x28);
              lVar12 = *(long *)PTR_DAT_04bb2698;
              if (lVar12 == 0) {
                plVar8 = malloc(0x1f0);
              }
              else {
                lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
                plVar8 = (long *)(lVar12 + 8);
                if (lVar6 != 0) {
                  plVar8 = (long *)(lVar6 + 0xa8);
                }
                plVar8 = (long *)*plVar8;
                if (plVar8 == (long *)0x0) {
                  plVar8 = (long *)0x0;
                }
                else {
                  plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x1f0,8);
                }
              }
              *(undefined8 *)((long)plVar8 + 0x1d) = 0;
              puVar2 = PTR_DAT_04bb5bb8;
              puVar1 = PTR_DAT_04bb5cb0 + 0x10;
              plVar8[2] = 0;
              plVar8[3] = 0;
              *plVar8 = (long)puVar1;
              plVar8[1] = 0;
              puVar1 = PTR_DAT_04bb5ba8;
              plVar8[10] = (long)(puVar2 + 0x10);
              plVar8[0x10] = 0;
              plVar8[0x11] = 0;
              puVar1 = puVar1 + 0x10;
              plVar8[0x16] = 0;
              plVar8[0x17] = 0;
              plVar8[0x1c] = 0;
              plVar8[0x1d] = 0;
              plVar8[0x22] = 0;
              plVar8[0x23] = 0;
              plVar8[0x28] = 0;
              plVar8[0x29] = 0;
              plVar8[0x2e] = 0;
              plVar8[0x2f] = 0;
              plVar8[0x34] = 0;
              plVar8[0x35] = 0;
              plVar8[0xc] = (long)puVar1;
              plVar8[0xd] = 0;
              plVar8[0xe] = 0;
              plVar8[0xf] = (long)puVar1;
              plVar8[0x12] = (long)puVar1;
              plVar8[0x13] = 0;
              plVar8[0x14] = 0;
              plVar8[0x15] = (long)puVar1;
              plVar8[0x18] = (long)puVar1;
              plVar8[0x19] = 0;
              plVar8[0x1a] = 0;
              plVar8[0x1b] = (long)puVar1;
              plVar8[0x1e] = (long)puVar1;
              plVar8[0x1f] = 0;
              plVar8[0x20] = 0;
              plVar8[0x21] = (long)puVar1;
              plVar8[0x24] = (long)puVar1;
              plVar8[0x25] = 0;
              plVar8[0x26] = 0;
              plVar8[0x27] = (long)puVar1;
              plVar8[0x2a] = (long)puVar1;
              plVar8[0x2b] = 0;
              plVar8[0x2c] = 0;
              plVar8[0x2d] = (long)puVar1;
              plVar8[0x30] = (long)puVar1;
              plVar8[0x31] = 0;
              plVar8[0x32] = 0;
              plVar8[0x33] = (long)puVar1;
              *(undefined4 *)(plVar8 + 0x36) = 0;
              puVar1 = PTR_DAT_04bbc1a0 + 0x10;
              *(undefined1 *)(plVar8 + 0x37) = 0;
              puVar2 = PTR_DAT_04bb2010 + 0x10;
              plVar8[0x3a] = 0;
              *(undefined4 *)(plVar8 + 0x3d) = 0;
              *(undefined4 *)(plVar8 + 5) = uVar18;
              *(undefined4 *)(plVar8 + 6) = uVar17;
              *(undefined8 *)((long)plVar8 + 0x34) = 0;
              *(undefined4 *)((long)plVar8 + 0x3c) = 0;
              *(undefined4 *)(plVar8 + 8) = uVar14;
              *(undefined4 *)((long)plVar8 + 0x44) = uVar15;
              *(undefined4 *)(plVar8 + 9) = uVar16;
              *(undefined4 *)(plVar8 + 0xb) = 0;
              plVar8[0x38] = (long)puVar1;
              plVar8[0x39] = (long)puVar2;
              *(undefined4 *)((long)plVar8 + 0x2c) = 0x41200000;
              *(undefined4 *)((long)plVar8 + 0x1c) = 0x1000;
              *(undefined1 *)((long)plVar8 + 0x1ec) = 1;
              plVar8[0x3b] = (long)puVar2;
              plVar8[0x3c] = 0;
              *(undefined4 *)((long)plVar8 + 0x4c) = 8;
              if (*(int *)(param_1 + 0x2c0) < *(int *)(param_1 + 0x2c4)) {
                *(long **)(*(long *)(param_1 + 0x2c8) + (long)*(int *)(param_1 + 0x2c0) * 8) =
                     plVar8;
                *(int *)(param_1 + 0x2c0) = *(int *)(param_1 + 0x2c0) + 1;
              }
              lVar12 = *(long *)PTR_DAT_04bb27c8;
              if ((lVar12 != 0) && (plVar8[2] == 0 && plVar8[1] == 0)) {
                nn::os::LockMutex((MutexType *)(lVar12 + 0x50));
                plVar10 = (long *)(lVar12 + 0x70);
                lVar6 = *plVar10;
                plVar8 = (long *)((long)*(int *)(lVar12 + 0x84) + (long)plVar8);
                *plVar10 = (long)plVar8;
                *plVar8 = lVar6;
                plVar8[1] = (long)plVar10;
                if (lVar6 != 0) {
                  *(long **)(lVar6 + 8) = plVar8;
                }
                *(int *)(lVar12 + 0x80) = *(int *)(lVar12 + 0x80) + 1;
                nn::os::UnlockMutex((MutexType *)(lVar12 + 0x50));
              }
            }
          }
        }
      }
    }
  }
  if (lVar13 != 1) {
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    *(long *)(lVar12 + 0xa8) = lVar13;
  }
  return;
}

