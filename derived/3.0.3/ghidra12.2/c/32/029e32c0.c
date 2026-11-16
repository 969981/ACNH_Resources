
void FUN_029e32c0(long *param_1,float *param_2)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  char cVar9;
  char cVar10;
  float fVar11;
  
  lVar8 = *param_1;
  if ((*(char *)(lVar8 + 8) == '\0') || (*(int *)(lVar8 + 0x1c) == -1)) {
    iVar2 = 1;
    uVar1 = 0xffffffffffffffff;
  }
  else {
    uVar1 = (ulong)*(byte *)(lVar8 + 0x59) | (ulong)*(byte *)(lVar8 + 0x5a) << 0x20;
    if (*(byte *)(lVar8 + 0x58) < 0xd) {
      iVar2 = *(int *)(&DAT_0417e280 + (long)(int)(uint)*(byte *)(lVar8 + 0x58) * 4);
    }
    else {
      iVar2 = 1;
    }
  }
  if (*(int *)(lVar8 + 0x20) == -1) {
    iVar7 = -1;
    uVar5 = 0;
    uVar3 = 0xffffffff;
    uVar4 = 0xffffffff;
    if (iVar2 != 1) goto LAB_029e336c;
LAB_029e33cc:
    if ((char)param_1[5] == '\0') {
      iVar2 = 1;
      goto LAB_029e346c;
    }
    iVar2 = *(int *)((long)param_1 + 0x24);
    cVar10 = (char)param_1[5] + -1;
  }
  else {
    uVar3 = (uint)*(byte *)(lVar8 + 0x65);
    uVar4 = (uint)*(byte *)(lVar8 + 0x66);
    if (*(byte *)(lVar8 + 100) < 0xd) {
      uVar5 = *(undefined4 *)(&DAT_0417e280 + (long)(int)(uint)*(byte *)(lVar8 + 100) * 4);
    }
    else {
      uVar5 = 1;
    }
    fVar11 = *(float *)(lVar8 + 0xc) * 30.0;
    uVar6 = 0;
    if (fVar11 != (float)(int)fVar11) {
      uVar6 = (uint)(0.0 <= fVar11);
    }
    iVar7 = uVar6 + (int)fVar11;
    if (iVar2 == 1) goto LAB_029e33cc;
LAB_029e336c:
    fVar11 = *param_2;
    if ((fVar11 < 1.0) || (80.0 <= fVar11)) {
      if ((fVar11 < 80.0) || (100.0 <= fVar11)) {
        if ((fVar11 < 100.0) || (120.0 <= fVar11)) {
          if (120.0 <= fVar11) {
            cVar9 = *(char *)((long)param_2 + 7);
          }
          else {
            cVar9 = '\0';
          }
        }
        else {
          cVar9 = *(char *)((long)param_2 + 6);
        }
      }
      else {
        cVar9 = *(char *)((long)param_2 + 5);
      }
    }
    else {
      cVar9 = *(char *)(param_2 + 1);
    }
    cVar10 = *(char *)(param_2 + 2);
    *(int *)((long)param_1 + 0x24) = iVar2;
    if (iVar2 != 8) {
      cVar10 = '\0';
    }
    cVar10 = cVar10 + cVar9;
  }
  *(char *)(param_1 + 5) = cVar10;
LAB_029e346c:
  *(int *)(param_1 + 1) = iVar2;
  *(ulong *)((long)param_1 + 0xc) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = uVar5;
  *(int *)(param_1 + 3) = iVar7;
  *(uint *)((long)param_1 + 0x1c) = uVar3;
  *(uint *)(param_1 + 4) = uVar4;
  return;
}

