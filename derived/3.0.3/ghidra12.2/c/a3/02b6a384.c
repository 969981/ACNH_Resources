
undefined8 FUN_02b6a384(long param_1,long param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  short sVar6;
  uint uVar7;
  int *piVar8;
  short sVar9;
  uint *puVar10;
  int iVar11;
  long lVar12;
  uint *puVar13;
  char cVar14;
  ulong uVar15;
  float *pfVar16;
  uint local_68 [2];
  uint *local_60;
  undefined *local_58;
  undefined *puStack_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  
  puVar3 = PTR_DAT_04bb5008;
  uVar7 = *(uint *)(param_2 + 0xc);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,uVar7);
  if (uVar7 != 0) {
    lVar12 = *(long *)PTR_DAT_04bb5008;
    if ((int)*(uint *)(lVar12 + 0x1e0) < 1) {
      if ((((*(long *)(lVar12 + 0xd0) != 0) &&
           (puVar10 = *(uint **)(*(long *)(lVar12 + 0xd0) + 8), puVar10 != (uint *)0x0)) &&
          ((*(uint *)(lVar12 + 0xe8) <= uVar7 ||
           (*(char *)(*(long *)(lVar12 + 0xf0) + (long)(int)uVar7) != '\0')))) &&
         (((uVar7 < *puVar10 && (puVar10[1] != 0)) && ((ushort)puVar10[2] != 0)))) {
        iVar11 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          iVar11 = 0x1c;
        }
        puVar10 = (uint *)((ulong)(puVar10[1] * uVar7 + (uint)(ushort)puVar10[2] * 8 + iVar11) +
                          (long)puVar10);
        goto joined_r0x02b6a610;
      }
    }
    else if (uVar7 < *(uint *)(lVar12 + 0x1e0)) {
      if (*(uint *)(lVar12 + 0x1d0) <= uVar7) {
        uVar7 = 0;
      }
      puVar10 = *(uint **)(*(long *)(lVar12 + 0x1d8) + (ulong)uVar7 * 8);
joined_r0x02b6a610:
      if ((puVar10 != (uint *)0x0) &&
         (uVar7 = *puVar10, uVar7 != 0 && puVar10 != (uint *)(ulong)uVar7)) {
        puVar13 = (uint *)((long)puVar10 - (long)(ulong)uVar7);
        if ((*puVar13 != 0) &&
           ((uVar7 = puVar13[1], uVar7 != 0 && ((ulong)(ushort)puVar13[2] != 0)))) {
          lVar12 = 0xc;
          if (*(char *)((long)puVar13 + 10) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar13 + lVar12 + (ulong)(ushort)puVar13[2] * 8;
          if (lVar12 != 0) {
            uVar1 = 0;
            if ((ulong)uVar7 != 0) {
              uVar1 = (uint)((ulong)((long)puVar10 - lVar12) / (ulong)uVar7);
            }
            if (*puVar13 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < *(uint *)PTR_DAT_04bc46a8) &&
               (uVar2 = *(ushort *)(*(long *)(PTR_DAT_04bc46a8 + 8) + (long)(int)uVar1 * 2),
               uVar2 < 5 && uVar2 != 0)) {
              if (uVar2 == 4) {
                FUN_02b72930(local_68);
                puVar4 = PTR_DAT_04bc4658;
                puVar3 = PTR_DAT_04bc4650;
                sVar9 = **(short **)(param_1 + 0x18);
                if ((local_60 != (uint *)0x0) && (uVar7 = *local_60, uVar7 != 0)) {
                  cVar14 = *PTR_DAT_04bc4650;
                  do {
                    if (cVar14 == '\0') {
                      cVar14 = '\x01';
                      *(undefined8 *)puVar4 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
                      *puVar3 = 1;
                      *(undefined4 *)(puVar4 + 0x30) = 0xffffffff;
                      *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
                      uVar7 = *local_60;
                    }
                    else {
                      uVar1 = *(uint *)(puVar4 + 0x18);
                      if (-1 < (int)uVar1) {
                        if ((short *)((ulong)uVar1 + (long)local_60) == (short *)0x0) break;
                        sVar6 = *(short *)((ulong)uVar1 + (long)local_60);
                        goto LAB_02b6a7f0;
                      }
                      if (uVar1 != 0xffffffff) break;
                    }
                    puVar10 = (uint *)(ulong)uVar7;
                    sVar6 = 0;
                    if ((puVar10 == (uint *)0x0) || (local_60 == puVar10)) goto LAB_02b6a7f0;
                    lVar12 = 0xc;
                    if (*(char *)((long)local_60 + (10 - (long)puVar10)) != '\0') {
                      lVar12 = 0x1c;
                    }
                    lVar12 = (long)local_60 + (lVar12 - (long)puVar10);
                    sVar6 = 0;
                    if (lVar12 == 0) goto LAB_02b6a7f0;
                    uVar15 = (ulong)*(ushort *)((long)local_60 + (8 - (long)puVar10));
                    *(undefined4 *)(puVar4 + 0x18) = 0xfffffffe;
                    if (uVar15 == 0) break;
                    piVar8 = (int *)(lVar12 + 4);
                    while (piVar8[-1] != 0xd664b5c) {
                      piVar8 = piVar8 + 2;
                      uVar15 = uVar15 - 1;
                      if (uVar15 == 0) goto LAB_02b6a7ec;
                    }
                    sVar6 = 0;
                    iVar11 = 0;
                    if (*piVar8 != -1) {
                      iVar11 = *piVar8;
                    }
                    *(int *)(puVar4 + 0x18) = iVar11;
                    uVar7 = *local_60;
                    if (uVar7 == 0) goto LAB_02b6a7f0;
                  } while( true );
                }
LAB_02b6a7ec:
                sVar6 = 0;
LAB_02b6a7f0:
                if (sVar6 != sVar9) {
                  return 0;
                }
              }
              else {
                if (uVar2 != 1) {
                  return 0;
                }
                local_68[0] = 0;
                FUN_02b677c0(local_68);
                uVar7 = FUN_02b5afe0(local_68[0]);
                puVar5 = PTR_DAT_04bb5bd0;
                puVar4 = PTR_DAT_04bb5bc8;
                lVar12 = *(long *)puVar3;
                uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x5f0);
                if (uVar7 < *(uint *)(lVar12 + 0x5d0)) {
                  puVar10 = *(uint **)(*(long *)(lVar12 + 0x5d8) + (long)(int)uVar7 * 8);
                  sVar9 = **(short **)(param_1 + 0x18);
                  sVar6 = 0;
                  if (puVar10 != (uint *)0x0) {
                    uVar7 = *puVar10;
                    if (uVar7 != 0) {
                      cVar14 = *PTR_DAT_04bb5bc8;
                      do {
                        if (cVar14 == '\0') {
                          cVar14 = '\x01';
                          *(undefined8 *)puVar5 = 0xffffffffffffffff;
                          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
                          *puVar4 = 1;
                          *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
                          *(undefined4 *)(puVar5 + 0x48) = 0xffffffff;
                          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
                          uVar7 = *puVar10;
                        }
                        else {
                          uVar1 = *(uint *)(puVar5 + 0x10);
                          if (-1 < (int)uVar1) {
                            sVar6 = 0;
                            if ((short *)((ulong)uVar1 + (long)puVar10) != (short *)0x0) {
                              sVar6 = *(short *)((ulong)uVar1 + (long)puVar10);
                            }
                            goto LAB_02b6a7d0;
                          }
                          if (uVar1 != 0xffffffff) break;
                        }
                        puVar13 = (uint *)(ulong)uVar7;
                        if ((puVar13 == (uint *)0x0) || (puVar10 == puVar13)) break;
                        lVar12 = 0xc;
                        if (*(char *)((long)puVar10 + (10 - (long)puVar13)) != '\0') {
                          lVar12 = 0x1c;
                        }
                        lVar12 = (long)puVar10 + (lVar12 - (long)puVar13);
                        if (lVar12 == 0) break;
                        uVar15 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar13));
                        *(undefined4 *)(puVar5 + 0x10) = 0xfffffffe;
                        if (uVar15 == 0) break;
                        piVar8 = (int *)(lVar12 + 4);
                        while (piVar8[-1] != 0xd664b5c) {
                          piVar8 = piVar8 + 2;
                          uVar15 = uVar15 - 1;
                          if (uVar15 == 0) goto LAB_02b6a5a0;
                        }
                        iVar11 = 0;
                        if (*piVar8 != -1) {
                          iVar11 = *piVar8;
                        }
                        *(int *)(puVar5 + 0x10) = iVar11;
                        uVar7 = *puVar10;
                        if (uVar7 == 0) break;
                      } while( true );
                    }
LAB_02b6a5a0:
                    sVar6 = 0;
                  }
                }
                else {
                  sVar6 = 0;
                  sVar9 = **(short **)(param_1 + 0x18);
                }
LAB_02b6a7d0:
                if (sVar6 != sVar9) {
                  return 0;
                }
              }
              goto LAB_02b6a634;
            }
          }
        }
      }
    }
  }
  local_68[0] = local_68[0] & 0xffff0000;
  FUN_02b684a0(local_68);
  if ((local_68[0] & 0xffff) != (uint)**(ushort **)(param_1 + 0x18)) {
    return 0;
  }
LAB_02b6a634:
  pfVar16 = (float *)**(long **)(param_1 + 0x10);
  if (pfVar16 != (float *)0x0) {
    local_48 = 0;
    local_58 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_50 = PTR_DAT_04bb2010 + 0x10;
    local_38 = 0;
    local_40 = puStack_50;
    FUN_02a8f7b0(param_2,&local_58);
    *pfVar16 = ((float)(int)local_48 * 5.0 + (float)(int)local_38 * 5.0 + 5.0) * 0.5;
    pfVar16[2] = ((float)local_48._4_4_ * 5.0 + (float)local_38._4_4_ * 5.0 + 5.0) * 0.5;
  }
  **(undefined1 **)(param_1 + 8) = 1;
  return 1;
}

