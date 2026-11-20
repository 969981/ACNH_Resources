
long * FUN_03f2a10c(uint param_1,long *param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_04bb2698;
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if ((param_3 & 1) == 0) {
    if (lVar6 == 0) {
      plVar4 = malloc(0x38);
    }
    else {
      plVar4 = param_2;
      if (param_2 == (long *)0x0) {
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar4 = (long *)(lVar6 + 8);
        if (lVar3 != 0) {
          plVar4 = (long *)(lVar3 + 0xa8);
        }
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) {
          plVar4 = (long *)0x0;
          goto LAB_03f2a1f8;
        }
      }
      plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x38,8);
    }
  }
  else {
    if (lVar6 == 0) {
      plVar4 = malloc(0x38);
    }
    else {
      plVar4 = param_2;
      if (param_2 == (long *)0x0) {
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar4 = (long *)(lVar6 + 8);
        if (lVar3 != 0) {
          plVar4 = (long *)(lVar3 + 0xa8);
        }
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) {
          return (long *)0x0;
        }
      }
      plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x38,8);
    }
    if (plVar4 == (long *)0x0) {
      return (long *)0x0;
    }
  }
LAB_03f2a1f8:
  *plVar4 = (long)&PTR_LAB_04ba8840;
  nn::prepo::Struct::Struct((Struct *)(plVar4 + 1));
  *(undefined4 *)(plVar4 + 5) = 0;
  plVar4[6] = 0;
  if (0 < (int)param_1) {
    lVar6 = *(long *)puVar2;
    if (lVar6 == 0) {
      pvVar5 = malloc((ulong)param_1);
    }
    else {
      if (param_2 == (long *)0x0) {
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar1 = (undefined8 *)(lVar6 + 8);
        if (lVar3 != 0) {
          puVar1 = (undefined8 *)(lVar3 + 0xa8);
        }
        param_2 = (long *)*puVar1;
        if (param_2 == (long *)0x0) goto LAB_03f2a2a0;
      }
      pvVar5 = (void *)(**(code **)(*param_2 + 0x30))(param_2,(ulong)param_1,8);
    }
    if (pvVar5 != (void *)0x0) {
      *(uint *)(plVar4 + 5) = param_1;
      plVar4[6] = (long)pvVar5;
      nn::prepo::Struct::SetBuffer(plVar4 + 1,(ulong)pvVar5);
      return plVar4;
    }
  }
LAB_03f2a2a0:
  (**(code **)(*plVar4 + 8))(plVar4);
  return (long *)0x0;
}

