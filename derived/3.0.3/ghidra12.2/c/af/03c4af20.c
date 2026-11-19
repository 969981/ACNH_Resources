
long * FUN_03c4af20(long *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    plVar3 = malloc(0x198);
  }
  else {
    plVar3 = param_3;
    if (param_3 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar4 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)0x0;
        goto LAB_03c4afa0;
      }
    }
    plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0x198,8);
  }
LAB_03c4afa0:
  FUN_03ba1cd4(plVar3);
  puVar1 = PTR_DAT_04bd21f0 + 0x108;
  *plVar3 = (long)(PTR_DAT_04bd21f0 + 0x10);
  plVar3[10] = (long)puVar1;
  lVar4 = (**(code **)(*param_1 + 0x28))(param_1,param_3,plVar3);
  plVar3[0x12] = lVar4;
  return plVar3;
}

