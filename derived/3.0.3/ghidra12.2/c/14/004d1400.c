
uint FUN_004d1400(int *param_1,uint param_2,uint param_3,uint *param_4)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 *puVar13;
  uint uVar14;
  
  if (*param_1 != 0) {
    if (0 < param_1[0x126]) {
      lVar10 = 0;
      iVar5 = 0;
      uVar12 = 0;
      puVar13 = *(undefined8 **)(param_1 + 0x124);
      uVar14 = 0;
      do {
        uVar6 = (int)((ulong)*puVar13 >> 0x20) - (int)*puVar13;
        uVar8 = uVar6;
        iVar9 = (int)lVar10;
        if ((int)uVar6 <= (int)uVar14) {
          uVar8 = uVar14;
          iVar9 = iVar5;
        }
        iVar5 = iVar9;
        lVar10 = lVar10 + 1;
        uVar12 = (uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)) + uVar12;
        puVar13 = puVar13 + 8;
        uVar14 = uVar8;
      } while (lVar10 < param_1[0x126]);
      if (0xf < (int)uVar8) {
        uVar14 = uVar8 >> 1;
        if (uVar12 >> 3 <= uVar8 >> 1) {
          uVar14 = uVar12 >> 3;
        }
        plVar1 = (long *)(*(long *)(param_1 + 0x124) + (long)iVar5 * 0x40);
        if ((int)uVar14 <= (int)param_3) {
          uVar14 = param_3;
        }
        do {
          lVar10 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar10 + (ulong)uVar14;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uVar6 = (uint)lVar10;
        uVar8 = (uint)((ulong)lVar10 >> 0x20);
        uVar12 = uVar8 - uVar6;
        if (uVar14 + uVar6 <= uVar8) {
          uVar12 = uVar14;
          uVar8 = uVar14 + uVar6;
        }
        if (uVar6 < uVar8) {
          if ((int)param_3 < (int)uVar12) {
            uVar11 = -(ulong)(param_2 >> 0x1f) & 0xffffffc000000000 | (ulong)param_2 << 6;
            *(ulong *)(*(long *)(param_1 + 0x124) + uVar11) = CONCAT44(uVar8,uVar6 + param_3);
            *(uint *)(*(long *)(param_1 + 0x10) + uVar11) = param_2;
          }
          *param_4 = uVar6;
          return uVar12;
        }
        goto LAB_004d1460;
      }
    }
    *param_1 = 0;
  }
LAB_004d1460:
  if (param_1[1] != 0) {
    return 0;
  }
  iVar5 = param_1[0x12];
  if (iVar5 < 2) {
    return 0;
  }
  iVar7 = *(int *)(*(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x40);
  iVar9 = 1;
  do {
    iVar2 = 0;
    if (iVar5 <= iVar7 + 1) {
      iVar2 = iVar5;
    }
    iVar7 = (iVar7 + 1) - iVar2;
    plVar1 = (long *)(*(long *)(param_1 + 0x124) + (long)iVar7 * 0x40);
    if ((uint)*plVar1 < (uint)((ulong)*plVar1 >> 0x20)) {
      do {
        lVar10 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar10 + (int)param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      uVar12 = (uint)lVar10;
      uVar14 = (uint)((ulong)lVar10 >> 0x20);
      if (uVar12 < uVar14) {
        *(int *)(*(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x40) = iVar7;
        *param_4 = uVar12;
        return uVar14 - uVar12;
      }
    }
    iVar9 = iVar9 + 1;
    if (iVar5 <= iVar9) {
      return 0;
    }
  } while( true );
}

