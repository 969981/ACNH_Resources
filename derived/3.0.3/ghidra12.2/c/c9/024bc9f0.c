
void FUN_024bc9f0(long param_1,float *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 local_34;
  ulong local_18;
  
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  local_18 = 0;
  if (puVar2 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052461c0), iVar1 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar2 = &DAT_05240280;
    }
    else {
      puVar2 = &DAT_05240280;
    }
  }
  FUN_01706fac(puVar2,param_2,&local_18);
  local_34 = FUN_006f0400(*param_2 - *(float *)(*(long *)(param_1 + 0x68) + 0x278),
                          param_2[2] - *(float *)(*(long *)(param_1 + 0x68) + 0x280));
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  local_18 = local_18 & 0xffffffff00000000;
  if (puVar2 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      puVar2 = &DAT_05240280;
      if (iVar1 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar2 = &DAT_05240280;
    }
  }
  FUN_017071b4(puVar2,&local_34,&local_18);
  return;
}

