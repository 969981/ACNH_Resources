
undefined ** FUN_01558074(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 local_40;
  long lStack_38;
  
  lVar2 = FUN_0160cc10(param_1,*(undefined4 *)(param_1 + 0x298),param_1 + 0x240,param_1 + 0x298);
  if (lVar2 != 0) {
    local_40 = (undefined *)((ulong)local_40._4_4_ << 0x20);
    uVar3 = (**(code **)(*(long *)(lVar2 + 0x2a0) + 0x118))(lVar2 + 0x2a0,&local_40);
    if ((uVar3 & 1) != 0) {
      uVar1 = *(undefined4 *)(lVar2 + 0x298);
      uVar6 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x70) + 0x1d0);
      plVar4 = (long *)(**(code **)(*(long *)(lVar2 + 0x210) + 0xf0))(lVar2 + 0x210);
      (**(code **)(*plVar4 + 0x18))();
      lStack_38 = plVar4[1];
      local_40 = PTR_DAT_04bb2020 + 0x10;
      lVar2 = FUN_015ff440(uVar6,uVar1,&local_40,lVar2 + 0x298);
      if (lVar2 != 0) {
        ppuVar5 = (undefined **)(**(code **)(*(long *)(lVar2 + 0x158) + 0xf0))(lVar2 + 0x158);
        return ppuVar5;
      }
    }
  }
  return &PTR_PTR_04c4b980;
}

