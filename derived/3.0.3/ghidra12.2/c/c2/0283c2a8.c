
undefined8 FUN_0283c2a8(ulong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 local_44;
  undefined8 local_3c;
  undefined4 local_34;
  
  if (param_1 == (ulong *)0x0) {
    return 1;
  }
  uVar4 = *param_1;
  if ((uVar4 & 0x818f) != 0) {
    return 1;
  }
  if ((uVar4 & 0x70) == 0) {
    return 1;
  }
  uVar3 = (uint)uVar4;
  if (((uVar3 >> 10 & 1) == 0) && (DAT_05574040 != 0)) {
    FUN_026f5430();
    uVar4 = *param_1;
  }
  local_44 = 0x100000000;
  uVar4 = (uVar4 >> 4 & 7) - 1;
  local_3c = 0x300000002;
  local_34 = 4;
  if (uVar4 < 5) {
    iVar1 = *(int *)((long)&local_44 + uVar4 * 4);
    nn::os::GetSystemTick();
    uVar4 = FUN_028bdcc0();
    if ((((uVar4 & 1) != 0) && (DAT_05554928 != 0)) && (DAT_04ccc690 != 0)) {
      if ((*(ulong *)(DAT_05554928 + 0xb8) & 1) != 0) {
        FUN_008122f0();
      }
      FUN_026cb020();
      uVar4 = (*(code *)(&PTR_FUN_04a922a0)[iVar1])();
      nn::os::GetSystemTick();
      if ((uVar4 & 1) != 0) {
        if (DAT_05574040 != 0) {
          FUN_026f64f0();
        }
        uVar2 = 1;
        *(uint *)((long)param_1 + 0x54) = *(uint *)((long)param_1 + 0x54) | 2;
        goto joined_r0x0283c3e8;
      }
    }
  }
  *(uint *)((long)param_1 + 0x54) = *(uint *)((long)param_1 + 0x54) | 1;
  if ((int)param_1[1] == 0) {
    uVar2 = 0;
    *(undefined4 *)(param_1 + 1) = 7;
  }
  else {
    uVar2 = 0;
  }
joined_r0x0283c3e8:
  if (((uVar3 >> 10 & 1) == 0) && (DAT_05574040 != 0)) {
    FUN_026f5518();
  }
  return uVar2;
}

