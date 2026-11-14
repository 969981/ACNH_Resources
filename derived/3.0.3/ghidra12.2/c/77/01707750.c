
/* WARNING: Removing unreachable block (ram,0x01707858) */
/* WARNING: Removing unreachable block (ram,0x017077f4) */
/* WARNING: Removing unreachable block (ram,0x01707d58) */

void FUN_01707750(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  uint *puVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined4 uVar13;
  long lVar14;
  char *pcVar15;
  uint uVar16;
  char cVar17;
  uint *puVar18;
  int *piVar19;
  long *plVar20;
  char *pcVar21;
  uint local_60;
  undefined4 local_5c;
  uint local_58;
  uint local_54;
  
  puVar6 = (uint *)(param_1 + 0x15f4);
  if ((*puVar6 >> 10 & 1) != 0) {
    lVar14 = *(long *)(param_1 + 0x1138);
    if (lVar14 == 0) {
      plVar7 = &DAT_04c931a0;
      local_54 = 0;
      puVar10 = &DAT_04c931a0;
    }
    else {
      uVar9 = *(uint *)(param_1 + 0x1698) >> 1 & 1;
      lVar11 = *(long *)(lVar14 + 0x78);
      if (lVar11 == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = *(uint *)(lVar11 + 0x18);
      }
      if (uVar16 <= uVar9) {
        uVar9 = 0;
      }
      if (*(uint *)(lVar14 + 0x80) <= uVar9) {
        uVar9 = 0;
      }
      local_54 = *(uint *)(param_1 + 0x1698) >> 1 & 1;
      plVar7 = (long *)(*(long *)(lVar14 + 0x88) + (long)(int)uVar9 * 0xe8 + 0x60);
      uVar9 = 0;
      if (lVar11 != 0) {
        uVar9 = *(uint *)(lVar11 + 0x18);
      }
      uVar16 = local_54;
      if (uVar9 <= local_54) {
        uVar16 = 0;
      }
      if (*(uint *)(lVar14 + 0x80) <= uVar16) {
        uVar16 = 0;
      }
      puVar10 = (undefined8 *)(*(long *)(lVar14 + 0x88) + (long)(int)uVar16 * 0xe8 + 0x60);
    }
    local_5c = *(undefined4 *)(puVar10 + 0xb);
    puVar5 = (uint *)FUN_0171ec68(&local_5c);
    puVar4 = PTR_DAT_04bbde90;
    puVar3 = PTR_DAT_04bbde88;
    if (puVar5 != (uint *)0x0) {
      if (*puVar5 != 0) {
        cVar17 = *PTR_DAT_04bbde88;
        do {
          if (cVar17 == '\0') {
            cVar17 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
            uVar9 = *puVar5;
          }
          else {
            uVar9 = *(uint *)(puVar4 + 0x10);
            if (-1 < (int)uVar9) {
              if (((byte *)((ulong)uVar9 + (long)puVar5) != (byte *)0x0) &&
                 ((*(byte *)((ulong)uVar9 + (long)puVar5) >> 1 & 1) != 0)) goto LAB_01707bcc;
              break;
            }
            if (uVar9 != 0xffffffff) break;
            uVar9 = *puVar5;
          }
          if ((uVar9 == 0) || (puVar18 = (uint *)(ulong)uVar9, puVar5 == puVar18)) break;
          lVar14 = 0xc;
          if (*(char *)((long)puVar5 + (10 - (long)puVar18)) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar5 + (lVar14 - (long)puVar18);
          if (lVar14 == 0) break;
          uVar8 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar18));
          *(undefined4 *)(puVar4 + 0x10) = 0xfffffffe;
          if (uVar8 == 0) break;
          piVar19 = (int *)(lVar14 + 4);
          while (piVar19[-1] != -0x60aedc2c) {
            piVar19 = piVar19 + 2;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) goto LAB_017079b8;
          }
          iVar1 = 0;
          if (*piVar19 != -1) {
            iVar1 = *piVar19;
          }
          *(int *)(puVar4 + 0x10) = iVar1;
          if (*puVar5 == 0) break;
        } while( true );
      }
LAB_017079b8:
      if (*puVar5 != 0) {
        cVar17 = *puVar3;
        do {
          if (cVar17 == '\0') {
            cVar17 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
            uVar9 = *puVar5;
          }
          else {
            uVar9 = *(uint *)(puVar4 + 0x2c);
            if (-1 < (int)uVar9) {
              if (((ulong)uVar9 + (long)puVar5 != 0) &&
                 (*(char *)((ulong)uVar9 + (long)puVar5 + 1) < '\0')) {
                local_54 = 2;
                uVar9 = 2;
                lVar14 = *(long *)(param_1 + 0x1138);
                if (lVar14 == 0) goto LAB_01707ba4;
                uVar16 = 0;
                if (*(long *)(lVar14 + 0x78) != 0) {
                  uVar16 = *(uint *)(*(long *)(lVar14 + 0x78) + 0x18);
                }
                if (uVar16 < 3) {
                  uVar9 = 0;
                }
                if (*(uint *)(lVar14 + 0x80) <= uVar9) {
                  uVar9 = 0;
                }
                lVar14 = *(long *)(lVar14 + 0x88) + (long)(int)uVar9 * 0xe8;
                plVar20 = (long *)(lVar14 + 0x60);
                (**(code **)(*plVar20 + 0x18))(plVar20);
                (**(code **)(*plVar20 + 0x18))(plVar20);
                pcVar21 = *(char **)(lVar14 + 0x68);
                (**(code **)(*plVar7 + 0x18))(plVar7);
                pcVar15 = (char *)plVar7[1];
                if (pcVar21 != pcVar15) {
                  pcVar21 = *(char **)(lVar14 + 0x68);
                  if (*pcVar21 != *pcVar15) goto LAB_01707ba4;
                  if (*pcVar21 != '\0') {
                    uVar8 = 0;
                    goto LAB_01707b5c;
                  }
                }
              }
              break;
            }
            if (uVar9 != 0xffffffff) break;
            uVar9 = *puVar5;
          }
          if ((uVar9 == 0) || (puVar18 = (uint *)(ulong)uVar9, puVar5 == puVar18)) break;
          lVar14 = 0xc;
          if (*(char *)((long)puVar5 + (10 - (long)puVar18)) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar5 + (lVar14 - (long)puVar18);
          if (lVar14 == 0) break;
          uVar8 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar18));
          *(undefined4 *)(puVar4 + 0x2c) = 0xfffffffe;
          if (uVar8 == 0) break;
          piVar19 = (int *)(lVar14 + 4);
          while (piVar19[-1] != 0x42ad246a) {
            piVar19 = piVar19 + 2;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) goto LAB_01707bcc;
          }
          iVar1 = 0;
          if (*piVar19 != -1) {
            iVar1 = *piVar19;
          }
          *(int *)(puVar4 + 0x2c) = iVar1;
          if (*puVar5 == 0) break;
        } while( true );
      }
    }
    goto LAB_01707bcc;
  }
  goto LAB_01707bfc;
  while( true ) {
    if (pcVar21[uVar12 + 1] == '\0') goto LAB_01707b9c;
    if (pcVar21[uVar12 + 2] != pcVar15[uVar12 + 2]) goto LAB_01707ba4;
    uVar8 = uVar12 + 2;
    if (pcVar21[uVar12 + 2] == '\0') break;
LAB_01707b5c:
    uVar12 = uVar8;
    if ((uVar12 == 0x80000) || (pcVar21[uVar12 + 1] != pcVar15[uVar12 + 1])) goto LAB_01707ba4;
  }
  uVar12 = uVar12 + 1;
LAB_01707b9c:
  if (0x7ffff < uVar12) {
LAB_01707ba4:
    FUN_01707310(param_1,plVar7,0,2,0);
    FUN_01707750(param_1,plVar7);
  }
LAB_01707bcc:
  *puVar6 = *puVar6 & 0xfffffbff;
LAB_01707bfc:
  local_54 = 10;
  if (param_4 != 0) {
    return;
  }
  puVar6 = (uint *)FUN_0171ee68(param_2);
  if (puVar6 == (uint *)0x0) {
    return;
  }
  uVar9 = *puVar6;
  if ((uVar9 == 0) || (puVar6 == (uint *)(ulong)uVar9)) {
LAB_01707ce4:
    local_60 = 0;
  }
  else {
    puVar5 = (uint *)((long)puVar6 - (long)(ulong)uVar9);
    if ((*puVar5 == 0) || ((uVar9 = puVar5[1], uVar9 == 0 || ((ulong)(ushort)puVar5[2] == 0))))
    goto LAB_01707ce4;
    lVar14 = 0xc;
    if (*(char *)((long)puVar5 + 10) != '\0') {
      lVar14 = 0x1c;
    }
    lVar14 = (long)puVar5 + lVar14 + (ulong)(ushort)puVar5[2] * 8;
    if (lVar14 == 0) goto LAB_01707ce4;
    uVar16 = 0;
    if ((ulong)uVar9 != 0) {
      uVar16 = (uint)((ulong)((long)puVar6 - lVar14) / (ulong)uVar9);
    }
    if (*puVar5 <= uVar16) {
      uVar16 = 0xffffffff;
    }
    if ((*(uint *)PTR_DAT_04bbdff8 <= uVar16) ||
       (uVar2 = *(ushort *)(*(long *)(PTR_DAT_04bbdff8 + 8) + (long)(int)uVar16 * 2), 6 < uVar2))
    goto LAB_01707ce4;
    local_60 = (uint)uVar2;
    if (local_60 == 6) {
      if (*(long *)(param_1 + 0x1138) == 0) {
        local_58 = 0;
      }
      else {
        local_58 = *(uint *)(param_1 + 0x1698) >> 1 & 1;
        local_54 = 0x16;
        uVar8 = FUN_03850a90(*(long *)(param_1 + 0x1138),0x16,0,local_58);
        if ((uVar8 & 1) != 0) {
          return;
        }
      }
      uVar13 = 5;
      goto LAB_01707d10;
    }
  }
  if (local_60 - 1 < 6) {
    uVar13 = *(undefined4 *)(&DAT_04176c6c + (long)(int)(local_60 - 1) * 4);
  }
  else {
    uVar13 = 0;
  }
LAB_01707d10:
  *(undefined4 *)(param_1 + 0x5ee4) = uVar13;
  if (((*(long *)(param_1 + 0x1138) != 0) &&
      (lVar14 = *(long *)(*(long *)(param_1 + 0x1138) + 0x78), lVar14 != 0)) &&
     (plVar7 = *(long **)(lVar14 + 0x48), plVar7 != (long *)0x0)) {
    (**(code **)(*plVar7 + 0x28))(plVar7,&DAT_05248638,*(undefined4 *)(param_1 + 0x5ee4));
  }
  return;
}

