
/* WARNING: Type propagation algorithm not settling */

void FUN_00e416a0(long *param_1,undefined4 param_2)

{
  long lVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  void *__dest;
  uint uVar13;
  void *__src;
  undefined *local_50;
  undefined8 uStack_48;
  
  puVar4 = PTR_DAT_04bb4908;
  puVar3 = PTR_DAT_04bb27c0;
  lVar10 = 0;
  switch(param_2) {
  case 2:
    if (*(long *)PTR_DAT_04bb2230 == 0) {
      lVar10 = 0;
      cVar2 = cRam0000000000000078;
    }
    else {
      lVar10 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
      cVar2 = *(char *)(lVar10 + 0x78);
    }
    if (cVar2 == '\0') {
      bVar5 = 1;
    }
    else {
      bVar5 = (**(code **)(*(long *)(lVar10 + 0x70) + 0x18))((long *)(lVar10 + 0x70));
      *(undefined1 *)(lVar10 + 0x78) = 0;
    }
    plVar12 = (long *)(lVar10 + 0x88);
    *(byte *)(lVar10 + 0x79) = bVar5 & 1;
    __dest = (void *)param_1[1];
    (**(code **)(*plVar12 + 0x18))(plVar12);
    __src = *(void **)(lVar10 + 0x90);
    if (__dest == __src) {
      return;
    }
    (**(code **)(*(long *)(lVar10 + 0x88) + 0x18))(plVar12);
    lVar11 = 0;
    do {
      if (*(char *)(*(long *)(lVar10 + 0x90) + lVar11) == '\0') goto LAB_00e4196c;
      lVar1 = *(long *)(lVar10 + 0x90) + lVar11;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_00e4196c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_00e4196c;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_00e4196c:
    iVar6 = (int)lVar11;
    if ((int)param_1[2] <= (int)lVar11) {
      iVar6 = (int)param_1[2] + -1;
    }
    memcpy(__dest,__src,(long)iVar6);
    *(undefined1 *)((long)__dest + (long)iVar6) = 0;
    return;
  case 3:
    break;
  case 4:
    lVar10 = 1;
    break;
  case 5:
    lVar10 = 2;
    break;
  default:
    return;
  case 7:
    if (*(long *)(*(long *)PTR_DAT_04bb4908 + 0x58) == 0) {
      return;
    }
    uVar9 = FUN_01e1cfd0();
    if (((uVar9 & 1) == 0) && (uVar9 = FUN_01e1d0f0(*(undefined8 *)puVar4), (uVar9 & 1) == 0)) {
      return;
    }
    uStack_48 = FUN_01e1cb30(*(undefined8 *)puVar4);
    local_50 = PTR_DAT_04bb2020 + 0x10;
    (**(code **)(*param_1 + 0x10))(param_1,&local_50);
    return;
  case 9:
    FUN_036ddfc0(*(undefined8 *)PTR_DAT_04bb27f8,param_1);
    return;
  }
  uVar13 = *(uint *)(*(long *)PTR_DAT_04bb3968 + lVar10 * 4 + 0xa20);
  if (uVar13 == 0) {
    return;
  }
  lVar10 = *(long *)PTR_DAT_04bb27c0;
  if (lVar10 == 0) {
    return;
  }
  plVar12 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) + ((ulong)(uVar13 >> 0x11) & 0x7ff8)
                      );
  if (((plVar12 == (long *)0x0) || ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar12 + 0x46) != uVar13)) {
    plVar12 = (long *)0x0;
  }
  if (*(int *)(lVar10 + 0x288) == 1 || *(int *)(lVar10 + 0x288) == -1) {
    plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)puVar3;
    iVar6 = (**(code **)(*plVar8 + 0x60))();
    if (iVar6 < 0x11) {
      uVar13 = 1;
      goto joined_r0x00e41860;
    }
    if (*(uint *)(lVar10 + 0x5e8) < 5) {
      uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x00e41860;
    }
  }
  uVar13 = 0;
joined_r0x00e41860:
  if (plVar12 != (long *)0x0) {
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar7 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb37d0);
    if ((uVar13 & uVar7) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00e418cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))(param_1,plVar12 + 0x7c);
      return;
    }
  }
  return;
}

