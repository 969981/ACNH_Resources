
void FUN_01e953f4(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 local_1e8 [6];
  long local_1d0;
  long lStack_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1a4;
  undefined1 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  char *local_d0;
  int local_c8;
  
  FUN_01e63f1c(local_1e8);
  *(undefined4 *)(param_1 + 0xb0b0) = 0;
  local_1e8[0] = 0x22;
  *(undefined8 *)(param_1 + 0xb09c) = 0;
  *(undefined8 *)(param_1 + 0xb0a4) = 0x200000708;
  if ((*(long *)(param_1 + 8) != 0) &&
     (uVar2 = *(uint *)(*(long *)(param_1 + 8) + 0x508), uVar2 != 0xffffffff)) {
    puVar3 = &DAT_053fe348 + (ulong)uVar2 * 0xba0;
    if (9 < uVar2) {
      puVar3 = &DAT_053fe348;
    }
    local_1b8 = *(undefined4 *)(puVar3 + 0x7d4);
    local_1c0 = *(undefined8 *)(puVar3 + 0x7cc);
    local_190 = 1;
    local_18c = 0x1c2;
  }
  local_1a4 = 0;
  local_188 = 2;
  if (local_d0 != "NpcSinging") {
    iVar1 = 10;
    if (local_c8 < 0xb) {
      iVar1 = local_c8 + -1;
    }
    memcpy(local_d0,"NpcSinging",(long)iVar1);
    local_d0[iVar1] = '\0';
  }
  *(long *)(param_1 + 0x12638) = param_1;
  *(undefined1 **)(param_1 + 0x12640) = &LAB_01e96058;
  local_1d0 = param_1 + 0x12630;
  lStack_1c8 = param_1 + 0x12650;
  *(undefined8 *)(param_1 + 0x12648) = 0;
  *(undefined1 **)(param_1 + 0x12660) = &LAB_01e939ac;
  *(long *)(param_1 + 0x12658) = param_1;
  *(undefined8 *)(param_1 + 0x12668) = 0;
  local_184 = 1;
  if (*(int *)(param_1 + 0xef10) < *(int *)(param_1 + 0xef14)) {
    FUN_021920b0((int *)(param_1 + 0xef10),local_1e8);
  }
  return;
}

