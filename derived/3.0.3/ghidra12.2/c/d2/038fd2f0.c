
void FUN_038fd2f0(int *param_1,int *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int local_38;
  int iStack_34;
  undefined8 local_30;
  undefined8 uStack_28;
  
  iVar7 = *param_2;
  *param_1 = iVar7;
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  uVar2 = *(undefined8 *)(param_2 + 10);
  uVar9 = *(undefined8 *)(param_2 + 0xc);
  uVar10 = *(undefined8 *)((long)param_2 + 0x37);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)((long)param_1 + 0x37) = uVar10;
  *(undefined8 *)(param_1 + 10) = uVar2;
  *(undefined8 *)(param_1 + 0xc) = uVar9;
  puVar6 = PTR_DAT_04bc1010;
  if (iVar7 != -1) {
    lVar8 = *(long *)PTR_DAT_04bc1010;
    uVar5 = iVar7 - (uint)*(ushort *)(lVar8 + 0x3da);
    if (*(uint *)(lVar8 + 0x368) <= uVar5) {
      uVar5 = 0;
    }
    piVar1 = (int *)(*(long *)(lVar8 + 0x370) + (long)(int)uVar5 * 0x20);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = 0;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      local_38 = param_1[2];
      iStack_34 = param_1[3];
      local_30 = *(undefined8 *)(param_1 + 4);
      uStack_28 = *(undefined8 *)(param_1 + 6);
      iVar7 = FUN_038fc580(*(undefined8 *)puVar6,&local_38,param_1 + 8,0,"countup",0);
      *param_1 = iVar7;
    }
  }
  return;
}

