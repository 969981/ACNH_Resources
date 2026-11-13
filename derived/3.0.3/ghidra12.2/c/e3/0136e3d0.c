
bool FUN_0136e3d0(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined *puVar7;
  long lVar8;
  uint uVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  bool bVar15;
  long lVar16;
  undefined8 local_6c;
  byte local_64 [4];
  
  lVar13 = *(long *)PTR_DAT_04bb39b0;
  if (lVar13 == 0) {
    pbVar10 = &DAT_0548e140;
LAB_0136e454:
    if (7 < *pbVar10) {
LAB_0136e460:
      if (DAT_0537d558 != (long *)0x0) {
        lVar13 = *DAT_0537d558;
        bVar6 = *(byte *)(lVar13 + 0x473);
        pbVar10 = PTR_DAT_04bb5038;
        if ((long)(char)bVar6 != 0xffffffffffffffff) {
          puVar3 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
          if (7 < bVar6) {
            puVar3 = (uint *)(lVar13 + 0x48);
          }
          if ((*puVar3 & 8) != 0) {
            pbVar10 = (byte *)(lVar13 + 0x471);
          }
        }
        local_64[0] = *pbVar10;
        if (local_64[0] < 8) goto LAB_0136e4e0;
      }
      pbVar10 = &DAT_0548e168;
    }
  }
  else {
    pbVar10 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar13 + 0x15c) != 0) {
      pbVar10 = (byte *)(lVar13 + 0x158);
    }
    if (7 < *pbVar10) {
      if ((*(int *)(lVar13 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar10 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_0136e454;
      }
      goto LAB_0136e460;
    }
  }
  local_64[0] = *pbVar10;
  if (7 < local_64[0]) {
    local_64[0] = 0xff;
  }
LAB_0136e4e0:
  lVar13 = nn::os::GetSystemTick();
  lVar16 = *(long *)PTR_DAT_04bb29d0;
  local_6c = 0xfffe;
  FUN_0277d4ac(&local_6c);
  puVar7 = PTR_DAT_04bb37e0;
  uVar9 = *(uint *)(param_1 + 0x90);
  if (uVar9 == 0) {
LAB_0136e66c:
    bVar15 = true;
  }
  else {
    do {
      uVar14 = 0;
      uVar12 = 0;
      while (*(short *)(*(long *)(param_1 + 0x98) +
                       (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4)) == -2) {
        uVar2 = uVar14 + 1;
        uVar12 = uVar12 + 1;
        uVar14 = uVar2 & 0xffffffff;
        if (uVar9 == (uint)uVar2) goto LAB_0136e66c;
      }
      if (uVar9 <= uVar12) {
        uVar12 = 0;
      }
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x98) + (ulong)uVar12 * 0x10);
      local_6c = *puVar1;
      uVar4 = *(undefined4 *)(puVar1 + 1);
      *(undefined2 *)puVar1 = *(undefined2 *)puVar7;
      *(undefined *)((long)puVar1 + 2) = puVar7[2];
      *(undefined *)((long)puVar1 + 3) = puVar7[3];
      uVar5 = *(undefined4 *)(puVar7 + 4);
      puVar1[1] = 0;
      *(undefined4 *)((long)puVar1 + 4) = uVar5;
      FUN_0267da50(local_64,&local_6c,uVar4);
      lVar8 = nn::os::GetSystemTick();
      lVar8 = lVar8 - lVar13;
      if (lVar8 + 0x8637bd05af6U < 0x10c6f7a0b5ec) {
        lVar11 = 0;
        if (lVar16 != 0) {
          lVar11 = (lVar8 * 1000000) / lVar16;
        }
      }
      else if (lVar8 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
        lVar11 = 0;
        if (lVar16 != 0) {
          lVar11 = (lVar8 * 1000) / lVar16;
        }
        lVar11 = lVar11 * 1000;
      }
      else {
        lVar11 = 0;
        if (lVar16 != 0) {
          lVar11 = lVar8 / lVar16;
        }
        lVar11 = lVar11 * 1000000;
      }
      bVar15 = lVar11 < 0xfa1;
      if (4000 < lVar11) {
        return bVar15;
      }
      local_6c = 0xfffe;
      FUN_0277d4ac(&local_6c);
      uVar9 = *(uint *)(param_1 + 0x90);
    } while (uVar9 != 0);
  }
  return bVar15;
}

