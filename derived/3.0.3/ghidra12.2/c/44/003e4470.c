
ulong FUN_003e4470(long *param_1,long param_2,uint param_3)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar11 = (ulong)param_3;
  if (param_3 != 0) {
    FUN_03b38a74();
    iVar7 = FUN_003b5490();
    lVar9 = FUN_03b38a74();
    plVar2 = param_1 + 2;
    uVar8 = (int)*plVar2 + *(int *)(lVar9 + 0x8c4) * iVar7;
    uVar3 = 0;
    if (uVar8 <= *(uint *)((long)param_1 + 0xc)) {
      uVar3 = *(uint *)((long)param_1 + 0xc) - uVar8;
    }
    if (param_3 <= uVar3) {
      uVar3 = param_3;
    }
    uVar11 = (ulong)uVar3;
    if (uVar3 != 0) {
      FUN_03b38a74();
      uVar8 = FUN_003b5490();
      lVar9 = FUN_03b38a74();
      uVar3 = *(uint *)(lVar9 + 0x8c4);
      uVar10 = 0;
      iVar7 = uVar3 * uVar8;
      do {
        uVar4 = (int)param_1[4] + (int)param_1[3] + *(int *)((long)param_1 + 0x24) * uVar8;
        uVar1 = 0;
        if (*(uint *)((long)param_1 + 0xc) <= uVar4) {
          uVar1 = *(uint *)((long)param_1 + 0xc);
        }
        *(undefined2 *)(*param_1 + (ulong)(uVar4 - uVar1) * 2) =
             *(undefined2 *)(param_2 + uVar10 * 2);
        uVar1 = *(int *)((long)param_1 + 0x24) + 1;
        *(uint *)((long)param_1 + 0x24) = uVar1;
        if (uVar3 <= uVar1) {
          uVar1 = (int)param_1[4] + 1;
          *(uint *)(param_1 + 4) = uVar1;
          *(undefined4 *)((long)param_1 + 0x24) = 0;
          if (uVar8 <= uVar1) {
            *(undefined4 *)(param_1 + 4) = 0;
            uVar1 = (int)param_1[3] + iVar7;
            uVar4 = 0;
            if (*(uint *)((long)param_1 + 0xc) <= uVar1) {
              uVar4 = *(uint *)((long)param_1 + 0xc);
            }
            *(uint *)(param_1 + 3) = uVar1 - uVar4;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar6) {
                *(int *)plVar2 = (int)*plVar2 + iVar7;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar11);
    }
  }
  return uVar11;
}

