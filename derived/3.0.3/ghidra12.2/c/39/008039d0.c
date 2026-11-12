
uint FUN_008039d0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  ushort uVar8;
  ushort local_8c;
  undefined1 auStack_8a [2];
  undefined2 local_88;
  undefined1 local_86;
  undefined1 local_85;
  undefined4 local_84;
  undefined2 local_80;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined4 local_7c;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  undefined2 local_60;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_55;
  undefined4 local_54;
  undefined2 local_50;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined4 local_4c;
  undefined2 local_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined4 local_44;
  
  if (DAT_053e0208 == 0) {
    return 0;
  }
  lVar7 = *(long *)(DAT_053e0208 + 0x175a0);
  if (lVar7 != 0) {
    iVar2 = FUN_0211b8d0(lVar7);
    if (iVar2 == -1) {
      uVar8 = 0;
    }
    else {
      if (iVar2 == -2) {
        puVar6 = (undefined4 *)(lVar7 + 0x1cc);
      }
      else {
        puVar6 = (undefined4 *)(*(long *)(*(long *)(lVar7 + 0x1f0) + (long)iVar2 * 8) + 0x1c4);
      }
      uVar8 = (ushort)*puVar6 & 0x7f;
    }
    local_88 = *(undefined2 *)PTR_DAT_04bb37e0;
    local_86 = PTR_DAT_04bb37e0[2];
    local_85 = PTR_DAT_04bb37e0[3];
    local_84 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    local_80 = local_88;
    local_7e = local_86;
    local_7d = local_85;
    local_7c = local_84;
    local_78 = local_88;
    local_76 = local_86;
    local_75 = local_85;
    local_74 = local_84;
    local_70 = local_88;
    local_6e = local_86;
    local_6d = local_85;
    local_6c = local_84;
    local_68 = local_88;
    local_66 = local_86;
    local_65 = local_85;
    local_64 = local_84;
    local_60 = local_88;
    local_5e = local_86;
    local_5d = local_85;
    local_5c = local_84;
    local_58 = local_88;
    local_56 = local_86;
    local_55 = local_85;
    local_54 = local_84;
    local_50 = local_88;
    local_4e = local_86;
    local_4d = local_85;
    local_4c = local_84;
    local_48 = local_88;
    local_46 = local_86;
    local_45 = local_85;
    local_44 = local_84;
    uVar3 = FUN_0211b8d0(lVar7,param_2,param_3);
    uVar5 = FUN_0211a6bc(lVar7,&local_88,uVar3);
    if ((uVar5 & 1) != 0) {
      FUN_007ef010(auStack_8a,param_1);
      if (((DAT_04c8c100 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04c8c100), iVar2 != 0)) {
        FUN_00706e58(&DAT_04c8c0f0);
        __cxa_guard_release(&DAT_04c8c100);
      }
      puVar1 = PTR_DAT_04bb3120;
      if (0 < (int)*(uint *)PTR_DAT_04bb3120) {
        uVar5 = 0;
        do {
          if (*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar5 * 4) == 0xf) goto LAB_00803b80;
          uVar5 = uVar5 + 1;
        } while (*(uint *)PTR_DAT_04bb3120 != uVar5);
      }
      uVar5 = 0;
LAB_00803b80:
      local_8c = 0;
      if (((DAT_04c8c100 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04c8c100), iVar2 != 0)) {
        FUN_00706e58(&DAT_04c8c0f0);
        __cxa_guard_release(&DAT_04c8c100);
      }
      uVar4 = (uint)uVar5;
      if (*(uint *)puVar1 <= uVar4) {
        uVar4 = 0;
      }
      local_8c = uVar8 | (ushort)(*(int *)(*(long *)(puVar1 + 8) + (long)(int)uVar4 * 4) << 0xb);
      uVar4 = FUN_00803dd0(auStack_8a,&local_70,&local_8c);
      goto LAB_00803bc0;
    }
  }
  uVar4 = 0;
LAB_00803bc0:
  return uVar4 & 1;
}

