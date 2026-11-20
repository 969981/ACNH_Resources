
undefined8 FUN_04002450(undefined8 *param_1,uint param_2)

{
  long *plVar1;
  code *pcVar2;
  undefined *puVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined4 local_3c;
  undefined2 local_38;
  undefined1 local_36;
  int local_34;
  
  if ((DAT_05b059c0 & 1) == 0) {
    DAT_05b059c8 = PTR_LAB_04c57920;
    PTR_LAB_04c57920 = PTR_LAB_04bdf338;
    DAT_05b059d0 = PTR_FUN_04c57928;
    PTR_FUN_04c57928 = PTR_LAB_04bdf340;
    DAT_05b059d8 = param_2;
    *(undefined8 *)PTR_DAT_04bdf348 = DAT_05b059b8;
    DAT_05b059e0 = nn::os::GetCurrentThread();
    uVar8 = DAT_05b059d8;
    puVar3 = PTR_DAT_04bdf328;
    plVar1 = (long *)PTR_DAT_04bdf378;
    if ((long *)*param_1 != (long *)0x0) {
      plVar1 = (long *)*param_1;
    }
    *(long **)PTR_DAT_04bdf328 = plVar1;
    if ((uVar8 >> 1 & 1) != 0) {
      puVar6 = (undefined4 *)(**(code **)(*plVar1 + 0x10))(plVar1,4,0);
      if (puVar6 == (undefined4 *)0x0) goto LAB_04002624;
      local_34 = nn::os::AllocateTlsSlot((TlsSlot *)puVar6,(_func_void_ulong *)0x0);
      if (local_34 != 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl((Result *)&local_34);
      }
      DAT_05b05a08 = puVar6;
      nn::os::GetTlsValue(*puVar6);
      puVar7 = (undefined8 *)(**(code **)(**(long **)puVar3 + 0x10))(*(long **)puVar3,0x18,0);
      if (puVar7 == (undefined8 *)0x0) goto LAB_04002624;
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      nn::os::SetTlsValue(*puVar6,puVar7);
      uVar8 = DAT_05b059d8;
    }
    if ((uVar8 & 1) != 0) {
      uVar5 = nn::os::GetSystemTickFrequency();
      *(undefined8 *)PTR_DAT_04bcaa30 = uVar5;
      uVar8 = DAT_05b059d8;
    }
    if ((uVar8 >> 2 & 1) != 0) {
      FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
      uVar8 = DAT_05b059d8;
    }
    if ((uVar8 & 0x12) == 0x10) {
LAB_04002624:
                    /* WARNING: Does not return */
      pcVar2 = (code *)UndefinedInstructionException(0x8002,0x4002624);
      (*pcVar2)();
    }
    bVar4 = nn::time::IsInitialized();
    DAT_05b059dc = bVar4 & 1;
    if ((bVar4 & 1) == 0) {
      nn::time::Initialize();
    }
    nn::time::StandardUserSystemClock::GetCurrentTime((PosixTime *)PTR_DAT_04bdf350);
    nn::os::GetSystemTick();
    local_36 = 0;
    local_3c = 0x10107b2;
    local_38 = 0;
    nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_3c);
    uVar5 = 0;
    DAT_05b059c0 = 1;
  }
  else {
    uVar5 = 0x8000000c;
  }
  return uVar5;
}

