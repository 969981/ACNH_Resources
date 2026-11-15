
undefined8 FUN_0205c85c(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  uint uVar14;
  
  puVar4 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return 0;
  }
  uVar14 = *param_2;
  if ((((uVar14 == 0) ||
       (plVar12 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar14 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0)) ||
      ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar12 + 0x46) != uVar14)) {
    plVar12 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar4;
    iVar5 = (**(code **)(*plVar6 + 0x60))();
    if (iVar5 < 0x11) {
      uVar14 = 1;
      goto joined_r0x0205c918;
    }
    if (*(uint *)(lVar9 + 0x5e8) < 5) {
      uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0205c918;
    }
  }
  uVar14 = 0;
joined_r0x0205c918:
  if (plVar12 != (long *)0x0) {
    lVar9 = plVar12[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar7 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb37d0);
    puVar4 = PTR_DAT_04bb4760;
    uVar1 = 0;
    if ((int)lVar9 == 1) {
      uVar1 = uVar14;
    }
    if ((uVar7 & 1) == 0) {
      return 0;
    }
    if (uVar1 == 0) {
      return 0;
    }
    uVar14 = *(uint *)(plVar12 + 0xd3);
    lVar9 = *(long *)PTR_DAT_04bb4760 + (ulong)uVar14 * 0x15;
    if (0x6c < uVar14) {
      lVar9 = *(long *)PTR_DAT_04bb4760;
    }
    if ((*(byte *)(lVar9 + 7) >> 4 & 3) == 0) {
      if ((*(byte *)(lVar9 + 6) >> 1 & 1) == 0) {
        return 0;
      }
      if ((*(byte *)(lVar9 + 7) >> 1 & 1) == 0) {
        return 0;
      }
      puVar13 = (undefined8 *)plVar12[0x77];
      if (((*PTR_DAT_04bb6988 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb6988), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bb6980 = PTR_DAT_04bb6990 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb6988);
      }
      if ((puVar13 != (undefined8 *)0x0) &&
         (uVar7 = (**(code **)*puVar13)(puVar13,PTR_DAT_04bb6980), (uVar7 & 1) != 0)) {
        *(undefined4 *)(puVar13 + 0x1cb6) = 4;
        *(byte *)(puVar13 + 0x24ef) = *(byte *)(puVar13 + 0x24ef) | 2;
      }
      lVar11 = **(long **)PTR_DAT_04bb27d0;
      bVar3 = *(byte *)(lVar11 + 0x473);
      pbVar10 = PTR_DAT_04bc1220;
      if ((long)(char)bVar3 != 0xffffffffffffffff) {
        puVar2 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
        if (7 < bVar3) {
          puVar2 = (uint *)(lVar11 + 0x48);
        }
        if ((*puVar2 & 8) != 0) {
          pbVar10 = (byte *)(lVar11 + 0x473);
        }
      }
      bVar3 = *pbVar10;
      *(byte *)(lVar9 + 5) = *(byte *)(lVar9 + 5) & 3 | bVar3 << 2;
      *(byte *)(lVar9 + 6) = *(byte *)(lVar9 + 6) & 0xfc | bVar3 >> 6 | 1;
      uVar8 = *(undefined8 *)puVar4;
      *(byte *)(lVar9 + 8) = *(byte *)(lVar9 + 8) & 0x3f | 0x80;
      uVar1 = (ushort)(CONCAT11(*(byte *)(lVar9 + 10),*(undefined1 *)(lVar9 + 9)) >> 4) + 1;
      *(byte *)(lVar9 + 9) = (char)uVar1 * '\x10' | 8;
      *(byte *)(lVar9 + 10) = *(byte *)(lVar9 + 10) & 0xf0 | (byte)(uVar1 >> 4) & 0xf;
      FUN_020ea498(uVar8,uVar14,0,0);
      return 1;
    }
  }
  return 0;
}

