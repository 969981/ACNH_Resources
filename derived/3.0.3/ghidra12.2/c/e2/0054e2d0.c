
undefined8 FUN_0054e2d0(undefined8 param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 *local_58;
  undefined8 local_50;
  undefined4 *local_48;
  
  local_58 = (undefined4 *)0x0;
  local_50 = -0x8000000000000000;
  uVar4 = FUN_0054e3e0(param_1,param_3,&local_58);
  puVar3 = PTR_DAT_04bd7160;
  if ((uVar4 & 1) == 0) {
LAB_0054e320:
    uVar5 = 0;
    uVar2 = local_50._4_4_;
  }
  else {
    if (*(ulong *)(param_2 + 8) < *(ulong *)(param_2 + 0x18)) {
      if ((int)local_50 == 0) goto LAB_0054e320;
      lVar7 = (long)(int)local_50 << 2;
      puVar6 = local_58;
      do {
        uVar1 = *puVar6;
        local_48 = (undefined4 *)0x0;
        FUN_00443d50(param_2,&DAT_0405b9b0,&local_48,puVar3,4,4);
        if (local_48 != (undefined4 *)0x0) {
          *local_48 = uVar1;
        }
        puVar6 = puVar6 + 1;
        lVar7 = lVar7 + -4;
        uVar5 = 1;
      } while (lVar7 != 0);
    }
    else {
      uVar5 = 0;
    }
    uVar2 = local_50._4_4_;
  }
  if ((-1 < local_50) && (local_50 = (ulong)uVar2 << 0x20, local_58 != (undefined4 *)0x0)) {
    FUN_00421f90(PTR_DAT_048607b8,local_58,4,uVar2 & 0x3fffffff);
  }
  return uVar5;
}

