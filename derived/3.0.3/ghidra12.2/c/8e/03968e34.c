
void FUN_03968e34(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  puVar1 = PTR_DAT_04bd0d40;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  if (*(long *)PTR_DAT_04bb2698 != 0) {
    lVar5 = FUN_038cb610(*(long *)PTR_DAT_04bb2698,param_1);
    param_1[1] = lVar5;
    if (lVar5 != 0) {
      if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = lVar5 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
      }
      plVar7 = (long *)(lVar5 + 0x70);
      lVar6 = *plVar7;
      plVar2 = (long *)((long)*(int *)(lVar5 + 0x84) + (long)param_1);
      *plVar7 = (long)plVar2;
      *plVar2 = lVar6;
      plVar2[1] = (long)plVar7;
      if (lVar6 != 0) {
        *(long **)(lVar6 + 8) = plVar2;
      }
      *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + 1;
      if (lVar8 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar8 + 0x20));
      }
    }
  }
  param_1[6] = 0;
  param_1[7] = 0x4434000044a00000;
  *(undefined8 *)((long)param_1 + 0x44) = 0x3f80000000000000;
  puVar4 = PTR_DAT_04bd0f08;
  *(undefined8 *)((long)param_1 + 0x6c) = 0x3f80000000000000;
  puVar1 = PTR_DAT_04bd0ea8;
  *param_1 = (long)&PTR_LAB_04b68398;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)((long)param_1 + 0x8e) = 0;
  uVar3 = *(undefined4 *)puVar1;
  param_1[10] = (long)(puVar4 + 0x10);
  param_1[0xb] = 0x7f7fffff7f7fffff;
  param_1[0xc] = -0x80000000800001;
  *(undefined4 *)(param_1 + 0x11) = 0xc20483;
  *(undefined2 *)((long)param_1 + 0x8c) = 2;
  *(undefined4 *)(param_1 + 8) = uVar3;
  *(undefined4 *)(param_1 + 0xd) = uVar3;
  *(undefined2 *)(param_1 + 0x12) = 0xff00;
  param_1[4] = 0;
  param_1[5] = (long)(puVar4 + 0x10);
  *(undefined1 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xac) = 0x3f800000;
  *(undefined2 *)((long)param_1 + 0xaa) = 0;
  *(undefined8 *)((long)param_1 + 0xa2) = 0;
  *(undefined8 *)((long)param_1 + 0x9a) = 0;
  *(undefined8 *)((long)param_1 + 0x92) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1d] = (long)param_1 + 0xf4;
  *(undefined4 *)(param_1 + 0x1e) = 0x100;
  *(undefined1 *)((long)param_1 + 499) = 0;
  puVar1 = PTR_DAT_04bb21f8 + 0x10;
  param_1[0x3f] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = (long)puVar1;
  lVar5 = DAT_05ae9148;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
                    /* WARNING: Could not recover jumptable at 0x03968fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 0x20))(&DAT_05ae9148,&DAT_05ae9150);
  return;
}

