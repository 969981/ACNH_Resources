
void * FUN_03ef4e68(undefined8 param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_18;
  
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    pvVar3 = malloc(0x2e8);
  }
  else {
    plVar2 = param_2;
    if (param_2 == (long *)0x0) {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar2 = (long *)(lVar5 + 8);
      if (lVar1 != 0) {
        plVar2 = (long *)(lVar1 + 0xa8);
      }
      plVar2 = (long *)*plVar2;
    }
    pvVar3 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,0x2e8,8);
  }
  FUN_03ef7140();
  FUN_03964240(&local_18,param_1);
  uVar4 = FUN_03ef4f30(pvVar3,local_18,param_2);
  if ((uVar4 & 1) == 0) {
    FUN_03ef6f40(pvVar3);
    pvVar3 = (void *)0x0;
  }
  return pvVar3;
}

