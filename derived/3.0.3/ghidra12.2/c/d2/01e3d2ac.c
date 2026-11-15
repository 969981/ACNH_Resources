
undefined8 FUN_01e3d2ac(long param_1,long param_2)

{
  uint *puVar1;
  ushort uVar2;
  byte bVar3;
  ushort uVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  byte *pbVar8;
  byte local_30 [4];
  uint local_2c [2];
  undefined2 local_24;
  undefined1 local_22;
  
  if (param_2 == 0) {
    return 1;
  }
  bVar3 = *(byte *)(param_2 + 1) & 0xf;
  if (bVar3 != 3) {
    if (bVar3 == 2) {
      if ((*(long *)PTR_DAT_04bb5010 != 0) && (*(int *)(*(long *)PTR_DAT_04bb5010 + 0xc) != 4))
      goto LAB_01e3d394;
    }
    else if (bVar3 == 1) {
LAB_01e3d394:
      *(uint *)(param_1 + 0x69c) = *(uint *)(param_1 + 0x69c) | 0x2000;
      return 1;
    }
    return 1;
  }
  lVar7 = *(long *)(param_1 + 0x3b8);
  if (lVar7 != 0) {
    *(ulong *)(lVar7 + 0xad58) = *(ulong *)(lVar7 + 0xad58) & 0xfffffffffffffffb;
  }
  *(byte *)(param_1 + 0x286) = *(byte *)(param_1 + 0x286) | 8;
  *(uint *)(param_1 + 0x69c) = *(uint *)(param_1 + 0x69c) | 0x2000;
  puVar5 = PTR_DAT_04bb27d0;
  lVar7 = *(long *)PTR_DAT_04bb39b0;
  pbVar8 = PTR_DAT_04bb32e0;
  if (lVar7 == 0) {
LAB_01e3d3b0:
    if (7 < *pbVar8) {
LAB_01e3d3bc:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar7 = **(long **)PTR_DAT_04bb27d0;
        bVar3 = *(byte *)(lVar7 + 0x473);
        pbVar8 = PTR_DAT_04bb5038;
        if ((long)(char)bVar3 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
          if (7 < bVar3) {
            puVar1 = (uint *)(lVar7 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar8 = (byte *)(lVar7 + 0x471);
          }
        }
        local_30[0] = *pbVar8;
        if (local_30[0] < 8) goto LAB_01e3d434;
      }
      pbVar8 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar7 + 0x15c) != 0) {
      pbVar8 = (byte *)(lVar7 + 0x158);
    }
    if (7 < *pbVar8) {
      if ((*(int *)(lVar7 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar8 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01e3d3b0;
      }
      goto LAB_01e3d3bc;
    }
  }
  local_30[0] = *pbVar8;
  if (7 < local_30[0]) {
    local_30[0] = 0xff;
  }
LAB_01e3d434:
  uVar6 = FUN_0267abf0(local_30);
  local_2c[1] = 0;
  local_22 = 0;
  local_24 = 0xff00;
  if (-1 < DAT_053d1460) {
    local_2c[0] = uVar6;
    FUN_01db1df0(**(long **)puVar5 + 0x480,DAT_053d1460,local_2c + 1,local_2c,4,0);
  }
  lVar7 = **(long **)puVar5;
  bVar3 = *(byte *)(lVar7 + 0x473);
  pbVar8 = PTR_DAT_04bb5038;
  if ((long)(char)bVar3 != 0xffffffffffffffff) {
    puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
    if (7 < bVar3) {
      puVar1 = (uint *)(lVar7 + 0x48);
    }
    if ((*puVar1 & 8) != 0) {
      pbVar8 = (byte *)(lVar7 + 0x471);
    }
  }
  bVar3 = *pbVar8;
  if (bVar3 < 8) {
    lVar7 = *(long *)PTR_DAT_04bb4128;
    uVar4 = (ushort)(1 << (ulong)(bVar3 & 0x1f));
    if (199 < uVar6) {
      *(ushort *)(lVar7 + 0x26a) = *(ushort *)(lVar7 + 0x26a) | uVar4;
    }
    uVar2 = *(ushort *)(lVar7 + 0x26c);
    *(uint *)(lVar7 + (ulong)(uint)bVar3 * 4 + 0x274) = uVar6;
    *(ushort *)(lVar7 + 0x26c) = uVar2 | uVar4;
  }
  return 1;
}

