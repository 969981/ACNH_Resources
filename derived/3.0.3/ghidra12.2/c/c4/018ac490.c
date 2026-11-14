
void FUN_018ac490(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  
  FUN_00705c50();
  pcVar6 = (char *)param_1[0xc];
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x50] = 0;
  *(undefined2 *)(param_1 + 0x51) = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  param_1[0x53] = 0;
  if (pcVar6 != "CreatureComponentMuseumManageBase") {
    iVar1 = 0x21;
    if (*(int *)(param_1 + 0xd) < 0x22) {
      iVar1 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(pcVar6,"CreatureComponentMuseumManageBase",(long)iVar1);
    pcVar6[iVar1] = '\0';
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  *param_1 = &PTR_LAB_049d0540;
  *(undefined2 *)(param_1 + 0x54) = 0xff00;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  *(undefined1 *)((long)param_1 + 0x314) = 0;
  *(undefined8 *)((long)param_1 + 0x2b4) = 0;
  *(undefined8 *)((long)param_1 + 0x2a4) = 0;
  *(undefined8 *)((long)param_1 + 0x2ac) = 0;
  uVar2 = nn::os::GetSystemTick();
  pcVar6 = (char *)param_1[0xc];
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 1;
  *(uint *)(param_1 + 99) = uVar2;
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)((long)param_1 + 0x31c) = uVar2;
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)(param_1 + 100) = uVar2;
  *(uint *)((long)param_1 + 0x324) = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
  if (pcVar6 != "InsectComponentMuseumManage") {
    iVar1 = 0x1b;
    if (*(int *)(param_1 + 0xd) < 0x1c) {
      iVar1 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(pcVar6,"InsectComponentMuseumManage",(long)iVar1);
    pcVar6[iVar1] = '\0';
  }
  uVar2 = *(uint *)(param_1 + 0x60);
  *(undefined1 *)((long)param_1 + 0x289) = 1;
  if (0 < (int)uVar2) {
    uVar3 = (ulong)uVar2 & 3;
    uVar4 = 0;
    if (3 < uVar2) {
      do {
        lVar5 = uVar4 * 4;
        uVar4 = uVar4 + 4;
        *(undefined4 *)(param_1[0x61] + lVar5) = 0xffffffff;
        *(undefined4 *)(param_1[0x61] + lVar5 + 4) = 0xffffffff;
        *(undefined4 *)(param_1[0x61] + lVar5 + 8) = 0xffffffff;
        *(undefined4 *)(param_1[0x61] + lVar5 + 0xc) = 0xffffffff;
      } while (((ulong)uVar2 & 0xfffffffc) != uVar4);
    }
    if ((uVar2 & 3) != 0) {
      lVar5 = uVar4 << 2;
      do {
        uVar3 = uVar3 - 1;
        *(undefined4 *)(param_1[0x61] + lVar5) = 0xffffffff;
        lVar5 = lVar5 + 4;
      } while (uVar3 != 0);
    }
  }
  return;
}

