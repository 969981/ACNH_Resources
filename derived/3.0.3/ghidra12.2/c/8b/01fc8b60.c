
void FUN_01fc8b60(long param_1,uint *param_2)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  uint uVar10;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return;
  }
  uVar10 = *param_2;
  if ((((uVar10 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar10)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar10 = 1;
      goto joined_r0x01fc8c1c;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x01fc8c1c;
    }
  }
  uVar10 = 0;
joined_r0x01fc8c1c:
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar7 == 1) {
      uVar1 = uVar10;
    }
    if (((uVar6 & 1) != 0) && (uVar1 != 0)) {
      plVar5 = *(long **)(param_1 + 0x10);
      (**(code **)(plVar8[0x7c] + 0x18))(plVar8 + 0x7c);
      (**(code **)(plVar8[0x7c] + 0x18))(plVar8 + 0x7c);
      lVar7 = plVar8[0x7d];
      (**(code **)(*plVar5 + 0x18))(plVar5);
      if (lVar7 != plVar5[1]) {
        uVar6 = 0;
        bVar3 = true;
        do {
          if (*(char *)(plVar8[0x7d] + uVar6) != *(char *)(plVar5[1] + uVar6)) break;
          if (*(char *)(plVar8[0x7d] + uVar6) == '\0') {
            if (bVar3) {
              return;
            }
            break;
          }
          bVar3 = uVar6 < 0x80000;
          uVar6 = uVar6 + 1;
        } while (uVar6 != 0x80001);
        puVar9 = (undefined8 *)plVar8[0x77];
        if (((*PTR_DAT_04bb6710 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar4 != 0)) {
          *(undefined **)PTR_DAT_04bb6708 = PTR_DAT_04bb6718 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb6710);
        }
        if ((puVar9 != (undefined8 *)0x0) &&
           (uVar6 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bb6708), (uVar6 & 1) != 0)) {
          *(uint *)(puVar9 + 0x15f6) = *(uint *)(puVar9 + 0x15f6) | 0x80;
        }
      }
    }
  }
  return;
}

