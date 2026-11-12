
bool FUN_00873540(long param_1,ulong *param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *__s;
  undefined *puVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 uVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  int *piVar15;
  int iVar16;
  ulong uVar17;
  uint *puVar18;
  char cVar19;
  ulong uVar20;
  bool bVar21;
  undefined *local_80;
  long lStack_78;
  uint local_6c;
  undefined8 local_68;
  
  local_68 = *param_2;
  if ((param_3 & 1) != 0) {
    if ((char)(local_68 >> 0x20) < '\x05') {
      lVar10 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
      local_80 = (undefined *)(lVar10 + -0x15180);
      local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_80);
    }
    uVar20 = local_68 >> 0x30;
    local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
    local_68 = CONCAT26((short)uVar20,(undefined6)local_68) & 0xff00ffffffffffff;
  }
  puVar6 = PTR_PTR_04bb3260;
  __s = PTR_DAT_04bb3250;
  puVar5 = PTR_DAT_04bb3248;
  uVar13 = *(uint *)(param_1 + 1000);
  if (((int)uVar13 < 1) &&
     (((*(long *)(param_1 + 0x2d8) == 0 ||
       (puVar18 = *(uint **)(*(long *)(param_1 + 0x2d8) + 8), puVar18 == (uint *)0x0)) ||
      (uVar13 = *puVar18, (int)uVar13 < 1)))) {
    bVar21 = false;
  }
  else {
    uVar20 = 0;
    bVar21 = true;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      if ((int)*(uint *)(param_1 + 1000) < 1) {
        if (((((*(long *)(param_1 + 0x2d8) == 0) ||
              (puVar18 = *(uint **)(*(long *)(param_1 + 0x2d8) + 8), puVar18 == (uint *)0x0)) ||
             ((uVar20 < *(uint *)(param_1 + 0x2f0) &&
              (*(char *)(*(long *)(param_1 + 0x2f8) + uVar20) == '\0')))) ||
            ((*puVar18 <= uVar20 || (puVar18[1] == 0)))) || ((ushort)puVar18[2] == 0))
        goto LAB_00873724;
        iVar16 = 0xc;
        if (*(char *)((long)puVar18 + 10) != '\0') {
          iVar16 = 0x1c;
        }
        puVar18 = (uint *)((ulong)(puVar18[1] * (int)uVar20 + (uint)(ushort)puVar18[2] * 8 + iVar16)
                          + (long)puVar18);
        uVar4 = *puVar18;
      }
      else if (uVar20 < *(uint *)(param_1 + 1000)) {
        uVar17 = uVar20 & 0xffffffff;
        if (*(uint *)(param_1 + 0x3d8) <= uVar20) {
          uVar17 = 0;
        }
        puVar18 = *(uint **)(*(long *)(param_1 + 0x3e0) + uVar17 * 8);
        uVar4 = *puVar18;
      }
      else {
LAB_00873724:
        puVar18 = (uint *)0x0;
        uVar4 = uRam0000000000000000;
      }
      if (uVar4 != 0) {
        cVar19 = *puVar5;
        do {
          if (cVar19 == '\0') {
            cVar19 = '\x01';
            *puVar5 = 1;
            memset(__s,0xff,0x288);
          }
          else {
            uVar4 = *(uint *)(__s + 0x148);
            if (-1 < (int)uVar4) {
              lVar10 = (ulong)uVar4 + (long)puVar18;
              goto LAB_008737f4;
            }
            if (uVar4 != 0xffffffff) break;
          }
          puVar12 = (uint *)(ulong)*puVar18;
          lVar10 = 0;
          if ((*puVar18 == 0) || (puVar18 == puVar12)) goto LAB_008737f4;
          lVar10 = 0xc;
          if (*(char *)((long)puVar18 + (10 - (long)puVar12)) != '\0') {
            lVar10 = 0x1c;
          }
          lVar2 = (long)puVar18 + (lVar10 - (long)puVar12);
          if (lVar2 == 0) break;
          uVar17 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar12));
          *(undefined4 *)(__s + 0x148) = 0xfffffffe;
          lVar10 = 0;
          if (uVar17 == 0) goto LAB_008737f4;
          piVar15 = (int *)(lVar2 + 4);
          while (piVar15[-1] != 0x443c0fb7) {
            piVar15 = piVar15 + 2;
            uVar17 = uVar17 - 1;
            if (uVar17 == 0) {
              lVar10 = 0;
              goto LAB_008737f4;
            }
          }
          iVar16 = 0;
          if (*piVar15 != -1) {
            iVar16 = *piVar15;
          }
          *(int *)(__s + 0x148) = iVar16;
        } while (*puVar18 != 0);
      }
      lVar10 = 0;
LAB_008737f4:
      lVar2 = *(long *)puVar6;
      if (lVar10 != 0) {
        lVar2 = lVar10;
      }
      uVar9 = FUN_006bd550(lVar2,0);
      local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar9);
      puVar12 = (uint *)FUN_0088c0d0(param_1 + 8,&local_80);
      if (puVar12 == (uint *)0x0) {
        local_6c = 4;
      }
      else {
        uVar4 = *puVar12;
        local_6c = 0;
        if ((uVar4 != 0) && (puVar12 != (uint *)(ulong)uVar4)) {
          puVar14 = (uint *)((long)puVar12 - (long)(ulong)uVar4);
          local_6c = 0;
          if (*puVar14 != 0) {
            uVar4 = puVar14[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
              lVar10 = 0xc;
              if (*(char *)((long)puVar14 + 10) != '\0') {
                lVar10 = 0x1c;
              }
              lVar10 = (long)puVar14 + lVar10 + (ulong)(ushort)puVar14[2] * 8;
              if (lVar10 != 0) {
                uVar3 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar3 = (uint)((ulong)((long)puVar12 - lVar10) / (ulong)uVar4);
                }
                if (*puVar14 <= uVar3) {
                  uVar3 = 0xffffffff;
                }
                if ((uVar3 < DAT_04ce9768) &&
                   (local_6c = (uint)*(ushort *)(DAT_04ce9770 + (long)(int)uVar3 * 2), local_6c < 6)
                   ) goto LAB_008738b4;
              }
            }
            local_6c = 0;
          }
        }
      }
LAB_008738b4:
      if (local_6c == 0) {
        if (*puVar18 != 0) {
          cVar19 = *puVar5;
          do {
            if (cVar19 == '\0') {
              cVar19 = '\x01';
              *puVar5 = 1;
              memset(__s,0xff,0x288);
            }
            else {
              uVar4 = *(uint *)(__s + 0x148);
              if (-1 < (int)uVar4) {
                lVar10 = (ulong)uVar4 + (long)puVar18;
                goto LAB_0087397c;
              }
              if (uVar4 != 0xffffffff) break;
            }
            puVar12 = (uint *)(ulong)*puVar18;
            lVar10 = 0;
            if ((*puVar18 == 0) || (puVar18 == puVar12)) goto LAB_0087397c;
            lVar10 = 0xc;
            if (*(char *)((long)puVar18 + (10 - (long)puVar12)) != '\0') {
              lVar10 = 0x1c;
            }
            lVar2 = (long)puVar18 + (lVar10 - (long)puVar12);
            if (lVar2 == 0) break;
            uVar17 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar12));
            *(undefined4 *)(__s + 0x148) = 0xfffffffe;
            lVar10 = 0;
            if (uVar17 == 0) goto LAB_0087397c;
            piVar15 = (int *)(lVar2 + 4);
            while (piVar15[-1] != 0x443c0fb7) {
              piVar15 = piVar15 + 2;
              uVar17 = uVar17 - 1;
              if (uVar17 == 0) {
                lVar10 = 0;
                goto LAB_0087397c;
              }
            }
            iVar16 = 0;
            if (*piVar15 != -1) {
              iVar16 = *piVar15;
            }
            *(int *)(__s + 0x148) = iVar16;
          } while (*puVar18 != 0);
        }
        lVar10 = 0;
LAB_0087397c:
        lStack_78 = *(long *)puVar6;
        if (lVar10 != 0) {
          lStack_78 = lVar10;
        }
        local_80 = puVar1;
        uVar17 = FUN_00879630(param_1,&local_80,0);
        if ((uVar17 & 1) != 0) {
          if (*puVar18 != 0) {
            cVar19 = *puVar5;
            do {
              if (cVar19 == '\0') {
                cVar19 = '\x01';
                *puVar5 = 1;
                memset(__s,0xff,0x288);
              }
              else {
                uVar4 = *(uint *)(__s + 0x148);
                if (-1 < (int)uVar4) {
                  lVar10 = (ulong)uVar4 + (long)puVar18;
                  goto LAB_008735fc;
                }
                if (uVar4 != 0xffffffff) break;
              }
              puVar12 = (uint *)(ulong)*puVar18;
              lVar10 = 0;
              if ((*puVar18 == 0) || (puVar18 == puVar12)) goto LAB_008735fc;
              lVar10 = 0xc;
              if (*(char *)((long)puVar18 + (10 - (long)puVar12)) != '\0') {
                lVar10 = 0x1c;
              }
              lVar2 = (long)puVar18 + (lVar10 - (long)puVar12);
              if (lVar2 == 0) break;
              uVar17 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar12));
              *(undefined4 *)(__s + 0x148) = 0xfffffffe;
              lVar10 = 0;
              if (uVar17 == 0) goto LAB_008735fc;
              piVar15 = (int *)(lVar2 + 4);
              while (piVar15[-1] != 0x443c0fb7) {
                piVar15 = piVar15 + 2;
                uVar17 = uVar17 - 1;
                if (uVar17 == 0) {
                  lVar10 = 0;
                  goto LAB_008735fc;
                }
              }
              iVar16 = 0;
              if (*piVar15 != -1) {
                iVar16 = *piVar15;
              }
              *(int *)(__s + 0x148) = iVar16;
            } while (*puVar18 != 0);
          }
          lVar10 = 0;
LAB_008735fc:
          uVar7 = local_68._2_1_;
          uVar17 = local_68 & 0xffff;
          lVar2 = *(long *)puVar6;
          if (lVar10 != 0) {
            lVar2 = lVar10;
          }
          uVar8 = local_68._3_1_;
          uVar9 = FUN_006bd550(lVar2,0);
          local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar9);
          uVar11 = FUN_0088c0d0(param_1 + 8,&local_80);
          uVar17 = FUN_00875c10(param_1,uVar11,uVar17,uVar7,uVar8);
          if ((uVar17 & 1) != 0) {
            return bVar21;
          }
        }
      }
      uVar20 = uVar20 + 1;
      bVar21 = (int)uVar20 < (int)uVar13;
    } while (uVar20 != uVar13);
  }
  return bVar21;
}

