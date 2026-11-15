
void FUN_02239250(undefined4 param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  void *__dest;
  uint uVar9;
  void *__src;
  
  puVar3 = PTR_DAT_04bb27c0;
  if (DAT_05463308 == 0) {
    return;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return;
  }
  plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                     ((ulong)(DAT_05463308 >> 0x11) & 0x7ff8));
  if (((plVar8 == (long *)0x0) || ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar8 + 0x46) != DAT_05463308)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar9 = 1;
      goto joined_r0x0223931c;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0223931c;
    }
  }
  uVar9 = 0;
joined_r0x0223931c:
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0x2a];
    if (((DAT_05463408 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_05463408), iVar4 != 0)) {
      DAT_05463400 = PTR_DAT_04bb3b50 + 0x10;
      __cxa_guard_release(&DAT_05463408);
    }
    uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,&DAT_05463400);
    uVar2 = 0;
    if ((int)lVar7 == 1) {
      uVar2 = uVar9;
    }
    if (((uVar6 & 1) != 0) && (uVar2 != 0)) {
      *(undefined4 *)(plVar8 + 0x84) = param_1;
      __dest = (void *)plVar8[0x86];
      *(uint *)(plVar8 + 0x83) = *(uint *)(plVar8 + 0x83) | 2;
      (**(code **)(*param_2 + 0x18))(param_2);
      __src = (void *)param_2[1];
      if (__dest != __src) {
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar7 = 0;
        do {
          if (*(char *)(param_2[1] + lVar7) == '\0') goto LAB_022393fc;
          lVar1 = param_2[1] + lVar7;
          if (*(char *)(lVar1 + 1) == '\0') {
            lVar7 = lVar7 + 1;
            goto LAB_022393fc;
          }
          if (*(char *)(lVar1 + 2) == '\0') {
            lVar7 = lVar7 + 2;
            goto LAB_022393fc;
          }
          lVar7 = lVar7 + 3;
        } while (lVar7 != 0x80001);
        lVar7 = 0;
LAB_022393fc:
        iVar4 = (int)lVar7;
        if ((int)plVar8[0x87] <= (int)lVar7) {
          iVar4 = (int)plVar8[0x87] + -1;
        }
        memcpy(__dest,__src,(long)iVar4);
        *(undefined1 *)((long)__dest + (long)iVar4) = 0;
      }
      *(undefined4 *)(plVar8 + 0x8d) = param_3;
      plVar8[0x8c] = (long)plVar8 + 0x4bc;
    }
  }
  return;
}

