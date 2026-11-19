
long FUN_039011c0(long param_1,long param_2,int param_3,int param_4,int param_5)

{
  uint *puVar1;
  int *piVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  int local_58;
  undefined4 uStack_54;
  long local_50;
  long lStack_48;
  
  uVar13 = (ulong)param_3;
  puVar1 = (uint *)(param_1 + 100);
  uVar15 = 0;
  if (uVar13 != 0) {
    uVar15 = ((uVar13 - 1) + param_2) / uVar13;
  }
  uVar15 = (long)param_5 * (long)param_4 * uVar15 * uVar13;
  do {
    uVar6 = *(uint *)(param_1 + 100);
    iVar14 = (int)*(undefined8 *)(param_1 + 0x18);
    uVar16 = (ulong)iVar14;
    uVar11 = 0;
    if (uVar13 != 0) {
      uVar11 = ((uVar13 - 1) + (ulong)uVar6) / uVar13;
    }
    uVar3 = uVar11 * uVar13 + uVar15;
    uVar5 = uVar15;
    if (uVar3 <= uVar16) {
      uVar5 = uVar3;
    }
    while (uVar6 == *puVar1) {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = (uint)uVar5;
        cVar8 = ExclusiveMonitorsStatus();
      }
      if (cVar8 == '\0') {
        puVar1 = (uint *)(param_1 + 0x60);
        iVar14 = iVar14 - uVar6;
        do {
          uVar6 = *(uint *)(param_1 + 0x60);
          uVar7 = *(uint *)(param_1 + 0x40);
          uVar10 = 0;
          if (uVar7 != 0) {
            uVar10 = (uVar6 + 1) / uVar7;
          }
          while (uVar6 == *puVar1) {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar9) {
              *puVar1 = (uVar6 + 1) - uVar10 * uVar7;
              cVar8 = ExclusiveMonitorsStatus();
            }
            if (cVar8 == '\0') {
              lStack_48 = param_1 + 8;
              if (*(uint *)(param_1 + 0x40) <= uVar6) {
                uVar6 = 0;
              }
              lVar4 = *(long *)(param_1 + 0x48) + (long)(int)uVar6 * 0x80;
              iVar12 = 0;
              if (uVar3 <= uVar16) {
                iVar12 = (int)(uVar11 * uVar13);
              }
              local_50 = *(long *)(param_1 + 0x20);
              local_58 = 0;
              if (*(long *)(param_1 + 0x28) != 0) {
                local_58 = *(int *)(param_1 + 0x10) - *(int *)(*(long *)(param_1 + 0x28) + 0x10);
              }
              local_58 = local_58 + iVar12;
              if (local_50 == 0) {
                uStack_54 = 0;
              }
              else {
                uStack_54 = *(undefined4 *)(local_50 + 0x104);
              }
              *(int *)(lVar4 + 0x7c) = param_3;
              *(int *)(lVar4 + 0x30) = (int)param_2;
              *(int *)(lVar4 + 0x34) = (int)uVar15;
              FUN_0390dc00(lVar4,&local_58,param_4,param_5);
              piVar2 = (int *)(param_1 + 0x68);
              do {
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar9) {
                  *piVar2 = *piVar2 + 1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              piVar2 = (int *)(param_1 + 0x6c);
              if (uVar3 <= uVar16) {
                iVar14 = 0;
              }
              do {
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar9) {
                  *piVar2 = iVar14 + (int)uVar15 + *piVar2;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              return lVar4;
            }
          }
        } while( true );
      }
    }
  } while( true );
}

