
void FUN_016634c0(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *__src;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  void *__dest;
  undefined1 *__dest_00;
  long lVar11;
  void *__src_00;
  undefined *puVar12;
  undefined *local_e8;
  undefined1 *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  lVar11 = *(long *)PTR_DAT_04bbdcb8;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    plVar7 = malloc(8);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar1 = (undefined8 *)(lVar9 + 8);
    if (lVar6 != 0) {
      puVar1 = (undefined8 *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,8,8);
  }
  lVar9 = 0;
  *plVar7 = (long)(PTR_DAT_04bbdb90 + 0x10);
  *(long **)(lVar11 + 0x48) = plVar7;
  puVar4 = PTR_DAT_04bbd4c8;
  puVar3 = PTR_DAT_04bbd4c0;
  DAT_052314f0 = &PTR_FUN_049ba1d8;
  DAT_052314f8 = FUN_01665004;
  DAT_052316f0 = &PTR_FUN_049ba1d8;
  DAT_05231750 = &PTR_FUN_049ba1d8;
  DAT_052314d0 = &PTR_FUN_049ba1d8;
  DAT_052314d8 = &LAB_01664e48;
  DAT_05231630 = &PTR_FUN_049ba1d8;
  DAT_05231638 = &LAB_016650c4;
  DAT_052316f8 = &LAB_01665144;
  DAT_05231450 = &PTR_FUN_049ba1d8;
  DAT_05231458 = &LAB_016651d4;
  DAT_05231470 = &PTR_FUN_049ba1d8;
  DAT_05231478 = &LAB_01665284;
  DAT_05231758 = &LAB_0166531c;
  DAT_052317d8 = &LAB_016653a4;
  DAT_05231858 = &LAB_01665464;
  DAT_05231878 = &LAB_016654ec;
  DAT_052317d0 = &PTR_FUN_049ba1d8;
  DAT_05231850 = &PTR_FUN_049ba1d8;
  local_e8 = (undefined *)0x100000000;
  local_e0 = (undefined1 *)0x300000002;
  local_d8 = 0x500000004;
  uStack_d0 = 0x700000006;
  local_c8 = 0x900000008;
  uStack_c0 = 0xb0000000a;
  local_b8 = 0xd0000000c;
  uStack_b0 = 0xf0000000e;
  local_a8 = 0x1100000010;
  uStack_a0 = 0x1300000012;
  local_98 = 0x1500000014;
  uStack_90 = 0x1700000016;
  local_88 = 0x1900000018;
  uStack_80 = 0x1b0000001a;
  local_68 = 0x2100000020;
  local_78 = 0x1d0000001c;
  uStack_70 = 0x1f0000001e;
  puVar12 = PTR_DAT_04bbd4d0 + 0x10;
  DAT_05231870 = &PTR_FUN_049ba1d8;
  do {
    uVar2 = *(uint *)((long)&local_e8 + lVar9);
    uVar10 = (ulong)uVar2;
    plVar7 = (long *)(&DAT_05231450 + uVar10 * 4);
    if (0x21 < uVar2) {
      plVar7 = (long *)&DAT_05231450;
    }
    uVar8 = (**(code **)(*plVar7 + 0x10))(plVar7);
    if ((uVar8 & 1) != 0) {
      plVar7 = (long *)(**(code **)*plVar7)(plVar7,0);
      if (0x21 < uVar2) {
        uVar10 = 0;
      }
      *(long **)(param_1 + 0x40 + uVar10 * 8) = plVar7;
      if (plVar7 != (long *)0x0) {
        if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
          *(undefined **)puVar3 = puVar12;
          __cxa_guard_release(puVar4);
        }
        uVar10 = (**(code **)*plVar7)(plVar7,puVar3);
        if ((uVar10 & 1) != 0) {
          (**(code **)(*plVar7 + 0x90))(plVar7,0);
          (**(code **)(*plVar7 + 0x80))(plVar7);
        }
      }
    }
    lVar9 = lVar9 + 4;
  } while (lVar9 != 0x88);
  DAT_05231670 = &PTR_FUN_049ba1d8;
  DAT_05231450 = &PTR_LAB_049ba160;
  DAT_05231470 = &PTR_LAB_049ba160;
  DAT_052314d0 = &PTR_LAB_049ba160;
  DAT_052314f0 = &PTR_LAB_049ba160;
  DAT_052315f0 = &PTR_LAB_049ba160;
  DAT_05231610 = &PTR_LAB_049ba160;
  DAT_05231630 = &PTR_LAB_049ba160;
  DAT_05231650 = &PTR_LAB_049ba160;
  DAT_052316f0 = &PTR_LAB_049ba160;
  DAT_05231730 = &PTR_LAB_049ba160;
  DAT_05231750 = &PTR_LAB_049ba160;
  DAT_052317d0 = &PTR_LAB_049ba160;
  DAT_052317f0 = &PTR_LAB_049ba160;
  DAT_05231850 = &PTR_LAB_049ba160;
  DAT_05231870 = &PTR_LAB_049ba160;
  DAT_05231690 = &PTR_FUN_049ba1d8;
  DAT_052316b0 = &PTR_FUN_049ba1d8;
  DAT_052316d0 = &PTR_FUN_049ba1d8;
  DAT_05231710 = &PTR_FUN_049ba1d8;
  DAT_05231770 = &PTR_FUN_049ba1d8;
  DAT_05231790 = &PTR_FUN_049ba1d8;
  DAT_052317b0 = &PTR_FUN_049ba1d8;
  DAT_05231510 = &PTR_FUN_049ba1d8;
  DAT_05231518 = &LAB_016655ec;
  DAT_05231530 = &PTR_FUN_049ba1d8;
  DAT_05231538 = &LAB_0166566c;
  DAT_05231570 = &PTR_FUN_049ba1d8;
  DAT_05231578 = &LAB_01665824;
  DAT_05231590 = &PTR_FUN_049ba1d8;
  DAT_05231598 = &LAB_016658ac;
  DAT_052315d0 = &PTR_FUN_049ba1d8;
  DAT_052315d8 = &LAB_01665a4c;
  DAT_05231490 = &PTR_FUN_049ba1d8;
  DAT_05231498 = &LAB_01665b20;
  DAT_05231698 = &LAB_01665d58;
  DAT_052316b8 = &LAB_01665dd8;
  DAT_052316d8 = &LAB_01665e58;
  DAT_05231718 = &LAB_01665eec;
  DAT_05231778 = &LAB_01665f88;
  DAT_05231798 = &LAB_01666054;
  DAT_052317b8 = &LAB_016660d4;
  DAT_05231818 = &LAB_01666154;
  DAT_05231838 = &LAB_0166621c;
  DAT_052314b0 = &PTR_FUN_049ba1d8;
  DAT_052314b8 = &LAB_0166556c;
  DAT_05231550 = &PTR_FUN_049ba1d8;
  DAT_05231558 = &LAB_01665740;
  DAT_052315b0 = &PTR_FUN_049ba1d8;
  DAT_052315b8 = &LAB_01665958;
  DAT_05231678 = &LAB_01665c08;
  DAT_05231810 = &PTR_FUN_049ba1d8;
  DAT_05231830 = &PTR_FUN_049ba1d8;
  if (*(long *)PTR_DAT_04bbdcc0 != 0) {
    *(undefined1 *)(*(long *)PTR_DAT_04bbdcc0 + 9) = 1;
  }
  lVar9 = *(long *)PTR_DAT_04bbdcc8;
  if (lVar9 != 0) {
    *(undefined8 *)(lVar9 + 0x5f0) = 0;
    *(long *)(lVar9 + 0x5d0) = lVar9 + 0x5d8;
    *(long *)(lVar9 + 0x5e0) = param_1;
    *(undefined1 **)(lVar9 + 0x5e8) = &LAB_01663acc;
    *(undefined ***)(lVar9 + 0x5d8) = &PTR_LAB_049ba228;
    puVar12 = PTR_DAT_04bb2020 + 0x10;
    local_e0 = &DAT_040e46f6;
    *(uint *)(lVar9 + 0x5fc) = *(uint *)(lVar9 + 0x5fc) | 4;
    puVar3 = PTR_PTR_04bb2238;
    __dest = *(void **)(lVar9 + 0x680);
    local_e8 = puVar12;
    (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
    __src_00 = *(void **)(puVar3 + 8);
    if (__dest != __src_00) {
      (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
      lVar11 = 0;
      do {
        if (*(char *)(*(long *)(puVar3 + 8) + lVar11) == '\0') goto LAB_016639dc;
        lVar6 = *(long *)(puVar3 + 8) + lVar11;
        if (*(char *)(lVar6 + 1) == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_016639dc;
        }
        if (*(char *)(lVar6 + 2) == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_016639dc;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_016639dc:
      iVar5 = (int)lVar11;
      if (*(int *)(lVar9 + 0x688) <= (int)lVar11) {
        iVar5 = *(int *)(lVar9 + 0x688) + -1;
      }
      memcpy(__dest,__src_00,(long)iVar5);
      *(undefined1 *)((long)__dest + (long)iVar5) = 0;
      puVar12 = local_e8;
    }
    __dest_00 = *(undefined1 **)(lVar9 + 0x710);
    (**(code **)(puVar12 + 0x18))(&local_e8);
    __src = local_e0;
    if (__dest_00 != local_e0) {
      (**(code **)(local_e8 + 0x18))(&local_e8);
      lVar11 = 0;
      do {
        if (local_e0[lVar11] == '\0') goto LAB_01663a7c;
        if (local_e0[lVar11 + 1] == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_01663a7c;
        }
        if (local_e0[lVar11 + 2] == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_01663a7c;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_01663a7c:
      iVar5 = (int)lVar11;
      if (*(int *)(lVar9 + 0x718) <= (int)lVar11) {
        iVar5 = *(int *)(lVar9 + 0x718) + -1;
      }
      memcpy(__dest_00,__src,(long)iVar5);
      __dest_00[iVar5] = 0;
    }
    *(undefined4 *)(lVar9 + 0x608) = 3;
  }
  return;
}

