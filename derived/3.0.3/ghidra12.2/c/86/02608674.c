
void FUN_02608674(long param_1,int *param_2)

{
  int iVar1;
  int local_80;
  int iStack_7c;
  long local_78;
  undefined2 local_70;
  undefined4 local_6c;
  undefined2 local_68;
  undefined **local_60 [4];
  int local_3c;
  long *local_38;
  
  FUN_02608760(param_1,*param_2);
  FUN_025c8fe0(local_60);
  local_78 = param_1 + 8;
  local_70 = *(undefined2 *)(param_1 + 0x8a);
  local_80 = *param_2;
  iStack_7c = param_2[1];
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = (undefined2)param_2[2];
  FUN_025c92e0(local_60,&local_80);
  local_60[0] = &PTR_FUN_04a86110;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 8))();
  }
  iVar1 = (*(code *)local_60[0][4])(local_60);
  if (iVar1 != -1) {
    local_80 = (*(code *)local_60[0][4])(local_60);
    if (local_80 < 0xd) goto LAB_0260873c;
  }
  if (local_3c == 0) {
    local_3c = 1;
  }
LAB_0260873c:
  FUN_02601530(local_60);
  return;
}

