
void FUN_0208e320(long *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  undefined *puVar6;
  bool bVar7;
  char *pcVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  
  puVar6 = PTR_DAT_04bb32e8;
  iVar2 = *param_2;
  iVar3 = param_2[1];
  if (iVar2 - iVar3 < 1) {
    return;
  }
  iVar11 = 0;
LAB_0208e35c:
  plVar12 = (long *)param_1[1];
  do {
    if (plVar12 == param_1) {
      return;
    }
    plVar13 = plVar12 + -1;
    pcVar8 = (char *)FUN_021c9770((int)*plVar13,1);
    if ((pcVar8 != (char *)0x0) && (*pcVar8 != '\0')) {
      cVar5 = *(char *)(*(long *)puVar6 + 0x4064);
      bVar4 = *(byte *)(*(long *)puVar6 + 0x4065);
      uVar1 = (int)cVar5 + 0x18;
      if (4 < cVar5) {
        uVar1 = (int)cVar5;
      }
      uVar10 = (uint)(byte)pcVar8[8];
      bVar7 = uVar10 == (uVar1 & 0xff);
      if (((uVar10 < (uVar1 & 0xff)) || (pcVar8[9] == bVar4 && bVar7)) ||
         ((byte)pcVar8[9] < bVar4 && bVar7)) {
        uVar1 = uVar1 & 0xff;
        uVar10 = (uint)(byte)pcVar8[10];
        if (((uVar1 < uVar10) || (bVar4 == pcVar8[0xb] && uVar1 == uVar10)) ||
           (bVar4 < (byte)pcVar8[0xb] && uVar1 == uVar10)) break;
      }
    }
    plVar12 = (long *)plVar12[1];
  } while( true );
  if (plVar12 == (long *)0x0) {
    return;
  }
  if (plVar13 == (long *)0x0) {
    return;
  }
  lVar9 = FUN_021c9770((int)plVar12[-1],1);
  FUN_02093ad0(lVar9 + 0x10,0,1);
  if (*plVar12 != 0) {
    *(long *)(*plVar12 + 8) = plVar12[1];
  }
  if ((long *)plVar12[1] != (long *)0x0) {
    *(long *)plVar12[1] = *plVar12;
  }
  *plVar12 = 0;
  plVar12[1] = 0;
  iVar11 = iVar11 + 1;
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  plVar12[-1] = param_1[3];
  param_1[3] = (long)plVar13;
  if (iVar11 == iVar2 - iVar3) {
    return;
  }
  goto LAB_0208e35c;
}

