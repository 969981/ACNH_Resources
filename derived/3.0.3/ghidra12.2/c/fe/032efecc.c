
undefined4 FUN_032efecc(long param_1,ushort param_2,ushort param_3,short param_4)

{
  undefined4 uVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  
  if (param_4 == 0) {
    lVar6 = 0;
    if (param_2 < 0x12d) {
      lVar6 = param_1 + 0x79ea0 + (ulong)param_2 * 0x88;
    }
    bVar3 = 299 < param_3;
    bVar4 = param_3 == 300;
    lVar7 = param_1 + 0x79ea0 + (ulong)param_3 * 0x88;
  }
  else {
    param_2 = *(byte *)(param_1 + 0x79e9d) + param_2;
    param_3 = *(byte *)(param_1 + 0x79e9d) + param_3;
    lVar6 = 0;
    if (param_2 < 0x38) {
      lVar6 = param_1 + (long)(int)(short)param_2 * 0x88 + 0x83e08;
    }
    bVar3 = 0x36 < param_3;
    bVar4 = param_3 == 0x37;
    lVar7 = param_1 + (ulong)param_3 * 0x88 + 0x83e08;
  }
  lVar2 = 0;
  if (!bVar3 || bVar4) {
    lVar2 = lVar7;
  }
  uVar5 = thunk_FUN_0012c8c0(param_1 + 8,lVar6,lVar2,*(undefined1 *)(param_1 + 0x79e98));
  uVar1 = 0xffff8075;
  if (-1 < (short)uVar5) {
    uVar1 = uVar5;
  }
  return uVar1;
}

