
void FUN_0392cdf0(long *param_1,byte *param_2)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined *puVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  char local_70 [16];
  
  plVar6 = *(long **)(param_2 + 8);
  if (plVar6 == param_1) {
    pcVar7 = *(code **)(*param_1 + 0x48);
    plVar6 = (long *)PTR_PTR_04bb2238;
LAB_0392ce50:
    (*pcVar7)(param_1,plVar6,0x2000000);
  }
  else {
    if (plVar6 == (long *)((ulong)param_1 | 1)) {
      plVar6 = param_1 + 0x16;
      pcVar7 = *(code **)(*param_1 + 0x48);
      goto LAB_0392ce50;
    }
    if (plVar6 == (long *)((ulong)param_1 | 2)) {
      FUN_03955be0(param_1,PTR_PTR_04bb2238,*(uint *)((long)param_1 + 0x1cc) & 1);
    }
  }
  lVar8 = *(long *)(param_2 + 8);
  bVar3 = lVar8 - 0x186a1U < 3;
  if (lVar8 - 0x186a1U < 3) {
    FUN_0392a828(param_1);
    lVar8 = *(long *)(param_2 + 8);
  }
  uVar5 = (uint)lVar8;
  if (lVar8 - 0x186a4U < 0xc) {
    if (uVar5 < 0x186af) {
      if (uVar5 == 0x186ae) {
        uVar9 = 0xb;
      }
      else {
        lVar8 = 0xb;
        uVar9 = (ulong)(uVar5 - 0x186a3);
        uVar13 = uVar9;
        if (9 < uVar9) {
          uVar13 = 10;
        }
        if (uVar5 - 0x186a3 < 10) {
          lVar14 = 0;
          plVar6 = param_1 + 0x77;
          do {
            lVar8 = lVar14;
            lVar14 = lVar8 + -2;
            *(int *)plVar6 = (int)plVar6[-4];
            *(int *)(plVar6 + -4) = (int)plVar6[-8];
            plVar6 = plVar6 + -8;
          } while (-lVar14 != (0xb - uVar13 & 0xfffffffffffffffe));
          lVar8 = lVar8 + 9;
        }
        if ((0xb - uVar13 & 1) != 0) {
          *(int *)(param_1 + lVar8 * 4 + 0x4b) = (int)param_1[lVar8 * 4 + 0x47];
        }
      }
      uVar5 = *(uint *)(param_1 + 0x4b);
      uVar13 = (ulong)uVar5;
      local_70[8] = '\0';
      local_70[9] = '\0';
      local_70[10] = '\0';
      local_70[0xb] = '\0';
      local_70[0] = '\0';
      local_70[1] = '\0';
      local_70[2] = '\0';
      local_70[3] = '\0';
      local_70[4] = '\0';
      local_70[5] = '\0';
      local_70[6] = '\0';
      local_70[7] = '\0';
      if (uVar5 != 0xffffffff) {
        if (0xb < uVar5) {
          uVar13 = 0;
        }
        local_70[uVar13] = '\x01';
      }
      uVar5 = *(uint *)(param_1 + 0x4f);
      uVar13 = (ulong)uVar5;
      if (uVar5 != 0xffffffff) {
        if (0xb < uVar5) {
          uVar13 = 0;
        }
        local_70[uVar13] = '\x01';
      }
      uVar5 = *(uint *)(param_1 + 0x53);
      uVar13 = (ulong)uVar5;
      if (uVar5 != 0xffffffff) {
        if (0xb < uVar5) {
          uVar13 = 0;
        }
        local_70[uVar13] = '\x01';
      }
      uVar5 = *(uint *)(param_1 + 0x57);
      uVar13 = (ulong)uVar5;
      if (uVar5 != 0xffffffff) {
        if (0xb < uVar5) {
          uVar13 = 0;
        }
        local_70[uVar13] = '\x01';
      }
      uVar5 = *(uint *)(param_1 + 0x5b);
      uVar13 = (ulong)uVar5;
      if (uVar5 != 0xffffffff) {
        if (0xb < uVar5) {
          uVar13 = 0;
        }
        local_70[uVar13] = '\x01';
      }
      uVar5 = *(uint *)(param_1 + 0x5f);
      uVar13 = (ulong)uVar5;
      if (uVar5 != 0xffffffff) {
        if (0xb < uVar5) {
          uVar13 = 0;
        }
        local_70[uVar13] = '\x01';
      }
      uVar5 = *(uint *)(param_1 + 99);
      uVar13 = (ulong)uVar5;
      if (uVar5 != 0xffffffff) {
        if (0xb < uVar5) {
          uVar13 = 0;
        }
        local_70[uVar13] = '\x01';
      }
      uVar5 = *(uint *)(param_1 + 0x67);
      uVar13 = (ulong)uVar5;
      if (uVar5 != 0xffffffff) {
        if (0xb < uVar5) {
          uVar13 = 0;
        }
        local_70[uVar13] = '\x01';
      }
      uVar5 = *(uint *)(param_1 + 0x6b);
      uVar13 = (ulong)uVar5;
      if (uVar5 != 0xffffffff) {
        if (0xb < uVar5) {
          uVar13 = 0;
        }
        local_70[uVar13] = '\x01';
      }
      uVar5 = *(uint *)(param_1 + 0x6f);
      uVar13 = (ulong)uVar5;
      if (uVar5 != 0xffffffff) {
        if (0xb < uVar5) {
          uVar13 = 0;
        }
        local_70[uVar13] = '\x01';
      }
      uVar5 = *(uint *)(param_1 + 0x73);
      uVar13 = (ulong)uVar5;
      if (uVar5 != 0xffffffff) {
        if (0xb < uVar5) {
          uVar13 = 0;
        }
        local_70[uVar13] = '\x01';
      }
      uVar5 = *(uint *)(param_1 + 0x77);
      uVar13 = (ulong)uVar5;
      if (uVar5 != 0xffffffff) {
        if (0xb < uVar5) {
          uVar13 = 0;
        }
        local_70[uVar13] = '\x01';
      }
      if (local_70[0] == '\0') {
        iVar12 = 0;
      }
      else if (local_70[1] == '\0') {
        iVar12 = 1;
      }
      else if (local_70[2] == '\0') {
        iVar12 = 2;
      }
      else if (local_70[3] == '\0') {
        iVar12 = 3;
      }
      else if (local_70[4] == '\0') {
        iVar12 = 4;
      }
      else if (local_70[5] == '\0') {
        iVar12 = 5;
      }
      else if (local_70[6] == '\0') {
        iVar12 = 6;
      }
      else if (local_70[7] == '\0') {
        iVar12 = 7;
      }
      else if (local_70[8] == '\0') {
        iVar12 = 8;
      }
      else if (local_70[9] == '\0') {
        iVar12 = 9;
      }
      else if (local_70[10] == '\0') {
        iVar12 = 10;
      }
      else {
        iVar12 = 0xb;
        if (local_70[0xb] != '\0') {
          iVar12 = -1;
        }
      }
      *(int *)(param_1 + uVar9 * 4 + 0x4b) = iVar12;
      *(undefined4 *)(param_1 + (long)iVar12 * 0xf + 0x81) = 0;
      FUN_0392aa50(param_1,param_1 + (long)iVar12 * 0xf + 0x78);
    }
LAB_0392d2d8:
    bVar3 = true;
  }
  else {
    if (lVar8 - 0x18708U < 0xc) {
      if (uVar5 < 0x18713) {
        uVar9 = (ulong)(uVar5 - 0x18708);
        uVar13 = uVar9;
        if (uVar9 < 0xb) {
          uVar13 = 10;
        }
        uVar15 = uVar9;
        if ((((int)uVar13 - uVar5) + 1 & 1) != 0) {
          uVar15 = uVar9 + 1;
          *(int *)(param_1 + uVar9 * 4 + 0x4b) = (int)param_1[uVar15 * 4 + 0x4b];
        }
        if (uVar9 < 10) {
          lVar8 = (uVar13 - uVar15) + 1;
          plVar6 = param_1 + uVar15 * 4 + 0x53;
          do {
            lVar8 = lVar8 + -2;
            *(int *)(plVar6 + -8) = (int)plVar6[-4];
            *(int *)(plVar6 + -4) = (int)*plVar6;
            plVar6 = plVar6 + 8;
          } while (lVar8 != 0);
        }
      }
      *(undefined4 *)(param_1 + 0x77) = 0xffffffff;
      FUN_0392d89c(param_1);
      goto LAB_0392d2d8;
    }
    if (lVar8 - 0x1876cU < 0xc) {
      if (0x1876c < uVar5) {
        uVar2 = uVar5 - 0x1876c;
        uVar5 = uVar5 - 0x1876d;
        goto LAB_0392d248;
      }
    }
    else if ((lVar8 - 0x187d0U < 0xc) && (uVar5 < 0x187db)) {
      uVar2 = uVar5 - 0x187d0;
      uVar5 = uVar5 - 0x187cf;
LAB_0392d248:
      lVar8 = param_1[(ulong)uVar5 * 4 + 0x4b];
      *(int *)(param_1 + (ulong)uVar5 * 4 + 0x4b) = (int)param_1[(ulong)uVar2 * 4 + 0x4b];
      *(int *)(param_1 + (ulong)uVar2 * 4 + 0x4b) = (int)lVar8;
      goto LAB_0392d2d8;
    }
  }
  iVar12 = 0;
  plVar6 = param_1 + 300;
  do {
    plVar17 = param_1 + (long)iVar12 * 0xf + 0x78;
    uVar5 = *(uint *)(plVar17 + 0xd);
    if (uVar5 != 0xffffffff) {
      uVar2 = *(uint *)(param_1 + (long)iVar12 * 0xf + 0x81);
      plVar10 = *(long **)(param_2 + 8);
      if (uVar2 == 6) {
        plVar1 = param_1 + 500 + (ulong)uVar5 * 0x50;
        if (3 < uVar5) {
          plVar1 = param_1 + 500;
        }
        if (plVar1 <= plVar10 && plVar10 < plVar1 + 0x50) {
          FUN_03930780(plVar1,param_1,param_2);
          *(byte *)((long)param_1 + (long)iVar12 * 0x78 + 0x431) =
               *(byte *)((long)param_1 + (long)iVar12 * 0x78 + 0x431) & 0xfe;
          *(uint *)(param_1 + 0x467) = *(uint *)(param_1 + 0x467) | 2;
        }
      }
      else {
        plVar1 = plVar6 + (ulong)uVar5 * 5;
        if (0x27 < uVar5) {
          plVar1 = plVar6;
        }
        if (plVar10 < plVar1) {
          if (plVar10 == param_1 + (long)iVar12 * 0xf + 0x86) goto LAB_0392d3e0;
        }
        else {
          if (uVar2 < 10) {
            lVar8 = *(long *)(&DAT_041b3938 + (long)(int)uVar2 * 8);
          }
          else {
            lVar8 = 0;
          }
          if (plVar10 < (long *)(lVar8 + (long)plVar1) ||
              plVar10 == param_1 + (long)iVar12 * 0xf + 0x86) {
LAB_0392d3e0:
            *(uint *)(param_1 + 0x467) = *(uint *)(param_1 + 0x467) | 2;
            FUN_0392b344(param_1,plVar17);
          }
        }
      }
    }
    if ((*param_2 >> 1 & 1) == 0) {
      if ((param_1 + (long)iVar12 * 0xf + 0x81 <= *(long **)(param_2 + 8)) &&
         (*(long **)(param_2 + 8) < (long *)((ulong)(param_1 + (long)iVar12 * 0xf + 0x81) | 4))) {
        FUN_0392aa50(param_1,plVar17);
        FUN_0392d89c(param_1);
        bVar3 = true;
      }
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 != 0xc);
  uVar13 = *(ulong *)(param_2 + 8);
  bVar4 = uVar13 - 0x1000 < 0xc;
  if (uVar13 - 0x1000 < 0xc) {
    iVar12 = (int)param_1[(long)(int)param_1[(ulong)((int)uVar13 - 0x1000) * 4 + 0x4b] * 0xf + 0x85]
    ;
    plVar17 = plVar6 + (ulong)(iVar12 + 1U) * 5;
    if (0x27 < iVar12 + 1U) {
      plVar17 = plVar6;
    }
    plVar10 = plVar6 + (ulong)(iVar12 + 2U) * 5;
    if (0x27 < iVar12 + 2U) {
      plVar10 = plVar6;
    }
    plVar17[3] = (long)&DAT_3f8000003f800000;
    plVar17[4] = (long)&DAT_3f8000003f800000;
    plVar10[3] = 0;
    plVar10[4] = 0;
    plVar17 = plVar6 + (ulong)(iVar12 + 3U) * 5;
    if (0x27 < iVar12 + 3U) {
      plVar17 = plVar6;
    }
    plVar17[3] = 0x3f0000003f800000;
    plVar17[4] = 0;
    plVar17 = plVar6 + (ulong)(iVar12 + 4U) * 5;
    if (0x27 < iVar12 + 4U) {
      plVar17 = plVar6;
    }
    plVar17[3] = (long)&DAT_3f8000003f800000;
    plVar17[4] = (long)&DAT_3f8000003f800000;
    plVar17 = plVar6 + (ulong)(iVar12 + 5U) * 5;
    if (0x27 < iVar12 + 5U) {
      plVar17 = plVar6;
    }
    plVar10 = plVar6 + (ulong)(iVar12 + 6U) * 5;
    if (0x27 < iVar12 + 6U) {
      plVar10 = plVar6;
    }
    plVar17[3] = 0;
    plVar17[4] = 0;
    plVar10[3] = 0x3f0000003f800000;
    plVar10[4] = 0;
    plVar17 = plVar6 + (ulong)(iVar12 + 7U) * 5;
    if (0x27 < iVar12 + 7U) {
      plVar17 = plVar6;
    }
    plVar17[3] = (long)&DAT_3f8000003f800000;
    plVar17[4] = (long)&DAT_3f8000003f800000;
    plVar17 = plVar6 + (ulong)(iVar12 + 8U) * 5;
    if (0x27 < iVar12 + 8U) {
      plVar17 = plVar6;
    }
    plVar17[3] = 0;
    plVar17[4] = 0;
    plVar17 = plVar6 + (ulong)(iVar12 + 9U) * 5;
    if (0x27 < iVar12 + 9U) {
      plVar17 = plVar6;
    }
    plVar17[3] = 0x3f0000003f800000;
    plVar17[4] = 0;
    uVar13 = *(ulong *)(param_2 + 8);
  }
  if (0x10 < uVar13 >> 8) {
    if (uVar13 >> 2 < 0x443) {
      lVar8 = -0x1100;
      puVar11 = &UNK_041b3874;
    }
    else {
      if (uVar13 >> 9 < 9) goto LAB_0392d624;
      if (uVar13 >> 2 < 0x483) {
        lVar8 = -0x1200;
        puVar11 = &UNK_041b387c;
      }
      else {
        lVar8 = -0x1300;
        if (0xb < uVar13 - 0x1300) goto LAB_0392d624;
        puVar11 = &UNK_041b3884;
      }
    }
    iVar12 = *(int *)(puVar11 + 4) * 3 +
             (int)param_1[(long)(int)param_1[(lVar8 + uVar13) * 4 + 0x4b] * 0xf + 0x85];
    plVar17 = plVar6 + (ulong)(iVar12 + 1U) * 5;
    if (0x27 < iVar12 + 1U) {
      plVar17 = plVar6;
    }
    plVar17[3] = (long)&DAT_3f8000003f800000;
    plVar17[4] = (long)&DAT_3f8000003f800000;
    plVar17 = plVar6 + (ulong)(iVar12 + 2U) * 5;
    if (0x27 < iVar12 + 2U) {
      plVar17 = plVar6;
    }
    plVar17[3] = 0;
    plVar17[4] = 0;
    plVar17 = plVar6 + (ulong)(iVar12 + 3U) * 5;
    if (0x27 < iVar12 + 3U) {
      plVar17 = plVar6;
    }
    plVar17[3] = 0x3f0000003f800000;
    plVar17[4] = 0;
    bVar4 = true;
    uVar13 = *(ulong *)(param_2 + 8);
  }
LAB_0392d624:
  uVar9 = uVar13 - 0x2000;
  if (uVar9 < 0xc) {
    uVar5 = *(uint *)(param_1 +
                     (long)(int)param_1[(ulong)((int)uVar13 - 0x2000) * 4 + 0x4b] * 0xf + 0x85);
    plVar17 = plVar6 + (ulong)uVar5 * 5;
    if (0x27 < uVar5) {
      plVar17 = plVar6;
    }
    plVar10 = plVar6 + (ulong)(uVar5 + 1) * 5;
    if (0x27 < uVar5 + 1) {
      plVar10 = plVar6;
    }
    plVar17[3] = (long)&DAT_3f8000003f800000;
    plVar17[4] = (long)&DAT_3f8000003f800000;
    plVar17 = plVar6 + (ulong)(uVar5 + 2) * 5;
    if (0x27 < uVar5 + 2) {
      plVar17 = plVar6;
    }
    plVar10[3] = 0;
    plVar10[4] = 0;
    plVar10 = plVar6 + (ulong)(uVar5 + 3) * 5;
    if (0x27 < uVar5 + 3) {
      plVar10 = plVar6;
    }
    plVar17[3] = (long)&DAT_3f8000003f800000;
    plVar17[4] = (long)&DAT_3f8000003f800000;
    plVar17 = plVar6 + (ulong)(uVar5 + 4) * 5;
    if (0x27 < uVar5 + 4) {
      plVar17 = plVar6;
    }
    plVar10[3] = 0;
    plVar10[4] = 0;
    plVar10 = plVar6 + (ulong)(uVar5 + 5) * 5;
    if (0x27 < uVar5 + 5) {
      plVar10 = plVar6;
    }
    plVar17[3] = (long)&DAT_3f8000003f800000;
    plVar17[4] = (long)&DAT_3f8000003f800000;
    plVar17 = plVar6 + (ulong)(uVar5 + 6) * 5;
    if (0x27 < uVar5 + 6) {
      plVar17 = plVar6;
    }
    plVar10[3] = 0;
    plVar10[4] = 0;
    plVar17[3] = (long)&DAT_3f8000003f800000;
    plVar17[4] = (long)&DAT_3f8000003f800000;
    plVar17 = plVar6 + (ulong)(uVar5 + 7) * 5;
    if (0x27 < uVar5 + 7) {
      plVar17 = plVar6;
    }
    plVar17[3] = 0;
    plVar17[4] = 0;
    plVar17 = plVar6 + (ulong)(uVar5 + 8) * 5;
    if (0x27 < uVar5 + 8) {
      plVar17 = plVar6;
    }
    plVar17[3] = (long)&DAT_3f8000003f800000;
    plVar17[4] = (long)&DAT_3f8000003f800000;
    plVar17 = plVar6 + (ulong)(uVar5 + 9) * 5;
    if (0x27 < uVar5 + 9) {
      plVar17 = plVar6;
    }
    plVar17[3] = 0;
    plVar17[4] = 0;
    plVar17 = plVar6 + (ulong)(uVar5 + 10) * 5;
    if (0x27 < uVar5 + 10) {
      plVar17 = plVar6;
    }
    plVar17[3] = (long)&DAT_3f8000003f800000;
    plVar17[4] = (long)&DAT_3f8000003f800000;
    plVar17 = plVar6 + (ulong)(uVar5 + 0xb) * 5;
    if (0x27 < uVar5 + 0xb) {
      plVar17 = plVar6;
    }
    plVar17[3] = 0;
    plVar17[4] = 0;
    uVar13 = *(ulong *)(param_2 + 8);
  }
  uVar15 = uVar13 >> 8;
  if (uVar15 < 0x21) {
LAB_0392d85c:
    if (uVar9 < 0xc) {
      bVar4 = true;
    }
    if (!bVar4 && !bVar3) {
      return;
    }
  }
  else {
    uVar16 = uVar13 >> 2;
    if (uVar16 < 0x843) {
      lVar8 = -0x2100;
      puVar11 = &UNK_041b388c;
    }
    else {
      if (uVar13 >> 9 < 0x11) goto LAB_0392d85c;
      if (uVar16 < 0x883) {
        lVar8 = -0x2200;
        puVar11 = &UNK_041b3894;
      }
      else {
        if (uVar15 < 0x23) goto LAB_0392d85c;
        if (uVar16 < 0x8c3) {
          lVar8 = -0x2300;
          puVar11 = &UNK_041b389c;
        }
        else {
          if (uVar13 >> 10 < 9) goto LAB_0392d85c;
          if (uVar16 < 0x903) {
            lVar8 = -0x2400;
            puVar11 = &UNK_041b38a4;
          }
          else {
            if (uVar15 < 0x25) goto LAB_0392d85c;
            if (uVar16 < 0x943) {
              lVar8 = -0x2500;
              puVar11 = &UNK_041b38ac;
            }
            else {
              lVar8 = -0x2600;
              if (0xb < uVar13 - 0x2600) goto LAB_0392d85c;
              puVar11 = &UNK_041b38b4;
            }
          }
        }
      }
    }
    uVar5 = (int)param_1[(long)(int)param_1[(lVar8 + uVar13) * 4 + 0x4b] * 0xf + 0x85] +
            *(int *)(puVar11 + 4) * 2;
    plVar17 = plVar6 + (ulong)uVar5 * 5;
    if (0x27 < uVar5) {
      plVar17 = plVar6;
    }
    plVar17[3] = (long)&DAT_3f8000003f800000;
    plVar17[4] = (long)&DAT_3f8000003f800000;
    plVar17 = plVar6 + (ulong)(uVar5 + 1) * 5;
    if (0x27 < uVar5 + 1) {
      plVar17 = plVar6;
    }
    plVar17[3] = 0;
    plVar17[4] = 0;
  }
  *(uint *)(param_1 + 0x467) = *(uint *)(param_1 + 0x467) | 2;
  return;
}

