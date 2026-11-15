
void FUN_01fd2480(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  float *pfVar3;
  long lVar4;
  char *__dest;
  undefined8 local_40;
  undefined8 *puStack_38;
  undefined4 local_14;
  
  uVar2 = FUN_03738270(*(undefined8 *)PTR_DAT_04bb4e28);
  FUN_02085e20(*(undefined8 *)(param_1 + 0x18),0,uVar2,PTR_DAT_04bb6928,0);
  iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x750);
  if (iVar1 != 3) {
    if (iVar1 != 0) {
      local_40 = (undefined *)((ulong)local_40._4_4_ << 0x20);
      lVar4 = *(long *)(param_1 + 0x10);
      local_14 = 0;
      FUN_01e5a930(0x40000000,lVar4,0xd,PTR_DAT_04bb2150,&local_40,&local_14,PTR_DAT_04bc1600,6);
      __dest = *(char **)(lVar4 + 0x3b8);
      if (__dest != "NpcGreeting") {
        iVar1 = 0xb;
        if (*(int *)(lVar4 + 0x3c0) < 0xc) {
          iVar1 = *(int *)(lVar4 + 0x3c0) + -1;
        }
        memcpy(__dest,"NpcGreeting",(long)iVar1);
        __dest[iVar1] = '\0';
      }
      *(undefined4 *)(lVar4 + 0x3a0) = 0;
      *(undefined1 *)(lVar4 + 0x410) = 0;
      return;
    }
    pfVar3 = (float *)FUN_0252d9bc(0);
    if (pfVar3 != (float *)0x0) {
      lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x68);
      local_14 = FUN_006f0400(*pfVar3 - *(float *)(lVar4 + 0x278),
                              pfVar3[2] - *(float *)(lVar4 + 0x280));
      local_40 = PTR_DAT_04bb2020 + 0x10;
      puStack_38 = &DAT_0407ebb1;
      FUN_01e5ab70(*(undefined8 *)(param_1 + 0x10),&local_14,PTR_DAT_04bb65b0,&local_40,6);
      return;
    }
  }
  local_40 = (undefined *)((ulong)local_40._4_4_ << 0x20);
  local_14 = 0;
  FUN_01e5a930(0x40000000,*(undefined8 *)(param_1 + 0x10),0,PTR_DAT_04bb2150,&local_40,&local_14,
               PTR_DAT_04bc1600,6);
  return;
}

