
void FUN_021124e0(ushort *param_1,ushort *param_2,byte *param_3)

{
  uint uVar1;
  uint *puVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  ushort uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ushort uVar14;
  ulong local_58;
  uint local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  puVar7 = PTR_DAT_04bb27d0;
  lVar10 = 0;
  uVar6 = *param_2;
  lVar12 = 0x48;
  uVar14 = *param_1;
  plVar11 = *(long **)PTR_DAT_04bb27d0;
  uVar5 = 1 << (ulong)(*param_3 & 0x1f);
  *param_1 = uVar14 | (ushort)uVar5;
  lVar9 = DAT_053ec470;
  lVar8 = DAT_053e5c10;
  do {
    uVar1 = (uint)lVar10 & 0xff;
    if ((uVar1 < 8) && ((1 << (ulong)((uint)lVar10 & 0x1f) & ((uint)uVar14 | uVar5 & 0xffff)) == 0))
    {
      lVar13 = *plVar11;
      bVar4 = *(byte *)(lVar13 + 0x473);
      if ((long)(char)bVar4 == 0xffffffffffffffff) {
        if (DAT_0537bdbc == uVar1) {
          return;
        }
      }
      else {
        puVar2 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
        if (7 < bVar4) {
          puVar2 = (uint *)(lVar13 + 0x48);
        }
        pbVar3 = &DAT_0537bdbc;
        if ((*puVar2 & 8) != 0) {
          pbVar3 = (byte *)(lVar13 + 0x473);
        }
        if (*pbVar3 == uVar1) {
          return;
        }
        if (((*puVar2 >> 3 & 1) != 0) && ((*(byte *)(lVar13 + lVar12) >> 3 & 1) != 0)) {
          return;
        }
      }
    }
    lVar10 = lVar10 + 1;
    lVar12 = lVar12 + 0x80;
    if (lVar10 == 0xc) {
      if (DAT_053e5c10 != 0 && DAT_053ec470 != 0) {
        uVar14 = uVar6 >> 5 & 0xff;
        FUN_020ea330(DAT_053e5c10,uVar14,0);
        local_38 = uVar6 >> 5 & 0xff;
        bVar4 = *PTR_DAT_04bb5018;
        lVar10 = lVar8 + (ulong)local_38 * 0x15;
        if (0x6c < local_38) {
          lVar10 = lVar8;
        }
        *(byte *)(lVar10 + 5) = *(byte *)(lVar10 + 5) & 3 | bVar4 << 2;
        *(byte *)(lVar10 + 6) = *(byte *)(lVar10 + 6) & 0xfc | bVar4 >> 6;
        uVar5 = (ushort)(CONCAT11(*(byte *)(lVar10 + 8),*(byte *)(lVar10 + 7)) >> 6) + 1;
        *(byte *)(lVar10 + 8) = *(byte *)(lVar10 + 8) & 0xc0 | (byte)(uVar5 >> 2) & 0x3f;
        *(byte *)(lVar10 + 7) = *(byte *)(lVar10 + 7) & 0xf | (char)uVar5 * '@' | 0x30;
        FUN_020ea498(lVar8,uVar14,1,0);
        uVar5 = *param_2 >> 5 & 0xff;
        local_38 = 0;
        local_32 = 0;
        local_58 = (ulong)(CONCAT13(*(byte *)(lVar10 + 8) >> 5,
                                    CONCAT12((byte)param_2[1] & 1 |
                                             (char)(*(ushort *)(lVar10 + 7) >> 6) << 1,
                                             CONCAT11(*(byte *)((long)param_2 + 1) & 0xe0 |
                                                      (byte)(uVar5 >> 3),(char)(uVar5 << 5)))) &
                          0x1ffffff) | 4;
        local_34 = 0xff00;
        if (-1 < *(int *)(lVar9 + 8)) {
          FUN_01db1df0(**(long **)puVar7 + 0x480,*(int *)(lVar9 + 8),&local_38,&local_58,8,0);
        }
        *param_1 = 0;
      }
      return;
    }
  } while( true );
}

