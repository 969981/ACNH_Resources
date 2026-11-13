
uint FUN_0144365c(long param_1,byte param_2,uint param_3)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined2 local_70;
  undefined1 local_6e;
  undefined2 local_6c;
  undefined2 local_6a;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined1 local_60;
  undefined1 local_5f;
  undefined4 local_5c;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  
  if ((param_3 & 1) == 0) {
    uVar2 = 1;
    *(byte *)(param_1 + 0x540) = param_2 & 1;
  }
  else {
    FUN_01476a50(&local_3c,*(undefined8 *)(param_1 + 0x2e8));
    puVar1 = PTR_DAT_04bb43c0;
    local_48 = 0;
    local_58 = PTR_DAT_04bc0510 + 0x10;
    local_50 = local_3c;
    uStack_4c = uStack_38;
    lVar3 = *(long *)PTR_DAT_04bb43c0;
    uVar2 = FUN_0277d6c4(&local_50);
    if (*(long *)puVar1 != 0) {
      lVar3 = *(long *)(lVar3 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar3 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar3 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar3 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
        lVar3 = *(long *)PTR_DAT_04bc0428;
        uVar2 = FUN_0277d6c4(&local_3c);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar3 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar3 + 0x1d8)) &&
           (lVar3 = *(long *)(*(long *)(lVar3 + 0x1e0) + (long)(int)uVar2 * 8), lVar3 != 0)) {
          local_48 = lVar3;
        }
      }
    }
    FUN_01aeabb0(&local_58,param_2 & 1);
    lVar3 = *(long *)(param_1 + 0x2e8);
    local_34 = *(undefined4 *)(lVar3 + 0x2d0);
    local_70 = DAT_04c487d4;
    local_6e = (undefined1)local_34;
    local_6c = (undefined2)*(undefined4 *)(lVar3 + 0x2c8);
    local_6a = (undefined2)*(undefined4 *)(lVar3 + 0x2cc);
    local_68 = local_50;
    uStack_64 = uStack_4c;
    local_60 = *(undefined1 *)(param_1 + 0x308);
    local_5f = 1;
    local_5c = 2;
    uVar2 = FUN_0150bc50(&local_70);
  }
  return uVar2 & 1;
}

