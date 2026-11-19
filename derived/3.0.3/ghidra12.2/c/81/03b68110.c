
void FUN_03b68110(long param_1,long *param_2,AudioRendererConfig *param_3,uint param_4)

{
  undefined8 *puVar1;
  size_t __size;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  void *pvVar6;
  ulong __size_00;
  long lVar7;
  
  if (*(char *)(param_1 + 8) != '\0') {
    return;
  }
  FUN_03b683a0(param_1 + 0x10,param_2,param_4);
  puVar2 = PTR_DAT_04bb2698;
  __size_00 = (long)(int)param_4 * 0x240 + 0x177fU & 0xfffffffffffff000;
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    pvVar5 = malloc(__size_00);
  }
  else {
    plVar4 = param_2;
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar7 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        pvVar5 = (void *)0x0;
        goto LAB_03b681c8;
      }
    }
    pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,__size_00,0x1000);
  }
LAB_03b681c8:
  memset(pvVar5,0,__size_00);
  nn::audio::AcquireMemoryPool(param_3,(MemoryPoolType *)(param_1 + 0x88),pvVar5,__size_00);
  nn::audio::RequestAttachMemoryPool((MemoryPoolType *)(param_1 + 0x88));
  *(void **)(param_1 + 0x90) = pvVar5;
  *(void **)(param_1 + 0x80) = pvVar5;
  if (*(char *)(param_1 + 0x48) == '\0') {
    lVar7 = *(long *)puVar2;
    __size = (ulong)param_4 << 1;
    if ((int)param_4 < 0) {
      __size = 0xffffffffffffffff;
    }
    *(uint *)(param_1 + 0x68) = param_4;
    if (lVar7 == 0) {
      pvVar6 = malloc(__size);
    }
    else {
      plVar4 = param_2;
      if (param_2 == (long *)0x0) {
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar4 = (long *)(lVar7 + 8);
        if (lVar3 != 0) {
          plVar4 = (long *)(lVar3 + 0xa8);
        }
        plVar4 = (long *)*plVar4;
        pvVar6 = (void *)0x0;
        if (plVar4 == (long *)0x0) goto LAB_03b68278;
      }
      pvVar6 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,__size,8);
    }
LAB_03b68278:
    *(void **)(param_1 + 0x70) = pvVar6;
    *(undefined4 *)(param_1 + 0x78) = 0;
    if (0 < *(int *)(param_1 + 0x68)) {
      lVar7 = 0;
      do {
        lVar3 = lVar7 + 1;
        *(short *)(*(long *)(param_1 + 0x70) + lVar7 * 2) = (short)lVar3;
        lVar7 = lVar3;
      } while (lVar3 < *(int *)(param_1 + 0x68));
      pvVar6 = *(void **)(param_1 + 0x70);
    }
    *(undefined2 *)((long)pvVar6 + (long)(int)(param_4 - 1) * 2) = 0xffff;
    *(uint *)(param_1 + 0x58) = param_4;
    *(uint *)(param_1 + 0x5c) = param_4;
    *(long *)(param_1 + 0x50) = (long)pvVar5 + 0x780;
    *(undefined2 *)(param_1 + 0x48) = 0x101;
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  if (0 < (int)param_4) {
    lVar7 = *(long *)puVar2;
    if (lVar7 == 0) {
      pvVar5 = malloc((long)(int)(param_4 << 3));
    }
    else {
      if (param_2 == (long *)0x0) {
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar1 = (undefined8 *)(lVar7 + 8);
        if (lVar3 != 0) {
          puVar1 = (undefined8 *)(lVar3 + 0xa8);
        }
        param_2 = (long *)*puVar1;
        if (param_2 == (long *)0x0) goto LAB_03b6835c;
      }
      pvVar5 = (void *)(**(code **)(*param_2 + 0x30))(param_2,(long)(int)(param_4 << 3),8);
    }
    if (pvVar5 != (void *)0x0) {
      *(void **)(param_1 + 0x3f8) = pvVar5;
      *(undefined4 *)(param_1 + 0x3f0) = 0;
      *(uint *)(param_1 + 0x3f4) = param_4;
    }
  }
LAB_03b6835c:
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}

