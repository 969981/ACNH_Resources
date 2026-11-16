
undefined8 FUN_02840954(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined *local_110;
  char *pcStack_108;
  undefined4 local_100;
  char local_fc [5];
  char acStack_f7 [3];
  char acStack_f4 [5];
  undefined1 local_ef;
  undefined1 local_7d;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined *local_60 [4];
  int local_3c;
  
  if (param_2 == 0) {
    return 1;
  }
  iVar2 = *(int *)(param_2 + 0x100);
  iVar1 = FUN_006f6900(param_2 + 0x104,0xb8a3dc,0);
  if (iVar2 == iVar1) {
    return 1;
  }
  FUN_0258b910(local_60);
  local_7d = 0;
  local_100 = 0x80;
  pcStack_108 = local_fc;
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_110 = PTR_DAT_04bb2d88 + 0x10;
  local_ef = 0;
  local_fc[0] = s_SaveHashError_040ffd5f[0];
  local_fc[1] = s_SaveHashError_040ffd5f[1];
  local_fc[2] = s_SaveHashError_040ffd5f[2];
  local_fc[3] = s_SaveHashError_040ffd5f[3];
  local_fc[4] = s_SaveHashError_040ffd5f[4];
  acStack_f7[0] = s_SaveHashError_040ffd5f[5];
  acStack_f7[1] = s_SaveHashError_040ffd5f[6];
  acStack_f7[2] = s_SaveHashError_040ffd5f[7];
  acStack_f4[0] = s_SaveHashError_040ffd5f[8];
  acStack_f4[1] = s_SaveHashError_040ffd5f[9];
  acStack_f4[2] = s_SaveHashError_040ffd5f[10];
  acStack_f4[3] = s_SaveHashError_040ffd5f[0xb];
  acStack_f4[4] = s_SaveHashError_040ffd5f[0xc];
  FUN_0258bbec(local_60,&local_110);
  local_60[0] = PTR_DAT_04bc3230 + 0x10;
  iVar2 = FUN_0258bfc8(local_60);
  if (iVar2 != -1) {
    iVar2 = (**(code **)(local_60[0] + 0x20))(local_60);
    local_110 = (undefined *)CONCAT44(local_110._4_4_,iVar2);
    if (iVar2 < 0xd) goto LAB_02840a44;
  }
  if (local_3c == 0) {
    local_3c = 1;
  }
LAB_02840a44:
  FUN_02601530(local_60);
  return 0;
}

