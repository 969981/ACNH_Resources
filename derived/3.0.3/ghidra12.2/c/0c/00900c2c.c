
bool FUN_00900c2c(long param_1)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return false;
  }
  uVar1 = *(uint *)(param_1 + 0x274);
  if ((((uVar1 == 0) ||
       (lVar8 = *(long *)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                         ((ulong)(uVar1 >> 0x11) & 0x7ff8)), lVar8 == 0)) ||
      ((*(uint *)(lVar8 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar8 + 0x230) != uVar1)) {
    lVar8 = 0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if ((iVar4 < 0x11) ||
       (uVar1 = *(uint *)(lVar7 + 0x5e8), uVar1 < 5 && (1 << (ulong)(uVar1 & 0x1f) & 0x1aU) != 0)) {
      if (((lVar8 != 0) &&
          ((*(int *)(lVar8 + 0x15c) == 0x9a && (lVar7 = *(long *)puVar3, lVar7 != 0)))) &&
         ((uVar1 = *(uint *)(param_1 + 0x274), uVar1 != 0 &&
          (((plVar5 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                                ((ulong)(uVar1 >> 0x11) & 0x7ff8)), plVar5 != (long *)0x0 &&
            ((*(uint *)(plVar5 + 0x49) >> 1 & 1) == 0)) && (*(uint *)(plVar5 + 0x46) == uVar1))))))
      {
        if (((*PTR_DAT_04bb32c0 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb32c0), iVar4 != 0)) {
          *(undefined **)PTR_DAT_04bb32b8 = PTR_DAT_04bb32c8 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb32c0);
        }
        uVar6 = (**(code **)(*plVar5 + 0x20))(plVar5,PTR_DAT_04bb32b8);
        if ((uVar6 & 1) != 0) {
          if ((*(uint *)(plVar5 + 0x82) & 0xfffffffe) == 0x1a) {
            cVar2 = *(char *)((long)plVar5 + 0x31765);
          }
          else {
            if (*(uint *)(plVar5 + 0x82) != 0x1d) {
              return false;
            }
            cVar2 = *(char *)((long)plVar5 + 0x317ed);
          }
          return cVar2 != '\0';
        }
      }
      return false;
    }
  }
  return false;
}

