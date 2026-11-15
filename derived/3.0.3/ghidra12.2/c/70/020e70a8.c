
void FUN_020e70a8(long param_1,int param_2,int param_3,undefined4 param_4,byte *param_5)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  ushort uVar6;
  byte bVar7;
  undefined2 uVar8;
  undefined *puVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  long lVar15;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined2 local_3a;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  if (param_3 == 2) {
    *(undefined4 *)(param_1 + 0x29c) = param_4;
    *(undefined4 *)(param_1 + 0x298) = 2;
    if (*(int *)(param_1 + 0x294) == 3) {
      *(short *)(param_1 + 0x26e) = (short)param_4;
      return;
    }
    return;
  }
  if (param_3 != 0) {
    return;
  }
  lVar15 = *(long *)PTR_DAT_04bb39b0;
  pbVar13 = PTR_DAT_04bb32e0;
  if (lVar15 == 0) {
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_020e7160;
LAB_020e71c0:
    uVar12 = (uint)*pbVar13;
    if (7 < uVar12) {
      uVar12 = 0xff;
    }
  }
  else {
    if (*(int *)(lVar15 + 0x15c) != 0) {
      pbVar13 = (byte *)(lVar15 + 0x158);
    }
    if ((*pbVar13 < 8) ||
       (((*(int *)(lVar15 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar13 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar13 < 8)))) goto LAB_020e71c0;
LAB_020e7160:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_020e71b8:
      pbVar13 = PTR_DAT_04bb5038;
      goto LAB_020e71c0;
    }
    lVar15 = **(long **)PTR_DAT_04bb27d0;
    bVar5 = *(byte *)(lVar15 + 0x473);
    pbVar13 = PTR_DAT_04bb5038;
    if ((long)(char)bVar5 != 0xffffffffffffffff) {
      puVar11 = (uint *)(lVar15 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
      if (7 < bVar5) {
        puVar11 = (uint *)(lVar15 + 0x48);
      }
      if ((*puVar11 & 8) != 0) {
        pbVar13 = (byte *)(lVar15 + 0x471);
      }
    }
    uVar12 = (uint)*pbVar13;
    if (7 < *pbVar13) goto LAB_020e71b8;
  }
  bVar5 = *param_5;
  if (bVar5 == *PTR_DAT_04bb5018) {
    *(int *)(param_1 + 0x294) = param_2;
    *(undefined4 *)(param_1 + 0x29c) = param_4;
    *(undefined4 *)(param_1 + 0x298) = 1;
    uVar10 = uVar12;
  }
  else {
    bVar7 = *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x473);
    puVar11 = (uint *)PTR_DAT_04bb32e0;
    if ((long)(char)bVar7 == 0xffffffffffffffff) {
LAB_020e723c:
      puVar11 = (uint *)PTR_DAT_04bb5038;
      if (*PTR_DAT_04bc1220 != bVar5) {
        puVar11 = (uint *)PTR_DAT_04bb32e0;
      }
    }
    else {
      puVar1 = (uint *)(**(long **)PTR_DAT_04bb27d0 + 0x48);
      puVar2 = puVar1 + ((long)(char)bVar7 & 0xffffffffU) * 0x20;
      if (7 < bVar7) {
        puVar2 = puVar1;
      }
      if ((*puVar2 >> 3 & 1) == 0) goto LAB_020e723c;
      if (bVar5 != 0xff) {
        puVar2 = puVar1 + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
        if (7 < bVar5) {
          puVar2 = puVar1;
        }
        if ((*puVar2 & 1) != 0) {
          puVar11 = puVar2 + 0x1e;
        }
      }
    }
    uVar10 = (uint)(byte)*puVar11;
  }
  if (7 < uVar10) {
    uVar10 = 0xff;
  }
  if (param_2 == 6) {
    *(ushort *)(param_1 + 0x26c) =
         *(ushort *)(param_1 + 0x26c) & ((ushort)(1 << (ulong)(uVar10 & 0x1f)) ^ 0xffff);
  }
  puVar9 = PTR_DAT_04bb27d0;
  if (7 < uVar12) {
    uVar12 = 0xff;
  }
  uVar14 = (uint)*(byte *)(param_1 + 0x269);
  if (7 < uVar14) {
    uVar14 = 0xff;
  }
  if (uVar12 != uVar14) {
    return;
  }
  uVar6 = *(ushort *)(param_1 + 0x2a0);
  uVar12 = 1 << (ulong)(uVar10 & 0x1f);
  uVar10 = uVar6 | uVar12;
  *(short *)(param_1 + 0x2a0) = (short)uVar10;
  uVar12 = ((uint)uVar6 | uVar12 & 0xffff) - (uVar10 >> 1 & 0x5555);
  uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
  uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
  uVar12 = uVar12 + (uVar12 >> 8);
  lVar15 = **(long **)puVar9;
  bVar5 = *(byte *)(lVar15 + 0x473);
  if ((long)(char)bVar5 != 0xffffffffffffffff) {
    pbVar13 = (byte *)(lVar15 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x80;
    if (7 < bVar5) {
      pbVar13 = (byte *)(lVar15 + 0x48);
    }
    if ((*pbVar13 >> 3 & 1) != 0) {
      uVar10 = (uint)*(byte *)(lVar15 + 0x477);
      goto joined_r0x020e735c;
    }
  }
  uVar10 = FUN_0250a5c8(*(undefined8 *)PTR_DAT_04bb4fb8);
joined_r0x020e735c:
  if ((uVar12 + (uVar12 >> 0x10) & 0x3f) == uVar10) {
    if (*(int *)(param_1 + 0x294) == 3) {
      FUN_020e7420(param_1);
    }
    uVar3 = *(undefined4 *)(param_1 + 0x29c);
    local_3b = 2;
    local_38 = 0;
    local_32 = 0;
    local_3c = (undefined1)*(undefined4 *)(param_1 + 0x294);
    uVar8 = (undefined2)uVar3;
    local_34 = 0xff00;
    if (-1 < DAT_053d1490) {
      local_3a = uVar8;
      FUN_01db1df0(**(long **)puVar9 + 0x480,DAT_053d1490,&local_38,&local_3c,4,0);
    }
    lVar15 = DAT_053e4ff0;
    iVar4 = *(int *)(DAT_053e4ff0 + 0x294);
    *(undefined4 *)(DAT_053e4ff0 + 0x298) = 2;
    *(undefined4 *)(lVar15 + 0x29c) = uVar3;
    if (iVar4 == 3) {
      *(undefined2 *)(lVar15 + 0x26e) = uVar8;
    }
    *(undefined2 *)(param_1 + 0x2a0) = 0;
    *(undefined4 *)(param_1 + 0x298) = 2;
  }
  return;
}

