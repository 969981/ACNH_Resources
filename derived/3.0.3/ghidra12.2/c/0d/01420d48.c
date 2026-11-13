
void FUN_01420d48(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  void *__s;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined *local_68;
  char *local_60;
  undefined *local_58;
  char *pcStack_50;
  undefined *local_48;
  undefined8 *puStack_40;
  undefined4 local_38;
  
  local_68 = PTR_DAT_04bb2020 + 0x10;
  local_60 = "FishMuseumLayout";
  pcStack_50 = "FishMuseumLayout";
  puStack_40 = &DAT_0407ebb1;
  local_38 = 0;
  *param_1 = (long)(PTR_DAT_04bd0d40 + 0x10);
  param_1[1] = 0;
  lVar4 = *(long *)PTR_DAT_04bb2698;
  param_1[2] = 0;
  param_1[3] = 0;
  local_58 = local_68;
  local_48 = local_68;
  if (lVar4 != 0) {
    lVar4 = FUN_038cb610(lVar4,param_1);
    param_1[1] = lVar4;
    if (lVar4 != 0) {
      if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = lVar4 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
      }
      plVar6 = (long *)(lVar4 + 0x70);
      lVar5 = *plVar6;
      plVar1 = (long *)((long)*(int *)(lVar4 + 0x84) + (long)param_1);
      *plVar6 = (long)plVar1;
      *plVar1 = lVar5;
      plVar1[1] = (long)plVar6;
      if (lVar5 != 0) {
        *(long **)(lVar5 + 8) = plVar1;
      }
      *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + 1;
      if (lVar7 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
      }
    }
  }
  param_1[4] = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(local_68 + 0x18))(&local_68);
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined1 *)((long)param_1 + 0x123) = 0;
  *(undefined4 *)(param_1 + 8) = local_38;
  *param_1 = (long)&PTR_LAB_0499a468;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[4] = (long)&PTR_LAB_0499a530;
  param_1[5] = (long)local_60;
  *(undefined4 *)(param_1 + 0x14) = 0x80;
  param_1[0x13] = (long)param_1 + 0xa4;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  if ((undefined *)((long)param_1 + 0xa4) != &DAT_040cd53f) {
    *(undefined1 *)(param_1 + 0x15) = 0;
    *(undefined4 *)((long)param_1 + 0xa4) = 0x656e6f4e;
  }
  puVar2 = PTR_DAT_04bbfe60;
  param_1[0x12] = (long)(PTR_DAT_04bb2d88 + 0x10);
  param_1[0x25] = (long)(puVar2 + 0x10);
  memset(param_1 + 0x26,0,0x754);
  uVar3 = nn::os::GetSystemTick();
  uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
  *(uint *)((long)param_1 + 0x884) = uVar3;
  uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)(param_1 + 0x111) = uVar3;
  uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)param_1 + 0x88c) = uVar3;
  *(uint *)(param_1 + 0x112) = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 4;
  __s = (void *)(**(code **)(param_1[0x25] + 0x18))(param_1 + 0x25);
  memset(__s,0,0x754);
  *(undefined4 *)(param_1 + 0x113) = 0;
  *(undefined1 *)((long)param_1 + 0x89c) = 0;
  return;
}

