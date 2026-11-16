
void FUN_029886a0(byte *param_1,undefined4 param_2,undefined8 param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR_DAT_04bb26a8;
  uVar1 = FUN_0277d6c4(param_3);
  lVar3 = *(long *)(lVar3 + 0x19f800);
joined_r0x029886d8:
  do {
    if (lVar3 == 0) {
      uVar2 = 0;
LAB_02988718:
      *(undefined4 *)(param_1 + 4) = param_2;
      *(undefined4 *)(param_1 + 8) = uVar2;
      *param_1 = *param_1 | 1;
      return;
    }
    if (uVar1 < *(ushort *)(lVar3 + 0x20)) {
      lVar3 = *(long *)(lVar3 + 8);
      goto joined_r0x029886d8;
    }
    if (uVar1 <= *(ushort *)(lVar3 + 0x20)) {
      uVar2 = *(undefined4 *)(lVar3 + 0x24);
      goto LAB_02988718;
    }
    lVar3 = *(long *)(lVar3 + 0x10);
  } while( true );
}

