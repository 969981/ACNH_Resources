
int FUN_02203cc0(void)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  byte *pbVar12;
  uint *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *local_88;
  char *local_80;
  uint *local_78;
  byte local_6c [4];
  uint local_68;
  undefined4 local_64;
  
  lVar14 = *(long *)PTR_DAT_04bb39b0;
  pbVar12 = PTR_DAT_04bb32e0;
  if (lVar14 == 0) {
LAB_02203d40:
    if (7 < *pbVar12) {
LAB_02203d4c:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar14 = **(long **)PTR_DAT_04bb27d0;
        bVar4 = *(byte *)(lVar14 + 0x473);
        pbVar12 = PTR_DAT_04bb5038;
        if ((long)(char)bVar4 != 0xffffffffffffffff) {
          puVar13 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
          if (7 < bVar4) {
            puVar13 = (uint *)(lVar14 + 0x48);
          }
          if ((*puVar13 & 8) != 0) {
            pbVar12 = (byte *)(lVar14 + 0x471);
          }
        }
        local_6c[0] = *pbVar12;
        if (local_6c[0] < 8) goto LAB_02203dd4;
      }
      pbVar12 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar14 + 0x15c) != 0) {
      pbVar12 = (byte *)(lVar14 + 0x158);
    }
    if (7 < *pbVar12) {
      if ((*(int *)(lVar14 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar12 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_02203d40;
      }
      goto LAB_02203d4c;
    }
  }
  local_6c[0] = *pbVar12;
  if (7 < local_6c[0]) {
    return -1;
  }
LAB_02203dd4:
  local_64 = CONCAT31(local_64._1_3_,local_6c[0]);
  lVar14 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_64,1);
  if (lVar14 == 0) {
    uVar8 = 0;
  }
  else {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_80 = "UpgradePocket40";
    local_88 = puVar1;
    iVar7 = FUN_0274b8d0(lVar14,&local_88);
    if (iVar7 == 0) {
      local_80 = "UpgradePocket30";
      local_88 = puVar1;
      iVar7 = FUN_0274b8d0(lVar14,&local_88);
      uVar8 = (uint)(iVar7 != 0);
    }
    else {
      uVar8 = 2;
    }
  }
  puVar6 = PTR_DAT_04bc00c8;
  puVar5 = PTR_DAT_04bb43c0;
  local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar8);
  lVar14 = 0;
  iVar7 = 0;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  lVar15 = 0x1e;
  if (uVar8 != 1) {
    lVar15 = 0x14;
  }
  lVar2 = 0x28;
  if (uVar8 != 2) {
    lVar2 = lVar15;
  }
  do {
    puVar10 = (undefined8 *)FUN_02677ea0(local_6c,lVar14);
    lVar15 = *(long *)puVar5;
    uVar8 = FUN_0277d6c4();
    lVar16 = *(long *)puVar5;
    if (lVar16 != 0) {
      lVar15 = *(long *)(lVar15 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar15 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
        local_80 = (char *)*puVar10;
        local_78 = (uint *)0x0;
        local_88 = puVar1;
        uVar8 = FUN_0277d6c4(&local_80);
        if (*(long *)puVar5 == 0) {
LAB_02203fe0:
          if (local_78 != (uint *)0x0) goto LAB_02203ff0;
          local_68 = 0xbc;
        }
        else {
          lVar15 = *(long *)(lVar16 + 0x57e58);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if ((*(uint *)(lVar15 + 0x1d8) <= uVar8) ||
             (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_02203fe0;
          lVar15 = *(long *)PTR_DAT_04bc0428;
          uVar8 = FUN_0277d6c4(puVar10);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if ((*(uint *)(lVar15 + 0x1d8) <= uVar8) ||
             (puVar13 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8),
             puVar13 == (uint *)0x0)) goto LAB_02203fe0;
          local_78 = puVar13;
LAB_02203ff0:
          uVar8 = *local_78;
          local_68 = 0;
          if ((uVar8 != 0) && (local_78 != (uint *)(ulong)uVar8)) {
            puVar13 = (uint *)((long)local_78 - (long)(ulong)uVar8);
            local_68 = 0;
            if (*puVar13 != 0) {
              uVar8 = puVar13[1];
              if ((uVar8 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
                lVar15 = 0xc;
                if (*(char *)((long)puVar13 + 10) != '\0') {
                  lVar15 = 0x1c;
                }
                lVar15 = (long)puVar13 + lVar15 + (ulong)(ushort)puVar13[2] * 8;
                if (lVar15 != 0) {
                  uVar3 = 0;
                  if ((ulong)uVar8 != 0) {
                    uVar3 = (uint)((ulong)((long)local_78 - lVar15) / (ulong)uVar8);
                  }
                  if (*puVar13 <= uVar3) {
                    uVar3 = 0xffffffff;
                  }
                  if ((uVar3 < *(uint *)puVar6) &&
                     (local_68 = (uint)*(ushort *)(*(long *)(puVar6 + 8) + (long)(int)uVar3 * 2),
                     local_68 < 0xbd)) goto LAB_0220407c;
                }
              }
              local_68 = 0;
            }
          }
        }
LAB_0220407c:
        local_64 = 0x97;
        if (local_68 == 0x97) {
          uVar11 = FUN_01af0020(&local_88);
          if ((uVar11 & 1) == 0) {
            iVar7 = iVar7 + 1;
          }
          else {
            iVar9 = FUN_01af02d0(&local_88);
            iVar7 = iVar9 + iVar7;
          }
        }
      }
    }
    lVar14 = lVar14 + 1;
    if (lVar2 == lVar14) {
      return iVar7;
    }
  } while( true );
}

