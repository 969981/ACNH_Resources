
void FUN_0248628c(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auStack_120 [8];
  char *local_118;
  int local_110;
  char *local_c0;
  int local_b8;
  undefined1 local_58;
  undefined4 local_54;
  undefined4 local_48;
  
  FUN_023164ec(param_1,6);
  if (*(int *)(param_1 + 0x178) == 0) {
    if ((*(uint *)(param_1 + 0x1da8) & 0xfffffffd) == 4) {
      puVar2 = *(undefined8 **)(param_1 + 0x1dc0);
      *(undefined4 *)(param_1 + 0x1da8) = 0;
      *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xfffffffd;
      if (puVar2 != &DAT_0407ebb1) {
        iVar1 = 0;
        if (*(int *)(param_1 + 0x1dc8) < 1) {
          iVar1 = *(int *)(param_1 + 0x1dc8) + -1;
        }
        memset(puVar2,0,(long)iVar1);
        *(undefined1 *)((long)puVar2 + (long)iVar1) = 0;
      }
      puVar2 = *(undefined8 **)(param_1 + 0x1e18);
      if (puVar2 != &DAT_0407ebb1) {
        iVar1 = 0;
        if (*(int *)(param_1 + 0x1e20) < 1) {
          iVar1 = *(int *)(param_1 + 0x1e20) + -1;
        }
        memset(puVar2,0,(long)iVar1);
        *(undefined1 *)((long)puVar2 + (long)iVar1) = 0;
      }
      *(undefined8 *)(param_1 + 0x1e68) = 0;
      *(undefined8 *)(param_1 + 0x1e78) = 0;
      *(undefined2 *)(param_1 + 0x1e70) = 0xff;
    }
    *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xfffffffb;
  }
  FUN_0230e2b0(auStack_120);
  if (local_118 != "Player_ToolActionError") {
    iVar1 = 0x16;
    if (local_110 < 0x17) {
      iVar1 = local_110 + -1;
    }
    memcpy(local_118,"Player_ToolActionError",(long)iVar1);
    local_118[iVar1] = '\0';
  }
  if (local_c0 != "ChangeStick_unregistered") {
    iVar1 = 0x18;
    if (local_b8 < 0x19) {
      iVar1 = local_b8 + -1;
    }
    memcpy(local_c0,"ChangeStick_unregistered",(long)iVar1);
    local_c0[iVar1] = '\0';
  }
  local_58 = 1;
  local_48 = 0x3c;
  local_54 = 3;
  FUN_02328d9c(param_1,auStack_120);
  return;
}

