
bool FUN_01186cb0(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  short *psVar7;
  undefined *local_a8;
  char *local_a0;
  undefined *puStack_98;
  undefined4 local_90;
  undefined *local_88;
  undefined *puStack_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined4 local_73;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined8 local_44;
  undefined8 local_3c;
  undefined4 local_34;
  undefined *local_30;
  undefined *puStack_28;
  
  local_74 = 0;
  local_90 = 1;
  local_78 = 0x1010100;
  local_73 = 0x1010101;
  local_a8 = PTR_DAT_04bb2020 + 0x10;
  puStack_80 = PTR_DAT_04bb2120;
  local_54 = 0;
  uStack_48 = 0;
  uStack_50 = (undefined4)param_2;
  local_4c = (undefined4)((ulong)param_2 >> 0x20);
  puStack_28 = PTR_DAT_04bb2120;
  puStack_98 = PTR_DAT_04bdf0b0 + 0x10;
  local_6c = 0;
  local_64 = 0;
  local_5c = 0;
  local_44 = 0;
  local_3c = 0;
  local_34 = 0;
  local_a0 = "EventFlow/Info/EventFlowInfoProduct.byml";
  local_88 = local_a8;
  local_30 = local_a8;
  puVar4 = (undefined8 *)FUN_03f2dbac(param_1 + 0x20,&local_a8,&puStack_98,0);
  if (((*PTR_DAT_04bb2828 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb2828), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bb2820 = PTR_DAT_04bb2830 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb2828);
  }
  if ((puVar4 == (undefined8 *)0x0) ||
     (uVar5 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bb2820), (uVar5 & 1) == 0)) {
    return false;
  }
  psVar7 = (short *)puVar4[1];
  if (psVar7 != (short *)0x0) {
    uVar5 = FUN_03eaa5e0(psVar7);
    if ((uVar5 & 1) == 0) {
      psVar7 = (short *)0x0;
    }
    else {
      uVar1 = *(uint *)(psVar7 + 6);
      uVar2 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
      uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
      if (*psVar7 != 0x5942) {
        uVar2 = uVar1;
      }
      if (uVar2 != 0) {
        lVar6 = (long)psVar7 + (ulong)uVar2;
        goto LAB_01186dd0;
      }
    }
  }
  lVar6 = 0;
LAB_01186dd0:
  *(short **)(param_1 + 8) = psVar7;
  *(long *)(param_1 + 0x10) = lVar6;
  return psVar7 != (short *)0x0;
}

