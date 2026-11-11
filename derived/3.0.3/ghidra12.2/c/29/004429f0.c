
undefined8 FUN_004429f0(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long local_30;
  undefined8 local_28;
  
  puVar1 = PTR_DAT_048607b8;
  local_30 = 0;
  local_28._0_4_ = 0;
  local_28._4_4_ = 0x80000000;
  lVar4 = *param_1;
  if (lVar4 == 0) {
    return 0;
  }
  do {
    FUN_00426990(puVar1,&local_30,8);
    uVar2 = (uint)local_28;
    do {
      local_28._0_4_ = uVar2 + 1;
      *(long *)(local_30 + (long)(int)uVar2 * 8) = lVar4;
      lVar4 = *(long *)(lVar4 + 0x20);
      if (lVar4 == 0) {
        if (-1 < (int)uVar2) {
          lVar4 = (long)(int)(uint)local_28;
          do {
            lVar5 = lVar4 + -1;
            lVar4 = *(long *)(local_30 + lVar4 * 8 + -8);
            pcVar3 = *(code **)(lVar4 + 0x10);
            if (pcVar3 != (code *)0x0) {
              (*pcVar3)(*(undefined8 *)(lVar4 + 0x18));
            }
            lVar4 = lVar5;
          } while (0 < lVar5);
        }
        uVar2 = local_28._4_4_;
        local_28 = (ulong)local_28._4_4_ << 0x20;
        if ((int)uVar2 < 0) {
          return 0;
        }
        if (local_30 == 0) {
          return 0;
        }
        FUN_00421f90(puVar1,local_30,8,uVar2 & 0x3fffffff);
        return 0;
      }
      uVar2 = (uint)local_28;
    } while ((uint)local_28 != (local_28._4_4_ & 0x3fffffff));
  } while( true );
}

