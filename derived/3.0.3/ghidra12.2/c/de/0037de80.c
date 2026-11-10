
void FUN_0037de80(long param_1,void *param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  char cVar9;
  undefined2 uVar10;
  ushort uVar11;
  uint uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  char *pcVar20;
  ulong uVar21;
  
  iVar1 = param_3 + 4;
  iVar2 = *(int *)(*(long *)(param_1 + 0xa8) + 4) + iVar1;
  puVar13 = (undefined8 *)FUN_00367b30(iVar2);
  uVar8 = *(undefined4 *)(*(undefined8 **)(param_1 + 0xa8) + 1);
  *puVar13 = **(undefined8 **)(param_1 + 0xa8);
  *(int *)((long)puVar13 + 4) = iVar2;
  *(undefined4 *)(puVar13 + 1) = uVar8;
  *(undefined2 *)(puVar13 + 1) = *(undefined2 *)(*(long *)(param_1 + 0xa8) + 8);
  lVar16 = *(long *)(param_1 + 0xa8);
  if (*(short *)(lVar16 + 8) == 0) {
    uVar18 = 0xc;
    lVar17 = lVar16;
  }
  else {
    uVar14 = 0;
    lVar17 = 0;
    do {
      lVar3 = lVar16 + lVar17;
      cVar9 = *(char *)(lVar3 + 0x16);
      iVar6 = *(int *)(lVar3 + 0xc);
      iVar7 = *(int *)(lVar3 + 0x10);
      uVar14 = uVar14 + 1;
      uVar10 = *(undefined2 *)(lVar3 + 0x14);
      *(undefined1 *)((long)puVar13 + lVar17 + 0x17) = 0;
      lVar3 = lVar17 + 0xc;
      *(undefined2 *)((long)puVar13 + lVar17 + 0x14) = uVar10;
      *(char *)((long)puVar13 + lVar17 + 0x16) = cVar9;
      iVar2 = 0;
      if (cVar9 != '\x03') {
        iVar2 = iVar1;
      }
      *(int *)((long)puVar13 + lVar17 + 0xc) = iVar6 + iVar1;
      *(int *)((long)puVar13 + lVar17 + 0x10) = iVar7 + iVar2;
      lVar17 = lVar3;
    } while (uVar14 < *(ushort *)(*(long *)(param_1 + 0xa8) + 8));
    uVar18 = (int)lVar3 + 0xc;
    lVar17 = *(long *)(param_1 + 0xa8);
  }
  uVar14 = (ulong)uVar18;
  uVar21 = (ulong)(uVar18 + 4);
  puVar4 = (uint *)(lVar17 + uVar14);
  uVar18 = *puVar4;
  puVar5 = (uint *)((long)puVar13 + uVar14);
  *puVar5 = uVar18;
  uVar18 = (uVar18 >> 0x10) + 1;
  *(short *)((long)puVar5 + 2) = (short)uVar18;
  lVar17 = *(long *)(param_1 + 0xa8);
  uVar11 = *(ushort *)(lVar17 + 8);
  if (uVar11 == 1) {
    uVar15 = (uint)*(ushort *)((long)puVar4 + 2);
    uVar12 = (*(int *)(lVar17 + 4) + (uint)*(ushort *)((long)puVar4 + 2) * -4) - 0x1c;
  }
  else {
    if (uVar11 != 0) {
      uVar19 = 1;
      pcVar20 = (char *)(lVar17 + 0x22);
      do {
        if (*pcVar20 != '\0') goto LAB_0037e04c;
        uVar19 = uVar19 + 1;
        pcVar20 = pcVar20 + 0xc;
      } while (uVar11 != uVar19);
    }
    uVar19 = 1;
LAB_0037e04c:
    uVar15 = (uint)*(ushort *)((long)puVar4 + 2);
    uVar12 = ((*(int *)(lVar16 + (uVar19 & 0xffffffff) * 0xc + 0x10) + (int)uVar19 * 0xc) -
             (*(int *)(lVar16 + 0x10) + uVar15 * 4)) - 4;
  }
  if ((param_4 & 1) == 0) {
    if (uVar15 != 0) {
      uVar18 = 0;
      do {
        uVar18 = uVar18 + 1;
        *(int *)((long)puVar13 + uVar21) = *(int *)(lVar17 + uVar21) + 4;
        uVar21 = uVar21 + 4;
      } while (uVar18 < *(ushort *)((long)puVar4 + 2));
      uVar18 = (uint)*(ushort *)((long)puVar5 + 2);
    }
    uVar15 = (int)uVar21 + 4;
    *(uint *)((long)puVar13 + uVar21) = uVar12 + (uVar18 & 0xffff) * 4 + 4;
    memcpy((void *)((long)puVar13 + (ulong)uVar15),(void *)(*(long *)(param_1 + 0xa8) + uVar21),
           (ulong)uVar12);
    uVar15 = uVar15 + uVar12;
    memcpy((void *)((long)puVar13 + (ulong)uVar15),param_2,(long)param_3);
    uVar15 = uVar15 + param_3;
    lVar16 = *(long *)(param_1 + 0xa8);
    uVar11 = *(ushort *)(lVar16 + 8);
  }
  else {
    *(uint *)((long)puVar13 + uVar21) = (uVar18 & 0xffff) * 4 + 4;
    if (*(short *)((long)puVar4 + 2) != 0) {
      uVar18 = 0;
      do {
        uVar21 = uVar14;
        uVar18 = uVar18 + 1;
        *(int *)((long)puVar13 + uVar21 + 8) = iVar1 + *(int *)(lVar17 + 4 + uVar21);
        uVar14 = uVar21 + 4;
      } while (uVar18 < *(ushort *)((long)puVar4 + 2));
      uVar21 = uVar21 + 8;
    }
    uVar15 = (int)uVar14 + 8;
    memcpy((void *)((long)puVar13 + (ulong)uVar15),param_2,(long)param_3);
    uVar15 = uVar15 + param_3;
    memcpy((void *)((long)puVar13 + (ulong)uVar15),(void *)(*(long *)(param_1 + 0xa8) + uVar21),
           (ulong)uVar12);
    uVar15 = uVar15 + uVar12;
    lVar16 = *(long *)(param_1 + 0xa8);
    uVar11 = *(ushort *)(lVar16 + 8);
  }
  if (1 < uVar11) {
    uVar12 = (int)uVar21 + uVar12;
    memcpy((void *)((long)puVar13 + (ulong)uVar15),(void *)(lVar16 + (ulong)uVar12),
           (ulong)(*(int *)(lVar16 + 4) - uVar12));
  }
  *(undefined8 **)(param_1 + 0xa8) = puVar13;
  return;
}

