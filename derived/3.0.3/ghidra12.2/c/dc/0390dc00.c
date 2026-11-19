
void FUN_0390dc00(long *param_1,undefined4 *param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  undefined1 auStack_70 [64];
  
  *(char *)(param_1 + 7) = (char)param_3;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  lVar13 = *(long *)(param_2 + 2);
  lVar4 = *(long *)(param_2 + 4);
  *(short *)((long)param_1 + 0x3a) = (short)param_4;
  *(undefined4 *)(param_1 + 3) = uVar2;
  *(undefined4 *)((long)param_1 + 0x1c) = uVar3;
  param_1[4] = lVar13;
  param_1[5] = lVar4;
  if (param_1[1] != 0) {
    lVar13 = param_1[6];
    iVar9 = (**(code **)(*param_1 + 0x20))(param_1);
    iVar10 = (**(code **)(*param_1 + 0x20))(param_1);
    lVar4 = param_1[6];
    iVar11 = (**(code **)(*param_1 + 0x20))(param_1);
    iVar12 = (**(code **)(*param_1 + 0x20))(param_1);
    *(uint *)((long)param_1 + 0x34) =
         (((int)lVar4 + iVar11) - 1U & -iVar12) +
         (((int)lVar13 + iVar9) - 1U & -iVar10) * (param_4 * param_3 + -1);
    lVar13 = param_1[4];
  }
  puVar8 = PTR_DAT_04bc1010;
  if (lVar13 != 0) {
    if ((*(byte *)((long)param_1 + 0x3c) >> 2 & 1) != 0) {
      lVar13 = *(long *)PTR_DAT_04bc1010;
      (**(code **)PTR_DAT_04bc8e38)(param_1 + 8);
      piVar1 = (int *)(lVar13 + 0x654);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    (*DAT_04c62088)(auStack_70,*(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x30));
    (**(code **)PTR_DAT_04bbd7b0)(auStack_70);
    (**(code **)PTR_DAT_04bbd7c8)
              (auStack_70,param_1[4],(int)param_1[3],*(undefined4 *)((long)param_1 + 0x34));
    lVar13 = *(long *)puVar8;
    (**(code **)PTR_DAT_04bbd7d0)(param_1 + 8,auStack_70);
    piVar1 = (int *)(lVar13 + 0x654);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    lVar13 = (**(code **)PTR_DAT_04bbd560)(param_1 + 8);
    param_1[0xe] = lVar13;
    *(byte *)((long)param_1 + 0x3c) = *(byte *)((long)param_1 + 0x3c) | 4;
  }
  *(undefined1 *)((long)param_1 + 0x39) = 0;
  (**(code **)(*param_1 + 0x20))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  uVar5 = *(uint *)(param_1 + 3);
  lVar13 = 0;
  if (param_1[4] != 0) {
    lVar13 = (*DAT_04c61fd0)();
  }
  param_1[2] = lVar13 + (ulong)uVar5;
  return;
}

