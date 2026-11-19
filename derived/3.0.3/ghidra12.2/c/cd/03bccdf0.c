
uint FUN_03bccdf0(long param_1,undefined8 param_2,uint param_3,int param_4,uint param_5,
                 long *param_6)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  void *pvVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong __size;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulong uStack_b0;
  undefined8 local_a8;
  ulong uStack_a0;
  undefined8 local_98;
  ulong uStack_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_70;
  undefined4 local_68;
  
  __size = (ulong)param_3;
  puVar12 = *(undefined8 **)(*(long *)PTR_DAT_04bd2340 + 8);
  if (((*PTR_DAT_04bd2308 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd2308), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bd2300 = PTR_DAT_04bd2310 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd2308);
  }
  uVar5 = (**(code **)*puVar12)(puVar12,PTR_DAT_04bd2300);
  if ((uVar5 & 1) == 0) {
    puVar12 = (undefined8 *)0x0;
  }
  if (*(char *)(puVar12 + 0x33) == '\0') {
    uVar3 = 0;
    goto LAB_03bcd0dc;
  }
  uVar2 = FUN_003ba954(param_2,(ulong)param_5);
  puVar1 = PTR_DAT_04bb2698;
  uVar5 = (ulong)uVar2;
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    pvVar9 = malloc(uVar5);
    *(void **)(param_1 + 0x318) = pvVar9;
    if (param_3 != 0) goto LAB_03bccee8;
LAB_03bccf68:
    *(undefined8 *)(param_1 + 0x328) = 0;
  }
  else {
    plVar7 = param_6;
    if (param_6 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar11 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      uVar8 = 0;
      if (plVar7 != (long *)0x0) goto LAB_03bccecc;
    }
    else {
LAB_03bccecc:
      uVar8 = (**(code **)(*plVar7 + 0x30))(plVar7,uVar5,0x1000);
    }
    *(undefined8 *)(param_1 + 0x318) = uVar8;
    if (param_3 == 0) goto LAB_03bccf68;
LAB_03bccee8:
    lVar11 = *(long *)puVar1;
    __size = (ulong)(param_3 + 0xfff & 0xfffff000);
    if (lVar11 == 0) {
      pvVar9 = malloc(__size);
    }
    else {
      plVar7 = param_6;
      if (param_6 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar7 = (long *)(lVar11 + 8);
        if (lVar6 != 0) {
          plVar7 = (long *)(lVar6 + 0xa8);
        }
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) {
          pvVar9 = (void *)0x0;
          goto LAB_03bccf80;
        }
      }
      pvVar9 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,__size,0x1000);
    }
LAB_03bccf80:
    *(void **)(param_1 + 0x328) = pvVar9;
    FUN_038d1270(param_1 + 0x3a8,"StreamBuffer");
    *(ulong *)(param_1 + 0x3f0) = __size;
    *(undefined8 *)(param_1 + 1000) = *(undefined8 *)(param_1 + 0x328);
    lVar6 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x78);
    nn::os::LockMutex((MutexType *)(lVar6 + 0x58));
    plVar7 = (long *)((long)*(int *)(lVar6 + 0x1c) + param_1 + 0x3a8);
    plVar10 = (long *)(lVar6 + 8);
    lVar11 = *plVar10;
    *plVar10 = (long)plVar7;
    *plVar7 = lVar11;
    plVar7[1] = (long)plVar10;
    if (lVar11 != 0) {
      *(long **)(lVar11 + 8) = plVar7;
    }
    *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1;
    nn::os::UnlockMutex((MutexType *)(lVar6 + 0x58));
    if (param_4 != 0) {
      uVar3 = thunk_FUN_003e2a88(param_2,param_4 + 0xfffU & 0xfffff000);
      lVar11 = *(long *)puVar1;
      *(uint *)(param_1 + 0x340) = uVar3;
      if (lVar11 == 0) {
        pvVar9 = malloc((ulong)uVar3);
      }
      else {
        if (param_6 == (long *)0x0) {
          lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          puVar12 = (undefined8 *)(lVar11 + 8);
          if (lVar6 != 0) {
            puVar12 = (undefined8 *)(lVar6 + 0xa8);
          }
          param_6 = (long *)*puVar12;
          if (param_6 == (long *)0x0) {
            pvVar9 = (void *)0x0;
            goto LAB_03bcd084;
          }
        }
        pvVar9 = (void *)(**(code **)(*param_6 + 0x30))(param_6,(ulong)uVar3,0x1000);
      }
LAB_03bcd084:
      *(void **)(param_1 + 0x338) = pvVar9;
    }
  }
  local_68 = 0;
  local_88 = 1;
  uStack_c0 = *(undefined8 *)(param_1 + 0x348);
  local_80 = 0;
  uStack_78 = 0;
  local_b8 = *(undefined8 *)(param_1 + 0x318);
  local_a8 = *(undefined8 *)(param_1 + 0x328);
  local_98 = *(undefined8 *)(param_1 + 0x338);
  uStack_90 = (ulong)*(uint *)(param_1 + 0x340);
  local_c8 = param_2;
  uStack_b0 = uVar5;
  uStack_a0 = __size;
  local_70 = (ulong)param_5;
  uVar3 = FUN_003ba554(param_1 + 8,&local_c8);
  *(uint *)(param_1 + 800) = uVar2;
  *(int *)(param_1 + 0x330) = (int)__size;
LAB_03bcd0dc:
  return uVar3 & 1;
}

