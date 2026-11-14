
void FUN_01be14b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined *local_b8 [11];
  long *local_60;
  long *local_58;
  long *local_50;
  undefined *local_40;
  int local_38;
  char local_34;
  
  local_40 = PTR_DAT_04bc0a78;
  local_34 = '\0';
  local_38 = *(int *)PTR_DAT_04bc0b30;
  *(int *)PTR_DAT_04bc0b30 = local_38 + 1;
  local_40 = local_40 + 0x10;
  if (((*PTR_DAT_04bc0a88 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar2 != 0))
  {
    FUN_01bb25c8(PTR_DAT_04bc0a80,param_2);
    __cxa_guard_release(PTR_DAT_04bc0a88);
  }
  if (0 < (int)*(uint *)PTR_DAT_04bc0a80) {
    uVar4 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bc0a80 + 8) + uVar4 * 4) == 0x55) goto LAB_01be153c;
      uVar4 = uVar4 + 1;
    } while (*(uint *)PTR_DAT_04bc0a80 != uVar4);
  }
  uVar4 = 0;
LAB_01be153c:
  local_b8[0] = (undefined *)CONCAT44(local_b8[0]._4_4_,(int)uVar4);
  lVar5 = 1;
  FUN_01bae480(&local_40,param_2,0,local_b8,1);
  puVar1 = PTR_DAT_04bb3350;
  lVar6 = *(long *)PTR_DAT_04bc08b0;
  if (lVar6 != 0) {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar5 = *(long *)(lVar3 + 0xa8);
    *(long *)(lVar3 + 0xa8) = lVar6;
  }
  FUN_01bed9e0(local_b8,&local_40);
  FUN_006f3d64(local_b8,param_1 + 0x170,param_1 + 0x10);
  local_b8[0] = PTR_DAT_04bc0c00 + 0x10;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 8))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 8))();
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 8))();
  }
  FUN_003532f4(local_b8);
  if (lVar5 != 1) {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    *(long *)(lVar6 + 0xa8) = lVar5;
  }
  if (local_34 != '\0') {
    FUN_01bc1880(*(long *)PTR_DAT_04bb28f8 + 0x2990,&local_38);
  }
  return;
}

