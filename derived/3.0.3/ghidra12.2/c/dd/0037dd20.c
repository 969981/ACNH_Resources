
void FUN_0037dd20(long param_1,void *param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  iVar2 = param_3 + *(int *)(*(long *)(param_1 + 0xa8) + 4) + 0x14;
  puVar7 = (undefined8 *)FUN_00367b30(iVar2);
  uVar4 = *(undefined4 *)(*(undefined8 **)(param_1 + 0xa8) + 1);
  *puVar7 = **(undefined8 **)(param_1 + 0xa8);
  *(int *)((long)puVar7 + 4) = iVar2;
  *(undefined4 *)(puVar7 + 1) = uVar4;
  uVar1 = *(short *)(*(long *)(param_1 + 0xa8) + 8) + 1;
  *(ushort *)(puVar7 + 1) = uVar1;
  *(undefined4 *)((long)puVar7 + 0xc) = 0;
  *(uint *)(puVar7 + 2) = ((uint)uVar1 + (uint)uVar1 * 2) * 4;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x30001;
  lVar10 = *(long *)(param_1 + 0xa8);
  if (*(short *)(lVar10 + 8) == 0) {
    uVar8 = 0x18;
    lVar10 = 0xc;
  }
  else {
    uVar12 = 0;
    lVar11 = 0;
    do {
      lVar9 = lVar11;
      lVar11 = lVar10 + lVar9;
      uVar6 = *(undefined2 *)(lVar11 + 0x14);
      iVar2 = *(int *)(lVar11 + 0xc);
      iVar3 = *(int *)(lVar11 + 0x10);
      uVar12 = uVar12 + 1;
      uVar5 = *(undefined1 *)(lVar11 + 0x16);
      *(undefined1 *)((long)puVar7 + lVar9 + 0x23) = 0;
      *(undefined2 *)((long)puVar7 + lVar9 + 0x20) = uVar6;
      *(undefined1 *)((long)puVar7 + lVar9 + 0x22) = uVar5;
      *(int *)((long)puVar7 + lVar9 + 0x18) = iVar2 + param_3 + 8;
      *(int *)((long)puVar7 + lVar9 + 0x1c) = iVar3 + param_3 + 8;
      lVar11 = lVar9 + 0xc;
    } while (uVar12 < *(ushort *)(*(long *)(param_1 + 0xa8) + 8));
    lVar10 = lVar9 + 0x18;
    uVar8 = (int)(lVar9 + 0xc) + 0x18;
  }
  *(undefined4 *)((long)puVar7 + (ulong)uVar8) = 0x10000;
  *(undefined4 *)((long)puVar7 + (ulong)(uVar8 + 4)) = 8;
  memcpy((void *)((long)puVar7 + (ulong)(uVar8 + 8)),param_2,(long)param_3);
  lVar11 = *(long *)(param_1 + 0xa8);
  memcpy((void *)((long)puVar7 + (ulong)(uVar8 + 8 + param_3)),(void *)(lVar11 + lVar10),
         (ulong)((*(int *)(lVar11 + 4) + (uint)*(ushort *)(lVar11 + 8) * -0xc) - 8));
  *(undefined8 **)(param_1 + 0xa8) = puVar7;
  return;
}

