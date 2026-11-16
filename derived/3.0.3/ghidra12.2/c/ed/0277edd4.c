
undefined4 FUN_0277edd4(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined1 auStack_48 [16];
  undefined8 local_38;
  
  uVar5 = 0;
  lVar4 = *(long *)PTR_DAT_04bbbc68;
  if (((((lVar4 != 0) && (*(long *)(lVar4 + 0xb0) != 0)) &&
       (*(long *)(*(long *)(lVar4 + 0xb0) + 8) != 0)) &&
      ((*(long *)(lVar4 + 0x488) != 0 && (*(long *)(*(long *)(lVar4 + 0x488) + 8) != 0)))) &&
     ((*(long *)(lVar4 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar4 + 0x2b0) + 8) != 0)))) {
    uVar1 = FUN_0277d6c4();
    uVar1 = (uVar1 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if ((uVar1 < *(uint *)(lVar4 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar1 * 8) != 0)) {
      FUN_0124c030(auStack_48,param_1);
      uVar3 = FUN_0123d890(local_38,1);
      if ((uVar3 & 1) != 0) {
        iVar2 = FUN_0277d6c4(param_1);
        if (iVar2 == 0xea79) {
          uVar5 = FUN_011e9450(param_2);
        }
        else {
          uVar5 = 0x40a00000;
        }
      }
    }
  }
  return uVar5;
}

