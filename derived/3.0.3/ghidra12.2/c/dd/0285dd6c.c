
void FUN_0285dd6c(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  
  uVar4 = *param_1;
  uVar7 = 0;
  if ((*(byte *)((long)param_1 + 7) != 0 ||
       (((ulong)uVar4 != 0 || (ushort)param_1[1] != 0) || *(byte *)((long)param_1 + 6) != 0)) &&
     ((uint)*(byte *)((long)param_1 + 7) ==
      ((uVar4 + (uVar4 >> 0x10) + (uVar4 >> 0x18) + (uVar4 >> 8)) - 0x2d & 0xff))) {
    lVar6 = (ulong)uVar4 << ((ulong)(0x1d - *(byte *)((long)param_1 + 6)) & 0x3f);
    uVar7 = ((int)lVar6 - (uint)(ushort)param_1[1]) + (int)((ulong)lVar6 >> 0x20) + 0x80e32b11;
  }
  uVar4 = nn::os::GetSystemTick();
  uVar2 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  uVar4 = uVar2 ^ uVar2 * 0x800;
  uVar3 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 2;
  uVar2 = uVar3 ^ uVar3 * 0x800;
  uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 3;
  uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 4;
  uVar4 = uVar4 >> 8 ^ uVar3 >> 0x13 ^ uVar4 ^ uVar3;
  *(short *)(param_1 + 1) = (short)(uVar4 >> 0x10);
  uVar5 = (ulong)(uVar2 >> 8 ^ uVar4 >> 0x13 ^ uVar2 ^ uVar4) * 0x1b;
  iVar1 = 0x7f1cd4ef;
  if (param_2 <= uVar7) {
    iVar1 = (uVar7 - param_2) + 0x7f1cd4ef;
  }
  *(char *)((long)param_1 + 6) = (char)(uVar5 >> 0x20);
  lVar6 = (ulong)((uVar4 >> 0x10) + iVar1) << (uVar5 >> 0x20) + 3;
  uVar7 = (int)((ulong)lVar6 >> 0x20) + (int)lVar6;
  *param_1 = uVar7;
  *(char *)((long)param_1 + 7) =
       (char)uVar7 + (char)(uVar7 >> 0x10) + (char)(uVar7 >> 0x18) + (char)(uVar7 >> 8) + -0x2d;
  return;
}

