
void FUN_02606cf0(undefined8 param_1,short *param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04bb43c0;
  if (*param_2 != -2) {
    lVar4 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(param_2);
    lVar2 = DAT_05150358;
    if (*(long *)puVar1 != 0) {
      lVar4 = *(long *)(lVar4 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) goto LAB_02606d60;
    }
    if (((DAT_05150358 != 0) &&
        ((((*(long *)(DAT_05150358 + 0xb0) != 0 &&
           (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
          (*(long *)(DAT_05150358 + 0x488) != 0)) &&
         ((*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0 &&
          (*(long *)(DAT_05150358 + 0x2b0) != 0)))))) &&
       (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)) {
      uVar3 = FUN_0277d6c4(param_2);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar2 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar2 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar2 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
LAB_02606d60:
        FUN_0260a240(param_1,param_2);
        return;
      }
    }
  }
  return;
}

