
void FUN_0384b4ac(long param_1,char *param_2)

{
  MutexType *pMVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 local_60;
  ulong local_58;
  undefined *local_50;
  undefined1 local_48;
  
  puVar4 = PTR_DAT_04bb26a8;
  if ((*(byte *)(param_1 + 0x61) & 1) == 0) {
LAB_0384b51c:
    uVar6 = 0;
  }
  else {
    lVar7 = *(long *)PTR_DAT_04bb26a8;
    pMVar1 = (MutexType *)(lVar7 + 0x89660);
    nn::os::LockMutex(pMVar1);
    iVar3 = *(int *)(lVar7 + 0x89630);
    nn::os::UnlockMutex(pMVar1);
    if (iVar3 != 1) goto LAB_0384b51c;
    *(byte *)(param_1 + 0x61) = *(byte *)(param_1 + 0x61) & 0xfe;
    uVar6 = 1;
  }
  puVar5 = PTR_DAT_04bcb3f8;
  FUN_038386d0(PTR_DAT_04bcb3f8);
  local_58 = local_58 & 0xffffffffffffff00;
  local_68 = &local_60;
  local_48 = 1;
  local_70 = 0;
  local_60 = PTR_DAT_04bb3d08 + 0x10;
  local_50 = PTR_DAT_04bb2150;
  if ((*puVar5 & 1) != 0) {
    FUN_03838950(PTR_DAT_04bcb3f8,&local_70);
  }
  FUN_0384b648(param_1);
  puVar5 = local_60;
  lVar7 = *(long *)puVar4;
  local_60 = (undefined *)((ulong)local_60 & 0xffffffff);
  if ((*param_2 == '\0') && (uVar2 = *(uint *)(FUN_0011e5e0 + lVar7 + 4), uVar2 != 0xffffffff)) {
    if (*(uint *)(lVar7 + 0x11e608) <= uVar2) {
      uVar2 = 0;
    }
    if (*(long *)(lVar7 + 0x11e610) == 0) goto LAB_0384b598;
    lVar7 = *(long *)(lVar7 + 0x11e610) + (long)(int)uVar2 * 0x80;
  }
  else {
LAB_0384b598:
    uVar2 = *(uint *)(FUN_0011e5e0 + lVar7);
    if (uVar2 == 0xffffffff) goto LAB_0384b5f8;
    if (*(uint *)(lVar7 + 0x11e608) <= uVar2) {
      uVar2 = 0;
    }
    if (*(long *)(lVar7 + 0x11e610) == 0) goto LAB_0384b5f8;
    lVar7 = *(long *)(lVar7 + 0x11e610) + (long)(int)uVar2 * 0x80;
  }
  local_60 = (undefined *)CONCAT44(*(undefined4 *)(lVar7 + 8),(int)puVar5);
LAB_0384b5f8:
  local_58 = *(undefined8 *)(param_1 + 0xcc);
  local_50 = (undefined *)CONCAT44(local_50._4_4_,*(undefined4 *)(param_1 + 0xd4));
  local_60._0_1_ = *param_2;
  FUN_0378cc0c(param_1 + 0x1b68,&local_60);
  local_60 = (undefined *)CONCAT71(local_60._1_7_,uVar6);
  FUN_0378ddd0(param_1 + 0x2fc0,&local_60);
  return;
}

