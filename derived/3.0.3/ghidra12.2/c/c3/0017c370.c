
void FUN_0017c370(undefined8 *param_1,int *param_2,ulong *param_3,char *param_4)

{
  int iVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  *param_2 = 0;
  *param_1 = 0;
  local_38 = 0;
  iVar1 = nn::fs::OpenFile((FileHandle *)&local_38,param_4,1);
  *param_2 = iVar1;
  if (iVar1 == 0) {
    *param_3 = 0;
    iVar1 = nn::fs::GetFileSize(param_3,local_38);
    pvVar2 = (void *)0x0;
    *param_2 = iVar1;
    if (iVar1 == 0) {
      uVar3 = *param_3;
      if ((long)uVar3 < 1) {
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = operator_new__(uVar3);
        *param_1 = pvVar2;
        local_40 = 0;
        iVar1 = nn::fs::ReadFile(&local_40,local_38,0,pvVar2,uVar3);
        *param_2 = iVar1;
      }
    }
    nn::fs::CloseFile(local_38);
    if ((*param_2 != 0) && (*param_1 = 0, pvVar2 != (void *)0x0)) {
      operator_delete__(pvVar2);
    }
  }
  else {
    *param_1 = 0;
  }
  return;
}

