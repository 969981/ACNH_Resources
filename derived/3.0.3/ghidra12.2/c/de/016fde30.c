
void FUN_016fde30(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  *param_1 = &PTR_LAB_049bca08;
  puVar2 = PTR_DAT_04bb3350;
  lVar6 = *(long *)(param_1[9] + 0x240);
  if (lVar6 == 0) {
    lVar5 = 1;
    plVar4 = (long *)param_1[0x290];
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar5 = *(long *)(lVar3 + 0xa8);
    *(long *)(lVar3 + 0xa8) = lVar6;
    plVar4 = (long *)param_1[0x290];
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  if ((long *)param_1[0x291] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x291] + 0x18))();
  }
  if ((long *)param_1[0x292] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x292] + 0x18))();
  }
  if (lVar5 != 1) {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    *(long *)(lVar6 + 0xa8) = lVar5;
  }
  if ((long *)param_1[0xbde] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xbde] + 0x20))();
    param_1[0xbde] = 0;
  }
  FUN_03f2d448(param_1 + 0xb87);
  FUN_016fdfb0(param_1 + 0x2dc);
  param_1[0x2c4] = &PTR_LAB_04b5e7c8;
  FUN_017396f4(param_1 + 0x289);
  if (0 < *(int *)(param_1 + 0x270)) {
    lVar6 = 0;
    do {
      iVar1 = 0;
      if (*(int *)(param_1 + 0x26f) <= (int)lVar6 + *(int *)((long)param_1 + 0x137c)) {
        iVar1 = *(int *)(param_1 + 0x26f);
      }
      (*(code *)**(undefined8 **)
                  (param_1[0x26e] +
                  ((lVar6 - iVar1) + (long)*(int *)((long)param_1 + 0x137c)) * 0x38))();
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 < *(int *)(param_1 + 0x270));
  }
  *param_1 = &PTR_LAB_04903708;
  FUN_016101cc(param_1 + 0x22c);
  return;
}

