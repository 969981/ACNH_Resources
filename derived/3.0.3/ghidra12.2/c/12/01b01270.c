
undefined8 FUN_01b01270(undefined4 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ushort *puVar5;
  long lVar6;
  long lVar7;
  undefined **local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  long local_40;
  uint local_34;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4();
  lVar6 = *(long *)puVar1;
  if (lVar6 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      local_40 = 0;
      local_50 = &PTR_FUN_04a36b50;
      local_48 = *param_1;
      uStack_44 = param_1[1];
      uVar2 = FUN_0277d6c4(&local_48);
      lVar7 = DAT_0532a768;
      if (*(long *)puVar1 != 0) {
        lVar6 = *(long *)(lVar6 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
          uVar2 = FUN_0277d6c4(param_1);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar7 + 0x1d8)) &&
             (lVar6 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8), lVar6 != 0)) {
            local_40 = lVar6;
          }
        }
      }
      uVar4 = FUN_01afcfa0(&local_50);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
      puVar5 = (ushort *)FUN_01afd600(&local_50);
      if (puVar5 == (ushort *)0x0) {
        return 0;
      }
      if ((*puVar5 & 0x18) == 0x10) {
        iVar3 = FUN_01afcfa0(&local_50);
        if (iVar3 != 0) {
          local_34 = 0;
          puVar5 = (ushort *)FUN_01afd600(&local_50);
          if (puVar5 != (ushort *)0x0) {
            *puVar5 = (ushort)((local_34 & 3) << 3) | *puVar5 & 0xffe7;
          }
          iVar3 = FUN_01afcfa0(&local_50);
          if ((iVar3 != 0) && (puVar5 = (ushort *)FUN_01afd600(&local_50), puVar5 != (ushort *)0x0))
          {
            *puVar5 = *puVar5 & 0xe01f;
          }
        }
        *param_1 = local_48;
        param_1[1] = uStack_44;
        return 1;
      }
    }
  }
  return 0;
}

