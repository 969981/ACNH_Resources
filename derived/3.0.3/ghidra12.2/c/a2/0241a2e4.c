
void FUN_0241a2e4(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined4 *puVar4;
  int *piVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  
  *(undefined8 *)(param_1 + 0x1834) = 0;
  *(undefined4 *)(param_1 + 0x183c) = 0;
  if (param_2 != 0xb8) {
    puVar7 = *(undefined8 **)(param_1 + 0x60);
    if (puVar7 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar2 = __cxa_guard_acquire(&DAT_052461c0);
        puVar7 = &DAT_05240280;
        if (iVar2 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar7 = &DAT_05240280;
      }
    }
    if (((puVar7[0x227] != 0) && (lVar6 = *(long *)(puVar7[0x227] + 0x78), lVar6 != 0)) &&
       (plVar3 = *(long **)(lVar6 + 0x48), plVar3 != (long *)0x0)) {
      (**(code **)(*plVar3 + 0x30))(0,plVar3,&DAT_054beca8);
    }
    puVar7 = *(undefined8 **)(param_1 + 0x60);
    if (puVar7 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar2 = __cxa_guard_acquire(&DAT_052461c0);
        puVar7 = &DAT_05240280;
        if (iVar2 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar7 = &DAT_05240280;
      }
    }
    if (((puVar7[0x227] != 0) && (lVar6 = *(long *)(puVar7[0x227] + 0x78), lVar6 != 0)) &&
       (plVar3 = *(long **)(lVar6 + 0x48), plVar3 != (long *)0x0)) {
      (**(code **)(*plVar3 + 0x30))(0,plVar3,&DAT_054bec98);
    }
  }
  puVar7 = *(undefined8 **)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x1be0) = 0x3f800000;
  if (puVar7 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      puVar7 = &DAT_05240280;
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar7 = &DAT_05240280;
    }
  }
  if (puVar7[0x227] != 0) {
    FUN_03850760(0x3f800000);
  }
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xffdfffff;
  puVar7 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar7 = *(undefined8 **)(param_1 + 0x4c8);
  }
  uVar8 = *(undefined4 *)((long)puVar7 + 0x2b4);
  *(undefined4 *)(param_1 + 0x1858) = 0;
  *(undefined4 *)(param_1 + 0x1854) = uVar8;
  lVar6 = FUN_0251e98c(1);
  puVar4 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0x870) + 0xf0))(lVar6 + 0x870);
  uVar8 = *puVar4;
  *(undefined4 *)(param_1 + 0x184c) = 0;
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x100000;
  *(undefined4 *)(param_1 + 0x1850) = uVar8;
  plVar3 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar3 = *(long **)(param_1 + 0x4c8);
  }
  piVar5 = (int *)(**(code **)(*plVar3 + 0x148))();
  iVar2 = *piVar5;
  *(undefined8 *)(param_1 + 0x1820) = 0;
  uVar1 = *(uint *)(param_1 + 0x17cc) & 0xffe7ffff;
  if (iVar2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x17cc);
  }
  *(uint *)(param_1 + 0x17cc) = uVar1 & 0xfff7ffff;
  *(undefined8 *)(param_1 + 0x1844) = 0;
  return;
}

