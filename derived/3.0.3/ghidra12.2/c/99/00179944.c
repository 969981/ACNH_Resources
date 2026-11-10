
undefined8 FUN_00179944(long *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_40;
  char *local_38;
  long local_30;
  long local_28;
  
  lVar5 = *param_1;
  if (((*(ushort *)(lVar5 + 0x15c4) >> 9 & 1) == 0) || (*(long *)(lVar5 + 0x1510) == 0)) {
    *(undefined8 *)(lVar5 + 0xf8) = 0xffffffffffffffff;
    return 0;
  }
  local_28 = 0;
  local_38 = (char *)0x0;
  local_30 = 0;
  local_40 = 0;
  iVar2 = FUN_0014e1e4(*(long *)(lVar5 + 0x1510),&local_38,0,&local_28);
  if (iVar2 != 1) {
    cVar1 = *local_38;
    while ((cVar1 != '\0' && ((iVar3 = FUN_00146528(cVar1), iVar3 != 0 || (*local_38 == '-'))))) {
      cVar1 = local_38[1];
      local_38 = local_38 + 1;
    }
    uVar4 = FUN_0014e1e4(local_38,&local_40,0,&local_30);
    iVar3 = (int)uVar4;
    if (iVar3 != 1) {
      if ((iVar2 == 0) && (iVar3 == 2)) {
        uVar4 = 0;
      }
      else {
        if ((iVar2 != 2) || (iVar3 != 0)) {
          if (local_30 < local_28) {
            return 0x21;
          }
          if (local_30 - local_28 == 0x7fffffffffffffff) {
            return 0x21;
          }
          *(long *)(lVar5 + 0x1518) = local_28;
          *(long *)(lVar5 + 0xf8) = (local_30 - local_28) + 1;
          return 0;
        }
        *(long *)(lVar5 + 0xf8) = local_30;
        local_28 = -local_30;
      }
      *(long *)(lVar5 + 0x1518) = local_28;
      return uVar4;
    }
  }
  return 0x21;
}

