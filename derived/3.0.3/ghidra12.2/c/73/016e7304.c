
uint FUN_016e7304(undefined4 *param_1,byte param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined **local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  byte local_50 [8];
  undefined8 local_48;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar4 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4();
  lVar3 = *(long *)puVar1;
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar4 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      local_58 = 0;
      local_60 = *param_1;
      uStack_5c = param_1[1];
      local_68 = &PTR_FUN_04a36b50;
      uVar2 = FUN_0277d6c4(&local_60);
      if (*(long *)puVar1 != 0) {
        lVar3 = *(long *)(lVar3 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar3 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar3 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar3 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
          lVar3 = *(long *)PTR_DAT_04bc0428;
          uVar2 = FUN_0277d6c4(param_1);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar3 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar3 + 0x1d8)) &&
             (lVar3 = *(long *)(*(long *)(lVar3 + 0x1e0) + (long)(int)uVar2 * 8), lVar3 != 0)) {
            local_58 = lVar3;
          }
        }
      }
      local_50[0] = param_2 & 1;
      local_50[1] = 0;
      local_50[2] = 1;
      local_48 = param_3;
      uVar2 = FUN_01add954(&local_68,local_50);
      goto LAB_016e7434;
    }
  }
  uVar2 = 0;
LAB_016e7434:
  return uVar2 & 1;
}

