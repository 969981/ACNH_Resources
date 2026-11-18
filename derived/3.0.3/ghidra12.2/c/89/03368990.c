
int * FUN_03368990(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  int *piVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar1 = PTR_DAT_04bb2698;
  if (DAT_05734ea0 != (int *)0x0) {
    return DAT_05734ea0;
  }
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    piVar4 = malloc(0x30);
  }
  else {
    plVar3 = param_1;
    if (param_1 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar9 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        piVar4 = (int *)0x0;
        goto LAB_03368a1c;
      }
    }
    piVar4 = (int *)(**(code **)(*plVar3 + 0x30))(plVar3,0x30,8);
  }
LAB_03368a1c:
  FUN_038c69f0(piVar4 + 4,param_1,3);
  DAT_05734e98 = piVar4 + 4;
  *piVar4 = 0;
  lVar9 = *(long *)puVar1;
  piVar4[2] = 0;
  piVar4[3] = 0;
  *(undefined ***)(piVar4 + 4) = &PTR_FUN_04b21170;
  if (lVar9 == 0) {
    pvVar5 = malloc(0x3c);
joined_r0x03368aac:
    if (pvVar5 != (void *)0x0) {
      iVar6 = 5;
      *(void **)(piVar4 + 2) = pvVar5;
      *piVar4 = 5;
      goto LAB_03368abc;
    }
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar3 = (long *)(lVar9 + 8);
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0xa8);
    }
    plVar3 = (long *)*plVar3;
    if (plVar3 != (long *)0x0) {
      pvVar5 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,0x3c,8);
      goto joined_r0x03368aac;
    }
  }
  iVar6 = *piVar4;
  if (iVar6 == 0) {
    DAT_05734ea0 = piVar4;
    return piVar4;
  }
  pvVar5 = *(void **)(piVar4 + 2);
LAB_03368abc:
  iVar7 = 0;
  do {
    puVar8 = (undefined8 *)((long)pvVar5 + (long)iVar7 * 0xc);
    iVar7 = iVar7 + 1;
    *(undefined1 *)(puVar8 + 1) = 0;
    *puVar8 = 0;
  } while (iVar6 != iVar7);
  DAT_05734ea0 = piVar4;
  return piVar4;
}

