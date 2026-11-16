
void * FUN_02645430(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  
  puVar1 = PTR_DAT_04bb2698;
  if (DAT_0555c238 != (void *)0x0) {
    return DAT_0555c238;
  }
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    pvVar4 = malloc(0x330);
  }
  else {
    plVar3 = param_1;
    if (param_1 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar8 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        pvVar4 = (void *)0x0;
        goto LAB_026454bc;
      }
    }
    pvVar4 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,0x330,8);
  }
LAB_026454bc:
  FUN_038c69f0((long)pvVar4 + 0x310,param_1,3);
  *(undefined ***)((long)pvVar4 + 0x310) = &PTR_FUN_04a88360;
  DAT_0555c230 = (long)pvVar4 + 0x310;
  FUN_038e18e4(pvVar4);
  lVar8 = *(long *)puVar1;
  plVar3 = (long *)((long)pvVar4 + 0x40);
  *plVar3 = (long)(PTR_DAT_04bd0d40 + 0x10);
  *(undefined8 *)((long)pvVar4 + 0x50) = 0;
  *(undefined8 *)((long)pvVar4 + 0x58) = 0;
  *(long *)((long)pvVar4 + 0x48) = 0;
  if (lVar8 != 0) {
    lVar8 = FUN_038cb610(lVar8,plVar3);
    *(long *)((long)pvVar4 + 0x48) = lVar8;
    if (lVar8 != 0) {
      if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = lVar8 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
      }
      plVar6 = (long *)(lVar8 + 0x70);
      lVar5 = *plVar6;
      plVar3 = (long *)((long)*(int *)(lVar8 + 0x84) + (long)plVar3);
      *plVar6 = (long)plVar3;
      *plVar3 = lVar5;
      plVar3[1] = (long)plVar6;
      if (lVar5 != 0) {
        *(long **)(lVar5 + 8) = plVar3;
      }
      *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + 1;
      if (lVar2 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar2 + 0x20));
      }
    }
  }
  *(long *)((long)pvVar4 + 0xf0) = (long)pvVar4 + 0x110;
  *(long **)((long)pvVar4 + 0xd0) = (long *)((long)pvVar4 + 0xf0);
  *(long *)((long)pvVar4 + 0xb0) = (long)pvVar4 + 0xd0;
  *(undefined8 *)((long)pvVar4 + 0x70) = 0;
  *(undefined8 *)((long)pvVar4 + 0x78) = 0;
  puVar7 = (undefined8 *)((long)pvVar4 + 0x90);
  *puVar7 = (long *)((long)pvVar4 + 0xb0);
  *(undefined8 *)((long)pvVar4 + 0x270) = 0;
  *(undefined8 **)((long)pvVar4 + 0x80) = puVar7;
  *(undefined8 **)((long)pvVar4 + 0x88) = puVar7;
  *(undefined ***)((long)pvVar4 + 0x40) = &PTR_FUN_04b651b0;
  *(long *)((long)pvVar4 + 0x110) = (long)pvVar4 + 0x130;
  *(long *)((long)pvVar4 + 0x130) = (long)pvVar4 + 0x150;
  *(long *)((long)pvVar4 + 0x150) = (long)pvVar4 + 0x170;
  *(long *)((long)pvVar4 + 0x170) = (long)pvVar4 + 400;
  *(long *)((long)pvVar4 + 400) = (long)pvVar4 + 0x1b0;
  *(long *)((long)pvVar4 + 0x1b0) = (long)pvVar4 + 0x1d0;
  *(long *)((long)pvVar4 + 0x1d0) = (long)pvVar4 + 0x1f0;
  *(long *)((long)pvVar4 + 0x1f0) = (long)pvVar4 + 0x210;
  *(long *)((long)pvVar4 + 0x210) = (long)pvVar4 + 0x230;
  *(long *)((long)pvVar4 + 0x230) = (long)pvVar4 + 0x250;
  *(long *)((long)pvVar4 + 0x250) = (long)pvVar4 + 0x270;
  if ((long)pvVar4 + 0x290 != 0) {
    *(undefined8 *)((long)pvVar4 + 0x70) = 0x1000000000;
    *(long *)((long)pvVar4 + 0x78) = (long)pvVar4 + 0x290;
  }
  DAT_0555c238 = pvVar4;
  return pvVar4;
}

