
undefined8 * FUN_0224ac60(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if (DAT_05465168 != (undefined8 *)0x0) {
    return DAT_05465168;
  }
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    puVar3 = malloc(0x850);
  }
  else {
    plVar2 = param_1;
    if (param_1 == (long *)0x0) {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar2 = (long *)(lVar6 + 8);
      if (lVar1 != 0) {
        plVar2 = (long *)(lVar1 + 0xa8);
      }
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) {
        puVar3 = (undefined8 *)0x0;
        goto LAB_0224ace8;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x850,8);
  }
LAB_0224ace8:
  FUN_038c69f0(puVar3 + 0x106,param_1,3);
  *(undefined4 *)(puVar3 + 1) = 0;
  DAT_05465160 = puVar3 + 0x106;
  puVar3[0x106] = &PTR_FUN_04a79a60;
  *puVar3 = &PTR_LAB_04a79a80;
  FUN_0224ad8c(puVar3 + 2);
  if (0 < *(int *)(puVar3 + 2)) {
    lVar6 = 0;
    puVar4 = (undefined8 *)puVar3[4];
    do {
      puVar5 = *(undefined8 **)(puVar3[3] + lVar6 * 8);
      lVar6 = lVar6 + 1;
      *puVar5 = puVar4;
      puVar3[4] = puVar5;
      puVar4 = puVar5;
    } while (lVar6 < *(int *)(puVar3 + 2));
  }
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)(puVar3 + 1) = 0;
  DAT_05465168 = puVar3;
  return puVar3;
}

