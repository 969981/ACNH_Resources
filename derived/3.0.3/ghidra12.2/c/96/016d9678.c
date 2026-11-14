
/* WARNING: Removing unreachable block (ram,0x016d9704) */

void FUN_016d9678(long param_1,float *param_2,float *param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 *param_6)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_70;
  float fStack_6c;
  float local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  
  if (param_1 != 0) {
    puVar6 = *(undefined8 **)(param_1 + 0x60);
    local_50 = 0;
    local_48 = (long *)0x0;
    local_60 = 0;
    uStack_58 = 0;
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
      _local_70 = CONCAT44(fStack_6c,9);
      uVar2 = FUN_03850a90(puVar6[0x227],9,&local_60,*(uint *)(puVar6 + 0x2d3) >> 1 & 1);
      if ((uVar2 & 1) != 0) {
        (**(code **)*param_6)(param_6,&local_60);
        fVar7 = *param_2;
        fVar8 = param_2[1];
        plVar3 = *(long **)(param_1 + 0x68);
        local_68 = param_2[2];
        fVar9 = 1.0;
        if ((local_48 != (long *)0x0) && (lVar5 = *local_48, lVar5 != 0)) {
          fVar9 = *(float *)(lVar5 + 0x18);
          if (fVar9 < 0.0) {
            fVar9 = *(float *)(local_48[1] + 0xc);
          }
          uVar4 = (uint)(fVar9 - *(float *)(lVar5 + 0x14));
          if (uVar4 < 2) {
            uVar4 = 1;
          }
          fVar9 = (float)uVar4;
        }
        fVar9 = SQRT((fVar8 - param_3[1]) * (fVar8 - param_3[1]) +
                     (fVar7 - *param_3) * (fVar7 - *param_3) +
                     (local_68 - param_3[2]) * (local_68 - param_3[2])) / fVar9;
        local_70 = (float)plVar3[0x4f];
        fStack_6c = (float)((ulong)plVar3[0x4f] >> 0x20);
        fVar10 = fVar8 - fStack_6c;
        fVar11 = fVar7 - local_70;
        fVar12 = local_68 - *(float *)(plVar3 + 0x50);
        fVar13 = SQRT(fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12);
        if (fVar9 <= fVar13) {
          fVar7 = 1.0 / fVar13;
          if (0.0 < fVar13) {
            fVar12 = fVar12 * fVar7;
            fVar10 = fVar10 * fVar7;
            fVar11 = fVar11 * fVar7;
          }
          fVar7 = local_70 + fVar9 * fVar11;
          fVar8 = fStack_6c + fVar9 * fVar10;
          local_68 = *(float *)(plVar3 + 0x50) + fVar9 * fVar12;
        }
        _local_70 = CONCAT44(fVar8,fVar7);
        (**(code **)(*plVar3 + 0x100))(plVar3,&local_70);
      }
    }
    plVar3 = *(long **)(param_1 + 0x60);
    if (plVar3 == (long *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_052461c0);
        plVar3 = &DAT_05240280;
        if (iVar1 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        plVar3 = &DAT_05240280;
      }
    }
    (**(code **)(*plVar3 + 0x4a8))(plVar3);
  }
  return;
}

