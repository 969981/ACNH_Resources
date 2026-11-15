
undefined8 FUN_01fa5780(long *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  
  uVar6 = (**(code **)(*param_1 + 0x540))();
  if ((uVar6 & 1) != 0) {
    iVar5 = *param_2;
    if (((*PTR_DAT_04bbde00 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bbde00), iVar4 != 0)) {
      FUN_016cb6ac(PTR_DAT_04bbddf8);
      __cxa_guard_release(PTR_DAT_04bbde00);
    }
    if (0 < (int)*(uint *)PTR_DAT_04bbddf8) {
      uVar6 = 0;
      do {
        if (*(int *)(*(long *)(PTR_DAT_04bbddf8 + 8) + uVar6 * 4) == 0) {
          if (iVar5 == (int)uVar6) goto LAB_01fa57fc;
          goto LAB_01fa5834;
        }
        uVar6 = uVar6 + 1;
      } while (*(uint *)PTR_DAT_04bbddf8 != uVar6);
    }
    if (iVar5 == -1) {
LAB_01fa57fc:
      FUN_01ea5c80(param_1,PTR_PTR_04bb2238,PTR_PTR_04bb2238,1,0,PTR_DAT_04bb32e0);
      return 0;
    }
LAB_01fa5834:
    if ((((*(int *)((long)param_1 + 0x77f4) != 0x10) && ((int)param_1[0xef6] != 0x10)) &&
        (*(int *)(param_1[2] + 0x360) != 0x13)) && (*(int *)(param_1[2] + 0x378) != 0x13)) {
      plVar7 = *(long **)(param_1[1] + 0x60);
      if (plVar7 == (long *)0x0) {
        if (((DAT_052461c0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_052461c0), iVar5 != 0)) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
          plVar7 = &DAT_05240280;
        }
        else {
          plVar7 = &DAT_05240280;
        }
      }
      uVar6 = (**(code **)(*plVar7 + 0x100))();
      puVar2 = PTR_DAT_04bb3238;
      if (((uVar6 & 1) != 0) && (*(char *)((long)param_1 + 0xaf9c) == '\0')) {
        *(undefined4 *)(param_1 + 0x15f4) = 8;
        puVar3 = PTR_DAT_04bb37e0;
        *(undefined1 *)((long)param_1 + 0xaf9c) = 1;
        *(undefined4 *)((long)param_1 + 0xafa4) = *(undefined4 *)puVar2;
        *(undefined2 *)(param_1 + 0x15f5) = *(undefined2 *)puVar3;
        *(undefined *)((long)param_1 + 0xafaa) = puVar3[2];
        *(undefined *)((long)param_1 + 0xafab) = puVar3[3];
        uVar1 = *(undefined4 *)(puVar3 + 4);
        *(undefined1 *)(param_1 + 0x15f3) = 0;
        *(undefined4 *)((long)param_1 + 0xafac) = uVar1;
        *(undefined1 *)(param_1 + 0x15f2) = 0;
        return 1;
      }
    }
  }
  return 0;
}

