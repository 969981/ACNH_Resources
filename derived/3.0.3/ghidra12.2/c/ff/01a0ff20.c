
void FUN_01a0ff20(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  ushort uVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  uint *puVar20;
  ulong uVar21;
  ulong uVar22;
  char cVar23;
  char cVar24;
  ushort uVar25;
  long lVar26;
  uint *puVar27;
  ulong uVar28;
  
  puVar3 = PTR_DAT_04bb3350;
  puVar2 = PTR_DAT_04bb2698;
  lVar26 = *(long *)PTR_DAT_04bb2698;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  puVar19 = (undefined8 *)(lVar26 + 8);
  if (lVar6 != 0) {
    puVar19 = (undefined8 *)(lVar6 + 0xa8);
  }
  (**(code **)(*param_1 + 0x28))(param_1,*puVar19);
  (**(code **)(*param_1 + 0x38))(param_1);
  lVar6 = *(long *)puVar2;
  if (lVar6 == 0) {
    pvVar8 = malloc(0x50);
    if (pvVar8 != (void *)0x0) goto LAB_01a0ffd8;
LAB_01a0fff4:
    uVar17 = *(uint *)(param_1 + 0x69);
    if (0 < (int)uVar17) goto LAB_01a10000;
  }
  else {
    lVar26 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    plVar7 = (long *)(lVar6 + 8);
    if (lVar26 != 0) {
      plVar7 = (long *)(lVar26 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if ((plVar7 == (long *)0x0) ||
       (pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x50,8), pvVar8 == (void *)0x0))
    goto LAB_01a0fff4;
LAB_01a0ffd8:
    uVar17 = 0x14;
    param_1[0x6a] = (long)pvVar8;
    *(undefined4 *)(param_1 + 0x69) = 0x14;
LAB_01a10000:
    uVar22 = (ulong)uVar17;
    uVar21 = 0;
    uVar18 = uVar22 & 3;
    if (2 < uVar22 - 1) {
      do {
        lVar6 = uVar21 * 4;
        uVar21 = uVar21 + 4;
        *(undefined4 *)(param_1[0x6a] + lVar6) = 0xffffffff;
        *(undefined4 *)(param_1[0x6a] + lVar6 + 4) = 0xffffffff;
        *(undefined4 *)(param_1[0x6a] + lVar6 + 8) = 0xffffffff;
        *(undefined4 *)(param_1[0x6a] + lVar6 + 0xc) = 0xffffffff;
      } while ((uVar22 & 0xfffffffc) != uVar21);
    }
    if ((uVar17 & 3) != 0) {
      lVar6 = uVar21 << 2;
      do {
        uVar18 = uVar18 - 1;
        *(undefined4 *)(param_1[0x6a] + lVar6) = 0xffffffff;
        lVar6 = lVar6 + 4;
      } while (uVar18 != 0);
    }
  }
  puVar19 = (undefined8 *)0x0;
  if (((undefined8 *)param_1[4] != (undefined8 *)0x0) && ((int)param_1[3] != 0)) {
    puVar19 = *(undefined8 **)param_1[4];
    if (((DAT_052d2590 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_052d2590), iVar5 != 0)) {
      DAT_052d2588 = &PTR_LAB_049fa588;
      __cxa_guard_release(&DAT_052d2590);
    }
    if (puVar19 == (undefined8 *)0x0) {
      puVar19 = (undefined8 *)0x0;
    }
    else {
      uVar21 = (**(code **)*puVar19)(puVar19,&DAT_052d2588);
      if ((uVar21 & 1) == 0) {
        puVar19 = (undefined8 *)0x0;
      }
    }
  }
  uVar17 = *(uint *)(puVar19 + 0x38);
  if ((0 < (int)uVar17) ||
     (((puVar19[0x16] != 0 && (puVar20 = *(uint **)(puVar19[0x16] + 8), puVar20 != (uint *)0x0)) &&
      (uVar17 = *puVar20, 0 < (int)uVar17)))) {
    lVar6 = *(long *)puVar2;
    if (lVar6 == 0) {
      pvVar8 = malloc((ulong)uVar17 << 3);
    }
    else {
      lVar26 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
      plVar7 = (long *)(lVar6 + 8);
      if (lVar26 != 0) {
        plVar7 = (long *)(lVar26 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) goto LAB_01a10158;
      pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,(ulong)uVar17 << 3,8);
    }
    if (pvVar8 != (void *)0x0) {
      *(uint *)(param_1 + 0x6b) = uVar17;
      param_1[0x6c] = (long)pvVar8;
    }
  }
LAB_01a10158:
  puVar19 = (undefined8 *)0x0;
  if (((undefined8 *)param_1[4] != (undefined8 *)0x0) && ((int)param_1[3] != 0)) {
    puVar19 = *(undefined8 **)param_1[4];
    if (((DAT_052d2590 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_052d2590), iVar5 != 0)) {
      DAT_052d2588 = &PTR_LAB_049fa588;
      __cxa_guard_release(&DAT_052d2590);
    }
    if (puVar19 == (undefined8 *)0x0) {
      puVar19 = (undefined8 *)0x0;
    }
    else {
      uVar21 = (**(code **)*puVar19)(puVar19,&DAT_052d2588);
      if ((uVar21 & 1) == 0) {
        puVar19 = (undefined8 *)0x0;
      }
    }
  }
  uVar17 = *(uint *)(puVar19 + 0x38);
  if ((0 < (int)uVar17) ||
     (((puVar19[0x16] != 0 && (puVar20 = *(uint **)(puVar19[0x16] + 8), puVar20 != (uint *)0x0)) &&
      (uVar17 = *puVar20, 0 < (int)uVar17)))) {
    uVar21 = 0;
    do {
      puVar19 = *(undefined8 **)param_1[4];
      if (((DAT_052d2590 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_052d2590), iVar5 != 0)) {
        DAT_052d2588 = &PTR_LAB_049fa588;
        __cxa_guard_release(&DAT_052d2590);
      }
      uVar18 = (**(code **)*puVar19)(puVar19,&DAT_052d2588);
      if ((uVar18 & 1) == 0) {
        puVar19 = (undefined8 *)0x0;
      }
      if ((int)*(uint *)(puVar19 + 0x38) < 1) {
        puVar20 = (uint *)0x0;
        if ((puVar19[0x16] != 0) &&
           (puVar20 = *(uint **)(puVar19[0x16] + 8), puVar20 != (uint *)0x0)) {
          if (((uVar21 < *(uint *)(puVar19 + 0x19)) && (*(char *)(puVar19[0x1a] + uVar21) == '\0'))
             || (((*puVar20 <= uVar21 || (puVar20[1] == 0)) || ((ushort)puVar20[2] == 0))))
          goto LAB_01a101e0;
          iVar5 = 0xc;
          if (*(char *)((long)puVar20 + 10) != '\0') {
            iVar5 = 0x1c;
          }
          puVar20 = (uint *)((ulong)(puVar20[1] * (int)uVar21 + (uint)(ushort)puVar20[2] * 8 + iVar5
                                    ) + (long)puVar20);
        }
      }
      else if (uVar21 < *(uint *)(puVar19 + 0x38)) {
        uVar18 = uVar21 & 0xffffffff;
        if (*(uint *)(puVar19 + 0x36) <= uVar21) {
          uVar18 = 0;
        }
        puVar20 = *(uint **)(puVar19[0x37] + uVar18 * 8);
      }
      else {
LAB_01a101e0:
        puVar20 = (uint *)0x0;
      }
      uVar18 = uVar21 & 0xffffffff;
      bVar4 = *(uint *)(param_1 + 0x6b) <= uVar21;
      uVar21 = uVar21 + 1;
      if (bVar4) {
        uVar18 = 0;
      }
      *(uint **)(param_1[0x6c] + uVar18 * 8) = puVar20;
    } while (uVar17 != uVar21);
  }
  puVar19 = (undefined8 *)0x0;
  if (((undefined8 *)param_1[4] != (undefined8 *)0x0) && ((int)param_1[3] != 0)) {
    puVar19 = *(undefined8 **)param_1[4];
    if (((DAT_052d2590 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_052d2590), iVar5 != 0)) {
      DAT_052d2588 = &PTR_LAB_049fa588;
      __cxa_guard_release(&DAT_052d2590);
    }
    if (puVar19 == (undefined8 *)0x0) {
      puVar19 = (undefined8 *)0x0;
    }
    else {
      uVar21 = (**(code **)*puVar19)(puVar19,&DAT_052d2588);
      if ((uVar21 & 1) == 0) {
        puVar19 = (undefined8 *)0x0;
      }
    }
  }
  puVar3 = PTR_DAT_04bbec80;
  puVar2 = PTR_DAT_04bbec78;
  uVar17 = *(uint *)(puVar19 + 0x38);
  if ((int)uVar17 < 1) {
    if ((puVar19[0x16] == 0) || (puVar20 = *(uint **)(puVar19[0x16] + 8), puVar20 == (uint *)0x0))
    goto LAB_01a10c90;
    uVar17 = *puVar20;
  }
  if ((1 < (int)uVar17) && (uVar17 - 1 < *(uint *)(param_1 + 0x6b))) {
    puVar19 = (undefined8 *)param_1[0x6c];
    uVar18 = (ulong)(uVar17 >> 1);
    cVar23 = *PTR_DAT_04bbec78;
    uVar21 = uVar18;
    do {
      uVar15 = (int)uVar18 * 2;
      puVar20 = (uint *)puVar19[uVar21 - 1 & 0xffffffff];
      cVar24 = cVar23;
      if ((int)uVar15 <= (int)uVar17) {
        uVar22 = uVar21 & 0xffffffff;
LAB_01a103f0:
        if ((int)uVar15 < (int)uVar17) {
          puVar13 = (uint *)puVar19[(long)(int)uVar15 + -1];
          cVar9 = cVar23;
          if (*puVar13 != 0) {
            while( true ) {
              if (cVar23 == '\0') {
                cVar24 = '\x01';
                cVar9 = '\x01';
                *puVar2 = 1;
                cVar23 = '\x01';
                *(undefined8 *)puVar3 = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
                uVar11 = *puVar13;
              }
              else {
                uVar11 = *(uint *)(puVar3 + 0x20);
                if (-1 < (int)uVar11) {
                  uVar14 = 0;
                  if ((ushort *)((ulong)uVar11 + (long)puVar13) != (ushort *)0x0) {
                    uVar14 = *(ushort *)((ulong)uVar11 + (long)puVar13);
                  }
                  goto LAB_01a104d4;
                }
                if (uVar11 != 0xffffffff) break;
                uVar11 = *puVar13;
              }
              if ((uVar11 == 0) || (puVar27 = (uint *)(ulong)uVar11, puVar13 == puVar27)) break;
              lVar6 = 0xc;
              if (*(char *)((long)puVar13 + (10 - (long)puVar27)) != '\0') {
                lVar6 = 0x1c;
              }
              lVar6 = (long)puVar13 + (lVar6 - (long)puVar27);
              if (lVar6 == 0) break;
              uVar28 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar27));
              *(undefined4 *)(puVar3 + 0x20) = 0xfffffffe;
              if (uVar28 == 0) break;
              piVar16 = (int *)(lVar6 + 4);
              while (piVar16[-1] != 0x54706054) {
                piVar16 = piVar16 + 2;
                uVar28 = uVar28 - 1;
                if (uVar28 == 0) goto LAB_01a104d0;
              }
              iVar5 = 0;
              if (*piVar16 != -1) {
                iVar5 = *piVar16;
              }
              *(int *)(puVar3 + 0x20) = iVar5;
              if (*puVar13 == 0) break;
            }
          }
LAB_01a104d0:
          uVar14 = 0;
LAB_01a104d4:
          puVar13 = (uint *)puVar19[(int)uVar15];
          cVar23 = cVar9;
          if (*puVar13 != 0) {
            while( true ) {
              if (cVar23 == '\0') {
                cVar24 = '\x01';
                cVar9 = '\x01';
                *puVar2 = 1;
                cVar23 = '\x01';
                *(undefined8 *)puVar3 = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
                uVar11 = *puVar13;
              }
              else {
                uVar11 = *(uint *)(puVar3 + 0x20);
                if (-1 < (int)uVar11) {
                  uVar25 = 0;
                  cVar23 = cVar9;
                  if ((ushort *)((ulong)uVar11 + (long)puVar13) != (ushort *)0x0) {
                    uVar25 = *(ushort *)((ulong)uVar11 + (long)puVar13);
                  }
                  goto LAB_01a105b4;
                }
                if (uVar11 != 0xffffffff) break;
                uVar11 = *puVar13;
              }
              if ((uVar11 == 0) || (puVar27 = (uint *)(ulong)uVar11, puVar13 == puVar27)) break;
              lVar6 = 0xc;
              if (*(char *)((long)puVar13 + (10 - (long)puVar27)) != '\0') {
                lVar6 = 0x1c;
              }
              lVar6 = (long)puVar13 + (lVar6 - (long)puVar27);
              if (lVar6 == 0) break;
              uVar28 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar27));
              *(undefined4 *)(puVar3 + 0x20) = 0xfffffffe;
              if (uVar28 == 0) break;
              piVar16 = (int *)(lVar6 + 4);
              while (piVar16[-1] != 0x54706054) {
                piVar16 = piVar16 + 2;
                uVar28 = uVar28 - 1;
                if (uVar28 == 0) goto LAB_01a105b0;
              }
              iVar5 = 0;
              if (*piVar16 != -1) {
                iVar5 = *piVar16;
              }
              *(int *)(puVar3 + 0x20) = iVar5;
              if (*puVar13 == 0) break;
            }
          }
LAB_01a105b0:
          uVar25 = 0;
          cVar23 = cVar9;
LAB_01a105b4:
          uVar15 = uVar15 | uVar14 < uVar25;
          cVar9 = cVar23;
          if (*puVar20 != 0) goto LAB_01a105e0;
          uVar14 = 0;
          uVar11 = uVar15;
        }
        else {
          uVar14 = 0;
          uVar11 = uVar15;
          cVar9 = cVar23;
          if (*puVar20 != 0) {
LAB_01a105e0:
            do {
              uVar11 = uVar15;
              if (cVar9 == '\0') {
                cVar24 = '\x01';
                cVar23 = '\x01';
                *puVar2 = 1;
                cVar9 = '\x01';
                *(undefined8 *)puVar3 = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
                uVar10 = *puVar20;
              }
              else {
                uVar10 = *(uint *)(puVar3 + 0x20);
                if (-1 < (int)uVar10) {
                  uVar14 = 0;
                  if ((ushort *)((ulong)uVar10 + (long)puVar20) != (ushort *)0x0) {
                    uVar14 = *(ushort *)((ulong)uVar10 + (long)puVar20);
                  }
                  break;
                }
                if (uVar10 != 0xffffffff) goto LAB_01a106a0;
                uVar10 = *puVar20;
              }
              if ((uVar10 == 0) || (puVar13 = (uint *)(ulong)uVar10, puVar20 == puVar13))
              goto LAB_01a106a0;
              lVar6 = 0xc;
              if (*(char *)((long)puVar20 + (10 - (long)puVar13)) != '\0') {
                lVar6 = 0x1c;
              }
              lVar6 = (long)puVar20 + (lVar6 - (long)puVar13);
              if (lVar6 == 0) goto LAB_01a106a0;
              uVar28 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar13));
              *(undefined4 *)(puVar3 + 0x20) = 0xfffffffe;
              if (uVar28 == 0) goto LAB_01a106a0;
              piVar16 = (int *)(lVar6 + 4);
              while (piVar16[-1] != 0x54706054) {
                piVar16 = piVar16 + 2;
                uVar28 = uVar28 - 1;
                if (uVar28 == 0) goto LAB_01a106a0;
              }
              iVar5 = 0;
              if (*piVar16 != -1) {
                iVar5 = *piVar16;
              }
              *(int *)(puVar3 + 0x20) = iVar5;
              if (*puVar20 == 0) goto LAB_01a106a0;
            } while( true );
          }
        }
        goto LAB_01a106a4;
      }
      uVar10 = (uint)uVar21;
LAB_01a103b4:
      cVar23 = cVar24;
      uVar18 = (ulong)((int)uVar18 - 1);
      puVar19[(int)(uVar10 - 1)] = puVar20;
      bVar4 = 1 < (long)uVar21;
      uVar21 = uVar21 - 1;
    } while (bVar4);
    uVar15 = uVar17 - 1;
    puVar20 = (uint *)puVar19[uVar15];
    puVar19[uVar15] = *puVar19;
    if (2 < (int)uVar17) {
LAB_01a1085c:
      uVar11 = 2;
      uVar10 = 1;
      cVar24 = cVar23;
LAB_01a10870:
      if ((int)uVar11 < (int)uVar15) {
        puVar13 = (uint *)puVar19[(long)(int)uVar11 + -1];
        cVar9 = cVar24;
        if (*puVar13 != 0) {
          while( true ) {
            if (cVar9 == '\0') {
              cVar23 = '\x01';
              cVar24 = '\x01';
              *puVar2 = 1;
              cVar9 = '\x01';
              *(undefined8 *)puVar3 = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
              uVar12 = *puVar13;
            }
            else {
              uVar12 = *(uint *)(puVar3 + 0x20);
              if (-1 < (int)uVar12) {
                uVar14 = 0;
                if ((ushort *)((ulong)uVar12 + (long)puVar13) != (ushort *)0x0) {
                  uVar14 = *(ushort *)((ulong)uVar12 + (long)puVar13);
                }
                goto LAB_01a10954;
              }
              if (uVar12 != 0xffffffff) break;
              uVar12 = *puVar13;
            }
            if ((uVar12 == 0) || (puVar27 = (uint *)(ulong)uVar12, puVar13 == puVar27)) break;
            lVar6 = 0xc;
            if (*(char *)((long)puVar13 + (10 - (long)puVar27)) != '\0') {
              lVar6 = 0x1c;
            }
            lVar6 = (long)puVar13 + (lVar6 - (long)puVar27);
            if (lVar6 == 0) break;
            uVar21 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar27));
            *(undefined4 *)(puVar3 + 0x20) = 0xfffffffe;
            if (uVar21 == 0) break;
            piVar16 = (int *)(lVar6 + 4);
            while (piVar16[-1] != 0x54706054) {
              piVar16 = piVar16 + 2;
              uVar21 = uVar21 - 1;
              if (uVar21 == 0) goto LAB_01a10950;
            }
            iVar5 = 0;
            if (*piVar16 != -1) {
              iVar5 = *piVar16;
            }
            *(int *)(puVar3 + 0x20) = iVar5;
            if (*puVar13 == 0) break;
          }
        }
LAB_01a10950:
        uVar14 = 0;
LAB_01a10954:
        puVar13 = (uint *)puVar19[(int)uVar11];
        cVar9 = cVar24;
        if (*puVar13 != 0) {
          while( true ) {
            if (cVar9 == '\0') {
              cVar23 = '\x01';
              cVar24 = '\x01';
              *puVar2 = 1;
              cVar9 = '\x01';
              *(undefined8 *)puVar3 = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
              uVar12 = *puVar13;
            }
            else {
              uVar12 = *(uint *)(puVar3 + 0x20);
              if (-1 < (int)uVar12) {
                uVar25 = 0;
                if ((ushort *)((ulong)uVar12 + (long)puVar13) != (ushort *)0x0) {
                  uVar25 = *(ushort *)((ulong)uVar12 + (long)puVar13);
                }
                goto LAB_01a10a34;
              }
              if (uVar12 != 0xffffffff) break;
              uVar12 = *puVar13;
            }
            if ((uVar12 == 0) || (puVar27 = (uint *)(ulong)uVar12, puVar13 == puVar27)) break;
            lVar6 = 0xc;
            if (*(char *)((long)puVar13 + (10 - (long)puVar27)) != '\0') {
              lVar6 = 0x1c;
            }
            lVar6 = (long)puVar13 + (lVar6 - (long)puVar27);
            if (lVar6 == 0) break;
            uVar21 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar27));
            *(undefined4 *)(puVar3 + 0x20) = 0xfffffffe;
            if (uVar21 == 0) break;
            piVar16 = (int *)(lVar6 + 4);
            while (piVar16[-1] != 0x54706054) {
              piVar16 = piVar16 + 2;
              uVar21 = uVar21 - 1;
              if (uVar21 == 0) goto LAB_01a10a30;
            }
            iVar5 = 0;
            if (*piVar16 != -1) {
              iVar5 = *piVar16;
            }
            *(int *)(puVar3 + 0x20) = iVar5;
            if (*puVar13 == 0) break;
          }
        }
LAB_01a10a30:
        uVar25 = 0;
LAB_01a10a34:
        uVar11 = uVar11 | uVar14 < uVar25;
        cVar9 = cVar24;
        if (*puVar20 != 0) goto LAB_01a10a60;
        uVar14 = 0;
        uVar12 = uVar11;
      }
      else {
        uVar14 = 0;
        uVar12 = uVar11;
        cVar9 = cVar24;
        if (*puVar20 != 0) {
LAB_01a10a60:
          do {
            uVar12 = uVar11;
            if (cVar9 == '\0') {
              cVar23 = '\x01';
              cVar24 = '\x01';
              *puVar2 = 1;
              cVar9 = '\x01';
              *(undefined8 *)puVar3 = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
              uVar1 = *puVar20;
            }
            else {
              uVar1 = *(uint *)(puVar3 + 0x20);
              if (-1 < (int)uVar1) {
                uVar14 = 0;
                if ((ushort *)((ulong)uVar1 + (long)puVar20) != (ushort *)0x0) {
                  uVar14 = *(ushort *)((ulong)uVar1 + (long)puVar20);
                }
                break;
              }
              if (uVar1 != 0xffffffff) goto LAB_01a10b20;
              uVar1 = *puVar20;
            }
            if ((uVar1 == 0) || (puVar13 = (uint *)(ulong)uVar1, puVar20 == puVar13))
            goto LAB_01a10b20;
            lVar6 = 0xc;
            if (*(char *)((long)puVar20 + (10 - (long)puVar13)) != '\0') {
              lVar6 = 0x1c;
            }
            lVar6 = (long)puVar20 + (lVar6 - (long)puVar13);
            if (lVar6 == 0) goto LAB_01a10b20;
            uVar21 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar13));
            *(undefined4 *)(puVar3 + 0x20) = 0xfffffffe;
            if (uVar21 == 0) goto LAB_01a10b20;
            piVar16 = (int *)(lVar6 + 4);
            while (piVar16[-1] != 0x54706054) {
              piVar16 = piVar16 + 2;
              uVar21 = uVar21 - 1;
              if (uVar21 == 0) goto LAB_01a10b20;
            }
            iVar5 = 0;
            if (*piVar16 != -1) {
              iVar5 = *piVar16;
            }
            *(int *)(puVar3 + 0x20) = iVar5;
            if (*puVar20 == 0) goto LAB_01a10b20;
          } while( true );
        }
      }
      goto LAB_01a10b24;
    }
LAB_01a10c6c:
    *puVar19 = puVar20;
  }
LAB_01a10c90:
  *(undefined4 *)param_1[0x6a] = 1;
  *(undefined4 *)(param_1[0x6a] + (ulong)(1 < *(uint *)(param_1 + 0x69)) * 4) = 2;
  *(undefined4 *)(param_1[0x6a] + (ulong)(2 < *(uint *)(param_1 + 0x69)) * 8) = 3;
  lVar6 = 0xc;
  if (*(uint *)(param_1 + 0x69) < 4) {
    lVar6 = 0;
  }
  *(undefined4 *)(param_1[0x6a] + lVar6) = 0x13;
  *(undefined4 *)(param_1[0x6a] + (ulong)(4 < *(uint *)(param_1 + 0x69)) * 0x10) = 4;
  lVar6 = 0x14;
  if (*(uint *)(param_1 + 0x69) < 6) {
    lVar6 = 0;
  }
  *(undefined4 *)(param_1[0x6a] + lVar6) = 5;
  lVar6 = 0x18;
  if (*(uint *)(param_1 + 0x69) < 7) {
    lVar6 = 0;
  }
  *(undefined4 *)(param_1[0x6a] + lVar6) = 0x12;
  lVar6 = 0x1c;
  if (*(uint *)(param_1 + 0x69) < 8) {
    lVar6 = 0;
  }
  *(undefined4 *)(param_1[0x6a] + lVar6) = 0xe;
  *(undefined4 *)(param_1[0x6a] + (ulong)(8 < *(uint *)(param_1 + 0x69)) * 0x20) = 0xf;
  lVar6 = 0x24;
  if (*(uint *)(param_1 + 0x69) < 10) {
    lVar6 = 0;
  }
  *(undefined4 *)(param_1[0x6a] + lVar6) = 0x10;
  lVar6 = 0x28;
  if (*(uint *)(param_1 + 0x69) < 0xb) {
    lVar6 = 0;
  }
  *(undefined4 *)(param_1[0x6a] + lVar6) = 0x11;
  lVar6 = 0x2c;
  if (*(uint *)(param_1 + 0x69) < 0xc) {
    lVar6 = 0;
  }
  *(undefined4 *)(param_1[0x6a] + lVar6) = 6;
  lVar6 = 0x30;
  if (*(uint *)(param_1 + 0x69) < 0xd) {
    lVar6 = 0;
  }
  *(undefined4 *)(param_1[0x6a] + lVar6) = 7;
  lVar6 = 0x34;
  if (*(uint *)(param_1 + 0x69) < 0xe) {
    lVar6 = 0;
  }
  *(undefined4 *)(param_1[0x6a] + lVar6) = 8;
  lVar6 = 0x38;
  if (*(uint *)(param_1 + 0x69) < 0xf) {
    lVar6 = 0;
  }
  *(undefined4 *)(param_1[0x6a] + lVar6) = 9;
  lVar6 = 0x3c;
  if (*(uint *)(param_1 + 0x69) < 0x10) {
    lVar6 = 0;
  }
  *(undefined4 *)(param_1[0x6a] + lVar6) = 10;
  *(undefined4 *)(param_1[0x6a] + (ulong)(0x10 < *(uint *)(param_1 + 0x69)) * 0x40) = 0xb;
  lVar6 = 0x44;
  if (*(uint *)(param_1 + 0x69) < 0x12) {
    lVar6 = 0;
  }
  *(undefined4 *)(param_1[0x6a] + lVar6) = 0xc;
  lVar6 = 0x48;
  if (*(uint *)(param_1 + 0x69) < 0x13) {
    lVar6 = 0;
  }
  *(undefined4 *)(param_1[0x6a] + lVar6) = 0xd;
  lVar6 = 0x4c;
  if (*(uint *)(param_1 + 0x69) < 0x14) {
    lVar6 = 0;
  }
  *(undefined4 *)(param_1[0x6a] + lVar6) = 0;
  return;
LAB_01a106a0:
  uVar14 = 0;
LAB_01a106a4:
  puVar13 = (uint *)puVar19[(int)(uVar11 - 1)];
  cVar9 = cVar23;
  if (*puVar13 != 0) {
    while( true ) {
      if (cVar9 == '\0') {
        cVar24 = '\x01';
        cVar23 = '\x01';
        *puVar2 = 1;
        cVar9 = '\x01';
        *(undefined8 *)puVar3 = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
        uVar15 = *puVar13;
      }
      else {
        uVar15 = *(uint *)(puVar3 + 0x20);
        if (-1 < (int)uVar15) {
          uVar25 = 0;
          if ((ushort *)((ulong)uVar15 + (long)puVar13) != (ushort *)0x0) {
            uVar25 = *(ushort *)((ulong)uVar15 + (long)puVar13);
          }
          goto LAB_01a10784;
        }
        if (uVar15 != 0xffffffff) break;
        uVar15 = *puVar13;
      }
      if ((uVar15 == 0) || (puVar27 = (uint *)(ulong)uVar15, puVar13 == puVar27)) break;
      lVar6 = 0xc;
      if (*(char *)((long)puVar13 + (10 - (long)puVar27)) != '\0') {
        lVar6 = 0x1c;
      }
      lVar6 = (long)puVar13 + (lVar6 - (long)puVar27);
      if (lVar6 == 0) break;
      uVar28 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar27));
      *(undefined4 *)(puVar3 + 0x20) = 0xfffffffe;
      if (uVar28 == 0) break;
      piVar16 = (int *)(lVar6 + 4);
      while (piVar16[-1] != 0x54706054) {
        piVar16 = piVar16 + 2;
        uVar28 = uVar28 - 1;
        if (uVar28 == 0) goto LAB_01a10780;
      }
      iVar5 = 0;
      if (*piVar16 != -1) {
        iVar5 = *piVar16;
      }
      *(int *)(puVar3 + 0x20) = iVar5;
      if (*puVar13 == 0) break;
    }
  }
LAB_01a10780:
  uVar25 = 0;
LAB_01a10784:
  uVar10 = (uint)uVar22;
  if (uVar25 <= uVar14) goto LAB_01a103b4;
  puVar19[(int)((uint)uVar22 - 1)] = puVar19[(int)(uVar11 - 1)];
  uVar15 = uVar11 * 2;
  uVar22 = (ulong)uVar11;
  uVar10 = uVar11;
  if ((int)uVar17 < (int)uVar15) goto LAB_01a103b4;
  goto LAB_01a103f0;
LAB_01a10b20:
  uVar14 = 0;
LAB_01a10b24:
  lVar6 = (long)(int)(uVar12 - 1);
  puVar13 = (uint *)puVar19[lVar6];
  cVar9 = cVar24;
  if (*puVar13 != 0) {
    while( true ) {
      if (cVar9 == '\0') {
        cVar23 = '\x01';
        cVar24 = '\x01';
        *puVar2 = 1;
        cVar9 = '\x01';
        *(undefined8 *)puVar3 = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
        uVar11 = *puVar13;
      }
      else {
        uVar11 = *(uint *)(puVar3 + 0x20);
        if (-1 < (int)uVar11) {
          uVar25 = 0;
          if ((ushort *)((ulong)uVar11 + (long)puVar13) != (ushort *)0x0) {
            uVar25 = *(ushort *)((ulong)uVar11 + (long)puVar13);
          }
          goto LAB_01a10c04;
        }
        if (uVar11 != 0xffffffff) break;
        uVar11 = *puVar13;
      }
      if ((uVar11 == 0) || (puVar27 = (uint *)(ulong)uVar11, puVar13 == puVar27)) break;
      lVar26 = 0xc;
      if (*(char *)((long)puVar13 + (10 - (long)puVar27)) != '\0') {
        lVar26 = 0x1c;
      }
      lVar26 = (long)puVar13 + (lVar26 - (long)puVar27);
      if (lVar26 == 0) break;
      uVar21 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar27));
      *(undefined4 *)(puVar3 + 0x20) = 0xfffffffe;
      if (uVar21 == 0) break;
      piVar16 = (int *)(lVar26 + 4);
      while (piVar16[-1] != 0x54706054) {
        piVar16 = piVar16 + 2;
        uVar21 = uVar21 - 1;
        if (uVar21 == 0) goto LAB_01a10c00;
      }
      iVar5 = 0;
      if (*piVar16 != -1) {
        iVar5 = *piVar16;
      }
      *(int *)(puVar3 + 0x20) = iVar5;
      if (*puVar13 == 0) break;
    }
  }
LAB_01a10c00:
  uVar25 = 0;
LAB_01a10c04:
  if (uVar25 <= uVar14) {
    lVar6 = (long)(int)(uVar10 - 1);
    goto LAB_01a10838;
  }
  puVar19[(int)(uVar10 - 1)] = puVar19[lVar6];
  uVar11 = uVar12 * 2;
  uVar10 = uVar12;
  if ((int)uVar17 <= (int)uVar11) goto LAB_01a10838;
  goto LAB_01a10870;
LAB_01a10838:
  uVar11 = uVar15 - 1;
  puVar19[lVar6] = puVar20;
  puVar20 = (uint *)puVar19[uVar11];
  puVar19[uVar11] = *puVar19;
  bVar4 = (int)uVar15 < 3;
  uVar17 = uVar15;
  uVar15 = uVar11;
  if (bVar4) goto LAB_01a10c6c;
  goto LAB_01a1085c;
}

