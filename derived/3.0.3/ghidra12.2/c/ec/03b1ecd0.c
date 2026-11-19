
void FUN_03b1ecd0(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04bb2698;
  *param_1 = &PTR_FUN_04b73ea8;
  lVar2 = FUN_038cb610(*(undefined8 *)puVar1,param_1[2]);
  if (lVar2 != 0) {
    FUN_00367a40(PTR_LAB_04bd1da0,PTR_LAB_04bd1d98,lVar2);
    FUN_00367210(param_1 + 6,PTR_LAB_04bd1e28,0);
    FUN_003667a8(param_1 + 6,*(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x48));
    FUN_00367a40(0,0,0);
  }
  if ((long *)param_1[0x82] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x82] + 0x18))();
    param_1[0x82] = 0;
  }
  FUN_00366728(param_1 + 6);
  return;
}

