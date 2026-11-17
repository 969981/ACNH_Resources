
void FUN_0311a6e0(long param_1,undefined4 *param_2,byte *param_3)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  ushort uVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar8;
  uint *puVar9;
  undefined4 uVar10;
  uint *puVar11;
  long lVar12;
  long lVar13;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  
  puVar3 = PTR_DAT_04bb43c0;
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(param_2);
  lVar12 = *(long *)puVar3;
  if (lVar12 == 0) {
    return;
  }
  lVar13 = *(long *)(lVar13 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
  if (*(uint *)(lVar13 + 0x1d8) <= uVar4) {
    return;
  }
  if (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
    return;
  }
  local_50 = 0;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uVar4 = FUN_0277d6c4(&local_58);
  if (*(long *)puVar3 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar12 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_2);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar12 + 0x1d8)) &&
         (puVar9 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8),
         puVar9 != (uint *)0x0)) {
        uVar5 = 0;
        uVar4 = *puVar9;
        if ((uVar4 != 0) && (puVar9 != (uint *)(ulong)uVar4)) {
          puVar11 = (uint *)((long)puVar9 - (long)(ulong)uVar4);
          uVar5 = 0;
          if (*puVar11 != 0) {
            uVar4 = puVar11[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
              lVar12 = 0xc;
              if (*(char *)((long)puVar11 + 10) != '\0') {
                lVar12 = 0x1c;
              }
              lVar12 = (long)puVar11 + lVar12 + (ulong)(ushort)puVar11[2] * 8;
              if (lVar12 != 0) {
                uVar1 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar9 - lVar12) / (ulong)uVar4);
                }
                if (*puVar11 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326ec0) &&
                   (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar5 < 0xbd))
                goto LAB_0311a88c;
              }
            }
            uVar5 = 0;
          }
        }
        goto LAB_0311a88c;
      }
    }
  }
  uVar5 = 0xbc;
LAB_0311a88c:
  if (uVar5 != 0x86) {
    return;
  }
  bVar7 = *(byte *)(param_1 + 0x230);
  if (7 < bVar7) {
    bVar7 = 0xff;
  }
  bVar8 = *param_3;
  if (7 < bVar8) {
    bVar8 = 0xff;
  }
  if (bVar7 != bVar8) {
    *(byte *)(param_1 + 0x230) = bVar8;
  }
  iVar2 = *(int *)(param_1 + 0x1b0);
  if (iVar2 == 5) {
    uVar6 = (ulong)*(byte *)(param_1 + 0x200);
    if (*(int *)(param_1 + 0x1f0 + uVar6 * 4) != -1) {
      return;
    }
    uVar10 = 2;
  }
  else {
    if (iVar2 != 4) {
      if (iVar2 == 3) {
        *(undefined4 *)(param_1 + 0x228) = 0;
        return;
      }
      return;
    }
    uVar6 = (ulong)*(byte *)(param_1 + 0x200);
    *(undefined4 *)(param_1 + 0x228) = 0;
    if (*(int *)(param_1 + 0x1f0 + uVar6 * 4) != -1) {
      return;
    }
    uVar10 = 3;
  }
  *(undefined4 *)(param_1 + 0x1f0 + uVar6 * 4) = uVar10;
  return;
}

