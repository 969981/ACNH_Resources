
undefined4 FUN_019340f4(long param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int *piVar4;
  uint *puVar5;
  ulong uVar6;
  int local_2c [3];
  
  local_2c[0] = -1;
  local_2c[1] = -1;
  local_2c[2] = 0xffffffff;
  piVar4 = (int *)(**(code **)(*(long *)**(undefined8 **)(param_1 + 200) + 0xf0))();
  bVar3 = *piVar4 != -1;
  if (bVar3) {
    local_2c[0] = *piVar4;
  }
  uVar6 = (ulong)bVar3;
  piVar4 = (int *)(**(code **)(**(long **)(*(long *)(param_1 + 200) + 8) + 0xf0))();
  if (*piVar4 != -1) {
    local_2c[uVar6] = *piVar4;
    uVar6 = (ulong)(bVar3 + 1);
  }
  piVar4 = (int *)(**(code **)(**(long **)(*(long *)(param_1 + 200) + 0x10) + 0xf0))();
  if (*piVar4 != -1) {
    local_2c[uVar6] = *piVar4;
    uVar6 = (ulong)((int)uVar6 + 1);
  }
  puVar5 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
  uVar1 = *puVar5 ^ *puVar5 << 0xb;
  uVar2 = puVar5[3];
  *puVar5 = puVar5[1];
  puVar5[1] = puVar5[2];
  uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
  puVar5[2] = uVar2;
  puVar5[3] = uVar1;
  return *(undefined4 *)((long)local_2c + (uVar1 * uVar6 >> 0x1e & 0x1c));
}

