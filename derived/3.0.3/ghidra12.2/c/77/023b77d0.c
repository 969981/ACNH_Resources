
void FUN_023b77d0(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  uint *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  char *pcVar8;
  
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      puVar6 = &DAT_05240280;
      if (iVar1 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  if (puVar6[0x227] != 0) {
    lVar3 = *(long *)(puVar6[0x227] + 0x88);
    plVar7 = (long *)(lVar3 + 0x60);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    pcVar8 = *(char **)(lVar3 + 0x68);
    (**(code **)(DAT_054a8720 + 0x18))(&DAT_054a8720);
    if (pcVar8 != DAT_054a8728) {
      pcVar8 = *(char **)(lVar3 + 0x68);
      if (*pcVar8 != *DAT_054a8728) {
        return;
      }
      if (*pcVar8 != '\0') {
        uVar2 = 0;
        do {
          uVar4 = uVar2;
          if (uVar4 == 0x80000) {
            return;
          }
          if (pcVar8[uVar4 + 1] != DAT_054a8728[uVar4 + 1]) {
            return;
          }
          if (pcVar8[uVar4 + 1] == '\0') goto LAB_023b78f0;
          if (pcVar8[uVar4 + 2] != DAT_054a8728[uVar4 + 2]) {
            return;
          }
          uVar2 = uVar4 + 2;
        } while (pcVar8[uVar4 + 2] != '\0');
        uVar4 = uVar4 + 1;
LAB_023b78f0:
        if (uVar4 >> 0x13 != 0) {
          return;
        }
      }
    }
    puVar6 = *(undefined8 **)(param_1 + 0x60);
    if (puVar6 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_052461c0);
        puVar6 = &DAT_05240280;
        if (iVar1 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar6 = &DAT_05240280;
      }
    }
    if ((((puVar6[0x227] == 0) || (uVar2 = FUN_03850368(puVar6[0x227],0), (uVar2 & 1) != 0)) ||
        (puVar6[0x227] == 0)) ||
       ((uVar2 = FUN_03850368(puVar6[0x227],0), (uVar2 & 1) != 0 ||
        (uVar2 = FUN_0384fca4(puVar6[0x227],0), (uVar2 & 1) != 0)))) {
      FUN_023164ec(param_1,6);
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffdffff;
      if (*(long *)PTR_DAT_04bb4718 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar1 = __cxa_guard_acquire(&DAT_054f0960);
          puVar5 = (uint *)&DAT_054f0958;
          if (iVar1 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
        }
        else {
          puVar5 = (uint *)&DAT_054f0958;
        }
      }
      else {
        puVar5 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x204);
        if ((ulong)*(byte *)(param_1 + 0x1ee8) < 8) {
          puVar5 = puVar5 + (ulong)*(byte *)(param_1 + 0x1ee8) * 2;
        }
      }
      *puVar5 = *puVar5 | 1;
    }
  }
  return;
}

