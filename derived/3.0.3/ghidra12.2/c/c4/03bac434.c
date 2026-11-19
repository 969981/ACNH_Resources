
void FUN_03bac434(long param_1,undefined4 param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    plVar3 = malloc(0x68);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_3 = (long *)(lVar4 + 8);
      if (lVar2 != 0) {
        param_3 = (long *)(lVar2 + 0xa8);
      }
      param_3 = (long *)*param_3;
      if (param_3 == (long *)0x0) {
        plVar3 = (long *)0x0;
        goto LAB_03bac4b4;
      }
    }
    plVar3 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x68,8);
  }
LAB_03bac4b4:
  puVar1 = PTR_DAT_04bd2260;
  *(undefined4 *)(plVar3 + 1) = param_2;
  plVar3[3] = (long)(plVar3 + 2);
  plVar3[4] = -0x100000000;
  plVar3[2] = (long)(plVar3 + 2);
  *plVar3 = (long)(puVar1 + 0x10);
  FUN_038e18e4(plVar3 + 5);
  *(undefined4 *)((long)plVar3 + 0x24) = 8;
  *(long **)(param_1 + 0x28) = plVar3;
  return;
}

