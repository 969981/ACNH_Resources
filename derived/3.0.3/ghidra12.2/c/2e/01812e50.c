
void FUN_01812e50(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  char *pcVar5;
  
  FUN_0098a980();
  pcVar5 = (char *)param_1[0xc];
  param_1[0x74] = 0;
  *(undefined8 *)((long)param_1 + 0x37c) = 0;
  *(undefined8 *)((long)param_1 + 900) = 0;
  *(undefined1 *)((long)param_1 + 0x3b4) = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(undefined1 *)(param_1 + 0x79) = 0;
  *(undefined8 *)((long)param_1 + 0x38c) = 0;
  *(undefined8 *)((long)param_1 + 0x394) = 0;
  *(undefined4 *)(param_1 + 0x75) = 0xfffe;
  *(undefined8 *)((long)param_1 + 0x3ac) = 0;
  *(undefined4 *)((long)param_1 + 0x3cc) = 0xffffffff;
  if (pcVar5 != "InsectActionBase") {
    iVar1 = 0x10;
    if (*(int *)(param_1 + 0xd) < 0x11) {
      iVar1 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(pcVar5,"InsectActionBase",(long)iVar1);
    pcVar5[iVar1] = '\0';
  }
  *(undefined4 *)((long)param_1 + 0x3e4) = 0;
  *param_1 = &PTR_LAB_049c5500;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  uVar4 = nn::os::GetSystemTick();
  uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  *(uint *)(param_1 + 0x7d) = uVar4;
  uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 2;
  uVar2 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 3;
  *(undefined8 *)((long)param_1 + 0x3fc) = 0;
  *(undefined8 *)((long)param_1 + 0x404) = 0;
  param_1[0x82] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x86) = 1;
  *(undefined4 *)((long)param_1 + 0x431) = 0;
  param_1[0x8a] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0x8b) = 0x7fffffff;
  puVar3 = PTR_DAT_04bcb470;
  pcVar5 = (char *)param_1[0xc];
  *(undefined2 *)(param_1 + 0x7f) = 0;
  *(undefined1 *)((long)param_1 + 0x3fa) = 0;
  *(undefined4 *)((long)param_1 + 0x40c) = 0;
  *(undefined2 *)(param_1 + 0x83) = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  *(undefined1 *)((long)param_1 + 0x435) = 0;
  *(undefined1 *)((long)param_1 + 0x45c) = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  *(uint *)((long)param_1 + 0x3ec) = uVar4;
  *(uint *)(param_1 + 0x7e) = uVar2;
  *(uint *)((long)param_1 + 0x3f4) = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
  *(undefined4 *)(param_1 + 0x92) = 0;
  *(undefined2 *)((long)param_1 + 0x494) = 0;
  param_1[0x89] = puVar3 + 0x10;
  param_1[0x8e] = &PTR_LAB_049c57b8;
  if (pcVar5 != "InsectActionFieldActorBase") {
    iVar1 = 0x1a;
    if (*(int *)(param_1 + 0xd) < 0x1b) {
      iVar1 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(pcVar5,"InsectActionFieldActorBase",(long)iVar1);
    pcVar5[iVar1] = '\0';
  }
  *(undefined1 *)(param_1 + 0x7c) = 0;
  return;
}

