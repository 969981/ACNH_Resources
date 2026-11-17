
void FUN_030a1088(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  short *psVar15;
  int iVar16;
  long lVar17;
  undefined8 uVar18;
  undefined *local_188;
  short local_180;
  undefined1 local_17e;
  undefined1 local_17d;
  undefined4 local_17c;
  long local_178;
  byte local_16c [4];
  undefined4 local_168;
  undefined4 local_164;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined2 local_d0;
  undefined *local_c8;
  char *pcStack_c0;
  int local_a4;
  undefined *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  long local_78;
  byte local_6c [12];
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar17 = *(long *)(*(long *)(param_1 + 0x220) + 0x590);
  if (((lVar17 == 0) || (lVar13 = *(long *)(lVar17 + 0x220), lVar13 == 0)) ||
     (*(int *)(lVar13 + 0x10) == 0 || *(int *)(lVar13 + 0x10) <= *(int *)(lVar17 + 0x440))) {
    psVar15 = (short *)PTR_DAT_04bb37e0;
  }
  else {
    psVar15 = *(short **)(*(long *)(lVar13 + 0x18) + (long)*(int *)(lVar17 + 0x440) * 8);
  }
  sVar4 = *psVar15;
  sVar7 = psVar15[1];
  uVar3 = *(undefined1 *)((long)psVar15 + 3);
  local_168 = *(undefined4 *)psVar15;
  uVar11 = *(undefined4 *)(psVar15 + 2);
  if (sVar4 != -2) {
    lVar17 = *(long *)PTR_DAT_04bb43c0;
    local_164 = uVar11;
    uVar9 = FUN_0277d6c4(&local_168);
    puVar8 = PTR_DAT_04bc0510;
    lVar13 = *(long *)puVar2;
    if (lVar13 != 0) {
      lVar17 = *(long *)(lVar17 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
      if ((uVar9 < *(uint *)(lVar17 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
        local_16c[0] = *(byte *)(param_1 + 0x1f8);
        if (7 < local_16c[0]) {
          local_16c[0] = 0xff;
        }
        local_178 = 0;
        puVar1 = PTR_DAT_04bc0510 + 0x10;
        local_188 = puVar1;
        local_180 = sVar4;
        local_17e = (char)sVar7;
        local_17d = uVar3;
        local_17c = uVar11;
        uVar9 = FUN_0277d6c4(&local_180);
        if (*(long *)puVar2 != 0) {
          lVar17 = *(long *)(lVar13 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar17 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
            lVar17 = *(long *)PTR_DAT_04bc0428;
            uVar9 = FUN_0277d6c4(&local_168);
            uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
            if ((uVar9 < *(uint *)(lVar17 + 0x1d8)) &&
               (lVar17 = *(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar9 * 8), lVar17 != 0))
            {
              local_178 = lVar17;
            }
          }
        }
        iVar10 = FUN_01aed730(&local_188);
        uVar14 = (ulong)(long)(iVar10 * 0x5a) / 100;
        iVar12 = (int)uVar14;
        iVar16 = (int)((uVar14 & 0xffffffff) / 100);
        iVar6 = iVar16 * 100;
        iVar5 = (iVar12 / 10) * 10;
        iVar10 = iVar6 + 100;
        if ((uint)(iVar12 + iVar16 * -100) < 0x32) {
          iVar10 = iVar6;
        }
        iVar6 = iVar5 + 10;
        if (iVar12 % 10 < 5) {
          iVar6 = iVar5;
        }
        if (iVar12 < 1000) {
          iVar10 = iVar6;
        }
        FUN_02680cb0(local_16c,iVar10);
        lVar17 = *(long *)PTR_DAT_04bb32e8;
        local_160 = (undefined *)CONCAT44(local_160._4_4_,*(undefined4 *)(lVar17 + 0x4060));
        nn::time::IsValidDate
                  ((uint)*(ushort *)(lVar17 + 0x4060),(uint)*(byte *)(lVar17 + 0x4062),
                   (uint)*(byte *)(lVar17 + 0x4063));
        FUN_01b4a680(&local_168,&local_160,local_16c);
        lVar17 = *(long *)puVar2;
        local_78 = 0;
        local_80 = local_168;
        uStack_7c = local_164;
        local_88 = puVar1;
        uVar9 = FUN_0277d6c4(&local_80);
        if (*(long *)puVar2 != 0) {
          lVar17 = *(long *)(lVar17 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar17 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
            lVar17 = *(long *)PTR_DAT_04bc0428;
            uVar9 = FUN_0277d6c4(&local_168);
            uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
            if ((uVar9 < *(uint *)(lVar17 + 0x1d8)) &&
               (lVar17 = *(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar9 * 8), lVar17 != 0))
            {
              local_78 = lVar17;
            }
          }
        }
        FUN_025d6bd4(&local_c8,(byte *)(param_1 + 0x1f8));
        local_160 = (undefined *)0x0;
        local_158 = 0;
        FUN_00bdc3cc(&local_150);
        local_d0 = 0;
        local_160 = (undefined *)CONCAT44(local_160._4_4_,0x10);
        local_150 = CONCAT44(local_164,local_168);
        iVar10 = FUN_01aed730(&local_88);
        uVar14 = (ulong)(long)(iVar10 * 0x5a) / 100;
        iVar10 = (int)uVar14;
        if (iVar10 < 1000) {
          iVar6 = (iVar10 / 10) * 10;
          iVar5 = iVar6 + 10;
          if (iVar10 % 10 < 5) {
            iVar5 = iVar6;
          }
        }
        else {
          iVar12 = (int)((uVar14 & 0xffffffff) / 100);
          iVar6 = iVar12 * 100;
          iVar5 = iVar6 + 100;
          if ((uint)(iVar10 + iVar12 * -100) < 0x32) {
            iVar5 = iVar6;
          }
        }
        local_158 = CONCAT44(1,(undefined4)local_158);
        local_160._4_4_ = iVar5;
        FUN_025d74cc(&local_c8,&local_160);
        local_c8 = PTR_DAT_04bc3410 + 0x10;
        iVar10 = FUN_025d79cc(&local_c8);
        if (((iVar10 == -1) ||
            (local_160._0_4_ = (**(code **)(local_c8 + 0x20))(&local_c8), 0xc < (int)local_160)) &&
           (local_a4 == 0)) {
          local_a4 = 1;
        }
        FUN_02601530(&local_c8);
        local_6c[0] = *(byte *)(param_1 + 0x1f8);
        local_160 = puVar8 + 0x10;
        lVar17 = *(long *)puVar2;
        local_150 = 0;
        if (7 < local_6c[0]) {
          local_6c[0] = 0xff;
        }
        local_158 = CONCAT44(local_164,local_168);
        uVar9 = FUN_0277d6c4(&local_158);
        if (*(long *)puVar2 != 0) {
          lVar17 = *(long *)(lVar17 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar17 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
            lVar17 = *(long *)PTR_DAT_04bc0428;
            uVar9 = FUN_0277d6c4(&local_168);
            uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
            if ((uVar9 < *(uint *)(lVar17 + 0x1d8)) &&
               (lVar17 = *(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar9 * 8), lVar17 != 0))
            {
              local_150 = lVar17;
            }
          }
        }
        iVar10 = FUN_01aed730(&local_160);
        uVar14 = (ulong)(long)(iVar10 * 0x5a) / 100;
        iVar10 = (int)uVar14;
        if (iVar10 < 1000) {
          iVar6 = (iVar10 / 10) * 10;
          iVar5 = iVar6 + 10;
          if (iVar10 % 10 < 5) {
            iVar5 = iVar6;
          }
        }
        else {
          iVar12 = (int)((uVar14 & 0xffffffff) / 100);
          iVar6 = iVar12 * 100;
          iVar5 = iVar6 + 100;
          if ((uint)(iVar10 + iVar12 * -100) < 0x32) {
            iVar5 = iVar6;
          }
        }
        FUN_01b67430(8,iVar5,local_6c);
        puVar8 = PTR_DAT_04bb49a0;
        puVar2 = PTR_DAT_04bb2020 + 0x10;
        pcStack_c0 = "PE_Wherearen_Catalog_New";
        uVar18 = *(undefined8 *)PTR_DAT_04bb49a0;
        local_c8 = puVar2;
        uVar11 = FUN_006bd550("PE_Wherearen_Catalog_New",0);
        local_88._0_4_ = uVar11;
        uVar18 = FUN_01b5b4b0(uVar18,&local_88);
        FUN_01b5e0b0(&local_c8,&local_168,uVar18,local_6c,0);
        uVar18 = *(undefined8 *)puVar8;
        pcStack_c0 = "PE_Wherearen_Catalog_HighPrice";
        local_c8 = puVar2;
        uVar11 = FUN_006bd550("PE_Wherearen_Catalog_HighPrice",0);
        local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar11);
        uVar18 = FUN_01b5b4b0(uVar18,&local_88);
        FUN_01b5e0b0(&local_c8,&local_168,uVar18,local_6c,0);
      }
    }
  }
  return;
}

