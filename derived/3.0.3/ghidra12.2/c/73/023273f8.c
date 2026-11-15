
undefined8 FUN_023273f8(undefined4 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined **local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  long local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  
  if ((param_1 != (undefined4 *)0x0) && (uVar3 = FUN_016e4c7c(param_2), (uVar3 & 1) != 0)) {
    local_38 = *(undefined4 *)PTR_DAT_04bb37e0;
    uStack_34 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    uVar3 = FUN_0123feb0(param_2,&local_38);
    if ((uVar3 & 1) == 0) {
      FUN_0124c030(&local_50,param_2);
      FUN_0124c4c0(&local_50,&local_38,1);
    }
    puVar1 = PTR_DAT_04bb43c0;
    lVar5 = *(long *)PTR_DAT_04bb43c0;
    uVar2 = FUN_0277d6c4(&local_38);
    lVar4 = *(long *)puVar1;
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar5 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
        local_40 = 0;
        local_48 = local_38;
        uStack_44 = uStack_34;
        local_50 = &PTR_FUN_04a36b50;
        uVar2 = FUN_0277d6c4(&local_48);
        if (*(long *)puVar1 != 0) {
          lVar4 = *(long *)(lVar4 + 0x57e58);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
            lVar4 = *(long *)PTR_DAT_04bc0428;
            uVar2 = FUN_0277d6c4(&local_38);
            uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
            if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
               (lVar4 = *(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8), lVar4 != 0)) {
              local_40 = lVar4;
            }
          }
        }
        FUN_01b12a30(&local_58,&local_50);
        lVar4 = *(long *)puVar1;
        uVar2 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar1 != 0) {
          lVar4 = *(long *)(lVar4 + 0x57e58);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
            local_38 = local_58;
            uStack_34 = uStack_54;
          }
        }
        *param_1 = local_38;
        param_1[1] = uStack_34;
        return 1;
      }
    }
  }
  return 0;
}

