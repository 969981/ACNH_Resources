
undefined8 FUN_00f64cc0(byte *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined **local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  long local_40;
  undefined4 local_38;
  byte local_34 [4];
  
  local_34[0] = *param_1;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
  lVar3 = FUN_025830c0(DAT_055021a0,local_34,1);
  if (lVar3 != 0) {
    lVar6 = lVar3 + 0x194b0;
    if (*(long *)(lVar3 + 0x194b8) == 0) {
      lVar6 = *(long *)(DAT_05574040 + 0x20);
    }
    if ((*(long **)(lVar6 + 0x2a290) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar6 + 0x2a290), puVar4 == (undefined8 *)0x0)) {
      local_38 = *(undefined4 *)(*(long *)(lVar6 + 0x2a278) + *(long *)(lVar6 + 0x2a270) + 0x50);
    }
    else {
      uVar5 = (**(code **)*puVar4)();
      local_38 = *(undefined4 *)(*(long *)(lVar6 + 0x2a278) + *(long *)(lVar6 + 0x2a270) + 0x50);
      if ((((uVar5 & 1) != 0) && (*(long *)(lVar6 + 0x2a290) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x2a290) + 8), puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)();
      }
    }
    puVar1 = PTR_DAT_04bb43c0;
    lVar6 = *(long *)PTR_DAT_04bb43c0;
    uVar2 = FUN_0277d6c4(param_2);
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar6 = *(long *)(lVar6 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
        local_40 = 0;
        local_48 = *param_2;
        uStack_44 = param_2[1];
        local_50 = &PTR_FUN_04a36b50;
        uVar2 = FUN_0277d6c4(&local_48);
        if (*(long *)puVar1 != 0) {
          lVar3 = *(long *)(lVar3 + 0x57e58);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar3 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar3 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar3 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
            lVar3 = *(long *)PTR_DAT_04bc0428;
            uVar2 = FUN_0277d6c4(param_2);
            uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar3 + 0x1f8);
            if ((uVar2 < *(uint *)(lVar3 + 0x1d8)) &&
               (lVar3 = *(long *)(*(long *)(lVar3 + 0x1e0) + (long)(int)uVar2 * 8), lVar3 != 0)) {
              local_40 = lVar3;
            }
          }
        }
        uVar5 = FUN_01ae23c0(&local_50,&local_38);
        if ((uVar5 & 1) != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}

