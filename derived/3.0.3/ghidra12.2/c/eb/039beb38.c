
void FUN_039beb38(long param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined1 auStack_70 [64];
  
  if (param_2 == 0) {
    lVar6 = *(long *)PTR_DAT_04bb2698;
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),0,0);
    plVar7 = (long *)(lVar6 + 8);
    if (lVar3 != 0) {
      plVar7 = (long *)(lVar3 + 0xa8);
    }
    param_2 = *plVar7;
  }
  plVar7 = (long *)(param_1 + 0x48);
  *plVar7 = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x6a) = 0;
  *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) & 0xfe;
  FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,param_1 + 0x40,param_2,0x60,0x10,0x10);
  puVar1 = PTR_DAT_04bbd7c0;
  *(undefined2 *)(param_1 + 0x6a) = 0x10;
  (**(code **)PTR_DAT_04bbd7b8)(auStack_70,*(undefined8 *)(*(long *)puVar1 + 0x30));
  (**(code **)PTR_DAT_04bbd7b0)(auStack_70);
  if (*(long *)(param_1 + 0x60) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *plVar7 - *(long *)(*(long *)(param_1 + 0x60) + 0x10);
  }
  (**(code **)PTR_DAT_04bbd7c8)
            (auStack_70,*(undefined8 *)(param_1 + 0x58),lVar3,*(undefined8 *)(param_1 + 0x50));
  (**(code **)PTR_DAT_04bbd7d0)(param_1 + 0x10,auStack_70);
  memset(*(void **)(param_1 + 0x48),0,*(size_t *)(param_1 + 0x50));
  lVar3 = *(long *)(param_1 + 0x58);
  if (*(long *)(param_1 + 0x60) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)plVar7 - *(int *)(*(long *)(param_1 + 0x60) + 0x10);
  }
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    uVar2 = (**(code **)PTR_DAT_04bcf030)(lVar3);
    if ((uVar2 >> 2 & 1) != 0) {
      (**(code **)PTR_DAT_04bcf350)(lVar3,iVar5,uVar4);
    }
  }
  return;
}

