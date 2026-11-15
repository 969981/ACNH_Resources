
void FUN_020a15d0(int param_1,byte param_2)

{
  uint *puVar1;
  ushort uVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  ushort uVar7;
  long lVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  long *plVar11;
  byte bVar12;
  long lVar13;
  undefined1 local_48 [4];
  byte local_44 [4];
  undefined1 local_40;
  byte bStack_3f;
  undefined1 uStack_3e;
  byte bStack_3d;
  byte local_3c;
  byte local_38 [4];
  byte local_34 [4];
  
  lVar4 = DAT_053dda88;
  puVar3 = PTR_DAT_04bb27d0;
  if (DAT_053dda88 == 0) {
    return;
  }
  if (*(int *)(DAT_053dda88 + 0xc) != 0) {
    return;
  }
  lVar8 = *(long *)PTR_DAT_04bb39b0;
  pbVar10 = PTR_DAT_04bb32e0;
  if (lVar8 == 0) {
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_020a1678;
LAB_020a16e0:
    local_44[0] = *pbVar10;
    if (7 < local_44[0]) {
      local_44[0] = 0xff;
    }
    plVar11 = *(long **)PTR_DAT_04bb27d0;
    lVar13 = *plVar11;
    bVar12 = *(byte *)(lVar13 + 0x473);
  }
  else {
    if (*(int *)(lVar8 + 0x15c) != 0) {
      pbVar10 = (byte *)(lVar8 + 0x158);
    }
    if ((*pbVar10 < 8) ||
       (((*(int *)(lVar8 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar10 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar10 < 8)))) goto LAB_020a16e0;
LAB_020a1678:
    plVar11 = *(long **)PTR_DAT_04bb27d0;
    if (plVar11 == (long *)0x0) {
LAB_020a16d8:
      pbVar10 = PTR_DAT_04bb5038;
      goto LAB_020a16e0;
    }
    lVar13 = *plVar11;
    bVar12 = *(byte *)(lVar13 + 0x473);
    pbVar10 = PTR_DAT_04bb5038;
    if ((long)(char)bVar12 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar12 & 0xffffffffU) * 0x20;
      if (7 < bVar12) {
        puVar1 = (uint *)(lVar13 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar10 = (byte *)(lVar13 + 0x471);
      }
    }
    local_44[0] = *pbVar10;
    if (7 < local_44[0]) goto LAB_020a16d8;
  }
  pbVar10 = PTR_DAT_04bc1220;
  if (bVar12 != 0xff) {
    puVar1 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar12 & 0xffffffffU) * 0x20;
    if (7 < bVar12) {
      puVar1 = (uint *)(lVar13 + 0x48);
    }
    if ((*puVar1 & 8) != 0) {
      pbVar10 = (byte *)(lVar13 + 0x473);
    }
  }
  local_3c = *pbVar10 >> 2 & 3;
  uVar2 = *(ushort *)PTR_DAT_04bb6298;
  _local_40 = CONCAT13(*pbVar10 << 6 | (byte)(uVar2 >> 4) & 0x3f,
                       CONCAT12((char)(CONCAT24(uVar2,param_1 << 0x18) >> 0x1c),
                                CONCAT11((byte)(param_1 << 4) | param_2 & 0xf,0x30)));
  if (lVar8 == 0) {
    local_38[0] = *PTR_DAT_04bb32e0;
    if (7 < local_38[0]) goto LAB_020a17e0;
LAB_020a1840:
    if (7 < local_38[0]) {
      local_38[0] = 0xff;
    }
  }
  else {
    pbVar10 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar8 + 0x15c) != 0) {
      pbVar10 = (byte *)(lVar8 + 0x158);
    }
    local_38[0] = *pbVar10;
    if ((local_38[0] < 8) ||
       (((*(int *)(lVar8 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (local_38[0] = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), local_38[0] < 8))))
    goto LAB_020a1840;
LAB_020a17e0:
    lVar8 = *plVar11;
    bVar12 = *(byte *)(lVar8 + 0x473);
    pbVar10 = PTR_DAT_04bb5038;
    if ((long)(char)bVar12 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar12 & 0xffffffffU) * 0x20;
      if (7 < bVar12) {
        puVar1 = (uint *)(lVar8 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar10 = (byte *)(lVar8 + 0x471);
      }
    }
    local_38[0] = *pbVar10;
    if (7 < local_38[0]) {
      local_38[0] = *PTR_DAT_04bb5038;
      goto LAB_020a1840;
    }
  }
  uVar6 = FUN_0255b714(local_38,1);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (local_38[0] < 8) {
    lVar8 = **(long **)puVar3;
    if (*(byte *)(lVar8 + 0x476) < 2) {
      iVar5 = FUN_02582d8c(local_38,2);
      if (-1 < iVar5) goto LAB_020a18a8;
    }
    else {
      local_34[0] = local_38[0];
      uVar6 = FUN_01d3e2d0(lVar8 + 8,local_34);
      if ((uVar6 & 1) != 0) {
LAB_020a18a8:
        if ((ulong)local_38[0] < 8) {
          uVar7 = *(ushort *)(PTR_DAT_04bc31b0 + (ulong)local_38[0] * 0x30 + 9);
          goto LAB_020a18d0;
        }
      }
    }
  }
  uVar7 = 0xffff;
LAB_020a18d0:
  if (((uVar7 == uVar2) &&
      ((*(long *)PTR_DAT_04bb7ff8 == 0 || (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) == 0)))) &&
     (uVar6 = FUN_0255c138(local_44,1), (uVar6 & 1) != 0)) {
    lVar8 = **(long **)puVar3;
    bVar12 = *(byte *)(lVar8 + 0x473);
    puVar9 = PTR_DAT_04bc1220;
    if ((long)(char)bVar12 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar12 & 0xffffffffU) * 0x20;
      if (7 < bVar12) {
        puVar1 = (uint *)(lVar8 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        puVar9 = (undefined1 *)(lVar8 + 0x473);
      }
    }
    local_48[0] = *puVar9;
    FUN_020a0a44(lVar4,&local_40,local_48,1);
    FUN_020680f4(*(undefined8 *)PTR_DAT_04bb7198,&local_40);
    *(byte *)(lVar4 + 4) = bStack_3d >> 6 | (local_3c & 3) << 2;
    *(int *)(lVar4 + 8) = param_1;
    *(undefined4 *)(lVar4 + 0xc) = 1;
  }
  return;
}

