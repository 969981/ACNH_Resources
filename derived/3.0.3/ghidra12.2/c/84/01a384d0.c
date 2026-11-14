
void FUN_01a384d0(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  undefined *local_68;
  char *pcStack_60;
  undefined4 local_54;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar8 = param_1 + 0x36c + ((ulong)*(uint *)(param_1 + 0x368) & 1) * 0x20;
  if ((*(char *)(lVar8 + 0x1d) != '\0') && (*(char *)(lVar8 + 0x1c) == '\0')) {
    return;
  }
  uVar10 = *(uint *)(lVar8 + 0x14);
  if (uVar10 == *(uint *)PTR_DAT_04bb3238) {
    return;
  }
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return;
  }
  if ((((uVar10 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
      ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar10)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar2;
    iVar5 = (**(code **)(*plVar6 + 0x60))();
    if (iVar5 < 0x11) {
      uVar10 = 1;
      goto joined_r0x01a385cc;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x01a385cc;
    }
  }
  uVar10 = 0;
joined_r0x01a385cc:
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0x2a];
    if (((*PTR_DAT_04bbfcb0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbfcb0), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bbfca8 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbfcb0);
    }
    uVar7 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bbfca8);
    puVar4 = PTR_DAT_04bb3e78;
    puVar2 = PTR_DAT_04bb3e70;
    uVar3 = 0;
    if ((int)lVar8 == 1) {
      uVar3 = uVar10;
    }
    if (((uVar7 & 1) != 0) && (uVar3 != 0)) {
      if ((long *)plVar9[0x16] != plVar9 + 0x15) {
        lVar8 = (long)*(int *)((long)plVar9 + 0xbc);
        plVar6 = (long *)(plVar9[0x16] - lVar8);
        puVar1 = PTR_DAT_04bb3e80 + 0x10;
        do {
          if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
            *(undefined **)puVar2 = puVar1;
            __cxa_guard_release(puVar4);
          }
          if ((plVar6 != (long *)0x0) &&
             (uVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,puVar2), (uVar7 & 1) != 0)) {
            puVar2 = PTR_DAT_04bb2020 + 0x10;
            pcStack_60 = "MigoroType";
            local_54 = param_2;
            if ((plVar6[0x227] != 0) &&
               ((lVar8 = *(long *)(plVar6[0x227] + 0x78), lVar8 != 0 &&
                (plVar9 = *(long **)(lVar8 + 0x48), plVar9 != (long *)0x0)))) {
              local_68 = puVar2;
              (**(code **)(*plVar9 + 0x28))(plVar9,&local_68,param_2);
            }
            pcStack_60 = PTR_DAT_04bbcb98 + 0xbd;
            local_68 = puVar2;
            FUN_0073d870(plVar6,&local_68,0,2,0);
            return;
          }
          plVar6 = (long *)(*(long *)((long)plVar6 + lVar8 + 8) - lVar8);
        } while (plVar6 != (long *)((long)(plVar9 + 0x15) - lVar8));
      }
    }
  }
  return;
}

