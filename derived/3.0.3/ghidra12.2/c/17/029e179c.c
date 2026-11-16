
undefined8 FUN_029e179c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *local_30;
  char *pcStack_28;
  
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "KKFesSpaceInfoMgr";
  plVar2 = (long *)FUN_038c9744(0,&local_30,*param_2,8,1,0);
  *param_1 = (long)plVar2;
  lVar1 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar4 = malloc(0x28);
  }
  else {
    if (plVar2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar2 = (long *)(lVar1 + 8);
      if (lVar3 != 0) {
        plVar2 = (long *)(lVar3 + 0xa8);
      }
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) goto LAB_029e1874;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x28,8);
  }
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar4 + 3) = 0;
    puVar4[1] = 0xffffffffffffffff;
    *puVar4 = 1;
    *(undefined8 *)((long)puVar4 + 0x1c) = 0xffffffffffffffff;
    puVar4[2] = &PTR_LAB_04a98870;
    *(undefined4 *)(param_1 + 2) = 1;
    param_1[3] = (long)(puVar4 + 1);
  }
LAB_029e1874:
  (**(code **)(*(long *)*param_1 + 0x28))();
  return 1;
}

