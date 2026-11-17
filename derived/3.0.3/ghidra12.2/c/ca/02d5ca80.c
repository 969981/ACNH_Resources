
void FUN_02d5ca80(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  int iVar15;
  long *plVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined *local_90;
  undefined4 local_88;
  
  puVar11 = PTR_DAT_04bc4d98;
  puVar10 = PTR_DAT_04bc4d90;
  if (param_1 != 0) {
    uVar6 = *(uint *)(param_1 + 0x2f8);
    if (uVar6 != 0) {
      uVar18 = 0;
      puVar1 = PTR_DAT_04bc4da0 + 0x10;
      puVar2 = PTR_DAT_04bc4f00 + 0x10;
      do {
        puVar17 = (undefined8 *)0x0;
        if (((-1 < (int)uVar18) && ((int)uVar18 < (int)*(uint *)(param_1 + 0x208))) &&
           (uVar18 < *(uint *)(param_1 + 0x208))) {
          puVar17 = *(undefined8 **)(*(long *)(param_1 + 0x210) + uVar18 * 8);
        }
        if (((*puVar11 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar11), iVar12 != 0)) {
          *(undefined **)puVar10 = puVar1;
          __cxa_guard_release(puVar11);
        }
        if ((puVar17 != (undefined8 *)0x0) &&
           (uVar13 = (**(code **)*puVar17)(puVar17,puVar10), (uVar13 & 1) != 0)) {
          lVar5 = 0x38;
          if (*(uint *)(puVar17 + 0x5d) < 8) {
            lVar5 = 0;
          }
          plVar16 = *(long **)(puVar17[0x5e] + lVar5);
          if ((plVar16 != (long *)0x0) && (plVar16[1] != 0)) {
            if (*(int *)(param_1 + 0x208) != 0) {
              iVar12 = 0;
              do {
                if (*(undefined8 **)(*(long *)(param_1 + 0x210) + (long)iVar12 * 8) == puVar17) {
                  if (-1 < iVar12) {
                    iVar7 = *(int *)(param_1 + 0x2e8);
                    iVar15 = *(int *)(param_1 + 0x430) - *(int *)(param_1 + 0x438);
                    iVar9 = 0;
                    if (iVar7 != 0) {
                      iVar9 = iVar12 / iVar7;
                    }
                    if ((*(byte *)(param_1 + 1000) >> 1 & 1) == 0) {
                      iVar15 = iVar15 + iVar9;
                    }
                    else {
                      uVar8 = *(uint *)(param_1 + 0x434);
                      uVar14 = 0;
                      if ((int)uVar8 < iVar15) {
                        uVar14 = ~uVar8;
                      }
                      if (iVar15 < 0) {
                        uVar14 = uVar8 + 1;
                      }
                      iVar3 = iVar15 + iVar9 + uVar14;
                      iVar15 = *(int *)(param_1 + 0x3d0);
                      iVar4 = 0;
                      if (iVar15 <= iVar3) {
                        iVar4 = iVar15;
                      }
                      if (-1 < iVar3) {
                        iVar15 = -iVar4;
                      }
                      iVar15 = iVar15 + iVar3;
                    }
                    uVar14 = (iVar15 * iVar7 - iVar9 * iVar7) + iVar12;
                    if (*(int *)(param_1 + 0x3cc) <= (int)uVar14 || 0x7fffffff < uVar14) {
                      uVar14 = 0xffffffff;
                    }
                    goto LAB_02d5cb00;
                  }
                  break;
                }
                iVar12 = iVar12 + 1;
              } while (*(int *)(param_1 + 0x208) != iVar12);
            }
            uVar14 = 0xffffffff;
LAB_02d5cb00:
            uVar19 = 0x3f800000;
            if (uVar14 != *(uint *)(param_2 + 0x18)) {
              uVar19 = 0;
            }
            local_88 = 0x14;
            uVar20 = 0;
            if (uVar14 != *(uint *)(param_2 + 0x14)) {
              uVar20 = uVar19;
            }
            local_90 = puVar2;
            (**(code **)(*plVar16 + 0x18))(plVar16,&local_90);
            (**(code **)(plVar16[3] + 0x158))(uVar20,plVar16[1]);
          }
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 != uVar6);
    }
  }
  return;
}

