
undefined8 FUN_01e25b28(long param_1,uint param_2,undefined4 *param_3,ulong param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined **local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  long local_d8;
  undefined4 local_38;
  undefined4 uStack_34;
  
  puVar3 = PTR_DAT_04bb43c0;
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(param_3);
  lVar6 = *(long *)puVar3;
  if (lVar6 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if (*(uint *)(lVar7 + 0x1d8) <= uVar4) {
      return 0;
    }
    if (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
      return 0;
    }
    local_d8 = 0;
    local_e0 = *param_3;
    uStack_dc = param_3[1];
    local_e8 = &PTR_FUN_04a36b50;
    uVar4 = FUN_0277d6c4(&local_e0);
    if (*(long *)puVar3 != 0) {
      lVar6 = *(long *)(lVar6 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        lVar6 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(param_3);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
           (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8), lVar6 != 0)) {
          local_d8 = lVar6;
        }
      }
    }
    uVar5 = FUN_01b07660(&local_e8);
    if (3 < param_2) {
      return 0;
    }
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    FUN_01e2543c(param_1);
    if (param_2 != 3) {
      param_1 = param_1 + (ulong)param_2 * 0x70;
    }
    puVar1 = &DAT_040c3cf0;
    if (param_2 != 1) {
      puVar1 = &DAT_040c8ea8;
    }
    puVar2 = &DAT_040947d9;
    if (param_2 != 0) {
      puVar2 = puVar1;
    }
    local_38 = *(undefined4 *)(param_1 + 0x54);
    uStack_34 = *(undefined4 *)(param_1 + 0x58);
    uVar5 = FUN_0277d7b4(param_3,&local_38);
    if ((param_4 & 1) == 0) {
      local_38 = *(undefined4 *)(param_1 + 0x5c);
      uStack_34 = *(undefined4 *)(param_1 + 0x60);
      FUN_0277d7b4(param_3,&local_38);
      local_38 = *(undefined4 *)(param_1 + 100);
      uStack_34 = *(undefined4 *)(param_1 + 0x68);
      FUN_0277d7b4(param_3,&local_38);
      return 0;
    }
    if ((uVar5 & 1) != 0) {
      FUN_0074fda4(&local_e8,"ImmQ_%s_Interior%dDonate",puVar2,1);
      uVar5 = FUN_0273f0a0(&local_e8);
      if ((uVar5 & 1) == 0) {
        return 1;
      }
    }
    local_38 = *(undefined4 *)(param_1 + 0x5c);
    uStack_34 = *(undefined4 *)(param_1 + 0x60);
    uVar5 = FUN_0277d7b4(param_3,&local_38);
    if ((uVar5 & 1) != 0) {
      FUN_0074fda4(&local_e8,"ImmQ_%s_Interior%dDonate",puVar2,2);
      uVar5 = FUN_0273f0a0(&local_e8);
      if ((uVar5 & 1) == 0) {
        return 1;
      }
    }
    local_38 = *(undefined4 *)(param_1 + 100);
    uStack_34 = *(undefined4 *)(param_1 + 0x68);
    uVar5 = FUN_0277d7b4(param_3,&local_38);
    if ((uVar5 & 1) != 0) {
      FUN_0074fda4(&local_e8,"ImmQ_%s_Interior%dDonate",puVar2,3);
      uVar5 = FUN_0273f0a0(&local_e8);
      if ((uVar5 & 1) == 0) {
        return 1;
      }
    }
  }
  return 0;
}

