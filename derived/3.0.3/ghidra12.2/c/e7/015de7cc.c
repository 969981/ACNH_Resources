
void FUN_015de7cc(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_DAT_04bb3350;
  if (*(int *)(param_1 + 0x168) != 2) {
    return;
  }
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  uVar6 = *(undefined8 *)(lVar3 + 0xa8);
  *(undefined8 *)(lVar3 + 0xa8) = 0;
  nn::os::StartThread((ThreadType *)(*(long *)(param_1 + 0x48) + 0x3f8));
  nn::os::StartThread((ThreadType *)(*(long *)(param_1 + 0x48) + 0x5c8));
  lVar3 = *(long *)(param_1 + 0x48);
  lVar8 = *(long *)(lVar3 + 0x960);
  if (lVar8 == 0) {
    lVar7 = 1;
    plVar5 = *(long **)(lVar3 + 0x10);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    lVar7 = *(long *)(lVar4 + 0xa8);
    *(long *)(lVar4 + 0xa8) = lVar8;
    plVar5 = *(long **)(lVar3 + 0x10);
  }
  if (plVar5 == (long *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(*plVar5 + 0x28))();
  }
  if (lVar7 != 1) {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    *(long *)(lVar3 + 0xa8) = lVar7;
  }
  if (iVar2 != 0) {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    *(undefined8 *)(lVar3 + 0xa8) = uVar6;
    return;
  }
  lVar3 = *(long *)(param_1 + 0x48);
  lVar8 = *(long *)(lVar3 + 0x960);
  if (lVar8 == 0) {
    lVar7 = 1;
    plVar5 = *(long **)(lVar3 + 0x18);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    lVar7 = *(long *)(lVar4 + 0xa8);
    *(long *)(lVar4 + 0xa8) = lVar8;
    plVar5 = *(long **)(lVar3 + 0x18);
  }
  if (plVar5 == (long *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(*plVar5 + 0x28))();
  }
  if (lVar7 != 1) {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    *(long *)(lVar3 + 0xa8) = lVar7;
  }
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
  *(undefined8 *)(lVar3 + 0xa8) = uVar6;
  if (iVar2 == 0) {
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined4 *)(param_1 + 0x168) = 3;
  }
  return;
}

