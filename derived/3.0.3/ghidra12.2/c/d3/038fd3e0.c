
undefined8
FUN_038fd3e0(int *param_1,int *param_2,short *param_3,long param_4,undefined8 param_5,uint param_6,
            uint param_7)

{
  int *piVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  int local_7c;
  int local_78;
  int iStack_74;
  long local_70;
  undefined8 uStack_68;
  
  lVar11 = DAT_05ae78f0;
  puVar10 = (undefined8 *)PTR_DAT_04bc1010;
  local_70 = *(long *)(param_2 + 2);
  local_7c = *param_1;
  if (local_70 == 0) {
    if (local_7c != -1) {
      uVar7 = local_7c - (uint)*(ushort *)(DAT_05ae78f0 + 0x3da);
      if (*(uint *)(DAT_05ae78f0 + 0x368) <= uVar7) {
        uVar7 = 0;
      }
      piVar2 = (int *)(*(long *)(DAT_05ae78f0 + 0x370) + (long)(int)uVar7 * 0x20);
      do {
        iVar8 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar8 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == 1) {
        piVar1 = (int *)(lVar11 + 0x3e0);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        nn::os::LockMutex((MutexType *)(lVar11 + 0x348));
        piVar1 = (int *)(lVar11 + 0x378) + (ulong)*(byte *)(lVar11 + 0x3d8) * 4;
        if (1 < *(byte *)(lVar11 + 0x3d8)) {
          piVar1 = (int *)(lVar11 + 0x378);
        }
        if (*piVar1 < piVar1[1]) {
          *(int **)(*(long *)(piVar1 + 2) + (long)*piVar1 * 8) = piVar2;
          *piVar1 = *piVar1 + 1;
        }
        nn::os::UnlockMutex((MutexType *)(lVar11 + 0x348));
      }
      param_1[2] = 0;
      *param_1 = -1;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      return 1;
    }
  }
  else {
    if (local_7c != -1) {
      if (((((local_70 == *(long *)(param_1 + 4)) && (*param_2 == param_1[2])) &&
           (param_2[1] == param_1[3])) &&
          (((*param_3 == (short)param_1[8] && (param_3[1] == *(short *)((long)param_1 + 0x22))) &&
           ((param_3[2] == (short)param_1[9] &&
            ((param_3[3] == *(short *)((long)param_1 + 0x26) &&
             ((char)param_3[4] == (char)param_1[10])))))))) &&
         ((*(char *)((long)param_3 + 9) == *(char *)((long)param_1 + 0x29) &&
          (((((param_3[5] == *(short *)((long)param_1 + 0x2a) &&
              ((char)param_3[0xf] == *(char *)((long)param_1 + 0x3e))) &&
             ((char)param_3[0xd] == *(char *)((long)param_1 + 0x3a))) &&
            ((*(char *)((long)param_3 + 0x1b) == *(char *)((long)param_1 + 0x3b) &&
             ((char)param_3[0xe] == (char)param_1[0xf])))) &&
           (((param_6 & param_7 & 1) == 0 &&
            (*(char *)((long)param_3 + 0x1d) == *(char *)((long)param_1 + 0x3d))))))))) {
        if (param_4 == 0) {
          return 0;
        }
        iVar8 = FUN_038fcb50(*(undefined8 *)PTR_DAT_04bc1010,&local_7c,param_4,param_5,param_7 & 1);
        *param_1 = iVar8;
        FUN_038fcc90(*puVar10,&local_7c);
        return 1;
      }
      lVar11 = *(long *)PTR_DAT_04bc1010;
      uVar7 = local_7c - (uint)*(ushort *)(lVar11 + 0x3da);
      if (*(uint *)(lVar11 + 0x368) <= uVar7) {
        uVar7 = 0;
      }
      piVar2 = (int *)(*(long *)(lVar11 + 0x370) + (long)(int)uVar7 * 0x20);
      do {
        iVar8 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar8 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == 1) {
        piVar1 = (int *)(lVar11 + 0x3e0);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        nn::os::LockMutex((MutexType *)(lVar11 + 0x348));
        piVar1 = (int *)(lVar11 + 0x378) + (ulong)*(byte *)(lVar11 + 0x3d8) * 4;
        if (1 < *(byte *)(lVar11 + 0x3d8)) {
          piVar1 = (int *)(lVar11 + 0x378);
        }
        if (*piVar1 < piVar1[1]) {
          *(int **)(*(long *)(piVar1 + 2) + (long)*piVar1 * 8) = piVar2;
          *piVar1 = *piVar1 + 1;
        }
        nn::os::UnlockMutex((MutexType *)(lVar11 + 0x348));
        puVar10 = &DAT_05ae78f0;
      }
      param_1[2] = 0;
      *param_1 = -1;
      *(long *)(param_1 + 4) = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      local_70 = *(long *)(param_2 + 2);
    }
    local_78 = *param_2;
    iStack_74 = param_2[1];
    uStack_68 = *(undefined8 *)(param_2 + 4);
    iVar8 = FUN_038fc580(*puVar10,&local_78,param_3,param_4,param_5,param_7 & 1);
    *param_1 = iVar8;
    param_1[2] = *param_2;
    param_1[3] = param_2[1];
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 4);
    uVar3 = *(undefined8 *)param_3;
    uVar4 = *(undefined8 *)(param_3 + 4);
    uVar9 = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)((long)param_1 + 0x37) = *(undefined8 *)((long)param_3 + 0x17);
    *(undefined8 *)(param_1 + 8) = uVar3;
    *(undefined8 *)(param_1 + 10) = uVar4;
    *(undefined8 *)(param_1 + 0xc) = uVar9;
  }
  return 1;
}

