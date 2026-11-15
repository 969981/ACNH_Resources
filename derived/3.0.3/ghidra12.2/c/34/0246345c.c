
void FUN_0246345c(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  float local_3c;
  float fStack_38;
  float local_34;
  int local_14;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    *(undefined4 *)(param_1 + 0x1bf4) = 0x3f800000;
    lVar2 = FUN_0251e98c(1);
    puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar2 + 0x2a0) + 0xf0))(lVar2 + 0x2a0);
    uVar5 = *puVar3;
    *(undefined4 *)(param_1 + 0x1bf4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1bf0) = uVar5;
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x400;
  }
  local_14 = (uint)*(ushort *)(param_1 + 0x1916) << 0x10;
  fStack_38 = (float)(int)*(short *)(param_1 + 0x1910) * 0.25;
  local_3c = (float)*(int *)(param_1 + 0x190c) * 0.001;
  local_34 = (float)*(int *)(param_1 + 0x1912) * 0.001;
  (**(code **)(**(long **)(param_1 + 0x68) + 0x100))(*(long **)(param_1 + 0x68),&local_3c);
  (**(code **)(**(long **)(param_1 + 0x68) + 0x160))(*(long **)(param_1 + 0x68),&local_14);
  uVar4 = (uint)*(byte *)(param_1 + 0x1ee8);
  bVar1 = 7 < uVar4;
  if (bVar1) {
    uVar4 = 0xff;
  }
  lVar2 = DAT_055021a0 + 0x20 + (ulong)uVar4 * 0x740;
  if (bVar1) {
    lVar2 = DAT_055021a0 + 0x20;
  }
  if (*(short *)(param_1 + 0x18e1) == DAT_04c487d4) {
    *(undefined4 *)(lVar2 + 0x424) = 3;
    FUN_01393458(lVar2 + 0x4c8);
  }
  else {
    *(undefined4 *)(lVar2 + 0x424) = 4;
  }
  return;
}

