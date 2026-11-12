
void FUN_0087a0f0(long *param_1,long param_2,long *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined4 uVar8;
  uint *puVar9;
  uint uVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  uint *puVar14;
  int iVar15;
  ulong uVar16;
  char cVar17;
  undefined *local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  (**(code **)(*param_3 + 0x18))(param_3);
  uVar8 = FUN_006bd550(param_3[1],0);
  local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar8);
  puVar9 = (uint *)FUN_0088c0d0(param_2 + 8,&local_88);
  puVar1 = PTR_DAT_04bb3250;
  puVar5 = PTR_DAT_04bb3248;
  if (puVar9 != (uint *)0x0) {
    if (*puVar9 != 0) {
      cVar17 = *PTR_DAT_04bb3248;
      do {
        if (cVar17 == '\0') {
          cVar17 = '\x01';
          *puVar5 = 1;
          memset(puVar1,0xff,0x288);
        }
        else {
          uVar10 = *(uint *)(puVar1 + 0x148);
          if (-1 < (int)uVar10) {
            lVar13 = (ulong)uVar10 + (long)puVar9;
            goto LAB_0087a890;
          }
          if (uVar10 != 0xffffffff) break;
        }
        puVar14 = (uint *)(ulong)*puVar9;
        lVar13 = 0;
        if ((*puVar9 == 0) || (puVar9 == puVar14)) goto LAB_0087a890;
        lVar13 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar14)) != '\0') {
          lVar13 = 0x1c;
        }
        lVar2 = (long)puVar9 + (lVar13 - (long)puVar14);
        if (lVar2 == 0) break;
        uVar11 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar14));
        *(undefined4 *)(puVar1 + 0x148) = 0xfffffffe;
        lVar13 = 0;
        if (uVar11 == 0) goto LAB_0087a890;
        piVar12 = (int *)(lVar2 + 4);
        while (piVar12[-1] != 0x443c0fb7) {
          piVar12 = piVar12 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) {
            lVar13 = 0;
            goto LAB_0087a890;
          }
        }
        iVar15 = 0;
        if (*piVar12 != -1) {
          iVar15 = *piVar12;
        }
        *(int *)(puVar1 + 0x148) = iVar15;
      } while (*puVar9 != 0);
    }
    goto LAB_0087a88c;
  }
  local_78 = *param_4;
  if ((char)(local_78 >> 0x20) < '\x05') {
    lVar13 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
    local_88 = (undefined *)(lVar13 + -0x15180);
    local_78 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_88);
  }
  uVar6 = local_78;
  puVar5 = PTR_DAT_04bb3250;
  uVar10 = *(uint *)(param_2 + 1000);
  local_78._7_1_ = SUB81(uVar6,7);
  local_78._0_7_ = (uint7)CONCAT24(5,(undefined4)local_78);
  if (((int)uVar10 < 1) &&
     (((*(long *)(param_2 + 0x2d8) == 0 ||
       (puVar9 = *(uint **)(*(long *)(param_2 + 0x2d8) + 8), puVar9 == (uint *)0x0)) ||
      (uVar10 = *puVar9, (int)uVar10 < 1)))) {
LAB_0087a754:
    if ((((*(long *)(param_2 + 0x2d8) == 0) ||
         (piVar12 = *(int **)(*(long *)(param_2 + 0x2d8) + 8), piVar12 == (int *)0x0)) ||
        ((*(int *)(param_2 + 0x2f0) != 0 && (**(char **)(param_2 + 0x2f8) == '\0')))) ||
       (((*piVar12 == 0 || (piVar12[1] == 0)) || ((ulong)*(ushort *)(piVar12 + 2) == 0)))) {
      puVar9 = (uint *)0x0;
    }
    else {
      lVar13 = 0xc;
      if (*(char *)((long)piVar12 + 10) != '\0') {
        lVar13 = 0x1c;
      }
      puVar9 = (uint *)((long)piVar12 + lVar13 + (ulong)*(ushort *)(piVar12 + 2) * 8);
    }
  }
  else {
    uVar11 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      if ((int)*(uint *)(param_2 + 1000) < 1) {
        if (((((*(long *)(param_2 + 0x2d8) != 0) &&
              (puVar9 = *(uint **)(*(long *)(param_2 + 0x2d8) + 8), puVar9 != (uint *)0x0)) &&
             ((*(uint *)(param_2 + 0x2f0) <= uVar11 ||
              (*(char *)(*(long *)(param_2 + 0x2f8) + uVar11) != '\0')))) &&
            ((uVar11 < *puVar9 && (puVar9[1] != 0)))) && ((ushort)puVar9[2] != 0)) {
          iVar15 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            iVar15 = 0x1c;
          }
          puVar9 = (uint *)((ulong)(puVar9[1] * (int)uVar11 + (uint)(ushort)puVar9[2] * 8 + iVar15)
                           + (long)puVar9);
          goto joined_r0x0087a488;
        }
      }
      else if (uVar11 < *(uint *)(param_2 + 1000)) {
        uVar16 = uVar11 & 0xffffffff;
        if (*(uint *)(param_2 + 0x3d8) <= uVar11) {
          uVar16 = 0;
        }
        puVar9 = *(uint **)(*(long *)(param_2 + 0x3e0) + uVar16 * 8);
joined_r0x0087a488:
        if (puVar9 != (uint *)0x0) {
          uVar4 = *puVar9;
          if (uVar4 == 0 || puVar9 == (uint *)(ulong)uVar4) {
            if (uVar4 != 0) goto LAB_0087a500;
          }
          else {
            puVar14 = (uint *)((long)puVar9 - (long)(ulong)uVar4);
            if (((*puVar14 != 0) && (uVar4 = puVar14[1], uVar4 != 0)) &&
               ((ulong)(ushort)puVar14[2] != 0)) {
              lVar13 = 0xc;
              if (*(char *)((long)puVar14 + 10) != '\0') {
                lVar13 = 0x1c;
              }
              lVar13 = (long)puVar14 + lVar13 + (ulong)(ushort)puVar14[2] * 8;
              if (lVar13 != 0) {
                uVar3 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar3 = (uint)((ulong)((long)puVar9 - lVar13) / (ulong)uVar4);
                }
                if (*puVar14 <= uVar3) {
                  uVar3 = 0xffffffff;
                }
                if ((uVar3 < DAT_04ce9768) && (*(short *)(DAT_04ce9770 + (long)(int)uVar3 * 2) == 4)
                   ) goto LAB_0087a2f4;
              }
            }
LAB_0087a500:
            cVar17 = *PTR_DAT_04bb3248;
            do {
              if (cVar17 == '\0') {
                cVar17 = '\x01';
                *PTR_DAT_04bb3248 = 1;
                memset(puVar5,0xff,0x288);
              }
              else {
                uVar4 = *(uint *)(puVar5 + 0x14c);
                if (-1 < (int)uVar4) {
                  lVar13 = (ulong)uVar4 + (long)puVar9;
                  goto LAB_0087a348;
                }
                if (uVar4 != 0xffffffff) break;
              }
              puVar14 = (uint *)(ulong)*puVar9;
              lVar13 = 0;
              if ((*puVar9 == 0) || (puVar9 == puVar14)) goto LAB_0087a348;
              lVar13 = 0xc;
              if (*(char *)((long)puVar9 + (10 - (long)puVar14)) != '\0') {
                lVar13 = 0x1c;
              }
              lVar2 = (long)puVar9 + (lVar13 - (long)puVar14);
              if (lVar2 == 0) break;
              uVar16 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar14));
              *(undefined4 *)(puVar5 + 0x14c) = 0xfffffffe;
              lVar13 = 0;
              if (uVar16 == 0) goto LAB_0087a348;
              piVar12 = (int *)(lVar2 + 4);
              while (piVar12[-1] != -0x44991235) {
                piVar12 = piVar12 + 2;
                uVar16 = uVar16 - 1;
                if (uVar16 == 0) {
                  lVar13 = 0;
                  goto LAB_0087a348;
                }
              }
              iVar15 = 0;
              if (*piVar12 != -1) {
                iVar15 = *piVar12;
              }
              *(int *)(puVar5 + 0x14c) = iVar15;
            } while (*puVar9 != 0);
          }
          lVar13 = 0;
LAB_0087a348:
          local_80 = *(long *)PTR_PTR_04bb3270;
          if (lVar13 != 0) {
            local_80 = lVar13;
          }
          local_88 = puVar1;
          (**(code **)(*param_3 + 0x18))(param_3);
          (**(code **)(*param_3 + 0x18))(param_3);
          lVar13 = param_3[1];
          (**(code **)(local_88 + 0x18))(&local_88);
          if (lVar13 == local_80) {
LAB_0087a5d0:
            if (*puVar9 != 0) {
              cVar17 = *PTR_DAT_04bb3248;
              do {
                if (cVar17 == '\0') {
                  cVar17 = '\x01';
                  *PTR_DAT_04bb3248 = 1;
                  memset(puVar5,0xff,0x288);
                }
                else {
                  uVar4 = *(uint *)(puVar5 + 0x148);
                  if (-1 < (int)uVar4) {
                    lVar13 = (ulong)uVar4 + (long)puVar9;
                    goto LAB_0087a6ac;
                  }
                  if (uVar4 != 0xffffffff) break;
                }
                puVar14 = (uint *)(ulong)*puVar9;
                lVar13 = 0;
                if ((*puVar9 == 0) || (puVar9 == puVar14)) goto LAB_0087a6ac;
                lVar13 = 0xc;
                if (*(char *)((long)puVar9 + (10 - (long)puVar14)) != '\0') {
                  lVar13 = 0x1c;
                }
                lVar2 = (long)puVar9 + (lVar13 - (long)puVar14);
                if (lVar2 == 0) break;
                uVar16 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar14));
                *(undefined4 *)(puVar5 + 0x148) = 0xfffffffe;
                lVar13 = 0;
                if (uVar16 == 0) goto LAB_0087a6ac;
                piVar12 = (int *)(lVar2 + 4);
                while (piVar12[-1] != 0x443c0fb7) {
                  piVar12 = piVar12 + 2;
                  uVar16 = uVar16 - 1;
                  if (uVar16 == 0) {
                    lVar13 = 0;
                    goto LAB_0087a6ac;
                  }
                }
                iVar15 = 0;
                if (*piVar12 != -1) {
                  iVar15 = *piVar12;
                }
                *(int *)(puVar5 + 0x148) = iVar15;
              } while (*puVar9 != 0);
            }
            lVar13 = 0;
LAB_0087a6ac:
            local_80 = *(long *)PTR_PTR_04bb3260;
            if (lVar13 != 0) {
              local_80 = lVar13;
            }
            local_88 = PTR_DAT_04bb2020 + 0x10;
            local_70 = local_78;
            uVar16 = local_78;
            if ((char)(local_78 >> 0x20) < '\x05') {
              local_68 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
              local_68 = local_68 + -0x15180;
              uVar16 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
            }
            local_70._0_6_ = CONCAT24(5,(int)uVar16);
            local_70 = CONCAT26((short)(uVar16 >> 0x30),(undefined6)local_70) & 0xff00ffffffffffff;
            uVar16 = FUN_00879dd0(param_2,&local_88,uVar16,uVar16 >> 0x10,uVar16 >> 0x18,0);
            if ((uVar16 & 1) != 0) goto LAB_0087a7b4;
          }
          else {
            uVar16 = 0;
            bVar7 = true;
            do {
              lVar13 = param_3[1] + 2 + uVar16;
              cVar17 = *(char *)(lVar13 + -2);
              if (cVar17 != *(char *)(local_80 + uVar16)) break;
              if (cVar17 == '\0') {
                if (bVar7) goto LAB_0087a5d0;
                break;
              }
              cVar17 = *(char *)(lVar13 + -1);
              if (cVar17 != *(char *)(local_80 + uVar16 + 1)) break;
              if (cVar17 == '\0') goto LAB_0087a5d0;
              cVar17 = *(char *)(param_3[1] + 2 + uVar16);
              if (cVar17 != *(char *)(local_80 + uVar16 + 2)) break;
              if (cVar17 == '\0') goto LAB_0087a5d0;
              bVar7 = uVar16 < 0x7fffe;
              uVar16 = uVar16 + 3;
            } while (uVar16 != 0x80001);
          }
        }
      }
LAB_0087a2f4:
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar10);
    if (*(int *)(param_2 + 1000) < 1) goto LAB_0087a754;
    puVar9 = (uint *)**(undefined8 **)(param_2 + 0x3e0);
  }
LAB_0087a7b4:
  puVar1 = PTR_DAT_04bb3250;
  puVar5 = PTR_DAT_04bb3248;
  if (*puVar9 != 0) {
    cVar17 = *PTR_DAT_04bb3248;
    do {
      if (cVar17 == '\0') {
        cVar17 = '\x01';
        *puVar5 = 1;
        memset(puVar1,0xff,0x288);
      }
      else {
        uVar10 = *(uint *)(puVar1 + 0x148);
        if (-1 < (int)uVar10) {
          lVar13 = (ulong)uVar10 + (long)puVar9;
          goto LAB_0087a890;
        }
        if (uVar10 != 0xffffffff) break;
      }
      puVar14 = (uint *)(ulong)*puVar9;
      lVar13 = 0;
      if ((*puVar9 == 0) || (puVar9 == puVar14)) goto LAB_0087a890;
      lVar13 = 0xc;
      if (*(char *)((long)puVar9 + (10 - (long)puVar14)) != '\0') {
        lVar13 = 0x1c;
      }
      lVar2 = (long)puVar9 + (lVar13 - (long)puVar14);
      if (lVar2 == 0) break;
      uVar11 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar14));
      *(undefined4 *)(puVar1 + 0x148) = 0xfffffffe;
      lVar13 = 0;
      if (uVar11 == 0) goto LAB_0087a890;
      piVar12 = (int *)(lVar2 + 4);
      while (piVar12[-1] != 0x443c0fb7) {
        piVar12 = piVar12 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) {
          lVar13 = 0;
          goto LAB_0087a890;
        }
      }
      iVar15 = 0;
      if (*piVar12 != -1) {
        iVar15 = *piVar12;
      }
      *(int *)(puVar1 + 0x148) = iVar15;
    } while (*puVar9 != 0);
  }
LAB_0087a88c:
  lVar13 = 0;
LAB_0087a890:
  lVar2 = *(long *)PTR_PTR_04bb3260;
  if (lVar13 != 0) {
    lVar2 = lVar13;
  }
  *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
  param_1[1] = lVar2;
  return;
}

