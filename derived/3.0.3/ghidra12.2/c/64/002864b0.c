
long FUN_002864b0(long param_1,ulong param_2,undefined8 param_3,uint param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  if ((param_2 & 0xfffffffffffffff8) < 0x129) {
    param_1 = 0;
  }
  else {
    FUN_00286234(param_1,param_3,0,param_1,param_2 & 0xfffffffffffffff8,1,param_4 & 1);
    lVar3 = 0;
    if ((*(ushort *)(param_1 + 0xd0) & 1) != 0) {
      lVar3 = param_1 + 0x90;
      FUN_00290438(lVar3);
    }
    if (*(int *)(param_1 + 0x88) == 1) {
      puVar1 = (undefined8 *)(param_1 + 0x108);
    }
    else {
      puVar1 = *(undefined8 **)(param_1 + 0x30);
    }
    *(undefined4 *)(puVar1 + 2) = 0;
    lVar2 = *(long *)(param_1 + 0x38);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[3] = lVar2 + -0x128;
    FUN_00286560(param_1);
    if (lVar3 != 0) {
      FUN_00290440(lVar3);
      return param_1;
    }
  }
  return param_1;
}

