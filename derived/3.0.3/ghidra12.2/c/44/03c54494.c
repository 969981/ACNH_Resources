
void FUN_03c54494(long *param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  
  FUN_038e1f88(param_1,param_2,*(undefined8 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x10),0,
               0x7fffffff,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x18));
  *param_1 = (long)&PTR_LAB_04b81110;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined1 *)((long)param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x23) = uVar1;
  FUN_038e18e4(param_1 + 0x24);
  lVar4 = DAT_05ae7600;
  iVar2 = *(int *)(param_2 + 0x18);
  if (0 < iVar2) {
    if (DAT_05ae7600 == 0) {
      pvVar7 = malloc((long)iVar2 << 3);
    }
    else {
      plVar5 = *(long **)(param_2 + 0x28);
      if (plVar5 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar5 = (long *)(lVar4 + 8);
        if (lVar6 != 0) {
          plVar5 = (long *)(lVar6 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) goto LAB_03c5456c;
      }
      pvVar7 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,(long)iVar2 << 3,8);
    }
    if (pvVar7 != (void *)0x0) {
      param_1[0x22] = (long)pvVar7;
      *(undefined4 *)(param_1 + 0x21) = 0;
      *(int *)((long)param_1 + 0x10c) = iVar2;
    }
  }
LAB_03c5456c:
  uVar3 = *(uint *)(param_2 + 0x14);
  *(uint *)(param_1 + 0x1a) = uVar3;
  nn::os::GetThreadAvailableCoreMask();
  nn::os::SetThreadCoreMask((ThreadType *)param_1[0x1d],-1,(ulong)uVar3);
  (**(code **)(*param_1 + 0x30))(param_1);
  return;
}

