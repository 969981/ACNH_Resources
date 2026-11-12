
void FUN_0098a980(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  char *__dest;
  char *__dest_00;
  
  FUN_00705c50();
  param_1[0x50] = 0xffffffff;
  puVar3 = PTR_DAT_04bd4738;
  __dest = "StateMachine";
  param_1[0x51] = 0xffffffff;
  puVar2 = PTR_DAT_04bb2d80;
  __dest_00 = (char *)param_1[0xc];
  param_1[0x52] = 0xffffffff;
  *(undefined2 *)(param_1 + 0x53) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x4f] = puVar3 + 0x10;
  param_1[0x57] = 0;
  param_1[0x58] = puVar2 + 0x10;
  param_1[0x5c] = puVar2 + 0x10;
  if (__dest_00 != "StateMachine") {
    iVar1 = 0xc;
    if (*(int *)(param_1 + 0xd) < 0xd) {
      iVar1 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(__dest_00,"StateMachine",(long)iVar1);
    __dest_00[iVar1] = '\0';
    __dest = (char *)param_1[0xc];
  }
  *param_1 = &PTR_LAB_0492af70;
  param_1[0x6c] = 0;
  param_1[0x60] = param_2;
  uVar4 = *(uint *)(param_1 + 0x4c) & 0xfffffff0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(uint *)(param_1 + 0x4c) = uVar4 | 2;
  param_1[0x6a] = 0;
  *(undefined4 *)((long)param_1 + 0x367) = 0;
  param_1[0x6b] = 0;
  *(undefined2 *)((long)param_1 + 0x36b) = 1;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  *(undefined4 *)((long)param_1 + 0x374) = 0;
  *(undefined1 *)(param_1 + 0x6f) = 0;
  if (__dest != "CreatureActionBase") {
    iVar1 = 0x12;
    if (*(int *)(param_1 + 0xd) < 0x13) {
      iVar1 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(__dest,"CreatureActionBase",(long)iVar1);
    __dest[iVar1] = '\0';
    uVar4 = *(uint *)(param_1 + 0x4c) & 0xfffffff0;
  }
  *(uint *)(param_1 + 0x4c) = uVar4 | 0xe;
  return;
}

