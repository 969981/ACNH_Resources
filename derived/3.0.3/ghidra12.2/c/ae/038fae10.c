
void FUN_038fae10(undefined8 param_1,uint *param_2,long *param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  void *__dest;
  void *pvVar4;
  long *plVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_04bb2698;
  uVar1 = param_2[0x10];
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    __dest = malloc((ulong)uVar1);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_3 = (long *)(lVar6 + 8);
      if (lVar3 != 0) {
        param_3 = (long *)(lVar3 + 0xa8);
      }
      param_3 = (long *)*param_3;
      if (param_3 == (long *)0x0) {
        __dest = (void *)0x0;
        goto LAB_038fae90;
      }
    }
    __dest = (void *)(**(code **)(*param_3 + 0x30))(param_3,(ulong)uVar1,8);
  }
LAB_038fae90:
  uVar1 = *param_2;
  lVar6 = 0;
  if (*(long *)(param_2 + 2) != 0) {
    lVar6 = (*DAT_04c61fd0)();
  }
  pvVar4 = memcpy(__dest,(void *)(lVar6 + (ulong)uVar1),(ulong)param_2[0x10]);
  FUN_038faf2c(pvVar4,param_2,__dest,0);
  if (__dest != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(__dest);
      return;
    }
    plVar5 = (long *)FUN_038cb610(*(long *)puVar2,__dest);
    if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x038faefc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x38))(plVar5,__dest);
      return;
    }
  }
  return;
}

