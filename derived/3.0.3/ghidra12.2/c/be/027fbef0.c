
void FUN_027fbef0(long param_1,uint param_2)

{
  short *psVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  short sVar7;
  short sVar8;
  undefined *puVar9;
  uint uVar10;
  short *psVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint *puVar15;
  ulong uVar16;
  short *psVar17;
  long lVar18;
  long lVar19;
  short local_80;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined4 local_7c;
  undefined8 local_78;
  short local_6c;
  undefined1 local_6a;
  undefined1 local_69;
  undefined4 local_68;
  uint local_64;
  
  puVar9 = PTR_DAT_04bb43c0;
  uVar16 = 0;
  psVar17 = (short *)(param_1 + 0xb8);
  bVar2 = 0;
  if (*(byte *)(param_1 + 0x178) < 3) {
    bVar2 = *(byte *)(param_1 + 0x178);
  }
  uVar3 = 0x1e;
  if (bVar2 != 1) {
    uVar3 = 0x14;
  }
  uVar4 = 0x28;
  if (bVar2 != 2) {
    uVar4 = uVar3;
  }
  local_64 = param_2;
  do {
    uVar10 = *(uint *)(param_1 + 0x158);
    if (0x13 < uVar10) {
      uVar10 = 0x14;
    }
    if (uVar16 < uVar10) {
      sVar7 = *psVar17;
      psVar1 = psVar17;
joined_r0x027fc000:
      psVar11 = psVar1;
      if (sVar7 != -2) {
        lVar18 = *(long *)puVar9;
        uVar10 = FUN_0277d6c4(psVar1);
        if (*(long *)puVar9 == 0) goto LAB_027fc060;
        lVar18 = *(long *)(lVar18 + 0x57e58);
        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
        psVar11 = (short *)PTR_DAT_04bb37e0;
        if (uVar10 < *(uint *)(lVar18 + 0x1d8)) {
          if (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8) != 0) {
            psVar11 = psVar1;
          }
        }
      }
    }
    else {
      uVar12 = (uint)(uVar16 + -uVar10);
      if ((int)uVar12 < 0) {
LAB_027fc060:
        psVar11 = (short *)PTR_DAT_04bb37e0;
      }
      else {
        uVar14 = *(uint *)(param_1 + 0xa0);
        if (0x13 < uVar14) {
          uVar14 = 0x14;
        }
        psVar11 = (short *)PTR_DAT_04bb37e0;
        if (uVar12 < uVar14) {
          psVar1 = (short *)(param_1 + (uVar16 + -uVar10 & 0xffffffff) * 8);
          sVar7 = *psVar1;
          goto joined_r0x027fc000;
        }
      }
    }
    sVar7 = *psVar11;
    sVar8 = psVar11[1];
    uVar6 = *(undefined1 *)((long)psVar11 + 3);
    uVar5 = *(undefined4 *)(psVar11 + 2);
    lVar18 = *(long *)puVar9;
    local_6c = sVar7;
    local_6a = (char)sVar8;
    local_69 = uVar6;
    local_68 = uVar5;
    uVar10 = FUN_0277d6c4(&local_6c);
    lVar19 = *(long *)puVar9;
    if (lVar19 != 0) {
      lVar18 = *(long *)(lVar18 + 0x57e58);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
      if ((uVar10 < *(uint *)(lVar18 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
        local_78 = 0;
        local_80 = sVar7;
        local_7e = (char)sVar8;
        local_7d = uVar6;
        local_7c = uVar5;
        uVar10 = FUN_0277d6c4(&local_80);
        if (*(long *)puVar9 == 0) {
LAB_027fc1ec:
          uVar10 = 0xbc;
        }
        else {
          lVar18 = *(long *)(lVar19 + 0x57e58);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
          if ((*(uint *)(lVar18 + 0x1d8) <= uVar10) ||
             (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8) == 0)) goto LAB_027fc1ec;
          lVar18 = *(long *)PTR_DAT_04bc0428;
          uVar10 = FUN_0277d6c4(&local_6c);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
          if ((*(uint *)(lVar18 + 0x1d8) <= uVar10) ||
             (puVar13 = *(uint **)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8),
             puVar13 == (uint *)0x0)) goto LAB_027fc1ec;
          uVar12 = *puVar13;
          uVar10 = 0;
          if ((uVar12 != 0) && (puVar13 != (uint *)(ulong)uVar12)) {
            puVar15 = (uint *)((long)puVar13 - (long)(ulong)uVar12);
            uVar10 = 0;
            if (*puVar15 != 0) {
              uVar10 = puVar15[1];
              if ((uVar10 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
                lVar18 = 0xc;
                if (*(char *)((long)puVar15 + 10) != '\0') {
                  lVar18 = 0x1c;
                }
                lVar18 = (long)puVar15 + lVar18 + (ulong)(ushort)puVar15[2] * 8;
                if (lVar18 != 0) {
                  uVar12 = 0;
                  if ((ulong)uVar10 != 0) {
                    uVar12 = (uint)((ulong)((long)puVar13 - lVar18) / (ulong)uVar10);
                  }
                  if (*puVar15 <= uVar12) {
                    uVar12 = 0xffffffff;
                  }
                  if ((uVar12 < *(uint *)PTR_DAT_04bc00c8) &&
                     (uVar10 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar12 * 2),
                     uVar10 < 0xbd)) goto LAB_027fc1f0;
                }
              }
              uVar10 = 0;
            }
          }
        }
LAB_027fc1f0:
        if (uVar10 == local_64) {
          FUN_027fa2dc(param_1,uVar16,PTR_DAT_04bb37e0,0);
        }
      }
    }
    uVar16 = uVar16 + 1;
    psVar17 = psVar17 + 4;
    if (uVar4 == uVar16) {
      return;
    }
  } while( true );
}

