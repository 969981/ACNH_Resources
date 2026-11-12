
undefined1 FUN_00a8ae20(long param_1,short param_2,ushort param_3,undefined4 param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  char cVar13;
  ulong uVar14;
  uint *puVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  uint *puVar19;
  ushort uVar20;
  ushort uVar21;
  
  puVar8 = PTR_DAT_04bb62f0;
  puVar7 = PTR_DAT_04bb62e8;
  uVar2 = *(uint *)(param_1 + 0x651b0);
  lVar16 = *(long *)(param_1 + 0x650a0);
  uVar12 = uVar2;
  if ((0 < (int)uVar2) ||
     (((lVar16 != 0 && (*(uint **)(lVar16 + 8) != (uint *)0x0)) &&
      (uVar12 = **(uint **)(lVar16 + 8), 0 < (int)uVar12)))) {
    uVar3 = *(uint *)(param_1 + 0x650b8);
    uVar17 = 0;
    lVar9 = *(long *)(param_1 + 0x650c0);
    uVar4 = *(uint *)(param_1 + 0x651a0);
    lVar10 = *(long *)(param_1 + 0x651a8);
    cVar13 = *PTR_DAT_04bb62e8;
    do {
      if ((int)uVar2 < 1) {
        if (((((lVar16 != 0) && (puVar15 = *(uint **)(lVar16 + 8), puVar15 != (uint *)0x0)) &&
             ((uVar3 <= uVar17 || (*(char *)(lVar9 + uVar17) != '\0')))) &&
            ((uVar17 < *puVar15 && (puVar15[1] != 0)))) && ((ushort)puVar15[2] != 0)) {
          iVar11 = 0xc;
          if (*(char *)((long)puVar15 + 10) != '\0') {
            iVar11 = 0x1c;
          }
          puVar15 = (uint *)((ulong)(puVar15[1] * (int)uVar17 + (uint)(ushort)puVar15[2] * 8 +
                                    iVar11) + (long)puVar15);
          goto joined_r0x00a8b0d4;
        }
      }
      else if (uVar17 < uVar2) {
        uVar14 = uVar17 & 0xffffffff;
        if (uVar4 <= uVar17) {
          uVar14 = 0;
        }
        puVar15 = *(uint **)(lVar10 + uVar14 * 8);
joined_r0x00a8b0d4:
        if (puVar15 != (uint *)0x0) {
          uVar5 = *puVar15;
          while (uVar5 != 0) {
            puVar19 = (uint *)(ulong)uVar5;
            if (cVar13 != '\0') {
              uVar5 = *(uint *)(puVar8 + 0x1c);
              if ((int)uVar5 < 0) {
                if (uVar5 != 0xffffffff) goto LAB_00a8afa8;
                uVar21 = 1;
                if (puVar19 != (uint *)0x0) goto LAB_00a8af58;
              }
              else {
                if ((byte *)((ulong)uVar5 + (long)puVar15) == (byte *)0x0) goto LAB_00a8afa8;
                uVar21 = (ushort)*(byte *)((ulong)uVar5 + (long)puVar15);
              }
LAB_00a8afac:
              uVar5 = *puVar15;
              uVar21 = uVar21 << 8;
              if (uVar5 != 0) goto LAB_00a8afb8;
              goto LAB_00a8aea4;
            }
            *(undefined8 *)puVar8 = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
            cVar13 = '\x01';
            *puVar7 = 1;
            *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
            puVar19 = (uint *)(ulong)*puVar15;
            uVar21 = 1;
            if (puVar19 == (uint *)0x0) goto LAB_00a8afac;
LAB_00a8af58:
            uVar21 = 1;
            if (puVar15 == puVar19) goto LAB_00a8afac;
            lVar1 = 0xc;
            if (*(char *)((long)puVar15 + (10 - (long)puVar19)) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar15 + (lVar1 - (long)puVar19);
            if (lVar1 == 0) {
LAB_00a8afa8:
              uVar21 = 1;
              goto LAB_00a8afac;
            }
            uVar14 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar19));
            *(undefined4 *)(puVar8 + 0x1c) = 0xfffffffe;
            if (uVar14 == 0) goto LAB_00a8afa8;
            piVar18 = (int *)(lVar1 + 4);
            while (piVar18[-1] != 0x287db05d) {
              piVar18 = piVar18 + 2;
              uVar14 = uVar14 - 1;
              if (uVar14 == 0) goto LAB_00a8afa8;
            }
            iVar11 = 0;
            if (*piVar18 != -1) {
              iVar11 = *piVar18;
            }
            *(int *)(puVar8 + 0x1c) = iVar11;
            uVar5 = *puVar15;
          }
          uVar20 = 1;
          uVar21 = 0x100;
LAB_00a8aea8:
          if ((short)(param_3 & 0xff | param_2 << 8) <= (short)(uVar21 | uVar20)) {
            uVar2 = *(uint *)(param_1 + 0x65204);
            if (1 < uVar2) {
              uVar2 = 0;
            }
            if (uVar2 == 0) {
              switch(param_4) {
              case 0:
                if (*puVar15 == 0) {
                  return 0;
                }
                goto LAB_00a8b288;
              case 1:
                uVar2 = *puVar15;
                if (uVar2 == 0) {
                  return 0;
                }
                goto LAB_00a8b9b4;
              case 2:
                if (*puVar15 == 0) {
                  return 0;
                }
                goto LAB_00a8ba80;
              case 3:
                if (*puVar15 == 0) {
                  return 0;
                }
                goto LAB_00a8bb4c;
              case 4:
                if (*puVar15 == 0) {
                  return 0;
                }
                goto LAB_00a8bc18;
              case 5:
                if (*puVar15 == 0) {
                  return 0;
                }
                goto LAB_00a8bce4;
              case 6:
                if (*puVar15 == 0) {
                  return 0;
                }
                goto LAB_00a8bdb0;
              case 7:
                if (*puVar15 == 0) {
                  return 0;
                }
                goto LAB_00a8be7c;
              case 8:
                if (*puVar15 == 0) {
                  return 0;
                }
                break;
              default:
                return 0;
              }
              goto LAB_00a8bf48;
            }
            if (uVar2 != 1) {
              return 0;
            }
            switch(param_4) {
            case 0:
              if (*puVar15 == 0) {
                return 0;
              }
              goto LAB_00a8b198;
            case 1:
              if (*puVar15 == 0) {
                return 0;
              }
              goto LAB_00a8b354;
            case 2:
              if (*puVar15 == 0) {
                return 0;
              }
              goto LAB_00a8b420;
            case 3:
              if (*puVar15 == 0) {
                return 0;
              }
              goto LAB_00a8b4ec;
            case 4:
              if (*puVar15 == 0) {
                return 0;
              }
              goto LAB_00a8b5b8;
            case 5:
              if (*puVar15 == 0) {
                return 0;
              }
              goto LAB_00a8b684;
            case 6:
              if (*puVar15 == 0) {
                return 0;
              }
              goto LAB_00a8b750;
            case 7:
              if (*puVar15 == 0) {
                return 0;
              }
              goto LAB_00a8b81c;
            case 8:
              if (*puVar15 == 0) {
                return 0;
              }
              break;
            default:
              return 0;
            }
            goto LAB_00a8b8e8;
          }
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar12);
  }
  return 0;
LAB_00a8afb8:
  if (cVar13 == '\0') {
    *(undefined8 *)puVar8 = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
    cVar13 = '\x01';
    *puVar7 = 1;
    *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
    uVar5 = *puVar15;
  }
  else {
    uVar6 = *(uint *)(puVar8 + 0x10);
    if (-1 < (int)uVar6) {
      if ((byte *)((ulong)uVar6 + (long)puVar15) == (byte *)0x0) {
LAB_00a8aea4:
        uVar20 = 1;
      }
      else {
        uVar20 = (ushort)*(byte *)((ulong)uVar6 + (long)puVar15);
      }
      goto LAB_00a8aea8;
    }
    if (uVar6 != 0xffffffff) goto LAB_00a8aea4;
  }
  puVar19 = (uint *)(ulong)uVar5;
  uVar20 = 1;
  if ((puVar19 == (uint *)0x0) || (uVar20 = 1, puVar15 == puVar19)) goto LAB_00a8aea8;
  lVar1 = 0xc;
  if (*(char *)((long)puVar15 + (10 - (long)puVar19)) != '\0') {
    lVar1 = 0x1c;
  }
  lVar1 = (long)puVar15 + (lVar1 - (long)puVar19);
  if (lVar1 == 0) goto LAB_00a8aea4;
  uVar14 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar19));
  *(undefined4 *)(puVar8 + 0x10) = 0xfffffffe;
  if (uVar14 == 0) goto LAB_00a8aea4;
  piVar18 = (int *)(lVar1 + 4);
  while (piVar18[-1] != -0x2a96d401) {
    piVar18 = piVar18 + 2;
    uVar14 = uVar14 - 1;
    if (uVar14 == 0) goto LAB_00a8aea4;
  }
  iVar11 = 0;
  if (*piVar18 != -1) {
    iVar11 = *piVar18;
  }
  *(int *)(puVar8 + 0x10) = iVar11;
  uVar20 = 1;
  uVar5 = *puVar15;
  if (uVar5 == 0) goto LAB_00a8aea8;
  goto LAB_00a8afb8;
LAB_00a8bf48:
  if (cVar13 == '\0') {
    cVar13 = '\x01';
    *(undefined8 *)puVar8 = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
    *puVar7 = 1;
    *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
  }
  else {
    uVar2 = *(uint *)(puVar8 + 0x28);
    uVar17 = (ulong)uVar2;
    if (-1 < (int)uVar2) goto joined_r0x00a8c00c;
    if (uVar2 != 0xffffffff) {
      return 0;
    }
  }
  puVar19 = (uint *)(ulong)*puVar15;
  if (*puVar15 == 0) {
    return 0;
  }
  if (puVar15 == puVar19) {
    return 0;
  }
  lVar16 = 0xc;
  if (*(char *)((long)puVar15 + (10 - (long)puVar19)) != '\0') {
    lVar16 = 0x1c;
  }
  lVar16 = (long)puVar15 + (lVar16 - (long)puVar19);
  if (lVar16 == 0) {
    return 0;
  }
  uVar17 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar19));
  *(undefined4 *)(puVar8 + 0x28) = 0xfffffffe;
  if (uVar17 == 0) {
    return 0;
  }
  piVar18 = (int *)(lVar16 + 4);
  while (piVar18[-1] != -0x4a5703d2) {
    piVar18 = piVar18 + 2;
    uVar17 = uVar17 - 1;
    if (uVar17 == 0) {
      return 0;
    }
  }
  iVar11 = 0;
  if (*piVar18 != -1) {
    iVar11 = *piVar18;
  }
  *(int *)(puVar8 + 0x28) = iVar11;
  if (*puVar15 == 0) {
    return 0;
  }
  goto LAB_00a8bf48;
LAB_00a8be7c:
  if (cVar13 == '\0') {
    cVar13 = '\x01';
    *(undefined8 *)puVar8 = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
    *puVar7 = 1;
    *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
  }
  else {
    uVar2 = *(uint *)(puVar8 + 0x14);
    uVar17 = (ulong)uVar2;
    if (-1 < (int)uVar2) goto joined_r0x00a8c00c;
    if (uVar2 != 0xffffffff) {
      return 0;
    }
  }
  puVar19 = (uint *)(ulong)*puVar15;
  if (*puVar15 == 0) {
    return 0;
  }
  if (puVar15 == puVar19) {
    return 0;
  }
  lVar16 = 0xc;
  if (*(char *)((long)puVar15 + (10 - (long)puVar19)) != '\0') {
    lVar16 = 0x1c;
  }
  lVar16 = (long)puVar15 + (lVar16 - (long)puVar19);
  if (lVar16 == 0) {
    return 0;
  }
  uVar17 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar19));
  *(undefined4 *)(puVar8 + 0x14) = 0xfffffffe;
  if (uVar17 == 0) {
    return 0;
  }
  piVar18 = (int *)(lVar16 + 4);
  while (piVar18[-1] != 0x61501334) {
    piVar18 = piVar18 + 2;
    uVar17 = uVar17 - 1;
    if (uVar17 == 0) {
      return 0;
    }
  }
  iVar11 = 0;
  if (*piVar18 != -1) {
    iVar11 = *piVar18;
  }
  *(int *)(puVar8 + 0x14) = iVar11;
  if (*puVar15 == 0) {
    return 0;
  }
  goto LAB_00a8be7c;
LAB_00a8bdb0:
  if (cVar13 == '\0') {
    cVar13 = '\x01';
    *(undefined8 *)puVar8 = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
    *puVar7 = 1;
    *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
  }
  else {
    uVar2 = *(uint *)(puVar8 + 0x48);
    uVar17 = (ulong)uVar2;
    if (-1 < (int)uVar2) goto joined_r0x00a8c00c;
    if (uVar2 != 0xffffffff) {
      return 0;
    }
  }
  puVar19 = (uint *)(ulong)*puVar15;
  if (*puVar15 == 0) {
    return 0;
  }
  if (puVar15 == puVar19) {
    return 0;
  }
  lVar16 = 0xc;
  if (*(char *)((long)puVar15 + (10 - (long)puVar19)) != '\0') {
    lVar16 = 0x1c;
  }
  lVar16 = (long)puVar15 + (lVar16 - (long)puVar19);
  if (lVar16 == 0) {
    return 0;
  }
  uVar17 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar19));
  *(undefined4 *)(puVar8 + 0x48) = 0xfffffffe;
  if (uVar17 == 0) {
    return 0;
  }
  piVar18 = (int *)(lVar16 + 4);
  while (piVar18[-1] != -0x5eaa43e7) {
    piVar18 = piVar18 + 2;
    uVar17 = uVar17 - 1;
    if (uVar17 == 0) {
      return 0;
    }
  }
  iVar11 = 0;
  if (*piVar18 != -1) {
    iVar11 = *piVar18;
  }
  *(int *)(puVar8 + 0x48) = iVar11;
  if (*puVar15 == 0) {
    return 0;
  }
  goto LAB_00a8bdb0;
LAB_00a8bce4:
  if (cVar13 == '\0') {
    cVar13 = '\x01';
    *(undefined8 *)puVar8 = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
    *puVar7 = 1;
    *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
  }
  else {
    uVar2 = *(uint *)(puVar8 + 0x30);
    uVar17 = (ulong)uVar2;
    if (-1 < (int)uVar2) goto joined_r0x00a8c00c;
    if (uVar2 != 0xffffffff) {
      return 0;
    }
  }
  puVar19 = (uint *)(ulong)*puVar15;
  if (*puVar15 == 0) {
    return 0;
  }
  if (puVar15 == puVar19) {
    return 0;
  }
  lVar16 = 0xc;
  if (*(char *)((long)puVar15 + (10 - (long)puVar19)) != '\0') {
    lVar16 = 0x1c;
  }
  lVar16 = (long)puVar15 + (lVar16 - (long)puVar19);
  if (lVar16 == 0) {
    return 0;
  }
  uVar17 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar19));
  *(undefined4 *)(puVar8 + 0x30) = 0xfffffffe;
  if (uVar17 == 0) {
    return 0;
  }
  piVar18 = (int *)(lVar16 + 4);
  while (piVar18[-1] != 0x185d9096) {
    piVar18 = piVar18 + 2;
    uVar17 = uVar17 - 1;
    if (uVar17 == 0) {
      return 0;
    }
  }
  iVar11 = 0;
  if (*piVar18 != -1) {
    iVar11 = *piVar18;
  }
  *(int *)(puVar8 + 0x30) = iVar11;
  if (*puVar15 == 0) {
    return 0;
  }
  goto LAB_00a8bce4;
LAB_00a8bc18:
  if (cVar13 == '\0') {
    cVar13 = '\x01';
    *(undefined8 *)puVar8 = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
    *puVar7 = 1;
    *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
  }
  else {
    uVar2 = *(uint *)(puVar8 + 0x40);
    uVar17 = (ulong)uVar2;
    if (-1 < (int)uVar2) goto joined_r0x00a8c00c;
    if (uVar2 != 0xffffffff) {
      return 0;
    }
  }
  puVar19 = (uint *)(ulong)*puVar15;
  if (*puVar15 == 0) {
    return 0;
  }
  if (puVar15 == puVar19) {
    return 0;
  }
  lVar16 = 0xc;
  if (*(char *)((long)puVar15 + (10 - (long)puVar19)) != '\0') {
    lVar16 = 0x1c;
  }
  lVar16 = (long)puVar15 + (lVar16 - (long)puVar19);
  if (lVar16 == 0) {
    return 0;
  }
  uVar17 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar19));
  *(undefined4 *)(puVar8 + 0x40) = 0xfffffffe;
  if (uVar17 == 0) {
    return 0;
  }
  piVar18 = (int *)(lVar16 + 4);
  while (piVar18[-1] != -0x7f1e21c8) {
    piVar18 = piVar18 + 2;
    uVar17 = uVar17 - 1;
    if (uVar17 == 0) {
      return 0;
    }
  }
  iVar11 = 0;
  if (*piVar18 != -1) {
    iVar11 = *piVar18;
  }
  *(int *)(puVar8 + 0x40) = iVar11;
  if (*puVar15 == 0) {
    return 0;
  }
  goto LAB_00a8bc18;
LAB_00a8bb4c:
  if (cVar13 == '\0') {
    cVar13 = '\x01';
    *(undefined8 *)puVar8 = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
    *puVar7 = 1;
    *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
  }
  else {
    uVar2 = *(uint *)(puVar8 + 8);
    uVar17 = (ulong)uVar2;
    if (-1 < (int)uVar2) goto joined_r0x00a8c00c;
    if (uVar2 != 0xffffffff) {
      return 0;
    }
  }
  puVar19 = (uint *)(ulong)*puVar15;
  if (*puVar15 == 0) {
    return 0;
  }
  if (puVar15 == puVar19) {
    return 0;
  }
  lVar16 = 0xc;
  if (*(char *)((long)puVar15 + (10 - (long)puVar19)) != '\0') {
    lVar16 = 0x1c;
  }
  lVar16 = (long)puVar15 + (lVar16 - (long)puVar19);
  if (lVar16 == 0) {
    return 0;
  }
  uVar17 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar19));
  *(undefined4 *)(puVar8 + 8) = 0xfffffffe;
  if (uVar17 == 0) {
    return 0;
  }
  piVar18 = (int *)(lVar16 + 4);
  while (piVar18[-1] != -0x74de5d95) {
    piVar18 = piVar18 + 2;
    uVar17 = uVar17 - 1;
    if (uVar17 == 0) {
      return 0;
    }
  }
  iVar11 = 0;
  if (*piVar18 != -1) {
    iVar11 = *piVar18;
  }
  *(int *)(puVar8 + 8) = iVar11;
  if (*puVar15 == 0) {
    return 0;
  }
  goto LAB_00a8bb4c;
LAB_00a8ba80:
  if (cVar13 == '\0') {
    cVar13 = '\x01';
    *(undefined8 *)puVar8 = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
    *puVar7 = 1;
    *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
  }
  else {
    uVar2 = *(uint *)(puVar8 + 0x20);
    uVar17 = (ulong)uVar2;
    if (-1 < (int)uVar2) goto joined_r0x00a8c00c;
    if (uVar2 != 0xffffffff) {
      return 0;
    }
  }
  puVar19 = (uint *)(ulong)*puVar15;
  if (*puVar15 == 0) {
    return 0;
  }
  if (puVar15 == puVar19) {
    return 0;
  }
  lVar16 = 0xc;
  if (*(char *)((long)puVar15 + (10 - (long)puVar19)) != '\0') {
    lVar16 = 0x1c;
  }
  lVar16 = (long)puVar15 + (lVar16 - (long)puVar19);
  if (lVar16 == 0) {
    return 0;
  }
  uVar17 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar19));
  *(undefined4 *)(puVar8 + 0x20) = 0xfffffffe;
  if (uVar17 == 0) {
    return 0;
  }
  piVar18 = (int *)(lVar16 + 4);
  while (piVar18[-1] != 0x66b4a4c1) {
    piVar18 = piVar18 + 2;
    uVar17 = uVar17 - 1;
    if (uVar17 == 0) {
      return 0;
    }
  }
  iVar11 = 0;
  if (*piVar18 != -1) {
    iVar11 = *piVar18;
  }
  *(int *)(puVar8 + 0x20) = iVar11;
  if (*puVar15 == 0) {
    return 0;
  }
  goto LAB_00a8ba80;
LAB_00a8b9b4:
  if (cVar13 == '\0') {
    *(undefined8 *)puVar8 = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
    cVar13 = '\x01';
    *puVar7 = 1;
    *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
    uVar2 = *puVar15;
  }
  else {
    uVar12 = *(uint *)puVar8;
    uVar17 = (ulong)uVar12;
    if (-1 < (int)uVar12) goto joined_r0x00a8c00c;
    if (uVar12 != 0xffffffff) {
      return 0;
    }
  }
  puVar19 = (uint *)(ulong)uVar2;
  if (puVar19 == (uint *)0x0) {
    return 0;
  }
  if (puVar15 == puVar19) {
    return 0;
  }
  lVar16 = 0xc;
  if (*(char *)((long)puVar15 + (10 - (long)puVar19)) != '\0') {
    lVar16 = 0x1c;
  }
  lVar16 = (long)puVar15 + (lVar16 - (long)puVar19);
  if (lVar16 == 0) {
    return 0;
  }
  uVar17 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar19));
  *(undefined4 *)puVar8 = 0xfffffffe;
  if (uVar17 == 0) {
    return 0;
  }
  piVar18 = (int *)(lVar16 + 4);
  while (piVar18[-1] != 0x4875e383) {
    piVar18 = piVar18 + 2;
    uVar17 = uVar17 - 1;
    if (uVar17 == 0) {
      return 0;
    }
  }
  iVar11 = 0;
  if (*piVar18 != -1) {
    iVar11 = *piVar18;
  }
  *(int *)puVar8 = iVar11;
  uVar2 = *puVar15;
  if (uVar2 == 0) {
    return 0;
  }
  goto LAB_00a8b9b4;
LAB_00a8b288:
  if (cVar13 == '\0') {
    cVar13 = '\x01';
    *(undefined8 *)puVar8 = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
    *puVar7 = 1;
    *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
  }
  else {
    uVar2 = *(uint *)(puVar8 + 0x38);
    uVar17 = (ulong)uVar2;
    if (-1 < (int)uVar2) goto joined_r0x00a8c00c;
    if (uVar2 != 0xffffffff) {
      return 0;
    }
  }
  puVar19 = (uint *)(ulong)*puVar15;
  if (*puVar15 == 0) {
    return 0;
  }
  if (puVar15 == puVar19) {
    return 0;
  }
  lVar16 = 0xc;
  if (*(char *)((long)puVar15 + (10 - (long)puVar19)) != '\0') {
    lVar16 = 0x1c;
  }
  lVar16 = (long)puVar15 + (lVar16 - (long)puVar19);
  if (lVar16 == 0) {
    return 0;
  }
  uVar17 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar19));
  *(undefined4 *)(puVar8 + 0x38) = 0xfffffffe;
  if (uVar17 == 0) {
    return 0;
  }
  piVar18 = (int *)(lVar16 + 4);
  while (piVar18[-1] != 0x5b8be707) {
    piVar18 = piVar18 + 2;
    uVar17 = uVar17 - 1;
    if (uVar17 == 0) {
      return 0;
    }
  }
  iVar11 = 0;
  if (*piVar18 != -1) {
    iVar11 = *piVar18;
  }
  *(int *)(puVar8 + 0x38) = iVar11;
  if (*puVar15 == 0) {
    return 0;
  }
  goto LAB_00a8b288;
LAB_00a8b8e8:
  if (cVar13 == '\0') {
    cVar13 = '\x01';
    *(undefined8 *)puVar8 = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
    *puVar7 = 1;
    *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
  }
  else {
    uVar2 = *(uint *)(puVar8 + 0x2c);
    uVar17 = (ulong)uVar2;
    if (-1 < (int)uVar2) goto joined_r0x00a8c00c;
    if (uVar2 != 0xffffffff) {
      return 0;
    }
  }
  puVar19 = (uint *)(ulong)*puVar15;
  if (*puVar15 == 0) {
    return 0;
  }
  if (puVar15 == puVar19) {
    return 0;
  }
  lVar16 = 0xc;
  if (*(char *)((long)puVar15 + (10 - (long)puVar19)) != '\0') {
    lVar16 = 0x1c;
  }
  lVar16 = (long)puVar15 + (lVar16 - (long)puVar19);
  if (lVar16 == 0) {
    return 0;
  }
  uVar17 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar19));
  *(undefined4 *)(puVar8 + 0x2c) = 0xfffffffe;
  if (uVar17 == 0) {
    return 0;
  }
  piVar18 = (int *)(lVar16 + 4);
  while (piVar18[-1] != 0x17db736c) {
    piVar18 = piVar18 + 2;
    uVar17 = uVar17 - 1;
    if (uVar17 == 0) {
      return 0;
    }
  }
  iVar11 = 0;
  if (*piVar18 != -1) {
    iVar11 = *piVar18;
  }
  *(int *)(puVar8 + 0x2c) = iVar11;
  if (*puVar15 == 0) {
    return 0;
  }
  goto LAB_00a8b8e8;
LAB_00a8b81c:
  if (cVar13 == '\0') {
    cVar13 = '\x01';
    *(undefined8 *)puVar8 = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
    *puVar7 = 1;
    *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
  }
  else {
    uVar2 = *(uint *)(puVar8 + 0x18);
    uVar17 = (ulong)uVar2;
    if (-1 < (int)uVar2) goto joined_r0x00a8c00c;
    if (uVar2 != 0xffffffff) {
      return 0;
    }
  }
  puVar19 = (uint *)(ulong)*puVar15;
  if (*puVar15 == 0) {
    return 0;
  }
  if (puVar15 == puVar19) {
    return 0;
  }
  lVar16 = 0xc;
  if (*(char *)((long)puVar15 + (10 - (long)puVar19)) != '\0') {
    lVar16 = 0x1c;
  }
  lVar16 = (long)puVar15 + (lVar16 - (long)puVar19);
  if (lVar16 == 0) {
    return 0;
  }
  uVar17 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar19));
  *(undefined4 *)(puVar8 + 0x18) = 0xfffffffe;
  if (uVar17 == 0) {
    return 0;
  }
  piVar18 = (int *)(lVar16 + 4);
  while (piVar18[-1] != -0x3cdc638a) {
    piVar18 = piVar18 + 2;
    uVar17 = uVar17 - 1;
    if (uVar17 == 0) {
      return 0;
    }
  }
  iVar11 = 0;
  if (*piVar18 != -1) {
    iVar11 = *piVar18;
  }
  *(int *)(puVar8 + 0x18) = iVar11;
  if (*puVar15 == 0) {
    return 0;
  }
  goto LAB_00a8b81c;
LAB_00a8b750:
  if (cVar13 == '\0') {
    cVar13 = '\x01';
    *(undefined8 *)puVar8 = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
    *puVar7 = 1;
    *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
  }
  else {
    uVar2 = *(uint *)(puVar8 + 0x4c);
    uVar17 = (ulong)uVar2;
    if (-1 < (int)uVar2) goto joined_r0x00a8c00c;
    if (uVar2 != 0xffffffff) {
      return 0;
    }
  }
  puVar19 = (uint *)(ulong)*puVar15;
  if (*puVar15 == 0) {
    return 0;
  }
  if (puVar15 == puVar19) {
    return 0;
  }
  lVar16 = 0xc;
  if (*(char *)((long)puVar15 + (10 - (long)puVar19)) != '\0') {
    lVar16 = 0x1c;
  }
  lVar16 = (long)puVar15 + (lVar16 - (long)puVar19);
  if (lVar16 == 0) {
    return 0;
  }
  uVar17 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar19));
  *(undefined4 *)(puVar8 + 0x4c) = 0xfffffffe;
  if (uVar17 == 0) {
    return 0;
  }
  piVar18 = (int *)(lVar16 + 4);
  while (piVar18[-1] != 0x326335b) {
    piVar18 = piVar18 + 2;
    uVar17 = uVar17 - 1;
    if (uVar17 == 0) {
      return 0;
    }
  }
  iVar11 = 0;
  if (*piVar18 != -1) {
    iVar11 = *piVar18;
  }
  *(int *)(puVar8 + 0x4c) = iVar11;
  if (*puVar15 == 0) {
    return 0;
  }
  goto LAB_00a8b750;
LAB_00a8b684:
  if (cVar13 == '\0') {
    cVar13 = '\x01';
    *(undefined8 *)puVar8 = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
    *puVar7 = 1;
    *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
  }
  else {
    uVar2 = *(uint *)(puVar8 + 0x34);
    uVar17 = (ulong)uVar2;
    if (-1 < (int)uVar2) goto joined_r0x00a8c00c;
    if (uVar2 != 0xffffffff) {
      return 0;
    }
  }
  puVar19 = (uint *)(ulong)*puVar15;
  if (*puVar15 == 0) {
    return 0;
  }
  if (puVar15 == puVar19) {
    return 0;
  }
  lVar16 = 0xc;
  if (*(char *)((long)puVar15 + (10 - (long)puVar19)) != '\0') {
    lVar16 = 0x1c;
  }
  lVar16 = (long)puVar15 + (lVar16 - (long)puVar19);
  if (lVar16 == 0) {
    return 0;
  }
  uVar17 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar19));
  *(undefined4 *)(puVar8 + 0x34) = 0xfffffffe;
  if (uVar17 == 0) {
    return 0;
  }
  piVar18 = (int *)(lVar16 + 4);
  while (piVar18[-1] != -0x45d1e02c) {
    piVar18 = piVar18 + 2;
    uVar17 = uVar17 - 1;
    if (uVar17 == 0) {
      return 0;
    }
  }
  iVar11 = 0;
  if (*piVar18 != -1) {
    iVar11 = *piVar18;
  }
  *(int *)(puVar8 + 0x34) = iVar11;
  if (*puVar15 == 0) {
    return 0;
  }
  goto LAB_00a8b684;
LAB_00a8b5b8:
  if (cVar13 == '\0') {
    cVar13 = '\x01';
    *(undefined8 *)puVar8 = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
    *puVar7 = 1;
    *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
  }
  else {
    uVar2 = *(uint *)(puVar8 + 0x44);
    uVar17 = (ulong)uVar2;
    if (-1 < (int)uVar2) goto joined_r0x00a8c00c;
    if (uVar2 != 0xffffffff) {
      return 0;
    }
  }
  puVar19 = (uint *)(ulong)*puVar15;
  if (*puVar15 == 0) {
    return 0;
  }
  if (puVar15 == puVar19) {
    return 0;
  }
  lVar16 = 0xc;
  if (*(char *)((long)puVar15 + (10 - (long)puVar19)) != '\0') {
    lVar16 = 0x1c;
  }
  lVar16 = (long)puVar15 + (lVar16 - (long)puVar19);
  if (lVar16 == 0) {
    return 0;
  }
  uVar17 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar19));
  *(undefined4 *)(puVar8 + 0x44) = 0xfffffffe;
  if (uVar17 == 0) {
    return 0;
  }
  piVar18 = (int *)(lVar16 + 4);
  while (piVar18[-1] != 0x2292517a) {
    piVar18 = piVar18 + 2;
    uVar17 = uVar17 - 1;
    if (uVar17 == 0) {
      return 0;
    }
  }
  iVar11 = 0;
  if (*piVar18 != -1) {
    iVar11 = *piVar18;
  }
  *(int *)(puVar8 + 0x44) = iVar11;
  if (*puVar15 == 0) {
    return 0;
  }
  goto LAB_00a8b5b8;
LAB_00a8b4ec:
  if (cVar13 == '\0') {
    cVar13 = '\x01';
    *(undefined8 *)puVar8 = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
    *puVar7 = 1;
    *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
  }
  else {
    uVar2 = *(uint *)(puVar8 + 0xc);
    uVar17 = (ulong)uVar2;
    if (-1 < (int)uVar2) goto joined_r0x00a8c00c;
    if (uVar2 != 0xffffffff) {
      return 0;
    }
  }
  puVar19 = (uint *)(ulong)*puVar15;
  if (*puVar15 == 0) {
    return 0;
  }
  if (puVar15 == puVar19) {
    return 0;
  }
  lVar16 = 0xc;
  if (*(char *)((long)puVar15 + (10 - (long)puVar19)) != '\0') {
    lVar16 = 0x1c;
  }
  lVar16 = (long)puVar15 + (lVar16 - (long)puVar19);
  if (lVar16 == 0) {
    return 0;
  }
  uVar17 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar19));
  *(undefined4 *)(puVar8 + 0xc) = 0xfffffffe;
  if (uVar17 == 0) {
    return 0;
  }
  piVar18 = (int *)(lVar16 + 4);
  while (piVar18[-1] != 0x29522d29) {
    piVar18 = piVar18 + 2;
    uVar17 = uVar17 - 1;
    if (uVar17 == 0) {
      return 0;
    }
  }
  iVar11 = 0;
  if (*piVar18 != -1) {
    iVar11 = *piVar18;
  }
  *(int *)(puVar8 + 0xc) = iVar11;
  if (*puVar15 == 0) {
    return 0;
  }
  goto LAB_00a8b4ec;
LAB_00a8b420:
  if (cVar13 == '\0') {
    cVar13 = '\x01';
    *(undefined8 *)puVar8 = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
    *puVar7 = 1;
    *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
  }
  else {
    uVar2 = *(uint *)(puVar8 + 0x24);
    uVar17 = (ulong)uVar2;
    if (-1 < (int)uVar2) goto joined_r0x00a8c00c;
    if (uVar2 != 0xffffffff) {
      return 0;
    }
  }
  puVar19 = (uint *)(ulong)*puVar15;
  if (*puVar15 == 0) {
    return 0;
  }
  if (puVar15 == puVar19) {
    return 0;
  }
  lVar16 = 0xc;
  if (*(char *)((long)puVar15 + (10 - (long)puVar19)) != '\0') {
    lVar16 = 0x1c;
  }
  lVar16 = (long)puVar15 + (lVar16 - (long)puVar19);
  if (lVar16 == 0) {
    return 0;
  }
  uVar17 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar19));
  *(undefined4 *)(puVar8 + 0x24) = 0xfffffffe;
  if (uVar17 == 0) {
    return 0;
  }
  piVar18 = (int *)(lVar16 + 4);
  while (piVar18[-1] != -0x3b38d47d) {
    piVar18 = piVar18 + 2;
    uVar17 = uVar17 - 1;
    if (uVar17 == 0) {
      return 0;
    }
  }
  iVar11 = 0;
  if (*piVar18 != -1) {
    iVar11 = *piVar18;
  }
  *(int *)(puVar8 + 0x24) = iVar11;
  if (*puVar15 == 0) {
    return 0;
  }
  goto LAB_00a8b420;
LAB_00a8b354:
  if (cVar13 == '\0') {
    cVar13 = '\x01';
    *(undefined8 *)puVar8 = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
    *puVar7 = 1;
    *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
  }
  else {
    uVar2 = *(uint *)(puVar8 + 4);
    uVar17 = (ulong)uVar2;
    if (-1 < (int)uVar2) goto joined_r0x00a8c00c;
    if (uVar2 != 0xffffffff) {
      return 0;
    }
  }
  puVar19 = (uint *)(ulong)*puVar15;
  if (*puVar15 == 0) {
    return 0;
  }
  if (puVar15 == puVar19) {
    return 0;
  }
  lVar16 = 0xc;
  if (*(char *)((long)puVar15 + (10 - (long)puVar19)) != '\0') {
    lVar16 = 0x1c;
  }
  lVar16 = (long)puVar15 + (lVar16 - (long)puVar19);
  if (lVar16 == 0) {
    return 0;
  }
  uVar17 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar19));
  *(undefined4 *)(puVar8 + 4) = 0xfffffffe;
  if (uVar17 == 0) {
    return 0;
  }
  piVar18 = (int *)(lVar16 + 4);
  while (piVar18[-1] != -0x15f9933f) {
    piVar18 = piVar18 + 2;
    uVar17 = uVar17 - 1;
    if (uVar17 == 0) {
      return 0;
    }
  }
  iVar11 = 0;
  if (*piVar18 != -1) {
    iVar11 = *piVar18;
  }
  *(int *)(puVar8 + 4) = iVar11;
  if (*puVar15 == 0) {
    return 0;
  }
  goto LAB_00a8b354;
LAB_00a8b198:
  if (cVar13 == '\0') {
    cVar13 = '\x01';
    *(undefined8 *)puVar8 = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
    *puVar7 = 1;
    *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
  }
  else {
    uVar2 = *(uint *)(puVar8 + 0x3c);
    uVar17 = (ulong)uVar2;
    if (-1 < (int)uVar2) {
joined_r0x00a8c00c:
      if ((undefined1 *)(uVar17 + (long)puVar15) == (undefined1 *)0x0) {
        return 0;
      }
      return *(undefined1 *)(uVar17 + (long)puVar15);
    }
    if (uVar2 != 0xffffffff) {
      return 0;
    }
  }
  puVar19 = (uint *)(ulong)*puVar15;
  if (*puVar15 == 0) {
    return 0;
  }
  if (puVar15 == puVar19) {
    return 0;
  }
  lVar16 = 0xc;
  if (*(char *)((long)puVar15 + (10 - (long)puVar19)) != '\0') {
    lVar16 = 0x1c;
  }
  lVar16 = (long)puVar15 + (lVar16 - (long)puVar19);
  if (lVar16 == 0) {
    return 0;
  }
  uVar17 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar19));
  *(undefined4 *)(puVar8 + 0x3c) = 0xfffffffe;
  if (uVar17 == 0) {
    return 0;
  }
  piVar18 = (int *)(lVar16 + 4);
  while (piVar18[-1] != -0x60797bb) {
    piVar18 = piVar18 + 2;
    uVar17 = uVar17 - 1;
    if (uVar17 == 0) {
      return 0;
    }
  }
  iVar11 = 0;
  if (*piVar18 != -1) {
    iVar11 = *piVar18;
  }
  *(int *)(puVar8 + 0x3c) = iVar11;
  if (*puVar15 == 0) {
    return 0;
  }
  goto LAB_00a8b198;
}

