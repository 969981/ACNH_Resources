
bool FUN_0151fedc(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined1 auStack_84 [4];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  uint *local_68;
  undefined2 local_5c;
  undefined1 local_5a;
  undefined1 local_59;
  undefined4 local_58;
  uint local_54;
  
  puVar4 = PTR_DAT_04bb43c0;
  local_5c = *(undefined2 *)param_1;
  local_5a = *(undefined1 *)((long)param_1 + 2);
  local_59 = *(undefined1 *)((long)param_1 + 3);
  uVar3 = *param_1;
  uVar2 = param_1[1];
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  local_58 = uVar2;
  uVar5 = FUN_0277d6c4(&local_5c);
  lVar10 = *(long *)puVar4;
  if (lVar10 == 0) {
    return false;
  }
  lVar11 = *(long *)(lVar11 + 0x57e58);
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
  if (*(uint *)(lVar11 + 0x1d8) <= uVar5) {
    return false;
  }
  if (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) == 0) {
    return false;
  }
  local_78 = PTR_DAT_04bc0510 + 0x10;
  local_68 = (uint *)0x0;
  local_70 = uVar3;
  local_6c = uVar2;
  uVar5 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar4 == 0) {
LAB_01520010:
    puVar9 = (uint *)0x0;
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((*(uint *)(lVar10 + 0x1d8) <= uVar5) ||
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_01520010;
    lVar10 = *(long *)PTR_DAT_04bc0428;
    uVar5 = FUN_0277d6c4(&local_5c);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if (*(uint *)(lVar10 + 0x1d8) <= uVar5) goto LAB_01520010;
    puVar9 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8);
    if (puVar9 != (uint *)0x0) {
      local_68 = puVar9;
    }
  }
  uVar7 = FUN_01ae89e0(&local_78);
  if ((uVar7 & 1) != 0) goto LAB_015200d4;
  local_80 = 0xac;
  if (puVar9 == (uint *)0x0) {
    local_54 = 0xbc;
  }
  else {
    uVar5 = *puVar9;
    local_54 = 0;
    if ((uVar5 != 0) && (puVar9 != (uint *)(ulong)uVar5)) {
      puVar8 = (uint *)((long)puVar9 - (long)(ulong)uVar5);
      local_54 = 0;
      if (*puVar8 != 0) {
        uVar5 = puVar8[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
          lVar10 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar8 + lVar10 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar10 != 0) {
            uVar1 = 0;
            if ((ulong)uVar5 != 0) {
              uVar1 = (uint)((ulong)((long)puVar9 - lVar10) / (ulong)uVar5);
            }
            if (*puVar8 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (local_54 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), local_54 < 0xbd))
            goto LAB_015200c0;
          }
        }
        local_54 = 0;
      }
    }
  }
LAB_015200c0:
  if (local_54 != 0xac) {
    return false;
  }
LAB_015200d4:
  FUN_01afade0(&local_78,param_1[6]);
  FUN_01afca60(&local_78,1);
  local_80 = local_70;
  uStack_7c = local_6c;
  local_54 = FUN_01ae98d0(&local_78);
  FUN_01afb8e8(&local_78);
  local_8c = 0;
  uStack_88 = 1;
  iVar6 = FUN_0150dbd8(&local_80,param_1 + 2,&local_54,auStack_84,&uStack_88,&local_8c);
  return iVar6 == 9;
}

