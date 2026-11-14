
void FUN_01cdbb20(undefined8 *param_1,uint *****param_2,long param_3)

{
  int *piVar1;
  undefined8 *__s;
  long lVar2;
  undefined *puVar3;
  undefined8 *__dest;
  uint ******ppppppuVar4;
  uint *puVar5;
  uint uVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint ******ppppppuVar10;
  uint ******ppppppuVar11;
  uint *****pppppuVar12;
  uint ******ppppppuVar13;
  ulong uVar14;
  uint ******ppppppuVar15;
  uint ******ppppppuVar16;
  long lVar17;
  uint *****local_c00;
  uint local_bf4;
  uint ******local_bf0;
  uint ******local_be8;
  int local_be0;
  uint *local_bd8;
  uint *local_bd0;
  undefined4 local_bc8;
  uint local_bc0 [8];
  long local_ba0 [4];
  long local_b80 [4];
  undefined1 auStack_b60 [2688];
  undefined8 local_e0;
  undefined *local_c0;
  undefined1 *local_b8;
  undefined4 local_b0;
  undefined1 local_ac [63];
  undefined1 local_6d;
  
  __s = param_1 + 1;
  ppppppuVar16 = (uint ******)&local_be8;
  local_c00 = param_2;
  memset(__s,0,0x1604);
  local_be0 = 0;
  *param_1 = 0x220a002801;
  local_bd8 = local_bc0;
  local_bf0 = (uint ******)&local_bf0;
  local_be8 = (uint ******)&local_bf0;
  lVar17 = 0;
  do {
    lVar2 = lVar17 + 0x60;
    *(long *)((long)local_ba0 + lVar17) = (long)local_b80 + lVar17;
    *(long **)((long)local_bc0 + lVar17) = (long *)((long)local_ba0 + lVar17);
    *(undefined1 **)((long)local_b80 + lVar17) = auStack_b60 + lVar17;
    lVar17 = lVar2;
  } while (lVar2 != 0xae0);
  local_e0 = 0;
  local_bd0 = local_bc0;
  lVar17 = 0;
  local_bc8 = 0x58;
  puVar3 = PTR_DAT_04bb2bc0 + 0x10;
  do {
    puVar5 = local_bd8;
    uVar6 = (uint)*(byte *)(param_3 + lVar17);
    local_bf4 = uVar6;
    if (uVar6 != 0) {
      if (local_bd8 != (uint *)0x0) {
        local_bd8 = *(uint **)local_bd8;
      }
      *(undefined1 *)(puVar5 + 3) = 0;
      puVar5[1] = 0xffff;
      puVar5[2] = 0xffffffff;
      *puVar5 = DAT_05718ef8;
      ppppppuVar15 = (uint ******)(puVar5 + 4);
      *ppppppuVar15 = (uint *****)0x0;
      *(uint ********)(puVar5 + 6) = &local_bf0;
      *ppppppuVar15 = (uint *****)local_bf0;
      if (local_bf0 != (uint ******)0x0) {
        local_bf0[1] = (uint *****)ppppppuVar15;
      }
      local_be0 = local_be0 + 1;
      *(undefined1 *)(puVar5 + 3) = 0;
      *puVar5 = uVar6;
      puVar5[2] = 0xffffffff;
      local_bf0 = ppppppuVar15;
      if (uVar6 < 0x6d) {
        puVar8 = &DAT_0407ebb1;
        if (uVar6 < 0x6d) {
          ppuVar7 = &PTR_s_EmotEnd_04913cd8;
          uVar6 = local_bf4;
LAB_01cdbbf0:
          puVar8 = (undefined8 *)ppuVar7[uVar6];
        }
      }
      else {
        puVar8 = &DAT_0407ebb1;
        if (uVar6 < 0x79) {
          ppuVar7 = (undefined **)FUN_007c3ad0();
          uVar6 = uVar6 - 0x6d;
          goto LAB_01cdbbf0;
        }
      }
      local_b0 = 0x40;
      local_6d = 0;
      local_ac[0] = 0;
      local_c0 = puVar3;
      local_b8 = local_ac;
      FUN_038d1270(&local_c0,"MaRe%s",puVar8);
      uVar6 = FUN_0171f1c0(&local_c0);
      puVar5[1] = uVar6;
    }
    lVar17 = lVar17 + 1;
  } while (lVar17 != 0x58);
  if (1 < local_be0) {
    ppppppuVar15 = (uint ******)local_be8[1];
    while (ppppppuVar4 = ppppppuVar15, (uint *******)ppppppuVar4 != &local_bf0) {
      ppppppuVar15 = (uint ******)ppppppuVar4[1];
      ppppppuVar11 = (uint ******)*ppppppuVar4;
      if (*(int *)((long)ppppppuVar4 + -0xc) < *(int *)((long)ppppppuVar11 + -0xc)) {
        ppppppuVar10 = ppppppuVar11;
        do {
          ppppppuVar10 = (uint ******)*ppppppuVar10;
          if ((uint *******)ppppppuVar10 == &local_bf0) {
            ppppppuVar10 = (uint ******)&local_bf0;
            break;
          }
        } while (*(int *)((long)ppppppuVar4 + -0xc) < *(int *)((long)ppppppuVar10 + -0xc));
        ppppppuVar13 = ppppppuVar15;
        if (ppppppuVar11 != (uint ******)0x0) {
          ppppppuVar11[1] = (uint *****)ppppppuVar15;
          ppppppuVar13 = (uint ******)ppppppuVar4[1];
        }
        if (ppppppuVar13 != (uint ******)0x0) {
          *ppppppuVar13 = *ppppppuVar4;
        }
        *ppppppuVar4 = (uint *****)0x0;
        ppppppuVar4[1] = (uint *****)0x0;
        pppppuVar12 = ppppppuVar10[1];
        ppppppuVar10[1] = (uint *****)ppppppuVar4;
        *ppppppuVar4 = (uint *****)ppppppuVar10;
        ppppppuVar4[1] = pppppuVar12;
        if (pppppuVar12 != (uint *****)0x0) {
          *pppppuVar12 = (uint ****)ppppppuVar4;
        }
      }
    }
  }
  *(int *)(param_1 + 0x2c1) = local_be0;
  if ((uint *******)local_be8 != &local_bf0) {
    uVar6 = 0;
    ppppppuVar15 = local_be8;
    do {
      uVar9 = *(uint *)(ppppppuVar15 + -2);
      if ((int)uVar9 < 0x6d) {
        puVar8 = &DAT_0407ebb1;
        if (uVar9 < 0x6d) {
          ppuVar7 = &PTR_s_EmotEnd_04913cd8;
LAB_01cdbe74:
          puVar8 = (undefined8 *)ppuVar7[uVar9];
        }
      }
      else {
        puVar8 = &DAT_0407ebb1;
        if (uVar9 < 0x79) {
          ppuVar7 = (undefined **)FUN_007c3ad0();
          uVar9 = uVar9 - 0x6d;
          goto LAB_01cdbe74;
        }
      }
      lVar17 = 0;
      __dest = (undefined8 *)((long)__s + ((long)((ulong)uVar6 << 0x20) >> 0x1a));
      do {
        if (*(char *)((long)puVar8 + lVar17) == '\0') goto LAB_01cdbe04;
        if (*(char *)((long)puVar8 + lVar17 + 1) == '\0') {
          lVar17 = lVar17 + 1;
          goto LAB_01cdbe04;
        }
        if (*(char *)((long)puVar8 + lVar17 + 2) == '\0') {
          lVar17 = lVar17 + 2;
          goto LAB_01cdbe04;
        }
        lVar17 = lVar17 + 3;
      } while (lVar17 != 0x80001);
      lVar17 = 0;
LAB_01cdbe04:
      uVar9 = (uint)lVar17;
      __dest[6] = 0;
      __dest[7] = 0;
      if (0x3e < (int)uVar9) {
        uVar9 = 0x3f;
      }
      __dest[4] = 0;
      __dest[5] = 0;
      __dest[2] = 0;
      __dest[3] = 0;
      *__dest = 0;
      __dest[1] = 0;
      memcpy(__dest,puVar8,(ulong)uVar9);
      ppppppuVar15 = (uint ******)ppppppuVar15[1];
      uVar6 = uVar6 + 1;
    } while (ppppppuVar15 + -2 != &local_c00);
  }
  uVar14 = 0;
  uVar6 = 1;
  do {
    piVar1 = (int *)((long)__s + uVar14);
    uVar14 = uVar14 + 4;
    uVar6 = (*piVar1 * 0x16a88000 | (uint)(*piVar1 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar6;
    uVar6 = (uVar6 >> 0x13 | uVar6 << 0xd) * 5 + 0xe6546b64;
  } while (uVar14 < 0x1601);
  uVar6 = (uVar6 ^ uVar6 >> 0x10 ^ 0x1604) * -0x7a143595;
  uVar6 = (uVar6 ^ uVar6 >> 0xd) * -0x3d4d51cb;
  *(uint *)local_c00 = uVar6 ^ uVar6 >> 0x10;
  do {
    ppppppuVar15 = (uint ******)*ppppppuVar16;
    ppppppuVar16 = ppppppuVar15 + 1;
  } while ((uint *******)ppppppuVar15 != &local_bf0);
  return;
}

