
void FUN_03a0cd90(long param_1,undefined8 param_2,undefined8 *param_3,uint param_4,
                 undefined4 param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  
  *(undefined4 *)((long)param_3 + 0x74) = 6;
  *(uint *)(param_3 + 4) = param_4;
  uVar9 = *(uint *)PTR_DAT_04bd0f28;
  if (uVar9 != 0) {
    *(uint *)((long)param_3 + 100) = param_4 & 1;
    *(undefined4 *)(param_3 + 0xe) = 0;
    if (uVar9 != 1) {
      *(uint *)(param_3 + 0xd) = param_4 >> 1 & 1;
      *(undefined4 *)(param_3 + 0xe) = 0;
      if (2 < uVar9) {
        *(uint *)((long)param_3 + 0x6c) = param_4 >> 2 & 1;
        *(undefined4 *)(param_3 + 0xe) = 0;
        if (uVar9 != 3) {
          if (uVar9 == 4) {
            uVar7 = 3;
          }
          else {
            uVar8 = 0;
            uVar6 = 4;
            do {
              uVar7 = uVar6;
              uVar8 = uVar8 + 2;
              *(uint *)((long)param_3 + 100) = param_4 >> (ulong)(uVar7 - 1 & 0x1f) & 1;
              *(undefined4 *)(param_3 + 0xe) = 0;
              *(uint *)((long)param_3 + 100) = param_4 >> (ulong)(uVar7 & 0x1f) & 1;
              *(undefined4 *)(param_3 + 0xe) = 0;
              uVar6 = uVar7 + 2;
            } while (uVar8 != ((ulong)uVar9 - 3 & 0xfffffffffffffffe));
            uVar7 = uVar7 + 1;
          }
          if (((ulong)uVar9 - 3 & 1) != 0) {
            *(uint *)((long)param_3 + 100) = param_4 >> (ulong)(uVar7 & 0x1f) & 1;
            *(undefined4 *)(param_3 + 0xe) = 0;
          }
        }
      }
    }
  }
  *(undefined4 *)(param_3 + 3) = param_5;
  (**(code **)*param_3)(param_3);
  uVar9 = *(uint *)(param_1 + 0x68);
  if (0 < (int)uVar9) {
    uVar6 = 0;
    do {
      if ((param_4 >> (ulong)(uVar6 & 0x1f) & 1) != 0) {
        uVar7 = uVar6;
        if (uVar9 <= uVar6) {
          uVar7 = 0;
        }
        lVar10 = *(long *)(*(long *)(param_1 + 0x70) + (ulong)uVar7 * 8);
        piVar1 = (int *)(lVar10 + 0x130);
        do {
        } while (*piVar1 == 1);
        do {
          do {
          } while (*piVar1 != 0);
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        DataMemoryBarrier(2,3);
        iVar3 = *(int *)(lVar10 + 0x128);
        iVar11 = *(int *)(lVar10 + 0x120);
        if (param_6 == 0) {
          if (iVar3 < iVar11) {
            *(int *)(lVar10 + 0x128) = iVar3 + 1;
            iVar3 = *(int *)(lVar10 + 0x124) + iVar3;
            iVar2 = 0;
            if (iVar11 <= iVar3) {
              iVar2 = iVar11;
            }
            iVar11 = iVar3 - iVar2;
            goto LAB_03a0cfa4;
          }
        }
        else if (iVar3 < iVar11) {
          *(int *)(lVar10 + 0x128) = iVar3 + 1;
          iVar3 = iVar11;
          if (0 < *(int *)(lVar10 + 0x124)) {
            iVar3 = *(int *)(lVar10 + 0x124);
          }
          if (iVar3 <= iVar11) {
            iVar11 = 0;
          }
          *(int *)(lVar10 + 0x124) = iVar3 + -1;
          iVar11 = (iVar3 + -1) - iVar11;
LAB_03a0cfa4:
          *(undefined8 **)(*(long *)(lVar10 + 0x118) + (long)iVar11 * 8) = param_3;
        }
        param_3[0xf] = param_2;
        DataMemoryBarrier(2,3);
        do {
          do {
          } while (*piVar1 != 1);
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        uVar9 = *(uint *)(param_1 + 0x68);
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)uVar9);
  }
  uVar9 = *(uint *)(param_1 + 0x88);
  if (*(uint *)(param_1 + 0x78) <= uVar9) {
    uVar9 = 0;
  }
  *(undefined8 **)(*(long *)(param_1 + 0x80) + (long)(int)uVar9 * 8) = param_3;
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  return;
}

