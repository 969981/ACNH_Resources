
void FUN_0390d714(long param_1,int param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  size_t __size;
  long lVar7;
  
  puVar3 = PTR_DAT_04bb2698;
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    pvVar6 = malloc(0x10);
  }
  else {
    plVar5 = param_3;
    if (param_3 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar7 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      pvVar6 = (void *)0x0;
      if (plVar5 == (long *)0x0) goto LAB_0390d798;
    }
    pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x10,8);
  }
LAB_0390d798:
  lVar7 = *(long *)puVar3;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (long)param_2;
  *(void **)(param_1 + 8) = pvVar6;
  __size = ((long)param_2 + (long)param_2 * 2) * 4;
  if (SUB168(auVar2 * ZEXT816(0xc),8) != 0) {
    __size = 0xffffffffffffffff;
  }
  if (lVar7 == 0) {
    pvVar6 = malloc(__size);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar1 = (undefined8 *)(lVar7 + 8);
      if (lVar4 != 0) {
        puVar1 = (undefined8 *)(lVar4 + 0xa8);
      }
      param_3 = (long *)*puVar1;
      if (param_3 == (long *)0x0) {
        pvVar6 = (void *)0x0;
        goto LAB_0390d81c;
      }
    }
    pvVar6 = (void *)(**(code **)(*param_3 + 0x30))(param_3,__size,8);
  }
LAB_0390d81c:
  **(undefined8 **)(param_1 + 8) = pvVar6;
  *(short *)(*(long *)(param_1 + 8) + 8) = (short)param_2;
  *(undefined2 *)(*(long *)(param_1 + 8) + 10) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) | 1;
  return;
}

