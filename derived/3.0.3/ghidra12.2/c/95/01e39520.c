
void FUN_01e39520(long param_1,undefined8 param_2,undefined4 *param_3,uint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  
  plVar7 = *(long **)(param_1 + 0x68);
  lVar8 = *(long *)(param_1 + 0x3b0);
  (**(code **)(*plVar7 + 0x140))(plVar7,param_2,1);
  (**(code **)(*plVar7 + 0x160))(plVar7,param_3);
  if (lVar8 != 0) {
    *(undefined4 *)(param_1 + 0x77c) = *param_3;
    *(undefined4 *)(lVar8 + 0x4e4) = *param_3;
    if (*(int *)(lVar8 + 0x378) < 0x23) {
      *(undefined4 *)(lVar8 + 0x3a4) = *param_3;
    }
    *(undefined4 *)(lVar8 + 800) = *param_3;
    **(undefined4 **)(lVar8 + 0x350) = *param_3;
    **(undefined4 **)(lVar8 + 0x348) = *param_3;
  }
  puVar3 = PTR_DAT_04bb30c8;
  puVar2 = PTR_DAT_04bb30c0;
  if ((param_4 & 1) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0xb0) != param_1 + 0xa8) {
    lVar8 = (long)*(int *)(param_1 + 0xbc);
    plVar7 = (long *)(*(long *)(param_1 + 0xb0) - lVar8);
    puVar1 = PTR_DAT_04bb2e38 + 0x10;
    do {
      if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
        *(undefined **)puVar2 = puVar1;
        __cxa_guard_release(puVar3);
      }
      if ((plVar7 != (long *)0x0) &&
         (uVar6 = (**(code **)(*plVar7 + 0x10))(plVar7,puVar2), (uVar6 & 1) != 0)) {
        if (plVar7[0x51] != 0) {
          FUN_03effd90();
        }
        break;
      }
      plVar7 = (long *)(*(long *)((long)plVar7 + lVar8 + 8) - lVar8);
    } while (plVar7 != (long *)((param_1 + 0xa8) - lVar8));
  }
  plVar7 = *(long **)(param_1 + 0x60);
  if (plVar7 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      plVar7 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar7 = &DAT_05240280;
    }
  }
  uVar4 = (**(code **)(*plVar7 + 0x430))(plVar7);
  FUN_016ff580(uVar4);
  uVar4 = (**(code **)(*plVar7 + 0x448))(plVar7);
  FUN_016ff580(uVar4);
  uVar4 = (**(code **)(*plVar7 + 0x450))(plVar7);
  FUN_016ff580(uVar4);
  uVar4 = (**(code **)(*plVar7 + 0x468))(plVar7);
  FUN_016ff580(uVar4);
  uVar4 = (**(code **)(*plVar7 + 0x468))(plVar7);
  FUN_016ff580(uVar4);
  return;
}

