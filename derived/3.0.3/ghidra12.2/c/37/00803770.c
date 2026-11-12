
uint FUN_00803770(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long lVar6;
  ushort uVar7;
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
  ushort local_24;
  undefined1 auStack_22 [2];
  
  if (DAT_053e0208 == 0) {
    return 0;
  }
  lVar6 = *(long *)(DAT_053e0208 + 0x175a0);
  if (lVar6 != 0) {
    iVar1 = FUN_0211b8d0(lVar6);
    if (iVar1 == -1) {
      uVar7 = 0;
    }
    else {
      if (iVar1 == -2) {
        puVar5 = (undefined4 *)(lVar6 + 0x1cc);
      }
      else {
        puVar5 = (undefined4 *)(*(long *)(*(long *)(lVar6 + 0x1f0) + (long)iVar1 * 8) + 0x1c4);
      }
      uVar7 = (ushort)*puVar5 & 0x7f;
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
    uVar2 = FUN_0211b8d0(lVar6,param_2,param_3);
    uVar4 = FUN_0211a6bc(lVar6,&local_88,uVar2);
    if ((uVar4 & 1) != 0) {
      FUN_007ef010(auStack_22,param_1);
      if (((DAT_04c8c100 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c8c100), iVar1 != 0)) {
        FUN_00706e58(&DAT_04c8c0f0);
        __cxa_guard_release(&DAT_04c8c100);
      }
      if (0 < (int)DAT_04c8c0f0) {
        uVar4 = 0;
        do {
          if (*(int *)(DAT_04c8c0f8 + uVar4 * 4) == 0xe) goto LAB_0080391c;
          uVar4 = uVar4 + 1;
        } while (DAT_04c8c0f0 != uVar4);
      }
      uVar4 = 0;
LAB_0080391c:
      local_24 = 0;
      if (((DAT_04c8c100 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c8c100), iVar1 != 0)) {
        FUN_00706e58(&DAT_04c8c0f0);
        __cxa_guard_release(&DAT_04c8c100);
      }
      uVar3 = (uint)uVar4;
      if (DAT_04c8c0f0 <= uVar3) {
        uVar3 = 0;
      }
      local_24 = uVar7 | (ushort)(*(int *)(DAT_04c8c0f8 + (long)(int)uVar3 * 4) << 0xb);
      uVar3 = FUN_00803dd0(auStack_22,&local_88,&local_24);
      goto LAB_0080395c;
    }
  }
  uVar3 = 0;
LAB_0080395c:
  return uVar3 & 1;
}

