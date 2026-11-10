
undefined1  [16] FUN_001ecc20(long *param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 local_28;
  
  puVar4 = (ulong *)FUN_001ece00(param_1,&local_28,param_2);
  if (*puVar4 != 0) {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = *puVar4;
    return auVar9;
  }
  auVar10._0_8_ = (undefined8 *)FUN_00187df4(0xe0);
  FUN_001e1564(auVar10._0_8_ + 4,param_3);
  auVar10._0_8_[0x17] = &PTR_LAB_0483cdf8;
  auVar10._0_8_[0x18] = 0;
  lVar6 = *(long *)(param_3 + 0xa0);
  if (lVar6 != 0) {
    auVar10._0_8_[0x18] = lVar6;
    piVar1 = (int *)(lVar6 + 8);
    if (*piVar1 != 0) {
      iVar7 = *piVar1;
      if (iVar7 == *piVar1) {
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_001ecccc;
        bVar8 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_001ecccc:
        bVar8 = false;
      }
      if (!bVar8) {
        do {
          iVar2 = *piVar1;
          if (iVar2 == iVar7) {
            cVar3 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
              *piVar1 = iVar7 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') break;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar7 = iVar2;
        } while( true );
      }
    }
  }
  auVar10._0_8_[0x19] = &PTR_LAB_0483cd28;
  auVar10._0_8_[0x1a] = 0;
  lVar6 = *(long *)(param_3 + 0xb0);
  if (lVar6 == 0) goto LAB_001ecd64;
  auVar10._0_8_[0x1a] = lVar6;
  piVar1 = (int *)(lVar6 + 8);
  if (*piVar1 == 0) goto LAB_001ecd64;
  iVar7 = *piVar1;
  if (iVar7 == *piVar1) {
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar8) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_001ecd5c;
    bVar8 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_001ecd5c:
    bVar8 = false;
  }
  if (!bVar8) {
    do {
      iVar2 = *piVar1;
      if (iVar2 == iVar7) {
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') break;
      }
      else {
        ClearExclusiveLocal();
      }
      iVar7 = iVar2;
    } while( true );
  }
LAB_001ecd64:
  *(undefined1 *)(auVar10._0_8_ + 0x1b) = *(undefined1 *)(param_3 + 0xb8);
  *auVar10._0_8_ = 0;
  auVar10._0_8_[1] = 0;
  auVar10._0_8_[2] = local_28;
  *puVar4 = (ulong)auVar10._0_8_;
  puVar5 = auVar10._0_8_;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    puVar5 = (undefined8 *)*puVar4;
  }
  FUN_03876250(param_1[1],puVar5);
  param_1[2] = param_1[2] + 1;
  auVar10._8_8_ = 1;
  return auVar10;
}

