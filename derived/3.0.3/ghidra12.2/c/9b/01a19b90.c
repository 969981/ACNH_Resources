
bool FUN_01a19b90(float param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float local_2c [3];
  
  uVar1 = *(uint *)(param_2 + 8);
  uVar2 = *(uint *)(param_2 + 0xc);
  lVar5 = *(long *)PTR_DAT_04bb27c8;
  uVar4 = uVar1 - ((uVar1 & 0x80000001) == 1);
  uVar7 = uVar2 - ((uVar2 & 0x80000001) == 1);
  uVar6 = uVar7 + 2;
  uVar8 = uVar4;
  do {
    if ((((((lVar5 != 0) && (lVar9 = *(long *)(lVar5 + 0xa8), lVar9 != 0)) && (-1 < (int)uVar8)) &&
         ((-1 < (int)uVar7 && (uVar8 < *(uint *)(lVar9 + 0x38))))) &&
        ((uVar7 < *(uint *)(lVar9 + 0x3c) &&
         ((uVar3 = uVar8 + *(uint *)(lVar9 + 0x38) * uVar7, uVar3 < *(uint *)(lVar9 + 0x68) &&
          (*(long *)(lVar9 + 0x70) != 0)))))) &&
       ((*(uint *)(*(long *)(lVar9 + 0x70) + (long)(int)uVar3 * 4) >> 5 & 1) != 0)) {
      local_2c[1] = 0.0;
      fVar10 = (float)(int)uVar1 * 0.5;
      fVar11 = (float)(int)uVar2 * 0.5;
      uVar6 = 0;
      if (fVar10 != (float)(int)fVar10) {
        uVar6 = (uint)(fVar10 < 0.0);
      }
      uVar7 = 0;
      if (fVar11 != (float)(int)fVar11) {
        uVar7 = (uint)(fVar11 < 0.0);
      }
      local_2c[0] = (float)(int)((int)fVar10 - uVar6) * 10.0 + 5.0;
      local_2c[2] = (float)(int)((int)fVar11 - uVar7) * 10.0 + 5.0;
      if (*(char *)(lVar5 + 0x11c8) == '\0') {
        fVar10 = (float)FUN_0093a950(lVar5 + 0x28,local_2c,0);
      }
      else {
        fVar10 = -500.0;
      }
      return param_1 < fVar10;
    }
    if ((int)uVar8 < (int)(uVar4 + 1)) {
      uVar8 = uVar8 + 1;
    }
    else {
      uVar7 = uVar7 + 1;
      uVar8 = uVar4;
    }
  } while ((uVar4 != uVar8) || (uVar6 != uVar7));
  return false;
}

