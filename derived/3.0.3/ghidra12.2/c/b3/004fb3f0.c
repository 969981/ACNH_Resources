
void FUN_004fb3f0(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_a0 [16];
  ulong local_90;
  undefined8 local_78;
  undefined8 uStack_70;
  ulong local_68;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  FUN_004dcb40(&local_78,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x18));
  local_40 = local_78;
  uStack_38 = uStack_70;
  local_50 = 0;
  local_48 = -0x8000000000000000;
  FUN_004dca40(&local_40,&local_50);
  if (0 < (int)local_48) {
    lVar3 = 0;
    do {
      while( true ) {
        uVar2 = *(undefined8 *)(local_50 + lVar3 * 8);
        FUN_004dc0a0(&local_78,param_1,uVar2);
        FUN_004dc0a0(auStack_a0,param_2,uVar2);
        FUN_004d6910(auStack_a0,&local_78);
        if ((local_90 & 1) != 0) break;
        if ((local_68 & 1) != 0) goto LAB_004fb4b0;
LAB_004fb48c:
        lVar3 = lVar3 + 1;
        if ((int)local_48 <= lVar3) goto LAB_004fb4c8;
      }
      FUN_0043dd50(local_90 & 0xfffffffffffffffe);
      if ((local_68 & 1) == 0) goto LAB_004fb48c;
LAB_004fb4b0:
      FUN_0043dd50(local_68 & 0xfffffffffffffffe);
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)local_48);
  }
LAB_004fb4c8:
  lVar3 = local_48;
  uVar1 = local_48._4_4_;
  local_48 = (ulong)local_48._4_4_ << 0x20;
  if ((-1 < lVar3) && (local_50 != 0)) {
    FUN_00421f90(PTR_DAT_048607b8,local_50,8,uVar1 & 0x3fffffff);
  }
  return;
}

