
void FUN_0065e1b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = FUN_00662260();
  if (DAT_04c7e3f8 != uVar4) {
    lVar2 = DAT_04c7e3f0 + ((long)((ulong)uVar4 << 0x20) >> 0x1b);
    uVar3 = *param_2;
    uVar5 = param_2[2];
    *(undefined8 *)(lVar2 + 0x10) = param_2[1];
    *(undefined8 *)(lVar2 + 0x18) = uVar5;
    *(undefined8 *)(lVar2 + 8) = uVar3;
    return;
  }
  if ((DAT_04c7e3fc & 0x3fffffff) == uVar4) {
    FUN_00426990(PTR_DAT_048607b8,&DAT_04c7e3f0,0x20);
    uVar4 = DAT_04c7e3f8;
  }
  puVar1 = (undefined8 *)(DAT_04c7e3f0 + (long)(int)uVar4 * 0x20);
  *puVar1 = *param_1;
  uVar3 = *param_2;
  uVar5 = param_2[2];
  puVar1[2] = param_2[1];
  puVar1[3] = uVar5;
  puVar1[1] = uVar3;
  DAT_04c7e3f8 = uVar4 + 1;
  return;
}

