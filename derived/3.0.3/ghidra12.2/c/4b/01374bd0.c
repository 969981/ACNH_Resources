
void FUN_01374bd0(long param_1,uint *param_2)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  undefined8 uVar8;
  code *UNRECOVERED_JUMPTABLE;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  uint uVar12;
  undefined8 local_28;
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return;
  }
  uVar12 = *param_2;
  if ((((uVar12 == 0) ||
       (plVar11 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar12 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
      ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar11 + 0x46) != uVar12)) {
    plVar11 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar3;
    iVar5 = (**(code **)(*plVar7 + 0x60))();
    if (iVar5 < 0x11) {
      uVar12 = 1;
      goto joined_r0x01374c90;
    }
    if (*(uint *)(lVar9 + 0x5e8) < 5) {
      uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x01374c90;
    }
  }
  uVar12 = 0;
joined_r0x01374c90:
  if (plVar11 != (long *)0x0) {
    lVar9 = plVar11[0x2a];
    uVar1 = *(uint *)(plVar11 + 0x49);
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar6 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb37d0);
    if ((((int)lVar9 == 1) && ((uVar6 & uVar12) != 0)) && ((uVar1 >> 4 & 1) != 0)) {
      (**(code **)(plVar11[0x7c] + 0x18))(plVar11 + 0x7c);
      (**(code **)(plVar11[0x7c] + 0x18))(plVar11 + 0x7c);
      if ((undefined1 *)plVar11[0x7d] != &DAT_040a029a) {
        uVar10 = 0;
        bVar4 = true;
        do {
          cVar2 = ((undefined1 *)plVar11[0x7d])[uVar10];
          if (cVar2 != (&DAT_040a029a)[uVar10]) break;
          if (cVar2 == '\0') {
            if (bVar4) goto LAB_01374d60;
            break;
          }
          bVar4 = uVar10 < 0x80000;
          uVar10 = uVar10 + 1;
        } while (uVar10 != 0x80001);
        if (*(char *)(param_1 + 8) == '\0') {
          UNRECOVERED_JUMPTABLE = *(code **)(*plVar11 + 0x2a0);
        }
        else {
          UNRECOVERED_JUMPTABLE = *(code **)(*plVar11 + 0x2a8);
        }
                    /* WARNING: Could not recover jumptable at 0x01374dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(plVar11,*(undefined8 *)(param_1 + 0x10));
        return;
      }
LAB_01374d60:
      if (plVar11[0x76] != 0) {
        if (*(char *)(param_1 + 8) == '\0') {
          uVar8 = 0x13;
        }
        else {
          uVar8 = 0;
        }
        local_28 = 0;
        FUN_01e5a930(0x40000000,plVar11[0x76],uVar8,PTR_DAT_04bb2150,(long)&local_28 + 4,&local_28,
                     PTR_DAT_04bc1600,6);
      }
    }
  }
  return;
}

