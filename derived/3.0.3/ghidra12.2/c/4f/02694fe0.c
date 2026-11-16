
void FUN_02694fe0(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  int iVar8;
  long *plVar9;
  char cVar10;
  ulong uVar11;
  uint *puVar12;
  int *piVar13;
  uint uVar14;
  
  plVar2 = (long *)param_2[1];
  while (plVar2 != param_2) {
    plVar1 = (long *)plVar2[1];
    plVar9 = plVar1;
    if (*plVar2 != 0) {
      *(long **)(*plVar2 + 8) = plVar1;
      plVar9 = (long *)plVar2[1];
    }
    if (plVar9 != (long *)0x0) {
      *plVar9 = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(param_2 + 2) = (int)param_2[2] + -1;
    plVar2[-5] = param_2[3];
    param_2[3] = (long)(plVar2 + -5);
    plVar2 = plVar1;
  }
  uVar14 = 0x33;
  FUN_026952d0(param_1,param_2,param_1 + 0x10d6c,0,param_1 + 0x10d6c,0x20,1,param_4,param_5,param_6,
               0x33);
  uVar5 = FUN_026946b0(0,param_3);
  puVar4 = PTR_DAT_04bc2860;
  puVar3 = PTR_DAT_04bc2858;
  if (uVar5 != 0) {
    lVar6 = *(long *)PTR_DAT_04bb3968;
    if ((int)*(uint *)(lVar6 + 0x16e78) < 1) {
      if ((((*(long *)(lVar6 + 0x16d68) == 0) ||
           (puVar7 = *(uint **)(*(long *)(lVar6 + 0x16d68) + 8), puVar7 == (uint *)0x0)) ||
          ((uVar5 < *(uint *)(lVar6 + 0x16d80) &&
           (*(char *)(*(long *)(lVar6 + 0x16d88) + (long)(int)uVar5) == '\0')))) ||
         (((*puVar7 <= uVar5 || (puVar7[1] == 0)) || ((ushort)puVar7[2] == 0)))) goto LAB_0269527c;
      iVar8 = 0xc;
      if (*(char *)((long)puVar7 + 10) != '\0') {
        iVar8 = 0x1c;
      }
      puVar7 = (uint *)((ulong)(puVar7[1] * uVar5 + (uint)(ushort)puVar7[2] * 8 + iVar8) +
                       (long)puVar7);
    }
    else {
      if (*(uint *)(lVar6 + 0x16e78) <= uVar5) goto LAB_0269527c;
      if (*(uint *)(lVar6 + 0x16e68) <= uVar5) {
        uVar5 = 0;
      }
      puVar7 = *(uint **)(*(long *)(lVar6 + 0x16e70) + (ulong)uVar5 * 8);
    }
    if (puVar7 != (uint *)0x0) {
      if (*puVar7 == 0) {
LAB_02695270:
        uVar14 = 0;
      }
      else {
        cVar10 = *PTR_DAT_04bc2858;
        do {
          if (cVar10 == '\0') {
            cVar10 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined4 *)(puVar4 + 0x50) = 0xffffffff;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
          }
          else {
            uVar5 = *(uint *)(puVar4 + 0x10);
            if (-1 < (int)uVar5) {
              if (((uint *)((ulong)uVar5 + (long)puVar7) == (uint *)0x0) ||
                 (uVar14 = *(uint *)((ulong)uVar5 + (long)puVar7), 0x32 < uVar14))
              goto LAB_02695270;
              goto LAB_0269527c;
            }
            if (uVar5 != 0xffffffff) goto LAB_02695270;
          }
          puVar12 = (uint *)(ulong)*puVar7;
          uVar14 = 0;
          if ((*puVar7 == 0) || (puVar7 == puVar12)) goto LAB_0269527c;
          lVar6 = 0xc;
          if (*(char *)((long)puVar7 + (10 - (long)puVar12)) != '\0') {
            lVar6 = 0x1c;
          }
          lVar6 = (long)puVar7 + (lVar6 - (long)puVar12);
          if (lVar6 == 0) goto LAB_02695270;
          uVar11 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar12));
          *(undefined4 *)(puVar4 + 0x10) = 0xfffffffe;
          uVar14 = 0;
          if (uVar11 == 0) goto LAB_0269527c;
          piVar13 = (int *)(lVar6 + 4);
          while (piVar13[-1] != -0x189a4aac) {
            piVar13 = piVar13 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) {
              uVar14 = 0;
              goto LAB_0269527c;
            }
          }
          iVar8 = 0;
          if (*piVar13 != -1) {
            iVar8 = *piVar13;
          }
          *(int *)(puVar4 + 0x10) = iVar8;
        } while (*puVar7 != 0);
        uVar14 = 0;
      }
    }
  }
LAB_0269527c:
  FUN_026952d0(param_1,param_2,param_1 + 0x1094c,0,param_1 + 0x1094c,0x18,0,param_4,param_5,param_6,
               uVar14);
  return;
}

