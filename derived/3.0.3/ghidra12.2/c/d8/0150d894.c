
void FUN_0150d894(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x100);
  if (*(char *)(param_1 + 0x98) == '\0') {
    if (lVar2 == 0) {
      return;
    }
    if ((*(ushort *)(param_1 + 0x80) >> 1 & 1) != 0) {
      uVar3 = FUN_01596728(param_1 + 0x70);
      if ((uVar3 & 1) != 0) {
        FUN_015a30c0(lVar2,param_1 + 0x70);
      }
    }
    if ((*(ushort *)(param_1 + 0xb0) >> 1 & 1) == 0) {
      return;
    }
    uVar3 = FUN_01596728(param_1 + 0xa0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    FUN_015a30c0(lVar2,param_1 + 0xa0);
    return;
  }
  if (lVar2 == 0) {
    return;
  }
  if ((*(ushort *)(param_1 + 0x80) >> 1 & 1) == 0) {
    uVar1 = FUN_015a2a64(lVar2,param_1 + 0x70,param_1 + 0x9a,&DAT_041758f8,0,1,1);
    uVar3 = uVar1 & 0xffffffff;
    if ((*(ushort *)(param_1 + 0xb0) >> 1 & 1) == 0) goto LAB_0150d968;
  }
  else {
    if ((*(ushort *)(param_1 + 0xb0) >> 1 & 1) != 0) goto LAB_0150d990;
    uVar3 = 1;
LAB_0150d968:
    uVar1 = FUN_015a2df4(lVar2,param_1 + 0xa0,param_1 + 0x9a,&DAT_041758f8,0,1);
    if ((uVar3 & 1) == 0) {
      return;
    }
  }
  if ((uVar1 & 1) == 0) {
    return;
  }
LAB_0150d990:
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined2 *)(param_1 + 0x9a) = DAT_04cb6038;
  return;
}

