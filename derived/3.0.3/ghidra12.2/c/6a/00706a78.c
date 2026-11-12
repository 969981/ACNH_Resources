
bool FUN_00706a78(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 uVar4;
  undefined2 local_34 [2];
  undefined4 local_18;
  undefined4 uStack_14;
  
  if (param_2 != (undefined4 *)0x0) {
    lVar3 = *(long *)(param_1 + 0x48);
    FUN_01476a50(&local_18,lVar3);
    *param_2 = local_18;
    param_2[1] = uStack_14;
    param_2[2] = *(undefined4 *)(lVar3 + 0x230);
    param_2[3] = *(undefined4 *)(*(long *)(lVar3 + 0x68) + 0x27c);
    uVar4 = FUN_01472900(lVar3);
    param_2[4] = uVar4;
    if (((*(uint *)(param_1 + 0x300) >> 1 & 1) == 0) && ((*(uint *)(param_1 + 0x300) >> 2 & 1) == 0)
       ) {
      puVar2 = (undefined4 *)(param_1 + 0x278);
    }
    else {
      puVar2 = (undefined4 *)(param_1 + 0x304);
    }
    param_2[5] = *puVar2;
    if (((*(uint *)(param_1 + 0x300) >> 1 & 1) == 0) && ((*(uint *)(param_1 + 0x300) >> 2 & 1) == 0)
       ) {
      puVar2 = (undefined4 *)(param_1 + 700);
    }
    else {
      puVar2 = (undefined4 *)(param_1 + 0x308);
    }
    param_2[6] = *puVar2;
    if (((*(uint *)(param_1 + 0x300) >> 1 & 1) == 0) && ((*(uint *)(param_1 + 0x300) >> 2 & 1) == 0)
       ) {
      puVar1 = (undefined *)(param_1 + 0x2d8);
      if (0xd < *(int *)(param_1 + 0x278) - 0xfU) {
        puVar1 = PTR_DAT_04bb3170;
      }
    }
    else {
      puVar1 = (undefined *)(param_1 + 0x30c);
    }
    FUN_007ef010(local_34,puVar1);
    *(undefined2 *)(param_2 + 7) = local_34[0];
  }
  return param_2 != (undefined4 *)0x0;
}

