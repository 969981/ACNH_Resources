
bool FUN_0303b970(long param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 == 0) {
    return false;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (*(char *)(param_1 + 8) != '\0') {
    do {
      while (*(char *)(lVar5 + 0x20) == '\0') {
LAB_0303ba00:
        lVar5 = *(long *)(lVar5 + 0x10);
        if (lVar5 == 0) {
          return false;
        }
      }
      iVar1 = *(int *)(lVar5 + 0x30);
      if (iVar4 == iVar1) {
        if (*(int *)(lVar5 + 0x34) <= param_3) {
          if (*(int *)(lVar5 + 0x34) < param_3) goto LAB_0303ba00;
          goto LAB_0303ba4c;
        }
      }
      else if (iVar1 <= iVar4) {
        if (iVar1 < iVar4) goto LAB_0303ba00;
        goto LAB_0303ba4c;
      }
      lVar5 = *(long *)(lVar5 + 8);
      if (lVar5 == 0) {
        return false;
      }
    } while( true );
  }
  uVar6 = *(ulong *)(param_1 + 0x10);
LAB_0303b9a0:
  if (*(char *)(lVar5 + 0x20) == '\0') {
    uVar7 = *(ulong *)(lVar5 + 0x28);
    if (uVar6 != uVar7) {
      if (uVar6 < uVar7) goto LAB_0303b994;
      if (uVar6 <= uVar7) {
LAB_0303ba4c:
        if (param_2 == 0) {
          return false;
        }
        iVar4 = FUN_01d6d500(lVar5 + 0x38);
        return iVar4 == 0;
      }
LAB_0303b9ec:
      lVar5 = *(long *)(lVar5 + 0x10);
      if (lVar5 == 0) {
        return false;
      }
      goto LAB_0303b9a0;
    }
    iVar1 = *(int *)(lVar5 + 0x30);
    if (iVar4 != iVar1) {
      if (iVar4 < iVar1) goto LAB_0303b994;
      bVar3 = SBORROW4(iVar1,iVar4);
      iVar1 = iVar1 - iVar4;
LAB_0303b9e8:
      if (iVar1 < 0 != bVar3) goto LAB_0303b9ec;
      goto LAB_0303ba4c;
    }
    iVar2 = *(int *)(lVar5 + 0x34);
    bVar3 = SBORROW4(iVar2,param_3);
    iVar1 = iVar2 - param_3;
    if (iVar2 <= param_3) goto LAB_0303b9e8;
  }
LAB_0303b994:
  lVar5 = *(long *)(lVar5 + 8);
  if (lVar5 == 0) {
    return false;
  }
  goto LAB_0303b9a0;
}

