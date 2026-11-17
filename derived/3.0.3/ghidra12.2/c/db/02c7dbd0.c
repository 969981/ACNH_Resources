
/* WARNING: Type propagation algorithm not settling */

void FUN_02c7dbd0(long param_1,long *param_2)

{
  ushort *puVar1;
  char *pcVar2;
  ushort uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  uint *puVar14;
  char cVar15;
  ulong uVar16;
  char *pcVar17;
  uint *puVar18;
  int *piVar19;
  long lVar20;
  ulong uVar21;
  uint local_9c;
  undefined2 local_7c;
  undefined1 local_7a;
  byte local_74 [4];
  undefined **local_70;
  char *pcStack_68;
  
  local_70 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  pcStack_68 = "TanuportAmiiboBromideUnlock";
  iVar7 = FUN_0274bce0((byte *)(param_1 + 0x1f8),&local_70);
  if (iVar7 != 0) {
    local_74[0] = *(byte *)(param_1 + 0x1f8);
    if (7 < local_74[0]) {
      local_74[0] = 0xff;
    }
    lVar10 = FUN_02583354(DAT_055021a0,local_74,1);
    if (lVar10 != 0) {
      lVar20 = lVar10 + 0x194b0;
      if (*(long *)(lVar10 + 0x194b8) == 0) {
        lVar20 = *(long *)(DAT_05574040 + 0x20);
      }
      if ((*(long **)(lVar20 + 0x28) == (long *)0x0) ||
         (puVar11 = (undefined8 *)**(long **)(lVar20 + 0x28), puVar11 == (undefined8 *)0x0)) {
        local_9c = 0;
      }
      else {
        local_9c = (**(code **)*puVar11)();
      }
      lVar13 = DAT_053f9928;
      puVar6 = PTR_DAT_04bb40a8;
      lVar10 = *(long *)(lVar20 + 0x10) + *(long *)(lVar20 + 8);
      uVar9 = *(uint *)(DAT_053f9928 + 0x1c0);
      if ((0 < (int)uVar9) ||
         (((*(long *)(DAT_053f9928 + 0xb0) != 0 &&
           (puVar14 = *(uint **)(*(long *)(DAT_053f9928 + 0xb0) + 8), puVar14 != (uint *)0x0)) &&
          (uVar9 = *puVar14, 0 < (int)uVar9)))) {
        uVar21 = 0;
        do {
          if ((int)*(uint *)(lVar13 + 0x1c0) < 1) {
            if (((((*(long *)(lVar13 + 0xb0) != 0) &&
                  (puVar14 = *(uint **)(*(long *)(lVar13 + 0xb0) + 8), puVar14 != (uint *)0x0)) &&
                 ((*(uint *)(lVar13 + 200) <= uVar21 ||
                  (*(char *)(*(long *)(lVar13 + 0xd0) + uVar21) != '\0')))) &&
                ((uVar21 < *puVar14 && (puVar14[1] != 0)))) && ((ushort)puVar14[2] != 0)) {
              iVar7 = 0xc;
              if (*(char *)((long)puVar14 + 10) != '\0') {
                iVar7 = 0x1c;
              }
              puVar14 = (uint *)((ulong)(puVar14[1] * (int)uVar21 + (uint)(ushort)puVar14[2] * 8 +
                                        iVar7) + (long)puVar14);
              goto joined_r0x02c7df2c;
            }
          }
          else if (uVar21 < *(uint *)(lVar13 + 0x1c0)) {
            uVar16 = uVar21 & 0xffffffff;
            if (*(uint *)(lVar13 + 0x1b0) <= uVar21) {
              uVar16 = 0;
            }
            puVar14 = *(uint **)(*(long *)(lVar13 + 0x1b8) + uVar16 * 8);
joined_r0x02c7df2c:
            if (puVar14 != (uint *)0x0) {
              if (*puVar14 != 0) {
                cVar15 = DAT_04ca4be8;
                do {
                  puVar5 = PTR_DAT_04bb40a0;
                  if (cVar15 == '\0') {
                    cVar15 = '\x01';
                    *(undefined8 *)puVar6 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar6 + 0x70) = 0xffffffffffffffff;
                    *(undefined4 *)(puVar6 + 0x78) = 0xffffffff;
                    *puVar5 = 1;
                    *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar6 + 0x60) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar6 + 0x68) = 0xffffffffffffffff;
                  }
                  else {
                    uVar8 = *(uint *)(puVar6 + 0x50);
                    if (-1 < (int)uVar8) {
                      pcVar17 = (char *)((ulong)uVar8 + (long)puVar14);
                      goto LAB_02c7de2c;
                    }
                    if (uVar8 != 0xffffffff) break;
                  }
                  puVar18 = (uint *)(ulong)*puVar14;
                  pcVar17 = (char *)0x0;
                  if ((*puVar14 == 0) || (puVar14 == puVar18)) goto LAB_02c7de2c;
                  lVar12 = 0xc;
                  if (*(char *)((long)puVar14 + (10 - (long)puVar18)) != '\0') {
                    lVar12 = 0x1c;
                  }
                  lVar12 = (long)puVar14 + (lVar12 - (long)puVar18);
                  if (lVar12 == 0) break;
                  uVar16 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar18));
                  *(undefined4 *)(puVar6 + 0x50) = 0xfffffffe;
                  pcVar17 = (char *)0x0;
                  if (uVar16 == 0) goto LAB_02c7de2c;
                  piVar19 = (int *)(lVar12 + 4);
                  while (piVar19[-1] != 0x2f1b930d) {
                    piVar19 = piVar19 + 2;
                    uVar16 = uVar16 - 1;
                    if (uVar16 == 0) {
                      pcVar17 = (char *)0x0;
                      goto LAB_02c7de2c;
                    }
                  }
                  iVar7 = 0;
                  if (*piVar19 != -1) {
                    iVar7 = *piVar19;
                  }
                  *(int *)(puVar6 + 0x50) = iVar7;
                } while (*puVar14 != 0);
              }
              pcVar17 = (char *)0x0;
LAB_02c7de2c:
              pcVar2 = *(char **)PTR_PTR_04bc0550;
              if (pcVar17 != (char *)0x0) {
                pcVar2 = pcVar17;
              }
              local_70 = &PTR_LAB_048f9770;
              pcStack_68 = pcVar2;
              uVar16 = FUN_028b5a70(lVar10 + 0x30508,&local_70);
              if ((uVar16 & 1) != 0) {
                local_70 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
                pcStack_68 = pcVar2;
                FUN_021f6050(&local_7c,&local_70);
                FUN_0277dedc(&local_7c);
                lVar12 = (**(code **)(*param_2 + 0x18))(param_2);
                uVar8 = FUN_0277d6c4(&local_7c);
                if ((uVar8 >> 3 & 0x1fff) < 0x753) {
                  lVar4 = (ulong)((uVar8 & 0xffff) >> 5) * 4;
                  *(uint *)(lVar12 + lVar4) = *(uint *)(lVar12 + lVar4) | 1 << (ulong)(uVar8 & 0x1f)
                  ;
                }
              }
            }
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 != uVar9);
      }
      lVar13 = DAT_053e67f0;
      puVar6 = PTR_DAT_04bb40b8;
      uVar9 = *(uint *)(DAT_053e67f0 + 0x1c0);
      if ((0 < (int)uVar9) ||
         (((*(long *)(DAT_053e67f0 + 0xb0) != 0 &&
           (puVar14 = *(uint **)(*(long *)(DAT_053e67f0 + 0xb0) + 8), puVar14 != (uint *)0x0)) &&
          (uVar9 = *puVar14, 0 < (int)uVar9)))) {
        uVar21 = 0;
        do {
          if ((int)*(uint *)(lVar13 + 0x1c0) < 1) {
            if ((((*(long *)(lVar13 + 0xb0) != 0) &&
                 (puVar14 = *(uint **)(*(long *)(lVar13 + 0xb0) + 8), puVar14 != (uint *)0x0)) &&
                ((*(uint *)(lVar13 + 200) <= uVar21 ||
                 (*(char *)(*(long *)(lVar13 + 0xd0) + uVar21) != '\0')))) &&
               (((uVar21 < *puVar14 && (puVar14[1] != 0)) && ((ushort)puVar14[2] != 0)))) {
              iVar7 = 0xc;
              if (*(char *)((long)puVar14 + 10) != '\0') {
                iVar7 = 0x1c;
              }
              puVar14 = (uint *)((ulong)(puVar14[1] * (int)uVar21 + (uint)(ushort)puVar14[2] * 8 +
                                        iVar7) + (long)puVar14);
              goto joined_r0x02c7e1f8;
            }
          }
          else if (uVar21 < *(uint *)(lVar13 + 0x1c0)) {
            uVar16 = uVar21 & 0xffffffff;
            if (*(uint *)(lVar13 + 0x1b0) <= uVar21) {
              uVar16 = 0;
            }
            puVar14 = *(uint **)(*(long *)(lVar13 + 0x1b8) + uVar16 * 8);
joined_r0x02c7e1f8:
            if (puVar14 != (uint *)0x0) {
              if (*puVar14 != 0) {
                cVar15 = DAT_04ca4b40;
                do {
                  puVar5 = PTR_DAT_04bb40b0;
                  if (cVar15 == '\0') {
                    cVar15 = '\x01';
                    *(undefined8 *)puVar6 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
                    *(undefined4 *)(puVar6 + 0xa0) = 0xffffffff;
                    *puVar5 = 1;
                    *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar6 + 0x60) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar6 + 0x68) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar6 + 0x70) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar6 + 0x78) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar6 + 0x80) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar6 + 0x88) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar6 + 0x90) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar6 + 0x98) = 0xffffffffffffffff;
                  }
                  else {
                    uVar8 = *(uint *)(puVar6 + 0x80);
                    if (-1 < (int)uVar8) {
                      pcVar17 = (char *)((ulong)uVar8 + (long)puVar14);
                      goto LAB_02c7e0cc;
                    }
                    if (uVar8 != 0xffffffff) break;
                  }
                  puVar18 = (uint *)(ulong)*puVar14;
                  pcVar17 = (char *)0x0;
                  if ((*puVar14 == 0) || (puVar14 == puVar18)) goto LAB_02c7e0cc;
                  lVar12 = 0xc;
                  if (*(char *)((long)puVar14 + (10 - (long)puVar18)) != '\0') {
                    lVar12 = 0x1c;
                  }
                  lVar12 = (long)puVar14 + (lVar12 - (long)puVar18);
                  if (lVar12 == 0) break;
                  uVar16 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar18));
                  *(undefined4 *)(puVar6 + 0x80) = 0xfffffffe;
                  pcVar17 = (char *)0x0;
                  if (uVar16 == 0) goto LAB_02c7e0cc;
                  piVar19 = (int *)(lVar12 + 4);
                  while (piVar19[-1] != 0x2f1b930d) {
                    piVar19 = piVar19 + 2;
                    uVar16 = uVar16 - 1;
                    if (uVar16 == 0) {
                      pcVar17 = (char *)0x0;
                      goto LAB_02c7e0cc;
                    }
                  }
                  iVar7 = 0;
                  if (*piVar19 != -1) {
                    iVar7 = *piVar19;
                  }
                  *(int *)(puVar6 + 0x80) = iVar7;
                } while (*puVar14 != 0);
              }
              pcVar17 = (char *)0x0;
LAB_02c7e0cc:
              pcVar2 = *(char **)PTR_PTR_04bc1178;
              if (pcVar17 != (char *)0x0) {
                pcVar2 = pcVar17;
              }
              local_7c = 0x23;
              local_70 = &PTR_LAB_048f9770;
              local_7a = 8;
              pcStack_68 = pcVar2;
              FUN_020fd3a0(&local_7c,&local_70);
              uVar16 = (ulong)(byte)local_7c;
              if (0x22 < (byte)local_7c) {
                uVar16 = 0;
              }
              if ((*(uint *)(lVar10 + 0x30518 + uVar16 * 4) >> (ulong)(local_7c._1_1_ & 0x1f) & 1)
                  != 0) {
                local_70 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
                pcStack_68 = pcVar2;
                FUN_021f6050(&local_7c,&local_70);
                FUN_0277dedc(&local_7c);
                lVar12 = (**(code **)(*param_2 + 0x18))(param_2);
                uVar8 = FUN_0277d6c4(&local_7c);
                if ((uVar8 >> 3 & 0x1fff) < 0x753) {
                  lVar4 = (ulong)((uVar8 & 0xffff) >> 5) * 4;
                  *(uint *)(lVar12 + lVar4) = *(uint *)(lVar12 + lVar4) | 1 << (ulong)(uVar8 & 0x1f)
                  ;
                }
              }
            }
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 != uVar9);
      }
      puVar1 = (ushort *)(param_1 + 0x97d18);
      uVar3 = *puVar1;
      if ((uVar3 & 1) != 0) {
        local_70 = (undefined **)0x32e9;
        FUN_0277d4ac(&local_70);
        FUN_0277dedc(&local_70);
        lVar13 = (**(code **)(*param_2 + 0x18))(param_2);
        uVar9 = FUN_0277d6c4(&local_70);
        if ((uVar9 >> 3 & 0x1fff) < 0x753) {
          lVar12 = (ulong)((uVar9 & 0xffff) >> 5) * 4;
          *(uint *)(lVar13 + lVar12) = *(uint *)(lVar13 + lVar12) | 1 << (ulong)(uVar9 & 0x1f);
        }
        uVar3 = *puVar1;
      }
      if ((uVar3 >> 1 & 1) != 0) {
        local_70 = (undefined **)0x32ea;
        FUN_0277d4ac(&local_70);
        FUN_0277dedc(&local_70);
        lVar13 = (**(code **)(*param_2 + 0x18))(param_2);
        uVar9 = FUN_0277d6c4(&local_70);
        if ((uVar9 >> 3 & 0x1fff) < 0x753) {
          lVar12 = (ulong)((uVar9 & 0xffff) >> 5) * 4;
          *(uint *)(lVar13 + lVar12) = *(uint *)(lVar13 + lVar12) | 1 << (ulong)(uVar9 & 0x1f);
        }
        uVar3 = *puVar1;
      }
      if ((uVar3 >> 2 & 1) != 0) {
        local_70 = (undefined **)0x32eb;
        FUN_0277d4ac(&local_70);
        FUN_0277dedc(&local_70);
        lVar13 = (**(code **)(*param_2 + 0x18))(param_2);
        uVar9 = FUN_0277d6c4(&local_70);
        if ((uVar9 >> 3 & 0x1fff) < 0x753) {
          lVar12 = (ulong)((uVar9 & 0xffff) >> 5) * 4;
          *(uint *)(lVar13 + lVar12) = *(uint *)(lVar13 + lVar12) | 1 << (ulong)(uVar9 & 0x1f);
        }
        uVar3 = *puVar1;
      }
      if ((uVar3 >> 3 & 1) != 0) {
        local_70 = (undefined **)0x32ec;
        FUN_0277d4ac(&local_70);
        FUN_0277dedc(&local_70);
        lVar13 = (**(code **)(*param_2 + 0x18))(param_2);
        uVar9 = FUN_0277d6c4(&local_70);
        if ((uVar9 >> 3 & 0x1fff) < 0x753) {
          lVar12 = (ulong)((uVar9 & 0xffff) >> 5) * 4;
          *(uint *)(lVar13 + lVar12) = *(uint *)(lVar13 + lVar12) | 1 << (ulong)(uVar9 & 0x1f);
        }
        uVar3 = *puVar1;
      }
      if ((uVar3 >> 4 & 1) != 0) {
        local_70 = (undefined **)0x32ed;
        FUN_0277d4ac(&local_70);
        FUN_0277dedc(&local_70);
        lVar13 = (**(code **)(*param_2 + 0x18))(param_2);
        uVar9 = FUN_0277d6c4(&local_70);
        if ((uVar9 >> 3 & 0x1fff) < 0x753) {
          lVar12 = (ulong)((uVar9 & 0xffff) >> 5) * 4;
          *(uint *)(lVar13 + lVar12) = *(uint *)(lVar13 + lVar12) | 1 << (ulong)(uVar9 & 0x1f);
        }
        uVar3 = *puVar1;
      }
      if ((uVar3 >> 5 & 1) != 0) {
        local_70 = (undefined **)0x32ee;
        FUN_0277d4ac(&local_70);
        FUN_0277dedc(&local_70);
        lVar13 = (**(code **)(*param_2 + 0x18))(param_2);
        uVar9 = FUN_0277d6c4(&local_70);
        if ((uVar9 >> 3 & 0x1fff) < 0x753) {
          lVar12 = (ulong)((uVar9 & 0xffff) >> 5) * 4;
          *(uint *)(lVar13 + lVar12) = *(uint *)(lVar13 + lVar12) | 1 << (ulong)(uVar9 & 0x1f);
        }
      }
      if ((*(byte *)(lVar10 + 0x305a4) & 1) != 0) {
        local_70 = (undefined **)0x29f5;
        FUN_0277d4ac(&local_70);
        FUN_0277dedc(&local_70);
        lVar10 = (**(code **)(*param_2 + 0x18))(param_2);
        uVar9 = FUN_0277d6c4(&local_70);
        if ((uVar9 >> 3 & 0x1fff) < 0x753) {
          lVar13 = (ulong)((uVar9 & 0xffff) >> 5) * 4;
          *(uint *)(lVar10 + lVar13) = *(uint *)(lVar10 + lVar13) | 1 << (ulong)(uVar9 & 0x1f);
        }
      }
      if ((((local_9c & 1) != 0) && (*(long *)(lVar20 + 0x28) != 0)) &&
         (puVar11 = *(undefined8 **)(*(long *)(lVar20 + 0x28) + 8), puVar11 != (undefined8 *)0x0)) {
        (**(code **)*puVar11)();
      }
    }
  }
  return;
}

