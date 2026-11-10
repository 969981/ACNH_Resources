
void FUN_0029582c(undefined8 param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  int *piVar2;
  long lVar3;
  int local_54;
  ErrorResultVariant aEStack_50 [12];
  int local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  
  if (param_3 == 0) {
    local_44 = 0x10c07;
LAB_00295868:
    local_54 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_54);
  }
  else {
    if ((int)param_2[0x12] != 0) {
      local_44 = 0x10c08;
      goto LAB_00295868;
    }
    (**(code **)(*param_2 + 0x70))(&local_44,param_2);
    puVar1 = PTR_DAT_04bcb8b8;
    if (local_44 == 0) {
      *(undefined1 *)((long)param_2 + 0xf4) = 1;
      local_54 = 0;
      local_34 = 0;
      lVar3 = *(long *)(*(long *)puVar1 + 0xf0);
      *(undefined1 *)((long)param_2 + 0xf6) = 0;
      *(undefined4 *)(param_2 + 0x12) = 9;
      *(undefined2 *)((long)param_2 + 0xfa) = 0;
      param_2[0x14] = lVar3;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_34);
      FUN_00229780(param_2 + 0x20,&local_54);
      param_2[0xb] = param_3;
      FUN_00220f78(param_3);
      lVar3 = *(long *)(*(long *)PTR_DAT_04bcb8c0 + 0x30);
      *(undefined1 *)(param_2 + 0x26) = 0;
      *(undefined1 *)((long)param_2 + 0xfc) = 1;
      param_2[0x24] = lVar3;
      (**(code **)(*param_2 + 0x10))(param_2,1);
      local_54 = 0;
      local_34 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_34);
      piVar2 = &local_54;
      goto LAB_00295884;
    }
  }
  piVar2 = &local_44;
LAB_00295884:
  FUN_002296c4(param_1,piVar2);
  return;
}

