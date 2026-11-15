
/* WARNING: Removing unreachable block (ram,0x024deb2c) */

void FUN_024de9e8(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  float *pfVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  
  if (*(char *)(param_1 + 0x985) != '\0') {
    uVar1 = (**(code **)(*(long *)(param_1 + 0x970) + (ulong)*(byte *)(param_1 + 0x984) * 8))
                      (param_1 + 0x970);
    *(undefined4 *)(param_1 + 0x978) = uVar1;
    if (*(char *)(param_1 + 0x985) != '\0') {
      iVar2 = *(int *)(param_1 + 0x980);
      fVar9 = 1.0;
      if (iVar2 != 0) {
        fVar9 = 1.0;
        if (*(int *)(param_1 + 0x978) < iVar2) {
          fVar8 = (float)*(int *)(param_1 + 0x978) / (float)iVar2;
          fVar10 = 1.0;
          if (fVar8 <= 1.0) {
            fVar10 = fVar8;
          }
          fVar9 = 0.0;
          if (0.0 <= fVar8) {
            fVar9 = fVar10;
          }
        }
      }
      lVar3 = FUN_0251e98c(1);
      pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x2860) + 0xf0))(lVar3 + 0x2860);
      fVar10 = *pfVar4;
      lVar3 = FUN_0251e98c(1);
      pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x2860) + 0xf0))(lVar3 + 0x2860);
      FUN_0244d1b8(fVar10 + fVar9 * (1.0 - *pfVar4),param_1);
      if (*(char *)(param_1 + 0x985) != '\0') {
        return;
      }
    }
  }
  puVar7 = *(undefined8 **)(param_1 + 0x60);
  local_50 = 0;
  local_48 = (long *)0x0;
  local_60 = 0;
  uStack_58 = 0;
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
  if ((puVar7[0x227] != 0) &&
     (uVar5 = FUN_03850a90(puVar7[0x227],0x3c,&local_60,*(uint *)(puVar7 + 0x2d3) >> 1 & 1),
     (uVar5 & 1) != 0)) {
    if ((local_48 == (long *)0x0) || (lVar3 = *local_48, lVar3 == 0)) {
      uVar6 = 1;
    }
    else {
      fVar9 = *(float *)(lVar3 + 0x18);
      if (fVar9 < 0.0) {
        fVar9 = *(float *)(local_48[1] + 0xc);
      }
      uVar6 = (uint)(fVar9 - *(float *)(lVar3 + 0x14));
      if (uVar6 < 2) {
        uVar6 = 1;
      }
    }
    *(undefined4 *)(param_1 + 0x978) = 0;
    *(undefined1 *)(param_1 + 0x985) = 1;
    *(byte *)(param_1 + 0x984) = (byte)(uVar6 >> 0x1f);
    *(uint *)(param_1 + 0x980) = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
    *(uint *)(param_1 + 0x97c) = uVar6 & (int)uVar6 >> 0x1f;
  }
  return;
}

