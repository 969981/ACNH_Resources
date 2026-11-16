
undefined4 * FUN_02547c90(byte *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined2 uVar6;
  undefined *puVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  undefined2 *puVar12;
  long lVar13;
  long lVar14;
  undefined *local_88;
  undefined2 local_80;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined4 local_7c;
  long local_78;
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  byte local_68 [4];
  uint local_64;
  
  puVar7 = PTR_DAT_04bb43c0;
  if (((DAT_054f5738 != 0) && (uVar11 = (ulong)*param_1, uVar11 < 8)) &&
     (*(char *)(DAT_054f5738 + 0x284 + uVar11 * 0xc + 9) != '\0')) {
    puVar12 = (undefined2 *)(DAT_054f5738 + 0x284 + uVar11 * 0xc);
    uVar6 = *puVar12;
    uVar3 = *(undefined1 *)(puVar12 + 1);
    uVar4 = *(undefined1 *)((long)puVar12 + 3);
    uVar2 = *(undefined4 *)(puVar12 + 2);
    lVar14 = *(long *)PTR_DAT_04bb43c0;
    local_70 = uVar6;
    local_6e = uVar3;
    local_6d = uVar4;
    local_6c = uVar2;
    uVar9 = FUN_0277d6c4(&local_70);
    lVar13 = *(long *)puVar7;
    if (lVar13 != 0) {
      lVar14 = *(long *)(lVar14 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar9 < *(uint *)(lVar14 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
        local_88 = PTR_DAT_04bc0510 + 0x10;
        local_78 = 0;
        local_80 = uVar6;
        local_7e = uVar3;
        local_7d = uVar4;
        local_7c = uVar2;
        uVar9 = FUN_0277d6c4(&local_80);
        if (*(long *)puVar7 != 0) {
          lVar13 = *(long *)(lVar13 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar13 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
            lVar13 = *(long *)PTR_DAT_04bc0428;
            uVar9 = FUN_0277d6c4(&local_70);
            uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
            if ((uVar9 < *(uint *)(lVar13 + 0x1d8)) &&
               (lVar13 = *(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8), lVar13 != 0))
            {
              local_78 = lVar13;
            }
          }
        }
        local_68[0] = 0;
        local_68[1] = 0;
        FUN_01adab50(&local_88,local_68);
        uVar9 = 0;
        do {
          local_64 = uVar9;
          if ((local_64 != 0) && (local_64 < 0xe)) {
            uVar9 = local_64 + 7;
            if (-1 < (int)local_64) {
              uVar9 = local_64;
            }
            if (((uint)((int)uVar9 >> 3) < 2) &&
               ((local_68[(uint)((int)uVar9 >> 3)] >> (ulong)(local_64 & 7) & 1) != 0)) {
              if (local_64 == 9) goto LAB_02547e8c;
              break;
            }
          }
          uVar9 = local_64 + 1;
        } while (local_64 + 1 != 0xe);
        iVar10 = FUN_01ad78cc(&local_88);
        if (iVar10 == 0x1c) {
LAB_02547e8c:
          bVar5 = *param_1;
          bVar8 = 7 < bVar5;
          if (bVar8) {
            bVar5 = 0xff;
          }
          puVar1 = (undefined4 *)(DAT_054f5738 + 0x284) + (ulong)(uint)(int)(char)bVar5 * 3;
          if (bVar8) {
            puVar1 = (undefined4 *)(DAT_054f5738 + 0x284);
          }
          return puVar1;
        }
      }
    }
  }
  if (((DAT_054f0b58 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_054f0b58), iVar10 != 0)) {
    DAT_054f0b50 = 0;
    DAT_054f0b48 = *(undefined4 *)PTR_DAT_04bb37e0;
    DAT_054f0b4c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    __cxa_guard_release(&DAT_054f0b58);
  }
  return &DAT_054f0b48;
}

