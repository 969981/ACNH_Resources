
void FUN_0236e0e8(long param_1)

{
  float fVar1;
  int iVar2;
  long lVar3;
  float *pfVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  
  lVar3 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar3 = *(long *)(param_1 + 0x70) + 0x278;
  }
  if (*(int *)(lVar3 + 0x10) == 0x114) {
    lVar3 = FUN_0251e98c(1);
    pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x2a0) + 0xf0))(lVar3 + 0x2a0);
    fVar6 = 0.5 / *pfVar4;
    *(float *)(param_1 + 0x1bf4) = fVar6;
    fVar7 = 1.0;
    if (fVar6 <= 1.0) {
      fVar7 = fVar6;
    }
    fVar1 = 0.1;
    if (0.1 <= fVar6) {
      fVar1 = fVar7;
    }
    lVar3 = FUN_0251e98c(1);
    pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x2a0) + 0xf0))(lVar3 + 0x2a0);
    fVar7 = *pfVar4;
    *(undefined4 *)(param_1 + 0x1bf4) = 0x3f800000;
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x400;
    *(float *)(param_1 + 0x1bf0) = fVar1 * fVar7;
  }
  if (*(int *)(param_1 + 0x1c04) == 1) {
    plVar5 = *(long **)(param_1 + 0x60);
    if (plVar5 == (long *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        plVar5 = &DAT_05240280;
      }
      else {
        plVar5 = &DAT_05240280;
      }
    }
    (**(code **)(*plVar5 + 0x4e8))(plVar5,0);
  }
  *(undefined4 *)(param_1 + 0x1830) = 0;
  *(undefined4 *)(param_1 + 0x1828) = 0;
  return;
}

