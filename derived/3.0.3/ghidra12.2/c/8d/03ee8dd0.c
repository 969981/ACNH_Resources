
void FUN_03ee8dd0(long param_1,uint param_2)

{
  short *psVar1;
  short *psVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  short sVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  undefined8 local_4c;
  float local_44;
  
  lVar13 = *(long *)(*(long *)(param_1 + 0x10) + 0x270);
  uVar3 = param_2;
  if (*(uint *)(*(long *)(param_1 + 0x10) + 0x268) <= param_2) {
    uVar3 = 0;
  }
  uVar4 = *(uint *)(lVar13 + (long)(int)uVar3 * 0x130 + 0x48);
  if (*(uint *)(param_1 + 0x20) <= uVar4) {
    uVar4 = 0;
  }
  psVar1 = (short *)(*(long *)(param_1 + 0x28) + (long)(int)uVar4 * 4);
  sVar9 = psVar1[1];
  if (*psVar1 == -1 || sVar9 == -1) {
    return;
  }
  uVar4 = *(uint *)(lVar13 + (long)(int)uVar3 * 0x130 + 0x108);
  if (uVar4 == 0xffffffff) {
    lVar6 = *(long *)(param_1 + 8);
    uVar7 = (uint)sVar9;
    uVar4 = uVar7;
    if (*(uint *)(lVar6 + 0x30) < (uint)(int)sVar9 || *(uint *)(lVar6 + 0x30) == uVar7) {
      uVar4 = 0;
    }
    if ((*(byte *)(*(long *)(lVar6 + 0x38) + (long)(int)uVar4) >> 1 & 1) == 0) {
      iVar8 = (int)sVar9;
      if (*(uint *)(lVar6 + 0x20) <= uVar7) {
        iVar8 = 0;
      }
      lVar6 = *(long *)(lVar6 + 0x28) + (long)iVar8 * 0x1c;
    }
    else {
      lVar6 = FUN_03ef9df0();
    }
  }
  else {
    if (uVar4 != 0xfffffffe) {
      if (*(uint *)(param_1 + 0x20) <= uVar4) {
        uVar4 = 0;
      }
      psVar2 = (short *)(*(long *)(param_1 + 0x28) + (long)(int)uVar4 * 4);
      sVar5 = psVar2[1];
      if (*psVar2 == -1 || sVar5 == -1) {
        return;
      }
      lVar6 = *(long *)(param_1 + 8);
      uVar7 = (uint)sVar5;
      uVar11 = *(uint *)(lVar6 + 0x30);
      lVar10 = *(long *)(lVar6 + 0x38);
      uVar4 = uVar7;
      if (uVar11 <= uVar7) {
        uVar4 = 0;
      }
      if ((*(byte *)(lVar10 + (int)uVar4) >> 1 & 1) == 0) {
        if (*(uint *)(lVar6 + 0x20) <= uVar7) {
          uVar7 = 0;
        }
        lVar12 = *(long *)(lVar6 + 0x28) + (long)(int)uVar7 * 0x1c;
      }
      else {
        lVar12 = FUN_03ef9df0();
        lVar6 = *(long *)(param_1 + 8);
        sVar9 = psVar1[1];
        uVar11 = *(uint *)(lVar6 + 0x30);
        lVar10 = *(long *)(lVar6 + 0x38);
      }
      uVar7 = (uint)sVar9;
      uVar4 = uVar7;
      if (uVar11 <= uVar7) {
        uVar4 = 0;
      }
      if ((*(byte *)(lVar10 + (int)uVar4) >> 1 & 1) == 0) {
        if (*(uint *)(lVar6 + 0x20) <= uVar7) {
          uVar7 = 0;
        }
        lVar6 = *(long *)(lVar6 + 0x28) + (long)(int)uVar7 * 0x1c;
      }
      else {
        lVar6 = FUN_03ef9df0();
      }
      FUN_03ee49d4(lVar12,&local_4c,lVar6 + 0x10);
      goto LAB_03ee8f18;
    }
    lVar6 = FUN_03ef9b40(*(undefined8 *)(param_1 + 8));
  }
  local_44 = *(float *)(lVar6 + 0x18);
  local_4c = *(undefined8 *)(lVar6 + 0x10);
LAB_03ee8f18:
  uVar4 = param_2;
  if (*(uint *)(param_1 + 0x50) <= param_2) {
    uVar4 = 0;
  }
  *(byte *)(*(long *)(param_1 + 0x58) + (long)(int)uVar4) =
       *(byte *)(*(long *)(param_1 + 0x58) + (long)(int)uVar4) | 2;
  if (*(uint *)(param_1 + 0x40) <= param_2) {
    param_2 = 0;
  }
  lVar6 = *(long *)(param_1 + 0x48) + (long)(int)param_2 * 0x1c;
  lVar13 = lVar13 + (long)(int)uVar3 * 0x130;
  *(float *)(lVar6 + 0xc) = (float)local_4c - *(float *)(lVar13 + 0x68);
  *(float *)(lVar6 + 0x10) = local_4c._4_4_ - *(float *)(lVar13 + 0x6c);
  *(float *)(lVar6 + 0x14) = local_44 - *(float *)(lVar13 + 0x70);
  return;
}

