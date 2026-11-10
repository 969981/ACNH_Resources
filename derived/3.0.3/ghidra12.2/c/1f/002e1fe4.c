
void FUN_002e1fe4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 local_58;
  undefined1 local_50 [16];
  undefined1 *local_40;
  undefined8 uStack_38;
  undefined4 local_24;
  
  FUN_00314428(*(undefined8 *)(param_2 + 0xd8));
  lVar5 = *(long *)(param_2 + 0xd8);
  uVar1 = FUN_002a4680(param_3);
  *(undefined4 *)(lVar5 + 0xc) = uVar1;
  FUN_002eb5e4(param_3);
  iVar2 = FUN_00227cb0();
  if (iVar2 != 0) {
    FUN_002eb5e4(param_3);
    iVar2 = FUN_00227d94();
    lVar5 = *(long *)(param_2 + 0xd8);
    if (iVar2 == 2) {
      FUN_002eb5e4(param_3);
      uVar3 = FUN_00227acc();
      local_50[0] = 0;
      puVar4 = PTR_DAT_04bc0ec8 + 0x10;
      local_40 = local_50;
      uStack_38 = 0x10;
      local_58 = puVar4;
      FUN_0018b1d0(&local_58,uVar3,0xffffffffffffffff);
    }
    else {
      FUN_002eb5e4(param_3);
      uVar3 = FUN_00227acc();
      local_50[0] = 0;
      puVar4 = PTR_DAT_04bc0ec8 + 0x10;
      local_40 = local_50;
      uStack_38 = 0x10;
      local_58 = puVar4;
      FUN_0018b070(&local_58,uVar3,0xffffffffffffffff);
    }
    FUN_00189504(lVar5 + 0x68,&local_58);
    local_58 = puVar4;
    FUN_0018b1a0(&local_58);
  }
  local_58 = (undefined *)((ulong)local_58 & 0xffffffff00000000);
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_58 + 4),(Result *)&local_24);
  FUN_002296c4(param_1,&local_58);
  return;
}

