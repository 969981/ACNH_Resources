
void FUN_03b1edf0(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  uVar3 = (**(code **)(*(long *)param_2[1] + 0x30))();
  uVar9 = (ulong)uVar3;
  FUN_00367a40(PTR_LAB_04bd1da0,PTR_LAB_04bd1d98,*param_2);
  puVar1 = PTR_DAT_04bb2698;
  if (0 < (int)uVar3) {
    lVar10 = *(long *)PTR_DAT_04bb2698;
    if (lVar10 == 0) {
      pvVar6 = malloc(uVar9 << 3);
joined_r0x03b1ef1c:
      if (pvVar6 != (void *)0x0) {
        *(uint *)(param_1 + 8) = uVar3;
        *(void **)(param_1 + 0x10) = pvVar6;
      }
    }
    else {
      plVar4 = (long *)*param_2;
      if (plVar4 != (long *)0x0) {
LAB_03b1ee90:
        pvVar6 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,uVar9 << 3,8);
        goto joined_r0x03b1ef1c;
      }
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar4 = (long *)(lVar10 + 8);
      if (lVar5 != 0) {
        plVar4 = (long *)(lVar5 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 != (long *)0x0) goto LAB_03b1ee90;
    }
    lVar10 = *(long *)puVar1;
    if (lVar10 == 0) {
      pvVar6 = malloc(uVar9);
    }
    else {
      plVar4 = (long *)*param_2;
      if (plVar4 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar4 = (long *)(lVar10 + 8);
        if (lVar5 != 0) {
          plVar4 = (long *)(lVar5 + 0xa8);
        }
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) goto LAB_03b1ef38;
      }
      pvVar6 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,uVar9,8);
    }
    if (pvVar6 != (void *)0x0) {
      *(uint *)(param_1 + 0x18) = uVar3;
      *(void **)(param_1 + 0x20) = pvVar6;
    }
  }
LAB_03b1ef38:
  uVar3 = *(uint *)(param_1 + 8);
  if (0 < (int)uVar3) {
    uVar9 = (ulong)uVar3 & 3;
    if (uVar3 < 4) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      do {
        lVar10 = uVar8 * 8;
        uVar8 = uVar8 + 4;
        *(undefined8 *)(*(long *)(param_1 + 0x10) + lVar10) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x10) + lVar10 + 8) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x10) + lVar10 + 0x10) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x10) + lVar10 + 0x18) = 0;
      } while (((ulong)uVar3 & 0xfffffffc) != uVar8);
    }
    if ((uVar3 & 3) != 0) {
      lVar10 = uVar8 << 3;
      do {
        uVar9 = uVar9 - 1;
        *(undefined8 *)(*(long *)(param_1 + 0x10) + lVar10) = 0;
        lVar10 = lVar10 + 8;
      } while (uVar9 != 0);
    }
  }
  uVar3 = *(uint *)(param_1 + 0x18);
  if (0 < (int)uVar3) {
    uVar9 = (ulong)uVar3 & 3;
    if (uVar3 < 4) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      do {
        *(undefined1 *)(*(long *)(param_1 + 0x20) + uVar8) = 0xff;
        *(undefined1 *)(*(long *)(param_1 + 0x20) + uVar8 + 1) = 0xff;
        *(undefined1 *)(*(long *)(param_1 + 0x20) + uVar8 + 2) = 0xff;
        lVar10 = *(long *)(param_1 + 0x20) + uVar8;
        uVar8 = uVar8 + 4;
        *(undefined1 *)(lVar10 + 3) = 0xff;
      } while (((ulong)uVar3 & 0xfffffffc) != uVar8);
    }
    if ((uVar3 & 3) != 0) {
      do {
        uVar9 = uVar9 - 1;
        *(undefined1 *)(*(long *)(param_1 + 0x20) + uVar8) = 0xff;
        uVar8 = uVar8 + 1;
      } while (uVar9 != 0);
    }
  }
  *(long *)(param_1 + 0x28) = param_2[1];
  *(long *)(param_1 + 0x3f0) = param_2[2];
  lVar10 = param_2[3];
  *(long *)(param_1 + 0x3f8) = lVar10;
  if (lVar10 != 0) {
    *(long *)(lVar10 + 8) = param_1;
  }
  *(long *)(param_1 + 0x400) = param_2[4];
  lVar10 = *(long *)PTR_DAT_04bd1d68;
  if (param_2[7] != 0) {
    lVar10 = param_2[7];
  }
  *(long *)(param_1 + 0x418) = lVar10;
  lVar10 = *(long *)PTR_DAT_04bd1d58;
  if (param_2[8] != 0) {
    lVar10 = param_2[8];
  }
  *(long *)(param_1 + 0x420) = lVar10;
  *(undefined1 *)(param_1 + 0x430) = *(undefined1 *)((long)param_2 + 0x34);
  if (param_2[5] != 0) {
    FUN_03b1307c(param_1 + 0x410,*param_2,param_2[5],(int)param_2[6]);
  }
  puVar2 = PTR_DAT_04bbd7c0;
  pcVar7 = *(code **)(*(long *)PTR_DAT_04bbd7c0 + 0x20);
  if (pcVar7 == (code *)0x0) {
    nn::os::LockMutex((MutexType *)(*(long *)(*(long *)PTR_DAT_04bbd7c0 + 0x28) + 0x28));
  }
  else {
    (*pcVar7)(1);
  }
  FUN_00365690(*(undefined4 *)((long)param_2 + 0x4c),param_1 + 0x30,
               *(undefined8 *)(*(long *)puVar2 + 0x48),(int)param_2[9],0,0,0,0);
  FUN_00367050(param_1 + 0x30,PTR_LAB_04bd1e20,0);
  lVar10 = *(long *)puVar1;
  if (lVar10 == 0) {
    pvVar6 = malloc(0x1d0);
  }
  else {
    plVar4 = (long *)*param_2;
    if (plVar4 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar4 = (long *)(lVar10 + 8);
      if (lVar5 != 0) {
        plVar4 = (long *)(lVar5 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        pvVar6 = (void *)0x0;
        goto LAB_03b1f184;
      }
    }
    pvVar6 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x1d0,8);
  }
LAB_03b1f184:
  FUN_003490b4(pvVar6);
  *(undefined4 *)((long)pvVar6 + 0x120) = 0;
  *(undefined8 *)((long)pvVar6 + 0x138) = 0;
  *(undefined8 *)((long)pvVar6 + 0x140) = 1;
  *(undefined8 *)((long)pvVar6 + 0x148) = 0xffffffff00000000;
  *(undefined4 *)((long)pvVar6 + 0x150) = 0;
  *(undefined8 *)((long)pvVar6 + 0x158) = 0;
  *(undefined4 *)((long)pvVar6 + 0x170) = 0;
  *(undefined8 *)((long)pvVar6 + 0x198) = 0xffffffff00000000;
  *(undefined4 *)((long)pvVar6 + 0x1a0) = 0;
  *(undefined8 *)((long)pvVar6 + 0x1a8) = 0;
  *(undefined8 *)((long)pvVar6 + 0x1c0) = 0;
  *(undefined8 *)((long)pvVar6 + 0x188) = 0;
  *(undefined8 *)((long)pvVar6 + 400) = 1;
  *(undefined4 *)((long)pvVar6 + 0x1c7) = 0;
  *(undefined8 *)((long)pvVar6 + 0x128) = 0;
  *(undefined8 *)((long)pvVar6 + 0x130) = 0;
  *(undefined8 *)((long)pvVar6 + 0x178) = 0;
  *(undefined8 *)((long)pvVar6 + 0x180) = 0;
  *(void **)(param_1 + 0x438) = pvVar6;
  FUN_03b1f234(pvVar6,*param_2,param_2 + 10);
  lVar10 = *(long *)puVar2;
  pcVar7 = *(code **)(lVar10 + 0x20);
  if (pcVar7 == (code *)0x0) {
    nn::os::UnlockMutex((MutexType *)(*(long *)(lVar10 + 0x28) + 0x28));
  }
  else {
    (*pcVar7)(0);
  }
  FUN_00367a40(0,0,0);
  return;
}

