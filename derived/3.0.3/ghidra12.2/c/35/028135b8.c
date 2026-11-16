
void FUN_028135b8(long param_1,undefined8 param_2,undefined4 *param_3)

{
  byte *pbVar1;
  uint uVar2;
  undefined *puVar3;
  undefined2 uVar4;
  uint uVar5;
  byte bVar6;
  ushort uVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  puVar3 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(param_3);
  lVar11 = *(long *)puVar3;
  if (lVar11 == 0) {
    return;
  }
  lVar10 = *(long *)(lVar10 + 0x57e58);
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if (*(uint *)(lVar10 + 0x1d8) <= uVar5) {
    return;
  }
  if (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8) == 0) {
    return;
  }
  local_50 = *param_3;
  uStack_4c = param_3[1];
  pbVar1 = (byte *)(param_1 + 0x30095);
  local_48 = 0;
  uVar5 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar3 != 0) {
    lVar10 = *(long *)(lVar11 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar10 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(param_3);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar10 + 0x1d8)) &&
         (puVar8 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8),
         puVar8 != (uint *)0x0)) {
        uVar5 = *puVar8;
        uVar7 = 0;
        if ((uVar5 != 0) && (puVar8 != (uint *)(ulong)uVar5)) {
          puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar5);
          uVar7 = 0;
          if (*puVar9 != 0) {
            uVar5 = puVar9[1];
            if ((uVar5 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
              lVar10 = 0xc;
              if (*(char *)((long)puVar9 + 10) != '\0') {
                lVar10 = 0x1c;
              }
              lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
              if (lVar10 != 0) {
                uVar2 = 0;
                if ((ulong)uVar5 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar8 - lVar10) / (ulong)uVar5);
                }
                if (*puVar9 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < DAT_05326ec0) &&
                   (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar7 < 0xbd))
                goto LAB_02813758;
              }
            }
            uVar7 = 0;
          }
        }
        goto LAB_02813758;
      }
    }
  }
  uVar7 = 0xbc;
LAB_02813758:
  if (uVar7 == 0x69) {
    bVar6 = *(byte *)(param_1 + 0x3016b);
    if ((ulong)bVar6 < 100) {
      uVar4 = FUN_0277d6c4(param_3);
      *(undefined2 *)(param_1 + (ulong)bVar6 * 2 + 0x30096) = uVar4;
      bVar6 = *(byte *)(param_1 + 0x3016b);
      if ((ulong)bVar6 < 100) {
        lVar10 = param_1 + (ulong)(bVar6 >> 3);
        *(byte *)(lVar10 + 0x3015e) = *(byte *)(lVar10 + 0x3015e) | (byte)(1 << ((ulong)bVar6 & 7));
        bVar6 = *(byte *)(param_1 + 0x3016b);
      }
      *(byte *)(param_1 + 0x3016b) = bVar6 + 1;
    }
  }
  else if (uVar7 == 0x6b) {
    bVar6 = *(byte *)(param_1 + 0x301ec);
    if ((ulong)bVar6 < 0x3c) {
      uVar4 = FUN_0277d6c4(param_3);
      *(undefined2 *)(param_1 + (ulong)bVar6 * 2 + 0x3016c) = uVar4;
      bVar6 = *(byte *)(param_1 + 0x301ec);
      if ((ulong)bVar6 < 0x3c) {
        lVar10 = param_1 + (ulong)(bVar6 >> 3);
        *(byte *)(lVar10 + 0x301e4) = *(byte *)(lVar10 + 0x301e4) | (byte)(1 << ((ulong)bVar6 & 7));
        bVar6 = *(byte *)(param_1 + 0x301ec);
      }
      *(byte *)(param_1 + 0x301ec) = bVar6 + 1;
    }
  }
  else if ((uVar7 == 0x6a) && (bVar6 = *pbVar1, (ulong)bVar6 < 100)) {
    uVar4 = FUN_0277d6c4(param_3);
    *(undefined2 *)(param_1 + (ulong)bVar6 * 2 + 0x2ffc0) = uVar4;
    bVar6 = *pbVar1;
    if ((ulong)bVar6 < 100) {
      param_1 = param_1 + (ulong)(bVar6 >> 3);
      *(byte *)(param_1 + 0x30088) = *(byte *)(param_1 + 0x30088) | (byte)(1 << ((ulong)bVar6 & 7));
      bVar6 = *pbVar1;
    }
    *pbVar1 = bVar6 + 1;
  }
  return;
}

