
ulong FUN_0277ebd0(short *param_1)

{
  uint uVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined *local_58;
  short local_50;
  short local_4e;
  undefined4 local_4c;
  long local_48;
  
  sVar2 = *param_1;
  if (1 < (ushort)(sVar2 + 3U)) {
    lVar7 = *(long *)PTR_DAT_04bbbc68;
    if (((((lVar7 != 0) && (*(long *)(lVar7 + 0xb0) != 0)) &&
         (*(long *)(*(long *)(lVar7 + 0xb0) + 8) != 0)) &&
        ((*(long *)(lVar7 + 0x488) != 0 && (*(long *)(*(long *)(lVar7 + 0x488) + 8) != 0)))) &&
       ((*(long *)(lVar7 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar7 + 0x2b0) + 8) != 0)))) {
      uVar4 = FUN_0277d6c4(param_1);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        FUN_0124c030(&local_58,param_1);
        uVar6 = FUN_0123d890(local_48,1);
        if ((uVar6 & 1) == 0) {
          iVar5 = FUN_0123db50(&local_50,local_48);
          return (ulong)(iVar5 == 0x2d);
        }
        return 2;
      }
    }
    lVar7 = *(long *)PTR_DAT_04bb43c0;
    uVar4 = FUN_0277d6c4(param_1);
    local_50 = sVar2;
    if (lVar7 != 0) {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar3 = *(ushort *)(lVar7 + 0x1f8);
      uVar1 = *(uint *)(lVar7 + 0x1d8);
      uVar4 = (uVar4 & 0xffff) - (uint)uVar3;
      if ((uVar4 < uVar1) &&
         (lVar7 = *(long *)(lVar7 + 0x1e0), *(long *)(lVar7 + (long)(int)uVar4 * 8) != 0)) {
        local_4e = param_1[1];
        local_48 = 0;
        local_58 = PTR_DAT_04bc0510 + 0x10;
        local_4c = *(undefined4 *)(param_1 + 2);
        uVar4 = FUN_0277d6c4(&local_50);
        uVar4 = (uVar4 & 0xffff) - (uint)uVar3;
        if ((uVar4 < uVar1) && (*(long *)(lVar7 + (long)(int)uVar4 * 8) != 0)) {
          lVar7 = *(long *)PTR_DAT_04bc0428;
          uVar4 = FUN_0277d6c4(param_1);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
             (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8), lVar7 != 0)) {
            local_48 = lVar7;
          }
        }
        uVar6 = FUN_01ae5df8(&local_58);
        return uVar6;
      }
    }
    local_4e = param_1[1];
    local_58 = PTR_DAT_04bc35c0 + 0x10;
    local_4c = *(undefined4 *)(param_1 + 2);
    FUN_0277d6c4(&local_50);
  }
  return 0;
}

