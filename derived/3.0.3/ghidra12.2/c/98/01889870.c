
void FUN_01889870(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  FUN_0098a980();
  pcVar3 = (char *)param_1[0xc];
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
  if (pcVar3 != "InsectActionBase") {
    iVar1 = 0x10;
    if (*(int *)(param_1 + 0xd) < 0x11) {
      iVar1 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(pcVar3,"InsectActionBase",(long)iVar1);
    pcVar3[iVar1] = '\0';
  }
  param_1[0x7a] = 0;
  *param_1 = &PTR_LAB_049cdb78;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  uVar2 = nn::os::GetSystemTick();
  pcVar3 = (char *)param_1[0xc];
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 1;
  param_1[0x7e] = 0;
  *(uint *)((long)param_1 + 0x3dc) = uVar2;
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)(param_1 + 0x7c) = uVar2;
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)param_1 + 0x3e4) = uVar2;
  *(uint *)(param_1 + 0x7d) = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
  if (pcVar3 != "InsectActionMuseumActorBase") {
    iVar1 = 0x1b;
    if (*(int *)(param_1 + 0xd) < 0x1c) {
      iVar1 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(pcVar3,"InsectActionMuseumActorBase",(long)iVar1);
    pcVar3[iVar1] = '\0';
  }
  return;
}

