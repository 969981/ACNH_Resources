
void FUN_038ba9d0(long *param_1,long *param_2,undefined8 param_3,int *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  undefined8 local_68;
  char *local_60;
  undefined8 local_58;
  long *plStack_50;
  long *local_48;
  
  (**(code **)(*param_1 + 0x50))();
  local_68 = PTR_DAT_04bb2020 + 0x10;
  local_60 = "sead::MethodTreeMgr";
  plVar1 = (long *)FUN_038c6d48(0,&local_68,param_2,8,1,0);
  lVar2 = (**(code **)(*param_1 + 0x68))(param_1,plVar1);
  param_1[8] = lVar2;
  (**(code **)(*plVar1 + 0x28))(plVar1);
  param_1[9] = (long)plVar1;
  local_68 = (undefined *)0x1000000000020;
  local_60 = (char *)CONCAT44(local_60._4_4_,0xffffffff);
  if (*param_4 != 0) {
    local_68 = (undefined *)CONCAT44(*param_4,0x20);
  }
  if (param_4[1] != -1) {
    local_60 = (char *)CONCAT44(local_60._4_4_,param_4[1]);
  }
  lVar2 = *(long *)PTR_DAT_04bb2698;
  local_58 = param_3;
  plStack_50 = param_2;
  local_48 = param_1;
  if (lVar2 == 0) {
    pvVar4 = malloc(0x2a0);
  }
  else {
    plVar1 = param_2;
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar1 = (long *)(lVar2 + 8);
      if (lVar3 != 0) {
        plVar1 = (long *)(lVar3 + 0xa8);
      }
      plVar1 = (long *)*plVar1;
    }
    pvVar4 = (void *)(**(code **)(*plVar1 + 0x30))(plVar1,0x2a0,8);
  }
  FUN_038bd890(pvVar4,&local_68);
  param_1[7] = (long)pvVar4;
  (**(code **)(*param_1 + 0x60))(param_1);
  (**(code **)(*param_1 + 0x58))(param_1,param_2);
  return;
}

