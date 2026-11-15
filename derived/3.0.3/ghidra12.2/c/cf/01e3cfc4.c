
undefined8 FUN_01e3cfc4(long param_1,long param_2)

{
  uint *puVar1;
  byte bVar2;
  ushort uVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  byte local_30 [4];
  uint local_2c [2];
  undefined2 local_24;
  undefined1 local_22;
  
  if (param_2 == 0) {
    return 1;
  }
  bVar2 = *(byte *)(param_2 + 1) & 0xf;
  if (bVar2 != 3) {
    if (bVar2 == 2) {
      if (DAT_053dda88 == 0) {
        return 1;
      }
      if (*(int *)(DAT_053dda88 + 0xc) == 4) {
        return 1;
      }
    }
    else if (bVar2 != 1) {
      return 1;
    }
    *(uint *)(param_1 + 0x69c) = *(uint *)(param_1 + 0x69c) | 0x2000;
    if (*(uint *)(DAT_0537d558 + 0x80) < 2) {
      return 1;
    }
    uVar6 = FUN_02112f44(DAT_053ec470,*(undefined8 *)(param_1 + 0x690),
                         *(undefined4 *)(param_1 + 0x698));
    if ((uVar6 & 1) == 0) {
      return 1;
    }
    FUN_01e3d518(param_1);
    return 1;
  }
  lVar7 = *(long *)(param_1 + 0x3b8);
  if (lVar7 != 0) {
    *(ulong *)(lVar7 + 0xad58) = *(ulong *)(lVar7 + 0xad58) & 0xfffffffffffffffb;
  }
  *(byte *)(param_1 + 0x286) = *(byte *)(param_1 + 0x286) | 8;
  *(uint *)(param_1 + 0x69c) = *(uint *)(param_1 + 0x69c) | 0x2000;
  puVar4 = PTR_DAT_04bb27d0;
  if ((1 < *(uint *)(*(long *)PTR_DAT_04bb27d0 + 0x80)) &&
     (uVar6 = FUN_02112f44(DAT_053ec470,*(undefined8 *)(param_1 + 0x690),
                           *(undefined4 *)(param_1 + 0x698)), (uVar6 & 1) != 0)) {
    FUN_01e3d518(param_1);
  }
  if (DAT_04cd19d8 == 0) {
    pbVar8 = &DAT_0548e140;
LAB_01e3d134:
    if (7 < *pbVar8) {
LAB_01e3d140:
      if (*(long **)puVar4 != (long *)0x0) {
        lVar7 = **(long **)puVar4;
        bVar2 = *(byte *)(lVar7 + 0x473);
        pbVar8 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar7 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar8 = (byte *)(lVar7 + 0x471);
          }
        }
        local_30[0] = *pbVar8;
        if (local_30[0] < 8) goto LAB_01e3d1b8;
      }
      pbVar8 = &DAT_0548e168;
    }
  }
  else {
    pbVar8 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar8 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar8) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar8 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_01e3d134;
      }
      goto LAB_01e3d140;
    }
  }
  local_30[0] = *pbVar8;
  if (7 < local_30[0]) {
    local_30[0] = 0xff;
  }
LAB_01e3d1b8:
  uVar5 = FUN_0267abf0(local_30);
  local_2c[1] = 0;
  local_22 = 0;
  local_24 = 0xff00;
  local_2c[0] = uVar5;
  if (-1 < DAT_053d1460) {
    FUN_01db1df0(**(long **)puVar4 + 0x480,DAT_053d1460,local_2c + 1,local_2c,4,0);
  }
  lVar7 = DAT_053e4ff0;
  lVar9 = **(long **)puVar4;
  bVar2 = *(byte *)(lVar9 + 0x473);
  pbVar8 = PTR_DAT_04bb5038;
  if ((long)(char)bVar2 != 0xffffffffffffffff) {
    puVar1 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
    if (7 < bVar2) {
      puVar1 = (uint *)(lVar9 + 0x48);
    }
    if ((*puVar1 & 8) != 0) {
      pbVar8 = (byte *)(lVar9 + 0x471);
    }
  }
  bVar2 = *pbVar8;
  if (bVar2 < 8) {
    uVar3 = (ushort)(1 << (ulong)(bVar2 & 0x1f));
    if (199 < uVar5) {
      *(ushort *)(DAT_053e4ff0 + 0x26a) = *(ushort *)(DAT_053e4ff0 + 0x26a) | uVar3;
    }
    *(ushort *)(lVar7 + 0x26c) = *(ushort *)(lVar7 + 0x26c) | uVar3;
    *(uint *)(lVar7 + (ulong)(uint)bVar2 * 4 + 0x274) = uVar5;
  }
  FUN_02526a70(DAT_053e4ff0 + 0x269,0);
  return 1;
}

