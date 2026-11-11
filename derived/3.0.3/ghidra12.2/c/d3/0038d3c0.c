
void FUN_0038d3c0(int *param_1,int *param_2,long param_3,code *param_4,undefined8 param_5,
                 undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int *piVar4;
  char *pcVar5;
  size_t sVar6;
  char *pcVar7;
  long lVar8;
  uint uVar9;
  undefined4 uVar10;
  long lVar11;
  undefined4 *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 local_68;
  
  iVar1 = *param_1;
  while (iVar1 == 2) {
    FUN_0038d3c0((long)param_1 + (ulong)(uint)param_1[1],param_2,param_3,param_4,param_5,param_6);
    param_1 = (int *)((long)param_1 + (ulong)(uint)param_1[2]);
    iVar1 = *param_1;
  }
  if (iVar1 == 1) {
    uVar9 = 0;
    if (param_1[2] != 0) {
      uVar2 = param_1[3];
      uVar15 = 0;
      lVar14 = param_3 + 0xe818;
      lVar13 = param_3 + 0x6818;
      do {
        puVar12 = (undefined4 *)((long)param_1 + uVar15 * 0x18 + (ulong)uVar2);
        local_68 = 0;
        pcVar7 = (char *)((long)param_1 + (ulong)(uint)puVar12[2]);
        piVar4 = (int *)(*param_4)(&local_68,pcVar7,0x73636674,param_5);
        lVar11 = uVar15 * 4;
        *(int **)(param_3 + (long)*param_2 * 0x80 + uVar15 * 8 + 0x18) = piVar4;
        *(undefined8 *)(param_3 + (long)*param_2 * 0x80 + uVar15 * 8 + 0x1018) = local_68;
        *(undefined4 *)(param_3 + (long)*param_2 * 0x40 + lVar11 + 0x2018) = *puVar12;
        *(undefined1 *)(param_3 + (long)*param_2 * 0x10 + uVar15 + 0x2818) =
             *(undefined1 *)(puVar12 + 3);
        *(undefined4 *)(param_3 + (long)*param_2 * 0x40 + lVar11 + 0x168b4) = puVar12[1];
        pcVar5 = strstr(pcVar7,".bfttf");
        if ((pcVar5 == (char *)0x0) || (sVar6 = strlen(pcVar5), sVar6 != 6)) {
          pcVar5 = strstr(pcVar7,".bfotf");
          if ((pcVar5 == (char *)0x0) || (sVar6 = strlen(pcVar5), sVar6 != 6)) {
            pcVar7 = strstr(pcVar7,".otf");
            if (pcVar7 == (char *)0x0) {
              uVar9 = 0;
            }
            else {
              sVar6 = strlen(pcVar7);
              uVar9 = (uint)(sVar6 == 4);
            }
          }
          else {
            iVar1 = *piVar4;
            if (((iVar1 == 0x100) || (iVar1 == 0x66637474)) || (iVar1 == 0x4f54544f)) {
              uVar9 = 1;
            }
            else {
              uVar9 = 3;
            }
          }
        }
        else {
          iVar1 = *piVar4;
          if (((iVar1 == 0x100) || (iVar1 == 0x66637474)) || (iVar1 == 0x4f54544f)) {
            uVar9 = 0;
          }
          else {
            uVar9 = 2;
          }
        }
        lVar8 = 0;
        *(uint *)(param_3 + (long)*param_2 * 0x40 + lVar11 + 0x3a18) = uVar9;
        lVar3 = uVar15 * 0x18 + (ulong)uVar2;
        piVar4 = (int *)((long)param_1 + lVar3 + 0x10);
        *(int *)(param_3 + (long)*param_2 * 0x40 + lVar11 + 0x6018) = *piVar4;
        puVar12 = (undefined4 *)((long)param_1 + (ulong)*(uint *)((long)param_1 + lVar3 + 0x14) + 4)
        ;
        do {
          if (lVar8 < *piVar4) {
            *(undefined4 *)(lVar13 + (long)*param_2 * 0x400 + lVar8 * 4) = puVar12[-1];
            uVar10 = *puVar12;
          }
          else {
            uVar10 = 0;
            *(undefined4 *)(lVar13 + (long)*param_2 * 0x400 + lVar8 * 4) = 0;
          }
          puVar12 = puVar12 + 2;
          *(undefined4 *)(lVar14 + (long)*param_2 * 0x400 + lVar8 * 4) = uVar10;
          lVar8 = lVar8 + 1;
        } while (lVar8 != 0x10);
        uVar9 = param_1[2];
        uVar15 = uVar15 + 1;
        lVar14 = lVar14 + 0x40;
        lVar13 = lVar13 + 0x40;
      } while (uVar15 < uVar9);
    }
    *(uint *)(param_3 + (long)*param_2 * 4 + 0x1681c) = uVar9;
    *param_2 = *param_2 + 1;
  }
  return;
}

