
undefined8 FUN_028403e0(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined *local_120;
  char *pcStack_118;
  undefined4 local_110;
  char local_10c [5];
  char acStack_107 [3];
  char acStack_104 [5];
  undefined1 local_ff;
  undefined1 local_8d;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined *local_70 [4];
  int local_4c;
  
  if (param_2 == 0) {
    return 1;
  }
  iVar2 = *(int *)(param_2 + 0x110);
  iVar1 = FUN_006f6900(param_2 + 0x114,0x37acc,0);
  if ((iVar2 == iVar1) &&
     (iVar2 = *(int *)(param_2 + 0x37be0), iVar1 = FUN_006f6900(param_2 + 0x37be4,0x3ce5c,0),
     iVar2 == iVar1)) {
    return 1;
  }
  FUN_0258b910(local_70);
  local_8d = 0;
  local_110 = 0x80;
  pcStack_118 = local_10c;
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_120 = PTR_DAT_04bb2d88 + 0x10;
  local_ff = 0;
  local_10c[0] = s_SaveHashError_040ffd5f[0];
  local_10c[1] = s_SaveHashError_040ffd5f[1];
  local_10c[2] = s_SaveHashError_040ffd5f[2];
  local_10c[3] = s_SaveHashError_040ffd5f[3];
  local_10c[4] = s_SaveHashError_040ffd5f[4];
  acStack_107[0] = s_SaveHashError_040ffd5f[5];
  acStack_107[1] = s_SaveHashError_040ffd5f[6];
  acStack_107[2] = s_SaveHashError_040ffd5f[7];
  acStack_104[0] = s_SaveHashError_040ffd5f[8];
  acStack_104[1] = s_SaveHashError_040ffd5f[9];
  acStack_104[2] = s_SaveHashError_040ffd5f[10];
  acStack_104[3] = s_SaveHashError_040ffd5f[0xb];
  acStack_104[4] = s_SaveHashError_040ffd5f[0xc];
  FUN_0258bbec(local_70,&local_120);
  local_70[0] = PTR_DAT_04bc3230 + 0x10;
  iVar2 = FUN_0258bfc8(local_70);
  if (iVar2 != -1) {
    iVar2 = (**(code **)(local_70[0] + 0x20))(local_70);
    local_120 = (undefined *)CONCAT44(local_120._4_4_,iVar2);
    if (iVar2 < 0xd) goto LAB_028404fc;
  }
  if (local_4c == 0) {
    local_4c = 1;
  }
LAB_028404fc:
  FUN_02601530(local_70);
  return 0;
}

