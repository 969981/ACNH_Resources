
void FUN_03b39da0(char *param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  uint *puVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  ushort uVar9;
  char cVar10;
  undefined *puVar11;
  bool bVar12;
  undefined2 uVar13;
  uint uVar14;
  long lVar15;
  long *plVar16;
  int iVar17;
  long lVar18;
  byte *pbVar19;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  undefined8 *puVar23;
  long *plVar24;
  undefined8 uVar25;
  long *plVar26;
  uint *puVar27;
  char *pcVar28;
  ushort *puVar29;
  long *plVar30;
  byte *pbVar31;
  void *__dest;
  undefined8 *puVar32;
  void *__src;
  undefined8 *__src_00;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 local_90;
  char *local_88;
  
  plVar24 = (long *)PTR_DAT_04bd1e70;
  if (*(char *)(param_2 + 0x120) != '\0') {
    uVar25 = *(undefined8 *)(*(long *)PTR_DAT_04bc3ee8 + 0x98);
    if ((param_3 & 1) == 0) {
      lVar22 = *(long *)(*(long *)PTR_DAT_04bd1e70 + 0x178);
      if (lVar22 != 0) {
        FUN_03b527f0(*(undefined4 *)(param_2 + 0xd8),lVar22 + 0x60);
        uVar14 = (**(code **)(*(long *)(lVar22 + 0x60) + 0x48))(lVar22 + 0x60);
        pcVar28 = *(char **)(param_1 + 0x18);
        if (pcVar28 != "FinalMix") {
          iVar17 = 8;
          if (*(int *)(param_1 + 0x20) < 9) {
            iVar17 = *(int *)(param_1 + 0x20) + -1;
          }
          memcpy(pcVar28,"FinalMix",(long)iVar17);
          pcVar28[iVar17] = '\0';
        }
        *(uint *)(param_1 + 8) = uVar14 & 0xffff;
        *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0xd8);
      }
      if (*(int *)(param_2 + 0xe0) != 0) {
        puVar23 = *(undefined8 **)(param_2 + 0xe8);
        lVar22 = (long)*(int *)(param_2 + 0xe0) << 3;
        do {
          lVar15 = FUN_03b80b70(uVar25,*puVar23);
          if (lVar15 != 0) {
            iVar17 = *(int *)(param_1 + 0x80);
            iVar7 = *(int *)(param_1 + 0x78);
            if (iVar17 < iVar7) {
              *(int *)(param_1 + 0x80) = iVar17 + 1;
              iVar6 = 0;
              if (iVar7 <= *(int *)(param_1 + 0x7c) + iVar17) {
                iVar6 = iVar7;
              }
              puVar1 = (undefined8 *)
                       (*(long *)(param_1 + 0x70) +
                       (long)((*(int *)(param_1 + 0x7c) + iVar17) - iVar6) * 0x10);
              *puVar1 = 1;
              puVar1[1] = lVar15;
            }
          }
          puVar23 = puVar23 + 1;
          lVar22 = lVar22 + -8;
        } while (lVar22 != 0);
      }
    }
    if (*(int *)(param_2 + 0x58) != 0) {
      plVar26 = (long *)(param_1 + 0x198);
      puVar23 = *(undefined8 **)(param_2 + 0x60);
      puVar1 = puVar23 + *(int *)(param_2 + 0x58);
      puVar3 = PTR_DAT_04bb2020 + 0x10;
      do {
        if (*(long *)(*plVar24 + 0x178) != 0) {
          plVar30 = (long *)*puVar23;
          lVar22 = plVar30[0xc];
          plVar16 = (long *)FUN_03b54d30(*(long *)(*plVar24 + 0x178),48000,
                                         *(undefined4 *)((long)plVar30 + 0x5c));
          if (plVar16 != (long *)0x0) {
            FUN_03b527f0((int)lVar22);
            uVar14 = (**(code **)(*plVar16 + 0x48))(plVar16);
            uVar14 = uVar14 & 0xffff;
            lVar15 = *(long *)(param_1 + 400);
            uVar21 = uVar14;
            if (*(uint *)(param_1 + 0x188) <= uVar14) {
              uVar21 = 0;
            }
            uVar20 = (ulong)uVar21;
            puVar27 = (uint *)(lVar15 + uVar20 * 0x180);
            __dest = *(void **)(puVar27 + 4);
            puVar4 = puVar27 + 2;
            (**(code **)(*plVar30 + 0x18))(plVar30);
            __src = (void *)plVar30[1];
            if (__dest != __src) {
              (**(code **)(*plVar30 + 0x18))(plVar30);
              lVar18 = 0;
              do {
                if (*(char *)(plVar30[1] + lVar18) == '\0') goto LAB_03b3a010;
                lVar5 = plVar30[1] + lVar18;
                if (*(char *)(lVar5 + 1) == '\0') {
                  lVar18 = lVar18 + 1;
                  goto LAB_03b3a010;
                }
                if (*(char *)(lVar5 + 2) == '\0') {
                  lVar18 = lVar18 + 2;
                  goto LAB_03b3a010;
                }
                lVar18 = lVar18 + 3;
              } while (lVar18 != 0x80001);
              lVar18 = 0;
LAB_03b3a010:
              iVar17 = (int)lVar18;
              if ((int)puVar27[6] <= (int)lVar18) {
                iVar17 = puVar27[6] - 1;
              }
              memcpy(__dest,__src,(long)iVar17);
              *(undefined1 *)((long)__dest + (long)iVar17) = 0;
              plVar24 = (long *)PTR_DAT_04bd1e70;
            }
            *puVar27 = uVar14;
            *(int *)(lVar15 + uVar20 * 0x180 + 0x60) = (int)lVar22;
            if (*(int *)(param_1 + 0x1b0) < *(int *)(param_1 + 0x1b4)) {
              puVar32 = *(undefined8 **)(param_1 + 0x1a0);
              if (puVar32 != (undefined8 *)0x0) {
                *(undefined8 *)(param_1 + 0x1a0) = *puVar32;
              }
              puVar2 = puVar32 + 8;
              puVar32[4] = puVar3;
              puVar11 = PTR_DAT_04bb2120;
              puVar32[2] = 0;
              puVar32[3] = 0;
              *(uint *)(puVar32 + 6) = uVar14;
              *(undefined1 *)(puVar32 + 0x10) = 0;
              puVar32[5] = puVar11;
              *puVar32 = &PTR_LAB_04b761a0;
              puVar32[1] = 0;
              puVar32[7] = plVar26;
              (**(code **)(*(long *)puVar4 + 0x18))(puVar4);
              __src_00 = *(undefined8 **)(puVar27 + 4);
              if (puVar2 != __src_00) {
                (**(code **)(*(long *)puVar4 + 0x18))(puVar4);
                lVar22 = 0;
                do {
                  if (*(char *)(*(long *)(puVar27 + 4) + lVar22) == '\0') {
LAB_03b3a1c8:
                    iVar17 = (int)lVar22;
joined_r0x03b3a1cc:
                    if (0x40 < iVar17) {
                      iVar17 = 0x40;
                    }
                    goto LAB_03b3a1d4;
                  }
                  lVar18 = *(long *)(puVar27 + 4) + lVar22;
                  if (*(char *)(lVar18 + 1) == '\0') {
                    lVar22 = lVar22 + 1;
                    goto LAB_03b3a1c8;
                  }
                  if (*(char *)(lVar18 + 2) == '\0') {
                    iVar17 = (int)lVar22 + 2;
                    goto joined_r0x03b3a1cc;
                  }
                  lVar22 = lVar22 + 3;
                } while (lVar22 != 0x80001);
                iVar17 = 0;
LAB_03b3a1d4:
                memcpy(puVar2,__src_00,(long)iVar17);
                *(undefined1 *)((long)puVar2 + (long)iVar17) = 0;
              }
              puVar32[5] = puVar2;
              *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) + 1;
              lVar22 = FUN_038b0320(plVar26,*(undefined8 *)(param_1 + 0x198),puVar32);
              *(long *)(param_1 + 0x198) = lVar22;
              *(undefined8 *)(lVar22 + 0x18) = 1;
              plVar24 = (long *)PTR_DAT_04bd1e70;
            }
            else {
              for (lVar22 = *plVar26; lVar22 != 0; lVar22 = *(long *)(lVar22 + lVar18)) {
                (**(code **)(*(long *)puVar4 + 0x18))(puVar4);
                (**(code **)(*(long *)puVar4 + 0x18))(puVar4);
                pbVar31 = *(byte **)(puVar27 + 4);
                (**(code **)(*(long *)(lVar22 + 0x20) + 0x18))((long *)(lVar22 + 0x20));
                if (pbVar31 == *(byte **)(lVar22 + 0x28)) {
LAB_03b3a1bc:
                  *(uint *)(lVar22 + 0x30) = uVar14;
                  break;
                }
                pbVar31 = *(byte **)(lVar22 + 0x28);
                pbVar19 = *(byte **)(puVar27 + 4);
                lVar18 = 0x7ffff;
                while( true ) {
                  bVar8 = *pbVar19;
                  if (bVar8 != *pbVar31) break;
                  if (bVar8 == 0) goto LAB_03b3a1bc;
                  bVar12 = lVar18 == 0;
                  pbVar31 = pbVar31 + 1;
                  pbVar19 = pbVar19 + 1;
                  lVar18 = lVar18 + -1;
                  if (bVar12) goto LAB_03b3a1bc;
                }
                lVar18 = 8;
                if (*pbVar31 <= bVar8) {
                  lVar18 = 0x10;
                }
              }
            }
            if ((int)plVar30[0xd] != 0) {
              puVar32 = (undefined8 *)plVar30[0xe];
              lVar22 = (long)(int)plVar30[0xd] << 3;
              lVar15 = lVar15 + uVar20 * 0x180;
              do {
                lVar18 = FUN_03b80b70(uVar25,*puVar32);
                if (lVar18 != 0) {
                  iVar17 = *(int *)(lVar15 + 0x78);
                  iVar7 = *(int *)(lVar15 + 0x70);
                  if (iVar17 < iVar7) {
                    *(int *)(lVar15 + 0x78) = iVar17 + 1;
                    iVar17 = *(int *)(lVar15 + 0x74) + iVar17;
                    iVar6 = 0;
                    if (iVar7 <= iVar17) {
                      iVar6 = iVar7;
                    }
                    puVar2 = (undefined8 *)
                             (*(long *)(lVar15 + 0x68) + (long)(iVar17 - iVar6) * 0x10);
                    *puVar2 = 1;
                    puVar2[1] = lVar18;
                  }
                }
                puVar32 = puVar32 + 1;
                lVar22 = lVar22 + -8;
              } while (lVar22 != 0);
            }
          }
        }
        puVar23 = puVar23 + 1;
      } while (puVar23 != puVar1);
    }
    if (*(int *)(param_2 + 0x100) != 0) {
      puVar23 = *(undefined8 **)(param_2 + 0x108);
      puVar1 = puVar23 + *(int *)(param_2 + 0x100);
      puVar3 = PTR_DAT_04bb2020 + 0x10;
LAB_03b3a33c:
      puVar32 = (undefined8 *)*puVar23;
      plVar24 = (long *)*puVar32;
      if ((plVar24 != (long *)0x0) && (puVar32[1] != 0 && *param_1 != '\0')) {
        for (lVar22 = *(long *)(param_1 + 0x198); lVar22 != 0; lVar22 = *(long *)(lVar22 + lVar15))
        {
          (**(code **)(*plVar24 + 0x18))(plVar24);
          (**(code **)(*plVar24 + 0x18))(plVar24);
          pbVar31 = (byte *)plVar24[1];
          (**(code **)(*(long *)(lVar22 + 0x20) + 0x18))((long *)(lVar22 + 0x20));
          if (pbVar31 == *(byte **)(lVar22 + 0x28)) {
LAB_03b3a3ec:
            uVar14 = *(uint *)(lVar22 + 0x30);
            if (*(uint *)(param_1 + 0x188) <= uVar14) {
              uVar14 = 0;
            }
            if (*(long *)(param_1 + 400) != 0) {
              puVar29 = (ushort *)(*(long *)(param_1 + 400) + (long)(int)uVar14 * 0x180);
              plVar24 = (long *)puVar32[1];
              local_88 = "FinalMix";
              local_90 = puVar3;
              (**(code **)(*plVar24 + 0x18))(plVar24);
              (**(code **)(*plVar24 + 0x18))(plVar24);
              pcVar28 = (char *)plVar24[1];
              (**(code **)(local_90 + 0x18))(&local_90);
              if (pcVar28 == local_88) goto LAB_03b3a4d4;
              uVar20 = 0;
              bVar12 = true;
              goto LAB_03b3a474;
            }
            break;
          }
          pbVar31 = *(byte **)(lVar22 + 0x28);
          pbVar19 = (byte *)plVar24[1];
          lVar15 = 0x7ffff;
          while( true ) {
            bVar8 = *pbVar19;
            if (bVar8 != *pbVar31) break;
            if (bVar8 == 0) goto LAB_03b3a3ec;
            bVar12 = lVar15 == 0;
            pbVar31 = pbVar31 + 1;
            pbVar19 = pbVar19 + 1;
            lVar15 = lVar15 + -1;
            if (bVar12) goto LAB_03b3a3ec;
          }
          lVar15 = 8;
          if (*pbVar31 <= bVar8) {
            lVar15 = 0x10;
          }
        }
      }
      goto LAB_03b3a330;
    }
  }
  return;
  while( true ) {
    if (cVar10 == '\0') {
      if (bVar12) goto LAB_03b3a4d4;
      break;
    }
    cVar10 = *(char *)(lVar22 + -1);
    if (cVar10 != local_88[uVar20 + 1]) break;
    if (cVar10 == '\0') goto LAB_03b3a4d4;
    cVar10 = *(char *)(plVar24[1] + 2 + uVar20);
    if (cVar10 != local_88[uVar20 + 2]) break;
    if (cVar10 == '\0') goto LAB_03b3a4d4;
    bVar12 = uVar20 < 0x7fffe;
    uVar20 = uVar20 + 3;
    if (uVar20 == 0x80001) break;
LAB_03b3a474:
    lVar22 = plVar24[1] + 2 + uVar20;
    cVar10 = *(char *)(lVar22 + -2);
    if (cVar10 != local_88[uVar20]) break;
  }
  if ((*param_1 != '\0') && (lVar22 = *(long *)(param_1 + 0x198), lVar22 != 0)) {
    plVar24 = (long *)puVar32[1];
    do {
      (**(code **)(*plVar24 + 0x18))(plVar24);
      (**(code **)(*plVar24 + 0x18))(plVar24);
      pbVar31 = (byte *)plVar24[1];
      (**(code **)(*(long *)(lVar22 + 0x20) + 0x18))((long *)(lVar22 + 0x20));
      if (pbVar31 == *(byte **)(lVar22 + 0x28)) {
LAB_03b3a5e4:
        if (*(long *)(param_1 + 400) == 0) break;
        uVar14 = *(uint *)(lVar22 + 0x30);
        if (*(uint *)(param_1 + 0x188) <= uVar14) {
          uVar14 = 0;
        }
        lVar22 = *(long *)(*(long *)PTR_DAT_04bd1e70 + 0x178);
        if (lVar22 == 0) break;
        uVar9 = *puVar29;
        if (*(ushort *)(lVar22 + 0x1f0) == uVar9) {
          plVar24 = (long *)(lVar22 + 0x60);
        }
        else if (*(char *)(lVar22 + 0x28) == '\0') {
          plVar24 = (long *)0x0;
        }
        else {
          plVar24 = (long *)0x0;
          if (((uVar9 != 0xffff) && (*(long *)(lVar22 + 0x30) != 0)) &&
             ((uVar21 = (uint)uVar9, (int)uVar21 < *(int *)(lVar22 + 0x48) &&
              (plVar24 = (long *)(*(long *)(lVar22 + 0x30) + (ulong)uVar21 * 0xe8),
              *(ushort *)(plVar24 + 0x1c) != uVar21)))) {
            plVar24 = (long *)0x0;
          }
        }
        fVar35 = *(float *)(puVar32 + 2);
        uVar9 = *(ushort *)(*(long *)(param_1 + 400) + (long)(int)uVar14 * 0x180);
        if (*(ushort *)(lVar22 + 0x1f0) == uVar9) {
          plVar26 = (long *)(lVar22 + 0x60);
        }
        else if ((((*(char *)(lVar22 + 0x28) == '\0') || (uVar9 == 0xffff)) ||
                 (*(long *)(lVar22 + 0x30) == 0)) ||
                ((uVar14 = (uint)uVar9, *(int *)(lVar22 + 0x48) <= (int)uVar14 ||
                 (plVar26 = (long *)(*(long *)(lVar22 + 0x30) + (ulong)uVar14 * 0xe8),
                 *(ushort *)(plVar26 + 0x1c) != uVar14)))) break;
        uVar14 = (**(code **)(*plVar26 + 0x48))(plVar26);
        if ((*(uint *)((long)plVar24 + (ulong)(uVar14 >> 5 & 0x7ff) * 4 + 0x10) >>
             (ulong)(uVar14 & 0x1f) & 1) == 0) {
          uVar14 = (**(code **)(*plVar26 + 0x48))(plVar26);
          lVar22 = (ulong)(uVar14 >> 5 & 0x7ff) * 4;
          *(uint *)((long)plVar24 + lVar22 + 0x10) =
               1 << (ulong)(uVar14 & 0x1f) | *(uint *)((long)plVar24 + lVar22 + 0x10);
          (**(code **)(*plVar24 + 0x30))(plVar24,plVar24 + 1);
          uVar13 = (**(code **)(*plVar26 + 0x48))(plVar26);
          local_90 = (undefined *)CONCAT62(local_90._2_6_,uVar13);
          local_90 = (undefined *)((ulong)local_90 & 0xffffffff);
          FUN_03b56150(plVar24 + 5,&local_90,0);
        }
        fVar33 = 128.0;
        if (fVar35 <= 128.0) {
          fVar33 = fVar35;
        }
        fVar34 = -128.0;
        if (-128.0 <= fVar35) {
          fVar34 = fVar33;
        }
        uVar13 = (**(code **)(*plVar26 + 0x48))(plVar26);
        local_90 = (undefined *)CONCAT62(local_90._2_6_,uVar13);
        goto LAB_03b3a324;
      }
      pbVar31 = *(byte **)(lVar22 + 0x28);
      pbVar19 = (byte *)plVar24[1];
      lVar15 = 0x7ffff;
      while( true ) {
        bVar8 = *pbVar19;
        if (bVar8 != *pbVar31) break;
        if (bVar8 == 0) goto LAB_03b3a5e4;
        bVar12 = lVar15 == 0;
        pbVar31 = pbVar31 + 1;
        pbVar19 = pbVar19 + 1;
        lVar15 = lVar15 + -1;
        if (bVar12) goto LAB_03b3a5e4;
      }
      lVar15 = 8;
      if (*pbVar31 <= bVar8) {
        lVar15 = 0x10;
      }
      lVar22 = *(long *)(lVar22 + lVar15);
    } while (lVar22 != 0);
  }
LAB_03b3a330:
  puVar23 = puVar23 + 1;
  if (puVar23 == puVar1) {
    return;
  }
  goto LAB_03b3a33c;
LAB_03b3a4d4:
  lVar22 = *(long *)(*(long *)PTR_DAT_04bd1e70 + 0x178);
  if (lVar22 != 0) {
    uVar9 = *puVar29;
    if (*(ushort *)(lVar22 + 0x1f0) == uVar9) {
      plVar24 = (long *)(lVar22 + 0x60);
    }
    else if (*(char *)(lVar22 + 0x28) == '\0') {
      plVar24 = (long *)0x0;
    }
    else {
      plVar24 = (long *)0x0;
      if ((((uVar9 != 0xffff) && (*(long *)(lVar22 + 0x30) != 0)) &&
          (uVar14 = (uint)uVar9, (int)uVar14 < *(int *)(lVar22 + 0x48))) &&
         (plVar24 = (long *)(*(long *)(lVar22 + 0x30) + (ulong)uVar14 * 0xe8),
         *(ushort *)(plVar24 + 0x1c) != uVar14)) {
        plVar24 = (long *)0x0;
      }
    }
    plVar26 = (long *)(lVar22 + 0x60);
    fVar35 = *(float *)(puVar32 + 2);
    uVar14 = (**(code **)(*plVar26 + 0x48))(plVar26);
    if ((*(uint *)((long)plVar24 + (ulong)(uVar14 >> 5 & 0x7ff) * 4 + 0x10) >>
         (ulong)(uVar14 & 0x1f) & 1) == 0) {
      uVar14 = (**(code **)(*plVar26 + 0x48))(plVar26);
      lVar22 = (ulong)(uVar14 >> 5 & 0x7ff) * 4;
      *(uint *)((long)plVar24 + lVar22 + 0x10) =
           1 << (ulong)(uVar14 & 0x1f) | *(uint *)((long)plVar24 + lVar22 + 0x10);
      (**(code **)(*plVar24 + 0x30))(plVar24,plVar24 + 1);
      uVar13 = (**(code **)(*plVar26 + 0x48))(plVar26);
      local_90 = (undefined *)CONCAT62(local_90._2_6_,uVar13);
      local_90 = (undefined *)((ulong)local_90 & 0xffffffff);
      FUN_03b56150(plVar24 + 5,&local_90,0);
    }
    fVar33 = 128.0;
    if (fVar35 <= 128.0) {
      fVar33 = fVar35;
    }
    fVar34 = -128.0;
    if (-128.0 <= fVar35) {
      fVar34 = fVar33;
    }
    uVar13 = (**(code **)(*plVar26 + 0x48))(plVar26);
    local_90 = (undefined *)CONCAT62(local_90._2_6_,uVar13);
LAB_03b3a324:
    local_90 = (undefined *)CONCAT44(fVar34,(undefined4)local_90);
    FUN_03b56150(plVar24 + 5,&local_90,0);
  }
  goto LAB_03b3a330;
}

