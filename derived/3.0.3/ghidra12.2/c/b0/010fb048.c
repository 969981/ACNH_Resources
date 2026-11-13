
undefined8 FUN_010fb048(long *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  if (*param_1 == 0) {
    return 0;
  }
  if (DAT_04c93e08 == 0) {
    return 0;
  }
  lVar6 = param_1[1];
  uVar5 = *(uint *)(*param_1 + 8);
  if ((((uVar5 == 0) ||
       (lVar7 = *(long *)(*(long *)(*(long *)(DAT_04c93e08 + 0x1c0) + 8) +
                         ((ulong)(uVar5 >> 0x11) & 0x7ff8)), lVar7 == 0)) ||
      ((*(uint *)(lVar7 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar7 + 0x230) != uVar5)) {
    lVar7 = 0;
  }
  if (*(int *)(DAT_04c93e08 + 0x288) == 1 || *(int *)(DAT_04c93e08 + 0x288) == -1) {
    plVar3 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    lVar1 = DAT_04c93e08;
    iVar2 = (**(code **)(*plVar3 + 0x60))();
    if (iVar2 < 0x11) {
      uVar5 = 1;
      goto joined_r0x010fb110;
    }
    if (*(uint *)(lVar1 + 0x5e8) < 5) {
      uVar5 = 0x1aU >> (ulong)(*(uint *)(lVar1 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x010fb110;
    }
  }
  uVar5 = 0;
joined_r0x010fb110:
  if (lVar7 != 0) {
    uVar5 = uVar5 ^ 1;
    if (*(int *)(lVar7 + 0x150) != 1) {
      uVar5 = 1;
    }
    if (uVar5 == 0) {
      uVar4 = FUN_01184700(lVar6,param_1);
      return uVar4;
    }
  }
  return 0;
}

