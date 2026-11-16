
int FUN_02803840(long param_1,byte *param_2)

{
  long lVar1;
  undefined *puVar2;
  short *psVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  short *psVar11;
  byte bVar12;
  long lVar13;
  long lVar14;
  int local_84;
  undefined *local_80;
  short local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  long local_70;
  byte local_64 [4];
  
  bVar12 = *param_2;
  if (7 < bVar12) {
    bVar12 = 0xff;
  }
  local_80 = (undefined *)CONCAT71(local_80._1_7_,bVar12);
  uVar7 = FUN_02669430(&local_80);
  puVar4 = PTR_DAT_04bb43c0;
  lVar1 = param_1 + 0xa4;
  lVar14 = param_1;
  if ((uVar7 & 1) == 0) {
    lVar14 = lVar1;
  }
  uVar10 = *(uint *)(lVar14 + 0xa0);
  if (0x13 < uVar10) {
    uVar10 = 0x14;
  }
  if (uVar10 == 0) {
    local_84 = 0;
  }
  else {
    local_84 = 0;
    lVar14 = 0;
    uVar7 = 0;
    puVar2 = PTR_DAT_04bc0510 + 0x10;
    do {
      bVar12 = *param_2;
      if (7 < bVar12) {
        bVar12 = 0xff;
      }
      local_80 = (undefined *)CONCAT71(local_80._1_7_,bVar12);
      uVar8 = FUN_02669430(&local_80);
      lVar9 = param_1;
      if ((uVar8 & 1) == 0) {
        lVar9 = lVar1;
      }
      uVar6 = *(uint *)(lVar9 + 0xa0);
      if (0x13 < uVar6) {
        uVar6 = 0x14;
      }
      if (uVar7 < uVar6) {
        psVar3 = (short *)(lVar9 + lVar14);
        lVar13 = *(long *)puVar4;
        if (*psVar3 == -2) {
          psVar11 = psVar3;
          lVar9 = lVar13;
        }
        else {
          uVar6 = FUN_0277d6c4(psVar3);
          lVar9 = *(long *)puVar4;
          psVar11 = (short *)PTR_DAT_04bb37e0;
          if (lVar9 != 0) {
            lVar13 = *(long *)(lVar13 + 0x57e58);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
            if (uVar6 < *(uint *)(lVar13 + 0x1d8)) {
              if (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) != 0) {
                psVar11 = psVar3;
              }
            }
          }
        }
      }
      else {
        psVar11 = (short *)PTR_DAT_04bb37e0;
        lVar9 = *(long *)puVar4;
      }
      uVar6 = FUN_0277d6c4(psVar11);
      if (*(long *)puVar4 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          local_64[0] = *param_2;
          if (7 < local_64[0]) {
            local_64[0] = 0xff;
          }
          uVar8 = FUN_02669430(local_64);
          lVar9 = param_1;
          if ((uVar8 & 1) == 0) {
            lVar9 = lVar1;
          }
          uVar6 = *(uint *)(lVar9 + 0xa0);
          if (0x13 < uVar6) {
            uVar6 = 0x14;
          }
          if (uVar7 < uVar6) {
            psVar3 = (short *)(lVar9 + lVar14);
            lVar13 = *(long *)puVar4;
            if (*psVar3 == -2) {
              psVar11 = psVar3;
              lVar9 = lVar13;
            }
            else {
              uVar6 = FUN_0277d6c4(psVar3);
              lVar9 = *(long *)puVar4;
              psVar11 = (short *)PTR_DAT_04bb37e0;
              if (lVar9 != 0) {
                lVar13 = *(long *)(lVar13 + 0x57e58);
                uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
                if (uVar6 < *(uint *)(lVar13 + 0x1d8)) {
                  if (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) != 0) {
                    psVar11 = psVar3;
                  }
                }
              }
            }
          }
          else {
            psVar11 = (short *)PTR_DAT_04bb37e0;
            lVar9 = *(long *)puVar4;
          }
          local_78 = *psVar11;
          local_76 = (undefined1)psVar11[1];
          local_75 = *(undefined1 *)((long)psVar11 + 3);
          local_74 = *(undefined4 *)(psVar11 + 2);
          local_70 = 0;
          local_80 = puVar2;
          uVar6 = FUN_0277d6c4(&local_78);
          if (*(long *)puVar4 != 0) {
            lVar9 = *(long *)(lVar9 + 0x57e58);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
            if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
              lVar9 = *(long *)PTR_DAT_04bc0428;
              uVar6 = FUN_0277d6c4(psVar11);
              uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
              if (uVar6 < *(uint *)(lVar9 + 0x1d8)) {
                lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8);
                if (lVar9 != 0) {
                  local_70 = lVar9;
                }
              }
            }
          }
          iVar5 = FUN_01af0770(&local_80,0,0);
          local_84 = iVar5 + local_84;
        }
      }
      lVar14 = lVar14 + 8;
      uVar7 = uVar7 + 1;
    } while ((ulong)uVar10 * 8 != lVar14);
  }
  return local_84;
}

