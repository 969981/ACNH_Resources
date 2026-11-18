
void FUN_03412850(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int *piVar6;
  
  puVar1 = PTR_DAT_04bb2200;
  iVar5 = 0;
  do {
    lVar4 = param_1 + 8 + (long)iVar5 * 0x30;
    piVar6 = (int *)(lVar4 + 0x2c);
    if ((*piVar6 == 3) &&
       (uVar2 = FUN_015a2df4(*(undefined8 *)(*(long *)puVar1 + 0x100),lVar4,
                             param_1 + 8 + (long)iVar5 * 0x30 + 0x28,&DAT_0418eaa8,0,0),
       (uVar2 & 1) != 0)) {
      *piVar6 = 4;
    }
    iVar3 = *piVar6;
    if (iVar3 == 1) {
      if ((*(ushort *)(lVar4 + 0x10) >> 1 & 1) == 0) {
        iVar3 = 0;
        goto LAB_03412898;
      }
    }
    else if (iVar3 == 4) {
      uVar2 = FUN_01596728(lVar4);
      iVar3 = 5;
      if ((uVar2 & 1) != 0) goto LAB_03412898;
    }
    else if ((iVar3 == 2) &&
            (((*(ushort *)(lVar4 + 0x10) >> 1 & 1) == 0 ||
             (uVar2 = FUN_015a30c0(*(undefined8 *)(*(long *)puVar1 + 0x100),lVar4), (uVar2 & 1) != 0
             )))) {
      iVar3 = 1;
LAB_03412898:
      *piVar6 = iVar3;
    }
    iVar5 = iVar5 + 1;
    if (iVar5 == 100) {
      return;
    }
  } while( true );
}

