
void FUN_03901480(long param_1,undefined4 *param_2,uint param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_90 [64];
  
  puVar6 = PTR_DAT_04bc1010;
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar9 = *(long *)PTR_DAT_04bc1010;
    (**(code **)PTR_DAT_04bc8e38)(param_1 + 0x30);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = param_2[1];
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 2);
  uVar8 = *(undefined8 *)(param_2 + 4);
  *(int *)(param_1 + 0x28) = param_4;
  *(uint *)(param_1 + 8) = param_3;
  *(undefined8 *)(param_1 + 0x20) = uVar8;
  if (param_3 < 3) {
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(&DAT_041b2814 + (long)(int)param_3 * 4);
  }
  (*DAT_04c62088)(auStack_90,*(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x30));
  (**(code **)PTR_DAT_04bbd7b0)(auStack_90);
  (**(code **)PTR_DAT_04bbd7c8)
            (auStack_90,*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x10),
             *(int *)(param_1 + 0x28) * *(int *)(param_1 + 0x2c));
  lVar9 = *(long *)puVar6;
  (**(code **)PTR_DAT_04bbd7d0)(param_1 + 0x30,auStack_90);
  piVar1 = (int *)(lVar9 + 0x65c);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = *piVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar9 = *(long *)(param_1 + 0x18);
  if (lVar9 != 0) {
    iVar2 = *(int *)(param_1 + 0x2c);
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar7 = (**(code **)PTR_DAT_04bcf030)(lVar9);
    if ((uVar7 >> 2 & 1) != 0) {
      (**(code **)PTR_DAT_04bcf350)(lVar9,uVar3,iVar2 * param_4);
    }
  }
  return;
}

