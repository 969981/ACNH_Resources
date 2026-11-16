
undefined4 FUN_02885840(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  undefined2 *puVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined2 local_668;
  undefined1 local_666;
  undefined1 local_665;
  undefined4 local_664;
  undefined4 local_660 [384];
  uint local_44;
  
  local_44 = 0;
  uVar5 = FUN_0291e130(local_660,&local_44,0);
  uVar2 = local_44;
  puVar1 = PTR_DAT_04bb43c0;
  if (((uVar5 & 1) != 0) && (local_44 != 0)) {
    iVar7 = 0;
    uVar8 = 1;
    do {
      puVar6 = (undefined2 *)FUN_0288557c(param_1,uVar8 - 1);
      local_668 = *puVar6;
      local_666 = *(undefined1 *)(puVar6 + 1);
      local_665 = *(undefined1 *)((long)puVar6 + 3);
      local_664 = *(undefined4 *)(puVar6 + 2);
      lVar9 = *(long *)puVar1;
      uVar4 = FUN_0277d6c4(&local_668);
      if (*(long *)puVar1 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if (((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) &&
           (uVar5 = FUN_0277d7b4(&local_668,param_2), (uVar5 & 1) != 0)) {
          return local_660[(long)iVar7 * 3];
        }
      }
      iVar7 = iVar7 + 1;
    } while ((iVar7 != 0x80) && (bVar3 = uVar8 < uVar2, uVar8 = uVar8 + 1, bVar3));
  }
  return 0;
}

