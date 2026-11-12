
uint FUN_0075c824(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined2 local_90;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined4 local_8c;
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
  undefined4 local_50;
  undefined4 local_4c;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  plVar5 = *(long **)(param_1 + 0x3b0);
  local_90 = *(undefined2 *)PTR_DAT_04bb37e0;
  local_8e = PTR_DAT_04bb37e0[2];
  local_8d = PTR_DAT_04bb37e0[3];
  local_50 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_8c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_88 = local_90;
  local_86 = local_8e;
  local_85 = local_8d;
  local_84 = local_8c;
  local_80 = local_90;
  local_7e = local_8e;
  local_7d = local_8d;
  local_7c = local_8c;
  local_78 = local_90;
  local_76 = local_8e;
  local_75 = local_8d;
  local_74 = local_8c;
  local_70 = local_90;
  local_6e = local_8e;
  local_6d = local_8d;
  local_6c = local_8c;
  local_68 = local_90;
  local_66 = local_8e;
  local_65 = local_8d;
  local_64 = local_8c;
  local_60 = local_90;
  local_5e = local_8e;
  local_5d = local_8d;
  local_5c = local_8c;
  local_58 = local_90;
  local_56 = local_8e;
  local_55 = local_8d;
  local_54 = local_8c;
  local_4c = local_8c;
  if (((*PTR_DAT_04bb37a0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37a0), iVar3 != 0))
  {
    *(undefined ***)PTR_DAT_04bb3798 = &PTR_LAB_04908e00;
    __cxa_guard_release(PTR_DAT_04bb37a0);
  }
  if ((plVar5 != (long *)0x0) &&
     (uVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,PTR_DAT_04bb3798), (uVar4 & 1) != 0)) {
    FUN_0233e334(plVar5,&local_90,1);
    puVar1 = PTR_DAT_04bb43c0;
    lVar7 = *(long *)PTR_DAT_04bb43c0;
    uVar2 = FUN_0277d6c4(&local_50);
    lVar6 = *(long *)puVar1;
    if (lVar6 != 0) {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar7 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
        local_38 = 0;
        local_48 = PTR_DAT_04bc0510 + 0x10;
        local_40 = local_50;
        uStack_3c = local_4c;
        uVar2 = FUN_0277d6c4(&local_40);
        if (*(long *)puVar1 != 0) {
          lVar6 = *(long *)(lVar6 + 0x57e58);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
            lVar6 = *(long *)PTR_DAT_04bc0428;
            uVar2 = FUN_0277d6c4(&local_50);
            uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
            if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
               (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8), lVar6 != 0)) {
              local_38 = lVar6;
            }
          }
        }
        uVar2 = FUN_01adc790(&local_48);
        goto LAB_0075ca24;
      }
    }
  }
  uVar2 = 0;
LAB_0075ca24:
  return uVar2 & 1;
}

