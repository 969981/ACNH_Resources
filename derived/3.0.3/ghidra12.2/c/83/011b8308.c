
uint FUN_011b8308(undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_a0 [16];
  undefined *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  byte local_80;
  undefined *local_78;
  undefined *puStack_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 uStack_58;
  undefined *local_50;
  undefined8 local_48;
  undefined1 auStack_40 [16];
  undefined1 auStack_18 [8];
  
  FUN_011b9ab0(auStack_a0);
  puVar1 = PTR_DAT_04bb5c90;
  uVar4 = FUN_011a2d6c(*(long *)PTR_DAT_04bb5c90 + 0x10,param_2);
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    FUN_011b9ab0(auStack_40,param_2);
    uVar2 = FUN_011baa50(auStack_40);
    local_50 = PTR_DAT_04bbb978 + 0x10;
    lVar5 = *(long *)puVar1;
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x498);
    if (uVar2 < *(uint *)(lVar5 + 0x478)) {
      local_48 = *(undefined8 *)(*(long *)(lVar5 + 0x480) + (long)(int)uVar2 * 8);
    }
    else {
      local_48 = 0;
    }
    uVar2 = FUN_0119f860(&local_50);
    if ((uVar2 & 1) != 0) {
      local_68 = 0;
      local_78 = PTR_DAT_04bbc1a0 + 0x10;
      puStack_70 = PTR_DAT_04bb2010 + 0x10;
      uStack_58 = 0;
      local_60 = puStack_70;
      FUN_011be644(&local_78,param_2);
      FUN_0119ffb0(auStack_18,&local_50);
      iVar3 = FUN_0119fa50(&local_50);
      uStack_84 = *(undefined4 *)(PTR_DAT_04bbbf90 + 0xc);
      local_88 = 1;
      local_80 = FUN_017baf44();
      local_80 = local_80 & 1;
      local_90 = PTR_DAT_04bb5438 + 0x10;
      FUN_01a50970(&local_90,0,auStack_18,&puStack_70);
      FUN_014fd424(&local_90,iVar3 == 1,&puStack_70,0);
    }
  }
  return uVar2 & 1;
}

