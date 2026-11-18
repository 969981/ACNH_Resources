
void FUN_0342caf0(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  ushort uVar6;
  ushort uVar7;
  uint *puVar8;
  long lVar9;
  uint *puVar10;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  puVar2 = PTR_DAT_04bb43c0;
  local_48 = 0;
  local_58 = PTR_DAT_04bc0510 + 0x10;
  local_50 = *param_1;
  uStack_4c = param_1[1];
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar2 == 0) {
LAB_0342cbb4:
    puVar10 = (uint *)0x0;
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((*(uint *)(lVar9 + 0x1d8) <= uVar3) ||
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_0342cbb4;
    lVar9 = *(long *)PTR_DAT_04bc0428;
    uVar3 = FUN_0277d6c4(param_1);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if (*(uint *)(lVar9 + 0x1d8) <= uVar3) goto LAB_0342cbb4;
    puVar10 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8);
  }
  local_68 = *param_2;
  uStack_64 = param_2[1];
  lVar9 = *(long *)puVar2;
  local_60 = 0;
  uVar3 = FUN_0277d6c4(&local_68);
  puVar5 = (uint *)0x0;
  if (*(long *)puVar2 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if (uVar3 < *(uint *)(lVar9 + 0x1d8)) {
      puVar5 = (uint *)0x0;
      if (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0) {
        lVar9 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(param_2);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if (*(uint *)(lVar9 + 0x1d8) <= uVar3) goto LAB_0342cc48;
        puVar5 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8);
      }
    }
    else {
LAB_0342cc48:
      puVar5 = (uint *)0x0;
    }
  }
  uVar6 = 0;
  if (puVar10 == (uint *)0x0) goto LAB_0342ce68;
  uVar3 = *puVar10;
  if ((uVar3 != 0) && (puVar10 != (uint *)(ulong)uVar3)) {
    puVar8 = (uint *)((long)puVar10 - (long)(ulong)uVar3);
    uVar6 = 0;
    if (*puVar8 != 0) {
      uVar3 = puVar8[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
        lVar9 = 0xc;
        if (*(char *)((long)puVar8 + 10) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
        if (lVar9 != 0) {
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)puVar10 - lVar9) / (ulong)uVar3);
          }
          if (*puVar8 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05326ce8) &&
             (uVar6 = *(ushort *)(DAT_05326cf0 + (long)(int)uVar1 * 2), uVar6 < 0x5b6))
          goto LAB_0342cce0;
        }
      }
      uVar6 = 0;
    }
  }
LAB_0342cce0:
  if (uVar6 == 0) goto LAB_0342ce68;
  uVar3 = *puVar10;
  uVar6 = 0;
  if ((uVar3 != 0) && (puVar10 != (uint *)(ulong)uVar3)) {
    puVar8 = (uint *)((long)puVar10 - (long)(ulong)uVar3);
    uVar6 = 0;
    if (*puVar8 != 0) {
      uVar3 = puVar8[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
        lVar9 = 0xc;
        if (*(char *)((long)puVar8 + 10) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
        if (lVar9 != 0) {
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)puVar10 - lVar9) / (ulong)uVar3);
          }
          if (*puVar8 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05326ce8) &&
             (uVar6 = *(ushort *)(DAT_05326cf0 + (long)(int)uVar1 * 2), uVar6 < 0x5b6))
          goto LAB_0342cd98;
        }
      }
      uVar6 = 0;
    }
  }
LAB_0342cd98:
  uVar7 = 0;
  if (((puVar5 != (uint *)0x0) && (uVar3 = *puVar5, uVar3 != 0)) && (puVar5 != (uint *)(ulong)uVar3)
     ) {
    puVar10 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
    uVar7 = 0;
    if (*puVar10 != 0) {
      uVar3 = puVar10[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
        lVar9 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar10 + lVar9 + (ulong)(ushort)puVar10[2] * 8;
        if (lVar9 != 0) {
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)puVar5 - lVar9) / (ulong)uVar3);
          }
          if (*puVar10 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05326ce8) &&
             (uVar7 = *(ushort *)(DAT_05326cf0 + (long)(int)uVar1 * 2), uVar7 < 0x5b6))
          goto LAB_0342ce30;
        }
      }
      uVar7 = 0;
    }
  }
LAB_0342ce30:
  if ((uVar6 == uVar7) && (iVar4 = FUN_0342ce90(param_1,param_2), iVar4 != 0)) {
    return;
  }
LAB_0342ce68:
  FUN_01a4e630(param_1,param_2);
  return;
}

