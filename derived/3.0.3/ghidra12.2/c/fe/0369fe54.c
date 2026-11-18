
void FUN_0369fe54(undefined8 param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  ushort *puVar8;
  long lVar9;
  uint local_78;
  undefined4 uStack_74;
  undefined *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  long local_60;
  undefined *local_58;
  uint local_50;
  undefined4 uStack_4c;
  long local_48;
  uint local_28;
  undefined4 local_24;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(param_2);
  if (*(long *)puVar2 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      uVar3 = FUN_0277d6c4(param_2);
      local_28 = (uint)uVar3;
      local_24 = 0;
      FUN_0277d4ac(&local_28);
      lVar9 = *(long *)puVar2;
      local_48 = 0;
      puVar1 = PTR_DAT_04bc0510 + 0x10;
      local_50 = local_28;
      uStack_4c = local_24;
      local_58 = puVar1;
      uVar4 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar2 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          lVar9 = *(long *)PTR_DAT_04bc0428;
          uVar4 = FUN_0277d6c4(&local_28);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if (uVar4 < *(uint *)(lVar9 + 0x1d8)) {
            lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8);
            if (lVar9 != 0) {
              local_48 = lVar9;
            }
          }
        }
      }
      local_68 = *param_2;
      uStack_64 = param_2[1];
      lVar9 = *(long *)puVar2;
      local_60 = 0;
      local_70 = puVar1;
      uVar4 = FUN_0277d6c4(&local_68);
      if (*(long *)puVar2 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          lVar9 = *(long *)PTR_DAT_04bc0428;
          uVar4 = FUN_0277d6c4(param_2);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if (uVar4 < *(uint *)(lVar9 + 0x1d8)) {
            lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8);
            if (lVar9 != 0) {
              local_60 = lVar9;
            }
          }
        }
      }
      iVar5 = FUN_01ad7260(&local_70);
      if (iVar5 != 0) {
        iVar5 = FUN_01ad7260(&local_70);
        if ((iVar5 == 0) || (puVar8 = (ushort *)FUN_01afd600(&local_70), puVar8 == (ushort *)0x0)) {
          uVar4 = 0;
        }
        else {
          uVar4 = *puVar8 & 7;
          uVar6 = FUN_01ad7260(&local_70);
          if (uVar6 <= uVar4) {
            uVar4 = 0;
          }
        }
        iVar5 = FUN_01ad7260(&local_58);
        if ((iVar5 != 0) &&
           (((uVar4 == 0 || (iVar5 = FUN_01ad7260(&local_58), (int)uVar4 < iVar5)) &&
            (puVar8 = (ushort *)FUN_01afd600(&local_58), puVar8 != (ushort *)0x0)))) {
          *puVar8 = *puVar8 & 0xfff8 | (ushort)uVar4;
        }
      }
      iVar5 = FUN_01afcfa0(&local_70);
      if ((iVar5 != 0) &&
         (((iVar5 = FUN_01afcfa0(&local_70), iVar5 == 0 ||
           (puVar8 = (ushort *)FUN_01afd600(&local_70), puVar8 == (ushort *)0x0)) ||
          ((uVar3 = *puVar8 >> 3 & 3, uVar3 == 3 || (uVar3 == 0)))))) {
        uVar7 = FUN_01ae3a80(&local_70);
        FUN_01afdcc4(&local_58,uVar7);
      }
      local_78 = local_50;
      uStack_74 = uStack_4c;
      FUN_036a0730(param_1,&local_78);
    }
  }
  return;
}

