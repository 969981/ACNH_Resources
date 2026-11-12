
bool FUN_00900df8(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 != 0) {
    uVar1 = *(uint *)(param_1 + 0x274);
    if ((((uVar1 == 0) ||
         (lVar7 = *(long *)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar1 >> 0x11) & 0x7ff8)), lVar7 == 0)) ||
        ((*(uint *)(lVar7 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar7 + 0x230) != uVar1)) {
      lVar7 = 0;
    }
    if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
      plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar6 = *(long *)puVar2;
      iVar3 = (**(code **)(*plVar4 + 0x60))();
      if ((((iVar3 < 0x11) ||
           (uVar1 = *(uint *)(lVar6 + 0x5e8), uVar1 < 5 && (1 << (ulong)(uVar1 & 0x1f) & 0x1aU) != 0
           )) && ((lVar7 != 0 &&
                  ((*(int *)(lVar7 + 0x15c) == 0x9a && (lVar6 = *(long *)puVar2, lVar6 != 0)))))) &&
         ((uVar1 = *(uint *)(param_1 + 0x274), uVar1 != 0 &&
          (((plVar4 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                                ((ulong)(uVar1 >> 0x11) & 0x7ff8)), plVar4 != (long *)0x0 &&
            ((*(uint *)(plVar4 + 0x49) >> 1 & 1) == 0)) && (*(uint *)(plVar4 + 0x46) == uVar1))))))
      {
        if (((*PTR_DAT_04bb32c0 & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb32c0), iVar3 != 0)) {
          *(undefined **)PTR_DAT_04bb32b8 = PTR_DAT_04bb32c8 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb32c0);
        }
        uVar5 = (**(code **)(*plVar4 + 0x20))(plVar4,PTR_DAT_04bb32b8);
        if ((uVar5 & 1) != 0) {
          return (int)plVar4[0x82] == 0;
        }
      }
    }
  }
  return false;
}

