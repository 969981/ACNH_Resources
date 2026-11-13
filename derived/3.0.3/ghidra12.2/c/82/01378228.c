
void FUN_01378228(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined2 *puVar9;
  uint uVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  short local_14 [2];
  
  if (param_2 < 0xa8) {
    iVar1 = DAT_051a36d4 + (param_2 / 0xe) * 0x10;
    iVar2 = DAT_051a36d0 + (param_2 % 0xe) * 0x10;
    *(int *)(param_1 + 0x10) = iVar2;
    *(int *)(param_1 + 0x14) = iVar1;
    *(int *)(param_1 + 0x20) = iVar2 + 0xf;
    *(int *)(param_1 + 0x24) = iVar1 + 0xf;
  }
  else {
    uVar6 = FUN_013871c0(local_14,0,0);
    if ((uVar6 & 1) != 0) {
      uVar7 = FUN_01260194(0xe7);
      lVar8 = FUN_02aea188(uVar7,local_14[0]);
      if (lVar8 != 0) {
        plVar11 = (long *)(lVar8 + 0x68);
        (**(code **)(*plVar11 + 0xf0))(plVar11);
        lVar8 = (**(code **)(*plVar11 + 0xf0))(plVar11);
        puVar9 = &DAT_051565e8;
        if (((((DAT_051565e8 == local_14[0]) ||
              (puVar9 = &DAT_05156608, DAT_05156608 == local_14[0])) ||
             (puVar9 = &DAT_05156628, DAT_05156628 == local_14[0])) ||
            (puVar9 = &DAT_05156648, DAT_05156648 == local_14[0])) && (param_1 != 0)) {
          fVar12 = (float)*(int *)(lVar8 + 4) * 0.5;
          uVar10 = 0;
          if (fVar12 != (float)(int)fVar12) {
            uVar10 = (uint)(fVar12 < 0.0);
          }
          fVar14 = (float)((uint)(*(char *)(puVar9 + 0xc) == '\0') << 7) * 10.0 + 2.5;
          fVar15 = (float)(int)((int)fVar12 - uVar10) * 10.0 + 2.5;
          fVar13 = (float)((uint)(*(char *)(puVar9 + 0xc) == '\0') << 7 | 0xf) * 10.0 + 10.0 + -2.5;
          fVar12 = (float)(int)(((int)fVar12 - uVar10) + 0xf) * 10.0 + 10.0 + -2.5;
          iVar2 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
          iVar3 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
          iVar4 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
          iVar5 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
          iVar1 = iVar2;
          if (iVar4 <= iVar2) {
            iVar1 = iVar4;
          }
          if (iVar2 <= iVar4) {
            iVar2 = iVar4;
          }
          iVar4 = iVar3;
          if (iVar5 <= iVar3) {
            iVar4 = iVar5;
          }
          *(int *)(param_1 + 0x10) = iVar1;
          *(int *)(param_1 + 0x14) = iVar4;
          if (iVar3 <= iVar5) {
            iVar3 = iVar5;
          }
          *(int *)(param_1 + 0x20) = iVar2;
          *(int *)(param_1 + 0x24) = iVar3;
        }
      }
    }
  }
  return;
}

