
undefined4 FUN_01b6a250(long *param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  undefined1 *puVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  uint *puVar14;
  ulong uVar15;
  int *piVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  int *piVar20;
  long *plVar21;
  ushort *puVar22;
  uint *puVar23;
  uint local_309c;
  undefined8 local_3098;
  undefined8 uStack_3090;
  undefined8 local_3088;
  long *local_3080;
  int *local_3078;
  int *local_3070;
  int local_3068 [4];
  undefined8 local_3058 [2];
  undefined1 auStack_3048 [8144];
  undefined8 local_1078;
  long local_1068 [513];
  
  puVar6 = PTR_DAT_04bc0610;
  local_3078 = local_3068;
  puVar10 = auStack_3048;
  local_3088 = 0;
  local_3080 = (long *)0x0;
  for (lVar13 = 0x1fe; *(undefined1 **)(puVar10 + -0x20) = puVar10 + -0x10, lVar13 != 0;
      lVar13 = lVar13 + -2) {
    *(undefined1 **)(puVar10 + -0x10) = puVar10;
    puVar10 = puVar10 + 0x20;
  }
  local_1078 = 0;
  if (local_1068 != (long *)0x0) {
    local_3088 = 0x20000000000;
    local_3080 = local_1068;
  }
  lVar13 = *param_1;
  iVar9 = 0;
  local_3070 = local_3078;
  do {
    piVar16 = local_3078;
    puVar22 = (ushort *)(lVar13 + 0x454 + (long)iVar9 * 0x1e);
    uVar3 = *puVar22;
    if (uVar3 != 0xffff) {
      if (((*(long *)(DAT_05335028 + 0x468) == 0) ||
          (uVar12 = (uint)uVar3 - *(int *)(DAT_05335028 + 0x458),
          (int)(uint)uVar3 < *(int *)(DAT_05335028 + 0x458))) ||
         ((int)*(uint *)(DAT_05335028 + 0x460) <= (int)uVar12)) {
        puVar23 = (uint *)0x0;
      }
      else {
        if (*(uint *)(DAT_05335028 + 0x460) <= uVar12) {
          uVar12 = 0;
        }
        puVar23 = *(uint **)(*(long *)(DAT_05335028 + 0x468) + (long)(int)uVar12 * 8);
      }
      if ((int)(uint)local_3088 < local_3088._4_4_) {
        if (local_3078 != (int *)0x0) {
          local_3078 = *(int **)local_3078;
        }
        piVar16[0] = 0;
        piVar16[1] = 0;
        piVar16[2] = 0;
        piVar16[3] = 0;
        if ((int)(uint)local_3088 < local_3088._4_4_) {
          local_3080[(int)(uint)local_3088] = (long)piVar16;
          local_3088 = CONCAT44(local_3088._4_4_,(uint)local_3088 + 1);
        }
      }
      else {
        piVar16 = (int *)0x0;
      }
      *piVar16 = iVar9;
      *(ushort *)(piVar16 + 1) = *puVar22;
      if (puVar23 == (uint *)0x0) {
        piVar16[2] = -1;
        piVar16[3] = -1;
      }
      else {
        local_3098 = 0;
        uStack_3090 = 0;
        FUN_01b6af30(puVar23,&local_3098,(long)&local_3098 + 4,&uStack_3090,(long)&uStack_3090 + 4);
        if (*puVar23 == 0) {
          uVar12 = 0;
        }
        else {
          cVar8 = *PTR_DAT_04bc0608;
          do {
            puVar5 = PTR_DAT_04bc0608;
            if (cVar8 != '\0') {
              uVar12 = *(uint *)(puVar6 + 0x20);
              if ((int)uVar12 < 0) {
                if (uVar12 == 0xffffffff) goto LAB_01b6a44c;
              }
              else if ((byte *)((ulong)uVar12 + (long)puVar23) != (byte *)0x0) {
                uVar12 = (uint)*(byte *)((ulong)uVar12 + (long)puVar23);
                goto LAB_01b6a4d8;
              }
LAB_01b6a5bc:
              uVar12 = 0;
              goto LAB_01b6a4d8;
            }
            cVar8 = '\x01';
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *puVar5 = 1;
            *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
LAB_01b6a44c:
            puVar14 = (uint *)(ulong)*puVar23;
            uVar12 = 0;
            if ((*puVar23 == 0) || (puVar23 == puVar14)) goto LAB_01b6a4d8;
            lVar19 = 0xc;
            if (*(char *)((long)puVar23 + (10 - (long)puVar14)) != '\0') {
              lVar19 = 0x1c;
            }
            lVar19 = (long)puVar23 + (lVar19 - (long)puVar14);
            if (lVar19 == 0) goto LAB_01b6a5bc;
            uVar15 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar14));
            *(undefined4 *)(puVar6 + 0x20) = 0xfffffffe;
            uVar12 = 0;
            if (uVar15 == 0) goto LAB_01b6a4d8;
            piVar20 = (int *)(lVar19 + 4);
            while (piVar20[-1] != 0x572a8fe9) {
              piVar20 = piVar20 + 2;
              uVar15 = uVar15 - 1;
              if (uVar15 == 0) {
                uVar12 = 0;
                goto LAB_01b6a4d8;
              }
            }
            iVar7 = 0;
            if (*piVar20 != -1) {
              iVar7 = *piVar20;
            }
            *(int *)(puVar6 + 0x20) = iVar7;
          } while (*puVar23 != 0);
          uVar12 = 0;
        }
LAB_01b6a4d8:
        piVar16[2] = uVar12;
        if (*puVar23 == 0) {
LAB_01b6a5dc:
          local_309c = 0;
        }
        else {
          cVar8 = DAT_05335070;
          do {
            puVar5 = PTR_DAT_04bc0608;
            if (cVar8 == '\0') {
              cVar8 = '\x01';
              *(undefined8 *)puVar6 = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
              *puVar5 = 1;
              *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
            }
            else {
              uVar12 = *(uint *)(puVar6 + 0x24);
              if (-1 < (int)uVar12) {
                if (((byte *)((ulong)uVar12 + (long)puVar23) == (byte *)0x0) ||
                   (bVar2 = *(byte *)((ulong)uVar12 + (long)puVar23), local_309c = (uint)bVar2,
                   4 < bVar2)) goto LAB_01b6a5dc;
                goto LAB_01b6a5e0;
              }
              if (uVar12 != 0xffffffff) goto LAB_01b6a5dc;
            }
            puVar14 = (uint *)(ulong)*puVar23;
            local_309c = 0;
            if ((*puVar23 == 0) || (puVar23 == puVar14)) goto LAB_01b6a5e0;
            lVar19 = 0xc;
            if (*(char *)((long)puVar23 + (10 - (long)puVar14)) != '\0') {
              lVar19 = 0x1c;
            }
            lVar19 = (long)puVar23 + (lVar19 - (long)puVar14);
            if (lVar19 == 0) goto LAB_01b6a5dc;
            uVar15 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar14));
            *(undefined4 *)(puVar6 + 0x24) = 0xfffffffe;
            local_309c = 0;
            if (uVar15 == 0) goto LAB_01b6a5e0;
            piVar20 = (int *)(lVar19 + 4);
            while (piVar20[-1] != 0x638d595d) {
              piVar20 = piVar20 + 2;
              uVar15 = uVar15 - 1;
              if (uVar15 == 0) {
                local_309c = 0;
                goto LAB_01b6a5e0;
              }
            }
            iVar7 = 0;
            if (*piVar20 != -1) {
              iVar7 = *piVar20;
            }
            *(int *)(puVar6 + 0x24) = iVar7;
          } while (*puVar23 != 0);
          local_309c = 0;
        }
LAB_01b6a5e0:
        iVar7 = FUN_01b6ab20(&local_309c,&local_3098,puVar22,iVar9);
        piVar16[3] = iVar7;
      }
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 != 0x200);
  if ((uint)local_3088 == 0) {
    return 0xffffffff;
  }
  if (1 < (int)(uint)local_3088) {
    uVar18 = 0;
    uVar12 = (uint)local_3088 - 1;
    do {
      if ((int)uVar12 <= (int)uVar18) break;
      lVar13 = local_3080[uVar18];
      uVar15 = (ulong)uVar18;
      if ((uVar12 - uVar18 & 1) == 0) {
        lVar19 = lVar13;
        uVar17 = uVar15;
      }
      else {
        uVar17 = uVar15 + 1;
        lVar19 = local_3080[uVar17];
        if (*(int *)(lVar19 + 8) < *(int *)(lVar13 + 8)) {
          local_3080[uVar17] = lVar13;
          local_3080[uVar15] = lVar19;
          lVar19 = lVar13;
        }
      }
      uVar11 = (ulong)uVar12;
      uVar12 = uVar18;
      if (~uVar15 + uVar11 != 0) {
        plVar21 = local_3080 + uVar17 + 1;
        do {
          lVar13 = *plVar21;
          if (*(int *)(lVar13 + 8) < *(int *)(lVar19 + 8)) {
            plVar21[-1] = lVar13;
            *plVar21 = lVar19;
            uVar12 = (uint)uVar17;
          }
          else {
            lVar19 = lVar13;
          }
          lVar13 = plVar21[1];
          if (*(int *)(lVar13 + 8) < *(int *)(lVar19 + 8)) {
            uVar12 = (uint)uVar17 + 1;
            *plVar21 = lVar13;
            plVar21[1] = lVar19;
          }
          else {
            lVar19 = lVar13;
          }
          uVar17 = uVar17 + 2;
          plVar21 = plVar21 + 2;
        } while (uVar11 != uVar17);
      }
      if ((int)uVar12 <= (int)uVar18) break;
      lVar13 = local_3080[uVar12];
      uVar17 = (ulong)uVar12;
      uVar18 = uVar12;
      do {
        lVar19 = local_3080[uVar17 - 1];
        if (*(int *)(lVar13 + 8) < *(int *)(lVar19 + 8)) {
          uVar18 = (uint)uVar17;
          local_3080[uVar17 - 1] = lVar13;
          local_3080[uVar17] = lVar19;
        }
        else {
          lVar13 = lVar19;
        }
        uVar17 = uVar17 - 1;
      } while ((long)uVar15 < (long)uVar17);
    } while (uVar18 != uVar12);
  }
  uVar11 = local_3088 & 0xffffffff;
  uVar15 = 0;
  uVar17 = -(ulong)((uint)local_3088 >> 0x1f) & 0xfffffff800000000 | uVar11 << 3;
  iVar9 = *(int *)(*local_3080 + 8);
  if (param_2 <= *(int *)(*local_3080 + 8)) {
    iVar9 = param_2;
  }
  do {
    if (iVar9 < *(int *)(local_3080[uVar15] + 8)) {
      uVar12 = (uint)uVar15;
      if (uVar12 <= (uint)local_3088) {
        if ((int)(uint)local_3088 <= (int)uVar12) {
          local_3088 = CONCAT44(local_3088._4_4_,uVar12);
          uVar11 = uVar15 & 0xffffffff;
          uVar18 = uVar12 - 1;
          if (!(uVar18 != 0 && 0 < (int)uVar12)) goto LAB_01b6a8fc;
          goto LAB_01b6a808;
        }
        uVar17 = uVar15;
        piVar16 = local_3078;
        do {
          local_3078 = (int *)local_3080[uVar17];
          uVar17 = uVar17 + 1;
          *(int **)local_3078 = piVar16;
          piVar16 = local_3078;
        } while ((long)uVar17 < (long)(int)(uint)local_3088);
        local_3088 = CONCAT44(local_3088._4_4_,uVar12);
        uVar11 = uVar15 & 0xffffffff;
      }
      break;
    }
    uVar15 = uVar15 + 1;
    uVar17 = uVar17 - 8;
  } while (uVar17 != 0);
  uVar18 = (int)uVar11 - 1;
  if (uVar18 != 0 && 0 < (int)uVar11) {
LAB_01b6a808:
    uVar12 = 0;
    do {
      if ((int)uVar18 <= (int)uVar12) break;
      lVar13 = local_3080[uVar12];
      uVar17 = (ulong)uVar12;
      uVar11 = (ulong)uVar18;
      uVar15 = uVar17;
      uVar18 = uVar12;
      do {
        lVar19 = local_3080[uVar15 + 1];
        iVar9 = (uint)*(ushort *)(lVar13 + 4) - (uint)*(ushort *)(lVar19 + 4);
        if (iVar9 == 0) {
          iVar9 = *(int *)(lVar13 + 0xc) - *(int *)(lVar19 + 0xc);
        }
        if (iVar9 < 1) {
          lVar13 = lVar19;
        }
        else {
          uVar18 = (uint)uVar15;
          local_3080[uVar15 + 1] = lVar13;
          local_3080[uVar15] = lVar19;
        }
        uVar15 = uVar15 + 1;
      } while (uVar11 != uVar15);
      if ((int)uVar18 <= (int)uVar12) break;
      lVar13 = local_3080[uVar18];
      uVar15 = (ulong)uVar18;
      uVar12 = uVar18;
      do {
        lVar19 = local_3080[uVar15 - 1];
        iVar9 = (uint)*(ushort *)(lVar13 + 4) - (uint)*(ushort *)(lVar19 + 4);
        if (iVar9 == 0) {
          iVar9 = *(int *)(lVar13 + 0xc) - *(int *)(lVar19 + 0xc);
        }
        if (iVar9 < 0) {
          uVar12 = (uint)uVar15;
          local_3080[uVar15 - 1] = lVar13;
          local_3080[uVar15] = lVar19;
        }
        else {
          lVar13 = lVar19;
        }
        uVar15 = uVar15 - 1;
      } while ((long)uVar17 < (long)uVar15);
    } while (uVar12 != uVar18);
    uVar11 = local_3088 & 0xffffffff;
  }
LAB_01b6a8fc:
  if (0 < (int)uVar11) {
    uVar12 = 0;
    uVar18 = 0xffffffff;
    do {
      piVar16 = (int *)local_3080[(int)uVar12];
      if (uVar18 == *(ushort *)(piVar16 + 1)) {
        *(int **)piVar16 = local_3078;
        uVar11 = local_3088 & 0xffffffff;
        local_3078 = piVar16;
        if ((-1 < (int)uVar12) && ((int)uVar12 < (int)(uint)local_3088)) {
          uVar1 = uVar12 + 1;
          uVar4 = (uint)local_3088 - uVar1;
          if (uVar4 != 0 && (int)uVar1 <= (int)(uint)local_3088) {
            memmove(local_3080 + uVar12,local_3080 + uVar1,
                    -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3);
          }
          uVar11 = (ulong)((uint)local_3088 - 1);
          local_3088 = CONCAT44(local_3088._4_4_,(uint)local_3088 - 1);
        }
      }
      else {
        uVar12 = uVar12 + 1;
        uVar18 = (uint)*(ushort *)(piVar16 + 1);
      }
      iVar9 = (int)uVar11;
    } while ((int)uVar12 < iVar9);
    if (1 < iVar9) {
      uVar18 = 0;
      uVar12 = iVar9 - 1;
      do {
        if ((int)uVar12 <= (int)uVar18) break;
        piVar16 = (int *)local_3080[uVar18];
        uVar15 = (ulong)uVar18;
        if ((uVar12 - uVar18 & 1) == 0) {
          piVar20 = piVar16;
          uVar17 = uVar15;
        }
        else {
          uVar17 = uVar15 + 1;
          piVar20 = (int *)local_3080[uVar17];
          if (*piVar20 < *piVar16) {
            local_3080[uVar17] = (long)piVar16;
            local_3080[uVar15] = (long)piVar20;
            piVar20 = piVar16;
          }
        }
        uVar11 = (ulong)uVar12;
        uVar12 = uVar18;
        if (~uVar15 + uVar11 != 0) {
          plVar21 = local_3080 + uVar17 + 1;
          do {
            piVar16 = (int *)*plVar21;
            if (*piVar16 < *piVar20) {
              plVar21[-1] = (long)piVar16;
              *plVar21 = (long)piVar20;
              uVar12 = (uint)uVar17;
            }
            else {
              piVar20 = piVar16;
            }
            piVar16 = (int *)plVar21[1];
            if (*piVar16 < *piVar20) {
              uVar12 = (uint)uVar17 + 1;
              *plVar21 = (long)piVar16;
              plVar21[1] = (long)piVar20;
            }
            else {
              piVar20 = piVar16;
            }
            uVar17 = uVar17 + 2;
            plVar21 = plVar21 + 2;
          } while (uVar11 != uVar17);
        }
        if ((int)uVar12 <= (int)uVar18) break;
        piVar16 = (int *)local_3080[uVar12];
        uVar17 = (ulong)uVar12;
        uVar18 = uVar12;
        do {
          piVar20 = (int *)local_3080[uVar17 - 1];
          if (*piVar16 < *piVar20) {
            uVar18 = (uint)uVar17;
            local_3080[uVar17 - 1] = (long)piVar16;
            local_3080[uVar17] = (long)piVar20;
          }
          else {
            piVar16 = piVar20;
          }
          uVar17 = uVar17 - 1;
        } while ((long)uVar15 < (long)uVar17);
      } while (uVar18 != uVar12);
    }
  }
  return *(undefined4 *)*local_3080;
}

