
void FUN_023ec05c(long param_1)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  int local_30;
  float local_2c;
  float fStack_28;
  float local_24;
  
  local_30 = (uint)*(ushort *)(param_1 + 0x1900) << 0x10;
  fStack_28 = (float)(int)*(short *)(param_1 + 0x1906) * 0.25;
  local_2c = (float)*(int *)(param_1 + 0x1902) * 0.001;
  local_24 = (float)*(int *)(param_1 + 0x1908) * 0.001;
  (**(code **)(**(long **)(param_1 + 0x68) + 0x100))(*(long **)(param_1 + 0x68),&local_2c);
  (**(code **)(**(long **)(param_1 + 0x68) + 0x160))(*(long **)(param_1 + 0x68),&local_30);
  uVar3 = *(uint *)(param_1 + 0x17cc);
  *(uint *)(param_1 + 0x17cc) = uVar3 & 0xfffffffe;
  if ((uVar3 & 1) != 0) {
    uVar3 = (uint)*(byte *)(param_1 + 0x1ee8);
    bVar2 = 7 < uVar3;
    if (bVar2) {
      uVar3 = 0xff;
    }
    lVar1 = DAT_055021a0 + 0x20 + (ulong)uVar3 * 0x740;
    if (bVar2) {
      lVar1 = DAT_055021a0 + 0x20;
    }
    if (*(short *)(param_1 + 0x18e1) == DAT_04c487d4) {
      *(undefined4 *)(lVar1 + 0x424) = 3;
      FUN_01393458(lVar1 + 0x4c8);
    }
    else {
      *(undefined4 *)(lVar1 + 0x424) = 4;
    }
  }
  return;
}

