
undefined8 FUN_00231db8(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined8 local_48;
  undefined1 auStack_34 [16];
  undefined4 local_24;
  
  FUN_0022d1f4();
  FUN_0022d308();
  uVar2 = FUN_0023d350();
  if ((uVar2 & 1) == 0) {
    local_48 = 0;
    FUN_002282f0(&local_48);
    if (local_48 <= *(ulong *)(param_1 + 0x2008)) {
      return 0;
    }
    local_24 = 0;
    uVar4 = *(undefined8 *)(param_1 + 0x16d8);
    local_48 = CONCAT44(local_48._4_4_,0xc406);
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_48 + 4),(Result *)&local_24);
    FUN_002296c4(auStack_34,&local_48);
    puVar3 = auStack_34;
  }
  else {
    iVar1 = FUN_0029b330(DAT_04c60f48);
    uVar4 = *(undefined8 *)(param_1 + 0x16d8);
    if (iVar1 != 5) {
      local_48 = (ulong)local_48._4_4_ << 0x20;
      local_24 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((long)&local_48 + 4),(Result *)&local_24);
      FUN_002296c4(auStack_68,&local_48);
      FUN_00220f8c(uVar4,auStack_68);
      *(undefined8 *)(param_1 + 0x16d8) = 0;
      return 1;
    }
    local_24 = 0;
    local_48 = CONCAT44(local_48._4_4_,0xc406);
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_48 + 4),(Result *)&local_24);
    FUN_002296c4(auStack_58,&local_48);
    puVar3 = auStack_58;
  }
  FUN_00220ff8(uVar4,puVar3);
  *(undefined8 *)(param_1 + 0x16d8) = 0;
  return 1;
}

