
undefined8 FUN_0015deec(long *param_1,uint param_2,char *param_3)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  
  lVar2 = 0x1640;
  if ((param_2 & 1) == 0) {
    lVar2 = 0x1648;
  }
  if (*param_3 != '\0') {
    lVar9 = *param_1;
    lVar3 = 0x168;
    if ((param_2 & 1) == 0) {
      lVar3 = 0x148;
    }
    lVar3 = lVar9 + lVar3 + 0x1120;
    do {
      iVar7 = thunk_FUN_00144b34("Digest",param_3,6);
      if (iVar7 == 0) {
        iVar7 = thunk_FUN_00144b34("Basic",param_3,5);
        if (iVar7 == 0) {
          iVar7 = thunk_FUN_00144b34("Bearer",param_3,6);
          if (iVar7 == 0) goto LAB_0015e058;
          *(ulong *)(lVar9 + lVar2) = *(ulong *)(lVar9 + lVar2) | 0x40;
          uVar8 = *(ulong *)(lVar3 + 0x10) | 0x40;
          bVar6 = *(long *)(lVar3 + 8) == 0x40;
        }
        else {
          *(ulong *)(lVar9 + lVar2) = *(ulong *)(lVar9 + lVar2) | 1;
          uVar8 = *(ulong *)(lVar3 + 0x10) | 1;
          bVar6 = *(long *)(lVar3 + 8) == 1;
        }
        *(ulong *)(lVar3 + 0x10) = uVar8;
        if (bVar6) {
          *(undefined8 *)(lVar3 + 0x10) = 0;
LAB_0015e034:
          FUN_0014d430(lVar9,"Authentication problem. Ignoring this.\n");
          *(ushort *)(lVar9 + 0x15c4) = *(ushort *)(lVar9 + 0x15c4) | 0x20;
        }
      }
      else if ((*(byte *)(lVar3 + 0x10) >> 1 & 1) == 0) {
        uVar8 = FUN_001552d0();
        if ((uVar8 & 1) != 0) {
          *(ulong *)(lVar9 + lVar2) = *(ulong *)(lVar9 + lVar2) | 2;
          *(ulong *)(lVar3 + 0x10) = *(ulong *)(lVar3 + 0x10) | 2;
          iVar7 = FUN_00154f6c(param_1,param_2 & 1,param_3);
          if (iVar7 != 0) goto LAB_0015e034;
        }
      }
      else {
        FUN_0014d430(lVar9,"Ignoring duplicate digest auth header.\n");
      }
LAB_0015e058:
      for (; (cVar4 = *param_3, cVar4 != '\0' && (cVar4 != ',')); param_3 = param_3 + 1) {
      }
      pcVar1 = param_3;
      if (cVar4 == ',') {
        pcVar1 = param_3 + 1;
      }
      cVar5 = *pcVar1;
      uVar8 = (ulong)(cVar4 == ',');
      while( true ) {
        if (cVar5 == '\0') {
          return 0;
        }
        iVar7 = FUN_00146528();
        if (iVar7 == 0) break;
        cVar5 = param_3[uVar8 + 1];
        uVar8 = uVar8 + 1;
      }
      param_3 = param_3 + uVar8;
    } while (*param_3 != '\0');
  }
  return 0;
}

