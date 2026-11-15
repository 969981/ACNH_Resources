
void FUN_01e3d518(long param_1)

{
  uint *puVar1;
  byte bVar2;
  ushort uVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  byte *pbVar7;
  char *pcVar8;
  ulong uVar9;
  long lVar10;
  byte local_14 [4];
  
  plVar4 = DAT_0537d558;
  if (*(uint *)(DAT_0537d558 + 0x10) < 2) {
    return;
  }
  uVar6 = *(uint *)(param_1 + 0x69c);
  if ((uVar6 >> 0xe & 1) != 0) {
    return;
  }
  if ((*(uint *)(param_1 + 0x248) >> 0xe & 1) == 0) {
    return;
  }
  lVar10 = *DAT_0537d558;
  bVar2 = *(byte *)(lVar10 + 0x473);
  pcVar8 = PTR_DAT_04bc1220;
  if ((long)(char)bVar2 != 0xffffffffffffffff) {
    puVar1 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
    if (7 < bVar2) {
      puVar1 = (uint *)(lVar10 + 0x48);
    }
    if ((*puVar1 & 8) != 0) {
      pcVar8 = (char *)(lVar10 + 0x473);
    }
  }
  if (((ulong)*(ushort *)(param_1 + 0x284) < 1000) &&
     (uVar9 = *(ulong *)(param_1 + 0x748) | (long)*pcVar8 << 0x20, uVar9 >> 0x35 == 0)) {
    (&DAT_04d9fe98)[(ulong)*(ushort *)(param_1 + 0x284) * 2] =
         uVar9 | 0x1000000000 | (ulong)*(uint *)(param_1 + 0x15c) << 0x35;
    uVar6 = *(uint *)(param_1 + 0x69c);
  }
  *(uint *)(param_1 + 0x69c) = uVar6 | 0x4000;
  *(byte *)(param_1 + 0x286) = *(byte *)(param_1 + 0x286) & 0xfb;
  if ((uVar6 >> 0xd & 1) == 0) {
    return;
  }
  if (*(int *)(DAT_053dda88 + 0xc) == 4) {
    return;
  }
  if (DAT_04cd19d8 == 0) {
    local_14[0] = DAT_0548e140;
LAB_01e3d65c:
    if (7 < local_14[0]) {
LAB_01e3d664:
      lVar10 = *plVar4;
      bVar2 = *(byte *)(lVar10 + 0x473);
      pbVar7 = PTR_DAT_04bb5038;
      if ((long)(char)bVar2 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
        if (7 < bVar2) {
          puVar1 = (uint *)(lVar10 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar7 = (byte *)(lVar10 + 0x471);
        }
      }
      local_14[0] = *pbVar7;
      if (local_14[0] < 8) goto LAB_01e3d6d4;
      local_14[0] = *PTR_DAT_04bb5038;
    }
  }
  else {
    pbVar7 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar7 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    local_14[0] = *pbVar7;
    if (7 < local_14[0]) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        local_14[0] = *(byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_01e3d65c;
      }
      goto LAB_01e3d664;
    }
  }
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
LAB_01e3d6d4:
  uVar3 = *(ushort *)(param_1 + 0x284);
  if (uVar3 < 1000) {
    if ((DAT_04c47dc0 < (short)uVar3) ||
       (*(int *)(PTR_DAT_04bb6258 + ((long)(short)uVar3 & 0xffffffffU) * 0x10) == 0)) {
      uVar5 = 0xffffffffffffffff;
    }
    else {
      uVar5 = *(undefined8 *)(PTR_DAT_04bb6258 + (long)(short)uVar3 * 0x10 + 8);
    }
    FUN_00a77550(local_14,uVar5,0,4);
  }
  return;
}

