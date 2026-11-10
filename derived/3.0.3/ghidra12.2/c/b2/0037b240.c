
void FUN_0037b240(long param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  uint uVar6;
  byte *pbVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  
  pbVar7 = *(byte **)(param_2 + 200);
  lVar5 = *(long *)(*(long *)(param_2 + 0xb8) + 0x68);
  if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
    uVar11 = lVar5 + 0x22fU & -lVar5;
    if ((*pbVar7 & 1) == 0) goto LAB_0037b274;
LAB_0037b2a0:
    plVar10 = *(long **)(pbVar7 + 0x40);
    do {
      lVar9 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar9 + uVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    uVar11 = lVar5 + (ulong)**(uint **)(param_1 + 0x38) + 0x22f & -lVar5;
    if ((*pbVar7 & 1) != 0) goto LAB_0037b2a0;
LAB_0037b274:
    lVar9 = *(long *)(pbVar7 + 0x40);
    *(ulong *)(pbVar7 + 0x40) = lVar9 + uVar11;
  }
  uVar11 = -lVar5;
  *(int *)(param_1 + 0x30) = (int)lVar9;
  if ((*(uint *)(param_1 + 0x10) >> 0x10 & 1) == 0) {
    pbVar7 = *(byte **)(param_2 + 200);
    if ((*(uint *)(param_1 + 0x10) >> 0x11 & 1) == 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar8 = lVar5 + 0x8f;
        bVar2 = *pbVar7;
      }
      else {
        uVar8 = (ulong)*(uint *)(*(long *)(param_1 + 0x38) + 4) + 0x8f + lVar5;
        bVar2 = *pbVar7;
      }
      uVar8 = uVar8 & uVar11;
      if ((bVar2 & 1) != 0) {
        plVar10 = *(long **)(pbVar7 + 0x40);
        do {
          lVar9 = *plVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = lVar9 + uVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        goto LAB_0037b390;
      }
    }
    else {
      uVar8 = lVar5 + 0x21fU & uVar11;
      if ((*pbVar7 & 1) != 0) {
        plVar10 = *(long **)(pbVar7 + 0x40);
        do {
          lVar9 = *plVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = lVar9 + uVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        goto LAB_0037b390;
      }
    }
    lVar9 = *(long *)(pbVar7 + 0x40);
    *(ulong *)(pbVar7 + 0x40) = lVar9 + uVar8;
  }
  else {
    pbVar7 = *(byte **)(param_2 + 200);
    uVar8 = lVar5 + 0xdfU & uVar11;
    if ((*pbVar7 & 1) == 0) {
      lVar9 = *(long *)(pbVar7 + 0x40);
      *(ulong *)(pbVar7 + 0x40) = lVar9 + uVar8;
    }
    else {
      plVar10 = *(long **)(pbVar7 + 0x40);
      do {
        lVar9 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar9 + uVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
LAB_0037b390:
  *(int *)(param_1 + 0x34) = (int)lVar9;
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (uVar1 = *(uint *)(*(long *)(param_1 + 0x38) + 8), uVar1 != 0)) {
    pbVar7 = *(byte **)(param_2 + 200);
    uVar8 = lVar5 + -1 + (ulong)uVar1 & uVar11;
    if ((*pbVar7 & 1) == 0) {
      lVar9 = *(long *)(pbVar7 + 0x40);
      *(ulong *)(pbVar7 + 0x40) = lVar9 + uVar8;
    }
    else {
      plVar10 = *(long **)(pbVar7 + 0x40);
      do {
        lVar9 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar9 + uVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *(int *)(*(long *)(param_1 + 0x38) + 0xc) = (int)lVar9;
  }
  uVar1 = *(uint *)(param_1 + 0x14) & 3;
  if (uVar1 != 0) {
    lVar9 = *(long *)(param_1 + 0x18) +
            ((ulong)*(uint *)(param_1 + 0x10) & 3) * 0x10 +
            ((ulong)(*(uint *)(param_1 + 0x10) >> 2) & 3) * 0x14;
    if (*(char *)(lVar9 + 1) != '\a') {
      if ((uVar1 == 1) || (*(char *)(lVar9 + 0x11) == '\a')) {
        uVar6 = 1;
      }
      else if (uVar1 == 2) {
        uVar6 = 2;
      }
      else {
        uVar6 = 2;
        if (*(char *)(lVar9 + 0x21) != '\a') {
          uVar6 = 3;
        }
      }
      if (uVar1 <= uVar6) {
        return;
      }
    }
    pbVar7 = *(byte **)(param_2 + 200);
    uVar11 = lVar5 + 0xbfU & uVar11;
    if ((*pbVar7 & 1) == 0) {
      lVar5 = *(long *)(pbVar7 + 0x40);
      *(ulong *)(pbVar7 + 0x40) = lVar5 + uVar11;
    }
    else {
      plVar10 = *(long **)(pbVar7 + 0x40);
      do {
        lVar5 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar5 + uVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uVar1 = *(uint *)(param_1 + 0x10);
    *(long *)(*(long *)(param_1 + 0x18) +
             (((ulong)uVar1 & 3) * 0x10 + ((ulong)uVar1 & 0x30) | (ulong)(uVar1 >> 6) & 8) +
             ((ulong)(uVar1 >> 8) & 0xc) + ((ulong)(uVar1 >> 4) & 0x1c) +
             ((ulong)(uVar1 >> 0xc) & 8) + ((ulong)(uVar1 >> 0xd) & 0x60) +
             (ulong)(-(uVar1 >> 0xc & 1) & 0xc) + (ulong)(-(uVar1 >> 0x10 & 1) & 0x1c) +
             ((ulong)(uVar1 >> 0xc) & 0x10) * ((ulong)(uVar1 >> 6) & 7) +
             (ulong)((int)(uVar1 << 0xe) >> 0x1f & 0x74) +
             (((ulong)(uVar1 >> 0xd) & 3) + ((ulong)(uVar1 >> 2) & 3)) * 0x14) = lVar5;
  }
  return;
}

