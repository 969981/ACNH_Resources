
/* WARNING: Type propagation algorithm not settling */

void FUN_0230af00(char *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 local_5c;
  undefined4 local_54;
  
  if (param_1[2] == '\0') {
    return;
  }
  if (*param_1 != '\0') {
    if (*(long *)PTR_DAT_04bb4718 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_054f0960);
        puVar11 = &DAT_054f0958;
        if (iVar4 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar11 = &DAT_054f0958;
      }
    }
    else {
      puVar11 = (undefined8 *)(*(long *)PTR_DAT_04bb4718 + 0x204);
      if ((ulong)(byte)param_1[1] < 8) {
        puVar11 = puVar11 + (byte)param_1[1];
      }
    }
    *(uint *)((long)puVar11 + 4) = *(uint *)((long)puVar11 + 4) | 0x800000;
    uVar7 = (ulong)*(uint *)(param_1 + 8);
    if (0x1c < *(uint *)(param_1 + 8)) {
      uVar7 = 0;
    }
    iVar4 = *(int *)((long)&DAT_054f0648 + uVar7 * 4);
    if (iVar4 != 0x7fffffff) {
      iVar4 = iVar4 + 1;
    }
    *(int *)((long)&DAT_054f0648 + uVar7 * 4) = iVar4;
    local_5c = *(undefined8 *)(param_1 + 0xc);
    local_54 = *(undefined4 *)(param_1 + 8);
    FUN_024f99b0(&DAT_054f0648,&local_5c);
  }
  puVar2 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return;
  }
  uVar10 = *(uint *)(param_1 + 4);
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
      goto joined_r0x0230b098;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0230b098;
    }
  }
  uVar10 = 0;
joined_r0x0230b098:
  if (plVar9 != (long *)0x0) {
    if (((*PTR_DAT_04bb5928 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5928);
    }
    uVar5 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb5920);
    puVar3 = PTR_DAT_04bb3160;
    puVar2 = PTR_DAT_04bb3158;
    if ((uVar10 & uVar5) == 1) {
      if ((long *)plVar9[0x16] != plVar9 + 0x15) {
        lVar8 = (long)*(int *)((long)plVar9 + 0xbc);
        plVar6 = (long *)(plVar9[0x16] - lVar8);
        puVar1 = PTR_DAT_04bb3040 + 0x10;
        do {
          if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar3), iVar4 != 0)) {
            *(undefined **)puVar2 = puVar1;
            __cxa_guard_release(puVar3);
          }
          if ((plVar6 != (long *)0x0) &&
             (uVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,puVar2), (uVar7 & 1) != 0)) {
            if ((*(byte *)(plVar6 + 0x5b) & 1) == 0) {
              return;
            }
            lVar8 = plVar6[0x5c];
            if (lVar8 == 0) {
              return;
            }
            if ((*(byte *)(lVar8 + 8) & 10) != 2) {
              return;
            }
            if (*(long *)(lVar8 + 0x18) == 0) {
              return;
            }
            *(undefined1 *)(*(long *)(lVar8 + 0x18) + 0x1ad) = 1;
            return;
          }
          plVar6 = (long *)(*(long *)((long)plVar6 + lVar8 + 8) - lVar8);
        } while (plVar6 != (long *)((long)(plVar9 + 0x15) - lVar8));
      }
    }
  }
  return;
}

