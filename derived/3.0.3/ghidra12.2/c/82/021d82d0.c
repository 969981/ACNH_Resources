
undefined8 FUN_021d82d0(uint *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  
  if (DAT_04c93e08 == 0) {
    return 0;
  }
  uVar5 = *param_1;
  if ((((uVar5 == 0) ||
       (lVar6 = *(long *)(*(long *)(*(long *)(DAT_04c93e08 + 0x1c0) + 8) +
                         ((ulong)(uVar5 >> 0x11) & 0x7ff8)), lVar6 == 0)) ||
      ((*(uint *)(lVar6 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar6 + 0x230) != uVar5)) {
    lVar6 = 0;
  }
  if (*(int *)(DAT_04c93e08 + 0x288) == 1 || *(int *)(DAT_04c93e08 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    lVar2 = DAT_04c93e08;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar5 = 1;
      goto joined_r0x021d838c;
    }
    if (*(uint *)(lVar2 + 0x5e8) < 5) {
      uVar5 = 0x1aU >> (ulong)(*(uint *)(lVar2 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x021d838c;
    }
  }
  uVar5 = 0;
joined_r0x021d838c:
  if (lVar6 != 0) {
    uVar1 = 0;
    if (*(int *)(lVar6 + 0x150) == 1) {
      uVar1 = uVar5;
    }
    if ((((param_2 & 1) == 0) || (uVar1 != 0)) && (*(int *)(lVar6 + 0x15c) == 10)) {
      return 1;
    }
  }
  return 0;
}

