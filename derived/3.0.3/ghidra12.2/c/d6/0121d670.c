
void FUN_0121d670(long param_1)

{
  undefined *puVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long *__dest;
  int iVar6;
  ulong uVar7;
  size_t __n;
  long lVar8;
  long lVar9;
  long lVar10;
  short local_88;
  undefined1 local_86;
  undefined1 local_85;
  undefined4 local_84;
  undefined *local_80;
  short local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  long local_70;
  int local_68;
  int local_64;
  
  puVar4 = PTR_DAT_04bb43c0;
  lVar8 = 0;
  puVar2 = (uint *)(param_1 + 0x6a000);
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  do {
    lVar10 = param_1 + lVar8 * 0xd4;
    local_88 = *(short *)(lVar10 + 8);
    if (local_88 != -2) {
      local_86 = *(undefined1 *)(lVar10 + 10);
      local_85 = *(undefined1 *)(lVar10 + 0xb);
      local_84 = *(undefined4 *)(lVar10 + 0xc);
      lVar9 = *(long *)puVar4;
      local_70 = 0;
      local_80 = puVar1;
      local_78 = local_88;
      local_76 = local_86;
      local_75 = local_85;
      local_74 = local_84;
      uVar5 = FUN_0277d6c4(&local_78);
      if (*(long *)puVar4 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          lVar9 = *(long *)PTR_DAT_04bc0428;
          uVar5 = FUN_0277d6c4(&local_88);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
             (lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8), lVar9 != 0)) {
            local_70 = lVar9;
          }
        }
      }
      local_64 = 0xe;
      local_68 = FUN_01ae7550(&local_80);
      if (local_68 == local_64) {
        uVar5 = *puVar2;
        if (0 < (int)uVar5) {
          __dest = *(long **)(param_1 + 0x6a008);
          uVar7 = 0;
          __n = (long)(int)uVar5 * 8;
          do {
            __n = __n - 8;
            if (*__dest == lVar10) {
              iVar6 = (int)uVar7;
              if (-1 < iVar6) {
                if (iVar6 < (int)uVar5) {
                  if (iVar6 + 1 < (int)uVar5) {
                    memmove(__dest,__dest + 1,__n);
                    uVar5 = *puVar2;
                  }
                  *puVar2 = uVar5 - 1;
                }
                puVar3 = PTR_DAT_04bb37e0;
                *(undefined2 *)(lVar10 + 8) = *(undefined2 *)PTR_DAT_04bb37e0;
                *(undefined *)(lVar10 + 10) = puVar3[2];
                *(undefined *)(lVar10 + 0xb) = puVar3[3];
                *(undefined4 *)(lVar10 + 0xc) = *(undefined4 *)(puVar3 + 4);
              }
              break;
            }
            uVar7 = uVar7 + 1;
            __dest = __dest + 1;
          } while (uVar5 != uVar7);
        }
      }
    }
    lVar8 = lVar8 + 1;
    if (lVar8 == 0x800) {
      return;
    }
  } while( true );
}

