
void FUN_0038d710(int *param_1,int *param_2,long param_3,code *param_4,undefined8 param_5,
                 uint param_6)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int *piVar5;
  char *pcVar6;
  size_t sVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  undefined4 *puVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined4 uVar17;
  undefined8 local_68;
  
  iVar2 = *param_1;
  while (iVar2 == 2) {
    FUN_0038d710((long)param_1 + (ulong)(uint)param_1[1],param_2,param_3,param_4,param_5,param_6);
    param_1 = (int *)((long)param_1 + (ulong)(uint)param_1[2]);
    iVar2 = *param_1;
  }
  if (iVar2 == 1) {
    uVar11 = 0;
    if (param_1[3] != 0) {
      uVar3 = param_1[4];
      uVar15 = 0;
      lVar16 = param_3 + 0xe818;
      lVar12 = param_3 + 0x6818;
      do {
        puVar13 = (undefined4 *)((long)param_1 + uVar15 * 0x28 + (ulong)uVar3);
        local_68 = 0;
        pcVar8 = (char *)((long)param_1 + (ulong)(uint)puVar13[3]);
        piVar5 = (int *)(*param_4)(&local_68,pcVar8,0x73636674,param_5);
        lVar14 = uVar15 * 4;
        *(int **)(param_3 + (long)*param_2 * 0x80 + uVar15 * 8 + 0x18) = piVar5;
        *(undefined8 *)(param_3 + (long)*param_2 * 0x80 + uVar15 * 8 + 0x1018) = local_68;
        *(undefined4 *)(param_3 + (long)*param_2 * 0x40 + lVar14 + 0x2018) = *puVar13;
        *(undefined1 *)(param_3 + (long)*param_2 * 0x10 + uVar15 + 0x2818) =
             *(undefined1 *)(puVar13 + 4);
        *(undefined4 *)(param_3 + (long)*param_2 * 0x40 + lVar14 + 0x168b4) = puVar13[2];
        lVar9 = (long)*param_2;
        lVar10 = param_3 + lVar9 * 0x40;
        *(undefined4 *)(lVar10 + lVar14 + 0x2a18) = puVar13[1];
        uVar17 = 0x3f800000;
        if (0x9000000 < param_6) {
          uVar17 = *(undefined4 *)((long)param_1 + uVar15 * 0x28 + (ulong)uVar3 + 0x14);
        }
        lVar4 = uVar15 * 0x28 + (ulong)uVar3;
        lVar10 = lVar10 + uVar15 * 4;
        *(undefined4 *)(lVar10 + 0x3218) = uVar17;
        lVar1 = param_3 + lVar9 * 0x10 + uVar15;
        lVar9 = param_3 + lVar9 * 0x20 + uVar15 * 2;
        *(byte *)(lVar1 + 0x4218) = *(byte *)((long)param_1 + lVar4 + 0x11) & 1;
        *(byte *)(lVar1 + 0x4418) = *(byte *)((long)param_1 + lVar4 + 0x11) >> 1 & 1;
        *(undefined2 *)(lVar9 + 0x4618) = *(undefined2 *)((long)param_1 + lVar4 + 0x18);
        *(byte *)(lVar1 + 0x4a18) = *(byte *)((long)param_1 + lVar4 + 0x11) >> 2 & 1;
        *(undefined2 *)(lVar9 + 0x4c18) = *(undefined2 *)((long)param_1 + lVar4 + 0x1a);
        *(int *)(lVar10 + 0x5018) = (int)*(short *)((long)param_1 + lVar4 + 0x12);
        *(undefined2 *)(lVar9 + 0x5818) = *(undefined2 *)((long)param_1 + lVar4 + 0x1c);
        *(undefined2 *)(lVar9 + 0x5c18) = *(undefined2 *)((long)param_1 + lVar4 + 0x1e);
        pcVar6 = strstr(pcVar8,".bfttf");
        if ((pcVar6 == (char *)0x0) || (sVar7 = strlen(pcVar6), sVar7 != 6)) {
          pcVar6 = strstr(pcVar8,".bfotf");
          if ((pcVar6 == (char *)0x0) || (sVar7 = strlen(pcVar6), sVar7 != 6)) {
            pcVar8 = strstr(pcVar8,".otf");
            if (pcVar8 == (char *)0x0) goto LAB_0038da34;
            sVar7 = strlen(pcVar8);
            uVar11 = (uint)(sVar7 == 4);
          }
          else {
            iVar2 = *piVar5;
            if (((iVar2 == 0x100) || (iVar2 == 0x66637474)) || (iVar2 == 0x4f54544f)) {
              uVar11 = 1;
            }
            else {
              uVar11 = 3;
            }
          }
        }
        else {
          iVar2 = *piVar5;
          if (((iVar2 == 0x100) || (iVar2 == 0x66637474)) || (iVar2 == 0x4f54544f)) {
LAB_0038da34:
            uVar11 = 0;
          }
          else {
            uVar11 = 2;
          }
        }
        lVar10 = 0;
        *(uint *)(param_3 + (long)*param_2 * 0x40 + lVar14 + 0x3a18) = uVar11;
        lVar9 = uVar15 * 0x28 + (ulong)uVar3;
        piVar5 = (int *)((long)param_1 + lVar9 + 0x20);
        *(int *)(param_3 + (long)*param_2 * 0x40 + lVar14 + 0x6018) = *piVar5;
        puVar13 = (undefined4 *)((long)param_1 + (ulong)*(uint *)((long)param_1 + lVar9 + 0x24) + 4)
        ;
        do {
          if (lVar10 < *piVar5) {
            *(undefined4 *)(lVar12 + (long)*param_2 * 0x400 + lVar10 * 4) = puVar13[-1];
            uVar17 = *puVar13;
          }
          else {
            uVar17 = 0;
            *(undefined4 *)(lVar12 + (long)*param_2 * 0x400 + lVar10 * 4) = 0;
          }
          puVar13 = puVar13 + 2;
          *(undefined4 *)(lVar16 + (long)*param_2 * 0x400 + lVar10 * 4) = uVar17;
          lVar10 = lVar10 + 1;
        } while (lVar10 != 0x10);
        uVar11 = param_1[3];
        uVar15 = uVar15 + 1;
        lVar16 = lVar16 + 0x40;
        lVar12 = lVar12 + 0x40;
      } while (uVar15 < uVar11);
    }
    *(uint *)(param_3 + (long)*param_2 * 4 + 0x1681c) = uVar11;
    *param_2 = *param_2 + 1;
  }
  return;
}

