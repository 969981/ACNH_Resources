
undefined8 FUN_016e4c7c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined4 local_38 [6];
  
  lVar2 = DAT_05150358;
  if (DAT_04c487d4 != -1) {
    local_38[0] = 0x20;
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if ((((((*(uint *)(puVar1 + 4) & 1) != 0) && (DAT_05150358 != 0)) &&
         (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
        ((*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0 &&
         (*(long *)(DAT_05150358 + 0x488) != 0)))) &&
       ((*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0 &&
        ((*(long *)(DAT_05150358 + 0x2b0) != 0 &&
         (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)))))) {
      uVar3 = FUN_0277d6c4();
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar2 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar2 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar2 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        FUN_0124c030(local_38,param_1);
        uVar4 = FUN_01250394(local_38,1);
        if ((uVar4 & 1) == 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}

