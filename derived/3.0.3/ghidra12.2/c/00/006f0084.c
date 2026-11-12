
undefined * FUN_006f0084(undefined8 *param_1,void *param_2,ulong param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  undefined *local_50;
  char *pcStack_48;
  
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "RunLengthEncoder";
  plVar1 = (long *)FUN_038c9744(0x4b000,&local_50,param_4,8,1,0);
  plVar3 = plVar1;
  if (plVar1 == (long *)0x0) {
    lVar6 = *(long *)PTR_DAT_04bb2698;
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar3 = (long *)(lVar6 + 8);
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0xa8);
    }
    plVar3 = (long *)*plVar3;
  }
  pvVar4 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,0x41740,8);
  local_50 = (undefined *)0x0;
  uVar5 = nn::util::CompressZlib
                    ((ulong *)&local_50,param_2,param_3,(void *)*param_1,param_1[1],pvVar4,0x41740,8
                     ,6);
  if ((uVar5 & 1) == 0) {
    local_50 = (undefined *)0x0;
  }
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return local_50;
}

