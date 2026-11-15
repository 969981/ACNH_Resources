
void FUN_02239480(undefined4 param_1)

{
  uint uVar1;
  undefined *puVar2;
  void *__src;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  void *__dest;
  
  puVar2 = PTR_DAT_04bb27c0;
  if (DAT_05463308 == 0) {
    return;
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return;
  }
  plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                     ((ulong)(DAT_05463308 >> 0x11) & 0x7ff8));
  if (((plVar7 == (long *)0x0) || ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar7 + 0x46) != DAT_05463308)) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar8 = 1;
      goto joined_r0x02239544;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02239544;
    }
  }
  uVar8 = 0;
joined_r0x02239544:
  if (plVar7 != (long *)0x0) {
    lVar6 = plVar7[0x2a];
    if (((DAT_05463408 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05463408), iVar3 != 0)) {
      DAT_05463400 = PTR_DAT_04bb3b50 + 0x10;
      __cxa_guard_release(&DAT_05463408);
    }
    uVar5 = (**(code **)(*plVar7 + 0x20))(plVar7,&DAT_05463400);
    uVar1 = 0;
    if ((int)lVar6 == 1) {
      uVar1 = uVar8;
    }
    if (((uVar5 & 1) != 0) && (uVar1 != 0)) {
      __dest = (void *)plVar7[0x86];
      *(uint *)(plVar7 + 0x83) = *(uint *)(plVar7 + 0x83) | 1;
      *(undefined4 *)(plVar7 + 0x84) = *(undefined4 *)((long)plVar7 + 0x234);
      (**(code **)(DAT_054632d8 + 0x18))(&DAT_054632d8);
      __src = DAT_054632e0;
      if (__dest != DAT_054632e0) {
        (**(code **)(DAT_054632d8 + 0x18))(&DAT_054632d8);
        lVar6 = 0;
        do {
          if (*(char *)((long)DAT_054632e0 + lVar6) == '\0') goto LAB_0223962c;
          if (*(char *)((long)DAT_054632e0 + lVar6 + 1) == '\0') {
            lVar6 = lVar6 + 1;
            goto LAB_0223962c;
          }
          if (*(char *)((long)DAT_054632e0 + lVar6 + 2) == '\0') {
            lVar6 = lVar6 + 2;
            goto LAB_0223962c;
          }
          lVar6 = lVar6 + 3;
        } while (lVar6 != 0x80001);
        lVar6 = 0;
LAB_0223962c:
        iVar3 = (int)lVar6;
        if ((int)plVar7[0x87] <= (int)lVar6) {
          iVar3 = (int)plVar7[0x87] + -1;
        }
        memcpy(__dest,__src,(long)iVar3);
        *(undefined1 *)((long)__dest + (long)iVar3) = 0;
      }
      *(undefined4 *)(plVar7 + 0x8d) = param_1;
      plVar7[0x8c] = (long)(plVar7 + 0x97);
    }
  }
  return;
}

