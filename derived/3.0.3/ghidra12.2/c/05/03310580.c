
void FUN_03310580(long *param_1)

{
  ushort *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  uint *puVar8;
  bool bVar9;
  char cVar10;
  ulong uVar11;
  undefined8 uVar12;
  ushort uVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  ushort *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  uint uVar24;
  long lVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined *local_170;
  undefined *puStack_168;
  undefined *local_160;
  undefined *puStack_158;
  undefined *local_150;
  undefined *puStack_148;
  undefined *local_140;
  undefined *puStack_138;
  undefined *local_130;
  undefined *puStack_128;
  undefined *local_120;
  undefined *puStack_118;
  undefined *local_110;
  uint *puStack_108;
  undefined4 local_100;
  undefined2 local_fc [31];
  undefined2 local_be;
  ushort local_b4 [2];
  undefined *local_b0;
  char *local_a8;
  undefined4 local_a0;
  char local_9c [15];
  undefined1 local_8d;
  undefined *local_88;
  char *pcStack_80;
  undefined8 local_78;
  uint local_6c [3];
  
  puVar6 = PTR_DAT_04bc8e68;
  lVar16 = *(long *)PTR_DAT_04bc1118;
  uVar24 = (int)param_1[0x37d] - 1;
  if (uVar24 < 4) {
    iVar15 = *(int *)(&DAT_04102740 + (long)(int)uVar24 * 4);
  }
  else {
    iVar15 = 0;
  }
  lVar22 = param_1[0x61];
  iVar14 = 1;
  if ((int)lVar22 != 0xf) {
    iVar14 = 2;
  }
  if (*(uint *)(param_1 + 0x37d) - 2 < 3) {
    uVar27 = 0x40400000;
  }
  else if (*(uint *)(param_1 + 0x37d) < 2) {
    uVar26 = 0x3f800000;
    if ((int)param_1[0x61] != 0xf) {
      uVar26 = 0;
    }
    uVar27 = 0x40000000;
    if ((int)param_1[0x61] != 0x10) {
      uVar27 = uVar26;
    }
  }
  else {
    uVar27 = 0;
  }
  local_88 = PTR_DAT_04bc8e68 + 0x10;
  pcStack_80 = "ChangeLine";
  FUN_032c8270(uVar27,param_1 + 0x335,&local_88,1);
  lVar21 = param_1[0x377];
  cVar10 = (char)param_1[0x37f];
  FUN_0328a0b0(lVar21,6,1,cVar10 == '\0');
  if ((cVar10 == '\0') ||
     (((*(ushort *)(lVar21 + 0x578) >> 5 & 1) != 0 && ((*(ushort *)(lVar21 + 0x578) >> 4 & 1) != 0))
     )) {
    uVar13 = *(ushort *)(lVar21 + 0x250) & 0xfdff;
  }
  else {
    uVar13 = *(ushort *)(lVar21 + 0x250) | 0x200;
  }
  local_110._0_4_ = 9;
  *(ushort *)(lVar21 + 0x250) = uVar13;
  if (cVar10 != '\0') {
    iVar15 = 4;
  }
  FUN_0328a2b0(lVar21,cVar10 == '\0');
  local_b0 = (undefined *)CONCAT44(local_b0._4_4_,iVar15);
  iVar7 = 0;
  if ((int)lVar22 != 0x10) {
    iVar7 = iVar14;
  }
  local_110 = (undefined *)CONCAT44(local_110._4_4_,iVar7);
  param_1[0x37e] = *(long *)(*(long *)(PTR_PTR_04bc9698 + (long)iVar7 * 8) + (long)iVar15 * 8);
  (**(code **)(*param_1 + 0x188))(param_1);
  FUN_03322410(param_1);
  lVar22 = *(long *)(param_1[0x5e] + 0xf0);
  puVar8 = (uint *)PTR_DAT_04bb2120;
  if (*(uint **)(PTR_PTR_04bb2238 + 8) != (uint *)0x0) {
    puVar8 = *(uint **)(PTR_PTR_04bb2238 + 8);
  }
  if ((char)*puVar8 != '\0') {
    local_110 = puVar6 + 0x10;
    puStack_108 = puVar8;
    lVar22 = FUN_032cb8e0(&local_b0,&local_110,lVar22);
    if (lVar22 == 0) {
      lVar22 = 0;
    }
    else {
      lVar22 = *(long *)(lVar22 + 0xe8);
    }
  }
  uVar23 = 0;
  puVar2 = PTR_DAT_04bb2ab0 + 0x10;
  puVar3 = PTR_DAT_04bb8610 + 0x10;
  puVar4 = PTR_DAT_04bc0840 + 0x10;
  do {
    if (param_1[uVar23 + 0x340] != 0) {
      local_8d = 0;
      local_a0 = 0x10;
      local_9c[0] = '\0';
      local_b0 = puVar2;
      local_a8 = local_9c;
      FUN_038d1270(&local_b0,"L_BtnNml_%02d",uVar23 & 0xffffffff);
      lVar21 = lVar22;
      if (*local_a8 != '\0') {
        lVar21 = FUN_0036ab80(lVar22);
        lVar21 = *(long *)(lVar21 + 0xe8);
      }
      local_78 = *(undefined8 *)(lVar21 + 0x18);
      puStack_108 = (uint *)&DAT_040c1e5f;
      local_110 = puVar6 + 0x10;
      local_78 = FUN_0328b6d0(&local_78,&local_110,0);
      uVar13 = *(ushort *)(param_1[0x37e] + uVar23 * 2);
      if (uVar13 == 0) {
        puStack_108 = local_6c;
        local_6c[0] = local_6c[0] & 0xffff0000;
        local_110 = puVar3;
        FUN_032d67f0(&local_78,&local_110);
        lVar21 = param_1[uVar23 + 0x340];
        if (lVar21 == 0) goto LAB_03310834;
        FUN_0328a0b0(lVar21,6,1,0);
        if (((*(ushort *)(lVar21 + 0x578) >> 5 & 1) == 0) ||
           ((*(ushort *)(lVar21 + 0x578) >> 4 & 1) == 0)) {
          uVar13 = *(ushort *)(lVar21 + 0x250) | 0x200;
        }
        else {
          uVar13 = *(ushort *)(lVar21 + 0x250) & 0xfdff;
        }
        local_110 = (undefined *)CONCAT44(local_110._4_4_,9);
        uVar12 = 0;
        *(ushort *)(lVar21 + 0x250) = uVar13;
      }
      else {
        local_100 = 0x20;
        local_b4[1] = 0;
        local_be = 0;
        local_fc[0] = 0;
        local_110 = puVar4;
        puStack_108 = (uint *)local_fc;
        local_b4[0] = uVar13;
        FUN_038d1340(&local_110,&DAT_04169b80,local_b4);
        FUN_032d67f0(&local_78,&local_110);
        lVar21 = param_1[uVar23 + 0x340];
        lVar25 = *(long *)(lVar16 + 0x20);
        uVar24 = (uint)uVar13;
        if ((*(uint *)(lVar25 + 0x106c) >> 8 & 1) == 0) {
LAB_0331094c:
          if (((*(uint *)(lVar25 + 0x106c) >> 7 & 1) != 0) &&
             ((0x29 < uVar24 - 0x30 ||
              ((1L << ((ulong)(uVar24 - 0x30) & 0x3f) & 0x3ff7dfe03ffU) == 0)))) goto LAB_0331099c;
          (**(code **)(*(long *)(lVar25 + 0x1570) + 0x18))(lVar25 + 0x1570);
          uVar18 = (uint)**(ushort **)(lVar25 + 0x1578);
          if (uVar18 != 0) {
            if (uVar18 == uVar24) goto LAB_0331099c;
            puVar19 = *(ushort **)(lVar25 + 0x1578) + 2;
            uVar11 = 0;
            do {
              uVar17 = uVar11;
              if (puVar19[-1] == 0) {
                puVar19 = (ushort *)0x0;
                goto LAB_03310b98;
              }
              if (puVar19[-1] == uVar24) {
                puVar19 = (ushort *)0x1;
                goto LAB_03310b98;
              }
              if (*puVar19 == 0) {
                puVar19 = (ushort *)0x0;
                uVar17 = uVar17 + 1;
                goto LAB_03310b98;
              }
              if (*puVar19 == uVar24) {
                uVar17 = uVar17 + 1;
                puVar19 = (ushort *)0x1;
                goto LAB_03310b98;
              }
              if (uVar17 == 0x7fffe) {
                uVar17 = uVar17 + 2;
                goto LAB_03310b98;
              }
              puVar1 = puVar19 + 1;
              if (*puVar1 == 0) {
                puVar19 = (ushort *)0x0;
                uVar17 = uVar17 + 2;
                goto LAB_03310b98;
              }
              puVar19 = puVar19 + 3;
              uVar11 = uVar17 + 3;
            } while (*puVar1 != uVar24);
            puVar19 = (ushort *)0x1;
            uVar17 = uVar17 + 2;
LAB_03310b98:
            uVar24 = (uint)(uVar17 < 0x80000) & (uint)puVar19;
            FUN_0328a0b0(lVar21,6,1,uVar24 ^ 1);
            if (uVar24 == 0) goto LAB_03310bbc;
            goto LAB_033109b0;
          }
          FUN_0328a0b0(lVar21,6,1,1);
LAB_03310bbc:
          uVar12 = 1;
LAB_03310820:
          uVar13 = *(ushort *)(lVar21 + 0x250) & 0xfdff;
        }
        else {
          bVar9 = false;
          lVar20 = 0;
          do {
            lVar5 = lVar20 + 4;
            if (*(ushort *)((long)&DAT_0418d22a + lVar20) == uVar24 ||
                *(ushort *)((long)&DAT_0418d22c + lVar20) == uVar24) {
              bVar9 = true;
            }
            lVar20 = lVar5;
          } while (lVar5 != 0x52c);
          if (bVar9) goto LAB_0331094c;
LAB_0331099c:
          FUN_0328a0b0(lVar21,6,1,0);
LAB_033109b0:
          if (((*(ushort *)(lVar21 + 0x578) >> 5 & 1) != 0) &&
             ((*(ushort *)(lVar21 + 0x578) >> 4 & 1) != 0)) {
            uVar12 = 0;
            goto LAB_03310820;
          }
          uVar12 = 0;
          uVar13 = *(ushort *)(lVar21 + 0x250) | 0x200;
        }
        local_6c[0] = 9;
        *(ushort *)(lVar21 + 0x250) = uVar13;
      }
      FUN_0328a2b0(lVar21,uVar12);
    }
LAB_03310834:
    uVar23 = uVar23 + 1;
    if (uVar23 == 0x37) {
      iVar15 = (int)param_1[0x37d];
      lVar16 = param_1[0x377];
      FUN_0328a0b0(lVar16,6,1,iVar15 != 3);
      puVar6 = PTR_DAT_04bc8e68;
      if ((iVar15 == 3) &&
         (((*(ushort *)(lVar16 + 0x578) >> 5 & 1) == 0 ||
          ((*(ushort *)(lVar16 + 0x578) >> 4 & 1) == 0)))) {
        uVar13 = *(ushort *)(lVar16 + 0x250) | 0x200;
      }
      else {
        uVar13 = *(ushort *)(lVar16 + 0x250) & 0xfdff;
      }
      local_110 = (undefined *)CONCAT44(local_110._4_4_,9);
      *(ushort *)(lVar16 + 0x250) = uVar13;
      FUN_0328a2b0(lVar16,iVar15 != 3);
      puVar6 = puVar6 + 0x10;
      puVar2 = PTR_DAT_04bc8e78 + 0x10;
      puStack_108 = (uint *)&DAT_040c1e5f;
      puStack_118 = &DAT_041696c6;
      local_b0 = *(undefined **)(*(long *)(param_1[0x378] + 0x20) + 0x18);
      local_120 = puVar2;
      local_110 = puVar6;
      local_110 = (undefined *)FUN_0328b6d0(&local_b0,&local_110,0);
      FUN_032d67f0(&local_110,&local_120);
      puStack_128 = &DAT_04169b24;
      puStack_108 = (uint *)&DAT_040c1e5f;
      local_b0 = *(undefined **)(*(long *)(param_1[0x379] + 0x20) + 0x18);
      local_130 = puVar2;
      local_110 = puVar6;
      local_110 = (undefined *)FUN_0328b6d0(&local_b0,&local_110,0);
      FUN_032d67f0(&local_110,&local_130);
      puStack_138 = &DAT_0416921c;
      puStack_108 = (uint *)&DAT_040c1e5f;
      local_b0 = *(undefined **)(*(long *)(param_1[0x37a] + 0x20) + 0x18);
      local_140 = puVar2;
      local_110 = puVar6;
      local_110 = (undefined *)FUN_0328b6d0(&local_b0,&local_110,0);
      FUN_032d67f0(&local_110,&local_140);
      puStack_148 = &DAT_041695d4;
      puStack_108 = (uint *)&DAT_040c1e5f;
      local_b0 = *(undefined **)(*(long *)(param_1[0x37b] + 0x20) + 0x18);
      local_150 = puVar2;
      local_110 = puVar6;
      local_110 = (undefined *)FUN_0328b6d0(&local_b0,&local_110,0);
      FUN_032d67f0(&local_110,&local_150);
      puStack_158 = &DAT_041696ec;
      puStack_108 = (uint *)&DAT_040c1e5f;
      local_b0 = *(undefined **)(*(long *)(param_1[0x37c] + 0x20) + 0x18);
      local_160 = puVar2;
      local_110 = puVar6;
      local_110 = (undefined *)FUN_0328b6d0(&local_b0,&local_110,0);
      FUN_032d67f0(&local_110,&local_160);
      puStack_168 = &DAT_041699f8;
      puStack_108 = (uint *)&DAT_040c1e5f;
      local_b0 = *(undefined **)(*(long *)(param_1[0x377] + 0x20) + 0x18);
      local_170 = puVar2;
      local_110 = puVar6;
      local_110 = (undefined *)FUN_0328b6d0(&local_b0,&local_110,0);
      FUN_032d67f0(&local_110,&local_170);
      FUN_033227f8(param_1);
      return;
    }
  } while( true );
}

