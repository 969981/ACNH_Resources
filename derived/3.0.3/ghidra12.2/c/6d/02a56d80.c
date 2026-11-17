
void FUN_02a56d80(undefined4 *param_1,undefined8 param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR_DAT_04bb26a8;
  uVar1 = FUN_0277d6c4(param_2);
  lVar3 = *(long *)(lVar3 + 0x19f800);
joined_r0x02a56db0:
  do {
    if (lVar3 == 0) {
      uVar2 = 0;
LAB_02a56df4:
      *param_1 = uVar2;
      return;
    }
    if (uVar1 < *(ushort *)(lVar3 + 0x20)) {
      lVar3 = *(long *)(lVar3 + 8);
      goto joined_r0x02a56db0;
    }
    if (uVar1 <= *(ushort *)(lVar3 + 0x20)) {
      uVar2 = *(undefined4 *)(lVar3 + 0x24);
      goto LAB_02a56df4;
    }
    lVar3 = *(long *)(lVar3 + 0x10);
  } while( true );
}

