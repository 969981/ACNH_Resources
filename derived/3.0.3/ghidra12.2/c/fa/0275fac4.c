
undefined8 FUN_0275fac4(long param_1)

{
  int iVar1;
  long lVar2;
  undefined4 local_b8 [2];
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined *local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  lVar2 = *(long *)(param_1 + 0x70);
  if (lVar2 != 0) {
    local_50 = 0;
    local_70 = 0;
    local_68 = 0;
    local_88 = 0;
    local_60 = 0;
    local_58 = 0;
    local_80 = PTR_DAT_04bc3858 + 0x10;
    local_48 = 0;
    local_30 = 0;
    uStack_28 = 0;
    local_78 = 0;
    local_98 = 0;
    uStack_90 = 0xb182fca3;
    local_a8 = 0x9e6968f4;
    uStack_a0 = DAT_0417b5c0;
    local_b8[0] = 3;
    local_b0 = &local_a8;
    local_40 = 0;
    uStack_38 = 0;
    FUN_0272d760(lVar2 + 8,&local_48,local_b8);
    if (((local_48 != 0) && (*(int *)(local_48 + 0x2c) == 1)) && (*(long *)(lVar2 + 0x30) != 0)) {
      local_78 = local_48;
      local_70 = local_40;
      local_68 = uStack_38;
      local_60 = local_30;
      local_58 = uStack_28;
      local_50 = *(long *)(lVar2 + 0x30);
    }
    lVar2 = FUN_027ebd78(&local_80);
    local_48 = *(long *)(lVar2 + 8);
    local_40 = *(undefined8 *)(lVar2 + 0x10);
    iVar1 = FUN_0272e334(&local_48,0xd3510b78);
    if (iVar1 != -1) {
      lVar2 = FUN_0272e550(&local_78,local_50,iVar1,0,0);
      if (lVar2 != 0) {
        FUN_0269b470();
      }
      lVar2 = FUN_0272e550(&local_78,local_50,iVar1,1,0);
      if (lVar2 != 0) {
        FUN_0269b470();
      }
      lVar2 = FUN_0272e550(&local_78,local_50,iVar1,2,0);
      if (lVar2 != 0) {
        FUN_0269b470();
      }
      lVar2 = FUN_0272e550(&local_78,local_50,iVar1,3,0);
      if (lVar2 != 0) {
        FUN_0269b470();
      }
      lVar2 = FUN_0272e550(&local_78,local_50,iVar1,4,0);
      if (lVar2 != 0) {
        FUN_0269b470();
      }
      lVar2 = FUN_0272e550(&local_78,local_50,iVar1,5,0);
      if (lVar2 != 0) {
        FUN_0269b470();
      }
      lVar2 = FUN_0272e550(&local_78,local_50,iVar1,6,0);
      if (lVar2 != 0) {
        FUN_0269b470();
      }
      lVar2 = FUN_0272e550(&local_78,local_50,iVar1,7,0);
      if (lVar2 != 0) {
        FUN_0269b470();
      }
      lVar2 = FUN_0272e550(&local_78,local_50,iVar1,8,0);
      if (lVar2 != 0) {
        FUN_0269b470();
      }
      lVar2 = FUN_0272e550(&local_78,local_50,iVar1,9,0);
      if (lVar2 != 0) {
        FUN_0269b470();
      }
    }
  }
  return 1;
}

