
void FUN_02a0d7e0(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined2 uVar2;
  long lVar3;
  undefined *local_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(param_2 + 8);
  local_30 = PTR_DAT_04bb2020 + 0x10;
  lVar3 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0x19f840);
joined_r0x02a0d820:
  do {
    if (lVar3 == 0) {
      uVar2 = 0xffff;
LAB_02a0d868:
      FUN_02a0d880(param_1,uVar2);
      return;
    }
    iVar1 = FUN_029ca720(&local_30,lVar3 + 0x20);
    if (iVar1 < 0) {
      lVar3 = *(long *)(lVar3 + 8);
      goto joined_r0x02a0d820;
    }
    if (iVar1 == 0) {
      uVar2 = *(undefined2 *)(lVar3 + 0x30);
      goto LAB_02a0d868;
    }
    lVar3 = *(long *)(lVar3 + 0x10);
  } while( true );
}

