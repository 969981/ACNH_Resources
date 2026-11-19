
void FUN_039e9b60(long param_1,long *param_2,undefined4 param_3,long *param_4,long *param_5)

{
  undefined *puVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  undefined8 uVar10;
  long lVar11;
  void *__dest;
  void *__src;
  undefined1 local_78 [24];
  
  if (((*PTR_DAT_04bb3490 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3490), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bb3488 = PTR_DAT_04bb3498 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3490);
  }
  if (param_2 == (long *)0x0) {
    return;
  }
  uVar5 = (**(code **)*param_2)(param_2,PTR_DAT_04bb3488);
  if ((uVar5 & 1) == 0) {
    return;
  }
  local_78[0] = 0;
  plVar6 = (long *)FUN_039d5610(param_2,param_3,local_78,0x288,param_5);
  if (plVar6 == (long *)0x0) {
LAB_039e9c68:
    plVar6 = (long *)0x0;
  }
  else {
    plVar6[0x4a] = 0;
    *(undefined4 *)((long)plVar6 + 599) = 0;
    *(undefined1 *)((long)plVar6 + 0x25b) = 1;
    *(undefined1 *)(plVar6 + 3) = 0;
    plVar6[2] = 0;
    plVar6[0x49] = 0;
    *(undefined4 *)((long)plVar6 + 0x25c) = 0;
    *(undefined4 *)((long)plVar6 + 0x25f) = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    puVar1 = PTR_DAT_04bd17b8 + 0x10;
    *(undefined2 *)(plVar6 + 0x4e) = 0;
    plVar6[0x46] = 0;
    plVar6[0x47] = 0;
    plVar6[0x48] = 0;
    plVar6[0x50] = 0;
    plVar6[0x4d] = (long)puVar1;
    plVar6[0x4f] = 0;
    *plVar6 = (long)&PTR_FUN_04b6b9a8;
    plVar6[1] = 0;
    uVar5 = FUN_039d57a8(param_2,plVar6,param_3,local_78,param_5);
    if ((uVar5 & 1) == 0) goto LAB_039e9c68;
  }
  plVar6[0x4f] = param_1;
  (**(code **)(*param_4 + 0x18))(param_4);
  lVar11 = 0;
  do {
    if (*(char *)(param_4[1] + lVar11) == '\0') {
LAB_039e9ccc:
      iVar3 = (int)lVar11 + 1;
      goto LAB_039e9cd0;
    }
    lVar7 = param_4[1] + lVar11;
    if (*(char *)(lVar7 + 1) == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_039e9ccc;
    }
    if (*(char *)(lVar7 + 2) == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_039e9ccc;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  iVar3 = 1;
LAB_039e9cd0:
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    pvVar9 = malloc((long)iVar3);
  }
  else {
    plVar8 = param_5;
    if (param_5 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar8 = (long *)(lVar11 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) {
        pvVar9 = (void *)0x0;
        goto joined_r0x039e9d40;
      }
    }
    pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,(long)iVar3,8);
  }
joined_r0x039e9d40:
  if (iVar3 < 1) {
    iVar3 = 0;
    __dest = (void *)0x0;
  }
  else {
    *(undefined1 *)((long)pvVar9 + (ulong)(iVar3 - 1)) = 0;
    __dest = pvVar9;
  }
  (**(code **)(*param_4 + 0x18))(param_4);
  __src = (void *)param_4[1];
  if (__dest != __src) {
    (**(code **)(*param_4 + 0x18))(param_4);
    lVar11 = 0;
    do {
      if (*(char *)(param_4[1] + lVar11) == '\0') goto LAB_039e9ddc;
      lVar7 = param_4[1] + lVar11;
      if (*(char *)(lVar7 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_039e9ddc;
      }
      if (*(char *)(lVar7 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_039e9ddc;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_039e9ddc:
    iVar4 = (int)lVar11;
    if (iVar3 <= (int)lVar11) {
      iVar4 = iVar3 + -1;
    }
    memcpy(__dest,__src,(long)iVar4);
    *(undefined1 *)((long)__dest + (long)iVar4) = 0;
  }
  plVar6[0x50] = (long)pvVar9;
  (**(code **)(*plVar6 + 0x58))(plVar6,param_5);
  *(undefined4 *)((long)param_2 + 0xb4) = 1000;
  iVar3 = (**(code **)(*param_2 + 0x1e0))(param_2);
  if (0 < iVar3) {
    iVar3 = 0;
    do {
      plVar6 = (long *)(**(code **)(*param_2 + 0x1e8))(param_2,iVar3);
      uVar5 = (**(code **)(*plVar6 + 0x28))();
      if ((uVar5 & 1) != 0) {
        uVar10 = (**(code **)(*param_2 + 0x1e8))(param_2,iVar3);
        uVar2 = *(ushort *)((long)param_2 + 0xb6);
        *(ushort *)((long)param_2 + 0xb6) = uVar2 + 1;
        *(undefined8 *)(param_2[1] + (ulong)uVar2 * 8) = uVar10;
      }
      iVar3 = iVar3 + 1;
      iVar4 = (**(code **)(*param_2 + 0x1e0))(param_2);
    } while (iVar3 < iVar4);
  }
  return;
}

