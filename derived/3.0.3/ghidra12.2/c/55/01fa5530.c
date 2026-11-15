
undefined8 FUN_01fa5530(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  uVar6 = (**(code **)(*param_1 + 0x540))();
  puVar2 = PTR_DAT_04bb43c0;
  if ((uVar6 & 1) != 0) {
    lVar7 = *(long *)PTR_DAT_04bb43c0;
    uVar4 = FUN_0277d6c4(param_3);
    if (*(long *)puVar2 != 0) {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if (((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
          (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) &&
         (lVar7 = *(long *)PTR_DAT_04bb27f8, lVar7 != 0)) {
        if (*(int *)(lVar7 + 0x40) != 0) {
          plVar8 = *(long **)(lVar7 + 0x48);
          lVar7 = (long)*(int *)(lVar7 + 0x40) << 3;
          do {
            uVar6 = FUN_0277d7b4(param_3,*plVar8 + 8);
            if ((uVar6 & 1) != 0) goto LAB_01fa5610;
            plVar8 = plVar8 + 1;
            lVar7 = lVar7 + -8;
          } while (lVar7 != 0);
        }
        uVar6 = FUN_01fb20f0(param_1,param_3);
        if (((uVar6 & 1) != 0) ||
           ((*(int *)(param_1[1] + 0x500) == 0 &&
            (uVar6 = FUN_01fb29b0(param_1,param_3), (uVar6 & 1) != 0)))) {
LAB_01fa5610:
          *(uint *)(param_1 + 0x15f6) = *(uint *)(param_1 + 0x15f6) | 0x40000;
        }
      }
    }
    if (((*(int *)((long)param_1 + 0x77f4) != 0x10) && ((int)param_1[0xef6] != 0x10)) &&
       ((*(int *)(param_1[2] + 0x360) != 0x13 && (*(int *)(param_1[2] + 0x378) != 0x13)))) {
      plVar8 = *(long **)(param_1[1] + 0x60);
      if (plVar8 == (long *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(&DAT_052461c0);
          plVar8 = &DAT_05240280;
          if (iVar5 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          plVar8 = &DAT_05240280;
        }
      }
      uVar6 = (**(code **)(*plVar8 + 0x100))(plVar8);
      puVar2 = PTR_DAT_04bb3238;
      if (((uVar6 & 1) != 0) && (*(char *)((long)param_1 + 0xaf9c) == '\0')) {
        *(undefined4 *)(param_1 + 0x15f4) = 7;
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

