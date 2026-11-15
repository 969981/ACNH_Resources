
void FUN_0236df68(long param_1)

{
  undefined8 *puVar1;
  float fVar2;
  int iVar3;
  long lVar4;
  float *pfVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  undefined *local_40;
  undefined1 *puStack_38;
  
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_052461c0);
      puVar6 = &DAT_05240280;
      if (iVar3 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  local_40 = PTR_DAT_04bb2020 + 0x10;
  puStack_38 = &DAT_040a6976;
  puVar1 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x4c8);
  }
  FUN_01733c60(puVar6 + 0xb8f,&local_40,puVar1 + 0x4f,puVar1 + 0x56,0);
  lVar4 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar4 = *(long *)(param_1 + 0x70) + 0x278;
  }
  if (*(int *)(lVar4 + 0x10) == 0x114) {
    lVar4 = FUN_0251e98c(1);
    pfVar5 = (float *)(**(code **)(*(long *)(lVar4 + 0x2a0) + 0xf0))(lVar4 + 0x2a0);
    fVar7 = 0.5 / *pfVar5;
    *(float *)(param_1 + 0x1bf4) = fVar7;
    fVar8 = 1.0;
    if (fVar7 <= 1.0) {
      fVar8 = fVar7;
    }
    fVar2 = 0.1;
    if (0.1 <= fVar7) {
      fVar2 = fVar8;
    }
    lVar4 = FUN_0251e98c(1);
    pfVar5 = (float *)(**(code **)(*(long *)(lVar4 + 0x2a0) + 0xf0))(lVar4 + 0x2a0);
    fVar8 = *pfVar5;
    *(undefined4 *)(param_1 + 0x1bf4) = 0x3f800000;
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x400;
    *(float *)(param_1 + 0x1bf0) = fVar2 * fVar8;
  }
  return;
}

