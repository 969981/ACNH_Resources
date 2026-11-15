
void FUN_02208760(undefined4 *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  undefined4 uVar5;
  byte bVar6;
  short sVar7;
  short sVar8;
  undefined *puVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  short *psVar13;
  uint *puVar14;
  bool bVar15;
  uint *puVar16;
  ulong uVar17;
  long lVar18;
  byte bVar19;
  undefined4 local_88;
  undefined4 local_84;
  undefined *local_80;
  undefined8 local_78;
  uint *local_70;
  uint local_64;
  
  if ((*(long *)PTR_DAT_04bb46b0 != 0) &&
     (lVar12 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,*param_1), lVar12 != 0)) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_78 = "UpgradePocket40";
    local_80 = puVar1;
    iVar10 = FUN_0274b8d0(lVar12,&local_80);
    if (iVar10 == 0) {
      local_78 = "UpgradePocket30";
      local_80 = puVar1;
      iVar10 = FUN_0274b8d0(lVar12,&local_80);
      uVar11 = (uint)(iVar10 != 0);
    }
    else {
      uVar11 = 2;
    }
    puVar9 = PTR_DAT_04bb43c0;
    local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar11);
    uVar17 = 0;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    uVar2 = 0x1e;
    if (uVar11 != 1) {
      uVar2 = 0x14;
    }
    uVar3 = 0x28;
    if (uVar11 != 2) {
      uVar3 = uVar2;
    }
    do {
      psVar13 = (short *)FUN_026759e0(lVar12,uVar17);
      if ((*psVar13 != -2) && (iVar10 = FUN_0277d6c4(), iVar10 == 0x362d)) {
        lVar18 = *(long *)puVar9;
        sVar7 = *psVar13;
        sVar8 = psVar13[1];
        bVar6 = *(byte *)((long)psVar13 + 3);
        uVar5 = *(undefined4 *)(psVar13 + 2);
        local_78 = *(char **)psVar13;
        local_70 = (uint *)0x0;
        local_80 = puVar1;
        uVar11 = FUN_0277d6c4(&local_78);
        if (*(long *)puVar9 == 0) {
LAB_02208a10:
          puVar14 = (uint *)0x0;
          bVar15 = true;
          local_64 = 0xbc;
        }
        else {
          lVar18 = *(long *)(lVar18 + 0x57e58);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
          if ((*(uint *)(lVar18 + 0x1d8) <= uVar11) ||
             (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar11 * 8) == 0)) goto LAB_02208a10;
          lVar18 = *(long *)PTR_DAT_04bc0428;
          uVar11 = FUN_0277d6c4(psVar13);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
          if ((*(uint *)(lVar18 + 0x1d8) <= uVar11) ||
             (puVar14 = *(uint **)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar11 * 8),
             puVar14 == (uint *)0x0)) goto LAB_02208a10;
          local_64 = 0;
          uVar11 = *puVar14;
          local_70 = puVar14;
          if ((uVar11 == 0) || (puVar14 == (uint *)(ulong)uVar11)) {
LAB_02208b04:
            bVar15 = false;
          }
          else {
            puVar16 = (uint *)((long)puVar14 - (long)(ulong)uVar11);
            local_64 = 0;
            if (*puVar16 == 0) goto LAB_02208b04;
            uVar11 = puVar16[1];
            if ((uVar11 == 0) || ((ulong)(ushort)puVar16[2] == 0)) {
LAB_02208b00:
              local_64 = 0;
              goto LAB_02208b04;
            }
            lVar18 = 0xc;
            if (*(char *)((long)puVar16 + 10) != '\0') {
              lVar18 = 0x1c;
            }
            lVar18 = (long)puVar16 + lVar18 + (ulong)(ushort)puVar16[2] * 8;
            if (lVar18 == 0) goto LAB_02208b00;
            uVar4 = 0;
            if ((ulong)uVar11 != 0) {
              uVar4 = (uint)((ulong)((long)puVar14 - lVar18) / (ulong)uVar11);
            }
            if (*puVar16 <= uVar4) {
              uVar4 = 0xffffffff;
            }
            if (*(uint *)PTR_DAT_04bc00c8 <= uVar4) goto LAB_02208b00;
            local_64 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar4 * 2);
            if (local_64 < 0xbd) goto LAB_02208b04;
            bVar15 = false;
            local_64 = 0;
          }
        }
        local_88 = 0x8e;
        if ((local_64 == 0x8e) && ((bVar6 >> 3) - 1 < 10)) {
          local_64 = 0xbc;
          if (!bVar15) {
            uVar11 = *puVar14;
            local_64 = 0;
            if ((uVar11 != 0) && (puVar14 != (uint *)(ulong)uVar11)) {
              puVar16 = (uint *)((long)puVar14 - (long)(ulong)uVar11);
              local_64 = 0;
              if (*puVar16 != 0) {
                uVar11 = puVar16[1];
                if ((uVar11 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
                  lVar18 = 0xc;
                  if (*(char *)((long)puVar16 + 10) != '\0') {
                    lVar18 = 0x1c;
                  }
                  lVar18 = (long)puVar16 + lVar18 + (ulong)(ushort)puVar16[2] * 8;
                  if (lVar18 != 0) {
                    uVar4 = 0;
                    if ((ulong)uVar11 != 0) {
                      uVar4 = (uint)((ulong)((long)puVar14 - lVar18) / (ulong)uVar11);
                    }
                    if (*puVar16 <= uVar4) {
                      uVar4 = 0xffffffff;
                    }
                    if ((uVar4 < *(uint *)PTR_DAT_04bc00c8) &&
                       (local_64 = (uint)*(ushort *)
                                          (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar4 * 2),
                       local_64 < 0xbd)) goto LAB_02208ae0;
                  }
                }
                local_64 = 0;
              }
            }
          }
LAB_02208ae0:
          bVar19 = bVar6;
          if (local_64 == 0x8e) {
            bVar19 = bVar6 | 4;
            local_78 = (char *)(CONCAT44(local_78._4_4_,CONCAT13(bVar6,(undefined3)local_78)) |
                               0x4000000);
          }
          local_88 = CONCAT22(CONCAT11(bVar19,(char)sVar8),sVar7);
          local_84 = uVar5;
          FUN_02674a80(param_1,uVar17 & 0xffffffff,PTR_DAT_04bb37e0,1,0);
          FUN_02674a80(param_1,uVar17,&local_88,1,0);
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar3 != uVar17);
  }
  return;
}

