
void FUN_014cdd94(void)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return;
  }
  uVar8 = *(uint *)PTR_DAT_04bb32f8;
  if ((((uVar8 == 0) ||
       (plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0)) ||
      ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != uVar8)) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar8 = 1;
      goto joined_r0x014cde54;
    }
    uVar8 = *(uint *)(lVar6 + 0x5e8);
    if (uVar8 < 5) {
      uVar8 = 0x1aU >> (ulong)(uVar8 & 0x1f) & 1;
      goto joined_r0x014cde54;
    }
  }
  uVar8 = 0;
joined_r0x014cde54:
  if (plVar7 != (long *)0x0) {
    lVar6 = plVar7[0x2a];
    if (((*PTR_DAT_04bb3280 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3280);
    }
    uVar5 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb3278);
    uVar1 = 0;
    if ((int)lVar6 == 1) {
      uVar1 = uVar8;
    }
    if ((((uVar5 & 1) != 0) && (uVar1 != 0)) &&
       (((char)plVar7[0x86] == '\0' &&
        ((((lVar6 = *(long *)puVar2, lVar6 != 0 &&
           (uVar8 = *(uint *)((long)plVar7 + 0x274), uVar8 != 0)) &&
          (plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                              ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar7 != (long *)0x0)) &&
         (((*(uint *)(plVar7 + 0x49) >> 1 & 1) == 0 && (*(uint *)(plVar7 + 0x46) == uVar8)))))))) {
      if (((*PTR_DAT_04bb32c0 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb32c0), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb32b8 = PTR_DAT_04bb32c8 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb32c0);
      }
      uVar5 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb32b8);
      if ((uVar5 & 1) != 0) {
        *(undefined1 *)(plVar7 + 0x610a) = 0;
      }
    }
  }
  return;
}

