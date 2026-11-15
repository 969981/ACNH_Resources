
void FUN_023286a0(long param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      puVar6 = &DAT_05240280;
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  if ((puVar6[0x227] == 0) || (uVar3 = FUN_03850a90(puVar6[0x227],0x29,0,0), (uVar3 & 1) == 0)) {
    *(undefined8 *)(param_1 + 0x184c) = 0x3e19999a00000000;
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x100000;
    plVar5 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar5 = *(long **)(param_1 + 0x4c8);
    }
  }
  else {
    plVar5 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar5 = *(long **)(param_1 + 0x4c8);
    }
    fVar7 = *(float *)(plVar5 + 0x4f) - *param_2;
    fVar8 = *(float *)(plVar5 + 0x50) - param_2[2];
    if (2.0 < SQRT(fVar8 * fVar8 + fVar7 * fVar7)) {
      fVar7 = *param_2 - *(float *)(plVar5 + 0x4f);
      fVar8 = param_2[2] - *(float *)(plVar5 + 0x50);
      uVar1 = FUN_006f0400(-(param_2[1] - *(float *)((long)plVar5 + 0x27c)),
                           SQRT(fVar8 * fVar8 + fVar7 * fVar7));
      *(undefined4 *)(param_1 + 0x1850) = 0x3e19999a;
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x100000;
      plVar5 = &DAT_054e9a58;
      if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
        plVar5 = *(long **)(param_1 + 0x4c8);
      }
      *(float *)(param_1 + 0x184c) = (float)uVar1 * 8.381903e-08;
      piVar4 = (int *)(**(code **)(*plVar5 + 0x148))();
      if (*piVar4 != (int)(long)((float)uVar1 * 8.381903e-08 * 11930465.0)) {
        return;
      }
      goto LAB_02328814;
    }
    *(undefined8 *)(param_1 + 0x184c) = 0x3e19999a00000000;
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x100000;
  }
  piVar4 = (int *)(**(code **)(*plVar5 + 0x148))();
  if (*piVar4 != 0) {
    return;
  }
LAB_02328814:
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xffefffff;
  return;
}

