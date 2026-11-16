
void FUN_02842f30(long param_1)

{
  byte *pbVar1;
  undefined *puVar2;
  uint3 *puVar3;
  ushort uVar4;
  uint uVar5;
  uint3 uVar6;
  uint3 uVar7;
  undefined1 uVar8;
  byte bVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  undefined *puVar17;
  byte *pbVar18;
  long lVar19;
  int iVar20;
  uint local_cc;
  undefined1 local_bc [4];
  undefined *local_b8;
  undefined1 *puStack_b0;
  undefined4 local_a8;
  undefined1 local_a4 [63];
  undefined1 local_65;
  
  if (*(int *)(param_1 + 0x2303c) == 0 || *(int *)(param_1 + 0x23020) == 0) {
    return;
  }
  lVar13 = *(long *)PTR_DAT_04bb46b0;
  if (lVar13 == 0) {
LAB_02842fc4:
    lVar13 = 0;
  }
  else {
    puVar14 = *(undefined8 **)(lVar13 + 0x10);
    if ((*(byte *)(lVar13 + 0x453) & 1) == 0) {
      lVar11 = (**(code **)(*(long *)*puVar14 + 0x38))();
      lVar13 = 0;
      if (lVar11 != 0) {
        lVar13 = lVar11 + 0x70;
      }
    }
    else {
      if (puVar14 == (undefined8 *)0x0) goto LAB_02842fc4;
      lVar13 = 0;
      if ((long *)puVar14[0x26] != (long *)0x0) {
        lVar13 = (**(code **)(*(long *)puVar14[0x26] + 0x38))();
      }
    }
  }
  lVar11 = 0;
  if (lVar13 != 0) {
    lVar11 = lVar13 + 0xa8;
  }
  if ((*(long **)(lVar11 + 0x28) == (long *)0x0) ||
     (puVar14 = (undefined8 *)**(long **)(lVar11 + 0x28), puVar14 == (undefined8 *)0x0)) {
    local_cc = 0;
  }
  else {
    local_cc = (**(code **)*puVar14)();
  }
  iVar20 = 0;
  pbVar1 = (byte *)(param_1 + 0x230ae);
  puVar2 = PTR_DAT_04bb2bc0 + 0x10;
  puVar17 = PTR_DAT_04bc27f0;
  do {
    lVar13 = (long)iVar20 * 3;
    pbVar18 = pbVar1 + (long)iVar20 + (long)iVar20 * 2;
    uVar15 = (ulong)*pbVar18;
    if (uVar15 < 0x23) {
      bVar9 = pbVar1[lVar13 + 1];
      if (((byte)puVar17[uVar15] < bVar9) ||
         ((*(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >> (ulong)(bVar9 & 0x1f) & 1) == 0))
      goto LAB_02843040;
      iVar10 = FUN_027dc31c(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8),pbVar18);
      puVar17 = PTR_DAT_04bc27f0;
      if (iVar10 == -1) {
        local_65 = 0;
        local_a8 = 0x40;
        local_a4[0] = 0;
        local_b8 = puVar2;
        puStack_b0 = local_a4;
        FUN_038d1270(&local_b8,"-----");
        if ((ulong)*pbVar18 < 0x23) {
          FUN_038d1270(&local_b8,"%s%02d",
                       *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*pbVar18 * 8 + 0xb0),
                       pbVar1[lVar13 + 1]);
        }
        puVar17 = PTR_DAT_04bc27f0;
        goto LAB_02843040;
      }
    }
    else {
LAB_02843040:
      *pbVar18 = 0x23;
      (pbVar1 + lVar13 + 1)[0] = 0;
      (pbVar1 + lVar13 + 1)[1] = 8;
    }
    iVar20 = iVar20 + 1;
  } while (iVar20 != 10);
  uVar15 = (ulong)*pbVar1;
  if (((0x22 < uVar15) || ((byte)puVar17[uVar15] < *(byte *)(param_1 + 0x230af))) ||
     ((*(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >> (ulong)(*(byte *)(param_1 + 0x230af) & 0x1f) & 1)
      == 0)) {
    pbVar18 = (byte *)(param_1 + 0x230b1);
    bVar9 = *pbVar18;
    if (((bVar9 < 0x23) && (*(byte *)(param_1 + 0x230b2) <= (byte)puVar17[bVar9])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
         (ulong)(*(byte *)(param_1 + 0x230b2) & 0x1f) & 1) != 0)) {
      lVar13 = 1;
    }
    else {
      pbVar18 = (byte *)(param_1 + 0x230b4);
      bVar9 = *pbVar18;
      if (((bVar9 < 0x23) && (*(byte *)(param_1 + 0x230b5) <= (byte)puVar17[bVar9])) &&
         ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
           (ulong)(*(byte *)(param_1 + 0x230b5) & 0x1f) & 1) != 0)) {
        lVar13 = 2;
      }
      else {
        pbVar18 = (byte *)(param_1 + 0x230b7);
        bVar9 = *pbVar18;
        if (((bVar9 < 0x23) && (*(byte *)(param_1 + 0x230b8) <= (byte)puVar17[bVar9])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
             (ulong)(*(byte *)(param_1 + 0x230b8) & 0x1f) & 1) != 0)) {
          lVar13 = 3;
        }
        else {
          pbVar18 = (byte *)(param_1 + 0x230ba);
          bVar9 = *pbVar18;
          if (((bVar9 < 0x23) && (*(byte *)(param_1 + 0x230bb) <= (byte)puVar17[bVar9])) &&
             ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
               (ulong)(*(byte *)(param_1 + 0x230bb) & 0x1f) & 1) != 0)) {
            lVar13 = 4;
          }
          else {
            pbVar18 = (byte *)(param_1 + 0x230bd);
            bVar9 = *pbVar18;
            if (((bVar9 < 0x23) && (*(byte *)(param_1 + 0x230be) <= (byte)puVar17[bVar9])) &&
               ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
                 (ulong)(*(byte *)(param_1 + 0x230be) & 0x1f) & 1) != 0)) {
              lVar13 = 5;
            }
            else {
              pbVar18 = (byte *)(param_1 + 0x230c0);
              bVar9 = *pbVar18;
              if (((bVar9 < 0x23) && (*(byte *)(param_1 + 0x230c1) <= (byte)puVar17[bVar9])) &&
                 ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
                   (ulong)(*(byte *)(param_1 + 0x230c1) & 0x1f) & 1) != 0)) {
                lVar13 = 6;
              }
              else {
                pbVar18 = (byte *)(param_1 + 0x230c3);
                bVar9 = *pbVar18;
                if (((bVar9 < 0x23) && (*(byte *)(param_1 + 0x230c4) <= (byte)puVar17[bVar9])) &&
                   ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
                     (ulong)(*(byte *)(param_1 + 0x230c4) & 0x1f) & 1) != 0)) {
                  lVar13 = 7;
                }
                else {
                  pbVar18 = (byte *)(param_1 + 0x230c6);
                  bVar9 = *pbVar18;
                  if (((bVar9 < 0x23) && (*(byte *)(param_1 + 0x230c7) <= (byte)puVar17[bVar9])) &&
                     ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
                       (ulong)(*(byte *)(param_1 + 0x230c7) & 0x1f) & 1) != 0)) {
                    lVar13 = 8;
                  }
                  else {
                    pbVar18 = (byte *)(param_1 + 0x230c9);
                    bVar9 = *pbVar18;
                    if (((0x22 < bVar9) || ((byte)puVar17[bVar9] < *(byte *)(param_1 + 0x230ca))) ||
                       ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
                         (ulong)(*(byte *)(param_1 + 0x230ca) & 0x1f) & 1) == 0)) goto LAB_02843398;
                    lVar13 = 9;
                  }
                }
              }
            }
          }
        }
      }
    }
    *(byte *)(param_1 + 0x230ae) = bVar9;
    *(byte *)(param_1 + 0x230af) = pbVar1[lVar13 * 3 + 1];
    uVar8 = FUN_020fd7d8(pbVar18);
    *(undefined1 *)(param_1 + 0x230b0) = uVar8;
    *pbVar18 = 0x23;
    (pbVar1 + lVar13 * 3 + 1)[0] = 0;
    (pbVar1 + lVar13 * 3 + 1)[1] = 8;
    puVar17 = PTR_DAT_04bc27f0;
  }
LAB_02843398:
  uVar15 = (ulong)*(byte *)(param_1 + 0x230b1);
  if (((0x22 < uVar15) || ((byte)puVar17[uVar15] < *(byte *)(param_1 + 0x230b2))) ||
     ((*(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >> (ulong)(*(byte *)(param_1 + 0x230b2) & 0x1f) & 1)
      == 0)) {
    pbVar18 = (byte *)(param_1 + 0x230b4);
    bVar9 = *pbVar18;
    if (((bVar9 < 0x23) && (*(byte *)(param_1 + 0x230b5) <= (byte)puVar17[bVar9])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
         (ulong)(*(byte *)(param_1 + 0x230b5) & 0x1f) & 1) != 0)) {
      lVar13 = 2;
    }
    else {
      pbVar18 = (byte *)(param_1 + 0x230b7);
      bVar9 = *pbVar18;
      if (((bVar9 < 0x23) && (*(byte *)(param_1 + 0x230b8) <= (byte)puVar17[bVar9])) &&
         ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
           (ulong)(*(byte *)(param_1 + 0x230b8) & 0x1f) & 1) != 0)) {
        lVar13 = 3;
      }
      else {
        pbVar18 = (byte *)(param_1 + 0x230ba);
        bVar9 = *pbVar18;
        if (((bVar9 < 0x23) && (*(byte *)(param_1 + 0x230bb) <= (byte)puVar17[bVar9])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
             (ulong)(*(byte *)(param_1 + 0x230bb) & 0x1f) & 1) != 0)) {
          lVar13 = 4;
        }
        else {
          pbVar18 = (byte *)(param_1 + 0x230bd);
          bVar9 = *pbVar18;
          if (((bVar9 < 0x23) && (*(byte *)(param_1 + 0x230be) <= (byte)puVar17[bVar9])) &&
             ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
               (ulong)(*(byte *)(param_1 + 0x230be) & 0x1f) & 1) != 0)) {
            lVar13 = 5;
          }
          else {
            pbVar18 = (byte *)(param_1 + 0x230c0);
            bVar9 = *pbVar18;
            if (((bVar9 < 0x23) && (*(byte *)(param_1 + 0x230c1) <= (byte)puVar17[bVar9])) &&
               ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
                 (ulong)(*(byte *)(param_1 + 0x230c1) & 0x1f) & 1) != 0)) {
              lVar13 = 6;
            }
            else {
              pbVar18 = (byte *)(param_1 + 0x230c3);
              bVar9 = *pbVar18;
              if (((bVar9 < 0x23) && (*(byte *)(param_1 + 0x230c4) <= (byte)puVar17[bVar9])) &&
                 ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
                   (ulong)(*(byte *)(param_1 + 0x230c4) & 0x1f) & 1) != 0)) {
                lVar13 = 7;
              }
              else {
                pbVar18 = (byte *)(param_1 + 0x230c6);
                bVar9 = *pbVar18;
                if (((bVar9 < 0x23) && (*(byte *)(param_1 + 0x230c7) <= (byte)puVar17[bVar9])) &&
                   ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
                     (ulong)(*(byte *)(param_1 + 0x230c7) & 0x1f) & 1) != 0)) {
                  lVar13 = 8;
                }
                else {
                  pbVar18 = (byte *)(param_1 + 0x230c9);
                  bVar9 = *pbVar18;
                  if (((0x22 < bVar9) || ((byte)puVar17[bVar9] < *(byte *)(param_1 + 0x230ca))) ||
                     ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
                       (ulong)(*(byte *)(param_1 + 0x230ca) & 0x1f) & 1) == 0)) goto LAB_028435e0;
                  lVar13 = 9;
                }
              }
            }
          }
        }
      }
    }
    *(byte *)(param_1 + 0x230b1) = bVar9;
    *(byte *)(param_1 + 0x230b2) = pbVar1[lVar13 * 3 + 1];
    uVar8 = FUN_020fd7d8(pbVar18);
    *(undefined1 *)(param_1 + 0x230b3) = uVar8;
    *pbVar18 = 0x23;
    pbVar1[lVar13 * 3 + 1] = 0;
    pbVar1[lVar13 * 3 + 2] = 8;
    puVar17 = PTR_DAT_04bc27f0;
  }
LAB_028435e0:
  uVar15 = (ulong)*(byte *)(param_1 + 0x230b4);
  if (((0x22 < uVar15) || ((byte)puVar17[uVar15] < *(byte *)(param_1 + 0x230b5))) ||
     ((*(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >> (ulong)(*(byte *)(param_1 + 0x230b5) & 0x1f) & 1)
      == 0)) {
    pbVar18 = (byte *)(param_1 + 0x230b7);
    bVar9 = *pbVar18;
    if (((bVar9 < 0x23) && (*(byte *)(param_1 + 0x230b8) <= (byte)puVar17[bVar9])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
         (ulong)(*(byte *)(param_1 + 0x230b8) & 0x1f) & 1) != 0)) {
      lVar13 = 3;
    }
    else {
      pbVar18 = (byte *)(param_1 + 0x230ba);
      bVar9 = *pbVar18;
      if (((bVar9 < 0x23) && (*(byte *)(param_1 + 0x230bb) <= (byte)puVar17[bVar9])) &&
         ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
           (ulong)(*(byte *)(param_1 + 0x230bb) & 0x1f) & 1) != 0)) {
        lVar13 = 4;
      }
      else {
        pbVar18 = (byte *)(param_1 + 0x230bd);
        bVar9 = *pbVar18;
        if (((bVar9 < 0x23) && (*(byte *)(param_1 + 0x230be) <= (byte)puVar17[bVar9])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
             (ulong)(*(byte *)(param_1 + 0x230be) & 0x1f) & 1) != 0)) {
          lVar13 = 5;
        }
        else {
          pbVar18 = (byte *)(param_1 + 0x230c0);
          bVar9 = *pbVar18;
          if (((bVar9 < 0x23) && (*(byte *)(param_1 + 0x230c1) <= (byte)puVar17[bVar9])) &&
             ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
               (ulong)(*(byte *)(param_1 + 0x230c1) & 0x1f) & 1) != 0)) {
            lVar13 = 6;
          }
          else {
            pbVar18 = (byte *)(param_1 + 0x230c3);
            bVar9 = *pbVar18;
            if (((bVar9 < 0x23) && (*(byte *)(param_1 + 0x230c4) <= (byte)puVar17[bVar9])) &&
               ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
                 (ulong)(*(byte *)(param_1 + 0x230c4) & 0x1f) & 1) != 0)) {
              lVar13 = 7;
            }
            else {
              pbVar18 = (byte *)(param_1 + 0x230c6);
              bVar9 = *pbVar18;
              if (((bVar9 < 0x23) && (*(byte *)(param_1 + 0x230c7) <= (byte)puVar17[bVar9])) &&
                 ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
                   (ulong)(*(byte *)(param_1 + 0x230c7) & 0x1f) & 1) != 0)) {
                lVar13 = 8;
              }
              else {
                pbVar18 = (byte *)(param_1 + 0x230c9);
                bVar9 = *pbVar18;
                if (((0x22 < bVar9) || ((byte)puVar17[bVar9] < *(byte *)(param_1 + 0x230ca))) ||
                   ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
                     (ulong)(*(byte *)(param_1 + 0x230ca) & 0x1f) & 1) == 0)) goto LAB_028437ec;
                lVar13 = 9;
              }
            }
          }
        }
      }
    }
    *(byte *)(param_1 + 0x230b4) = bVar9;
    *(byte *)(param_1 + 0x230b5) = pbVar1[lVar13 * 3 + 1];
    uVar8 = FUN_020fd7d8(pbVar18);
    *(undefined1 *)(param_1 + 0x230b6) = uVar8;
    *pbVar18 = 0x23;
    pbVar1[lVar13 * 3 + 1] = 0;
    pbVar1[lVar13 * 3 + 2] = 8;
    puVar17 = PTR_DAT_04bc27f0;
  }
LAB_028437ec:
  uVar15 = (ulong)*(byte *)(param_1 + 0x230b7);
  if (((0x22 < uVar15) || ((byte)puVar17[uVar15] < *(byte *)(param_1 + 0x230b8))) ||
     ((*(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >> (ulong)(*(byte *)(param_1 + 0x230b8) & 0x1f) & 1)
      == 0)) {
    pbVar18 = (byte *)(param_1 + 0x230ba);
    bVar9 = *pbVar18;
    if (((bVar9 < 0x23) && (*(byte *)(param_1 + 0x230bb) <= (byte)puVar17[bVar9])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
         (ulong)(*(byte *)(param_1 + 0x230bb) & 0x1f) & 1) != 0)) {
      lVar13 = 4;
    }
    else {
      pbVar18 = (byte *)(param_1 + 0x230bd);
      bVar9 = *pbVar18;
      if (((bVar9 < 0x23) && (*(byte *)(param_1 + 0x230be) <= (byte)puVar17[bVar9])) &&
         ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
           (ulong)(*(byte *)(param_1 + 0x230be) & 0x1f) & 1) != 0)) {
        lVar13 = 5;
      }
      else {
        pbVar18 = (byte *)(param_1 + 0x230c0);
        bVar9 = *pbVar18;
        if (((bVar9 < 0x23) && (*(byte *)(param_1 + 0x230c1) <= (byte)puVar17[bVar9])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
             (ulong)(*(byte *)(param_1 + 0x230c1) & 0x1f) & 1) != 0)) {
          lVar13 = 6;
        }
        else {
          pbVar18 = (byte *)(param_1 + 0x230c3);
          bVar9 = *pbVar18;
          if (((bVar9 < 0x23) && (*(byte *)(param_1 + 0x230c4) <= (byte)puVar17[bVar9])) &&
             ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
               (ulong)(*(byte *)(param_1 + 0x230c4) & 0x1f) & 1) != 0)) {
            lVar13 = 7;
          }
          else {
            pbVar18 = (byte *)(param_1 + 0x230c6);
            bVar9 = *pbVar18;
            if (((bVar9 < 0x23) && (*(byte *)(param_1 + 0x230c7) <= (byte)puVar17[bVar9])) &&
               ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
                 (ulong)(*(byte *)(param_1 + 0x230c7) & 0x1f) & 1) != 0)) {
              lVar13 = 8;
            }
            else {
              pbVar18 = (byte *)(param_1 + 0x230c9);
              bVar9 = *pbVar18;
              if (((0x22 < bVar9) || ((byte)puVar17[bVar9] < *(byte *)(param_1 + 0x230ca))) ||
                 ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
                   (ulong)(*(byte *)(param_1 + 0x230ca) & 0x1f) & 1) == 0)) goto LAB_028439bc;
              lVar13 = 9;
            }
          }
        }
      }
    }
    *(byte *)(param_1 + 0x230b7) = bVar9;
    *(byte *)(param_1 + 0x230b8) = pbVar1[lVar13 * 3 + 1];
    uVar8 = FUN_020fd7d8(pbVar18);
    *(undefined1 *)(param_1 + 0x230b9) = uVar8;
    *pbVar18 = 0x23;
    pbVar1[lVar13 * 3 + 1] = 0;
    pbVar1[lVar13 * 3 + 2] = 8;
    puVar17 = PTR_DAT_04bc27f0;
  }
LAB_028439bc:
  uVar15 = (ulong)*(byte *)(param_1 + 0x230ba);
  if (((0x22 < uVar15) || ((byte)puVar17[uVar15] < *(byte *)(param_1 + 0x230bb))) ||
     ((*(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >> (ulong)(*(byte *)(param_1 + 0x230bb) & 0x1f) & 1)
      == 0)) {
    pbVar18 = (byte *)(param_1 + 0x230bd);
    bVar9 = *pbVar18;
    if (((bVar9 < 0x23) && (*(byte *)(param_1 + 0x230be) <= (byte)puVar17[bVar9])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
         (ulong)(*(byte *)(param_1 + 0x230be) & 0x1f) & 1) != 0)) {
      lVar13 = 5;
    }
    else {
      pbVar18 = (byte *)(param_1 + 0x230c0);
      bVar9 = *pbVar18;
      if (((bVar9 < 0x23) && (*(byte *)(param_1 + 0x230c1) <= (byte)puVar17[bVar9])) &&
         ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
           (ulong)(*(byte *)(param_1 + 0x230c1) & 0x1f) & 1) != 0)) {
        lVar13 = 6;
      }
      else {
        pbVar18 = (byte *)(param_1 + 0x230c3);
        bVar9 = *pbVar18;
        if (((bVar9 < 0x23) && (*(byte *)(param_1 + 0x230c4) <= (byte)puVar17[bVar9])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
             (ulong)(*(byte *)(param_1 + 0x230c4) & 0x1f) & 1) != 0)) {
          lVar13 = 7;
        }
        else {
          pbVar18 = (byte *)(param_1 + 0x230c6);
          bVar9 = *pbVar18;
          if (((bVar9 < 0x23) && (*(byte *)(param_1 + 0x230c7) <= (byte)puVar17[bVar9])) &&
             ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
               (ulong)(*(byte *)(param_1 + 0x230c7) & 0x1f) & 1) != 0)) {
            lVar13 = 8;
          }
          else {
            pbVar18 = (byte *)(param_1 + 0x230c9);
            bVar9 = *pbVar18;
            if (((0x22 < bVar9) || ((byte)puVar17[bVar9] < *(byte *)(param_1 + 0x230ca))) ||
               ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
                 (ulong)(*(byte *)(param_1 + 0x230ca) & 0x1f) & 1) == 0)) goto LAB_02843b50;
            lVar13 = 9;
          }
        }
      }
    }
    *(byte *)(param_1 + 0x230ba) = bVar9;
    *(byte *)(param_1 + 0x230bb) = pbVar1[lVar13 * 3 + 1];
    uVar8 = FUN_020fd7d8(pbVar18);
    *(undefined1 *)(param_1 + 0x230bc) = uVar8;
    *pbVar18 = 0x23;
    pbVar1[lVar13 * 3 + 1] = 0;
    pbVar1[lVar13 * 3 + 2] = 8;
    puVar17 = PTR_DAT_04bc27f0;
  }
LAB_02843b50:
  uVar15 = (ulong)*(byte *)(param_1 + 0x230bd);
  if (((0x22 < uVar15) || ((byte)puVar17[uVar15] < *(byte *)(param_1 + 0x230be))) ||
     ((*(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >> (ulong)(*(byte *)(param_1 + 0x230be) & 0x1f) & 1)
      == 0)) {
    pbVar18 = (byte *)(param_1 + 0x230c0);
    bVar9 = *pbVar18;
    if (((bVar9 < 0x23) && (*(byte *)(param_1 + 0x230c1) <= (byte)puVar17[bVar9])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
         (ulong)(*(byte *)(param_1 + 0x230c1) & 0x1f) & 1) != 0)) {
      lVar13 = 6;
    }
    else {
      pbVar18 = (byte *)(param_1 + 0x230c3);
      bVar9 = *pbVar18;
      if (((bVar9 < 0x23) && (*(byte *)(param_1 + 0x230c4) <= (byte)puVar17[bVar9])) &&
         ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
           (ulong)(*(byte *)(param_1 + 0x230c4) & 0x1f) & 1) != 0)) {
        lVar13 = 7;
      }
      else {
        pbVar18 = (byte *)(param_1 + 0x230c6);
        bVar9 = *pbVar18;
        if (((bVar9 < 0x23) && (*(byte *)(param_1 + 0x230c7) <= (byte)puVar17[bVar9])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
             (ulong)(*(byte *)(param_1 + 0x230c7) & 0x1f) & 1) != 0)) {
          lVar13 = 8;
        }
        else {
          pbVar18 = (byte *)(param_1 + 0x230c9);
          bVar9 = *pbVar18;
          if (((0x22 < bVar9) || ((byte)puVar17[bVar9] < *(byte *)(param_1 + 0x230ca))) ||
             ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
               (ulong)(*(byte *)(param_1 + 0x230ca) & 0x1f) & 1) == 0)) goto LAB_02843ca8;
          lVar13 = 9;
        }
      }
    }
    *(byte *)(param_1 + 0x230bd) = bVar9;
    *(byte *)(param_1 + 0x230be) = pbVar1[lVar13 * 3 + 1];
    uVar8 = FUN_020fd7d8(pbVar18);
    *(undefined1 *)(param_1 + 0x230bf) = uVar8;
    *pbVar18 = 0x23;
    pbVar1[lVar13 * 3 + 1] = 0;
    pbVar1[lVar13 * 3 + 2] = 8;
    puVar17 = PTR_DAT_04bc27f0;
  }
LAB_02843ca8:
  uVar15 = (ulong)*(byte *)(param_1 + 0x230c0);
  if (((0x22 < uVar15) || ((byte)puVar17[uVar15] < *(byte *)(param_1 + 0x230c1))) ||
     ((*(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >> (ulong)(*(byte *)(param_1 + 0x230c1) & 0x1f) & 1)
      == 0)) {
    pbVar18 = (byte *)(param_1 + 0x230c3);
    bVar9 = *pbVar18;
    if (((bVar9 < 0x23) && (*(byte *)(param_1 + 0x230c4) <= (byte)puVar17[bVar9])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
         (ulong)(*(byte *)(param_1 + 0x230c4) & 0x1f) & 1) != 0)) {
      lVar13 = 7;
    }
    else {
      pbVar18 = (byte *)(param_1 + 0x230c6);
      bVar9 = *pbVar18;
      if (((bVar9 < 0x23) && (*(byte *)(param_1 + 0x230c7) <= (byte)puVar17[bVar9])) &&
         ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
           (ulong)(*(byte *)(param_1 + 0x230c7) & 0x1f) & 1) != 0)) {
        lVar13 = 8;
      }
      else {
        pbVar18 = (byte *)(param_1 + 0x230c9);
        bVar9 = *pbVar18;
        if (((0x22 < bVar9) || ((byte)puVar17[bVar9] < *(byte *)(param_1 + 0x230ca))) ||
           ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
             (ulong)(*(byte *)(param_1 + 0x230ca) & 0x1f) & 1) == 0)) goto LAB_02843dc4;
        lVar13 = 9;
      }
    }
    *(byte *)(param_1 + 0x230c0) = bVar9;
    *(byte *)(param_1 + 0x230c1) = pbVar1[lVar13 * 3 + 1];
    uVar8 = FUN_020fd7d8(pbVar18);
    *(undefined1 *)(param_1 + 0x230c2) = uVar8;
    *pbVar18 = 0x23;
    pbVar1[lVar13 * 3 + 1] = 0;
    pbVar1[lVar13 * 3 + 2] = 8;
    puVar17 = PTR_DAT_04bc27f0;
  }
LAB_02843dc4:
  uVar15 = (ulong)*(byte *)(param_1 + 0x230c3);
  if (((0x22 < uVar15) || ((byte)puVar17[uVar15] < *(byte *)(param_1 + 0x230c4))) ||
     ((*(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >> (ulong)(*(byte *)(param_1 + 0x230c4) & 0x1f) & 1)
      == 0)) {
    pbVar18 = (byte *)(param_1 + 0x230c6);
    bVar9 = *pbVar18;
    if (((bVar9 < 0x23) && (*(byte *)(param_1 + 0x230c7) <= (byte)puVar17[bVar9])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
         (ulong)(*(byte *)(param_1 + 0x230c7) & 0x1f) & 1) != 0)) {
      lVar13 = 8;
    }
    else {
      pbVar18 = (byte *)(param_1 + 0x230c9);
      bVar9 = *pbVar18;
      if (((0x22 < bVar9) || ((byte)puVar17[bVar9] < *(byte *)(param_1 + 0x230ca))) ||
         ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
           (ulong)(*(byte *)(param_1 + 0x230ca) & 0x1f) & 1) == 0)) goto LAB_02843ea0;
      lVar13 = 9;
    }
    *(byte *)(param_1 + 0x230c3) = bVar9;
    *(byte *)(param_1 + 0x230c4) = pbVar1[lVar13 * 3 + 1];
    uVar8 = FUN_020fd7d8(pbVar18);
    *(undefined1 *)(param_1 + 0x230c5) = uVar8;
    *pbVar18 = 0x23;
    (pbVar1 + lVar13 * 3 + 1)[0] = 0;
    (pbVar1 + lVar13 * 3 + 1)[1] = 8;
    puVar17 = PTR_DAT_04bc27f0;
  }
LAB_02843ea0:
  uVar15 = (ulong)*(byte *)(param_1 + 0x230c6);
  if (((0x22 < uVar15) || ((byte)puVar17[uVar15] < *(byte *)(param_1 + 0x230c7))) ||
     ((*(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >> (ulong)(*(byte *)(param_1 + 0x230c7) & 0x1f) & 1)
      == 0)) {
    uVar15 = (ulong)*(byte *)(param_1 + 0x230c9);
    if (((uVar15 < 0x23) && (bVar9 = *(byte *)(param_1 + 0x230ca), bVar9 <= (byte)puVar17[uVar15]))
       && ((*(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >> (ulong)(bVar9 & 0x1f) & 1) != 0)) {
      *(byte *)(param_1 + 0x230c6) = *(byte *)(param_1 + 0x230c9);
      *(byte *)(param_1 + 0x230c7) = bVar9;
      uVar8 = FUN_020fd7d8();
      puVar17 = PTR_DAT_04bc27f0;
      *(undefined1 *)(param_1 + 0x230c8) = uVar8;
      *(undefined2 *)(param_1 + 0x230c9) = 0x23;
      *(undefined1 *)(param_1 + 0x230cb) = 8;
    }
  }
  lVar13 = 0;
  lVar19 = 10;
  puVar2 = PTR_DAT_04bb2bc0 + 0x10;
  do {
    puVar3 = (uint3 *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8) + lVar13);
    uVar6 = *puVar3;
    uVar4 = (ushort)uVar6;
    uVar7 = *puVar3;
    uVar15 = (ulong)(uVar4 & 0xff);
    if (uVar15 < 0x23) {
      local_bc[1] = (byte)(uVar6 >> 8);
      if (local_bc[1] <= (byte)puVar17[uVar15]) {
        if ((*(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >> (ulong)(local_bc[1] & 0x1f) & 1) != 0) {
          uVar5 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff) << 8;
          if (uVar5 == ((uint)(*(ushort *)(param_1 + 0x230ae) >> 8) |
                       (*(ushort *)(param_1 + 0x230ae) & 0xff00ff) << 8)) {
            uVar12 = 0;
          }
          else if (uVar5 == ((uint)(*(ushort *)(param_1 + 0x230b1) >> 8) |
                            (*(ushort *)(param_1 + 0x230b1) & 0xff00ff) << 8)) {
            uVar12 = 1;
          }
          else if (uVar5 == ((uint)(*(ushort *)(param_1 + 0x230b4) >> 8) |
                            (*(ushort *)(param_1 + 0x230b4) & 0xff00ff) << 8)) {
            uVar12 = 2;
          }
          else if (uVar5 == ((uint)(*(ushort *)(param_1 + 0x230b7) >> 8) |
                            (*(ushort *)(param_1 + 0x230b7) & 0xff00ff) << 8)) {
            uVar12 = 3;
          }
          else if (uVar5 == ((uint)(*(ushort *)(param_1 + 0x230ba) >> 8) |
                            (*(ushort *)(param_1 + 0x230ba) & 0xff00ff) << 8)) {
            uVar12 = 4;
          }
          else {
            uVar12 = 5;
            if (uVar5 != ((uint)(*(ushort *)(param_1 + 0x230bd) >> 8) |
                         (*(ushort *)(param_1 + 0x230bd) & 0xff00ff) << 8)) {
              if (uVar5 == ((uint)(*(ushort *)(param_1 + 0x230c0) >> 8) |
                           (*(ushort *)(param_1 + 0x230c0) & 0xff00ff) << 8)) {
                uVar12 = 6;
              }
              else if (uVar5 == ((uint)(*(ushort *)(param_1 + 0x230c3) >> 8) |
                                (*(ushort *)(param_1 + 0x230c3) & 0xff00ff) << 8)) {
                uVar12 = 7;
              }
              else if (uVar5 == ((uint)(*(ushort *)(param_1 + 0x230c6) >> 8) |
                                (*(ushort *)(param_1 + 0x230c6) & 0xff00ff) << 8)) {
                uVar12 = 8;
              }
              else {
                uVar12 = 9;
                if (uVar5 != ((uint)(*(ushort *)(param_1 + 0x230c9) >> 8) |
                             (*(ushort *)(param_1 + 0x230c9) & 0xff00ff) << 8)) {
                  uVar12 = 0xffffffff;
                }
              }
            }
          }
          local_65 = 0;
          local_a8 = 0x40;
          local_a4[0] = 0;
          local_bc._0_3_ = uVar7;
          local_b8 = puVar2;
          puStack_b0 = local_a4;
          FUN_038d1270(&local_b8,"-----");
          if ((uVar4 & 0xff) < 0x23) {
            FUN_038d1270(&local_b8,"%s%02d",
                         *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)(byte)uVar6 * 8 + 0xb0),
                         uVar7 >> 8 & 0xff);
          }
          puVar17 = PTR_DAT_04bc27f0;
          uVar7 = local_bc._0_3_;
          if (9 < uVar12) {
            uVar15 = (ulong)*pbVar1;
            if (((uVar15 < 0x23) && (*(byte *)(param_1 + 0x230af) <= (byte)PTR_DAT_04bc27f0[uVar15])
                ) && ((*(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >>
                       (ulong)(*(byte *)(param_1 + 0x230af) & 0x1f) & 1) != 0)) {
              uVar15 = (ulong)*(byte *)(param_1 + 0x230b1);
              if (((uVar15 < 0x23) &&
                  (*(byte *)(param_1 + 0x230b2) <= (byte)PTR_DAT_04bc27f0[uVar15])) &&
                 ((*(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >>
                   (ulong)(*(byte *)(param_1 + 0x230b2) & 0x1f) & 1) != 0)) {
                uVar15 = (ulong)*(byte *)(param_1 + 0x230b4);
                if (((uVar15 < 0x23) &&
                    (*(byte *)(param_1 + 0x230b5) <= (byte)PTR_DAT_04bc27f0[uVar15])) &&
                   ((*(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >>
                     (ulong)(*(byte *)(param_1 + 0x230b5) & 0x1f) & 1) != 0)) {
                  uVar15 = (ulong)*(byte *)(param_1 + 0x230b7);
                  if (((uVar15 < 0x23) &&
                      (*(byte *)(param_1 + 0x230b8) <= (byte)PTR_DAT_04bc27f0[uVar15])) &&
                     ((*(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >>
                       (ulong)(*(byte *)(param_1 + 0x230b8) & 0x1f) & 1) != 0)) {
                    uVar15 = (ulong)*(byte *)(param_1 + 0x230ba);
                    if (((uVar15 < 0x23) &&
                        (*(byte *)(param_1 + 0x230bb) <= (byte)PTR_DAT_04bc27f0[uVar15])) &&
                       ((*(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >>
                         (ulong)(*(byte *)(param_1 + 0x230bb) & 0x1f) & 1) != 0)) {
                      uVar15 = (ulong)*(byte *)(param_1 + 0x230bd);
                      if (((uVar15 < 0x23) &&
                          (*(byte *)(param_1 + 0x230be) <= (byte)PTR_DAT_04bc27f0[uVar15])) &&
                         ((*(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >>
                           (ulong)(*(byte *)(param_1 + 0x230be) & 0x1f) & 1) != 0)) {
                        uVar15 = (ulong)*(byte *)(param_1 + 0x230c0);
                        if (((uVar15 < 0x23) &&
                            (*(byte *)(param_1 + 0x230c1) <= (byte)PTR_DAT_04bc27f0[uVar15])) &&
                           ((*(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >>
                             (ulong)(*(byte *)(param_1 + 0x230c1) & 0x1f) & 1) != 0)) {
                          uVar15 = (ulong)*(byte *)(param_1 + 0x230c3);
                          if (((uVar15 < 0x23) &&
                              (*(byte *)(param_1 + 0x230c4) <= (byte)PTR_DAT_04bc27f0[uVar15])) &&
                             ((*(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >>
                               (ulong)(*(byte *)(param_1 + 0x230c4) & 0x1f) & 1) != 0)) {
                            uVar15 = (ulong)*(byte *)(param_1 + 0x230c6);
                            if (((uVar15 < 0x23) &&
                                (*(byte *)(param_1 + 0x230c7) <= (byte)PTR_DAT_04bc27f0[uVar15])) &&
                               ((*(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >>
                                 (ulong)(*(byte *)(param_1 + 0x230c7) & 0x1f) & 1) != 0)) {
                              uVar15 = (ulong)*(byte *)(param_1 + 0x230c9);
                              if (((uVar15 < 0x23) &&
                                  (*(byte *)(param_1 + 0x230ca) <= (byte)PTR_DAT_04bc27f0[uVar15]))
                                 && ((*(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >>
                                      (ulong)(*(byte *)(param_1 + 0x230ca) & 0x1f) & 1) != 0))
                              goto LAB_02843f80;
                              lVar16 = 9;
                            }
                            else {
                              lVar16 = 8;
                            }
                          }
                          else {
                            lVar16 = 7;
                          }
                        }
                        else {
                          lVar16 = 6;
                        }
                      }
                      else {
                        lVar16 = 5;
                      }
                    }
                    else {
                      lVar16 = 4;
                    }
                  }
                  else {
                    lVar16 = 3;
                  }
                }
                else {
                  lVar16 = 2;
                }
              }
              else {
                lVar16 = 1;
              }
            }
            else {
              lVar16 = 0;
            }
            *(ushort *)(pbVar1 + lVar16 * 3) = uVar4;
            bVar9 = FUN_020fd7d8(local_bc);
            *(byte *)((long)(pbVar1 + lVar16 * 3) + 2) = bVar9;
            puVar17 = PTR_DAT_04bc27f0;
            uVar7 = local_bc._0_3_;
          }
        }
      }
    }
LAB_02843f80:
    local_bc._0_3_ = uVar7;
    lVar19 = lVar19 + -1;
    lVar13 = lVar13 + 0x13230;
    if (lVar19 == 0) {
      if ((((local_cc & 1) != 0) && (*(long *)(lVar11 + 0x28) != 0)) &&
         (puVar14 = *(undefined8 **)(*(long *)(lVar11 + 0x28) + 8), puVar14 != (undefined8 *)0x0)) {
        (**(code **)*puVar14)();
      }
      return;
    }
  } while( true );
}

