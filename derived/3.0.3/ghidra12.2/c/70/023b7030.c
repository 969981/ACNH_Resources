
float FUN_023b7030(long param_1,float *param_2,undefined1 *param_3,long param_4)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  long *local_90;
  char local_88;
  char local_86;
  float local_80;
  float fStack_7c;
  float local_78;
  undefined4 local_28;
  int local_24;
  
  if (param_2 != (float *)0x0) {
    lVar6 = *(long *)(param_1 + 0x68);
    *param_2 = *(float *)(lVar6 + 0x278);
    param_2[1] = *(float *)(lVar6 + 0x27c);
    param_2[2] = *(float *)(lVar6 + 0x280);
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  lVar6 = FUN_00a77090(param_1 + 0x1ee8);
  if ((lVar6 != 0) && (-1 < (int)*(uint *)PTR_DAT_04bb6260)) {
    uVar7 = 0;
    piVar8 = (int *)PTR_DAT_04bb6258;
    do {
      piVar1 = piVar8;
      if (999 < uVar7) {
        piVar1 = (int *)PTR_DAT_04bb6258;
      }
      if ((*piVar1 != 0) && (*(long *)(piVar1 + 2) == *(long *)(lVar6 + 0x10))) {
        if ((uint)uVar7 != 0xffffffff) {
          if (999 < (uint)uVar7) {
            piVar8 = (int *)PTR_DAT_04bb6258;
          }
          local_24 = *piVar8;
          goto LAB_023b7118;
        }
        break;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while ((ulong)*(uint *)PTR_DAT_04bb6260 + 1 != uVar7);
  }
  local_24 = 0;
LAB_023b7118:
  local_28 = *(undefined4 *)(param_1 + 0x230);
  FUN_0071cb58(&local_90,&local_24,&local_28,0);
  plVar2 = local_90;
  if (local_90 != (long *)0x0) {
    if (((*PTR_DAT_04bb32a0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb32a0), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb3298 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb32a0);
    }
    uVar7 = (**(code **)(*plVar2 + 0x20))(plVar2,PTR_DAT_04bb3298);
    if ((uVar7 & 1) == 0) {
      local_86 = '\0';
    }
  }
  if ((((local_90 == (long *)0x0) || (local_88 == '\0')) || (local_86 == '\0')) ||
     (pfVar4 = (float *)(**(code **)(*local_90 + 0x108))(), pfVar4 == (float *)0x0)) {
    local_80 = (float)*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x278);
  }
  else {
    if (param_2 != (float *)0x0) {
      *param_2 = *pfVar4;
      param_2[1] = pfVar4[1];
      param_2[2] = pfVar4[2];
    }
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 1;
    }
    fVar12 = 0.0;
    fVar10 = *(float *)(*(long *)(param_1 + 0x68) + 0x278) - *pfVar4;
    fVar11 = *(float *)(*(long *)(param_1 + 0x68) + 0x280) - pfVar4[2];
    fVar9 = SQRT(fVar10 * fVar10 + 0.0 + fVar11 * fVar11);
    fVar13 = fVar10;
    fVar14 = fVar11;
    if (0.0 < fVar9) {
      fVar9 = 1.0 / fVar9;
      fVar13 = fVar10 * fVar9;
      fVar12 = fVar9 * 0.0;
      fVar14 = fVar11 * fVar9;
    }
    lVar6 = FUN_0251e98c(1);
    pfVar5 = (float *)(**(code **)(*(long *)(lVar6 + 0x3f0) + 0xf0))(lVar6 + 0x3f0);
    fVar9 = *pfVar5;
    _local_80 = CONCAT44(fVar12 * fVar9 + pfVar4[1],*pfVar4 + fVar13 * fVar9);
    local_78 = fVar14 * fVar9 + pfVar4[2];
    FUN_0231eef4(param_1,&local_80,0);
    if (param_4 != 0) {
      *(bool *)param_4 = 0.25 < fVar9 - SQRT(fVar11 * fVar11 + fVar10 * fVar10);
    }
  }
  return local_80;
}

