
bool FUN_0277e024(undefined2 *param_1)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined **local_58;
  undefined2 local_50;
  byte local_4e;
  undefined1 local_4d;
  undefined4 local_4c;
  long local_48;
  
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4();
  if (lVar7 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar4 = *(ushort *)(lVar7 + 0x1f8);
    uVar2 = *(uint *)(lVar7 + 0x1d8);
    uVar5 = (uVar5 & 0xffff) - (uint)uVar4;
    if ((uVar5 < uVar2) &&
       (lVar7 = *(long *)(lVar7 + 0x1e0), *(long *)(lVar7 + (long)(int)uVar5 * 8) != 0)) {
      local_50 = *param_1;
      local_48 = 0;
      local_4d = *(undefined1 *)((long)param_1 + 3);
      bVar3 = *(byte *)(param_1 + 1);
      local_58 = &PTR_FUN_04a36b50;
      local_4c = *(undefined4 *)(param_1 + 2);
      local_4e = bVar3;
      uVar5 = FUN_0277d6c4(&local_50);
      uVar5 = (uVar5 & 0xffff) - (uint)uVar4;
      if ((uVar5 < uVar2) && (*(long *)(lVar7 + (long)(int)uVar5 * 8) != 0)) {
        lVar7 = *(long *)PTR_DAT_04bc0428;
        uVar5 = FUN_0277d6c4(param_1);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
           (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8), lVar7 != 0)) {
          local_48 = lVar7;
        }
      }
      uVar6 = FUN_01ae59b0(&local_58);
      bVar1 = bVar3 >> 2 & 1;
      if ((uVar6 & 1) == 0) {
        bVar1 = bVar3 & 4;
      }
      return bVar1 != 0;
    }
  }
  return false;
}

