
bool FUN_029056f4(long param_1,undefined4 *param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  ushort uVar7;
  uint *puVar8;
  long lVar9;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint *local_38;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_38 = (uint *)0x0;
  local_48 = PTR_DAT_04bc0510 + 0x10;
  local_40 = *param_2;
  uStack_3c = param_2[1];
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar3 == 0) {
LAB_02905894:
    uVar4 = 1;
    lVar9 = *(long *)(param_1 + 8);
    if (*(int *)(lVar9 + 4) == 1) {
      return true;
    }
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((*(uint *)(lVar9 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_02905894;
    lVar9 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(param_2);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((*(uint *)(lVar9 + 0x1d8) <= uVar4) ||
       (puVar6 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8), puVar6 == (uint *)0x0)
       ) goto LAB_02905894;
    uVar4 = *puVar6;
    if (uVar4 == 0 || puVar6 == (uint *)(ulong)uVar4) {
LAB_029057c8:
      uVar7 = 0;
    }
    else {
      puVar8 = (uint *)((long)puVar6 - (long)(ulong)uVar4);
      uVar7 = 0;
      if (*puVar8 != 0) {
        uVar4 = puVar8[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar9 != 0) {
            uVar2 = 0;
            if ((ulong)uVar4 != 0) {
              uVar2 = (uint)((ulong)((long)puVar6 - lVar9) / (ulong)uVar4);
            }
            if (*puVar8 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326c78) &&
               (uVar7 = *(ushort *)(DAT_05326c80 + (long)(int)uVar2 * 2), uVar7 < 7))
            goto LAB_029057cc;
          }
        }
        goto LAB_029057c8;
      }
    }
LAB_029057cc:
    local_38 = puVar6;
    if (uVar7 == 0) goto LAB_029058d0;
    uVar4 = *puVar6;
    if (uVar4 == 0 || puVar6 == (uint *)(ulong)uVar4) {
LAB_029057e8:
      uVar4 = 0;
    }
    else {
      puVar8 = (uint *)((long)puVar6 - (long)(ulong)uVar4);
      uVar4 = 0;
      if (*puVar8 != 0) {
        uVar4 = puVar8[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar9 != 0) {
            uVar2 = 0;
            if ((ulong)uVar4 != 0) {
              uVar2 = (uint)((ulong)((long)puVar6 - lVar9) / (ulong)uVar4);
            }
            if (*puVar8 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326c78) &&
               (uVar4 = (uint)*(ushort *)(DAT_05326c80 + (long)(int)uVar2 * 2), uVar4 < 7))
            goto LAB_029057ec;
          }
        }
        goto LAB_029057e8;
      }
    }
LAB_029057ec:
    lVar9 = *(long *)(param_1 + 8);
    if (uVar4 == *(uint *)(lVar9 + 4)) {
      return true;
    }
    uVar2 = *puVar6;
    uVar4 = 0;
    if ((uVar2 != 0) && (puVar6 != (uint *)(ulong)uVar2)) {
      puVar8 = (uint *)((long)puVar6 - (long)(ulong)uVar2);
      if ((*puVar8 != 0) && ((uVar4 = puVar8[1], uVar4 != 0 && ((ulong)(ushort)puVar8[2] != 0)))) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar8 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar4 != 0) {
            uVar2 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar4);
          }
          if (*puVar8 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_05326c78) &&
             (uVar7 = *(ushort *)(DAT_05326c80 + (long)(int)uVar2 * 2), uVar4 = (uint)uVar7,
             uVar7 < 7)) goto LAB_029058bc;
        }
      }
      uVar4 = 0;
    }
  }
LAB_029058bc:
  if (uVar4 == *(uint *)(lVar9 + 8)) {
    return true;
  }
LAB_029058d0:
  iVar5 = FUN_01ae0cf0(&local_48);
  if (iVar5 == 0) {
    return false;
  }
  iVar5 = FUN_01ae0cf0(&local_48);
  if (iVar5 == *(int *)(*(long *)(param_1 + 8) + 4)) {
    return true;
  }
  iVar5 = FUN_01ae0cf0(&local_48);
  return iVar5 == *(int *)(*(long *)(param_1 + 8) + 8);
}

