
void FUN_006dc5f4(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_04bb2698;
  iVar5 = (int)*(ulong *)(param_2 + 200);
  if (0 < iVar5) {
    lVar7 = *(long *)PTR_DAT_04bb2698;
    uVar6 = *(ulong *)(param_2 + 200) & 0xffffffff;
    if (lVar7 == 0) {
      pvVar4 = malloc(uVar6);
    }
    else {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar7 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) goto LAB_006dc68c;
      pvVar4 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,uVar6,0x20);
    }
    if (pvVar4 != (void *)0x0) {
      *(int *)(param_1 + 0x50) = iVar5;
      *(void **)(param_1 + 0x58) = pvVar4;
    }
  }
LAB_006dc68c:
  iVar5 = (int)*(ulong *)(param_2 + 0xd0);
  if (0 < iVar5) {
    lVar7 = *(long *)puVar1;
    uVar6 = *(ulong *)(param_2 + 0xd0) & 0xffffffff;
    if (lVar7 == 0) {
      pvVar4 = malloc(uVar6);
    }
    else {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar7 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) goto LAB_006dc700;
      pvVar4 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,uVar6,0x20);
    }
    if (pvVar4 != (void *)0x0) {
      *(int *)(param_1 + 0x60) = iVar5;
      *(void **)(param_1 + 0x68) = pvVar4;
    }
  }
LAB_006dc700:
  iVar5 = (int)*(ulong *)(param_2 + 0xd0);
  if (0 < iVar5) {
    lVar7 = *(long *)puVar1;
    uVar6 = *(ulong *)(param_2 + 0xd0) & 0xffffffff;
    if (lVar7 == 0) {
      pvVar4 = malloc(uVar6);
    }
    else {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar7 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        return;
      }
      pvVar4 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,uVar6,0x20);
    }
    if (pvVar4 != (void *)0x0) {
      *(int *)(param_1 + 0x70) = iVar5;
      *(void **)(param_1 + 0x78) = pvVar4;
    }
  }
  return;
}

