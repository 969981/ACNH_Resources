
void FUN_0121de80(long param_1)

{
  undefined *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long *__dest;
  int iVar7;
  uint *puVar8;
  ulong uVar9;
  uint *puVar10;
  size_t __n;
  long lVar11;
  long lVar12;
  long lVar13;
  short local_88;
  undefined1 local_86;
  undefined1 local_85;
  undefined4 local_84;
  undefined *local_80;
  short local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  undefined8 local_70;
  uint local_68;
  undefined4 local_64;
  
  puVar5 = PTR_DAT_04bb43c0;
  lVar11 = 0;
  puVar2 = (uint *)(param_1 + 0x6a000);
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  do {
    lVar13 = param_1 + lVar11 * 0xd4;
    local_88 = *(short *)(lVar13 + 8);
    if (local_88 != -2) {
      local_86 = *(undefined1 *)(lVar13 + 10);
      local_85 = *(undefined1 *)(lVar13 + 0xb);
      local_84 = *(undefined4 *)(lVar13 + 0xc);
      lVar12 = *(long *)puVar5;
      local_70 = 0;
      local_80 = puVar1;
      local_78 = local_88;
      local_76 = local_86;
      local_75 = local_85;
      local_74 = local_84;
      uVar6 = FUN_0277d6c4(&local_78);
      if (*(long *)puVar5 == 0) {
LAB_0121e070:
        local_68 = 0xbc;
      }
      else {
        lVar12 = *(long *)(lVar12 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((*(uint *)(lVar12 + 0x1d8) <= uVar6) ||
           (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_0121e070;
        lVar12 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4(&local_88);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((*(uint *)(lVar12 + 0x1d8) <= uVar6) ||
           (puVar8 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8),
           puVar8 == (uint *)0x0)) goto LAB_0121e070;
        local_68 = 0;
        uVar6 = *puVar8;
        if ((uVar6 != 0) && (puVar8 != (uint *)(ulong)uVar6)) {
          puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar6);
          local_68 = 0;
          if (*puVar10 != 0) {
            uVar6 = puVar10[1];
            if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
              lVar12 = 0xc;
              if (*(char *)((long)puVar10 + 10) != '\0') {
                lVar12 = 0x1c;
              }
              lVar12 = (long)puVar10 + lVar12 + (ulong)(ushort)puVar10[2] * 8;
              if (lVar12 != 0) {
                uVar3 = 0;
                if ((ulong)uVar6 != 0) {
                  uVar3 = (uint)((ulong)((long)puVar8 - lVar12) / (ulong)uVar6);
                }
                if (*puVar10 <= uVar3) {
                  uVar3 = 0xffffffff;
                }
                if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
                   (local_68 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
                   local_68 < 0xbd)) goto LAB_0121e07c;
              }
            }
            local_68 = 0;
          }
        }
      }
LAB_0121e07c:
      local_64 = 0x9d;
      if (local_68 == 0x9d) {
        uVar6 = *puVar2;
        if (0 < (int)uVar6) {
          __dest = *(long **)(param_1 + 0x6a008);
          uVar9 = 0;
          __n = (long)(int)uVar6 * 8;
          do {
            __n = __n - 8;
            if (*__dest == lVar13) {
              iVar7 = (int)uVar9;
              if (-1 < iVar7) {
                if (iVar7 < (int)uVar6) {
                  if (iVar7 + 1 < (int)uVar6) {
                    memmove(__dest,__dest + 1,__n);
                    uVar6 = *puVar2;
                  }
                  *puVar2 = uVar6 - 1;
                }
                puVar4 = PTR_DAT_04bb37e0;
                *(undefined2 *)(lVar13 + 8) = *(undefined2 *)PTR_DAT_04bb37e0;
                *(undefined *)(lVar13 + 10) = puVar4[2];
                *(undefined *)(lVar13 + 0xb) = puVar4[3];
                *(undefined4 *)(lVar13 + 0xc) = *(undefined4 *)(puVar4 + 4);
              }
              break;
            }
            uVar9 = uVar9 + 1;
            __dest = __dest + 1;
          } while (uVar6 != uVar9);
        }
      }
    }
    lVar11 = lVar11 + 1;
    if (lVar11 == 0x800) {
      return;
    }
  } while( true );
}

