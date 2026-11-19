
ulong FUN_039d9c90(long *param_1,undefined4 *param_2,long param_3)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ushort *puVar7;
  undefined4 local_48 [2];
  undefined *local_40;
  undefined8 uStack_38;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x70));
  local_48[0] = *param_2;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  uStack_38 = *(undefined8 *)(param_2 + 4);
  for (lVar6 = *param_1; lVar6 != 0; lVar6 = *(long *)(lVar6 + 8)) {
    while (iVar3 = FUN_039dace0(local_48,lVar6 + 0x20), -1 < iVar3) {
      if (iVar3 == 0) {
        puVar7 = *(ushort **)(lVar6 + 0x38);
        if ((puVar7 == (ushort *)0x0) ||
           (*(long *)(puVar7 + 0x20) != 0 || *(long *)(puVar7 + 0x1c) != 0)) goto LAB_039d9d28;
        uVar2 = *puVar7;
        *puVar7 = uVar2 - 1;
        if ((ushort)(uVar2 - 1) == 0) {
          if (*(long *)(puVar7 + 0xac) == 0) {
            FUN_039dd660(puVar7 + 4,1);
          }
          plVar4 = param_1 + 4;
          lVar6 = *plVar4;
          plVar1 = (long *)((long)*(int *)((long)param_1 + 0x34) + (long)puVar7);
          *plVar4 = (long)plVar1;
          *plVar1 = lVar6;
          plVar1[1] = (long)plVar4;
          if (lVar6 != 0) {
            *(long **)(lVar6 + 8) = plVar1;
          }
          *(int *)(param_1 + 6) = (int)param_1[6] + 1;
        }
        if (param_3 != 0) {
          plVar1 = (long *)(*(int *)(puVar7 + 0x1a) + param_3);
          if (*plVar1 != 0) {
            *(long *)(*plVar1 + 8) = plVar1[1];
          }
          if ((long *)plVar1[1] != (long *)0x0) {
            *(long *)plVar1[1] = *plVar1;
          }
          *plVar1 = 0;
          plVar1[1] = 0;
          *(int *)(puVar7 + 0x18) = *(int *)(puVar7 + 0x18) + -1;
        }
        uVar5 = (ulong)*puVar7;
        goto LAB_039d9d2c;
      }
      lVar6 = *(long *)(lVar6 + 0x10);
      if (lVar6 == 0) goto LAB_039d9d28;
    }
  }
LAB_039d9d28:
  uVar5 = 0xffffffff;
LAB_039d9d2c:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x70));
  return uVar5;
}

