
int FUN_032efbb0(undefined8 param_1,byte *param_2,short param_3,uint param_4)

{
  ushort *puVar1;
  long lVar2;
  byte bVar3;
  undefined2 uVar4;
  short sVar5;
  undefined2 uVar6;
  int iVar7;
  bool bVar8;
  short sVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  short sVar13;
  short *psVar14;
  byte *pbVar15;
  undefined8 uVar16;
  ushort local_c8 [57];
  undefined1 uStack_55;
  byte local_54 [4];
  
  if (param_2 == (byte *)0x0) {
    return 0x8001;
  }
  if ((param_2[2] == 0xff) || (param_2[0x70380] != param_2[2])) {
    return 0x801b;
  }
  bVar3 = *param_2;
  puVar1 = (ushort *)(param_2 + 0x83e00);
  if (bVar3 == 2) {
LAB_032efc28:
    if (param_3 != 0) {
      return 0x800c;
    }
    if ((uint)*puVar1 <= (param_4 & 0xffff)) {
      return 0x800b;
    }
LAB_032efcd0:
    uVar16 = 0;
    bVar8 = true;
    lVar2 = (ulong)(param_4 & 0xffff) * 0x88 + 0x79ea0;
  }
  else {
    if (bVar3 != 1) {
      if (bVar3 != 0) {
        return 0x8019;
      }
      goto LAB_032efc28;
    }
    if ((param_4 & 0xffff) != 0) {
      if (param_3 != 0) {
        return 0x800c;
      }
      if ((uint)*puVar1 <= (param_4 & 0xffff)) {
        return 0x800b;
      }
      goto LAB_032efcd0;
    }
    if (param_3 != 0) {
      return 0x800b;
    }
    bVar8 = false;
    uVar16 = 1;
    lVar2 = (ulong)param_2[0x79e9d] * 0x88 + 0x83e08;
  }
  pbVar15 = param_2 + lVar2;
  uVar11 = FUN_00100810(local_c8,param_2 + 8,pbVar15,0x70);
  if ((uVar11 >> 0xf & 1) != 0) {
    return 0x806a;
  }
  if (local_c8[0] == 0) {
LAB_032efd28:
    uVar11 = param_4;
    if (((pbVar15[0x67] >> 4) - 5 < 2) || ((*(ushort *)(pbVar15 + 0x80) >> 0xb & 1) == 0))
    goto LAB_032efdbc;
    uVar12 = FUN_00100890(local_54,&uStack_55,param_2 + 8,pbVar15);
    if ((uVar12 >> 0xf & 1) != 0) {
      return 0x806d;
    }
    if (0xfffffffc < local_54[0] - 5) goto LAB_032efdbc;
  }
  else {
    psVar14 = (short *)((ulong)local_c8 | 2);
    sVar9 = 0;
    do {
      sVar13 = sVar9;
      sVar5 = *psVar14;
      psVar14 = psVar14 + 1;
      sVar9 = sVar13 + 1;
    } while (sVar5 != 0);
    if ((sVar13 != 0) ||
       ((((local_c8[0] & 0xff) != 0 || (9 < (local_c8[0] >> 8) - 0x30)) &&
        ((((local_c8[0] ^ 0xffff) & 0xff) != 0 || (9 < (local_c8[0] >> 8) - 0x10))))))
    goto LAB_032efd28;
  }
  uVar11 = 0xffff;
LAB_032efdbc:
  uVar11 = FUN_032efecc(param_2,uVar11,param_4,uVar16);
  iVar10 = (int)(short)uVar11;
  if ((uVar11 >> 0xf & 1) == 0) {
    param_2[0x79e98] = 1;
    param_2[0x79e99] = 1;
    if ((!bVar8) || ((*param_2 | 2) != 2)) {
      bVar3 = param_2[0x79e9d] + 1;
      param_2[0x79e9d] = bVar3;
      uVar11 = (uint)bVar3;
      iVar7 = *(ushort *)(param_2 + 0x85b40) - uVar11;
      if (uVar11 <= *(ushort *)(param_2 + 0x85b40) && iVar7 != 0) {
        if (0x36 < uVar11) {
          return iVar10;
        }
        uVar4 = *(undefined2 *)(pbVar15 + 0x7a);
        lVar2 = 0x72;
        if (1 < (pbVar15[0x67] >> 4) - 5) {
          lVar2 = 0x70;
        }
        uVar6 = *(undefined2 *)(pbVar15 + lVar2);
        *puVar1 = 0;
        param_2[0x79e9e] = param_2[0x79e9e] + ((byte)uVar4 & 0x7f) + ((byte)uVar6 & 0x7f);
        lVar2 = (ulong)bVar3 * 0x88 + 0x83e7a;
        if (1 < (param_2[(ulong)bVar3 * 0x88 + 0x83e6f] >> 4) - 5) {
          lVar2 = (ulong)bVar3 * 0x88 + 0x83e78;
        }
        param_2[0x79e9c] = (param_2[(ulong)bVar3 * 0x88 + 0x83e82] & 0x7f) + (param_2[lVar2] & 0x7f)
        ;
        return iVar7;
      }
    }
    iVar10 = 0;
    param_2[0x79e9c] = 0;
    param_2[0x79e9d] = 0;
    param_2[0x79e9e] = 0;
    *puVar1 = 0;
    param_2[0x85b40] = 0;
    param_2[0x85b41] = 0;
  }
  return iVar10;
}

