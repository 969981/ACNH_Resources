
undefined8 FUN_0012ab00(long param_1,undefined8 param_2)

{
  int iVar1;
  short sVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_218 [112];
  undefined1 auStack_1a8 [112];
  undefined1 auStack_138 [112];
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined8 uStack_b0;
  int local_a8;
  short local_a4;
  short local_a2;
  undefined1 auStack_a0 [16];
  long local_90;
  long local_70;
  
  sVar2 = FUN_001271f0(param_2,auStack_a0);
  if (sVar2 < 0) {
    return 0;
  }
  local_a4 = FUN_00127f00(auStack_a0,auStack_138,0x70);
  if (local_a4 < 0) {
    return 0;
  }
  local_c8 = auStack_138;
  uVar3 = FUN_00127850(auStack_a0,auStack_1a8,0x70);
  local_a2 = (short)uVar3;
  if (local_a2 < 0) {
    return 0;
  }
  local_c0 = auStack_1a8;
  if ((((local_70 == 0) && (iVar1 = *(int *)(local_90 + 0x70), 1 < iVar1 - 0xe0000U)) &&
      (iVar1 != -0x7ffd0000)) && (iVar1 != -0x7ffe0000)) {
    local_a8 = 0;
    puVar4 = (undefined1 *)0x0;
  }
  else {
    puVar4 = auStack_218;
    local_a8 = FUN_00129d70(uVar3,auStack_a0,0,auStack_218,0x70);
    if (local_a8 < 0) {
      return 0;
    }
  }
  uStack_b0 = *(undefined8 *)(param_1 + 0x6f4c0);
  local_b8 = puVar4;
  uVar3 = (**(code **)(param_1 + 0x6f4b8))(param_1,&local_c8);
  return uVar3;
}

