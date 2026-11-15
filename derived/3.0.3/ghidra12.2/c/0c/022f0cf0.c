
uint FUN_022f0cf0(long param_1,long param_2)

{
  uint *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  uint *puVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float local_3c [2];
  float local_34;
  
  fVar10 = (float)((*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x10)) + 1) * 5.0;
  fVar11 = (float)((*(int *)(param_2 + 0x24) - *(int *)(param_2 + 0x14)) + 1) * 5.0;
  if (fVar10 <= fVar11) {
    fVar10 = fVar11;
  }
  local_3c[0] = ((float)*(int *)(param_2 + 0x10) * 5.0 + (float)*(int *)(param_2 + 0x20) * 5.0 + 5.0
                ) * 0.5;
  local_34 = ((float)*(int *)(param_2 + 0x14) * 5.0 + (float)*(int *)(param_2 + 0x24) * 5.0 + 5.0) *
             0.5;
  uVar5 = FUN_0252b6b0(fVar10 * 0.5,local_3c,PTR_DAT_04bb32e0,1,1,0,1);
  uVar4 = 0;
  if ((uVar5 & 1) != 0) goto LAB_022f0f34;
  if (-1 < (int)DAT_04c47dc0) {
    uVar5 = 0;
    puVar8 = &DAT_04d9fe90;
    do {
      puVar1 = puVar8;
      if (999 < uVar5) {
        puVar1 = &DAT_04d9fe90;
      }
      if ((*puVar1 != 0) && (*(long *)(puVar1 + 2) == param_1)) {
        if ((uint)uVar5 != 0xffffffff) {
          if (999 < (uint)uVar5) {
            puVar8 = &DAT_04d9fe90;
          }
          uVar7 = *puVar8;
          goto LAB_022f0e28;
        }
        break;
      }
      uVar5 = uVar5 + 1;
      puVar8 = puVar8 + 4;
    } while ((ulong)DAT_04c47dc0 + 1 != uVar5);
  }
  uVar7 = 0;
LAB_022f0e28:
  uVar4 = 0;
  if (DAT_04c93e08 == 0) goto LAB_022f0f34;
  if ((((uVar7 == 0) ||
       (lVar9 = *(long *)(*(long *)(*(long *)(DAT_04c93e08 + 0x1c0) + 8) +
                         (ulong)(uVar7 >> 0x14) * 8), lVar9 == 0)) ||
      ((*(uint *)(lVar9 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar9 + 0x230) != uVar7)) {
    lVar9 = 0;
  }
  if (*(int *)(DAT_04c93e08 + 0x288) == 1 || *(int *)(DAT_04c93e08 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    lVar2 = DAT_04c93e08;
    iVar3 = (**(code **)(*plVar6 + 0x60))();
    if (iVar3 < 0x11) {
      uVar4 = 1;
    }
    else {
      if (4 < *(uint *)(lVar2 + 0x5e8)) goto LAB_022f0ec4;
      uVar4 = 0x1aU >> (ulong)(*(uint *)(lVar2 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_022f0ec4:
    uVar4 = 0;
  }
  if (lVar9 != 0) {
    uVar4 = uVar4 ^ 1;
    if (*(int *)(lVar9 + 0x150) != 1) {
      uVar4 = 1;
    }
    if (uVar4 == 0) {
      uVar4 = FUN_01735670(fVar10 * 0.5,0xbf800000,local_3c,*(undefined4 *)(lVar9 + 0x230),
                           *(undefined4 *)(lVar9 + 0x230),1,1,0,1,0,0,1);
      uVar4 = uVar4 ^ 1;
      goto LAB_022f0f34;
    }
  }
  uVar4 = 0;
LAB_022f0f34:
  return uVar4 & 1;
}

