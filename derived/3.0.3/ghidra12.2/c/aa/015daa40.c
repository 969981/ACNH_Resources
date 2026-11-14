
undefined8 FUN_015daa40(undefined1 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  void *pvVar8;
  long lVar9;
  long lVar10;
  size_t sVar11;
  
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x24) = 2;
  param_1[0x10] = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x9a0) = 0;
  *(undefined4 *)(param_1 + 0x9d0) = 0;
  *(undefined8 *)(param_1 + 0x370) = 0x10;
  *(undefined8 *)(param_1 + 0x9a8) = 0x8000;
  param_1[0x13] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  param_1[0x9d4] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x9b0),false,0);
  *(undefined4 *)(param_1 + 0x480) = 0x8000;
  puVar3 = PTR_DAT_04bb3350;
  puVar2 = PTR_DAT_04bb2698;
  lVar10 = *(long *)PTR_DAT_04bb2698;
  if (lVar10 == 0) {
    pvVar8 = malloc(0x8000);
    *(void **)(param_1 + 0x478) = pvVar8;
    sVar11 = *(long *)(param_1 + 0x30) + 0x1000;
LAB_015dab44:
    pvVar8 = malloc(sVar11);
  }
  else {
    plVar6 = param_2;
    if (param_2 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar6 = (long *)(lVar10 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 != (long *)0x0) goto LAB_015daafc;
      *(undefined8 *)(param_1 + 0x478) = 0;
      sVar11 = *(long *)(param_1 + 0x30) + 0x1000;
      lVar10 = *(long *)puVar2;
      if (lVar10 == 0) goto LAB_015dab44;
LAB_015dab64:
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
      plVar6 = (long *)(lVar10 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      pvVar8 = (void *)0x0;
      if (plVar6 == (long *)0x0) goto LAB_015dab9c;
    }
    else {
LAB_015daafc:
      uVar7 = (**(code **)(*plVar6 + 0x30))(plVar6,0x8000,8);
      *(undefined8 *)(param_1 + 0x478) = uVar7;
      sVar11 = *(long *)(param_1 + 0x30) + 0x1000;
      lVar10 = *(long *)puVar2;
      if (lVar10 == 0) goto LAB_015dab44;
      if (param_2 == (long *)0x0) goto LAB_015dab64;
      plVar6 = param_2;
    }
    pvVar8 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,sVar11,8);
  }
LAB_015dab9c:
  *(void **)(param_1 + 0x38) = pvVar8;
  iVar4 = nn::os::CreateThread
                    ((ThreadType *)(param_1 + 0x40),(_func_void_void_ptr *)&LAB_015dad10,param_1,
                     (void *)((long)pvVar8 + 0xfffU & 0xfffffffffffff000),*(ulong *)(param_1 + 0x30)
                     ,0x14,2);
  param_1[0x11] = 1;
  if (iVar4 == 0) {
    nn::os::SetThreadName((ThreadType *)(param_1 + 0x40),"Movie:AudioRender");
    uVar7 = 0;
  }
  else {
    uVar7 = 0x1000;
  }
  lVar10 = 0;
  do {
    sVar11 = *(size_t *)(param_1 + 0x9a8);
    lVar5 = *(long *)puVar2;
    if (lVar5 == 0) {
      pvVar8 = malloc(sVar11);
    }
    else {
      plVar6 = param_2;
      if (param_2 == (long *)0x0) {
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
        plVar6 = (long *)(lVar5 + 8);
        if (lVar9 != 0) {
          plVar6 = (long *)(lVar9 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          pvVar8 = (void *)0x0;
          goto LAB_015dac14;
        }
      }
      pvVar8 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,sVar11,0x1000);
    }
LAB_015dac14:
    *(void **)(param_1 + lVar10 + 0x378) = pvVar8;
    memset(pvVar8,0,*(size_t *)(param_1 + 0x9a8));
    lVar10 = lVar10 + 8;
    if (lVar10 == 0x100) {
      lVar10 = *(long *)puVar2;
      if (lVar10 == 0) {
        pvVar8 = malloc(0x300);
      }
      else {
        if (param_2 == (long *)0x0) {
          lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
          puVar1 = (undefined8 *)(lVar10 + 8);
          if (lVar5 != 0) {
            puVar1 = (undefined8 *)(lVar5 + 0xa8);
          }
          param_2 = (long *)*puVar1;
          if (param_2 == (long *)0x0) {
            return uVar7;
          }
        }
        pvVar8 = (void *)(**(code **)(*param_2 + 0x30))(param_2,0x300,8);
      }
      if (pvVar8 != (void *)0x0) {
        *(void **)(param_1 + 0x988) = pvVar8;
        *(undefined4 *)(param_1 + 0x998) = 0;
        *(undefined8 *)(param_1 + 0x990) = 0x20;
      }
      return uVar7;
    }
  } while( true );
}

