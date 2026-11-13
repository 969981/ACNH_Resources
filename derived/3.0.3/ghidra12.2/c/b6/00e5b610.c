
void FUN_00e5b610(long param_1,uint *param_2)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  undefined4 local_24;
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return;
  }
  uVar10 = *param_2;
  if ((((uVar10 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
      ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar10)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar3;
    iVar5 = (**(code **)(*plVar6 + 0x60))();
    if (iVar5 < 0x11) {
      uVar10 = 1;
      goto joined_r0x00e5b6d0;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x00e5b6d0;
    }
  }
  uVar10 = 0;
joined_r0x00e5b6d0:
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar7 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar8 == 1) {
      uVar1 = uVar10;
    }
    if (((uVar7 & 1) != 0) && (uVar1 != 0)) {
      plVar6 = plVar9 + 0x7c;
      (**(code **)(plVar9[0x7c] + 0x18))(plVar6);
      (**(code **)(plVar9[0x7c] + 0x18))(plVar6);
      if ((undefined1 *)plVar9[0x7d] != &DAT_040a029a) {
        uVar7 = 0;
        bVar4 = true;
        do {
          cVar2 = ((undefined1 *)plVar9[0x7d])[uVar7];
          if (cVar2 != (&DAT_040a029a)[uVar7]) break;
          if (cVar2 == '\0') {
            if (bVar4) {
              return;
            }
            break;
          }
          bVar4 = uVar7 < 0x80000;
          uVar7 = uVar7 + 1;
        } while (uVar7 != 0x80001);
        lVar8 = plVar9[0x77];
        if (lVar8 != 0) {
          if (((*(byte *)(lVar8 + 0xad59) >> 4 & 1) != 0) &&
             (lVar11 = *(long *)PTR_DAT_04bb4130, lVar11 != 0)) {
            (**(code **)(plVar9[0x7c] + 0x18))(plVar6);
            local_24 = FUN_006bd550(plVar9[0x7d],0);
            lVar11 = FUN_0079e4d0(lVar11,&local_24);
            if (lVar11 != 0) {
              return;
            }
          }
          FUN_01ea8290(lVar8,*(undefined8 *)(param_1 + 8));
        }
      }
    }
  }
  return;
}

