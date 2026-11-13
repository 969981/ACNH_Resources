
void FUN_014c9c08(long param_1)

{
  byte *pbVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  byte bVar5;
  undefined4 local_8;
  byte local_4 [4];
  
  if (*(long *)PTR_DAT_04bbbc38 == 0) {
    if ((*(byte *)(param_1 + 0xa2c) >> 1 & 1) != 0) {
      uVar4 = 0;
LAB_014c9c68:
      uVar3 = 6;
      if (1 < (int)(uVar4 >> 0x20) - 5U || (int)uVar4 != 3) {
        uVar3 = 0;
      }
      goto LAB_014c9c88;
    }
  }
  else {
    uVar4 = *(ulong *)(*(long *)PTR_DAT_04bbbc38 + 0xc);
    if ((int)uVar4 - 1U < 2) {
      uVar3 = 9;
    }
    else {
      if ((int)uVar4 != 3 || uVar4 >> 0x20 != 2) {
        if ((*(byte *)(param_1 + 0xa2c) >> 1 & 1) != 0) goto LAB_014c9c68;
        goto LAB_014c9c94;
      }
      uVar3 = 5;
    }
LAB_014c9c88:
    uVar4 = FUN_014c9540(param_1,uVar3);
    if ((uVar4 & 1) != 0) {
      return;
    }
  }
LAB_014c9c94:
  local_8 = 3;
  if (*(int *)(param_1 + 0x378) != 3) {
    FUN_03ebb160(param_1 + 0x370);
  }
  pbVar1 = (byte *)(DAT_056b6f18 + 0xef4);
  if (DAT_056b6f18 == 0) {
    uVar3 = 0xffffffff;
    pbVar1 = PTR_DAT_04bb32e0;
  }
  else {
    uVar3 = *(undefined4 *)(DAT_056b6f18 + 0xef8);
  }
  bVar5 = *pbVar1;
  if (7 < bVar5) {
    bVar5 = 0xff;
  }
  local_8 = CONCAT31(local_8._1_3_,bVar5);
  lVar2 = FUN_02ef3b00(uVar3,&local_8);
  if (lVar2 == 0) {
    local_4[0] = bVar5;
    lVar2 = FUN_02ef3c90(local_4);
    if (lVar2 == 0) goto LAB_014c9d48;
  }
  lVar2 = *(long *)(lVar2 + 0x210);
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x1b0) == 3)) {
    if (*(int *)(lVar2 + 0x1f0 + (ulong)*(byte *)(lVar2 + 0x200) * 4) == -1) {
      *(undefined4 *)(lVar2 + 0x1f0 + (ulong)*(byte *)(lVar2 + 0x200) * 4) = 4;
    }
  }
LAB_014c9d48:
  return;
}

