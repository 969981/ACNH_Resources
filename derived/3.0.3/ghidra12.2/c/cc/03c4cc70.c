
/* WARNING: Removing unreachable block (ram,0x03c4d02c) */
/* WARNING: Removing unreachable block (ram,0x03c4d084) */

void FUN_03c4cc70(long param_1)

{
  bool bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  byte *pbVar13;
  long *plVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  undefined *local_78;
  char *pcStack_70;
  undefined4 local_64;
  
  uVar9 = *(uint *)(param_1 + 0x1e8);
  *(undefined1 *)(param_1 + 0x208) = 0;
  if (1 < (int)uVar9) {
    plVar14 = *(long **)(param_1 + 0x1f0);
    uVar6 = (ulong)(uVar9 >> 1);
    do {
      uVar15 = (uint)uVar6;
      uVar8 = uVar15 * 2;
      lVar16 = plVar14[uVar6 - 1 & 0xffffffff];
      if ((int)uVar8 <= (int)uVar9) {
        uVar18 = uVar6 & 0xffffffff;
        do {
          if ((int)uVar8 < (int)uVar9) {
            lVar11 = (plVar14 + (int)uVar8)[-1];
            lVar10 = plVar14[(int)uVar8];
            plVar12 = (long *)(lVar11 + 8);
            (**(code **)(*plVar12 + 0x18))(plVar12);
            (**(code **)(*plVar12 + 0x18))(plVar12);
            plVar12 = (long *)(lVar10 + 8);
            pbVar13 = *(byte **)(lVar11 + 0x10);
            (**(code **)(*plVar12 + 0x18))(plVar12);
            pbVar5 = *(byte **)(lVar10 + 0x10);
            if (pbVar13 == pbVar5) {
              uVar15 = 0;
            }
            else {
              pbVar13 = *(byte **)(lVar11 + 0x10);
              lVar11 = 0x7ffff;
              do {
                bVar2 = *pbVar13;
                if (bVar2 != *pbVar5) {
                  uVar15 = (uint)(bVar2 < *pbVar5);
                  break;
                }
                uVar15 = 0;
                if (bVar2 == 0) break;
                bVar1 = lVar11 != 0;
                pbVar5 = pbVar5 + 1;
                pbVar13 = pbVar13 + 1;
                lVar11 = lVar11 + -1;
              } while (bVar1);
            }
            uVar15 = uVar15 | uVar8;
          }
          else {
            uVar15 = uVar8;
          }
          lVar11 = plVar14[(int)(uVar15 - 1)];
          (**(code **)(*(long *)(lVar16 + 8) + 0x18))(lVar16 + 8);
          (**(code **)(*(long *)(lVar16 + 8) + 0x18))(lVar16 + 8);
          plVar12 = (long *)(lVar11 + 8);
          pbVar13 = *(byte **)(lVar16 + 0x10);
          (**(code **)(*plVar12 + 0x18))(plVar12);
          pbVar5 = *(byte **)(lVar11 + 0x10);
          uVar17 = (uint)uVar18;
          if (pbVar13 == pbVar5) {
LAB_03c4ce30:
            uVar15 = uVar17;
            break;
          }
          pbVar13 = *(byte **)(lVar16 + 0x10);
          lVar11 = 0x7ffff;
          while( true ) {
            bVar2 = *pbVar13;
            if (bVar2 != *pbVar5) break;
            if (bVar2 == 0) goto LAB_03c4ce30;
            bVar1 = lVar11 == 0;
            pbVar5 = pbVar5 + 1;
            pbVar13 = pbVar13 + 1;
            lVar11 = lVar11 + -1;
            if (bVar1) goto LAB_03c4ce30;
          }
          if (*pbVar5 <= bVar2) goto LAB_03c4ce30;
          uVar8 = uVar15 * 2;
          uVar18 = (ulong)uVar15;
          plVar14[(int)(uVar17 - 1)] = plVar14[(int)(uVar15 - 1)];
        } while ((int)uVar8 <= (int)uVar9);
      }
      plVar14[(int)(uVar15 - 1)] = lVar16;
      bVar1 = 1 < (long)uVar6;
      uVar6 = uVar6 - 1;
    } while (bVar1);
    uVar6 = (ulong)uVar9 - 1;
    uVar18 = uVar6 & 0xffffffff;
    lVar16 = plVar14[uVar18];
    plVar14[uVar18] = *plVar14;
    uVar18 = (ulong)uVar9;
    if (2 < uVar9) {
LAB_03c4ce60:
      uVar7 = uVar6;
      uVar9 = 2;
      uVar8 = 1;
      do {
        uVar15 = uVar9;
        if ((int)uVar9 < (int)uVar7) {
          lVar11 = (plVar14 + (int)uVar9)[-1];
          lVar10 = plVar14[(int)uVar9];
          plVar12 = (long *)(lVar11 + 8);
          (**(code **)(*plVar12 + 0x18))(plVar12);
          (**(code **)(*plVar12 + 0x18))(plVar12);
          plVar12 = (long *)(lVar10 + 8);
          pbVar13 = *(byte **)(lVar11 + 0x10);
          (**(code **)(*plVar12 + 0x18))(plVar12);
          pbVar5 = *(byte **)(lVar10 + 0x10);
          if (pbVar13 == pbVar5) {
            uVar15 = 0;
          }
          else {
            pbVar13 = *(byte **)(lVar11 + 0x10);
            lVar11 = 0x7ffff;
            do {
              bVar2 = *pbVar13;
              if (bVar2 != *pbVar5) {
                uVar15 = (uint)(bVar2 < *pbVar5);
                break;
              }
              uVar15 = 0;
              if (bVar2 == 0) break;
              bVar1 = lVar11 != 0;
              pbVar5 = pbVar5 + 1;
              pbVar13 = pbVar13 + 1;
              lVar11 = lVar11 + -1;
            } while (bVar1);
          }
          uVar15 = uVar15 | uVar9;
        }
        lVar11 = plVar14[(int)(uVar15 - 1)];
        (**(code **)(*(long *)(lVar16 + 8) + 0x18))(lVar16 + 8);
        (**(code **)(*(long *)(lVar16 + 8) + 0x18))(lVar16 + 8);
        plVar12 = (long *)(lVar11 + 8);
        pbVar13 = *(byte **)(lVar16 + 0x10);
        (**(code **)(*plVar12 + 0x18))(plVar12);
        pbVar5 = *(byte **)(lVar11 + 0x10);
        if (pbVar13 == pbVar5) goto LAB_03c4cfc8;
        pbVar13 = *(byte **)(lVar16 + 0x10);
        lVar11 = 0x7ffff;
        while( true ) {
          bVar2 = *pbVar13;
          if (bVar2 != *pbVar5) break;
          if (bVar2 == 0) goto LAB_03c4cfc8;
          bVar1 = lVar11 == 0;
          pbVar5 = pbVar5 + 1;
          pbVar13 = pbVar13 + 1;
          lVar11 = lVar11 + -1;
          if (bVar1) goto LAB_03c4cfc8;
        }
        if (*pbVar5 <= bVar2) goto LAB_03c4cfc8;
        uVar9 = uVar15 << 1;
        plVar14[(int)(uVar8 - 1)] = plVar14[(int)(uVar15 - 1)];
        uVar8 = uVar15;
        if ((long)uVar18 <= (long)(int)uVar9) goto LAB_03c4cfc8;
      } while( true );
    }
LAB_03c4cffc:
    *plVar14 = lVar16;
  }
  puVar3 = PTR_DAT_04bb2628;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,3);
  uVar6 = (**(code **)(**(long **)(*(long *)PTR_DAT_04bb2628 + 0x118) + 0x80))
                    (*(long **)(*(long *)PTR_DAT_04bb2628 + 0x118),0x1000);
  local_64 = 3;
  local_78 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "SoundResource";
  plVar14 = (long *)FUN_038c6d48(uVar6 & 0xfffffffffffff000,&local_78,
                                 *(undefined8 *)(*(long *)puVar3 + 0x118),0x1000,1,1);
  *(long **)(param_1 + 0x100) = plVar14;
  lVar10 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x78);
  uVar4 = (**(code **)(*plVar14 + 0x60))();
  lVar16 = (**(code **)(**(long **)(param_1 + 0x100) + 0x68))();
  lVar11 = (**(code **)(**(long **)(param_1 + 0x100) + 0x60))();
  *(undefined8 *)(param_1 + 0x148) = uVar4;
  *(long *)(param_1 + 0x150) = lVar16 - lVar11;
  nn::os::LockMutex((MutexType *)(lVar10 + 0x58));
  param_1 = param_1 + *(int *)(lVar10 + 0x1c);
  plVar14 = (long *)(lVar10 + 8);
  lVar16 = *plVar14;
  *plVar14 = param_1 + 0x108;
  *(long *)(param_1 + 0x108) = lVar16;
  *(long **)(param_1 + 0x110) = plVar14;
  if (lVar16 != 0) {
    *(long *)(lVar16 + 8) = param_1 + 0x108;
  }
  *(int *)(lVar10 + 0x18) = *(int *)(lVar10 + 0x18) + 1;
  nn::os::UnlockMutex((MutexType *)(lVar10 + 0x58));
  return;
LAB_03c4cfc8:
  plVar14[(int)(uVar8 - 1)] = lVar16;
  uVar6 = uVar7 - 1 & 0xffffffff;
  lVar16 = plVar14[uVar6];
  plVar14[uVar6] = *plVar14;
  uVar6 = uVar7 - 1;
  uVar18 = uVar7;
  if (uVar7 < 3) goto LAB_03c4cffc;
  goto LAB_03c4ce60;
}

