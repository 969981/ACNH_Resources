
void FUN_01dbfb40(undefined8 param_1,byte *param_2,byte param_3)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  byte local_38 [4];
  byte local_34 [4];
  long local_30;
  long lStack_28;
  
  local_38[0] = *param_2;
  if (7 < local_38[0]) {
    local_38[0] = 0xff;
  }
  lVar4 = FUN_025830c0(DAT_055021a0,local_38,1);
  if ((((lVar4 != 0) && (local_34[0] = *param_2, local_34[0] < 8)) &&
      (uVar5 = FUN_007b36c8(&local_30,local_34), (uVar5 & 1) != 0)) &&
     (**(long **)(DAT_053719b8 + 8) == local_30 && (*(long **)(DAT_053719b8 + 8))[1] == lStack_28))
  {
    lVar4 = *(long *)(DAT_053565a0 + 0x10);
    uVar2 = 0;
    if (*(uint *)(DAT_053565a0 + 0x18) != 0xffffffff) {
      uVar2 = *(uint *)(DAT_053565a0 + 0x18);
    }
    if (*(uint *)(DAT_053565a0 + 8) <= uVar2) {
      uVar2 = 0;
    }
    lVar6 = lVar4 + (long)(int)uVar2 * 0x58;
    bVar3 = *(byte *)(lVar6 + 0x10);
    bVar1 = bVar3 & 0xfe | param_3 & 1;
    *(byte *)(lVar6 + 0x10) = bVar1;
    if (bVar3 != bVar1) {
      *(undefined4 *)(lVar4 + (long)(int)uVar2 * 0x58 + 0x50) = 0x1e;
    }
  }
  return;
}

