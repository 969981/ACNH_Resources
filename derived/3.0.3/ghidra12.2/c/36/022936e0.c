
void FUN_022936e0(undefined4 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined1 *__src;
  uint uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined *local_a8;
  undefined1 *puStack_a0;
  undefined *local_98;
  undefined1 *local_90;
  int local_88;
  undefined1 auStack_84 [63];
  undefined1 local_45;
  
  lVar8 = *(long *)PTR_DAT_04bb4858;
  if (lVar8 == 0) {
    return;
  }
  local_45 = 0;
  local_88 = 0x40;
  local_98 = PTR_DAT_04bb2f70 + 0x10;
  local_90 = auStack_84;
  (**(code **)(DAT_05473ef8 + 0x18))(&DAT_05473ef8);
  __src = DAT_05473f00;
  if (auStack_84 != DAT_05473f00) {
    (**(code **)(DAT_05473ef8 + 0x18))(&DAT_05473ef8);
    lVar7 = 0;
    do {
      if (DAT_05473f00[lVar7] == '\0') goto LAB_022937b0;
      if (DAT_05473f00[lVar7 + 1] == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_022937b0;
      }
      if (DAT_05473f00[lVar7 + 2] == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_022937b0;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_022937b0:
    iVar4 = (int)lVar7;
    if (local_88 <= (int)lVar7) {
      iVar4 = local_88 + -1;
    }
    memcpy(auStack_84,__src,(long)iVar4);
    auStack_84[iVar4] = 0;
  }
  local_98 = PTR_DAT_04bb2bc0 + 0x10;
  FUN_038d13f0(&local_98,&DAT_040d486c,param_1);
  local_a8 = PTR_DAT_04bb2020 + 0x10;
  puStack_a0 = local_90;
  uVar3 = FUN_0224b170(lVar8,&local_a8);
  puVar2 = PTR_DAT_04bb27c0;
  if (uVar3 == 0) {
    return;
  }
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return;
  }
  plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) + (ulong)(uVar3 >> 0x14) * 8);
  if (((plVar9 == (long *)0x0) || ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar9 + 0x46) != uVar3)) {
    plVar9 = (long *)0x0;
  }
  if ((*(int *)(lVar8 + 0x288) == 1) || (*(int *)(lVar8 + 0x288) == -1)) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar3 = 1;
      goto joined_r0x022938cc;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar3 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x022938cc;
    }
  }
  uVar3 = 0;
joined_r0x022938cc:
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0x2a];
    if (((DAT_05474000 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_05474000), iVar4 != 0)) {
      DAT_05473ff8 = PTR_DAT_04bb3b50 + 0x10;
      __cxa_guard_release(&DAT_05474000);
    }
    uVar6 = (**(code **)(*plVar9 + 0x20))(plVar9,&DAT_05473ff8);
    uVar1 = 0;
    if ((int)lVar8 == 1) {
      uVar1 = uVar3;
    }
    if ((((uVar6 & 1) != 0) && (uVar1 != 0)) &&
       (uVar6 = (**(code **)(*(long *)plVar9[0xc] + 0x100))(), (uVar6 & 1) == 0)) {
      *(undefined1 *)((long)plVar9 + 0x41c) = 1;
    }
  }
  return;
}

