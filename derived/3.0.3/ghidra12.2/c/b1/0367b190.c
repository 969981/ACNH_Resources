
void FUN_0367b190(long param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  void *__ptr;
  
  puVar4 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb2698;
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    plVar6 = malloc(200);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      param_2 = (long *)(lVar7 + 8);
      if (lVar5 != 0) {
        param_2 = (long *)(lVar5 + 0xa8);
      }
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) {
        plVar6 = (long *)0x0;
        goto LAB_0367b214;
      }
    }
    plVar6 = (long *)(**(code **)(*param_2 + 0x30))(param_2,200,8);
  }
LAB_0367b214:
  puVar1 = PTR_DAT_04bcaa98 + 0x10;
  plVar6[2] = 0;
  plVar6[3] = 0;
  *plVar6 = (long)puVar1;
  plVar6[1] = 0;
  lVar5 = *(long *)puVar3;
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
  plVar2 = (long *)(lVar5 + 8);
  if (lVar7 != 0) {
    plVar2 = (long *)(lVar7 + 0xa8);
  }
  lVar7 = *plVar2;
  plVar6[9] = 0;
  plVar6[10] = 0x6400000000;
  *(undefined4 *)((long)plVar6 + 0x5c) = 2;
  *(undefined1 *)(plVar6 + 0xb) = 0;
  *(undefined8 *)((long)plVar6 + 0x6c) = 0xffffffff00000000;
  plVar6[4] = 0;
  *(undefined4 *)((long)plVar6 + 0x7c) = 0xf0000000;
  *(undefined8 *)((long)plVar6 + 0x74) = 0;
  plVar6[5] = lVar7;
  plVar6[6] = 0;
  *(undefined2 *)(plVar6 + 0xc) = 0x900;
  *(undefined8 *)((long)plVar6 + 100) = 0xffffffff;
  plVar6[7] = 0;
  plVar6[8] = 0;
  plVar6[0x10] = 0;
  plVar6[0x11] = -0x1000000000000000;
  puVar4 = PTR_DAT_04bcaaa0;
  *(undefined4 *)(plVar6 + 0x16) = 0;
  *(undefined4 *)(plVar6 + 0x17) = 0;
  *(undefined1 *)((long)plVar6 + 0xbc) = 0;
  *(undefined2 *)(plVar6 + 0x18) = 0;
  *(undefined1 *)((long)plVar6 + 0xc2) = 0;
  plVar6[0x12] = 0xffffffff;
  plVar6[0x13] = 0;
  plVar6[0x14] = (long)(puVar4 + 0x10);
  plVar6[0x15] = 0x3c00000000;
  __ptr = *(void **)(param_1 + 0xa0);
  *(long **)(param_1 + 0xa0) = plVar6;
  if (__ptr != (void *)0x0) {
    FUN_0367a3b4(__ptr);
    lVar7 = *(long *)puVar3;
    if (lVar7 == 0) {
      free(__ptr);
      return;
    }
    plVar6 = (long *)FUN_038cb610(lVar7,__ptr);
    if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0367b308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x38))(plVar6,__ptr);
      return;
    }
  }
  return;
}

