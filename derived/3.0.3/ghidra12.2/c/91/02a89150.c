
undefined8 FUN_02a89150(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  if (*(char *)(param_2 + 4) == '\0') {
    return 0;
  }
  if (*param_1 == DAT_04c9a0c8) {
    if (DAT_04c93e08 != 0) {
      if ((((DAT_04c9a0c8 == 0) ||
           (lVar6 = *(long *)(*(long *)(*(long *)(DAT_04c93e08 + 0x1c0) + 8) +
                             ((ulong)(DAT_04c9a0c8 >> 0x11) & 0x7ff8)), lVar6 == 0)) ||
          ((*(uint *)(lVar6 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar6 + 0x230) != DAT_04c9a0c8))
      {
        lVar6 = 0;
      }
      if (*(int *)(DAT_04c93e08 + 0x288) == 1 || *(int *)(DAT_04c93e08 + 0x288) == -1) {
        plVar3 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        (**(code **)(*plVar3 + 0x60))();
      }
      if (lVar6 != 0) goto LAB_02a8920c;
      if (*(char *)(param_2 + 4) == '\0') {
        param_2[2] = 0;
        param_2[3] = 0;
        *param_2 = 0x100000007;
        param_2[1] = 0;
        if (((DAT_04ca5e30 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04ca5e30), iVar2 != 0)) {
          FUN_007a9614(&DAT_04ca5e20);
          __cxa_guard_release(&DAT_04ca5e30);
        }
        if (0 < (int)DAT_04ca5e20) {
          uVar5 = 0;
          do {
            if (*(int *)(DAT_04ca5e28 + uVar5 * 4) == 0) goto LAB_02a89278;
            uVar5 = uVar5 + 1;
          } while (DAT_04ca5e20 != uVar5);
        }
        uVar5 = 0;
LAB_02a89278:
        *(int *)(param_2 + 3) = (int)uVar5;
        *(undefined4 *)((long)param_2 + 0x1c) = 0;
      }
    }
    uVar1 = FUN_02a8b5d0(param_2);
    *param_1 = uVar1;
    uVar4 = 1;
  }
  else {
LAB_02a8920c:
    uVar4 = 0;
  }
  return uVar4;
}

