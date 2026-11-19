
void FUN_0390ebc0(long param_1,undefined4 *param_2,ulong param_3,ulong param_4)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_90 [64];
  
  puVar7 = PTR_DAT_04bc1010;
  if (*(long *)(param_1 + 0x100) != 0) {
    lVar11 = *(long *)PTR_DAT_04bc1010;
    (**(code **)PTR_DAT_04bc8e38)(param_1 + 8);
    piVar1 = (int *)(lVar11 + 0x650);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined1 *)(param_1 + 0x40) = 0;
    *(undefined1 *)(param_1 + 0x4c) = 0;
    *(undefined1 *)(param_1 + 0x58) = 0;
    *(undefined1 *)(param_1 + 100) = 0;
    *(undefined1 *)(param_1 + 0x70) = 0;
    *(undefined1 *)(param_1 + 0x7c) = 0;
    *(undefined1 *)(param_1 + 0x88) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(undefined1 *)(param_1 + 0xa0) = 0;
    *(undefined1 *)(param_1 + 0xac) = 0;
    *(undefined1 *)(param_1 + 0xb8) = 0;
    *(undefined1 *)(param_1 + 0xc4) = 0;
    *(undefined1 *)(param_1 + 0xd0) = 0;
    *(undefined1 *)(param_1 + 0xdc) = 0;
    *(undefined1 *)(param_1 + 0xe8) = 0;
    *(undefined1 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined4 *)(param_1 + 0x118) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  *(undefined4 *)(param_1 + 0xf8) = *param_2;
  *(undefined4 *)(param_1 + 0xfc) = param_2[1];
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 2);
  uVar10 = *(undefined8 *)(param_2 + 4);
  *(int *)(param_1 + 0x110) = (int)param_3;
  *(undefined8 *)(param_1 + 0x108) = uVar10;
  if ((int)param_3 == 0) {
    uVar9 = 1;
  }
  else {
    uVar5 = 0;
    if (param_3 != 0) {
      uVar5 = param_4 / param_3;
    }
    uVar9 = (undefined4)uVar5;
    param_4 = uVar5 * param_3;
  }
  *(undefined4 *)(param_1 + 0x114) = uVar9;
  puVar6 = PTR_DAT_04bbd7c0;
  *(int *)(param_1 + 0x118) = (int)param_4;
  (*DAT_04c62088)(auStack_90,*(undefined8 *)(*(long *)puVar6 + 0x30));
  (**(code **)PTR_DAT_04bbd7b0)(auStack_90);
  (**(code **)PTR_DAT_04bbd7c8)
            (auStack_90,*(undefined8 *)(param_1 + 0x100),*(undefined4 *)(param_1 + 0xf8),
             *(undefined4 *)(param_1 + 0x118));
  lVar11 = *(long *)puVar7;
  (**(code **)PTR_DAT_04bbd7d0)(param_1 + 8,auStack_90);
  piVar1 = (int *)(lVar11 + 0x650);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  lVar11 = *(long *)(param_1 + 0x100);
  if (lVar11 != 0) {
    uVar9 = *(undefined4 *)(param_1 + 0x118);
    uVar2 = *(undefined4 *)(param_1 + 0xf8);
    uVar8 = (**(code **)PTR_DAT_04bcf030)(lVar11);
    if ((uVar8 >> 2 & 1) != 0) {
      (**(code **)PTR_DAT_04bcf350)(lVar11,uVar2,uVar9);
    }
  }
  return;
}

