
void FUN_0279e300(long param_1,byte *param_2,long *param_3,uint param_4)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  ushort uVar9;
  short sVar10;
  uint uVar11;
  undefined *puVar12;
  undefined4 uVar13;
  uint *puVar14;
  long lVar15;
  char cVar16;
  uint uVar17;
  ulong uVar18;
  uint *puVar19;
  int *piVar20;
  ulong uVar21;
  uint *puVar22;
  uint *puVar23;
  undefined *local_70;
  long lStack_68;
  
  lVar15 = *(long *)PTR_DAT_04bb27d0;
  if (((lVar15 == 0) || (*(long *)(lVar15 + 0x28) == 0)) || (*(int *)(lVar15 + 0x80) != 1)) {
    sVar10 = *(short *)PTR_DAT_04bb6298;
    if (sVar10 != -1) {
      local_70 = (undefined *)CONCAT44(local_70._4_4_,0x20);
      puVar3 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar10 * 8;
      if (0xff < (uint)(int)sVar10) {
        puVar3 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar3 + 4) & 1) != 0) {
        return;
      }
    }
    if ((*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x3f5c743d) &&
       ((*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x2f1ac06c ||
        (*(int *)(*(long *)PTR_DAT_04bb3728 + 0xb0) == 0)))) {
      lVar15 = *(long *)PTR_DAT_04bb2208;
      (**(code **)(*param_3 + 0x18))(param_3);
      uVar13 = FUN_006bd550(param_3[1],0);
      local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar13);
      puVar14 = (uint *)FUN_01b1ee90(lVar15 + 0x1b80,&local_70);
      puVar12 = PTR_DAT_04bb6448;
      puVar3 = PTR_DAT_04bb6440;
      if (puVar14 != (uint *)0x0) {
        if (*puVar14 != 0) {
          cVar16 = *PTR_DAT_04bb6440;
          do {
            if (cVar16 == '\0') {
              cVar16 = '\x01';
              *(undefined8 *)puVar12 = 0xffffffffffffffff;
              *(undefined8 *)(puVar12 + 8) = 0xffffffffffffffff;
              *puVar3 = 1;
              *(undefined4 *)(puVar12 + 0x50) = 0xffffffff;
              *(undefined8 *)(puVar12 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar12 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar12 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar12 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar12 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar12 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar12 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar12 + 0x48) = 0xffffffffffffffff;
              uVar4 = *puVar14;
            }
            else {
              uVar4 = *(uint *)(puVar12 + 0x3c);
              if (-1 < (int)uVar4) {
                if ((ushort *)((ulong)uVar4 + (long)puVar14) != (ushort *)0x0) {
                  uVar8 = *(ushort *)((ulong)uVar4 + (long)puVar14);
                  puVar19 = (uint *)(param_1 + 0xe98);
                  if (uVar8 < 0x200) {
                    puVar19 = puVar19 + uVar8;
                  }
                  goto LAB_0279e540;
                }
                break;
              }
              if (uVar4 != 0xffffffff) break;
              uVar4 = *puVar14;
            }
            if ((uVar4 == 0) || (puVar19 = (uint *)(ulong)uVar4, puVar14 == puVar19)) break;
            lVar15 = 0xc;
            if (*(char *)((long)puVar14 + (10 - (long)puVar19)) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar14 + (lVar15 - (long)puVar19);
            if (lVar15 == 0) break;
            uVar18 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar19));
            *(undefined4 *)(puVar12 + 0x3c) = 0xfffffffe;
            if (uVar18 == 0) break;
            piVar20 = (int *)(lVar15 + 4);
            while (piVar20[-1] != 0x54706054) {
              piVar20 = piVar20 + 2;
              uVar18 = uVar18 - 1;
              if (uVar18 == 0) goto LAB_0279e53c;
            }
            iVar2 = 0;
            if (*piVar20 != -1) {
              iVar2 = *piVar20;
            }
            *(int *)(puVar12 + 0x3c) = iVar2;
            if (*puVar14 == 0) break;
          } while( true );
        }
LAB_0279e53c:
        puVar19 = (uint *)(param_1 + 0xe98);
LAB_0279e540:
        uVar4 = *puVar19;
        puVar19 = (uint *)(param_1 + 0xe98);
        uVar11 = 1 << (ulong)(param_4 & 0x1f);
        puVar23 = puVar19;
        if (*puVar14 != 0) {
          cVar16 = *puVar3;
          uVar17 = 0xffffffff;
          do {
            if (cVar16 != '\0') {
              if (*(uint *)(puVar12 + 0x3c) == 0xffffffff) {
                uVar5 = *puVar14;
                if (uVar5 != 0) goto LAB_0279e5b0;
              }
              else {
                uVar17 = *(uint *)(puVar12 + 0x3c);
              }
LAB_0279e620:
              if (*puVar14 != 0) goto LAB_0279e638;
              break;
            }
            cVar16 = '\x01';
            *(undefined8 *)puVar12 = 0xffffffffffffffff;
            *(undefined8 *)(puVar12 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined4 *)(puVar12 + 0x50) = 0xffffffff;
            *(undefined8 *)(puVar12 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar12 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar12 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar12 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar12 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar12 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar12 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar12 + 0x48) = 0xffffffffffffffff;
            uVar5 = *puVar14;
            if (uVar5 == 0) goto LAB_0279e620;
LAB_0279e5b0:
            puVar22 = (uint *)(ulong)uVar5;
            if (puVar14 == puVar22) goto LAB_0279e620;
            lVar15 = 0xc;
            if (*(char *)((long)puVar14 + (10 - (long)puVar22)) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar14 + (lVar15 - (long)puVar22);
            if (lVar15 == 0) goto LAB_0279e620;
            uVar18 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar22));
            *(undefined4 *)(puVar12 + 0x3c) = 0xfffffffe;
            if (uVar18 == 0) {
LAB_0279e61c:
              uVar17 = 0xfffffffe;
              goto LAB_0279e620;
            }
            piVar20 = (int *)(lVar15 + 4);
            while (piVar20[-1] != 0x54706054) {
              piVar20 = piVar20 + 2;
              uVar18 = uVar18 - 1;
              if (uVar18 == 0) goto LAB_0279e61c;
            }
            iVar2 = 0;
            if (*piVar20 != -1) {
              iVar2 = *piVar20;
            }
            *(int *)(puVar12 + 0x3c) = iVar2;
          } while (*puVar14 != 0);
        }
LAB_0279e6b8:
        *puVar23 = *puVar23 | uVar11;
        if (*puVar14 != 0) {
          cVar16 = *puVar3;
          do {
            if (cVar16 == '\0') {
              cVar16 = '\x01';
              *(undefined8 *)puVar12 = 0xffffffffffffffff;
              *(undefined8 *)(puVar12 + 8) = 0xffffffffffffffff;
              *puVar3 = 1;
              *(undefined4 *)(puVar12 + 0x50) = 0xffffffff;
              *(undefined8 *)(puVar12 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar12 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar12 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar12 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar12 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar12 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar12 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar12 + 0x48) = 0xffffffffffffffff;
              uVar17 = *puVar14;
            }
            else {
              uVar17 = *(uint *)(puVar12 + 0x3c);
              if (-1 < (int)uVar17) {
                if (((ushort *)((ulong)uVar17 + (long)puVar14) != (ushort *)0x0) &&
                   (uVar8 = *(ushort *)((ulong)uVar17 + (long)puVar14), uVar8 < 0x200)) {
                  puVar19 = puVar19 + uVar8;
                }
                break;
              }
              if (uVar17 != 0xffffffff) break;
              uVar17 = *puVar14;
            }
            if ((uVar17 == 0) || (puVar23 = (uint *)(ulong)uVar17, puVar14 == puVar23)) break;
            lVar15 = 0xc;
            if (*(char *)((long)puVar14 + (10 - (long)puVar23)) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar14 + (lVar15 - (long)puVar23);
            if (lVar15 == 0) break;
            uVar18 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar23));
            *(undefined4 *)(puVar12 + 0x3c) = 0xfffffffe;
            if (uVar18 == 0) break;
            piVar20 = (int *)(lVar15 + 4);
            while (piVar20[-1] != 0x54706054) {
              piVar20 = piVar20 + 2;
              uVar18 = uVar18 - 1;
              if (uVar18 == 0) goto LAB_0279e7b0;
            }
            iVar2 = 0;
            if (*piVar20 != -1) {
              iVar2 = *piVar20;
            }
            *(int *)(puVar12 + 0x3c) = iVar2;
            if (*puVar14 == 0) break;
          } while( true );
        }
LAB_0279e7b0:
        uVar17 = *puVar19;
        if (*puVar14 != 0) {
          cVar16 = *puVar3;
          do {
            if (cVar16 == '\0') {
              cVar16 = '\x01';
              *(undefined8 *)puVar12 = 0xffffffffffffffff;
              *(undefined8 *)(puVar12 + 8) = 0xffffffffffffffff;
              *puVar3 = 1;
              *(undefined4 *)(puVar12 + 0x50) = 0xffffffff;
              *(undefined8 *)(puVar12 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar12 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar12 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar12 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar12 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar12 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar12 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar12 + 0x48) = 0xffffffffffffffff;
              uVar5 = *puVar14;
            }
            else {
              if (*(int *)(puVar12 + 0x3c) != -1) break;
              uVar5 = *puVar14;
            }
            if ((uVar5 == 0) || (puVar19 = (uint *)(ulong)uVar5, puVar14 == puVar19)) break;
            lVar15 = 0xc;
            if (*(char *)((long)puVar14 + (10 - (long)puVar19)) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar14 + (lVar15 - (long)puVar19);
            if (lVar15 == 0) break;
            uVar18 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar19));
            *(undefined4 *)(puVar12 + 0x3c) = 0xfffffffe;
            if (uVar18 == 0) break;
            piVar20 = (int *)(lVar15 + 4);
            while (piVar20[-1] != 0x54706054) {
              piVar20 = piVar20 + 2;
              uVar18 = uVar18 - 1;
              if (uVar18 == 0) goto LAB_0279e884;
            }
            iVar2 = 0;
            if (*piVar20 != -1) {
              iVar2 = *piVar20;
            }
            *(int *)(puVar12 + 0x3c) = iVar2;
            if (*puVar14 == 0) break;
          } while( true );
        }
LAB_0279e884:
        if (((uVar4 & uVar11) != 0) != ((uVar17 & uVar11) != 0)) {
          lVar15 = *(long *)PTR_DAT_04bb32e8;
          uVar8 = *(ushort *)(lVar15 + 0x4060);
          bVar6 = *(byte *)(lVar15 + 0x4062);
          bVar7 = *(byte *)(lVar15 + 0x4063);
          uVar18 = nn::time::IsValidDate((uint)uVar8,(uint)bVar6,(uint)bVar7);
          puVar19 = (uint *)(param_1 + 0x2298);
          if (*puVar14 != 0) {
            cVar16 = *puVar3;
            do {
              if (cVar16 == '\0') {
                cVar16 = '\x01';
                *(undefined8 *)puVar12 = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 8) = 0xffffffffffffffff;
                *puVar3 = 1;
                *(undefined4 *)(puVar12 + 0x50) = 0xffffffff;
                *(undefined8 *)(puVar12 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x48) = 0xffffffffffffffff;
                uVar4 = *puVar14;
              }
              else {
                uVar4 = *(uint *)(puVar12 + 0x3c);
                if (-1 < (int)uVar4) {
                  if (((ushort *)((ulong)uVar4 + (long)puVar14) != (ushort *)0x0) &&
                     (uVar9 = *(ushort *)((ulong)uVar4 + (long)puVar14), uVar9 < 0x200)) {
                    puVar19 = puVar19 + (ulong)uVar9 * 6;
                  }
                  break;
                }
                if (uVar4 != 0xffffffff) break;
                uVar4 = *puVar14;
              }
              if ((uVar4 == 0) || (puVar23 = (uint *)(ulong)uVar4, puVar14 == puVar23)) break;
              lVar15 = 0xc;
              if (*(char *)((long)puVar14 + (10 - (long)puVar23)) != '\0') {
                lVar15 = 0x1c;
              }
              lVar15 = (long)puVar14 + (lVar15 - (long)puVar23);
              if (lVar15 == 0) break;
              uVar21 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar23));
              *(undefined4 *)(puVar12 + 0x3c) = 0xfffffffe;
              if (uVar21 == 0) break;
              piVar20 = (int *)(lVar15 + 4);
              while (piVar20[-1] != 0x54706054) {
                piVar20 = piVar20 + 2;
                uVar21 = uVar21 - 1;
                if (uVar21 == 0) goto LAB_0279e9f4;
              }
              iVar2 = 0;
              if (*piVar20 != -1) {
                iVar2 = *piVar20;
              }
              *(int *)(puVar12 + 0x3c) = iVar2;
              if (*puVar14 == 0) break;
            } while( true );
          }
LAB_0279e9f4:
          puVar23 = puVar19 + param_4;
          if (5 < param_4) {
            puVar23 = puVar19;
          }
          uVar4 = (uint)bVar7 << 0x18 | (uint)bVar6 << 0x10 | (uint)uVar8;
          if ((uVar18 & 1) == 0) {
            uVar4 = 0;
          }
          *puVar23 = uVar4;
          if (*param_2 < 8) {
            if (*puVar14 != 0) {
              cVar16 = *puVar3;
              do {
                if (cVar16 == '\0') {
                  cVar16 = '\x01';
                  *(undefined8 *)puVar12 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar12 + 8) = 0xffffffffffffffff;
                  *puVar3 = 1;
                  *(undefined4 *)(puVar12 + 0x50) = 0xffffffff;
                  *(undefined8 *)(puVar12 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar12 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar12 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar12 + 0x28) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar12 + 0x30) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar12 + 0x38) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar12 + 0x40) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar12 + 0x48) = 0xffffffffffffffff;
                }
                else {
                  uVar4 = *(uint *)(puVar12 + 0x48);
                  if (-1 < (int)uVar4) {
                    lVar15 = (ulong)uVar4 + (long)puVar14;
                    goto LAB_0279eaf8;
                  }
                  if (uVar4 != 0xffffffff) break;
                }
                puVar19 = (uint *)(ulong)*puVar14;
                lVar15 = 0;
                if ((*puVar14 == 0) || (puVar14 == puVar19)) goto LAB_0279eaf8;
                lVar15 = 0xc;
                if (*(char *)((long)puVar14 + (10 - (long)puVar19)) != '\0') {
                  lVar15 = 0x1c;
                }
                lVar1 = (long)puVar14 + (lVar15 - (long)puVar19);
                if (lVar1 == 0) break;
                uVar18 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar19));
                *(undefined4 *)(puVar12 + 0x48) = 0xfffffffe;
                lVar15 = 0;
                if (uVar18 == 0) goto LAB_0279eaf8;
                piVar20 = (int *)(lVar1 + 4);
                while (piVar20[-1] != 0x45f320f2) {
                  piVar20 = piVar20 + 2;
                  uVar18 = uVar18 - 1;
                  if (uVar18 == 0) {
                    lVar15 = 0;
                    goto LAB_0279eaf8;
                  }
                }
                iVar2 = 0;
                if (*piVar20 != -1) {
                  iVar2 = *piVar20;
                }
                *(int *)(puVar12 + 0x48) = iVar2;
              } while (*puVar14 != 0);
            }
            lVar15 = 0;
LAB_0279eaf8:
            lStack_68 = *(long *)PTR_PTR_04bb6438;
            if (lVar15 != 0) {
              lStack_68 = lVar15;
            }
            local_70 = PTR_DAT_04bb2020 + 0x10;
            FUN_027a3ce0(1,&local_70);
          }
        }
      }
    }
  }
  return;
LAB_0279e638:
  if (-1 < (int)uVar17) {
    if (((ushort *)((long)puVar14 + (ulong)uVar17) != (ushort *)0x0) &&
       (uVar8 = *(ushort *)((long)puVar14 + (ulong)uVar17), uVar8 < 0x200)) {
      puVar23 = puVar19 + uVar8;
    }
    goto LAB_0279e6b8;
  }
  if (((uVar17 != 0xffffffff) || (puVar22 = (uint *)(ulong)*puVar14, *puVar14 == 0)) ||
     (puVar14 == puVar22)) goto LAB_0279e6b8;
  lVar15 = 0xc;
  if (*(char *)((long)puVar14 + (10 - (long)puVar22)) != '\0') {
    lVar15 = 0x1c;
  }
  lVar15 = (long)puVar14 + (lVar15 - (long)puVar22);
  if (lVar15 == 0) goto LAB_0279e6b8;
  uVar18 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar22));
  *(undefined4 *)(puVar12 + 0x3c) = 0xfffffffe;
  if (uVar18 == 0) goto LAB_0279e6b8;
  puVar22 = (uint *)(lVar15 + 4);
  while (puVar22[-1] != 0x54706054) {
    puVar22 = puVar22 + 2;
    uVar18 = uVar18 - 1;
    if (uVar18 == 0) goto LAB_0279e6b8;
  }
  uVar17 = 0;
  if (*puVar22 != 0xffffffff) {
    uVar17 = *puVar22;
  }
  *(uint *)(puVar12 + 0x3c) = uVar17;
  if (*puVar14 == 0) goto LAB_0279e6b8;
  goto LAB_0279e638;
}

