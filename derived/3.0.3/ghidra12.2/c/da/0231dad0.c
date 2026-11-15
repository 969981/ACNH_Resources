
bool FUN_0231dad0(long param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  undefined2 *puVar8;
  long lVar9;
  long lVar10;
  undefined *local_68;
  undefined2 local_60;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  long local_58;
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_35;
  undefined4 local_34;
  
  puVar5 = PTR_DAT_04bb43c0;
  if (*(long *)(param_1 + 0x298) == 0) {
    return false;
  }
  lVar9 = *(long *)(*(long *)(param_1 + 0x298) + 0xbde8);
  if (lVar9 == 0) {
    return false;
  }
  if (*(char *)(lVar9 + 0x1d5) != '\0') {
    lVar10 = *(long *)PTR_DAT_04bb43c0;
    puVar8 = (undefined2 *)(lVar9 + 0xcc);
    uVar6 = FUN_0277d6c4(puVar8);
    if (*(long *)puVar5 != 0) {
      lVar10 = *(long *)(lVar10 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) goto LAB_0231db84;
    }
    iVar7 = FUN_0277d6c4(puVar8);
    if (iVar7 == 0xfffd) {
      puVar8 = &DAT_05586008;
      goto LAB_0231db84;
    }
  }
  puVar8 = (undefined2 *)(lVar9 + 0xd4);
LAB_0231db84:
  uVar4 = *puVar8;
  uVar2 = *(undefined1 *)(puVar8 + 1);
  uVar3 = *(undefined1 *)((long)puVar8 + 3);
  uVar1 = *(undefined4 *)(puVar8 + 2);
  lVar10 = *(long *)puVar5;
  local_38 = uVar4;
  local_36 = uVar2;
  local_35 = uVar3;
  local_34 = uVar1;
  uVar6 = FUN_0277d6c4(&local_38);
  lVar9 = *(long *)puVar5;
  if (lVar9 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      local_68 = PTR_DAT_04bc0510 + 0x10;
      local_58 = 0;
      local_60 = uVar4;
      local_5e = uVar2;
      local_5d = uVar3;
      local_5c = uVar1;
      uVar6 = FUN_0277d6c4(&local_60);
      if (*(long *)puVar5 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          lVar9 = *(long *)PTR_DAT_04bc0428;
          uVar6 = FUN_0277d6c4(&local_38);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
             (lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8), lVar9 != 0)) {
            local_58 = lVar9;
          }
        }
      }
      iVar7 = FUN_01ad78cc(&local_68);
      return iVar7 == 7;
    }
  }
  return false;
}

