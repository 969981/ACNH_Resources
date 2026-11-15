
void FUN_01fc20e4(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 local_1e8 [2];
  long local_1e0;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_188;
  undefined2 local_180;
  undefined1 local_17e;
  char *local_d0;
  int local_c8;
  
  *(undefined4 *)(param_1 + 0xaf8c) = 0xd;
  iVar1 = FUN_03738270(DAT_05abbc58);
  if (iVar1 != 0) {
    FUN_02085e20(*(undefined8 *)(*(long *)(param_1 + 8) + 0x3c0),0,iVar1,PTR_DAT_04bb6928,0);
  }
  FUN_01e63f1c(local_1e8);
  local_1e8[0] = 0x3f;
  if (local_d0 != "NpcGreeting") {
    iVar1 = 0xb;
    if (local_c8 < 0xc) {
      iVar1 = local_c8 + -1;
    }
    memcpy(local_d0,"NpcGreeting",(long)iVar1);
    local_d0[iVar1] = '\0';
  }
  if (*(int *)(*(long *)(param_1 + 8) + 0x750) == 0) {
    local_1a8 = *(undefined4 *)(param_2 + 1);
    local_188 = 1;
    local_1b0 = *param_2;
  }
  *(undefined8 *)(param_1 + 0x12230) = 0;
  local_17e = 1;
  local_180 = 0x101;
  local_1e0 = param_1 + 0x12218;
  *(long *)(param_1 + 0x12220) = param_1;
  *(undefined1 **)(param_1 + 0x12228) = &LAB_01fc2220;
  FUN_01fb1020(param_1,local_1e8,0x1e);
  return;
}

