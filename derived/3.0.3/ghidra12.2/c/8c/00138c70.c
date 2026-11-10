
undefined8 FUN_00138c70(undefined2 *param_1,long param_2)

{
  long lVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  short sVar8;
  byte bVar9;
  ushort uVar10;
  long lVar11;
  uint uVar12;
  ushort uVar13;
  short sVar14;
  int iVar15;
  long lVar16;
  undefined1 auStack_48 [8];
  ushort local_40;
  ushort local_3e;
  ushort local_3c;
  short local_36;
  short local_34;
  
  if ((*(byte *)((long)param_1 + 0x5f) & 0xf) == 3) {
    return 0;
  }
  lVar11 = *(long *)(param_1 + 4);
  bVar9 = *(byte *)((long)param_1 + 0x5f) >> 4;
  uVar7 = (*(uint *)(lVar11 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar11 + 8) & 0xff00ff) << 8;
  uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
  lVar1 = lVar11 + ((ulong)*(byte *)(lVar11 + 0x20) << 0x18 |
                    (ulong)*(byte *)(lVar11 + 0x21) << 0x10 | (ulong)*(byte *)(lVar11 + 0x22) << 8 |
                   (ulong)*(byte *)(lVar11 + 0x23));
  if (bVar9 - 3 < 2) {
    lVar16 = *(long *)(param_1 + 0x10);
    if (lVar16 != 0) goto LAB_00138d10;
    pbVar2 = (byte *)(lVar11 + ((ulong)*(byte *)(lVar11 + 0x38) << 0x18 |
                                (ulong)*(byte *)(lVar11 + 0x39) << 0x10 |
                                (ulong)*(byte *)(lVar11 + 0x3a) << 8 |
                               (ulong)*(byte *)(lVar11 + 0x3b)) +
                     (ulong)(*(int *)(param_1 + 0x1c) * 4 - 4));
    uVar12 = (uint)pbVar2[1] << 0x10 | (uint)pbVar2[2] << 8 | (uint)pbVar2[3];
    local_40 = *pbVar2 & 0x7f;
LAB_00138e6c:
    iVar15 = 6;
    if (uVar7 != 0x50001) {
      iVar15 = 10;
    }
    FUN_00138fe0(lVar11,lVar1 + (ulong)((uVar12 - 1) * iVar15),auStack_48,bVar9);
    uVar13 = local_3c;
    if (bVar9 < 3) {
      *(ushort *)(param_2 + 0x70) = local_3c;
      uVar10 = local_3e;
      goto joined_r0x00138eb4;
    }
    if (bVar9 - 5 < 2) {
      if (local_3e != 0) {
        uVar13 = local_3e;
      }
      *(ushort *)(param_2 + 0x70) = uVar13;
      *(ushort *)(param_2 + 0x72) = uVar13;
      *(char *)(param_2 + 0x75) = (char)local_3c;
      local_3c = uVar13;
      goto LAB_00138f0c;
    }
    if (local_3e != 0) {
      uVar13 = local_3e;
    }
    *(ushort *)(param_2 + 0x70) = uVar13;
  }
  else {
    if (bVar9 - 5 < 2) {
      lVar16 = *(long *)(param_1 + 0xc);
      if (lVar16 == 0) {
        *(undefined1 *)((long)param_1 + 0x5f) = 3;
        return 0;
      }
LAB_00138d10:
      pbVar2 = (byte *)(lVar16 + ((ulong)*(byte *)(lVar16 + 0x10) << 0x18 |
                                  (ulong)*(byte *)(lVar16 + 0x11) << 0x10 |
                                  (ulong)*(byte *)(lVar16 + 0x12) << 8 |
                                 (ulong)*(byte *)(lVar16 + 0x13)) +
                       (ulong)(*(int *)(param_1 + 0x1c) * 4 - 4));
      uVar12 = (uint)pbVar2[1] << 0x10 | (uint)pbVar2[2] << 8 | (uint)pbVar2[3];
      local_40 = *pbVar2 & 0x3f;
      goto LAB_00138e6c;
    }
    if (bVar9 != 2) {
      uVar12 = *(uint *)(param_1 + 0x1c);
      local_40 = 0;
      goto LAB_00138e6c;
    }
    pbVar2 = (byte *)(lVar11 + ((ulong)*(byte *)(lVar11 + 0x2c) << 0x18 |
                                (ulong)*(byte *)(lVar11 + 0x2d) << 0x10 |
                                (ulong)*(byte *)(lVar11 + 0x2e) << 8 |
                               (ulong)*(byte *)(lVar11 + 0x2f)) +
                     (ulong)(*(int *)(param_1 + 0x1c) * 4 - 4));
    local_40 = *pbVar2 & 0x3f;
    iVar15 = 6;
    if (uVar7 != 0x50001) {
      iVar15 = 10;
    }
    FUN_00138fe0(lVar11,lVar1 + (ulong)((((uint)pbVar2[1] << 0x10 | (uint)pbVar2[2] << 8 |
                                         (uint)pbVar2[3]) - 1) * iVar15),auStack_48,2);
    *(ushort *)(param_2 + 0x70) = local_3c;
    uVar10 = local_3e;
    uVar13 = local_3c;
joined_r0x00138eb4:
    local_3c = uVar10;
    if (local_3c == 0) {
      *(ushort *)(param_2 + 0x72) = uVar13;
      local_3c = uVar13;
      goto LAB_00138f0c;
    }
  }
  *(ushort *)(param_2 + 0x72) = local_3c;
LAB_00138f0c:
  *(ushort *)(param_2 + 0x70) = uVar13 & 0x7f | local_36 << 7;
  *(ushort *)(param_2 + 0x72) = local_3c & 0x7f | local_34 << 7;
  if ((bVar9 - 1 & 0xff) < 2) {
    *(undefined2 *)(param_2 + 8) = *param_1;
  }
  else {
    iVar15 = ((uint)(ushort)param_1[3] - (uint)(ushort)param_1[2]) * (uint)local_40;
    sVar8 = param_1[2] +
            ((short)((ulong)((long)iVar15 * 0x51eb851f) >> 0x25) - (short)(iVar15 >> 0x1f));
    *(short *)(param_2 + 8) = sVar8;
    sVar14 = param_1[0x35];
    if ((sVar14 <= sVar8) && (sVar14 = param_1[0x34], sVar8 <= (short)param_1[0x34])) {
      sVar14 = sVar8;
    }
    *(short *)(param_2 + 8) = sVar14;
  }
  lVar1 = *(long *)(param_1 + 4);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)(param_2 + 0x28) = uVar4;
  *(long *)(param_2 + 0x10) = lVar1;
  *(undefined8 *)(param_2 + 0x18) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x14);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)(param_2 + 0x48) = uVar5;
  *(undefined8 *)(param_2 + 0x30) = uVar3;
  *(undefined8 *)(param_2 + 0x38) = uVar4;
  uVar3 = *(undefined8 *)(param_1 + 0x24);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x2c);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  *(undefined1 *)(param_2 + 0x74) = 0;
  *(undefined8 *)(param_2 + 0x60) = uVar4;
  *(undefined8 *)(param_2 + 0x68) = uVar6;
  *(undefined8 *)(param_2 + 0x50) = uVar3;
  *(undefined8 *)(param_2 + 0x58) = uVar5;
  return 1;
}

