
undefined8 FUN_0277d7b4(uint *param_1,uint *param_2)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined **local_80;
  uint local_78;
  uint uStack_74;
  long local_70;
  undefined **local_68;
  uint local_60;
  uint uStack_5c;
  long local_58;
  
  iVar3 = FUN_0277d6c4(param_2);
  iVar4 = FUN_0277d6c4(param_1);
  if (iVar4 == iVar3) {
    lVar8 = *(long *)PTR_DAT_04bb43c0;
    uVar5 = FUN_0277d6c4(param_1);
    if (lVar8 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar2 = *(ushort *)(lVar8 + 0x1f8);
      uVar1 = *(uint *)(lVar8 + 0x1d8);
      uVar5 = (uVar5 & 0xffff) - (uint)uVar2;
      if ((uVar5 < uVar1) &&
         (lVar8 = *(long *)(lVar8 + 0x1e0), *(long *)(lVar8 + (long)(int)uVar5 * 8) != 0)) {
        local_58 = 0;
        local_60 = *param_1;
        uStack_5c = param_1[1];
        local_68 = &PTR_FUN_04a36b50;
        uVar5 = FUN_0277d6c4(&local_60);
        uVar5 = (uVar5 & 0xffff) - (uint)uVar2;
        if ((uVar5 < uVar1) && (*(long *)(lVar8 + (long)(int)uVar5 * 8) != 0)) {
          lVar9 = *(long *)PTR_DAT_04bc0428;
          uVar5 = FUN_0277d6c4(param_1);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
             (lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8), lVar9 != 0)) {
            local_58 = lVar9;
          }
        }
        local_80 = &PTR_FUN_04a36b50;
        local_78 = *param_2;
        uStack_74 = param_2[1];
        local_70 = 0;
        uVar5 = FUN_0277d6c4(&local_78);
        uVar5 = (uVar5 & 0xffff) - (uint)uVar2;
        if ((uVar5 < uVar1) && (*(long *)(lVar8 + (long)(int)uVar5 * 8) != 0)) {
          lVar8 = *(long *)PTR_DAT_04bc0428;
          uVar5 = FUN_0277d6c4(param_2);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
             (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8), lVar8 != 0)) {
            local_70 = lVar8;
          }
        }
        uVar6 = FUN_01b032d0(&local_68);
        if (((((uVar6 & 1) != 0) && (uVar6 = FUN_01b032d0(&local_68), (uVar6 & 1) != 0)) &&
            ((local_60 & 0x3000000) != 0)) &&
           (((uVar6 = FUN_01b032d0(&local_80), (uVar6 & 1) != 0 &&
             (uVar6 = FUN_01b032d0(&local_80), (uVar6 & 1) != 0)) &&
            (((local_78 & 0x3000000) != 0 &&
             (*(char *)((long)param_1 + 3) != *(char *)((long)param_2 + 3))))))) goto LAB_0277d988;
      }
    }
    uVar7 = 1;
  }
  else {
LAB_0277d988:
    uVar7 = 0;
  }
  return uVar7;
}

