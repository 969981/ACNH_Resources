
void FUN_011e8660(long param_1,int *param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined8 local_38;
  
  lVar1 = DAT_05150358;
  iVar3 = *(int *)(param_1 + 0x24f78);
  if (0 < iVar3) {
    param_1 = param_1 + 0x278;
    do {
      if (((*(ushort *)(param_1 + 0x68) >> 3 & 1) != 0) && (*(int *)(param_1 + 8) == *param_2)) {
        if (((DAT_05150358 != 0) &&
            ((((*(long *)(DAT_05150358 + 0xb0) != 0 &&
               (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
              (*(long *)(DAT_05150358 + 0x488) != 0)) &&
             ((*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0 &&
              (*(long *)(DAT_05150358 + 0x2b0) != 0)))))) &&
           (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)) {
          uVar2 = FUN_0277d6c4(param_1);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar1 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar1 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar1 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
            FUN_0124c030(auStack_48,param_1);
            iVar3 = FUN_0123db50(auStack_40,local_38);
            if ((iVar3 == 0x2d) || (iVar3 = FUN_0123db50(auStack_40,local_38), iVar3 - 0x23U < 9)) {
              puVar4 = &DAT_050dfb30;
              goto LAB_011e8780;
            }
          }
        }
        puVar4 = &DAT_050dfb2c;
LAB_011e8780:
        FUN_012575ac(param_1,puVar4,param_3 & 1);
        return;
      }
      param_1 = param_1 + 0x78;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

