
void FUN_0285dc20(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar3 = *param_1;
  uVar4 = 0;
  if ((*(byte *)((long)param_1 + 7) != 0 ||
       (((ulong)uVar3 != 0 || (ushort)param_1[1] != 0) || *(byte *)((long)param_1 + 6) != 0)) &&
     ((uint)*(byte *)((long)param_1 + 7) ==
      ((uVar3 + (uVar3 >> 0x10) + (uVar3 >> 0x18) + (uVar3 >> 8)) - 0x2d & 0xff))) {
    lVar5 = (ulong)uVar3 << ((ulong)(0x1d - *(byte *)((long)param_1 + 6)) & 0x3f);
    uVar4 = (ulong)(((int)lVar5 - (uint)(ushort)param_1[1]) + (int)((ulong)lVar5 >> 0x20) +
                   0x80e32b11);
  }
  uVar3 = nn::os::GetSystemTick();
  uVar1 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
  uVar3 = uVar1 ^ uVar1 * 0x800;
  uVar2 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2;
  uVar1 = uVar2 ^ uVar2 * 0x800;
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
  uVar3 = uVar3 >> 8 ^ uVar2 >> 0x13 ^ uVar3 ^ uVar2;
  *(short *)(param_1 + 1) = (short)(uVar3 >> 0x10);
  uVar6 = (ulong)(uVar1 >> 8 ^ uVar3 >> 0x13 ^ uVar1 ^ uVar3) * 0x1b;
  if (uVar4 + param_2 <= (ulong)param_3) {
    param_3 = (uint)(uVar4 + param_2);
  }
  *(char *)((long)param_1 + 6) = (char)(uVar6 >> 0x20);
  lVar5 = (ulong)(param_3 + 0x7f1cd4ef + (uVar3 >> 0x10)) << (uVar6 >> 0x20) + 3;
  uVar3 = (int)((ulong)lVar5 >> 0x20) + (int)lVar5;
  *param_1 = uVar3;
  *(char *)((long)param_1 + 7) =
       (char)uVar3 + (char)(uVar3 >> 0x10) + (char)(uVar3 >> 0x18) + (char)(uVar3 >> 8) + -0x2d;
  return;
}

