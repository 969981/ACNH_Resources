
/* WARNING: Removing unreachable block (ram,0x001c3e74) */

void FUN_001c3db0(long param_1,long param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  ushort uVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  uVar4 = *(ushort *)(param_2 + 0x70);
  iVar11 = (uint)uVar4 - (uint)*(ushort *)(param_1 + 0x28);
  if (iVar11 != 0 && (short)iVar11 < 1) {
    return;
  }
  puVar13 = (undefined8 *)(param_1 + 0x10);
  if ((undefined8 *)*puVar13 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)*puVar13;
    puVar12 = puVar13;
    do {
      while (puVar9 = puVar10, (short)(uVar4 - *(short *)(puVar9 + 5)) < 1) {
        puVar10 = (undefined8 *)*puVar9;
        puVar12 = puVar9;
        if ((undefined8 *)*puVar9 == (undefined8 *)0x0) goto LAB_001c3e20;
      }
      puVar1 = puVar9 + 1;
      puVar10 = (undefined8 *)*puVar1;
      puVar9 = puVar12;
    } while ((undefined8 *)*puVar1 != (undefined8 *)0x0);
LAB_001c3e20:
    if ((puVar9 != puVar13) && ((short)(*(short *)(puVar9 + 5) - uVar4) < 1)) {
      return;
    }
  }
  piVar2 = (int *)(param_2 + 8);
  iVar11 = *piVar2;
  if (iVar11 == *piVar2) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar7) {
      *piVar2 = *piVar2 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') {
LAB_001c3eb4:
      sVar5 = *(short *)(param_2 + 0x70);
      puVar10 = (undefined8 *)*puVar13;
      do {
        puVar12 = puVar13;
        if (puVar10 == (undefined8 *)0x0) {
LAB_001c3f10:
          puVar9 = (undefined8 *)FUN_00187df4(0x38);
          puVar8 = PTR_DAT_04bcc320;
          puVar9[6] = 0;
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = puVar13;
          *puVar12 = puVar9;
          *(short *)(puVar9 + 5) = sVar5;
          puVar9[4] = puVar8 + 0x10;
          puVar13 = puVar9;
          if (**(long **)(param_1 + 8) != 0) {
            *(long *)(param_1 + 8) = **(long **)(param_1 + 8);
            puVar13 = (undefined8 *)*puVar12;
          }
          FUN_03876250(*(undefined8 *)(param_1 + 0x10),puVar13);
          *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
LAB_001c3f70:
          puVar9[6] = param_2;
          return;
        }
        while (puVar9 = puVar10, puVar13 = puVar9, (short)(*(short *)(puVar9 + 5) - sVar5) < 1) {
          if ((short)(sVar5 - *(short *)(puVar9 + 5)) < 1) goto LAB_001c3f70;
          puVar10 = (undefined8 *)puVar9[1];
          if ((undefined8 *)puVar9[1] == (undefined8 *)0x0) {
            puVar12 = puVar9 + 1;
            goto LAB_001c3f10;
          }
        }
        puVar10 = (undefined8 *)*puVar9;
      } while( true );
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    iVar3 = *piVar2;
    if (iVar3 == iVar11) {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = iVar11 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 == '\0') goto LAB_001c3eb4;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar11 = iVar3;
  } while( true );
}

