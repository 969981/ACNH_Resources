
undefined8 FUN_001271f0(undefined2 *param_1,long param_2)

{
  long *plVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  short sVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  ushort uVar13;
  ulong uVar14;
  short sVar15;
  undefined4 uVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auStack_68 [8];
  ushort local_60;
  ushort local_5e;
  ushort local_5c;
  short local_56;
  short local_54;
  byte *local_48;
  
  if ((*(byte *)((long)param_1 + 0x5f) & 0xf) == 3) {
    return 0;
  }
  plVar1 = (long *)(param_1 + 4);
  lVar12 = *plVar1;
  uVar14 = *(ulong *)(lVar12 + 8);
  iVar11 = *(int *)(lVar12 + 0x70);
  bVar9 = *(byte *)((long)param_1 + 0x5f) >> 4;
  uVar18 = (*(uint *)(uVar14 + 0x20) & 0xff00ff00) >> 8 | (*(uint *)(uVar14 + 0x20) & 0xff00ff) << 8
  ;
  uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
  if (bVar9 - 3 < 2) {
    lVar17 = *(long *)(param_1 + 0x10);
    if (lVar17 == 0) {
      uVar19 = (*(uint *)(uVar14 + 0x38) & 0xff00ff00) >> 8 |
               (*(uint *)(uVar14 + 0x38) & 0xff00ff) << 8;
      iVar10 = FUN_0010dbc0(lVar12,3,(uVar19 >> 0x10 | uVar19 << 0x10) +
                                     *(int *)(param_1 + 0x1c) * 4 + -4,4,&local_48);
      if (iVar10 < 0) {
        *(undefined1 *)((long)param_1 + 0x5f) = 3;
        return 0;
      }
      uVar19 = (uint)local_48[1] << 0x10 | (uint)local_48[2] << 8 | (uint)local_48[3];
      local_60 = *local_48 & 0x7f;
      lVar12 = *plVar1;
      uVar14 = (ulong)*(byte *)(lVar12 + 8);
    }
    else {
      lVar17 = lVar17 + ((ulong)*(byte *)(lVar17 + 0x10) << 0x18 |
                         (ulong)*(byte *)(lVar17 + 0x11) << 0x10 |
                         (ulong)*(byte *)(lVar17 + 0x12) << 8 | (ulong)*(byte *)(lVar17 + 0x13));
LAB_00127304:
      pbVar2 = (byte *)(lVar17 + (ulong)(*(int *)(param_1 + 0x1c) * 4 - 4));
      uVar19 = (uint)pbVar2[1] << 0x10 | (uint)pbVar2[2] << 8 | (uint)pbVar2[3];
      local_60 = *pbVar2 & 0x3f;
    }
    iVar10 = 6;
    if (iVar11 != 0x40050001) {
      iVar10 = 10;
    }
    uVar16 = 6;
    if (((int)uVar14 << 0x18 | (uint)*(byte *)(lVar12 + 9) << 0x10 |
         (uint)*(byte *)(lVar12 + 10) << 8 | (uint)*(byte *)(lVar12 + 0xb)) != 0x40050001) {
      uVar16 = 10;
    }
    iVar10 = FUN_0010dbc0(lVar12,5,uVar18 + (uVar19 - 1) * iVar10,uVar16,&local_48);
    if (iVar10 < 0) goto LAB_00127408;
  }
  else if (bVar9 - 5 < 2) {
    lVar12 = *(long *)(param_1 + 0xc);
    if (lVar12 == 0) goto LAB_00127408;
    pbVar2 = (byte *)(lVar12 + ((ulong)*(byte *)(lVar12 + 0x10) << 0x18 |
                                (ulong)*(byte *)(lVar12 + 0x11) << 0x10 |
                                (ulong)*(byte *)(lVar12 + 0x12) << 8 |
                               (ulong)*(byte *)(lVar12 + 0x13)) +
                     (ulong)(*(int *)(param_1 + 0x1c) * 4 - 4));
    uVar19 = (uint)pbVar2[1] << 0x10 | (uint)pbVar2[2] << 8 | (uint)pbVar2[3];
    local_60 = *pbVar2 & 0x3f;
  }
  else {
    if (bVar9 == 2) {
      lVar17 = *(long *)(lVar12 + 0x50);
      goto LAB_00127304;
    }
    uVar19 = *(uint *)(param_1 + 0x1c);
    local_60 = 0;
  }
  iVar10 = 6;
  if (iVar11 != 0x40050001) {
    iVar10 = 10;
  }
  uVar7 = *(uint *)(*plVar1 + 8);
  uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
  uVar16 = 6;
  if ((uVar7 >> 0x10 | uVar7 << 0x10) != 0x40050001) {
    uVar16 = 10;
  }
  iVar11 = FUN_0010dbc0(*plVar1,5,uVar18 + (uVar19 - 1) * iVar10,uVar16,&local_48);
  if (iVar11 < 0) {
LAB_00127408:
    *(undefined1 *)((long)param_1 + 0x5f) = 3;
    return 0;
  }
  FUN_001275b0(*plVar1,local_48,auStack_68,bVar9,uVar19);
  uVar18 = (uint)bVar9;
  uVar13 = local_5c;
  if (uVar18 < 3) {
    *(ushort *)(param_2 + 0x70) = local_5c;
    uVar13 = local_5e;
    if (local_5e == 0) {
      *(ushort *)(param_2 + 0x72) = local_5c;
      uVar13 = local_5c;
      goto LAB_001274c0;
    }
  }
  else {
    if (uVar18 - 5 < 2) {
      if (local_5e != 0) {
        uVar13 = local_5e;
      }
      *(ushort *)(param_2 + 0x70) = uVar13;
      *(ushort *)(param_2 + 0x72) = uVar13;
      *(char *)(param_2 + 0x75) = (char)local_5c;
      local_5c = uVar13;
      goto LAB_001274c0;
    }
    if (local_5e != 0) {
      local_5c = local_5e;
    }
    *(ushort *)(param_2 + 0x70) = local_5c;
  }
  *(ushort *)(param_2 + 0x72) = uVar13;
LAB_001274c0:
  *(ushort *)(param_2 + 0x70) = local_5c & 0x7f | local_56 << 7;
  *(ushort *)(param_2 + 0x72) = uVar13 & 0x7f | local_54 << 7;
  if ((uVar18 - 1 & 0xff) < 2) {
    *(undefined2 *)(param_2 + 8) = *param_1;
  }
  else {
    iVar11 = ((uint)(ushort)param_1[3] - (uint)(ushort)param_1[2]) * (uint)local_60;
    sVar8 = param_1[2] +
            ((short)((ulong)((long)iVar11 * 0x51eb851f) >> 0x25) - (short)(iVar11 >> 0x1f));
    *(short *)(param_2 + 8) = sVar8;
    sVar15 = param_1[0x35];
    if ((sVar15 <= sVar8) && (sVar15 = param_1[0x34], sVar8 <= (short)param_1[0x34])) {
      sVar15 = sVar8;
    }
    *(short *)(param_2 + 8) = sVar15;
  }
  lVar12 = *plVar1;
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)(param_2 + 0x28) = uVar4;
  *(long *)(param_2 + 0x10) = lVar12;
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

