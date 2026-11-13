
void FUN_01144f24(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR_DAT_04bb2698;
  if (lVar3 == 0) {
    plVar2 = malloc(0xb0);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_2 = (long *)(lVar3 + 8);
      if (lVar1 != 0) {
        param_2 = (long *)(lVar1 + 0xa8);
      }
      param_2 = (long *)*param_2;
    }
    plVar2 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0xb0,8);
  }
  *plVar2 = (long)(PTR_DAT_04bbb810 + 0x10);
  plVar2[1] = *param_1;
  lVar3 = param_1[1];
  plVar2[3] = 0;
  plVar2[4] = 0x1000000000;
  plVar2[5] = (long)(plVar2 + 6);
  *(int *)(plVar2 + 2) = (int)lVar3;
  *plVar2 = (long)&PTR_LAB_04970f68;
  return;
}

