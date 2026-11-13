
bool FUN_01479cd8(long param_1,undefined4 *param_2,undefined8 param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined4 local_38;
  undefined4 uStack_34;
  
  lVar3 = *(long *)(param_1 + 0xa88);
  if ((param_2 != (undefined4 *)0x0) && (lVar3 != 0)) {
    FUN_01476a50(&local_38);
    *param_2 = local_38;
    param_2[1] = uStack_34;
    param_2[4] = *(undefined4 *)(param_1 + 0x2c8);
    param_2[5] = *(undefined4 *)(param_1 + 0x2cc);
    param_2[6] = *(undefined4 *)(param_1 + 0x2d0);
    lVar2 = *(long *)(param_1 + 0x68);
    param_2[7] = *(undefined4 *)(lVar2 + 0x278);
    param_2[8] = *(undefined4 *)(lVar2 + 0x27c);
    param_2[9] = *(undefined4 *)(lVar2 + 0x280);
    *(undefined1 *)(param_2 + 10) = *(undefined1 *)(lVar3 + 0x30a);
    *(undefined1 *)((long)param_2 + 0x29) = *(undefined1 *)(lVar3 + 0x308);
    bVar1 = (**(code **)(**(long **)(param_1 + 0xa88) + 0x1c0))(*(long **)(param_1 + 0xa88),param_3)
    ;
    *(byte *)((long)param_2 + 0x2a) = bVar1 & 1;
    param_2[0xb] = *(undefined4 *)(param_1 + 0x230);
  }
  return lVar3 != 0;
}

