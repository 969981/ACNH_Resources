
void FUN_00944ae0(undefined8 param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  float *pfVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_28;
  float fStack_24;
  
  FUN_0093fb30();
  fVar10 = *(float *)(param_2 + 0xd8);
  fVar9 = *(float *)(param_2 + 0xe0);
  fVar11 = SQRT(fVar9 * fVar9 + fVar10 * fVar10);
  bVar2 = false;
  bVar3 = true;
  if (-1.1920929e-07 <= fVar11) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar11)) {
      bVar2 = fVar11 == 1.1920929e-07;
      bVar3 = 1.1920929e-07 <= fVar11;
    }
  }
  if ((bVar3 && !bVar2) &&
     (iVar5 = *(int *)(param_2 + 0xe4) + -1, iVar5 != 0 && 0 < *(int *)(param_2 + 0xe4))) {
    local_28 = fVar10 * (1.0 / fVar11);
    fStack_24 = fVar9 * (1.0 / fVar11);
    FUN_00943f00(param_2,&local_28,0,iVar5);
  }
  iVar5 = *(int *)(param_2 + 0xe4);
  if (0 < iVar5) {
    lVar6 = param_2 + 0xe8;
    uVar7 = 0;
    lVar8 = lVar6;
    do {
      if (*(char *)(param_2 + 0x4c98) == '\0') {
        lVar1 = lVar8;
        if (0x3f < uVar7) {
          lVar1 = lVar6;
        }
        if ((*(byte *)(lVar1 + 0x54) >> 3 & 1) == 0) goto LAB_00944bbc;
      }
      else {
LAB_00944bbc:
        if (*(char *)(param_2 + 0x4c9a) == '\0') {
          lVar1 = lVar8;
          if (0x3f < uVar7) {
            lVar1 = lVar6;
          }
          if ((*(byte *)(lVar1 + 0x54) >> 4 & 1) != 0) goto LAB_00944b94;
        }
        FUN_009444cc(param_2,0,uVar7 & 0xffffffff);
        iVar5 = *(int *)(param_2 + 0xe4);
      }
LAB_00944b94:
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x90;
    } while ((long)uVar7 < (long)iVar5);
  }
  pfVar4 = (float *)(param_2 + 8);
  *pfVar4 = *pfVar4 + *(float *)(param_2 + 0xcc) + *(float *)(param_2 + 0xc0);
  *(float *)(param_2 + 0x10) =
       *(float *)(param_2 + 0x10) + *(float *)(param_2 + 0xd4) + *(float *)(param_2 + 200);
  lVar6 = *(long *)PTR_DAT_04bb27c8;
  if (((lVar6 == 0) || (*(long *)(lVar6 + 0xa8) == 0)) || (*(char *)(lVar6 + 0x11c8) != '\0')) {
    fVar9 = -500.0;
  }
  else {
    fVar9 = (float)FUN_0093a950(lVar6 + 0x28,pfVar4,0);
  }
  if (*(float *)(param_2 + 0x4cbc) < fVar9) {
    *(float *)(param_2 + 0xc) = fVar9;
  }
  iVar5 = *(int *)(param_2 + 0xe4);
  if (0 < iVar5) {
    lVar6 = param_2 + 0xe8;
    uVar7 = 0;
    lVar8 = lVar6;
    do {
      if (*(char *)(param_2 + 0x4c98) == '\0') {
        lVar1 = lVar8;
        if (0x3f < uVar7) {
          lVar1 = lVar6;
        }
        if ((*(byte *)(lVar1 + 0x54) >> 3 & 1) == 0) goto LAB_00944c9c;
      }
      else {
LAB_00944c9c:
        if (*(char *)(param_2 + 0x4c9a) == '\0') {
          lVar1 = lVar8;
          if (0x3f < uVar7) {
            lVar1 = lVar6;
          }
          if ((*(byte *)(lVar1 + 0x54) >> 4 & 1) != 0) goto LAB_00944c74;
        }
        FUN_009444cc(param_2,1,uVar7 & 0xffffffff);
        iVar5 = *(int *)(param_2 + 0xe4);
      }
LAB_00944c74:
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x90;
    } while ((long)uVar7 < (long)iVar5);
  }
  return;
}

