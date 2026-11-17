
void FUN_03078810(long param_1)

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
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined *local_80;
  undefined4 local_78;
  
  puVar11 = PTR_DAT_04bc4d98;
  puVar10 = PTR_DAT_04bc4d90;
  if (*(long *)(param_1 + 0x1670) != 0) {
    lVar18 = *(long *)(*(long *)(param_1 + 0x1670) + 0x590);
    if ((lVar18 != 0) && (uVar6 = *(uint *)(lVar18 + 0x2f8), uVar6 != 0)) {
      uVar19 = 0;
      puVar1 = PTR_DAT_04bc4da0 + 0x10;
      puVar2 = PTR_DAT_04bc4f00 + 0x10;
      do {
        puVar17 = (undefined8 *)0x0;
        if (((-1 < (int)uVar19) && ((int)uVar19 < (int)*(uint *)(lVar18 + 0x208))) &&
           (uVar19 < *(uint *)(lVar18 + 0x208))) {
          puVar17 = *(undefined8 **)(*(long *)(lVar18 + 0x210) + uVar19 * 8);
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
            if (*(int *)(lVar18 + 0x208) != 0) {
              iVar12 = 0;
              do {
                if (*(undefined8 **)(*(long *)(lVar18 + 0x210) + (long)iVar12 * 8) == puVar17) {
                  if (-1 < iVar12) {
                    iVar7 = *(int *)(lVar18 + 0x2e8);
                    iVar15 = *(int *)(lVar18 + 0x430) - *(int *)(lVar18 + 0x438);
                    iVar9 = 0;
                    if (iVar7 != 0) {
                      iVar9 = iVar12 / iVar7;
                    }
                    if ((*(byte *)(lVar18 + 1000) >> 1 & 1) == 0) {
                      iVar15 = iVar15 + iVar9;
                    }
                    else {
                      uVar8 = *(uint *)(lVar18 + 0x434);
                      uVar14 = 0;
                      if ((int)uVar8 < iVar15) {
                        uVar14 = ~uVar8;
                      }
                      if (iVar15 < 0) {
                        uVar14 = uVar8 + 1;
                      }
                      iVar3 = iVar15 + iVar9 + uVar14;
                      iVar15 = *(int *)(lVar18 + 0x3d0);
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
                    if (*(int *)(lVar18 + 0x3cc) <= (int)uVar14 || 0x7fffffff < uVar14) {
                      uVar14 = 0xffffffff;
                    }
                    goto LAB_0307898c;
                  }
                  break;
                }
                iVar12 = iVar12 + 1;
              } while (*(int *)(lVar18 + 0x208) != iVar12);
            }
            uVar14 = 0xffffffff;
LAB_0307898c:
            if (uVar14 == *(uint *)(param_1 + 0x16a4)) {
              local_78 = 0x14;
              local_80 = puVar2;
              (**(code **)(*plVar16 + 0x18))(plVar16,&local_80);
              uVar20 = 0;
            }
            else {
              if (uVar14 != *(uint *)(param_1 + 0x16a8)) goto LAB_030788c0;
              local_80 = PTR_DAT_04bc4f00 + 0x10;
              local_78 = 0x14;
              (**(code **)(*plVar16 + 0x18))(plVar16,&local_80);
              uVar20 = 0x3f800000;
            }
            (**(code **)(plVar16[3] + 0x158))(uVar20,plVar16[1]);
          }
        }
LAB_030788c0:
        uVar19 = uVar19 + 1;
      } while (uVar19 != uVar6);
    }
  }
  return;
}

