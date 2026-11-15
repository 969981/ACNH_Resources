
void FUN_023d3858(long param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  byte bVar5;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  if (puVar3 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar3 = &DAT_05240280;
    }
    else {
      puVar3 = &DAT_05240280;
    }
  }
  local_40 = (long *)(PTR_DAT_04bb2020 + 0x10);
  local_38 = "PlayerGoInFittingRoom";
  FUN_017081d0(puVar3,&local_40,6,0,0);
  local_28 = *(undefined4 *)(param_1 + 0x230);
  uStack_24 = DAT_05464e88;
  FUN_0071c8d0(&local_40,&uStack_24,&local_28,0);
  plVar1 = local_40;
  if (local_40 != (long *)0x0) {
    if (((*PTR_DAT_04bc2d80 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc2d80), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bc2d78 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc2d80);
    }
    uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bc2d78);
    if ((uVar4 & 1) == 0) {
      local_38 = (char *)((ulong)local_38 & 0xff);
    }
  }
  if (((local_40 != (long *)0x0) && ((char)local_38 != '\0')) && (local_38._1_1_ != '\0')) {
    *(undefined4 *)((long)local_40 + 0x274) = 3;
  }
  *(undefined8 *)(param_1 + 0x398) = 0;
  local_30 = 0x3dcccccd;
  *(undefined2 *)(param_1 + 0x3a4) = 0x100;
  *(undefined4 *)(param_1 + 0x3a0) = 0x1e;
  bVar5 = *(byte *)(param_1 + 0x1ee8);
  if (7 < bVar5) {
    bVar5 = 0xff;
  }
  local_40 = (long *)CONCAT71(local_40._1_7_,bVar5);
  local_2c = 1;
  local_40 = (long *)CONCAT44((float)*(int *)(param_1 + 0x1902) * 0.001 + 1.0,(undefined4)local_40);
  local_38 = (char *)CONCAT44((float)*(int *)(param_1 + 0x1908) * 0.001 + -2.5,
                              (float)(int)*(short *)(param_1 + 0x1906) * 0.25);
  FUN_016fa230(*(undefined4 *)(param_1 + 0x388),&local_40,*(undefined4 *)(param_1 + 0x230),1);
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  if (puVar3 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      puVar3 = &DAT_05240280;
      if (iVar2 != 0) {
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

