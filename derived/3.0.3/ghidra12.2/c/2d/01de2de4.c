
void FUN_01de2de4(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  undefined *local_70 [4];
  int local_4c;
  uint local_44;
  undefined *local_40;
  char *pcStack_38;
  
  nn::os::LockMutex((MutexType *)(param_1 + 5));
  if ((*(char *)*param_1 == '\0') || (uVar4 = FUN_02640eb0(), (uVar4 & 1) == 0)) goto LAB_01de2f14;
  lVar6 = *param_1;
  pbVar7 = (byte *)(lVar6 + 0x20);
  if (*pbVar7 < 8) {
    FUN_02582a24(pbVar7);
    uVar2 = FUN_02582d8c(pbVar7,1);
    if (((7 < uVar2) ||
        (lVar5 = *(long *)PTR_DAT_04bb4fb8,
        *(char *)(lVar5 + (ulong)uVar2 * 0x13f0 + 0x13d4) == '\0')) ||
       (*(int *)(lVar5 + (ulong)uVar2 * 0x13f0 + 0x13d0) != 0)) goto LAB_01de2e80;
    local_40 = PTR_DAT_04bb2020 + 0x10;
    local_44 = (uint)*(byte *)(lVar5 + (ulong)uVar2 * 0x13f0 + 0x13d5);
    pcStack_38 = "net_nifm_process";
    FUN_026012f4(local_70,&local_40,&local_44);
  }
  else {
LAB_01de2e80:
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "net_nifm_process";
    FUN_0260140c(local_70,&local_40);
  }
  puVar1 = PTR_DAT_04bc3370 + 0x10;
  local_70[0] = puVar1;
  FUN_025bee18(local_70,lVar6 + 8);
  local_70[0] = puVar1;
  iVar3 = FUN_025bf088(local_70);
  if (iVar3 == -1) {
LAB_01de2ef4:
    if (local_4c == 0) {
      local_4c = 1;
    }
  }
  else {
    iVar3 = (**(code **)(local_70[0] + 0x20))(local_70);
    local_40 = (undefined *)CONCAT44(local_40._4_4_,iVar3);
    if (0xc < iVar3) goto LAB_01de2ef4;
  }
  FUN_02601530(local_70);
  *(undefined1 *)*param_1 = 0;
LAB_01de2f14:
  nn::os::UnlockMutex((MutexType *)(param_1 + 5));
  return;
}

