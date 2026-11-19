
bool FUN_0391e640(long param_1,long param_2,uint param_3,undefined8 *param_4,int param_5)

{
  undefined4 uVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  long *plVar10;
  undefined8 uVar11;
  uint *puVar12;
  long lVar13;
  
  plVar10 = (long *)*param_4;
  puVar12 = (uint *)(param_1 + 0x14);
  do {
    uVar4 = *puVar12;
    cVar9 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar12,0x10);
    if (bVar5) {
      *puVar12 = uVar4 | 0x80000000;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if ((uVar4 & 0x7fffffff) != 0) {
    if ((int)uVar4 < 0) {
      if ((int)*puVar12 < 0) {
        lVar13 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar13 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar12 < 0);
      }
    }
    else {
      FUN_03907b80(param_1);
    }
  }
  do {
    cVar9 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar12,0x10);
    if (bVar5) {
      *puVar12 = 0;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  lVar13 = plVar10[0xe];
  bVar2 = *(byte *)((long)plVar10 + 0x39);
  uVar3 = *(ushort *)((long)plVar10 + 0x3a);
  if (*(uint *)(param_1 + 0x40) <= param_3) {
    param_3 = 0;
  }
  lVar6 = plVar10[6];
  puVar12 = (uint *)(*(long *)(param_1 + 0x48) + (long)(int)param_3 * 0x18);
  iVar7 = (**(code **)(*plVar10 + 0x20))(plVar10);
  iVar8 = (**(code **)(*plVar10 + 0x20))(plVar10);
  uVar4 = *puVar12;
  if (uVar4 == 0xffffffff) goto LAB_0391e834;
  uVar1 = (undefined4)plVar10[6];
  uVar11 = *(undefined8 *)(param_2 + 0xb8);
  lVar13 = lVar13 + (ulong)(((int)lVar6 + iVar7) - 1U & -iVar8) *
                    (long)(int)(param_5 + (uint)uVar3 * (uint)bVar2);
  if (((uVar4 ^ 0xffffffff) & 0xff) == 0) {
    cVar9 = (char)(uVar4 >> 8);
    if (((uVar4 >> 8 ^ 0xffffffff) & 0xff) != 0) {
LAB_0391e7b8:
      (**(code **)(*plVar10 + 0x40))(plVar10,uVar11,1,(int)cVar9,lVar13,uVar1);
    }
  }
  else {
    (**(code **)(*plVar10 + 0x40))(plVar10,uVar11,0,(int)(char)uVar4,lVar13,uVar1);
    cVar9 = *(char *)((long)puVar12 + 1);
    if (cVar9 != -1) goto LAB_0391e7b8;
  }
  if (*(char *)((long)puVar12 + 2) != -1) {
    (**(code **)(*plVar10 + 0x40))(plVar10,uVar11,2,(long)*(char *)((long)puVar12 + 2),lVar13,uVar1)
    ;
  }
  if (*(char *)((long)puVar12 + 3) != -1) {
    (**(code **)(*plVar10 + 0x40))(plVar10,uVar11,5,(long)*(char *)((long)puVar12 + 3),lVar13,uVar1)
    ;
  }
LAB_0391e834:
  return uVar4 != 0xffffffff;
}

