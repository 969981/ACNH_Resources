
void FUN_03690398(long param_1,uint param_2,undefined2 *param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  
  if ((((int)param_2 < 0) || (*(int *)(param_1 + 0x278) <= (int)param_2)) ||
     (*(int *)(*(long *)(*(long *)(param_1 + 0x280) + (ulong)param_2 * 8) + 0x44) != 2)) {
    uVar5 = (ulong)(int)param_2;
    uVar8 = *(uint *)(*(long *)(*(long *)(param_1 + 0x280) + (long)(int)param_2 * 8) + 0x4c);
    if (uVar8 != 0xffffffff) {
      lVar6 = param_1 + 0x698 + (ulong)uVar8 * 0xd8;
      if (0x25 < uVar8) {
        lVar6 = param_1 + 0x698;
      }
      *(undefined2 *)(lVar6 + 0x8c) = *param_3;
      *(undefined1 *)(lVar6 + 0x8e) = *(undefined1 *)(param_3 + 1);
      *(undefined1 *)(lVar6 + 0x8f) = *(undefined1 *)((long)param_3 + 3);
      *(undefined4 *)(lVar6 + 0x90) = *(undefined4 *)(param_3 + 2);
      *(undefined2 *)(lVar6 + 0x94) = param_3[4];
      *(undefined1 *)(lVar6 + 0x96) = *(undefined1 *)(param_3 + 5);
      *(undefined1 *)(lVar6 + 0x97) = *(undefined1 *)((long)param_3 + 0xb);
      *(undefined4 *)(lVar6 + 0x98) = *(undefined4 *)(param_3 + 6);
      *(undefined2 *)(lVar6 + 0x9c) = param_3[8];
      *(undefined1 *)(lVar6 + 0x9e) = *(undefined1 *)(param_3 + 9);
      *(undefined1 *)(lVar6 + 0x9f) = *(undefined1 *)((long)param_3 + 0x13);
      *(undefined4 *)(lVar6 + 0xa0) = *(undefined4 *)(param_3 + 10);
      *(undefined2 *)(lVar6 + 0xa4) = param_3[0xc];
      *(undefined1 *)(lVar6 + 0xa6) = *(undefined1 *)(param_3 + 0xd);
      *(undefined1 *)(lVar6 + 0xa7) = *(undefined1 *)((long)param_3 + 0x1b);
      *(undefined4 *)(lVar6 + 0xa8) = *(undefined4 *)(param_3 + 0xe);
      *(undefined2 *)(lVar6 + 0xac) = param_3[0x10];
      *(undefined1 *)(lVar6 + 0xae) = *(undefined1 *)(param_3 + 0x11);
      *(undefined1 *)(lVar6 + 0xaf) = *(undefined1 *)((long)param_3 + 0x23);
      *(undefined4 *)(lVar6 + 0xb0) = *(undefined4 *)(param_3 + 0x12);
      *(undefined2 *)(lVar6 + 0xb4) = param_3[0x14];
      *(undefined1 *)(lVar6 + 0xb6) = *(undefined1 *)(param_3 + 0x15);
      *(undefined1 *)(lVar6 + 0xb7) = *(undefined1 *)((long)param_3 + 0x2b);
      *(undefined4 *)(lVar6 + 0xb8) = *(undefined4 *)(param_3 + 0x16);
      *(undefined2 *)(lVar6 + 0xbc) = param_3[0x18];
      *(undefined1 *)(lVar6 + 0xbe) = *(undefined1 *)(param_3 + 0x19);
      *(undefined1 *)(lVar6 + 0xbf) = *(undefined1 *)((long)param_3 + 0x33);
      *(undefined4 *)(lVar6 + 0xc0) = *(undefined4 *)(param_3 + 0x1a);
      *(undefined2 *)(lVar6 + 0xc4) = param_3[0x1c];
      *(undefined1 *)(lVar6 + 0xc6) = *(undefined1 *)(param_3 + 0x1d);
      *(undefined1 *)(lVar6 + 199) = *(undefined1 *)((long)param_3 + 0x3b);
      *(undefined4 *)(lVar6 + 200) = *(undefined4 *)(param_3 + 0x1e);
      *(undefined2 *)(lVar6 + 0xcc) = param_3[0x20];
      *(undefined1 *)(lVar6 + 0xce) = *(undefined1 *)(param_3 + 0x21);
      *(undefined1 *)(lVar6 + 0xcf) = *(undefined1 *)((long)param_3 + 0x43);
      *(undefined4 *)(lVar6 + 0xd0) = *(undefined4 *)(param_3 + 0x22);
    }
  }
  else {
    uVar5 = (ulong)param_2;
    *(undefined2 *)(param_1 + 0x26a8) = *param_3;
    *(undefined1 *)(param_1 + 0x26aa) = *(undefined1 *)(param_3 + 1);
    *(undefined1 *)(param_1 + 0x26ab) = *(undefined1 *)((long)param_3 + 3);
    *(undefined4 *)(param_1 + 0x26ac) = *(undefined4 *)(param_3 + 2);
    *(undefined2 *)(param_1 + 0x26b0) = param_3[4];
    *(undefined1 *)(param_1 + 0x26b2) = *(undefined1 *)(param_3 + 5);
    *(undefined1 *)(param_1 + 0x26b3) = *(undefined1 *)((long)param_3 + 0xb);
    *(undefined4 *)(param_1 + 0x26b4) = *(undefined4 *)(param_3 + 6);
    *(undefined2 *)(param_1 + 0x26b8) = param_3[8];
    *(undefined1 *)(param_1 + 0x26ba) = *(undefined1 *)(param_3 + 9);
    *(undefined1 *)(param_1 + 0x26bb) = *(undefined1 *)((long)param_3 + 0x13);
    *(undefined4 *)(param_1 + 0x26bc) = *(undefined4 *)(param_3 + 10);
    *(undefined2 *)(param_1 + 0x26c0) = param_3[0xc];
    *(undefined1 *)(param_1 + 0x26c2) = *(undefined1 *)(param_3 + 0xd);
    *(undefined1 *)(param_1 + 0x26c3) = *(undefined1 *)((long)param_3 + 0x1b);
    *(undefined4 *)(param_1 + 0x26c4) = *(undefined4 *)(param_3 + 0xe);
    *(undefined2 *)(param_1 + 0x26c8) = param_3[0x10];
    *(undefined1 *)(param_1 + 0x26ca) = *(undefined1 *)(param_3 + 0x11);
    *(undefined1 *)(param_1 + 0x26cb) = *(undefined1 *)((long)param_3 + 0x23);
    *(undefined4 *)(param_1 + 0x26cc) = *(undefined4 *)(param_3 + 0x12);
    *(undefined2 *)(param_1 + 0x26d0) = param_3[0x14];
    *(undefined1 *)(param_1 + 0x26d2) = *(undefined1 *)(param_3 + 0x15);
    *(undefined1 *)(param_1 + 0x26d3) = *(undefined1 *)((long)param_3 + 0x2b);
    *(undefined4 *)(param_1 + 0x26d4) = *(undefined4 *)(param_3 + 0x16);
    *(undefined2 *)(param_1 + 0x26d8) = param_3[0x18];
    *(undefined1 *)(param_1 + 0x26da) = *(undefined1 *)(param_3 + 0x19);
    *(undefined1 *)(param_1 + 0x26db) = *(undefined1 *)((long)param_3 + 0x33);
    *(undefined4 *)(param_1 + 0x26dc) = *(undefined4 *)(param_3 + 0x1a);
    *(undefined2 *)(param_1 + 0x26e0) = param_3[0x1c];
    *(undefined1 *)(param_1 + 0x26e2) = *(undefined1 *)(param_3 + 0x1d);
    *(undefined1 *)(param_1 + 0x26e3) = *(undefined1 *)((long)param_3 + 0x3b);
    *(undefined4 *)(param_1 + 0x26e4) = *(undefined4 *)(param_3 + 0x1e);
    *(undefined2 *)(param_1 + 0x26e8) = param_3[0x20];
    *(undefined1 *)(param_1 + 0x26ea) = *(undefined1 *)(param_3 + 0x21);
    *(undefined1 *)(param_1 + 0x26eb) = *(undefined1 *)((long)param_3 + 0x43);
    *(undefined4 *)(param_1 + 0x26ec) = *(undefined4 *)(param_3 + 0x22);
  }
  puVar1 = PTR_DAT_04bb27c0;
  uVar8 = *(uint *)(*(long *)(*(long *)(param_1 + 0x280) + uVar5 * 8) + 0x40);
  if (uVar8 == 0) {
    return;
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return;
  }
  plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) + ((ulong)(uVar8 >> 0x11) & 0x7ff8));
  if (((plVar7 == (long *)0x0) || ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar7 + 0x46) != uVar8)) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar1;
    iVar2 = (**(code **)(*plVar4 + 0x60))();
    if (iVar2 < 0x11) {
      uVar8 = 1;
      goto joined_r0x036906f8;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x036906f8;
    }
  }
  uVar8 = 0;
joined_r0x036906f8:
  if (plVar7 != (long *)0x0) {
    if (((*PTR_DAT_04bb3748 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3748), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb3740 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3748);
    }
    uVar3 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb3740);
    if ((uVar8 & uVar3) == 1) {
      FUN_0075d808(plVar7,param_3);
      return;
    }
  }
  return;
}

