
void FUN_039004a0(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  undefined1 auStack_70 [64];
  
  if (param_2 == 0) {
    lVar7 = *(long *)PTR_DAT_04bb2698;
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),0,0);
    plVar1 = (long *)(lVar7 + 8);
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 0xa8);
    }
    param_2 = *plVar1;
  }
  piVar8 = (int *)(param_1 + 0x10);
  piVar8[0] = 0;
  piVar8[1] = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined2 *)(param_1 + 0x32) = 0;
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xfe;
  FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,param_1 + 8,param_2,0x10000,0x100,2);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  *(undefined2 *)(param_1 + 0x32) = 2;
  if (*(long *)(param_1 + 0x28) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *piVar8 - *(int *)(*(long *)(param_1 + 0x28) + 0x10);
  }
  (**(code **)PTR_DAT_04bbd7b8)(auStack_70,*(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x30));
  (**(code **)PTR_DAT_04bbd7b0)(auStack_70);
  (**(code **)PTR_DAT_04bbd7c8)(auStack_70,uVar5,iVar6,*(undefined8 *)(param_1 + 0x18));
  lVar4 = *(long *)PTR_DAT_04bc1010;
  (**(code **)PTR_DAT_04bbd7d0)(param_1 + 0x40,auStack_70);
  piVar8 = (int *)(lVar4 + 0x654);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = *piVar8 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar5 = (**(code **)PTR_DAT_04bbd560)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x70) = uVar5;
  return;
}

