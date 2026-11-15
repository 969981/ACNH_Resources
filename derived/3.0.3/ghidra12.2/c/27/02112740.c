
void FUN_02112740(ushort *param_1,ushort *param_2,byte *param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  ushort uVar4;
  byte bVar5;
  uint uVar6;
  ushort uVar7;
  byte bVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  byte *pbVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  ulong local_50;
  uint local_48;
  undefined2 local_44;
  undefined1 local_42;
  
  puVar9 = PTR_DAT_04bb27d0;
  lVar12 = 0;
  lVar15 = 0x48;
  uVar7 = *param_2;
  uVar4 = *param_1;
  plVar17 = *(long **)PTR_DAT_04bb27d0;
  uVar1 = uVar7 >> 5 & 0xff;
  uVar6 = 1 << (ulong)(*param_3 & 0x1f);
  *param_1 = uVar4 | (ushort)uVar6;
  lVar11 = DAT_053ec470;
  lVar10 = DAT_053e5c10;
  do {
    uVar2 = (uint)lVar12 & 0xff;
    if ((uVar2 < 8) && ((1 << (ulong)((uint)lVar12 & 0x1f) & ((uint)uVar4 | uVar6 & 0xffff)) == 0))
    {
      lVar16 = *plVar17;
      bVar5 = *(byte *)(lVar16 + 0x473);
      if ((long)(char)bVar5 == 0xffffffffffffffff) {
        if (DAT_0537bdbc == uVar2) {
          return;
        }
      }
      else {
        puVar3 = (uint *)(lVar16 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
        if (7 < bVar5) {
          puVar3 = (uint *)(lVar16 + 0x48);
        }
        pbVar14 = &DAT_0537bdbc;
        if ((*puVar3 & 8) != 0) {
          pbVar14 = (byte *)(lVar16 + 0x473);
        }
        if (*pbVar14 == uVar2) {
          return;
        }
        if (((*puVar3 >> 3 & 1) != 0) && ((*(byte *)(lVar16 + lVar15) >> 3 & 1) != 0)) {
          return;
        }
      }
    }
    lVar12 = lVar12 + 1;
    lVar15 = lVar15 + 0x80;
    if (lVar12 == 0xc) {
      if (DAT_053e5c10 != 0) {
        FUN_020ea330(DAT_053e5c10,uVar1,0);
        bVar5 = DAT_0537bdb8;
        lVar12 = lVar10 + (ulong)uVar1 * 0x15;
        if (0x6c < uVar1) {
          lVar12 = lVar10;
        }
        uVar6 = (*(ushort *)(lVar12 + 7) >> 6) + 1;
        bVar8 = DAT_0537bdb8 << 2;
        *(byte *)(lVar12 + 8) = *(byte *)(lVar12 + 8) & 0xc0 | (byte)(uVar6 >> 2) & 0x3f;
        *(byte *)(lVar12 + 5) = *(byte *)(lVar12 + 5) & 3 | bVar8;
        bVar8 = bVar5 >> 6;
        *(byte *)(lVar12 + 6) = bVar8 | bVar5 << 2;
        *(byte *)(lVar12 + 7) = *(byte *)(lVar12 + 7) & 0xc | (char)uVar6 * '@' | bVar8;
        local_48 = uVar1;
        FUN_020ea498(lVar10,uVar1,0,0);
        *param_1 = 0;
        uVar13 = (ulong)uVar1;
        if (0x6c < uVar1) {
          uVar13 = 0;
        }
        *(byte *)(lVar10 + uVar13 + 0x1a00) = *(byte *)(lVar10 + uVar13 + 0x1a00) & 0xfe;
        lVar12 = *plVar17;
        bVar5 = *(byte *)(lVar12 + 0x473);
        pbVar14 = PTR_DAT_04bc1220;
        if ((long)(char)bVar5 != 0xffffffffffffffff) {
          puVar3 = (uint *)(lVar12 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
          if (7 < bVar5) {
            puVar3 = (uint *)(lVar12 + 0x48);
          }
          if ((*puVar3 & 8) != 0) {
            pbVar14 = (byte *)(lVar12 + 0x473);
          }
        }
        local_48 = 0;
        local_42 = 0;
        local_50 = (ulong)(CONCAT12(*pbVar14 >> 3,
                                    CONCAT11((char)(CONCAT14(*pbVar14,(uint)(uVar7 >> 5) << 0x18) >>
                                                   0x1b),(char)(uVar1 << 5))) & 0x1ffff | 8);
        local_44 = 0xff00;
        if (-1 < *(int *)(lVar11 + 8)) {
          FUN_01db1df0(**(long **)puVar9 + 0x480,*(int *)(lVar11 + 8),&local_48,&local_50,8,0);
        }
      }
      return;
    }
  } while( true );
}

