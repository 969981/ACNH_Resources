
void FUN_03f34470(long param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  char *pcVar11;
  uint uVar12;
  char *pcVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  undefined **local_a0;
  char *pcStack_98;
  char *local_90;
  undefined8 local_88;
  char local_80 [32];
  
  uVar3 = *(uint *)(param_2 + 1);
  if (0 < (int)uVar3) {
    uVar5 = uVar3 - 1;
    lVar15 = 0;
    do {
      if (*(char *)(*param_2 + (ulong)uVar5 + lVar15) == '.') {
        iVar9 = (int)lVar15;
        if (uVar3 + iVar9 == 0) {
          return;
        }
        uVar16 = uVar3 + iVar9;
        local_80[0] = '\0';
        uVar12 = uVar16;
        if (uVar3 <= uVar16) {
          uVar12 = 0;
        }
        pcVar11 = (char *)(*param_2 + (long)(int)uVar12);
        local_88 = 0x2000000000;
        local_90 = local_80;
        if (local_80 != pcVar11) {
          uVar12 = 0xffffffff;
          pcVar13 = pcVar11;
          do {
            cVar4 = *pcVar13;
            uVar12 = uVar12 + 1;
            pcVar13 = pcVar13 + 1;
          } while (cVar4 != '\0');
          if ((int)uVar12 < 1) {
            uVar12 = 0;
            pcVar11 = local_80;
          }
          else {
            if (0x1e < (int)uVar12) {
              uVar12 = 0x1f;
            }
            memcpy(local_80,pcVar11,(ulong)uVar12);
            pcVar11 = local_80 + uVar12;
          }
          *pcVar11 = '\0';
          local_88 = CONCAT44(local_88._4_4_,uVar12);
        }
        local_a0 = &PTR_LAB_048f9770;
        pcStack_98 = local_80;
        piVar10 = (int *)(**(code **)(**(long **)(param_1 + 0x128) + 0x38))();
        iVar7 = *piVar10;
        if (iVar7 != 0) {
          if (iVar7 < 2) {
            iVar14 = 0;
LAB_03f345d4:
            iVar7 = FUN_03f2a860(*(long *)(piVar10 + 2) + (long)iVar14 * 0x10,&local_a0);
            iVar8 = iVar14;
            if (iVar7 != 0) goto LAB_03f34628;
          }
          else {
            iVar14 = 0;
            iVar7 = iVar7 + -1;
            while( true ) {
              iVar8 = iVar7 + iVar14;
              if (iVar8 < 0 != SCARRY4(iVar7,iVar14)) {
                iVar8 = iVar8 + 1;
              }
              iVar8 = iVar8 >> 1;
              iVar6 = FUN_03f2a860(*(long *)(piVar10 + 2) + (long)iVar8 * 0x10,&local_a0);
              if (iVar6 == 0) break;
              if (iVar6 < 0) {
                iVar14 = iVar8 + 1;
              }
              else {
                iVar7 = iVar8 + -1;
              }
              if (iVar7 <= iVar14) goto LAB_03f345d4;
            }
          }
          if (iVar8 != -1) {
            lVar15 = *param_2;
            iVar7 = (int)param_2[1];
            if ((int)(uVar5 + iVar9) < -1) {
              if (-2 < (int)(uVar3 + iVar9 + iVar7)) {
                uVar12 = uVar3 + iVar7 + iVar9 + 1;
                goto LAB_03f3471c;
              }
              uVar12 = 0;
LAB_03f34724:
              uVar1 = *(int *)((long)param_2 + 0xc) + ~uVar12;
              if ((int)(uVar12 + 1) < *(int *)((long)param_2 + 0xc)) {
                uVar1 = 1;
              }
              if (0 < (int)uVar1) {
                memcpy((void *)(lVar15 + (ulong)uVar12),&DAT_0408a951,(ulong)uVar1);
                lVar2 = (ulong)uVar1 + (ulong)uVar12;
                *(undefined1 *)(lVar15 + lVar2) = 0;
                iVar7 = (int)param_2[1];
                if ((int)uVar12 <= iVar7) {
                  iVar7 = (int)lVar2;
                  *(int *)(param_2 + 1) = iVar7;
                }
              }
            }
            else {
              uVar12 = uVar16;
LAB_03f3471c:
              if ((int)uVar12 <= iVar7) goto LAB_03f34724;
            }
            uVar12 = (uint)local_88;
            if ((uint)local_88 == 0xffffffff) {
              uVar12 = 0xffffffff;
              pcVar11 = local_90;
              do {
                cVar4 = *pcVar11;
                uVar12 = uVar12 + 1;
                pcVar11 = pcVar11 + 1;
              } while (cVar4 != '\0');
            }
            lVar15 = *param_2;
            if ((int)(uVar5 + iVar9) < -2) {
              if ((int)(iVar7 + uVar3 + iVar9 + 1) < -1) {
                uVar16 = 0;
                goto LAB_03f347e4;
              }
              uVar16 = iVar7 + uVar3 + iVar9 + 2;
            }
            else {
              uVar16 = uVar16 + 1;
            }
            if (iVar7 < (int)uVar16) {
              return;
            }
LAB_03f347e4:
            if (*(int *)((long)param_2 + 0xc) <= (int)(uVar16 + uVar12)) {
              uVar12 = *(int *)((long)param_2 + 0xc) + ~uVar16;
            }
            if ((int)uVar12 < 1) {
              return;
            }
            memcpy((void *)(lVar15 + (ulong)uVar16),local_90,(ulong)uVar12);
            lVar2 = (ulong)uVar12 + (ulong)uVar16;
            *(undefined1 *)(lVar15 + lVar2) = 0;
            if ((int)param_2[1] < (int)uVar16) {
              return;
            }
            *(int *)(param_2 + 1) = (int)lVar2;
            return;
          }
        }
LAB_03f34628:
        piVar10 = (int *)(**(code **)(**(long **)(param_1 + 0x128) + 0x40))();
        iVar9 = *piVar10;
        if (iVar9 == 0) {
          return;
        }
        if (iVar9 < 2) {
          iVar7 = 0;
        }
        else {
          iVar7 = 0;
          iVar9 = iVar9 + -1;
          do {
            iVar14 = iVar9 + iVar7;
            if (iVar14 < 0 != SCARRY4(iVar9,iVar7)) {
              iVar14 = iVar14 + 1;
            }
            iVar14 = iVar14 >> 1;
            iVar8 = FUN_03f2a860(*(long *)(piVar10 + 2) + (long)iVar14 * 0x10,&local_a0);
            if (iVar8 == 0) {
              iVar7 = iVar14;
              goto LAB_03f346b0;
            }
            if (iVar8 < 0) {
              iVar7 = iVar14 + 1;
            }
            else {
              iVar9 = iVar14 + -1;
            }
          } while (iVar7 < iVar9);
        }
        iVar9 = FUN_03f2a860(*(long *)(piVar10 + 2) + (long)iVar7 * 0x10,&local_a0);
        if (iVar9 != 0) {
          return;
        }
LAB_03f346b0:
        if (iVar7 == -1) {
          return;
        }
        uVar5 = *(uint *)(param_2 + 1);
        uVar3 = 3;
        if (*(int *)((long)param_2 + 0xc) <= (int)(uVar5 + 3)) {
          uVar3 = *(int *)((long)param_2 + 0xc) + ~uVar5;
        }
        if ((int)uVar3 < 1) {
          return;
        }
        lVar15 = *param_2;
        memcpy((void *)(lVar15 + (int)uVar5),&DAT_04089d80,(ulong)uVar3);
        *(undefined1 *)(lVar15 + (int)(uVar3 + uVar5)) = 0;
        *(uint *)(param_2 + 1) = uVar3 + uVar5;
        return;
      }
      lVar15 = lVar15 + -1;
    } while (0 < (long)((ulong)uVar5 + lVar15 + 1));
  }
  return;
}

