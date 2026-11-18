
void FUN_03683080(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  undefined *local_40;
  char *pcStack_38;
  
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "VillageScoreMgr";
  plVar1 = (long *)FUN_038c6d48(0,&local_40,param_2,8,1,0);
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    pvVar4 = malloc(0x28);
  }
  else {
    plVar3 = plVar1;
    if (plVar1 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar5 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      pvVar4 = (void *)0x0;
      if (plVar3 == (long *)0x0) goto LAB_03683134;
    }
    pvVar4 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,0x28,8);
  }
LAB_03683134:
  local_40 = (undefined *)CONCAT44(local_40._4_4_,8);
  *(undefined8 *)((long)pvVar4 + 0x18) = 0;
  *(undefined8 *)((long)pvVar4 + 0x20) = 0;
  *(undefined8 *)((long)pvVar4 + 8) = 0;
  *(undefined8 *)((long)pvVar4 + 0x10) = 0;
  *param_1 = pvVar4;
  FUN_03681a50(pvVar4,&local_40,plVar1);
  (**(code **)(*plVar1 + 0x28))(plVar1);
  return;
}

