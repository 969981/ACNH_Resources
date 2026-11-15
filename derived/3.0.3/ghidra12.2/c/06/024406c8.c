
void FUN_024406c8(long param_1)

{
  char *__dest;
  long *plVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined4 local_124;
  long *local_120;
  char local_118;
  char cStack_117;
  undefined6 uStack_116;
  int local_110;
  undefined1 *local_c0;
  int local_b8;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    if ((*(uint *)(param_1 + 0x1da8) & 0xfffffffd) == 4) {
      puVar5 = *(undefined8 **)(param_1 + 0x1dc0);
      *(undefined4 *)(param_1 + 0x1da8) = 0;
      *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xfffffffd;
      if (puVar5 != &DAT_0407ebb1) {
        iVar2 = 0;
        if (*(int *)(param_1 + 0x1dc8) < 1) {
          iVar2 = *(int *)(param_1 + 0x1dc8) + -1;
        }
        memset(puVar5,0,(long)iVar2);
        *(undefined1 *)((long)puVar5 + (long)iVar2) = 0;
      }
      puVar5 = *(undefined8 **)(param_1 + 0x1e18);
      if (puVar5 != &DAT_0407ebb1) {
        iVar2 = 0;
        if (*(int *)(param_1 + 0x1e20) < 1) {
          iVar2 = *(int *)(param_1 + 0x1e20) + -1;
        }
        memset(puVar5,0,(long)iVar2);
        *(undefined1 *)((long)puVar5 + (long)iVar2) = 0;
      }
      *(undefined8 *)(param_1 + 0x1e68) = 0;
      *(undefined8 *)(param_1 + 0x1e78) = 0;
      *(undefined2 *)(param_1 + 0x1e70) = 0xff;
    }
    *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xfffffffb;
  }
  FUN_0230e2b0(&local_120);
  __dest = (char *)CONCAT62(uStack_116,CONCAT11(cStack_117,local_118));
  if (__dest != "Demo_PublicAnnouncement_Process") {
    iVar2 = 0x1f;
    if (local_110 < 0x20) {
      iVar2 = local_110 + -1;
    }
    memcpy(__dest,"Demo_PublicAnnouncement_Process",(long)iVar2);
    __dest[iVar2] = '\0';
  }
  if (local_c0 != &DAT_04066c7f) {
    iVar2 = 4;
    if (local_b8 < 5) {
      iVar2 = local_b8 + -1;
    }
    memcpy(local_c0,&DAT_04066c7f,(long)iVar2);
    local_c0[iVar2] = 0;
  }
  FUN_02328d9c(param_1,&local_120);
  uVar3 = FUN_0231eddc(param_1,0);
  uVar4 = 0;
  if ((uVar3 & 1) == 0) {
    uVar4 = 10;
  }
  *(undefined4 *)(param_1 + 0x21bc) = uVar4;
  local_124 = *(undefined4 *)(param_1 + 0x230);
  FUN_0071c8d0(&local_120,PTR_DAT_04bb32f8,&local_124,0);
  plVar1 = local_120;
  if (local_120 != (long *)0x0) {
    if (((*PTR_DAT_04bb3280 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3280);
    }
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bb3278);
    if ((uVar3 & 1) == 0) {
      cStack_117 = '\0';
    }
  }
  if (((local_120 != (long *)0x0) && (local_118 != '\0')) && (cStack_117 != '\0')) {
    FUN_008fc6e4(local_120,0,0xffffffff);
  }
  *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xfbffffff;
  return;
}

