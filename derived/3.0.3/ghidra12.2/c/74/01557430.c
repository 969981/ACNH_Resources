
bool FUN_01557430(long param_1,long param_2,uint param_3,long *param_4,int param_5)

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
  undefined8 uVar10;
  uint *puVar11;
  long lVar12;
  
  puVar11 = (uint *)(param_1 + 0x14);
  do {
    uVar4 = *puVar11;
    cVar9 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar11,0x10);
    if (bVar5) {
      *puVar11 = uVar4 | 0x80000000;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if ((uVar4 & 0x7fffffff) != 0) {
    if ((int)uVar4 < 0) {
      if ((int)*puVar11 < 0) {
        lVar12 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar12 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar11 < 0);
      }
    }
    else {
      FUN_03907b80(param_1);
    }
  }
  do {
    cVar9 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar11,0x10);
    if (bVar5) {
      *puVar11 = 0;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  lVar12 = param_4[0xe];
  bVar2 = *(byte *)((long)param_4 + 0x39);
  uVar3 = *(ushort *)((long)param_4 + 0x3a);
  if (*(uint *)(param_1 + 0x40) <= param_3) {
    param_3 = 0;
  }
  lVar6 = param_4[6];
  puVar11 = (uint *)(*(long *)(param_1 + 0x48) + (long)(int)param_3 * 0x18);
  iVar7 = (**(code **)(*param_4 + 0x20))(param_4);
  iVar8 = (**(code **)(*param_4 + 0x20))(param_4);
  uVar4 = *puVar11;
  if (uVar4 == 0xffffffff) goto LAB_01557624;
  uVar1 = (undefined4)param_4[6];
  uVar10 = *(undefined8 *)(param_2 + 0xb8);
  lVar12 = lVar12 + (ulong)(((int)lVar6 + iVar7) - 1U & -iVar8) *
                    (long)(int)(param_5 + (uint)uVar3 * (uint)bVar2);
  if (((uVar4 ^ 0xffffffff) & 0xff) == 0) {
    cVar9 = (char)(uVar4 >> 8);
    if (((uVar4 >> 8 ^ 0xffffffff) & 0xff) != 0) {
LAB_015575a8:
      (**(code **)(*param_4 + 0x40))(param_4,uVar10,1,(int)cVar9,lVar12,uVar1);
    }
  }
  else {
    (**(code **)(*param_4 + 0x40))(param_4,uVar10,0,(int)(char)uVar4,lVar12,uVar1);
    cVar9 = *(char *)((long)puVar11 + 1);
    if (cVar9 != -1) goto LAB_015575a8;
  }
  if (*(char *)((long)puVar11 + 2) != -1) {
    (**(code **)(*param_4 + 0x40))(param_4,uVar10,2,(long)*(char *)((long)puVar11 + 2),lVar12,uVar1)
    ;
  }
  if (*(char *)((long)puVar11 + 3) != -1) {
    (**(code **)(*param_4 + 0x40))(param_4,uVar10,5,(long)*(char *)((long)puVar11 + 3),lVar12,uVar1)
    ;
  }
LAB_01557624:
  return uVar4 != 0xffffffff;
}

