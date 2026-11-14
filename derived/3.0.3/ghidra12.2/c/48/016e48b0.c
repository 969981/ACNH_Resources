
void FUN_016e48b0(undefined4 *param_1,long param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  uVar2 = 0;
  if (param_2 == 0) goto LAB_016e49d0;
  if (DAT_04c93e08 != 0) {
    uVar4 = *param_3;
    if ((((uVar4 == 0) ||
         (lVar6 = *(long *)(*(long *)(*(long *)(DAT_04c93e08 + 0x1c0) + 8) +
                           ((ulong)(uVar4 >> 0x11) & 0x7ff8)), lVar6 == 0)) ||
        ((*(uint *)(lVar6 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar6 + 0x230) != uVar4)) {
      lVar6 = 0;
    }
    if (*(int *)(DAT_04c93e08 + 0x288) == 1 || *(int *)(DAT_04c93e08 + 0x288) == -1) {
      plVar3 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      lVar5 = DAT_04c93e08;
      iVar1 = (**(code **)(*plVar3 + 0x60))();
      if (iVar1 < 0x11) {
        uVar4 = 1;
      }
      else {
        if (4 < *(uint *)(lVar5 + 0x5e8)) goto LAB_016e4970;
        uVar4 = 0x1aU >> (ulong)(*(uint *)(lVar5 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_016e4970:
      uVar4 = 0;
    }
    if (lVar6 != 0) {
      uVar4 = uVar4 ^ 1;
      uVar2 = 0;
      if (*(int *)(lVar6 + 0x150) != 1) {
        uVar4 = 1;
      }
      if (((uVar4 == 0) && (lVar5 = *(long *)(param_2 + 0x68), lVar5 != 0)) &&
         (lVar6 = *(long *)(lVar6 + 0x68), lVar6 != 0)) {
        uVar2 = FUN_006f0400(*(float *)(lVar6 + 0x278) - *(float *)(lVar5 + 0x278),
                             *(float *)(lVar6 + 0x280) - *(float *)(lVar5 + 0x280));
      }
      goto LAB_016e49d0;
    }
  }
  uVar2 = 0;
LAB_016e49d0:
  *param_1 = uVar2;
  return;
}

