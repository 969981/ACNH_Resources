
void FUN_02c8c840(long param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  short sVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  undefined4 *puVar14;
  char cVar15;
  short *psVar16;
  int iVar17;
  ulong uVar18;
  uint *puVar19;
  uint *puVar20;
  long lVar21;
  undefined8 *puVar22;
  char *pcVar23;
  short local_80;
  undefined2 local_7e;
  undefined4 local_7c;
  uint *local_78;
  short local_70;
  undefined2 local_6e;
  undefined4 local_6c;
  uint local_68;
  uint local_64;
  
  lVar6 = DAT_04cea100;
  iVar11 = FUN_02204b90();
  puVar5 = PTR_DAT_04bb57c8;
  if (*(int *)(lVar6 + 0xe50) != 0) {
    puVar22 = *(undefined8 **)(lVar6 + 0xe58);
    puVar1 = puVar22 + *(int *)(lVar6 + 0xe50);
    pcVar23 = PTR_DAT_04bb57c0;
    do {
      uVar12 = *(uint *)*puVar22;
      if ((int)*(uint *)(lVar6 + 0xe28) < 1) {
        if ((((*(long *)(lVar6 + 0xd18) == 0) ||
             (puVar20 = *(uint **)(*(long *)(lVar6 + 0xd18) + 8), puVar20 == (uint *)0x0)) ||
            ((uVar12 < *(uint *)(lVar6 + 0xd30) &&
             (*(char *)(*(long *)(lVar6 + 0xd38) + (long)(int)uVar12) == '\0')))) ||
           (((*puVar20 <= uVar12 || (puVar20[1] == 0)) || ((ushort)puVar20[2] == 0))))
        goto LAB_02c8c9b4;
        iVar17 = 0xc;
        if (*(char *)((long)puVar20 + 10) != '\0') {
          iVar17 = 0x1c;
        }
        puVar20 = (uint *)((ulong)(puVar20[1] * uVar12 + (uint)(ushort)puVar20[2] * 8 + iVar17) +
                          (long)puVar20);
        uVar12 = *puVar20;
      }
      else if (uVar12 < *(uint *)(lVar6 + 0xe28)) {
        if (*(uint *)(lVar6 + 0xe18) <= uVar12) {
          uVar12 = 0;
        }
        puVar20 = *(uint **)(*(long *)(lVar6 + 0xe20) + (ulong)uVar12 * 8);
        uVar12 = *puVar20;
      }
      else {
LAB_02c8c9b4:
        puVar20 = (uint *)0x0;
        uVar12 = uRam0000000000000000;
      }
      if (uVar12 != 0) {
        cVar15 = *pcVar23;
        do {
          if (cVar15 == '\0') {
            cVar15 = '\x01';
            *pcVar23 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
          }
          else {
            uVar12 = *(uint *)(puVar5 + 8);
            if (-1 < (int)uVar12) {
              if ((short *)((ulong)uVar12 + (long)puVar20) != (short *)0x0) {
                local_70 = *(short *)((ulong)uVar12 + (long)puVar20);
                goto LAB_02c8ca94;
              }
              break;
            }
            if (uVar12 != 0xffffffff) break;
          }
          puVar19 = (uint *)(ulong)*puVar20;
          local_70 = -2;
          if ((*puVar20 == 0) || (puVar20 == puVar19)) goto LAB_02c8ca94;
          lVar21 = 0xc;
          if (*(char *)((long)puVar20 + (10 - (long)puVar19)) != '\0') {
            lVar21 = 0x1c;
          }
          lVar21 = (long)puVar20 + (lVar21 - (long)puVar19);
          if (lVar21 == 0) break;
          uVar18 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar19));
          *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
          if (uVar18 == 0) break;
          piVar13 = (int *)(lVar21 + 4);
          while (piVar13[-1] != -0x52e1fb53) {
            piVar13 = piVar13 + 2;
            uVar18 = uVar18 - 1;
            if (uVar18 == 0) goto LAB_02c8ca90;
          }
          iVar17 = 0;
          if (*piVar13 != -1) {
            iVar17 = *piVar13;
          }
          *(int *)(puVar5 + 8) = iVar17;
          if (*puVar20 == 0) break;
        } while( true );
      }
LAB_02c8ca90:
      local_70 = -2;
LAB_02c8ca94:
      local_6e = 0;
      local_6c = 0;
      FUN_0277d4ac(&local_70);
      if (local_70 != -2) {
        if (*puVar20 == 0) {
LAB_02c8cb94:
          uVar12 = 0;
        }
        else {
          cVar15 = *pcVar23;
          do {
            if (cVar15 == '\0') {
              cVar15 = '\x01';
              *pcVar23 = '\x01';
              *(undefined8 *)puVar5 = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
              *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
            }
            else {
              uVar12 = *(uint *)(puVar5 + 0x10);
              if (-1 < (int)uVar12) {
                if (((byte *)((ulong)uVar12 + (long)puVar20) == (byte *)0x0) ||
                   (bVar3 = *(byte *)((ulong)uVar12 + (long)puVar20), uVar12 = (uint)bVar3,
                   7 < bVar3)) goto LAB_02c8cb94;
                goto LAB_02c8cb98;
              }
              if (uVar12 != 0xffffffff) goto LAB_02c8cb94;
            }
            puVar19 = (uint *)(ulong)*puVar20;
            uVar12 = 0;
            if ((*puVar20 == 0) || (puVar20 == puVar19)) goto LAB_02c8cb98;
            lVar21 = 0xc;
            if (*(char *)((long)puVar20 + (10 - (long)puVar19)) != '\0') {
              lVar21 = 0x1c;
            }
            lVar21 = (long)puVar20 + (lVar21 - (long)puVar19);
            if (lVar21 == 0) goto LAB_02c8cb94;
            uVar18 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar19));
            *(undefined4 *)(puVar5 + 0x10) = 0xfffffffe;
            uVar12 = 0;
            if (uVar18 == 0) goto LAB_02c8cb98;
            piVar13 = (int *)(lVar21 + 4);
            while (piVar13[-1] != 0x7c226372) {
              piVar13 = piVar13 + 2;
              uVar18 = uVar18 - 1;
              if (uVar18 == 0) {
                uVar12 = 0;
                goto LAB_02c8cb98;
              }
            }
            iVar17 = 0;
            if (*piVar13 != -1) {
              iVar17 = *piVar13;
            }
            *(int *)(puVar5 + 0x10) = iVar17;
          } while (*puVar20 != 0);
          uVar12 = 0;
        }
LAB_02c8cb98:
        puVar4 = PTR_DAT_04bb43c0;
        if ((int)uVar12 <= iVar11) {
          local_80 = local_70;
          local_78 = (uint *)0x0;
          local_7c = local_6c;
          local_7e = local_6e;
          lVar21 = *(long *)PTR_DAT_04bb43c0;
          uVar12 = FUN_0277d6c4(&local_80);
          if (*(long *)puVar4 == 0) {
            if (param_2 != 0xbc) {
LAB_02c8cd08:
              local_68 = 0xbc;
              goto LAB_02c8cd0c;
            }
LAB_02c8cd20:
            uVar10 = local_6c;
            sVar7 = local_70;
            uVar8 = (undefined1)local_6e;
            uVar9 = local_6e._1_1_;
            local_64 = param_2;
            piVar13 = (int *)(**(code **)(*(long *)(param_1 + 0x1c310) + 0x10))();
            if (*piVar13 < piVar13[1]) {
              psVar16 = *(short **)(piVar13 + 4);
              if (psVar16 != (short *)0x0) {
                *(undefined8 *)(piVar13 + 4) = *(undefined8 *)psVar16;
              }
              *psVar16 = sVar7;
              *(undefined1 *)(psVar16 + 1) = uVar8;
              *(undefined1 *)((long)psVar16 + 3) = uVar9;
              *(undefined4 *)(psVar16 + 2) = uVar10;
              if (*piVar13 < piVar13[1]) {
                *(short **)(*(long *)(piVar13 + 2) + (long)*piVar13 * 8) = psVar16;
                *piVar13 = *piVar13 + 1;
              }
            }
          }
          else {
            lVar21 = *(long *)(lVar21 + 0x57e58);
            uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
            if (uVar12 < *(uint *)(lVar21 + 0x1d8)) {
              puVar20 = (uint *)0x0;
              if (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar12 * 8) != 0) {
                lVar21 = *(long *)PTR_DAT_04bc0428;
                uVar12 = FUN_0277d6c4(&local_70);
                uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
                if (*(uint *)(lVar21 + 0x1d8) <= uVar12) goto LAB_02c8cc50;
                puVar20 = *(uint **)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar12 * 8);
                if (puVar20 != (uint *)0x0) {
                  local_78 = puVar20;
                }
              }
            }
            else {
LAB_02c8cc50:
              puVar20 = (uint *)0x0;
            }
            if (param_2 == 0xbc) goto LAB_02c8cd20;
            if (puVar20 == (uint *)0x0) goto LAB_02c8cd08;
            uVar12 = *puVar20;
            local_68 = 0;
            if ((uVar12 != 0) && (puVar20 != (uint *)(ulong)uVar12)) {
              puVar19 = (uint *)((long)puVar20 - (long)(ulong)uVar12);
              local_68 = 0;
              if (*puVar19 != 0) {
                uVar12 = puVar19[1];
                if ((uVar12 != 0) && ((ulong)(ushort)puVar19[2] != 0)) {
                  lVar21 = 0xc;
                  if (*(char *)((long)puVar19 + 10) != '\0') {
                    lVar21 = 0x1c;
                  }
                  lVar21 = (long)puVar19 + lVar21 + (ulong)(ushort)puVar19[2] * 8;
                  if (lVar21 != 0) {
                    uVar2 = 0;
                    if ((ulong)uVar12 != 0) {
                      uVar2 = (uint)((ulong)((long)puVar20 - lVar21) / (ulong)uVar12);
                    }
                    if (*puVar19 <= uVar2) {
                      uVar2 = 0xffffffff;
                    }
                    if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                       (local_68 = (uint)*(ushort *)
                                          (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
                       local_68 < 0xbd)) goto LAB_02c8cd0c;
                  }
                }
                local_68 = 0;
              }
            }
LAB_02c8cd0c:
            if ((param_2 == local_68) ||
               (((local_64 = param_2, param_2 == 8 && (7 < local_68)) && (local_68 < 0x15))))
            goto LAB_02c8cd20;
          }
          pcVar23 = PTR_DAT_04bb57c0;
        }
      }
      puVar22 = puVar22 + 1;
    } while (puVar22 != puVar1);
  }
  puVar14 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x1c310) + 0x18))();
  *(undefined4 *)(param_1 + 0x1c1b0) = *puVar14;
  return;
}

