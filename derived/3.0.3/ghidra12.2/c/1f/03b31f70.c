
void FUN_03b31f70(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  puVar4 = PTR_DAT_04bd1bc0;
  puVar3 = PTR_DAT_04bd1bb8;
  puVar2 = PTR_DAT_04bc8f38;
  puVar1 = PTR_DAT_04bc8f30;
  lVar7 = *(long *)(param_1 + 0x18);
  lVar8 = lVar7 + 0x20;
  lVar9 = *(long *)(lVar7 + 0x28);
  if (lVar9 == lVar8) {
    fVar12 = 0.0;
    fVar11 = 0.0;
  }
  else {
    fVar11 = 0.0;
    fVar12 = 0.0;
    do {
      if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
        if (((*puVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar2), iVar5 != 0)) {
          *(undefined8 *)puVar1 = 0;
          __cxa_guard_release(puVar2);
        }
        *(undefined **)puVar3 = puVar1;
        __cxa_guard_release(puVar4);
      }
      puVar6 = (undefined8 *)(**(code **)(*(long *)(lVar9 + -8) + 0x10))();
      if (puVar6 == (undefined8 *)puVar3) {
LAB_03b32028:
        if ((*(byte *)(lVar9 + 0x50) >> 2 & 1) != 0) {
          if ((*(byte *)(lVar9 + 0xd7) & 1) == 0) {
            if (fVar11 <= *(float *)(lVar9 + 0xdc)) {
              fVar11 = *(float *)(lVar9 + 0xdc);
            }
            fVar10 = *(float *)(lVar9 + 0x4c);
          }
          else {
            if (fVar11 <= *(float *)(lVar9 + 0x48)) {
              fVar11 = *(float *)(lVar9 + 0x48);
            }
            fVar10 = *(float *)(lVar9 + 0xdc);
          }
          if (fVar12 <= fVar10) {
            fVar12 = fVar10;
          }
        }
      }
      else {
        do {
          puVar6 = (undefined8 *)*puVar6;
        } while (puVar6 != (undefined8 *)puVar3 && puVar6 != (undefined8 *)0x0);
        if (puVar6 != (undefined8 *)0x0) goto LAB_03b32028;
      }
      lVar9 = *(long *)(lVar9 + 8);
    } while (lVar9 != lVar8);
    lVar7 = *(long *)(param_1 + 0x18);
    lVar8 = *(long *)(lVar7 + 0x28);
  }
  for (; lVar8 != lVar7 + 0x20; lVar8 = *(long *)(lVar8 + 8)) {
    lVar9 = FUN_0037e610(lVar8 + -8,"AdjustToTextOn");
    if (lVar9 != 0) {
      FUN_03b13e00(fVar11,fVar12,lVar8 + -8);
    }
  }
  return;
}

