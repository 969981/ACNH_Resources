
void FUN_02a56e10(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 local_8;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 != 99999 && -1 < (int)uVar2) {
    uVar1 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  }
  for (lVar3 = *(long *)(DAT_055f6860 + 0x19f820); lVar3 != 0; lVar3 = *(long *)(lVar3 + 8)) {
    while (*(int *)(lVar3 + 0x20) <= (int)uVar1) {
      if ((int)uVar1 <= *(int *)(lVar3 + 0x20)) {
        local_8 = (ulong)(ushort)*(undefined4 *)(lVar3 + 0x2c);
        goto LAB_02a56ea8;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      if (lVar3 == 0) goto LAB_02a56e8c;
    }
  }
LAB_02a56e8c:
  local_8 = 0xfffe;
LAB_02a56ea8:
  FUN_0277d4ac(&local_8);
  *param_1 = (undefined4)local_8;
  param_1[1] = local_8._4_4_;
  return;
}

