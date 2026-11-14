
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01736b18(float param_1,float param_2,float *param_3,undefined8 param_4,uint *param_5)

{
  float *pfVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  
  uVar3 = DAT_05465dc0;
  if (DAT_05465dc0 == 0) {
    return 0;
  }
  if (DAT_04c93e08 == 0) {
    return 0;
  }
  lVar7 = *(long *)(*(long *)(*(long *)(DAT_04c93e08 + 0x1c0) + 8) +
                   ((ulong)(DAT_05465dc0 >> 0x11) & 0x7ff8));
  if (((lVar7 == 0) || ((*(uint *)(lVar7 + 0x248) >> 1 & 1) != 0)) ||
     (*(uint *)(lVar7 + 0x230) != DAT_05465dc0)) {
    lVar7 = 0;
  }
  if (*(int *)(DAT_04c93e08 + 0x288) == 1 || *(int *)(DAT_04c93e08 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    lVar2 = DAT_04c93e08;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar6 = 1;
      goto joined_r0x01736bf0;
    }
    if (*(uint *)(lVar2 + 0x5e8) < 5) {
      uVar6 = 0x1aU >> (ulong)(*(uint *)(lVar2 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x01736bf0;
    }
  }
  uVar6 = 0;
joined_r0x01736bf0:
  if (lVar7 != 0) {
    uVar6 = uVar6 ^ 1;
    if (*(int *)(lVar7 + 0x150) != 1) {
      uVar6 = 1;
    }
    if (uVar6 == 0) {
      pfVar1 = (float *)PTR_DAT_04bb2150;
      if (*(long *)(lVar7 + 0x68) != 0) {
        pfVar1 = (float *)(*(long *)(lVar7 + 0x68) + 0x278);
      }
      if (SQRT((param_3[2] - pfVar1[2]) * (param_3[2] - pfVar1[2]) +
               (*param_3 - *pfVar1) * (*param_3 - *pfVar1)) < param_1 + 4.75) {
        if (0.0 < param_2) {
          fVar8 = param_3[1] - pfVar1[1];
          fVar9 = -fVar8;
          if (0.0 <= fVar8) {
            fVar9 = fVar8;
          }
          if (param_2 <= fVar9) {
            return 0;
          }
        }
        if (param_5 != (uint *)0x0) {
          *param_5 = uVar3;
        }
        return 1;
      }
    }
  }
  return 0;
}

