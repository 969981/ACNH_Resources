
void FUN_01490890(uint param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return;
  }
  uVar10 = *(uint *)(*(long *)PTR_DAT_04bb4c80 + 0x10);
  if ((((uVar10 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
      ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar10)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar10 = 1;
      goto joined_r0x01490970;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x01490970;
    }
  }
  uVar10 = 0;
joined_r0x01490970:
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0x2a];
    uVar1 = *(uint *)(plVar9 + 0x49);
    if (((*PTR_DAT_04bb7d58 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb7d58), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb7d50 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb7d58);
    }
    uVar5 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb7d50);
    puVar3 = PTR_DAT_04bbce88;
    puVar2 = PTR_DAT_04bbce80;
    if ((((int)lVar8 == 1) && ((uVar5 & uVar10) != 0)) && ((uVar1 >> 4 & 1) != 0)) {
      if ((long *)plVar9[0x16] != plVar9 + 0x15) {
        lVar8 = (long)*(int *)((long)plVar9 + 0xbc);
        plVar6 = (long *)(plVar9[0x16] - lVar8);
        do {
          if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar3), iVar4 != 0)) {
            *(undefined ***)puVar2 = &PTR_LAB_049a5a90;
            __cxa_guard_release(puVar3);
          }
          if ((plVar6 != (long *)0x0) &&
             (uVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,puVar2), (uVar7 & 1) != 0)) {
            uVar10 = *param_4;
            if (uVar10 - 2 < 4) {
              FUN_014a0a00(plVar6,param_1 & 1,param_2,param_3,param_4);
              return;
            }
            if (uVar10 < 2) {
              FUN_0149fda0(plVar6,param_1 & 1,param_2,param_3,param_4);
              return;
            }
            if (uVar10 == 7) {
              FUN_014a0f60(plVar6,param_1 & 1,param_2,param_3,param_4);
              return;
            }
            return;
          }
          plVar6 = (long *)(*(long *)((long)plVar6 + lVar8 + 8) - lVar8);
        } while (plVar6 != (long *)((long)(plVar9 + 0x15) - lVar8));
      }
    }
  }
  return;
}

