
int FUN_01372630(uint *param_1)

{
  undefined *puVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  undefined *local_78;
  short local_70;
  short local_6e;
  undefined4 local_6c;
  long local_68;
  
  puVar6 = PTR_DAT_04bb43c0;
  uVar3 = *param_1;
  if (uVar3 == 0) {
    iVar9 = 0;
  }
  else {
    lVar10 = *(long *)(param_1 + 2);
    iVar9 = 0;
    uVar11 = 0;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    do {
      psVar2 = (short *)(lVar10 + ((long)((ulong)uVar11 << 0x20) >> 0x1c));
      local_70 = *psVar2;
      if (local_70 != -2) {
        local_6e = psVar2[1];
        local_6c = *(undefined4 *)(psVar2 + 2);
        local_68 = 0;
        lVar12 = *(long *)puVar6;
        local_78 = puVar1;
        uVar8 = FUN_0277d6c4(&local_70);
        if (*(long *)puVar6 != 0) {
          lVar12 = *(long *)(lVar12 + 0x57e58);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
          if ((uVar8 < *(uint *)(lVar12 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
            lVar12 = *(long *)PTR_DAT_04bc0428;
            uVar8 = FUN_0277d6c4(psVar2);
            uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
            if (uVar8 < *(uint *)(lVar12 + 0x1d8)) {
              lVar12 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8);
              if (lVar12 != 0) {
                local_68 = lVar12;
              }
            }
          }
        }
        iVar7 = FUN_01af2610(&local_78);
        iVar4 = *(int *)(lVar10 + (long)(int)uVar11 * 0x10 + 8);
        iVar5 = 0;
        if (iVar7 != 0) {
          iVar5 = iVar4 / iVar7;
        }
        iVar9 = iVar5 + iVar9;
        if (iVar4 != iVar5 * iVar7) {
          iVar9 = iVar9 + 1;
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar3 != uVar11);
  }
  return iVar9;
}

