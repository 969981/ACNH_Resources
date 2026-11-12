
undefined8 FUN_00b960f8(long param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint *local_38;
  
  puVar2 = PTR_DAT_04bb43c0;
  local_38 = (uint *)0x0;
  local_48 = PTR_DAT_04bc0510 + 0x10;
  local_40 = *param_2;
  uStack_3c = param_2[1];
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar2 == 0) {
LAB_00b961c0:
    puVar7 = (uint *)0x0;
  }
  else {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((*(uint *)(lVar8 + 0x1d8) <= uVar3) ||
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_00b961c0;
    lVar8 = *(long *)PTR_DAT_04bc0428;
    uVar3 = FUN_0277d6c4(param_2);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if (*(uint *)(lVar8 + 0x1d8) <= uVar3) goto LAB_00b961c0;
    puVar7 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8);
    if (puVar7 != (uint *)0x0) {
      local_38 = puVar7;
    }
  }
  iVar4 = FUN_01ad78cc(&local_48);
  if (iVar4 != 0) goto LAB_00b961d0;
  if (puVar7 == (uint *)0x0) {
    uVar5 = 0xbc;
  }
  else {
    uVar3 = *puVar7;
    uVar5 = 0;
    if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
      puVar6 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
      uVar5 = 0;
      if (*puVar6 != 0) {
        uVar3 = puVar6[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar6 + lVar8 + (ulong)(ushort)puVar6[2] * 8;
          if (lVar8 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar7 - lVar8) / (ulong)uVar3);
            }
            if (*puVar6 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar5 < 0xbd))
            goto LAB_00b962c4;
          }
        }
        uVar5 = 0;
      }
    }
  }
LAB_00b962c4:
  if (uVar5 != 0) {
    return 1;
  }
LAB_00b961d0:
  iVar4 = FUN_01ae58b0(&local_48);
  if (iVar4 == 1) {
    if (**(char **)(param_1 + 8) == '\0') {
      return 0;
    }
    if (**(char **)(param_1 + 0x10) == '\0') {
      return 0;
    }
  }
  else if ((iVar4 == 2) &&
          ((**(char **)(param_1 + 8) != '\0' || (**(char **)(param_1 + 0x10) != '\0')))) {
    return 0;
  }
  return 1;
}

