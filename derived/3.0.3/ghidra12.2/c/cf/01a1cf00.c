
undefined8 FUN_01a1cf00(float param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  float fVar5;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined8 local_38;
  
  lVar1 = DAT_05150358;
  if (((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
       (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
      ((*(long *)(DAT_05150358 + 0x488) != 0 &&
       (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)))) &&
     ((*(long *)(DAT_05150358 + 0x2b0) != 0 && (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)
      ))) {
    uVar2 = FUN_0277d6c4();
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar1 + 0x1f8);
    if (((uVar2 < *(uint *)(lVar1 + 0x1d8)) &&
        (*(long *)(*(long *)(lVar1 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) &&
       (fVar5 = (float)FUN_01a1c140(param_3), fVar5 <= param_1)) {
      FUN_0124c030(auStack_48,param_2);
      iVar3 = FUN_0123db50(auStack_40,local_38);
      if ((iVar3 - 0xbU < 7) && (uVar4 = FUN_0123d890(local_38,0), (uVar4 & 1) == 0)) {
        return 1;
      }
    }
  }
  return 0;
}

