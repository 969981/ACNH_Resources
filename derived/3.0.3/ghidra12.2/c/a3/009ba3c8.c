
void FUN_009ba3c8(long param_1,long param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_34 [2];
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  if (0 < *(int *)(param_2 + 0x10)) {
    *(undefined4 *)(param_1 + 0x10) = *param_3;
    if (*(char *)(param_1 + 8) == '\0') {
      lVar5 = *(long *)(DAT_04d07da8 + 0x48);
      if ((lVar5 != 0) && ((float)*(int *)(param_1 + 0xc) <= *(float *)(DAT_04d07da8 + 0x54))) {
        puVar1 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x1610) + 0xf0))(lVar5 + 0x1610);
        *(undefined4 *)(param_1 + 0xc) = *puVar1;
        uVar2 = FUN_009ba4b0(param_1,&uStack_32,param_2);
        uVar3 = FUN_009ba780(param_1,&uStack_31,param_2);
        uVar4 = FUN_009bacf0(param_1,auStack_34,param_2);
        if (((uVar2 & 1) != 0) && (((uVar3 & 1) != 0 && ((uVar4 & 1) != 0)))) {
          *(undefined1 *)(param_1 + 8) = 1;
        }
      }
    }
    else {
      *(undefined1 *)(param_1 + 8) = 0;
    }
  }
  return;
}

