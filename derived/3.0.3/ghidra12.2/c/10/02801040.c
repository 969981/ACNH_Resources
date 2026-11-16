
undefined8 FUN_02801040(long param_1)

{
  short *psVar1;
  undefined *puVar2;
  ulong uVar3;
  short sVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  short *psVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  short *psVar14;
  undefined *local_78;
  short local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  long local_68;
  
  puVar5 = PTR_DAT_04bb43c0;
  uVar12 = 0;
  psVar14 = (short *)(param_1 + 0xb8);
  uVar6 = 0;
  if (*(byte *)(param_1 + 0x178) < 3) {
    uVar6 = (uint)*(byte *)(param_1 + 0x178);
  }
  local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar6);
  puVar2 = PTR_DAT_04bc0510 + 0x10;
  do {
    uVar6 = *(uint *)(param_1 + 0x158);
    if (0x13 < uVar6) {
      uVar6 = 0x14;
    }
    if (uVar12 < uVar6) {
      sVar4 = *psVar14;
      psVar1 = psVar14;
joined_r0x02801158:
      psVar10 = psVar1;
      if (sVar4 != -2) {
        lVar9 = *(long *)puVar5;
        uVar6 = FUN_0277d6c4(psVar1);
        if (*(long *)puVar5 == 0) goto LAB_028011c0;
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        psVar10 = (short *)PTR_DAT_04bb37e0;
        if (uVar6 < *(uint *)(lVar9 + 0x1d8)) {
          if (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) != 0) {
            psVar10 = psVar1;
          }
        }
      }
    }
    else {
      uVar8 = (uint)(uVar12 + -uVar6);
      if ((int)uVar8 < 0) {
LAB_028011c0:
        psVar10 = (short *)PTR_DAT_04bb37e0;
      }
      else {
        uVar13 = *(uint *)(param_1 + 0xa0);
        if (0x13 < uVar13) {
          uVar13 = 0x14;
        }
        psVar10 = (short *)PTR_DAT_04bb37e0;
        if (uVar8 < uVar13) {
          psVar1 = (short *)(param_1 + (uVar12 + -uVar6 & 0xffffffff) * 8);
          sVar4 = *psVar1;
          goto joined_r0x02801158;
        }
      }
    }
    lVar9 = *(long *)puVar5;
    uVar6 = FUN_0277d6c4(psVar10);
    lVar11 = *(long *)puVar5;
    if (lVar11 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        local_70 = *psVar10;
        local_6e = (undefined1)psVar10[1];
        local_6d = *(undefined1 *)((long)psVar10 + 3);
        local_6c = *(undefined4 *)(psVar10 + 2);
        local_68 = 0;
        local_78 = puVar2;
        uVar6 = FUN_0277d6c4(&local_70);
        if (*(long *)puVar5 != 0) {
          lVar9 = *(long *)(lVar11 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
            lVar9 = *(long *)PTR_DAT_04bc0428;
            uVar6 = FUN_0277d6c4(psVar10);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
            if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
               (lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8), lVar9 != 0)) {
              local_68 = lVar9;
            }
          }
        }
        uVar7 = FUN_01b07660(&local_78);
        if ((uVar7 & 1) != 0) {
          return 1;
        }
      }
    }
    uVar12 = uVar12 + 1;
    psVar14 = psVar14 + 4;
    uVar6 = 0;
    if (*(byte *)(param_1 + 0x178) < 3) {
      uVar6 = (uint)*(byte *)(param_1 + 0x178);
    }
    local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar6);
    uVar7 = 0x1e;
    if (uVar6 != 1) {
      uVar7 = 0x14;
    }
    uVar3 = 0x28;
    if (uVar6 != 2) {
      uVar3 = uVar7;
    }
    if (uVar3 <= uVar12) {
      return 0;
    }
  } while( true );
}

