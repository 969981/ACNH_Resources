
void FUN_023d4830(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  byte bVar4;
  long *plVar5;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  int local_34;
  
  local_38 = *(undefined4 *)(param_1 + 0x230);
  local_34 = DAT_05464e88;
  FUN_0071c8d0(&local_50,&local_34,&local_38,0);
  plVar5 = local_50;
  if (local_50 != (long *)0x0) {
    if (((*PTR_DAT_04bc2d80 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc2d80), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc2d78 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc2d80);
    }
    uVar2 = (**(code **)(*plVar5 + 0x20))(plVar5,PTR_DAT_04bc2d78);
    if ((uVar2 & 1) == 0) {
      local_48._0_2_ = (ushort)(byte)local_48;
    }
  }
  if (((local_50 != (long *)0x0) && ((byte)local_48 != '\0')) && (local_48._1_1_ != '\0')) {
    *(undefined4 *)((long)local_50 + 0x274) = 1;
  }
  local_34 = (uint)*(ushort *)(param_1 + 0x1900) << 0x10;
  local_50 = (long *)CONCAT44((float)(int)*(short *)(param_1 + 0x1906) * 0.25,
                              (float)*(int *)(param_1 + 0x1902) * 0.001);
  local_48 = (char *)CONCAT44(local_48._4_4_,(float)*(int *)(param_1 + 0x1908) * 0.001);
  (**(code **)(**(long **)(param_1 + 0x68) + 0x100))(*(long **)(param_1 + 0x68),&local_50);
  plVar5 = *(long **)(param_1 + 0x68);
  FUN_016e026c(0,&local_50,0,0);
  (**(code **)(*plVar5 + 0x110))(plVar5);
  (**(code **)(**(long **)(param_1 + 0x68) + 0x160))(*(long **)(param_1 + 0x68),&local_34);
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  if (puVar3 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052461c0), iVar1 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar3 = &DAT_05240280;
    }
    else {
      puVar3 = &DAT_05240280;
    }
  }
  local_50 = (long *)(PTR_DAT_04bb2020 + 0x10);
  local_48 = "PlayerGoOutFittingRoom";
  FUN_017081d0(puVar3,&local_50,6,0,0);
  local_40 = 0x3dcccccd;
  *(undefined8 *)(param_1 + 0x398) = 0;
  *(undefined2 *)(param_1 + 0x3a4) = 0x100;
  *(undefined4 *)(param_1 + 0x3a0) = 0x1e;
  bVar4 = *(byte *)(param_1 + 0x1ee8);
  if (7 < bVar4) {
    bVar4 = 0xff;
  }
  local_50 = (long *)CONCAT71(local_50._1_7_,bVar4);
  local_3c = 1;
  local_50 = (long *)CONCAT44((float)*(int *)(param_1 + 0x1902) * 0.001 + 1.0,(undefined4)local_50);
  local_48 = (char *)CONCAT44((float)*(int *)(param_1 + 0x1908) * 0.001 + -2.5,
                              (float)(int)*(short *)(param_1 + 0x1906) * 0.25);
  FUN_016fa230(*(undefined4 *)(param_1 + 0x388),&local_50,*(undefined4 *)(param_1 + 0x230),1);
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  if (puVar3 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      puVar3 = &DAT_05240280;
      if (iVar1 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar3 = &DAT_05240280;
    }
  }
  FUN_039a9c80(puVar3[0x22a],7);
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  if (puVar3 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      puVar3 = &DAT_05240280;
      if (iVar1 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar3 = &DAT_05240280;
    }
  }
  *(undefined4 *)((long)puVar3 + 0x5e84) = 1;
  return;
}

