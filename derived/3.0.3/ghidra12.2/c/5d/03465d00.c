
uint FUN_03465d00(long param_1,long *param_2)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  
  if (*(char *)(param_1 + 0xc28) != '\0') {
    return 1;
  }
  lVar4 = *param_2;
  *(undefined8 *)(param_1 + 0xc10) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xc10) = *(undefined8 *)(lVar4 + 8);
  *(undefined4 *)(param_1 + 0xc18) = *(undefined4 *)(lVar4 + 0x10);
  *(undefined4 *)(param_1 + 0xc20) = *(undefined4 *)(lVar4 + 0x18);
  lVar4 = DAT_0575aaf0;
  uVar5 = *(uint *)(param_2 + 1);
  bVar3 = *(int *)(DAT_0575aaf0 + 0x10) != 2;
  if (uVar5 == 0) {
    if (bVar3) {
      iVar6 = *(int *)(DAT_0575aaf0 + 8);
      if (iVar6 < 1) {
        lVar7 = *(long *)(DAT_05231900 + 0x140);
        if ((*(char *)(lVar7 + 0x16c) != '\0' || *(char *)(lVar7 + 0x16d) != '\0') &&
           ((*(uint *)(lVar7 + 0x170) >> 1 & 1) == 0)) {
          puVar1 = (uint *)(lVar7 + 0x170);
          do {
            uVar5 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar5 | 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar5 & 1) == 0) goto LAB_03465e34;
        }
        goto LAB_03465e50;
      }
LAB_03465de4:
      uVar5 = 1;
LAB_03465de8:
      *(int *)(lVar4 + 8) = iVar6 + 1;
      goto LAB_03465e54;
    }
  }
  else if (bVar3) {
    iVar6 = *(int *)(DAT_0575aaf0 + 8);
    if (0 < iVar6) goto LAB_03465de4;
    lVar7 = *(long *)(DAT_05231900 + 0x140);
    if ((*(char *)(lVar7 + 0x16c) != '\0' || *(char *)(lVar7 + 0x16d) != '\0') &&
       ((*(uint *)(lVar7 + 0x170) >> 1 & 1) == 0)) {
      puVar1 = (uint *)(lVar7 + 0x170);
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 | 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar8 & 1) == 0) {
        uVar8 = 4;
        if (*(char *)(lVar7 + 0x16d) != '\0') {
          uVar8 = 0x40;
        }
        if (uVar5 <= uVar8) {
          uVar8 = uVar5;
        }
        *(uint *)(lVar7 + 0x178) = uVar8;
LAB_03465e34:
        if (*(int *)(lVar4 + 0x10) == 0) {
          *(undefined4 *)(lVar4 + 0x10) = 1;
        }
        iVar6 = *(int *)(lVar4 + 8);
        uVar5 = 0;
        goto LAB_03465de8;
      }
    }
LAB_03465e50:
    uVar5 = 0xffffffff;
    goto LAB_03465e54;
  }
  uVar5 = 0xfffffffd;
LAB_03465e54:
  if (-1 < (int)uVar5) {
    *(undefined1 *)(param_1 + 0xc28) = 1;
  }
  return ~uVar5 >> 0x1f;
}

