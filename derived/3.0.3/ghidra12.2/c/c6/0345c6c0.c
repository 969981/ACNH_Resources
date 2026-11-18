
undefined ** FUN_0345c6c0(int *param_1,int *param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  undefined **local_58;
  int local_50;
  int iStack_4c;
  long local_48;
  
  puVar1 = PTR_DAT_04bb43c0;
  if (*param_1 == 4) {
    ppuVar4 = (undefined **)0x3c;
  }
  else {
    lVar7 = *(long *)PTR_DAT_04bb43c0;
    uVar2 = FUN_0277d6c4(param_1 + 1);
    lVar6 = *(long *)puVar1;
    if (lVar6 != 0) {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar7 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
        local_48 = 0;
        local_50 = param_1[1];
        iStack_4c = param_1[2];
        local_58 = &PTR_FUN_04a36b50;
        uVar2 = FUN_0277d6c4(&local_50);
        if (*(long *)puVar1 != 0) {
          lVar6 = *(long *)(lVar6 + 0x57e58);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
            lVar6 = *(long *)PTR_DAT_04bc0428;
            uVar2 = FUN_0277d6c4(param_1 + 1);
            uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
            if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
               (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8), lVar6 != 0)) {
              local_48 = lVar6;
            }
          }
        }
        ppuVar4 = (undefined **)FUN_01af53c8(&local_58);
        goto LAB_0345c7f0;
      }
    }
    ppuVar4 = (undefined **)0x0;
  }
LAB_0345c7f0:
  iVar3 = (int)ppuVar4;
  local_58 = (undefined **)((ulong)ppuVar4 & 0xffffffff);
  if (*param_2 == 6) {
    ppuVar5 = local_58;
    if ((1 < iVar3) && (ppuVar5 = (undefined **)((ulong)ppuVar4 & 0xffffffff), iVar3 < 0x18)) {
      ppuVar5 = (undefined **)0x3e;
    }
  }
  else {
    ppuVar5 = ppuVar4;
    if (*param_2 == 5) {
      if (iVar3 == 2) {
        ppuVar5 = (undefined **)0x3f;
      }
      else {
        ppuVar5 = local_58;
        if ((2 < iVar3) && (ppuVar5 = (undefined **)((ulong)ppuVar4 & 0xffffffff), iVar3 < 6)) {
          ppuVar5 = (undefined **)0x3d;
        }
      }
    }
  }
  return ppuVar5;
}

