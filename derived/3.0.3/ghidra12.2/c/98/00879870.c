
void FUN_00879870(long *param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined4 uVar6;
  uint *puVar7;
  undefined *puVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  uint *puVar13;
  int iVar14;
  ulong uVar15;
  char cVar16;
  undefined *local_70;
  long local_68;
  
  (**(code **)(*param_3 + 0x18))(param_3);
  uVar6 = FUN_006bd550(param_3[1],0);
  local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar6);
  puVar7 = (uint *)FUN_0088c0d0(param_2 + 8,&local_70);
  if (puVar7 == (uint *)0x0) {
    uVar9 = *(uint *)(param_2 + 1000);
    if ((0 < (int)uVar9) ||
       (((*(long *)(param_2 + 0x2d8) != 0 &&
         (puVar7 = *(uint **)(*(long *)(param_2 + 0x2d8) + 8), puVar7 != (uint *)0x0)) &&
        (uVar9 = *puVar7, 0 < (int)uVar9)))) {
      uVar10 = 0;
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      puVar8 = PTR_DAT_04bb3250;
      do {
        if ((int)*(uint *)(param_2 + 1000) < 1) {
          if (((((*(long *)(param_2 + 0x2d8) != 0) &&
                (puVar7 = *(uint **)(*(long *)(param_2 + 0x2d8) + 8), puVar7 != (uint *)0x0)) &&
               ((*(uint *)(param_2 + 0x2f0) <= uVar10 ||
                (*(char *)(*(long *)(param_2 + 0x2f8) + uVar10) != '\0')))) &&
              ((uVar10 < *puVar7 && (puVar7[1] != 0)))) && ((ushort)puVar7[2] != 0)) {
            iVar14 = 0xc;
            if (*(char *)((long)puVar7 + 10) != '\0') {
              iVar14 = 0x1c;
            }
            puVar7 = (uint *)((ulong)(puVar7[1] * (int)uVar10 + (uint)(ushort)puVar7[2] * 8 + iVar14
                                     ) + (long)puVar7);
            goto joined_r0x00879bc8;
          }
        }
        else if (uVar10 < *(uint *)(param_2 + 1000)) {
          uVar15 = uVar10 & 0xffffffff;
          if (*(uint *)(param_2 + 0x3d8) <= uVar10) {
            uVar15 = 0;
          }
          puVar7 = *(uint **)(*(long *)(param_2 + 0x3e0) + uVar15 * 8);
joined_r0x00879bc8:
          if (puVar7 != (uint *)0x0) {
            uVar4 = *puVar7;
            if (uVar4 == 0 || puVar7 == (uint *)(ulong)uVar4) {
              if (uVar4 != 0) goto LAB_00879c40;
            }
            else {
              puVar13 = (uint *)((long)puVar7 - (long)(ulong)uVar4);
              if (((*puVar13 != 0) && (uVar4 = puVar13[1], uVar4 != 0)) &&
                 ((ulong)(ushort)puVar13[2] != 0)) {
                lVar11 = 0xc;
                if (*(char *)((long)puVar13 + 10) != '\0') {
                  lVar11 = 0x1c;
                }
                lVar11 = (long)puVar13 + lVar11 + (ulong)(ushort)puVar13[2] * 8;
                if (lVar11 != 0) {
                  uVar3 = 0;
                  if ((ulong)uVar4 != 0) {
                    uVar3 = (uint)((ulong)((long)puVar7 - lVar11) / (ulong)uVar4);
                  }
                  if (*puVar13 <= uVar3) {
                    uVar3 = 0xffffffff;
                  }
                  if ((uVar3 < DAT_04ce9768) &&
                     (*(short *)(DAT_04ce9770 + (long)(int)uVar3 * 2) == 4)) goto LAB_00879a40;
                }
              }
LAB_00879c40:
              cVar16 = *PTR_DAT_04bb3248;
              do {
                if (cVar16 == '\0') {
                  cVar16 = '\x01';
                  *PTR_DAT_04bb3248 = 1;
                  memset(puVar8,0xff,0x288);
                  puVar8 = PTR_DAT_04bb3250;
                }
                else {
                  uVar4 = *(uint *)(puVar8 + 0x14c);
                  if (-1 < (int)uVar4) {
                    lVar11 = (ulong)uVar4 + (long)puVar7;
                    goto LAB_00879a94;
                  }
                  if (uVar4 != 0xffffffff) break;
                }
                puVar13 = (uint *)(ulong)*puVar7;
                lVar11 = 0;
                if ((*puVar7 == 0) || (puVar7 == puVar13)) goto LAB_00879a94;
                lVar11 = 0xc;
                if (*(char *)((long)puVar7 + (10 - (long)puVar13)) != '\0') {
                  lVar11 = 0x1c;
                }
                lVar2 = (long)puVar7 + (lVar11 - (long)puVar13);
                if (lVar2 == 0) break;
                uVar15 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar13));
                *(undefined4 *)(puVar8 + 0x14c) = 0xfffffffe;
                lVar11 = 0;
                if (uVar15 == 0) goto LAB_00879a94;
                piVar12 = (int *)(lVar2 + 4);
                while (piVar12[-1] != -0x44991235) {
                  piVar12 = piVar12 + 2;
                  uVar15 = uVar15 - 1;
                  if (uVar15 == 0) {
                    lVar11 = 0;
                    goto LAB_00879a94;
                  }
                }
                iVar14 = 0;
                if (*piVar12 != -1) {
                  iVar14 = *piVar12;
                }
                *(int *)(puVar8 + 0x14c) = iVar14;
              } while (*puVar7 != 0);
            }
            lVar11 = 0;
LAB_00879a94:
            local_68 = *(long *)PTR_PTR_04bb3270;
            if (lVar11 != 0) {
              local_68 = lVar11;
            }
            local_70 = puVar1;
            (**(code **)(*param_3 + 0x18))(param_3);
            (**(code **)(*param_3 + 0x18))(param_3);
            lVar11 = param_3[1];
            (**(code **)(local_70 + 0x18))(&local_70);
            if (lVar11 == local_68) goto LAB_008798d4;
            uVar15 = 0;
            bVar5 = true;
            do {
              lVar11 = param_3[1] + 2 + uVar15;
              cVar16 = *(char *)(lVar11 + -2);
              puVar8 = PTR_DAT_04bb3250;
              if (cVar16 != *(char *)(local_68 + uVar15)) break;
              if (cVar16 == '\0') {
                if (bVar5) goto LAB_008798d4;
                break;
              }
              cVar16 = *(char *)(lVar11 + -1);
              if (cVar16 != *(char *)(local_68 + uVar15 + 1)) break;
              if (cVar16 == '\0') goto LAB_008798d4;
              cVar16 = *(char *)(param_3[1] + 2 + uVar15);
              if (cVar16 != *(char *)(local_68 + uVar15 + 2)) break;
              if (cVar16 == '\0') goto LAB_008798d4;
              bVar5 = uVar15 < 0x7fffe;
              uVar15 = uVar15 + 3;
            } while (uVar15 != 0x80001);
          }
        }
LAB_00879a40:
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar9);
      if (0 < *(int *)(param_2 + 1000)) {
        puVar7 = (uint *)**(undefined8 **)(param_2 + 0x3e0);
        goto LAB_008798d4;
      }
    }
    if ((((*(long *)(param_2 + 0x2d8) == 0) ||
         (piVar12 = *(int **)(*(long *)(param_2 + 0x2d8) + 8), piVar12 == (int *)0x0)) ||
        ((*(int *)(param_2 + 0x2f0) != 0 && (**(char **)(param_2 + 0x2f8) == '\0')))) ||
       (((*piVar12 == 0 || (piVar12[1] == 0)) || ((ulong)*(ushort *)(piVar12 + 2) == 0)))) {
      puVar7 = (uint *)0x0;
    }
    else {
      lVar11 = 0xc;
      if (*(char *)((long)piVar12 + 10) != '\0') {
        lVar11 = 0x1c;
      }
      puVar7 = (uint *)((long)piVar12 + lVar11 + (ulong)*(ushort *)(piVar12 + 2) * 8);
    }
  }
LAB_008798d4:
  puVar8 = PTR_DAT_04bb3250;
  puVar1 = PTR_DAT_04bb3248;
  if (*puVar7 != 0) {
    cVar16 = *PTR_DAT_04bb3248;
    do {
      if (cVar16 == '\0') {
        cVar16 = '\x01';
        *puVar1 = 1;
        memset(puVar8,0xff,0x288);
      }
      else {
        uVar9 = *(uint *)(puVar8 + 0x148);
        if (-1 < (int)uVar9) {
          lVar11 = (ulong)uVar9 + (long)puVar7;
          goto LAB_008799ac;
        }
        if (uVar9 != 0xffffffff) break;
      }
      puVar13 = (uint *)(ulong)*puVar7;
      lVar11 = 0;
      if ((*puVar7 == 0) || (puVar7 == puVar13)) goto LAB_008799ac;
      lVar11 = 0xc;
      if (*(char *)((long)puVar7 + (10 - (long)puVar13)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar2 = (long)puVar7 + (lVar11 - (long)puVar13);
      if (lVar2 == 0) break;
      uVar10 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar13));
      *(undefined4 *)(puVar8 + 0x148) = 0xfffffffe;
      lVar11 = 0;
      if (uVar10 == 0) goto LAB_008799ac;
      piVar12 = (int *)(lVar2 + 4);
      while (piVar12[-1] != 0x443c0fb7) {
        piVar12 = piVar12 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          lVar11 = 0;
          goto LAB_008799ac;
        }
      }
      iVar14 = 0;
      if (*piVar12 != -1) {
        iVar14 = *piVar12;
      }
      *(int *)(puVar8 + 0x148) = iVar14;
    } while (*puVar7 != 0);
  }
  lVar11 = 0;
LAB_008799ac:
  lVar2 = *(long *)PTR_PTR_04bb3260;
  if (lVar11 != 0) {
    lVar2 = lVar11;
  }
  *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
  param_1[1] = lVar2;
  return;
}

