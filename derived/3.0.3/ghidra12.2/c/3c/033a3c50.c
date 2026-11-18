
/* WARNING: Removing unreachable block (ram,0x033a3e04) */
/* WARNING: Removing unreachable block (ram,0x033a3ddc) */
/* WARNING: Removing unreachable block (ram,0x033a3db0) */
/* WARNING: Removing unreachable block (ram,0x033a3d88) */
/* WARNING: Removing unreachable block (ram,0x033a3d9c) */
/* WARNING: Removing unreachable block (ram,0x033a3dc4) */
/* WARNING: Removing unreachable block (ram,0x033a3df0) */
/* WARNING: Removing unreachable block (ram,0x033a3e20) */

void FUN_033a3c50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_04bb3350;
  lVar6 = *(long *)(param_1 + 0xb8);
  if (lVar6 == 0) {
    lVar7 = 1;
    lVar6 = *(long *)PTR_DAT_04bb2698;
    if (*(long *)PTR_DAT_04bb2698 != 0) {
LAB_033a3cc8:
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
      plVar4 = (long *)(lVar6 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)0x0;
        goto LAB_033a3d18;
      }
      goto LAB_033a3cec;
    }
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)(lVar3 + 0xa8);
    *(long *)(lVar3 + 0xa8) = lVar6;
    if (DAT_05ae7600 != 0) {
      plVar4 = *(long **)(param_1 + 0xb8);
      lVar6 = DAT_05ae7600;
      if (plVar4 == (long *)0x0) goto LAB_033a3cc8;
LAB_033a3cec:
      plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x1c220,8);
      goto LAB_033a3d18;
    }
  }
  plVar4 = malloc(0x1c220);
LAB_033a3d18:
  FUN_031c3af0(plVar4,param_2,param_3);
  puVar2 = PTR_DAT_04bc8858;
  plVar4[0x3842] = 0;
  *(undefined2 *)((long)plVar4 + 0x1c21c) = 0;
  *(undefined4 *)((long)plVar4 + 0x1c1ec) = 0;
  *(undefined4 *)(plVar4 + 0x3843) = 0xffffffff;
  *plVar4 = (long)(puVar2 + 0x10);
  *(undefined4 *)(plVar4 + 0x383f) = 0;
  *(undefined4 *)((long)plVar4 + 0x1c1f4) = 1;
  *(undefined4 *)(plVar4 + 0x383e) = 2;
  *(undefined4 *)((long)plVar4 + 0x1c20c) = 3;
  *(undefined4 *)(plVar4 + 0x3841) = 4;
  *(undefined4 *)((long)plVar4 + 0x1c204) = 5;
  *(undefined4 *)(plVar4 + 0x3840) = 6;
  *(undefined4 *)(plVar4 + 0x15) = 1;
  plVar4[0x13] = param_1;
  *(undefined4 *)((long)plVar4 + 0x1c1fc) = 7;
  FUN_0386890c(plVar4,param_3);
  *(undefined4 *)(plVar4 + 0x15) = 2;
  (**(code **)(*plVar4 + 0x48))(plVar4);
  nn::os::LockMutex((MutexType *)(param_1 + 0xf0));
  plVar5 = (long *)(param_1 + 0x40);
  lVar6 = *plVar5;
  plVar4 = (long *)((long)*(int *)(param_1 + 0x54) + (long)plVar4);
  *plVar5 = (long)plVar4;
  *plVar4 = lVar6;
  plVar4[1] = (long)plVar5;
  if (lVar6 != 0) {
    *(long **)(lVar6 + 8) = plVar4;
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xf0));
  if (lVar7 != 1) {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    *(long *)(lVar6 + 0xa8) = lVar7;
  }
  return;
}

