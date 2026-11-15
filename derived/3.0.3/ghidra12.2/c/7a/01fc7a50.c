
void FUN_01fc7a50(long param_1,uint *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return;
  }
  lVar9 = *(long *)(param_1 + 8);
  uVar12 = *param_2;
  if ((((uVar12 == 0) ||
       (plVar11 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                            ((ulong)(uVar12 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
      ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar11 + 0x46) != uVar12)) {
    plVar11 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar2;
    iVar5 = (**(code **)(*plVar6 + 0x60))();
    if (iVar5 < 0x11) {
      uVar12 = 1;
      goto joined_r0x01fc7b18;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x01fc7b18;
    }
  }
  uVar12 = 0;
joined_r0x01fc7b18:
  if (plVar11 != (long *)0x0) {
    lVar8 = plVar11[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar7 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar8 == 1) {
      uVar1 = uVar12;
    }
    if (((uVar7 & 1) != 0) && (uVar1 != 0)) {
      lVar13 = *(long *)(lVar9 + 8);
      (**(code **)(plVar11[0x7c] + 0x18))(plVar11 + 0x7c);
      (**(code **)(plVar11[0x7c] + 0x18))(plVar11 + 0x7c);
      lVar8 = plVar11[0x7d];
      (**(code **)(*(long *)(lVar13 + 0x3e0) + 0x18))(lVar13 + 0x3e0);
      puVar2 = PTR_DAT_04bb6710;
      if (lVar8 != *(long *)(lVar13 + 1000)) {
        uVar7 = 0;
        bVar4 = true;
        do {
          if (*(char *)(plVar11[0x7d] + uVar7) != *(char *)(*(long *)(lVar13 + 1000) + uVar7))
          break;
          if (*(char *)(plVar11[0x7d] + uVar7) == '\0') {
            if (bVar4) {
              return;
            }
            break;
          }
          bVar4 = uVar7 < 0x80000;
          uVar7 = uVar7 + 1;
        } while (uVar7 != 0x80001);
        if ((int)plVar11[0xea] == 0) {
          plVar6 = (long *)plVar11[0x77];
          if (((*PTR_DAT_04bb6710 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar5 != 0)) {
            *(undefined **)PTR_DAT_04bb6708 = PTR_DAT_04bb6718 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb6710);
          }
          puVar3 = PTR_DAT_04bb6708;
          if ((((plVar6 != (long *)0x0) &&
               (uVar7 = (**(code **)*plVar6)(plVar6,PTR_DAT_04bb6708), (uVar7 & 1) != 0)) &&
              (uVar7 = (**(code **)(*plVar6 + 0x540))(plVar6), (uVar7 & 1) != 0)) &&
             ((*(int *)((long)plVar6 + 0xaf8c) != 0x10 &&
              (uVar7 = FUN_01fa2040(lVar9,param_2), (uVar7 & 1) != 0)))) {
            puVar10 = (undefined8 *)plVar11[0x77];
            if (((*puVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar5 != 0))
            {
              *(undefined **)puVar3 = PTR_DAT_04bb6718 + 0x10;
              __cxa_guard_release(PTR_DAT_04bb6710);
            }
            if ((puVar10 != (undefined8 *)0x0) &&
               (uVar7 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bb6708), (uVar7 & 1) != 0)) {
              FUN_01fbd8e0(puVar10,lVar9);
              return;
            }
          }
        }
      }
    }
  }
  return;
}

