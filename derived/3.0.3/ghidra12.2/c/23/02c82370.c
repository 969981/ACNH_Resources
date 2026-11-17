
void FUN_02c82370(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  uint *puVar7;
  undefined8 *puVar8;
  short *psVar9;
  uint *puVar10;
  long lVar11;
  undefined *local_60;
  short local_58;
  undefined2 local_56;
  undefined4 local_54;
  uint *local_50;
  undefined4 local_48;
  uint local_44;
  
  psVar9 = (short *)(param_1 + 8);
  *psVar9 = *(short *)(param_2 + 8);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar5 = 0;
    puVar6 = *(undefined8 **)(param_1 + 0x20);
    do {
      puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x18) + lVar5 * 8);
      lVar5 = lVar5 + 1;
      *puVar8 = puVar6;
      *(undefined8 **)(param_1 + 0x20) = puVar8;
      puVar6 = puVar8;
    } while (lVar5 < *(int *)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0x18);
  puVar2 = PTR_DAT_04bb43c0;
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(psVar9);
  lVar5 = *(long *)puVar2;
  if (lVar5 == 0) {
    return;
  }
  lVar11 = *(long *)(lVar11 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
  if (*(uint *)(lVar11 + 0x1d8) <= uVar3) {
    return;
  }
  local_58 = *psVar9;
  if (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar3 * 8) == 0 || local_58 == -2) {
    return;
  }
  local_56 = *(undefined2 *)(param_1 + 10);
  local_50 = (uint *)0x0;
  local_60 = PTR_DAT_04bc0510 + 0x10;
  local_54 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = FUN_0277d6c4(&local_58);
  if (*(long *)puVar2 == 0) {
LAB_02c82520:
    puVar10 = (uint *)0x0;
  }
  else {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((*(uint *)(lVar5 + 0x1d8) <= uVar3) ||
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_02c82520;
    lVar5 = *(long *)PTR_DAT_04bc0428;
    uVar3 = FUN_0277d6c4(psVar9);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if (*(uint *)(lVar5 + 0x1d8) <= uVar3) goto LAB_02c82520;
    puVar10 = *(uint **)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8);
    if (puVar10 != (uint *)0x0) {
      local_50 = puVar10;
    }
  }
  iVar4 = FUN_01ad7260(&local_60);
  uVar3 = 0;
  local_48 = 0;
  if (((puVar10 != (uint *)0x0) && (uVar1 = *puVar10, uVar1 != 0)) &&
     (puVar10 != (uint *)(ulong)uVar1)) {
    puVar7 = (uint *)((long)puVar10 - (long)(ulong)uVar1);
    uVar3 = 0;
    if (*puVar7 != 0) {
      uVar3 = puVar7[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
        lVar5 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          lVar5 = 0x1c;
        }
        lVar5 = (long)puVar7 + lVar5 + (ulong)(ushort)puVar7[2] * 8;
        if (lVar5 != 0) {
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)puVar10 - lVar5) / (ulong)uVar3);
          }
          if (*puVar7 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05326ce8) &&
             (uVar3 = (uint)*(ushort *)(DAT_05326cf0 + (long)(int)uVar1 * 2), uVar3 < 0x5b6))
          goto LAB_02c825c0;
        }
      }
      uVar3 = 0;
    }
  }
LAB_02c825c0:
  if ((uVar3 == 0 && iVar4 == 0) || (*(char *)(param_2 + 0x11) != '\0')) {
    if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14)) {
      puVar6 = *(undefined8 **)(param_1 + 0x20);
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x20) = *puVar6;
      }
      *(undefined2 *)puVar6 = *(undefined2 *)(param_1 + 8);
      *(undefined1 *)((long)puVar6 + 2) = *(undefined1 *)(param_1 + 10);
      *(undefined1 *)((long)puVar6 + 3) = *(undefined1 *)(param_1 + 0xb);
      *(undefined4 *)((long)puVar6 + 4) = *(undefined4 *)(param_1 + 0xc);
      if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14)) {
        *(undefined8 **)(*(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x10) * 8) = puVar6;
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      }
    }
  }
  else {
    local_44 = uVar3;
    if (iVar4 != 0) {
      FUN_02c82670(param_1,param_2 + 0x10);
    }
    if (uVar3 != 0) {
      FUN_02c82e70(param_1,param_2 + 0x10);
    }
  }
  return;
}

