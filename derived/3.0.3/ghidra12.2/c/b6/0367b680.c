
void FUN_0367b680(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  ushort uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  ushort uVar10;
  byte local_64 [4];
  
  puVar4 = PTR_DAT_04bb5038;
  puVar3 = PTR_DAT_04bb4fb8;
  puVar2 = PTR_DAT_04bb3960;
  iVar9 = 0;
  do {
    local_64[0] = puVar4[iVar9];
    if (7 < local_64[0]) {
      local_64[0] = 0xff;
    }
    uVar1 = (uint)(char)local_64[0];
    if (4 < (int)uVar1) {
      return;
    }
    if (*(char *)(param_1 + (ulong)uVar1 + 8) != '\0') {
      uVar5 = FUN_02582d8c(local_64,1);
      if ((uVar5 < 8) && (*(char *)(*(long *)puVar3 + (ulong)uVar5 * 0x13f0 + 0x13d4) != '\0')) {
        uVar5 = *(uint *)(*(long *)puVar3 + (ulong)uVar5 * 0x13f0 + 0x13d8);
        uVar7 = (ulong)uVar5;
        if (((int)uVar5 < 0) || (*(long *)puVar2 == 0)) goto LAB_0367b6e0;
        if (3 < uVar5) {
          uVar7 = 0;
        }
        lVar8 = *(long *)(*(long *)puVar2 + uVar7 * 8 + 0xf5b20);
        uVar6 = 0;
        if (lVar8 != 0) {
          uVar5 = *(uint *)(lVar8 + 8);
          uVar6 = (ushort)((uVar5 & 0x220000) != 0) << 10;
          if ((uVar5 & 0x110000) != 0) {
            uVar6 = 0x800;
          }
          uVar10 = (ushort)((uVar5 & 0x880000) != 0) << 8;
          if ((uVar5 & 0x440000) != 0) {
            uVar10 = 0x200;
          }
          uVar6 = (ushort)((uVar5 & 0x3fffe | uVar5 >> 4 & 1) << 0xe) |
                  (ushort)((uVar5 & 1) << 7) | (ushort)((uVar5 >> 3 & 1) << 6) |
                  (ushort)(uVar5 >> 8) & 0x20 | (ushort)(uVar5 >> 10) & 0x10 |
                  (ushort)((uVar5 >> 9 & 1) << 0xd) |
                  (ushort)((uVar5 & 0x400) << 2) | uVar6 | uVar10;
        }
      }
      else {
LAB_0367b6e0:
        uVar6 = 0;
      }
      *(ushort *)(param_1 + (long)(int)uVar1 * 2 + 0xe) = uVar6;
    }
    iVar9 = iVar9 + 1;
    if (iVar9 == 8) {
      return;
    }
  } while( true );
}

