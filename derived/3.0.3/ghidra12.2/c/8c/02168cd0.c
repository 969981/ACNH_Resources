
void FUN_02168cd0(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  char *pcVar14;
  undefined1 uStack_31;
  
  if ((*(long *)PTR_DAT_04bb7ff8 != 0) && (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) != 0)) {
    return;
  }
  uVar3 = FUN_006bd550("CallRequest",0);
  puVar13 = (uint *)(param_1 + 0x20);
  uVar2 = *puVar13;
  if (uVar2 == 0) {
    return;
  }
  if ((int)uVar2 < 2) {
    iVar12 = 0;
  }
  else {
    iVar12 = 0;
    iVar9 = uVar2 - 1;
    do {
      uVar2 = iVar9 + iVar12;
      if ((int)uVar2 < 0 != SCARRY4(iVar9,iVar12)) {
        uVar2 = uVar2 + 1;
      }
      iVar7 = (int)uVar2 >> 1;
      uVar2 = *(uint *)(*(long *)(param_1 + 0x28) + ((long)((ulong)uVar2 << 0x20) >> 0x21) * 0x20 +
                       0x18);
      if (uVar2 == uVar3) {
        if (iVar7 < 0) {
          return;
        }
        goto LAB_02168d98;
      }
      if (uVar2 < uVar3) {
        iVar12 = iVar7 + 1;
      }
      else {
        iVar9 = iVar7 + -1;
      }
    } while (iVar12 < iVar9);
  }
  if (*(uint *)(*(long *)(param_1 + 0x28) + (long)iVar12 * 0x20 + 0x18) != uVar3) {
    return;
  }
  if (iVar12 < 0) {
    return;
  }
LAB_02168d98:
  uVar3 = FUN_006bd550("CallCount",0);
  uVar2 = *puVar13;
  if (uVar2 == 0) {
    return;
  }
  if ((int)uVar2 < 2) {
    iVar12 = 0;
  }
  else {
    iVar12 = 0;
    iVar9 = uVar2 - 1;
    do {
      uVar2 = iVar9 + iVar12;
      if ((int)uVar2 < 0 != SCARRY4(iVar9,iVar12)) {
        uVar2 = uVar2 + 1;
      }
      iVar7 = (int)uVar2 >> 1;
      uVar2 = *(uint *)(*(long *)(param_1 + 0x28) + ((long)((ulong)uVar2 << 0x20) >> 0x21) * 0x20 +
                       0x18);
      if (uVar2 == uVar3) goto LAB_02168e20;
      if (uVar2 < uVar3) {
        iVar12 = iVar7 + 1;
      }
      else {
        iVar9 = iVar7 + -1;
      }
    } while (iVar12 < iVar9);
  }
  iVar7 = iVar12;
  if (*(uint *)(*(long *)(param_1 + 0x28) + (long)iVar12 * 0x20 + 0x18) != uVar3) {
    return;
  }
LAB_02168e20:
  if (iVar7 < 0) {
    return;
  }
  uVar3 = FUN_006bd550("CallRequest",0);
  uVar2 = *puVar13;
  if (uVar2 == 0) {
LAB_02168ec4:
    iVar12 = 0;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x28);
    if ((int)uVar2 < 2) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      iVar12 = uVar2 - 1;
      do {
        uVar1 = iVar12 + uVar10;
        if ((int)uVar1 < 0 != SCARRY4(iVar12,uVar10)) {
          uVar1 = uVar1 + 1;
        }
        uVar11 = (int)uVar1 >> 1;
        uVar1 = *(uint *)(lVar8 + ((long)((ulong)uVar1 << 0x20) >> 0x21) * 0x20 + 0x18);
        if (uVar1 == uVar3) goto LAB_02168eac;
        if (uVar1 < uVar3) {
          uVar10 = uVar11 + 1;
        }
        else {
          iVar12 = uVar11 - 1;
        }
      } while ((int)uVar10 < iVar12);
    }
    uVar11 = uVar10;
    if (*(uint *)(lVar8 + (long)(int)uVar10 * 0x20 + 0x18) != uVar3) goto LAB_02168ec4;
LAB_02168eac:
    if ((int)uVar11 < 0) goto LAB_02168ec4;
    if (uVar2 <= uVar11) {
      uVar11 = 0;
    }
    iVar12 = *(int *)(lVar8 + (ulong)uVar11 * 0x20);
  }
  uVar3 = FUN_006bd550("CallCount",0);
  uVar2 = *puVar13;
  if (uVar2 != 0) {
    lVar8 = *(long *)(param_1 + 0x28);
    if ((int)uVar2 < 2) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      iVar9 = uVar2 - 1;
      do {
        uVar1 = iVar9 + uVar10;
        if ((int)uVar1 < 0 != SCARRY4(iVar9,uVar10)) {
          uVar1 = uVar1 + 1;
        }
        uVar11 = (int)uVar1 >> 1;
        uVar1 = *(uint *)(lVar8 + ((long)((ulong)uVar1 << 0x20) >> 0x21) * 0x20 + 0x18);
        if (uVar1 == uVar3) goto LAB_02168f50;
        if (uVar1 < uVar3) {
          uVar10 = uVar11 + 1;
        }
        else {
          iVar9 = uVar11 - 1;
        }
      } while ((int)uVar10 < iVar9);
    }
    uVar11 = uVar10;
    if (*(uint *)(lVar8 + (long)(int)uVar10 * 0x20 + 0x18) == uVar3) {
LAB_02168f50:
      if (-1 < (int)uVar11) {
        if (uVar2 <= uVar11) {
          uVar11 = 0;
        }
        iVar9 = *(int *)(lVar8 + (ulong)uVar11 * 0x20);
        goto LAB_02168f6c;
      }
    }
  }
  iVar9 = 0;
LAB_02168f6c:
  if ((iVar12 != 0) &&
     ((iVar9 < 1 || (FUN_0204c990(puVar13,"CallCount",iVar9 + -1), iVar9 + -1 == 0)))) {
    FUN_025196e4(&uStack_31);
    uVar4 = FUN_02552200(&uStack_31);
    uVar5 = FUN_02552310(&uStack_31);
    uVar6 = FUN_02552420(&uStack_31);
    if (((uVar4 & 1) != 0) || (((uVar5 & 1) != 0 || ((uVar6 & 1) != 0)))) {
      pcVar14 = *(char **)(param_1 + 0x82b8);
      if (pcVar14 != "NNPC_HospitalReception") {
        iVar12 = 0x16;
        if (*(int *)(param_1 + 0x82c0) < 0x17) {
          iVar12 = *(int *)(param_1 + 0x82c0) + -1;
        }
        memcpy(pcVar14,"NNPC_HospitalReception",(long)iVar12);
        pcVar14[iVar12] = '\0';
      }
      pcVar14 = *(char **)(param_1 + 0x8310);
      if (pcVar14 != "Call_Player") {
        iVar12 = 0xb;
        if (*(int *)(param_1 + 0x8318) < 0xc) {
          iVar12 = *(int *)(param_1 + 0x8318) + -1;
        }
        memcpy(pcVar14,"Call_Player",(long)iVar12);
        pcVar14[iVar12] = '\0';
      }
      *(undefined8 *)(param_1 + 0x7cf8) = 0x100000001;
      *(undefined4 *)(param_1 + 32000) = 1;
      if ((uVar4 & 1) == 0) {
        if ((uVar5 & 1) == 0) {
          if ((uVar6 & 1) != 0) {
            FUN_00a6f7d4(*(undefined8 *)(param_1 + 8),&uStack_31,0);
          }
        }
        else {
          FUN_00a6f830(*(undefined8 *)(param_1 + 8),&uStack_31,0);
        }
      }
      else {
        FUN_00a6f778(*(undefined8 *)(param_1 + 8),&uStack_31);
      }
    }
  }
  return;
}

