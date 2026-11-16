
int FUN_027fa6d0(long param_1,uint param_2)

{
  short *psVar1;
  ulong uVar2;
  short sVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  short *psVar11;
  long lVar12;
  short *psVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  int local_88;
  undefined **local_80;
  short local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  uint *local_70;
  uint local_64;
  
  puVar4 = PTR_DAT_04bb43c0;
  local_88 = 0;
  uVar15 = 0;
  psVar11 = (short *)(param_1 + 0xb8);
  uVar5 = 0;
  if (*(byte *)(param_1 + 0x178) < 3) {
    uVar5 = (uint)*(byte *)(param_1 + 0x178);
  }
  local_80 = (undefined **)CONCAT44(local_80._4_4_,uVar5);
  local_64 = param_2;
  do {
    uVar5 = *(uint *)(param_1 + 0x158);
    if (0x13 < uVar5) {
      uVar5 = 0x14;
    }
    if (uVar15 < uVar5) {
      sVar3 = *psVar11;
      psVar1 = psVar11;
joined_r0x027fa7f8:
      psVar13 = psVar1;
      if (sVar3 != -2) {
        lVar12 = *(long *)puVar4;
        uVar5 = FUN_0277d6c4(psVar1);
        if (*(long *)puVar4 == 0) goto LAB_027fa860;
        lVar12 = *(long *)(lVar12 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        psVar13 = (short *)PTR_DAT_04bb37e0;
        if (uVar5 < *(uint *)(lVar12 + 0x1d8)) {
          psVar13 = &DAT_05586008;
          if (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0) {
            psVar13 = psVar1;
          }
        }
      }
    }
    else {
      uVar8 = (uint)(uVar15 + -uVar5);
      if ((int)uVar8 < 0) {
LAB_027fa860:
        psVar13 = &DAT_05586008;
      }
      else {
        uVar16 = *(uint *)(param_1 + 0xa0);
        if (0x13 < uVar16) {
          uVar16 = 0x14;
        }
        psVar13 = (short *)PTR_DAT_04bb37e0;
        if (uVar8 < uVar16) {
          psVar1 = (short *)(param_1 + (uVar15 + -uVar5 & 0xffffffff) * 8);
          sVar3 = *psVar1;
          goto joined_r0x027fa7f8;
        }
      }
    }
    lVar12 = *(long *)puVar4;
    uVar5 = FUN_0277d6c4(psVar13);
    lVar14 = *(long *)puVar4;
    if (lVar14 != 0) {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        local_80 = &PTR_FUN_04a36b50;
        local_78 = *psVar13;
        local_76 = (undefined1)psVar13[1];
        local_75 = *(undefined1 *)((long)psVar13 + 3);
        local_74 = *(undefined4 *)(psVar13 + 2);
        local_70 = (uint *)0x0;
        uVar5 = FUN_0277d6c4(&local_78);
        if (*(long *)puVar4 == 0) {
LAB_027fa95c:
          puVar10 = (uint *)PTR_DAT_04bc00c8;
          if (local_70 != (uint *)0x0) goto LAB_027fa96c;
          uVar5 = 0xbc;
        }
        else {
          lVar12 = *(long *)(lVar14 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
          if ((*(uint *)(lVar12 + 0x1d8) <= uVar5) ||
             (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_027fa95c;
          lVar12 = *(long *)PTR_DAT_04bc0428;
          uVar5 = FUN_0277d6c4(psVar13);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
          if ((*(uint *)(lVar12 + 0x1d8) <= uVar5) ||
             (puVar9 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8),
             puVar9 == (uint *)0x0)) goto LAB_027fa95c;
          puVar10 = &DAT_05326ec0;
          local_70 = puVar9;
LAB_027fa96c:
          uVar8 = *local_70;
          uVar5 = 0;
          if ((uVar8 != 0) && (local_70 != (uint *)(ulong)uVar8)) {
            puVar9 = (uint *)((long)local_70 - (long)(ulong)uVar8);
            uVar5 = 0;
            if (*puVar9 != 0) {
              uVar5 = puVar9[1];
              if ((uVar5 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
                lVar12 = 0xc;
                if (*(char *)((long)puVar9 + 10) != '\0') {
                  lVar12 = 0x1c;
                }
                lVar12 = (long)puVar9 + lVar12 + (ulong)(ushort)puVar9[2] * 8;
                if (lVar12 != 0) {
                  uVar8 = 0;
                  if ((ulong)uVar5 != 0) {
                    uVar8 = (uint)((ulong)((long)local_70 - lVar12) / (ulong)uVar5);
                  }
                  if (*puVar9 <= uVar8) {
                    uVar8 = 0xffffffff;
                  }
                  if ((uVar8 < *puVar10) &&
                     (uVar5 = (uint)*(ushort *)(*(long *)(puVar10 + 2) + (long)(int)uVar8 * 2),
                     uVar5 < 0xbd)) goto LAB_027fa9f8;
                }
              }
              uVar5 = 0;
            }
          }
        }
LAB_027fa9f8:
        if (uVar5 == local_64) {
          uVar7 = FUN_01af0020(&local_80);
          if ((uVar7 & 1) == 0) {
            local_88 = local_88 + 1;
          }
          else {
            iVar6 = FUN_01af02d0(&local_80);
            local_88 = iVar6 + local_88;
          }
        }
      }
    }
    uVar15 = uVar15 + 1;
    psVar11 = psVar11 + 4;
    uVar5 = 0;
    if (*(byte *)(param_1 + 0x178) < 3) {
      uVar5 = (uint)*(byte *)(param_1 + 0x178);
    }
    local_80 = (undefined **)CONCAT44(local_80._4_4_,uVar5);
    uVar7 = 0x1e;
    if (uVar5 != 1) {
      uVar7 = 0x14;
    }
    uVar2 = 0x28;
    if (uVar5 != 2) {
      uVar2 = uVar7;
    }
    if (uVar2 <= uVar15) {
      return local_88;
    }
  } while( true );
}

