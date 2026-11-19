
undefined8 FUN_038fea40(long param_1,undefined4 *param_2,undefined8 param_3,ulong param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((((param_4 & 1) != 0) && (*(long *)(param_2 + 2) != 0)) &&
     (uVar4 = (**(code **)PTR_DAT_04bcf030)(), (uVar4 >> 2 & 1) != 0)) {
    (**(code **)PTR_DAT_04bcf358)(*(undefined8 *)(param_2 + 2),*param_2,param_3);
  }
  uVar5 = param_2[1];
  lVar7 = *(long *)(param_2 + 2);
  uVar6 = *(undefined8 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = uVar5;
  *(long *)(param_1 + 0x10) = lVar7;
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  uVar5 = 0;
  if (lVar7 != 0) {
    uVar5 = (undefined4)param_3;
  }
  *(undefined4 *)(param_1 + 0x20) = uVar5;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(byte *)(param_1 + 600) = *(byte *)(param_1 + 600) & 0xfc | *(int *)(param_1 + 0x24c) != 0;
  *(long *)(*(long *)(param_1 + 0x30) + 0xb8) = *(long *)(param_1 + 0x30) + 0x108;
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0xb8);
  lVar7 = *(long *)PTR_DAT_04bc1010;
  (**(code **)PTR_DAT_04bcf0c8)(uVar6,*(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x30));
  piVar1 = (int *)(lVar7 + 0x644);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  (**(code **)PTR_DAT_04bcf0d0)(uVar6,&LAB_038fea30);
  (**(code **)PTR_DAT_04bcf0d8)(uVar6,param_1);
  (**(code **)PTR_DAT_04bcf0f8)
            (uVar6,*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x248));
  uVar4 = *(uint *)(param_1 + 0x20);
  if (uVar4 < 0x201) {
    uVar4 = 0x200;
  }
  (**(code **)PTR_DAT_04bcf0f0)
            (uVar6,*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 8),uVar4);
  (**(code **)PTR_DAT_04bcf100)(uVar6);
  *(byte *)(param_1 + 600) = *(byte *)(param_1 + 600) | 4;
  return 1;
}

