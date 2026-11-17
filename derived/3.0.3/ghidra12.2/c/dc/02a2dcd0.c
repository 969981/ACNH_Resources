
void FUN_02a2dcd0(long param_1,undefined2 *param_2,long param_3)

{
  int iVar1;
  undefined2 uVar2;
  long lVar3;
  undefined *local_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(param_3 + 8);
  local_30 = PTR_DAT_04bb2020 + 0x10;
  lVar3 = *(long *)(param_1 + 0x19f840);
joined_r0x02a2dd04:
  do {
    if (lVar3 == 0) {
      uVar2 = 0xffff;
LAB_02a2dd48:
      *param_2 = uVar2;
      return;
    }
    iVar1 = FUN_029ca720(&local_30,lVar3 + 0x20);
    if (iVar1 < 0) {
      lVar3 = *(long *)(lVar3 + 8);
      goto joined_r0x02a2dd04;
    }
    if (iVar1 == 0) {
      uVar2 = *(undefined2 *)(lVar3 + 0x30);
      goto LAB_02a2dd48;
    }
    lVar3 = *(long *)(lVar3 + 0x10);
  } while( true );
}

