
void FUN_03368bd0(undefined8 *param_1)

{
  long *plVar1;
  byte bVar2;
  uint *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if (param_1 != (undefined8 *)0x0) {
    if (((*PTR_DAT_04bc8fb8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc8fb8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bc8fb0 = PTR_DAT_04bc8fc0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc8fb8);
    }
    uVar5 = (**(code **)*param_1)(param_1,PTR_DAT_04bc8fb0);
    puVar3 = DAT_05734ea0;
    if ((uVar5 & 1) != 0) {
      lVar6 = param_1[0xd];
      fVar10 = *(float *)(lVar6 + 0x30);
      fVar9 = *(float *)(lVar6 + 0x34);
      if (*(long *)(lVar6 + 0x18) == 0) {
        fVar12 = 0.0;
        fVar11 = 0.0;
      }
      else {
        fVar11 = 0.0;
        fVar12 = 0.0;
        lVar7 = *(long *)(lVar6 + 0x18);
        do {
          bVar2 = *(byte *)(lVar6 + 0x5b) >> 6;
          if (bVar2 == 2) {
            fVar13 = *(float *)(lVar7 + 0x4c) * *(float *)(lVar7 + 0x54) * -0.5;
LAB_03368ca0:
            fVar9 = fVar9 + fVar13;
          }
          else if (bVar2 == 1) {
            fVar13 = *(float *)(lVar7 + 0x4c) * *(float *)(lVar7 + 0x54) * 0.5;
            goto LAB_03368ca0;
          }
          bVar2 = *(byte *)(lVar6 + 0x5b) >> 4 & 3;
          if (bVar2 == 1) {
            fVar13 = *(float *)(lVar7 + 0x48) * *(float *)(lVar7 + 0x50) * -0.5;
LAB_03368c44:
            fVar10 = fVar10 + fVar13;
          }
          else if (bVar2 == 2) {
            fVar13 = *(float *)(lVar7 + 0x48) * *(float *)(lVar7 + 0x50) * 0.5;
            goto LAB_03368c44;
          }
          fVar11 = fVar11 + fVar10;
          fVar12 = fVar12 + fVar9;
          plVar1 = (long *)(lVar7 + 0x18);
          fVar10 = *(float *)(lVar7 + 0x30);
          fVar9 = *(float *)(lVar7 + 0x34);
          lVar6 = lVar7;
          lVar7 = *plVar1;
        } while (*plVar1 != 0);
      }
      pfVar8 = (float *)(*(long *)(DAT_05734ea0 + 2) + (long)(int)(uint)(1 < *DAT_05734ea0) * 0xc);
      *pfVar8 = fVar11 + fVar10;
      pfVar8[1] = fVar12 + fVar9;
      *(undefined1 *)(*(long *)(puVar3 + 2) + (long)(int)(uint)(1 < *puVar3) * 0xc + 8) = 1;
    }
  }
  return;
}

