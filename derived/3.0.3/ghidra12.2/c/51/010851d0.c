
undefined8 FUN_010851d0(byte *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined4 local_54;
  undefined **local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  long local_40;
  byte local_34 [4];
  
  local_34[0] = *param_1;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
  lVar3 = FUN_025830c0(DAT_055021a0,local_34,1);
  puVar1 = PTR_DAT_04bb43c0;
  if (lVar3 != 0) {
    lVar3 = *(long *)PTR_DAT_04bb43c0;
    uVar2 = FUN_0277d6c4(param_2);
    if (*(long *)puVar1 != 0) {
      lVar3 = *(long *)(lVar3 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar3 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar3 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar3 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
        uVar4 = FUN_02532e88(param_1,param_2,0,1);
        if ((uVar4 & 1) == 0) {
          local_48 = *param_2;
          uStack_44 = param_2[1];
          lVar3 = *(long *)puVar1;
          local_50 = &PTR_FUN_04a36b50;
          local_40 = 0;
          uVar2 = FUN_0277d6c4(&local_48);
          if (*(long *)puVar1 != 0) {
            lVar3 = *(long *)(lVar3 + 0x57e58);
            uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar3 + 0x1f8);
            if ((uVar2 < *(uint *)(lVar3 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar3 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
              FUN_0277d6c4(param_2);
            }
          }
        }
        else {
          local_48 = *param_2;
          uStack_44 = param_2[1];
          lVar3 = *(long *)puVar1;
          local_50 = &PTR_FUN_04a36b50;
          local_40 = 0;
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
          local_54 = 6;
          uVar4 = FUN_01ae23c0(&local_50,&local_54);
          if ((uVar4 & 1) != 0) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

