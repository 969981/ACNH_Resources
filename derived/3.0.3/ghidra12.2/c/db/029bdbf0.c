
undefined8 FUN_029bdbf0(long param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_04bb2698;
  iVar7 = 0;
  *(long *)(param_1 + 0x20) = *param_2;
  plVar1 = (long *)(param_1 + 0x2a8);
  do {
    lVar8 = *(long *)puVar2;
    if (lVar8 == 0) {
      pvVar5 = malloc(0x9600);
joined_r0x029bdd18:
      if (pvVar5 != (void *)0x0) {
        lVar8 = param_1 + 0x4b8 + (long)iVar7 * 0x70;
        *(undefined4 *)(lVar8 + 0x28) = 0x960;
        *(void **)(lVar8 + 0x30) = pvVar5;
      }
    }
    else {
      plVar3 = (long *)*param_2;
      if (plVar3 != (long *)0x0) {
LAB_029bdc94:
        pvVar5 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,0x9600,0x10);
        goto joined_r0x029bdd18;
      }
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar8 + 8);
      if (lVar4 != 0) {
        plVar3 = (long *)(lVar4 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 != (long *)0x0) goto LAB_029bdc94;
    }
    if (*(int *)(param_1 + 0x2b8) < *(int *)(param_1 + 0x2d0)) {
      plVar3 = *(long **)(param_1 + 0x2c0);
      if (plVar3 != (long *)0x0) {
        *(long *)(param_1 + 0x2c0) = *plVar3;
      }
      plVar3[2] = 0;
      plVar6 = plVar3 + 1;
      *plVar6 = 0;
      *plVar3 = param_1 + 0x4b8 + (long)iVar7 * 0x70;
      lVar8 = *plVar1;
      *plVar1 = (long)plVar6;
      plVar3[2] = (long)plVar1;
      *plVar6 = lVar8;
      if (lVar8 != 0) {
        *(long **)(lVar8 + 8) = plVar6;
      }
      *(int *)(param_1 + 0x2b8) = *(int *)(param_1 + 0x2b8) + 1;
    }
    iVar7 = iVar7 + 1;
    if (iVar7 == 0x14) {
      return 1;
    }
  } while( true );
}

