
void * FUN_03ea51f0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  int iVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    pvVar4 = malloc(0x80);
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar3 = (long *)(lVar6 + 8);
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0xa8);
    }
    plVar3 = (long *)*plVar3;
    if (plVar3 == (long *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar4 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,0x80,8);
    }
  }
  lVar6 = *param_1;
  if (*(int *)(lVar6 + 0x98) == 0) {
    iVar5 = 0;
  }
  else {
    lVar2 = *(long *)(lVar6 + 0x88);
    if (*(int *)(lVar6 + 0x98) < 1) {
      lVar2 = 0;
    }
    lVar1 = 0;
    if (lVar2 != 0) {
      lVar1 = lVar2 - *(int *)(lVar6 + 0x9c);
    }
    iVar5 = *(int *)(lVar1 + 0x18) + 1;
  }
  FUN_03ea8da4(pvVar4,iVar5,param_2,param_3);
  return pvVar4;
}

