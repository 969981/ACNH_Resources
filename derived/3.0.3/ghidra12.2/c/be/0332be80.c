
void FUN_0332be80(long *param_1)

{
  ushort *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  bool bVar5;
  ushort uVar6;
  ushort uVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ushort *puVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  undefined8 local_100;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined2 local_d4 [31];
  undefined2 local_96;
  ushort local_8c [2];
  undefined *local_88;
  undefined2 *puStack_80;
  undefined8 local_78;
  undefined *local_70;
  undefined8 uStack_68;
  
  puVar8 = PTR_DAT_04bc8e68;
  local_100 = *(undefined8 *)(param_1[0x5e] + 0xf0);
  local_e0 = PTR_DAT_04bb2120;
  if (*(char **)(PTR_PTR_04bb2238 + 8) != (char *)0x0) {
    local_e0 = *(char **)(PTR_PTR_04bb2238 + 8);
  }
  if (*local_e0 != '\0') {
    local_e8 = PTR_DAT_04bc8e68 + 0x10;
    lVar10 = FUN_032cb8e0(&local_78,&local_e8);
    if (lVar10 == 0) {
      local_100 = 0;
    }
    else {
      local_100 = *(undefined8 *)(lVar10 + 0xe8);
    }
  }
  lVar10 = 0;
  lVar12 = *(long *)PTR_DAT_04bc1118;
  puVar2 = PTR_DAT_04bc0840 + 0x10;
  puVar3 = PTR_DAT_04bc8e78 + 0x10;
  do {
    local_8c[1] = 0;
    uVar7 = (&DAT_0416950c)[lVar10];
    local_d8 = 0x20;
    local_96 = 0;
    local_d4[0] = 0;
    local_e8 = puVar2;
    local_e0 = (char *)local_d4;
    local_8c[0] = uVar7;
    FUN_038d1340(&local_e8,&DAT_04169b80,local_8c);
    puStack_80 = (undefined2 *)local_e0;
    uStack_68 = *(undefined8 *)(*(long *)(param_1[lVar10 + 0x2fe] + 0x20) + 0x18);
    local_70 = &DAT_040c1e5f;
    local_88 = puVar3;
    local_78 = puVar8 + 0x10;
    local_78 = (undefined *)FUN_0328b6d0(&uStack_68,&local_78,0);
    FUN_032d67f0(&local_78,&local_88);
    lVar18 = param_1[lVar10 + 0x2fe];
    lVar17 = *(long *)(lVar12 + 0x20);
    if ((*(uint *)(lVar17 + 0x106c) >> 8 & 1) == 0) {
LAB_0332c048:
      if (((*(uint *)(lVar17 + 0x106c) >> 7 & 1) != 0) &&
         ((uVar16 = uVar7 - 0x30, 0x29 < uVar16 ||
          ((1L << ((ulong)uVar16 & 0x3f) & 0x3ff7dfe03ffU) == 0)))) goto LAB_0332c098;
      (**(code **)(*(long *)(lVar17 + 0x1570) + 0x18))(lVar17 + 0x1570);
      uVar6 = **(ushort **)(lVar17 + 0x1578);
      if (uVar6 != 0) {
        if (uVar6 == uVar7) goto LAB_0332c098;
        puVar13 = *(ushort **)(lVar17 + 0x1578) + 2;
        uVar9 = 0;
        do {
          uVar14 = uVar9;
          if (puVar13[-1] == 0) {
            puVar13 = (ushort *)0x0;
            goto LAB_0332c1e0;
          }
          if (puVar13[-1] == uVar7) {
            puVar13 = (ushort *)0x1;
            goto LAB_0332c1e0;
          }
          if (*puVar13 == 0) {
            puVar13 = (ushort *)0x0;
            uVar14 = uVar14 + 1;
            goto LAB_0332c1e0;
          }
          if (*puVar13 == uVar7) {
            uVar14 = uVar14 + 1;
            puVar13 = (ushort *)0x1;
            goto LAB_0332c1e0;
          }
          if (uVar14 == 0x7fffe) {
            uVar14 = uVar14 + 2;
            goto LAB_0332c1e0;
          }
          puVar1 = puVar13 + 1;
          if (*puVar1 == 0) {
            puVar13 = (ushort *)0x0;
            uVar14 = uVar14 + 2;
            goto LAB_0332c1e0;
          }
          puVar13 = puVar13 + 3;
          uVar9 = uVar14 + 3;
        } while (*puVar1 != uVar7);
        puVar13 = (ushort *)0x1;
        uVar14 = uVar14 + 2;
LAB_0332c1e0:
        uVar16 = (uint)(uVar14 < 0x80000) & (uint)puVar13;
        FUN_0328a0b0(lVar18,6,1,uVar16 ^ 1);
        if (uVar16 == 0) goto LAB_0332c204;
        goto LAB_0332c0ac;
      }
      FUN_0328a0b0(lVar18,6,1,1);
LAB_0332c204:
      uVar11 = 1;
LAB_0332bf58:
      uVar7 = *(ushort *)(lVar18 + 0x250) & 0xfdff;
    }
    else {
      bVar5 = false;
      lVar15 = 0;
      do {
        lVar4 = lVar15 + 4;
        if (*(ushort *)((long)&DAT_0418d22a + lVar15) == uVar7 ||
            (uint)*(ushort *)((long)&DAT_0418d22c + lVar15) == (uint)uVar7) {
          bVar5 = true;
        }
        lVar15 = lVar4;
      } while (lVar4 != 0x52c);
      if (bVar5) goto LAB_0332c048;
LAB_0332c098:
      FUN_0328a0b0(lVar18,6,1,0);
LAB_0332c0ac:
      if (((*(ushort *)(lVar18 + 0x578) >> 5 & 1) != 0) &&
         ((*(ushort *)(lVar18 + 0x578) >> 4 & 1) != 0)) {
        uVar11 = 0;
        goto LAB_0332bf58;
      }
      uVar11 = 0;
      uVar7 = *(ushort *)(lVar18 + 0x250) | 0x200;
    }
    local_78 = (undefined *)CONCAT44(local_78._4_4_,9);
    *(ushort *)(lVar18 + 0x250) = uVar7;
    FUN_0328a2b0(lVar18,uVar11);
    lVar10 = lVar10 + 1;
  } while (lVar10 != 10);
  lVar10 = FUN_0036ab80(local_100,"L_BtnClear_00");
  puVar2 = PTR_DAT_04bc8e68;
  local_78 = *(undefined **)(*(long *)(lVar10 + 0xe8) + 0x18);
  local_e8 = PTR_DAT_04bc8e68 + 0x10;
  local_e0 = "T_00";
  local_88 = (undefined *)FUN_0328b6d0(&local_78,&local_e8,0);
  puVar8 = PTR_DAT_04bb8610;
  uVar7 = *(ushort *)(param_1 + 0x30a);
  if (uVar7 == 0) {
LAB_0332c318:
    local_e8 = puVar8 + 0x10;
    local_78 = (undefined *)((ulong)local_78 & 0xffffffffffff0000);
    local_e0 = (char *)&local_78;
    FUN_032d67f0(&local_88,&local_e8);
    lVar10 = param_1[0x308];
    FUN_0328a0b0(lVar10,6,1,0);
    if (((*(ushort *)(lVar10 + 0x578) >> 5 & 1) == 0) ||
       ((*(ushort *)(lVar10 + 0x578) >> 4 & 1) == 0)) {
      uVar7 = *(ushort *)(lVar10 + 0x250) | 0x200;
    }
    else {
      uVar7 = *(ushort *)(lVar10 + 0x250) & 0xfdff;
    }
    uVar11 = 0;
    *(ushort *)(lVar10 + 0x250) = uVar7;
  }
  else {
    lVar10 = *(long *)(lVar12 + 0x20);
    if ((*(uint *)(lVar10 + 0x106c) >> 8 & 1) != 0) {
      bVar5 = false;
      lVar17 = 0;
      do {
        lVar18 = lVar17 + 4;
        if (*(ushort *)((long)&DAT_0418d22a + lVar17) == uVar7 ||
            (uint)*(ushort *)((long)&DAT_0418d22c + lVar17) == (uint)uVar7) {
          bVar5 = true;
        }
        lVar17 = lVar18;
      } while (lVar18 != 0x52c);
      if (!bVar5) goto LAB_0332c318;
    }
    if (((*(uint *)(lVar10 + 0x106c) >> 7 & 1) != 0) &&
       ((uVar16 = uVar7 - 0x30, 0x29 < uVar16 ||
        ((1L << ((ulong)uVar16 & 0x3f) & 0x3ff7dfe03ffU) == 0)))) goto LAB_0332c318;
    (**(code **)(*(long *)(lVar10 + 0x1570) + 0x18))(lVar10 + 0x1570);
    puVar13 = *(ushort **)(lVar10 + 0x1578);
    if (*puVar13 != 0) {
      if (*puVar13 != uVar7) {
        uVar9 = 0;
        do {
          uVar14 = uVar9;
          if ((uVar14 == 0x80000) || (puVar13[uVar14 + 1] == 0)) goto LAB_0332c40c;
          if (puVar13[uVar14 + 1] == uVar7) goto LAB_0332c404;
          if (puVar13[uVar14 + 2] == 0) goto LAB_0332c40c;
          uVar9 = uVar14 + 2;
        } while (puVar13[uVar14 + 2] != uVar7);
        uVar14 = uVar14 + 1;
LAB_0332c404:
        if (0x7ffff < uVar14) goto LAB_0332c40c;
      }
      goto LAB_0332c318;
    }
LAB_0332c40c:
    FUN_0332cc0c(&local_88,0);
    lVar10 = param_1[0x308];
    uVar7 = *(ushort *)(param_1 + 0x30a);
    lVar17 = *(long *)(lVar12 + 0x20);
    if ((*(uint *)(lVar17 + 0x106c) >> 8 & 1) == 0) {
LAB_0332c468:
      uVar16 = (uint)uVar7;
      if (((*(uint *)(lVar17 + 0x106c) >> 7 & 1) != 0) &&
         ((0x29 < uVar16 - 0x30 || ((1L << ((ulong)(uVar16 - 0x30) & 0x3f) & 0x3ff7dfe03ffU) == 0)))
         ) goto LAB_0332c4b8;
      (**(code **)(*(long *)(lVar17 + 0x1570) + 0x18))(lVar17 + 0x1570);
      puVar13 = *(ushort **)(lVar17 + 0x1578);
      if (*puVar13 != 0) {
        if (*puVar13 == uVar16) goto LAB_0332c4b8;
        uVar9 = 0;
        do {
          uVar14 = uVar9;
          if (uVar14 == 0x80000) goto LAB_0332c5b8;
          if (puVar13[uVar14 + 1] == 0) {
            puVar13 = (ushort *)0x0;
            goto LAB_0332c5b8;
          }
          if (puVar13[uVar14 + 1] == uVar16) {
            puVar13 = (ushort *)0x1;
            goto LAB_0332c5b8;
          }
          if (puVar13[uVar14 + 2] == 0) {
            puVar13 = (ushort *)0x0;
            uVar14 = uVar14 + 1;
            goto LAB_0332c5b8;
          }
          uVar9 = uVar14 + 2;
        } while (puVar13[uVar14 + 2] != uVar16);
        uVar14 = uVar14 | 1;
        puVar13 = (ushort *)0x1;
LAB_0332c5b8:
        uVar16 = (uint)(uVar14 < 0x80000) & (uint)puVar13;
        FUN_0328a0b0(lVar10,6,1,uVar16 ^ 1);
        if (uVar16 == 0) goto LAB_0332c5dc;
        goto LAB_0332c4cc;
      }
      FUN_0328a0b0(lVar10,6,1,1);
LAB_0332c5dc:
      uVar11 = 1;
LAB_0332c5f4:
      uVar7 = *(ushort *)(lVar10 + 0x250) & 0xfdff;
    }
    else {
      bVar5 = false;
      lVar18 = 0;
      do {
        lVar15 = lVar18 + 4;
        if (*(ushort *)((long)&DAT_0418d22a + lVar18) == uVar7 ||
            *(ushort *)((long)&DAT_0418d22c + lVar18) == uVar7) {
          bVar5 = true;
        }
        lVar18 = lVar15;
      } while (lVar15 != 0x52c);
      if (bVar5) goto LAB_0332c468;
LAB_0332c4b8:
      FUN_0328a0b0(lVar10,6,1,0);
LAB_0332c4cc:
      if (((*(ushort *)(lVar10 + 0x578) >> 5 & 1) != 0) &&
         ((*(ushort *)(lVar10 + 0x578) >> 4 & 1) != 0)) {
        uVar11 = 0;
        goto LAB_0332c5f4;
      }
      uVar11 = 0;
      uVar7 = *(ushort *)(lVar10 + 0x250) | 0x200;
    }
    *(ushort *)(lVar10 + 0x250) = uVar7;
  }
  local_e8 = (undefined *)CONCAT44(local_e8._4_4_,9);
  FUN_0328a2b0(lVar10,uVar11);
  lVar10 = FUN_0036ab80(local_100,"L_BtnMax_00");
  local_78 = *(undefined **)(*(long *)(lVar10 + 0xe8) + 0x18);
  local_e8 = puVar2 + 0x10;
  local_e0 = "T_00";
  local_88 = (undefined *)FUN_0328b6d0(&local_78,&local_e8,0);
  uVar7 = *(ushort *)((long)param_1 + 0x1852);
  if (uVar7 != 0) {
    lVar10 = *(long *)(lVar12 + 0x20);
    if ((*(uint *)(lVar10 + 0x106c) >> 8 & 1) != 0) {
      bVar5 = false;
      lVar17 = 0;
      do {
        lVar18 = lVar17 + 4;
        if (*(ushort *)((long)&DAT_0418d22a + lVar17) == uVar7 ||
            (uint)*(ushort *)((long)&DAT_0418d22c + lVar17) == (uint)uVar7) {
          bVar5 = true;
        }
        lVar17 = lVar18;
      } while (lVar18 != 0x52c);
      if (!bVar5) goto LAB_0332c6e8;
    }
    if (((*(uint *)(lVar10 + 0x106c) >> 7 & 1) == 0) ||
       ((uVar16 = uVar7 - 0x30, uVar16 < 0x2a &&
        ((1L << ((ulong)uVar16 & 0x3f) & 0x3ff7dfe03ffU) != 0)))) {
      (**(code **)(*(long *)(lVar10 + 0x1570) + 0x18))(lVar10 + 0x1570);
      puVar13 = *(ushort **)(lVar10 + 0x1578);
      if (*puVar13 == 0) {
LAB_0332c7dc:
        FUN_0332cc0c(&local_88,1);
        lVar10 = param_1[0x309];
        uVar7 = *(ushort *)((long)param_1 + 0x1852);
        lVar12 = *(long *)(lVar12 + 0x20);
        if ((*(uint *)(lVar12 + 0x106c) >> 8 & 1) == 0) {
LAB_0332c838:
          uVar16 = (uint)uVar7;
          if (((*(uint *)(lVar12 + 0x106c) >> 7 & 1) != 0) &&
             ((0x29 < uVar16 - 0x30 ||
              ((1L << ((ulong)(uVar16 - 0x30) & 0x3f) & 0x3ff7dfe03ffU) == 0)))) goto LAB_0332c888;
          (**(code **)(*(long *)(lVar12 + 0x1570) + 0x18))(lVar12 + 0x1570);
          puVar13 = *(ushort **)(lVar12 + 0x1578);
          if (*puVar13 != 0) {
            if (*puVar13 == uVar16) goto LAB_0332c888;
            uVar9 = 0;
            do {
              uVar14 = uVar9;
              if (uVar14 == 0x80000) goto LAB_0332c988;
              if (puVar13[uVar14 + 1] == 0) {
                puVar13 = (ushort *)0x0;
                goto LAB_0332c988;
              }
              if (puVar13[uVar14 + 1] == uVar16) {
                puVar13 = (ushort *)0x1;
                goto LAB_0332c988;
              }
              if (puVar13[uVar14 + 2] == 0) {
                puVar13 = (ushort *)0x0;
                uVar14 = uVar14 + 1;
                goto LAB_0332c988;
              }
              uVar9 = uVar14 + 2;
            } while (puVar13[uVar14 + 2] != uVar16);
            uVar14 = uVar14 | 1;
            puVar13 = (ushort *)0x1;
LAB_0332c988:
            uVar16 = (uint)(uVar14 < 0x80000) & (uint)puVar13;
            FUN_0328a0b0(lVar10,6,1,uVar16 ^ 1);
            if (uVar16 == 0) goto LAB_0332c9ac;
            goto LAB_0332c89c;
          }
          FUN_0328a0b0(lVar10,6,1,1);
LAB_0332c9ac:
          uVar11 = 1;
LAB_0332c9c4:
          uVar7 = *(ushort *)(lVar10 + 0x250) & 0xfdff;
        }
        else {
          bVar5 = false;
          lVar17 = 0;
          do {
            lVar18 = lVar17 + 4;
            if (*(ushort *)((long)&DAT_0418d22a + lVar17) == uVar7 ||
                *(ushort *)((long)&DAT_0418d22c + lVar17) == uVar7) {
              bVar5 = true;
            }
            lVar17 = lVar18;
          } while (lVar18 != 0x52c);
          if (bVar5) goto LAB_0332c838;
LAB_0332c888:
          FUN_0328a0b0(lVar10,6,1,0);
LAB_0332c89c:
          if (((*(ushort *)(lVar10 + 0x578) >> 5 & 1) != 0) &&
             ((*(ushort *)(lVar10 + 0x578) >> 4 & 1) != 0)) {
            uVar11 = 0;
            goto LAB_0332c9c4;
          }
          uVar11 = 0;
          uVar7 = *(ushort *)(lVar10 + 0x250) | 0x200;
        }
        *(ushort *)(lVar10 + 0x250) = uVar7;
        goto LAB_0332c9d4;
      }
      if (*puVar13 != uVar7) {
        uVar9 = 0;
        do {
          uVar14 = uVar9;
          if ((uVar14 == 0x80000) || (puVar13[uVar14 + 1] == 0)) goto LAB_0332c7dc;
          if (puVar13[uVar14 + 1] == uVar7) goto LAB_0332c7d4;
          if (puVar13[uVar14 + 2] == 0) goto LAB_0332c7dc;
          uVar9 = uVar14 + 2;
        } while (puVar13[uVar14 + 2] != uVar7);
        uVar14 = uVar14 + 1;
LAB_0332c7d4:
        if (0x7ffff < uVar14) goto LAB_0332c7dc;
      }
    }
  }
LAB_0332c6e8:
  local_e8 = puVar8 + 0x10;
  local_78 = (undefined *)((ulong)local_78 & 0xffffffffffff0000);
  local_e0 = (char *)&local_78;
  FUN_032d67f0(&local_88,&local_e8);
  lVar10 = param_1[0x309];
  FUN_0328a0b0(lVar10,6,1,0);
  if (((*(ushort *)(lVar10 + 0x578) >> 5 & 1) == 0) || ((*(ushort *)(lVar10 + 0x578) >> 4 & 1) == 0)
     ) {
    uVar7 = *(ushort *)(lVar10 + 0x250) | 0x200;
  }
  else {
    uVar7 = *(ushort *)(lVar10 + 0x250) & 0xfdff;
  }
  uVar11 = 0;
  *(ushort *)(lVar10 + 0x250) = uVar7;
LAB_0332c9d4:
  local_e8 = (undefined *)CONCAT44(local_e8._4_4_,9);
  FUN_0328a2b0(lVar10,uVar11);
  (**(code **)(*param_1 + 0x188))(param_1);
  FUN_03322410(param_1);
  return;
}

