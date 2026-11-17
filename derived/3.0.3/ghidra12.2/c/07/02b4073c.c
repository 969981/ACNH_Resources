
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b4073c(uint *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_04bb27c0;
  lVar5 = *(long *)PTR_DAT_04bb27c0;
  if (lVar5 == 0) goto LAB_02b40828;
  uVar4 = *param_1;
  if ((((uVar4 == 0) ||
       (lVar6 = *(long *)(*(long *)(*(long *)(lVar5 + 0x1c0) + 8) +
                         ((ulong)(uVar4 >> 0x11) & 0x7ff8)), lVar6 == 0)) ||
      ((*(uint *)(lVar6 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar6 + 0x230) != uVar4)) {
    lVar6 = 0;
  }
  if (*(int *)(lVar5 + 0x288) == 1 || *(int *)(lVar5 + 0x288) == -1) {
    plVar3 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    lVar5 = *(long *)puVar1;
    iVar2 = (**(code **)(*plVar3 + 0x60))();
    if (iVar2 < 0x11) {
      uVar4 = 1;
    }
    else {
      if (4 < *(uint *)(lVar5 + 0x5e8)) goto LAB_02b407f4;
      uVar4 = 0x1aU >> (ulong)(*(uint *)(lVar5 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_02b407f4:
    uVar4 = 0;
  }
  if (lVar6 != 0) {
    uVar4 = uVar4 ^ 1;
    if (*(int *)(lVar6 + 0x150) != 1) {
      uVar4 = 1;
    }
    if (uVar4 == 0) {
      FUN_006fb3d0(lVar6);
    }
  }
LAB_02b40828:
  *param_1 = DAT_04c9a0c8;
  param_1[0x14] = 0xffffffff;
  *(undefined2 *)(param_1 + 0x15) = 0xffff;
  uVar4 = DAT_0558600c;
  param_1[0x16] = _DAT_05586008;
  param_1[0x17] = uVar4;
  return;
}

