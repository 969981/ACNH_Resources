
int FUN_032bc9fc(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  long lVar5;
  undefined2 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  
  iVar10 = -1;
  if (*(long *)(param_1 + 8) == 0) {
    lVar5 = *(long *)(param_1 + 0x30);
    iVar10 = *(int *)(lVar5 + 0x80);
    *(int *)(lVar5 + 0x80) = iVar10 + 1;
    if ((*(char *)(lVar5 + 0x88) != '\0') && (*(long *)(lVar5 + 8) != 0)) {
      fVar11 = 4.0;
      if ((float)(iVar10 + -1) <= 4.0) {
        fVar11 = (float)(iVar10 + -1);
      }
      fVar12 = 0.0;
      if (0 < iVar10) {
        fVar12 = fVar11;
      }
      FUN_032c8150(fVar12,*(long *)(lVar5 + 8),0,0);
    }
    iVar10 = *(int *)(*(long *)(param_1 + 0x30) + 0x80) + -1;
    FUN_032c0734(0x3f800000,*(undefined8 *)(param_1 + 0x28),iVar10);
    lVar5 = *(long *)(param_1 + 0x38);
    plVar7 = *(long **)(lVar5 + 0x78);
    iVar1 = (int)plVar7[2];
    iVar3 = (int)plVar7[1];
    if (iVar1 < iVar3) {
      uVar4 = *(undefined1 *)(param_2 + 0x20);
      uVar8 = *(undefined8 *)(param_2 + 0x18);
      uVar9 = *(undefined8 *)(param_2 + 8);
      *(int *)(plVar7 + 2) = iVar1 + 1;
      iVar1 = *(int *)((long)plVar7 + 0xc) + iVar1;
      iVar2 = 0;
      if (iVar3 <= iVar1) {
        iVar2 = iVar3;
      }
      puVar6 = (undefined2 *)(*plVar7 + (long)(iVar1 - iVar2) * 0x38);
      *puVar6 = 0x100;
      *(undefined8 *)(puVar6 + 8) = uVar9;
      *(undefined8 *)(puVar6 + 0x10) = uVar8;
      *(undefined1 *)(puVar6 + 0x14) = uVar4;
      *(undefined1 *)(puVar6 + 0x18) = 0;
    }
    lVar5 = *(long *)(lVar5 + 0x70);
    iVar1 = *(int *)(lVar5 + 0x28);
    iVar3 = *(int *)(lVar5 + 0x20);
    if (iVar1 < iVar3) {
      *(int *)(lVar5 + 0x28) = iVar1 + 1;
      iVar1 = *(int *)(lVar5 + 0x24) + iVar1;
      iVar2 = 0;
      if (iVar3 <= iVar1) {
        iVar2 = iVar3;
      }
      *(undefined4 *)(*(long *)(lVar5 + 0x18) + (long)(iVar1 - iVar2) * 4) = 0xffffffff;
    }
  }
  return iVar10;
}

