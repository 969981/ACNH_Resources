
undefined8 FUN_01479bfc(long param_1,undefined4 *param_2,undefined8 param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uVar3 = 0;
  if (*(long *)(param_1 + 0xa88) != 0) {
    uVar2 = FUN_01433290(*(long *)(param_1 + 0xa88),param_3,0);
    uVar3 = 0;
    if ((((uVar2 & 1) != 0) && (uVar3 = 1, param_2 != (undefined4 *)0x0)) &&
       (lVar5 = *(long *)(param_1 + 0xa88), lVar5 != 0)) {
      FUN_01476a50(&local_18,param_1);
      *param_2 = local_18;
      param_2[1] = uStack_14;
      param_2[4] = *(undefined4 *)(param_1 + 0x2c8);
      param_2[5] = *(undefined4 *)(param_1 + 0x2cc);
      param_2[6] = *(undefined4 *)(param_1 + 0x2d0);
      lVar4 = *(long *)(param_1 + 0x68);
      param_2[7] = *(undefined4 *)(lVar4 + 0x278);
      param_2[8] = *(undefined4 *)(lVar4 + 0x27c);
      param_2[9] = *(undefined4 *)(lVar4 + 0x280);
      *(undefined1 *)(param_2 + 10) = *(undefined1 *)(lVar5 + 0x30a);
      *(undefined1 *)((long)param_2 + 0x29) = *(undefined1 *)(lVar5 + 0x308);
      bVar1 = (**(code **)(**(long **)(param_1 + 0xa88) + 0x1c0))
                        (*(long **)(param_1 + 0xa88),PTR_DAT_04bb32e0);
      uVar3 = 1;
      *(byte *)((long)param_2 + 0x2a) = bVar1 & 1;
      param_2[0xb] = *(undefined4 *)(param_1 + 0x230);
    }
  }
  return uVar3;
}

