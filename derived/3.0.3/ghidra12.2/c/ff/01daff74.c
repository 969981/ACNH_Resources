
void FUN_01daff74(long *param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  byte local_24 [4];
  
  local_24[0] = *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x471);
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  if (*param_1 == 0) {
LAB_01daffe4:
    if ((char)param_1[0xf] == '\0') goto LAB_01db0040;
LAB_01daffec:
    bVar5 = true;
    uVar3 = 0;
    bVar1 = true;
    if (*param_1 == 0) goto LAB_01db0008;
  }
  else {
    FUN_01db0380(param_1,local_24);
    lVar4 = *param_1;
    if (*(long *)(lVar4 + 0xa0) != 0) {
      return;
    }
    if ((*(int *)(lVar4 + 0x60) == 0) &&
       ((*(long *)(lVar4 + 0x78) == 0 || (*(int *)(*(long *)(lVar4 + 0x78) + 0xc) == 0))))
    goto LAB_01daffe4;
LAB_01db0040:
    iVar2 = FUN_01db0670(param_1,local_24);
    if (iVar2 < 1) {
      if (iVar2 < 0) {
        return;
      }
      goto LAB_01daffec;
    }
    bVar5 = false;
    *(undefined1 *)(param_1 + 0xf) = 2;
    bVar1 = false;
    if (*param_1 == 0) {
      uVar3 = 0;
      goto LAB_01db0008;
    }
  }
  bVar5 = bVar1;
  FUN_01db08d0();
  uVar3 = FUN_01db0380(param_1,local_24);
LAB_01db0008:
  if (!bVar5 && (uVar3 & 1) == 0) {
    FUN_01cab5e0(*(undefined8 *)PTR_DAT_04bc10a8,1);
  }
  FUN_01db0a30(param_1,local_24);
  return;
}

