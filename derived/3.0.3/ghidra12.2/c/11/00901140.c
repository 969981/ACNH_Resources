
uint FUN_00901140(long param_1,byte *param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  byte local_24 [4];
  
  puVar1 = PTR_DAT_04bb27c0;
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
LAB_009012a4:
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x274);
    if ((((uVar3 == 0) ||
         (lVar7 = *(long *)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar3 >> 0x11) & 0x7ff8)), lVar7 == 0)) ||
        ((*(uint *)(lVar7 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar7 + 0x230) != uVar3)) {
      lVar7 = 0;
    }
    if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
      plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar6 = *(long *)puVar1;
      iVar2 = (**(code **)(*plVar4 + 0x60))();
      if ((iVar2 < 0x11) ||
         (uVar3 = *(uint *)(lVar6 + 0x5e8), uVar3 < 5 && (1 << (ulong)(uVar3 & 0x1f) & 0x1aU) != 0))
      {
        if (((lVar7 != 0) && (*(int *)(lVar7 + 0x15c) == 0x9a)) &&
           ((lVar6 = *(long *)puVar1, lVar6 != 0 &&
            ((((uVar3 = *(uint *)(param_1 + 0x274), uVar3 != 0 &&
               (plVar4 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                                   ((ulong)(uVar3 >> 0x11) & 0x7ff8)), plVar4 != (long *)0x0)) &&
              ((*(uint *)(plVar4 + 0x49) >> 1 & 1) == 0)) && (*(uint *)(plVar4 + 0x46) == uVar3)))))
           ) {
          if (((*PTR_DAT_04bb32c0 & 1) == 0) &&
             (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb32c0), iVar2 != 0)) {
            *(undefined **)PTR_DAT_04bb32b8 = PTR_DAT_04bb32c8 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb32c0);
          }
          uVar5 = (**(code **)(*plVar4 + 0x20))(plVar4,PTR_DAT_04bb32b8);
          if ((uVar5 & 1) != 0) {
            local_24[0] = *param_2;
            if (7 < local_24[0]) {
              local_24[0] = 0xff;
            }
            uVar3 = FUN_008c85f8(plVar4,local_24);
            goto LAB_009012a8;
          }
        }
        goto LAB_009012a4;
      }
    }
    uVar3 = 0;
  }
LAB_009012a8:
  return uVar3 & 1;
}

