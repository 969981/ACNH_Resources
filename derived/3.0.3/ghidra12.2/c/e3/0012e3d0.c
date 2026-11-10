
int FUN_0012e3d0(long param_1,long param_2,uint param_3,undefined2 *param_4,int param_5)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  short sVar10;
  
  if (param_1 == 0) {
    return -0x5166;
  }
  if (param_2 == 0) {
    return -0x7a66;
  }
  if ('\x01' < (char)param_3) {
    return -0x4866;
  }
  if (param_4 == (undefined2 *)0x0) {
    return -0x6b66;
  }
  if (param_5 == 0) {
    return -0x6b66;
  }
  lVar7 = *(long *)(param_2 + 0x10);
  uVar3 = 0;
  if (((param_3 ^ 0xffffffff) & 0xff) != 0) {
    uVar3 = param_3;
  }
  if (lVar7 == 0) {
LAB_0012e540:
    *param_4 = 0;
    return 0;
  }
  cVar4 = *(char *)(param_2 + 0x68);
  uVar6 = 0xe0001;
  bVar1 = (byte)uVar3;
  if (cVar4 == '\x01') {
    uVar6 = 0xe0000;
    lVar7 = *(long *)(param_2 + (ulong)bVar1 * 8 + 0x30);
  }
  else if (cVar4 == '\x02') {
    lVar7 = *(long *)(param_2 + (ulong)bVar1 * 8 + 0x30);
  }
  else if (cVar4 == '\x03') {
    uVar6 = *(uint *)(lVar7 + 0x70);
    lVar7 = *(long *)(param_2 + (ulong)bVar1 * 8 + 0x30);
  }
  else {
    uVar6 = (*(uint *)(lVar7 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar7 + 8) & 0xff00ff) << 8;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    lVar7 = *(long *)(param_2 + (ulong)bVar1 * 8 + 0x30);
  }
  if ((((lVar7 == 0) && (1 < uVar6 - 0xe0000)) && (uVar6 != 0x80020000)) && (uVar6 != 0x80030000))
  goto LAB_0012e540;
  if ((*(ushort *)(param_2 + 0x80) & 0xf) == 2) {
    uVar2 = *(ushort *)(param_2 + 0x80) & 0xf0;
    if (uVar2 == 0x20) {
      sVar10 = *(short *)(param_1 + 0x6f498);
      param_2 = param_1 + 0x6d650;
    }
    else {
      if (uVar2 != 0x10) goto LAB_0012e54c;
      sVar10 = *(short *)(param_1 + 0x6f49a);
      param_2 = param_1 + 0x6d760;
    }
    if (sVar10 == 0) {
      return 0;
    }
  }
  else {
LAB_0012e54c:
    sVar10 = 1;
  }
  iVar9 = 0;
  lVar7 = ((ulong)uVar3 & 0xff) * 8 + 0x30;
  do {
    while( true ) {
      lVar8 = *(long *)(param_2 + 0x10);
      sVar10 = sVar10 + -1;
      if (lVar8 != 0) break;
LAB_0012e604:
      param_2 = param_2 + 0x88;
      *param_4 = 0;
      if (sVar10 == 0) {
        return iVar9;
      }
    }
    cVar4 = *(char *)(param_2 + 0x68);
    if (cVar4 == '\x01') {
      uVar6 = 0xe0000;
      lVar8 = *(long *)(param_2 + lVar7);
    }
    else if (cVar4 == '\x02') {
      uVar6 = 0xe0001;
      lVar8 = *(long *)(param_2 + lVar7);
    }
    else if (cVar4 == '\x03') {
      uVar6 = *(uint *)(lVar8 + 0x70);
      lVar8 = *(long *)(param_2 + lVar7);
    }
    else {
      uVar6 = (*(uint *)(lVar8 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar8 + 8) & 0xff00ff) << 8;
      uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
      lVar8 = *(long *)(param_2 + lVar7);
    }
    if (((lVar8 == 0) && (1 < uVar6 - 0xe0000)) && ((uVar6 != 0x80020000 && (uVar6 != 0x80030000))))
    goto LAB_0012e604;
    iVar5 = FUN_0010b9c0(param_1,param_2,(ulong)uVar3,param_4,param_5);
    if (iVar5 < 0) {
      return iVar5;
    }
    param_5 = param_5 + iVar5 * -2;
    param_4 = param_4 + iVar5;
    iVar9 = iVar5 + iVar9;
    param_2 = param_2 + 0x88;
    if (sVar10 == 0) {
      return iVar9;
    }
  } while( true );
}

