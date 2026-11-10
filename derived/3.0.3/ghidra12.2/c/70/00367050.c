
void FUN_00367050(long param_1,code *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  FUN_0035cd08(*(undefined8 *)(param_1 + 0x80));
  lVar4 = 0;
  uVar5 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  do {
    uVar6 = *(undefined4 *)(param_1 + 0x268);
    FUN_0034fbc0(&local_90);
    local_80 = CONCAT44(local_80._4_4_,uVar6);
    if (uVar5 == 0x24) {
      uVar1 = 3;
      local_90._0_5_ = CONCAT14(1,(undefined4)local_90);
      uVar2 = 3;
      uVar3 = 0x29;
    }
    else {
      uVar1 = (undefined1)*(undefined4 *)(&DAT_04134bac + (ulong)(((uint)uVar5 & 0xff) / 0xc) * 4);
      uVar3 = (undefined2)(&DAT_04101ed0)[uVar5 & 3];
      uVar2 = (undefined1)
              *(undefined4 *)(&DAT_04134bac + (ulong)(((uint)uVar5 >> 2 & 0x3f) % 3) * 4);
    }
    local_90._0_2_ = CONCAT11(uVar2,uVar1);
    local_90 = CONCAT26(uVar3,(undefined6)local_90);
    (*param_2)(*(long *)(param_1 + 0x260) + lVar4,&local_90,param_3);
    uVar5 = uVar5 + 1;
    lVar4 = lVar4 + 8;
  } while (uVar5 != 0x25);
  return;
}

