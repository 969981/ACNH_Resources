
void FUN_03ecebd0(long param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_04bb2698;
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    pvVar4 = malloc(0x1800);
    if (pvVar4 != (void *)0x0) goto LAB_03eced20;
LAB_03ecec44:
    lVar5 = *(long *)puVar1;
    if (lVar5 != 0) goto LAB_03ecec4c;
LAB_03eced54:
    pvVar4 = malloc(0xa00);
  }
  else {
    plVar2 = (long *)*param_2;
    if (plVar2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar2 = (long *)(lVar5 + 8);
      if (lVar3 != 0) {
        plVar2 = (long *)(lVar3 + 0xa8);
      }
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) goto LAB_03ecec44;
    }
    pvVar4 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,0x1800,8);
    if (pvVar4 == (void *)0x0) goto LAB_03ecec44;
LAB_03eced20:
    lVar5 = -0x1800;
    do {
      lVar3 = lVar5 + 0xc0;
      *(undefined2 *)((long)pvVar4 + lVar5 + 0x1824) = 0;
      *(undefined2 *)((long)pvVar4 + lVar5 + 0x1854) = 0;
      *(undefined2 *)((long)pvVar4 + lVar5 + 0x1884) = 0;
      *(undefined2 *)((long)pvVar4 + lVar5 + 0x18b4) = 0;
      lVar5 = lVar3;
    } while (lVar3 != 0);
    *(void **)(param_1 + 0x10) = pvVar4;
    *(undefined4 *)(param_1 + 8) = 0x80;
    lVar5 = *(long *)puVar1;
    if (lVar5 == 0) goto LAB_03eced54;
LAB_03ecec4c:
    plVar2 = (long *)*param_2;
    if (plVar2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar2 = (long *)(lVar5 + 8);
      if (lVar3 != 0) {
        plVar2 = (long *)(lVar3 + 0xa8);
      }
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) goto LAB_03ececa4;
    }
    pvVar4 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,0xa00,8);
  }
  if (pvVar4 != (void *)0x0) {
    *(void **)(param_1 + 0x28) = pvVar4;
    *(undefined4 *)(param_1 + 0x20) = 0x40;
  }
LAB_03ececa4:
  lVar5 = *(long *)puVar1;
  if (lVar5 == 0) {
    pvVar4 = malloc(0xa00);
  }
  else {
    param_2 = (long *)*param_2;
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_2 = (long *)(lVar5 + 8);
      if (lVar3 != 0) {
        param_2 = (long *)(lVar3 + 0xa8);
      }
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) {
        return;
      }
    }
    pvVar4 = (void *)(**(code **)(*param_2 + 0x30))(param_2,0xa00,8);
  }
  if (pvVar4 != (void *)0x0) {
    *(void **)(param_1 + 0x40) = pvVar4;
    *(undefined4 *)(param_1 + 0x38) = 0x40;
  }
  return;
}

