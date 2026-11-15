
void FUN_02112d9c(long param_1,long param_2,uint param_3)

{
  ushort *puVar1;
  uint uVar2;
  ushort *puVar3;
  uint *puVar4;
  byte *pbVar5;
  byte bVar6;
  ushort uVar7;
  byte bVar8;
  bool bVar9;
  uint3 uVar10;
  undefined *puVar11;
  bool bVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  long *plVar16;
  byte *pbVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ushort uVar21;
  undefined8 local_40;
  uint local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  bVar6 = *(byte *)(param_2 + 7);
  if ((bVar6 & 0x30) == 0x20) {
    return;
  }
  plVar16 = *(long **)PTR_DAT_04bb27d0;
  uVar13 = *(undefined8 *)PTR_DAT_04bb4760;
  bVar8 = *(byte *)(*plVar16 + 0x473);
  if ((long)(char)bVar8 != 0xffffffffffffffff) {
    pbVar17 = (byte *)(*plVar16 + 0x48);
    uVar18 = (long)(char)bVar8 & 0xffffffff;
    pbVar5 = pbVar17 + uVar18 * 0x80;
    if (7 < bVar8) {
      pbVar5 = pbVar17;
    }
    if ((*pbVar5 >> 3 & 1) != 0) {
      lVar15 = plVar16[2] + 0x108 + uVar18 * 0xc;
      if (0xb < bVar8) {
        lVar15 = plVar16[2] + 0x108;
      }
      bVar12 = *(char *)(lVar15 + 10) != '\0';
      goto LAB_02112e44;
    }
  }
  bVar12 = true;
LAB_02112e44:
  if (1 < *(uint *)(plVar16 + 0x10)) {
    uVar7 = (ushort)*(byte *)(param_2 + 4) | (*(byte *)(param_2 + 5) & 3) << 8;
    if (0x1ff < uVar7) {
      uVar7 = uVar7 | 0xfc00;
    }
    bVar9 = false;
    if ((bVar6 & 0xc) != 0 || uVar7 == *(ushort *)PTR_DAT_04bb6298) {
      bVar9 = bVar12;
    }
    if (!bVar9) {
      uVar14 = (uint)(((uint5)CONCAT11(*(byte *)(param_2 + 8),bVar6) << 0x18) >> 0x1e) + 1;
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) & 0xc0 | (byte)(uVar14 >> 2) & 0x3f;
      *(byte *)(param_2 + 7) = bVar6 & 0xf | (char)uVar14 * '@' | 0x10;
      FUN_020ea498(uVar13,param_3,0,0);
      puVar11 = PTR_DAT_04bb27d0;
      plVar16 = *(long **)PTR_DAT_04bb27d0;
      local_38 = 0;
      local_32 = 0;
      local_40._0_2_ = (ushort)(byte)((byte)(param_3 << 5) | 2);
      local_40._0_3_ = CONCAT12(*(byte *)(param_2 + 5) >> 5,(ushort)local_40) & 0x1ffff;
      uVar10 = (uint3)local_40 >> 0x10;
      local_40._0_2_ =
           CONCAT11((*(byte *)(param_2 + 5) & 0xfc) << 3 | (byte)(param_3 >> 3) & 0x1f,
                    (undefined1)local_40);
      local_40 = (ulong)CONCAT12((char)uVar10,(ushort)local_40);
      local_34 = 0xff00;
      if (-1 < *(int *)(param_1 + 8)) {
        FUN_01db1df0(*plVar16 + 0x480,*(int *)(param_1 + 8),&local_38,&local_40,8,0);
      }
      lVar15 = *plVar16;
      bVar6 = *(byte *)(lVar15 + 0x473);
      if ((long)(char)bVar6 != 0xffffffffffffffff) {
        pbVar17 = (byte *)(lVar15 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x80;
        if (7 < bVar6) {
          pbVar17 = (byte *)(lVar15 + 0x48);
        }
        if (((*pbVar17 >> 3 & 1) != 0) && (*(byte *)(lVar15 + 0x472) != bVar6)) {
          return;
        }
      }
      if (DAT_053ec470 != 0) {
        puVar1 = (ushort *)(DAT_053ec470 + 0x30);
        uVar14 = 0;
        lVar15 = 0x48;
        local_38 = (ushort)local_40 >> 5 & 0xff;
        uVar18 = (ulong)local_38;
        puVar3 = puVar1 + uVar18;
        if (0x6c < local_38) {
          uVar18 = 0;
          puVar3 = puVar1;
        }
        plVar16 = *(long **)puVar11;
        uVar7 = *puVar3;
        *puVar3 = (ushort)(uVar7 | 1);
        do {
          uVar2 = uVar14 & 0xff;
          if ((uVar2 < 8) && ((1 << (ulong)(uVar14 & 0x1f) & (uVar7 | 1)) == 0)) {
            lVar20 = *plVar16;
            bVar6 = *(byte *)(lVar20 + 0x473);
            if ((long)(char)bVar6 == 0xffffffffffffffff) {
              if (DAT_0537bdbc == uVar2) {
                return;
              }
            }
            else {
              puVar4 = (uint *)(lVar20 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
              if (7 < bVar6) {
                puVar4 = (uint *)(lVar20 + 0x48);
              }
              pbVar17 = &DAT_0537bdbc;
              if ((*puVar4 & 8) != 0) {
                pbVar17 = (byte *)(lVar20 + 0x473);
              }
              if (*pbVar17 == uVar2) {
                return;
              }
              if (((*puVar4 >> 3 & 1) != 0) && ((*(byte *)(lVar20 + lVar15) >> 3 & 1) != 0)) {
                return;
              }
            }
          }
          lVar15 = lVar15 + 0x80;
          uVar14 = uVar14 + 1;
        } while (lVar15 != 0x648);
        puVar1[uVar18] = 0;
        lVar15 = DAT_053e5c10;
        if (DAT_053e5c10 != 0) {
          plVar16 = *(long **)puVar11;
          uVar7 = (ushort)local_40 >> 5;
          uVar21 = uVar7 & 0xff;
          FUN_020ea330(DAT_053e5c10,uVar21,0);
          local_38 = uVar7 & 0xff;
          lVar19 = *plVar16;
          bVar6 = *(byte *)(lVar19 + 0x473);
          lVar20 = lVar15 + (ulong)local_38 * 0x15;
          if (0x6c < local_38) {
            lVar20 = lVar15;
          }
          pbVar17 = &DAT_0537bdbc;
          if ((long)(char)bVar6 != 0xffffffffffffffff) {
            puVar4 = (uint *)(lVar19 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
            if (7 < bVar6) {
              puVar4 = (uint *)(lVar19 + 0x48);
            }
            pbVar17 = &DAT_0537bdbc;
            if ((*puVar4 & 8) != 0) {
              pbVar17 = (byte *)(lVar19 + 0x473);
            }
          }
          if ((ushort)*pbVar17 == (*(ushort *)(lVar20 + 5) >> 2 & 0xff)) {
            *(byte *)(lVar20 + 7) = *(byte *)(lVar20 + 7) & 0xcf;
            FUN_020ea498(lVar15,uVar21,0,0);
          }
        }
      }
      return;
    }
  }
  uVar14 = (uint)(((uint5)CONCAT11(*(byte *)(param_2 + 8),bVar6) << 0x18) >> 0x1e) + 1;
  *(byte *)(param_2 + 7) = bVar6 & 0x3f | (char)uVar14 * '@';
  puVar11 = PTR_DAT_04bb5018;
  *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) & 0xc0 | (byte)(uVar14 >> 2) & 0x3f;
  bVar6 = *puVar11;
  *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) & 3 | bVar6 << 2;
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfc | bVar6 >> 6;
  FUN_020ea498(uVar13,param_3,0,0);
  return;
}

