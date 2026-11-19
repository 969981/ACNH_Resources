
void FUN_039a9540(long param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  char cVar8;
  short sVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  undefined *local_70;
  long local_68;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    sVar9 = 0;
    puVar18 = *(undefined8 **)(param_1 + 0x38);
    puVar1 = PTR_DAT_04bb3498 + 0x10;
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    puVar4 = puVar18 + *(int *)(param_1 + 0x30);
    do {
      uVar11 = (**(code **)(**(long **)*puVar18 + 0xb8))();
      if (0 < (int)uVar11) {
        uVar21 = 0;
        do {
          puVar20 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x38) + (long)sVar9 * 8);
          if (((*PTR_DAT_04bb3490 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04bb3490), iVar12 != 0)) {
            *(undefined **)PTR_DAT_04bb3488 = puVar1;
            __cxa_guard_release(PTR_DAT_04bb3490);
          }
          if ((puVar20 != (undefined8 *)0x0) &&
             (uVar13 = (**(code **)*puVar20)(puVar20,PTR_DAT_04bb3488), (uVar13 & 1) != 0)) {
            plVar5 = (long *)(puVar20[0x24] + ((long)(uVar21 << 0x30) >> 0x29));
            lVar14 = *plVar5;
            if (*(char *)(lVar14 + 0x9d) != '\0') {
              uVar13 = 0;
              lVar6 = puVar20[0x24] + (long)(short)uVar21 * 0x80;
              plVar3 = (long *)(lVar6 + 0x58);
              do {
                local_68 = *(long *)(*(long *)(lVar14 + 0x30) + uVar13 * 8) + 2;
                local_70 = puVar2;
                (**(code **)(*param_3 + 0x18))(param_3);
                (**(code **)(*param_3 + 0x18))(param_3);
                lVar14 = param_3[1];
                (**(code **)(local_70 + 0x18))(&local_70);
                if (lVar14 == local_68) {
LAB_039a9794:
                  lVar14 = *(long *)(param_2 + 0x88);
                  uVar7 = *(undefined8 *)(param_2 + 0x90);
                  lVar17 = *plVar3;
                  lVar15 = uVar13 * 8;
                  lVar19 = *(long *)(*(long *)(lVar6 + 0x50) + lVar15);
                  *(long *)(*(long *)(lVar6 + 0x50) + lVar15) = lVar14;
                  *(undefined8 *)(*plVar3 + lVar15) = uVar7;
                  if ((*(code **)(lVar6 + 0x78) != (code *)0x0) &&
                     ((lVar19 != lVar14 ||
                      (*(long *)(lVar17 + lVar15) != *(long *)(*plVar3 + lVar15))))) {
                    (**(code **)(lVar6 + 0x78))(plVar5,uVar13 & 0xffffffff);
                  }
                }
                else {
                  uVar16 = 0;
                  bVar10 = true;
                  do {
                    lVar14 = param_3[1] + 2 + uVar16;
                    cVar8 = *(char *)(lVar14 + -2);
                    if (cVar8 != *(char *)(local_68 + uVar16)) break;
                    if (cVar8 == '\0') {
                      if (bVar10) goto LAB_039a9794;
                      break;
                    }
                    cVar8 = *(char *)(lVar14 + -1);
                    if (cVar8 != *(char *)(local_68 + uVar16 + 1)) break;
                    if (cVar8 == '\0') goto LAB_039a9794;
                    cVar8 = *(char *)(param_3[1] + 2 + uVar16);
                    if (cVar8 != *(char *)(local_68 + uVar16 + 2)) break;
                    if (cVar8 == '\0') goto LAB_039a9794;
                    bVar10 = uVar16 < 0x7fffe;
                    uVar16 = uVar16 + 3;
                  } while (uVar16 != 0x80001);
                }
                lVar14 = *plVar5;
                uVar13 = uVar13 + 1;
              } while (uVar13 < *(byte *)(lVar14 + 0x9d));
            }
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 != uVar11);
      }
      sVar9 = sVar9 + 1;
      puVar18 = puVar18 + 1;
    } while (puVar18 != puVar4);
  }
  return;
}

