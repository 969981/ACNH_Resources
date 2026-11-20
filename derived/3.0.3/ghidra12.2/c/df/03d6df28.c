
void FUN_03d6df28(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  float local_4c;
  float fStack_48;
  float local_44;
  undefined8 local_40;
  float local_38;
  
  FUN_03d66690();
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_1 + 0x208);
  uVar2 = *(uint *)(param_1 + 0x218);
  *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_1 + 0x20c);
  *(undefined4 *)(param_1 + 0x20c) = 0;
  *(undefined1 *)(param_1 + 0x221) = 1;
  *(uint *)(param_1 + 0x208) = uVar2;
  if (uVar2 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x228) <= uVar2) {
      uVar2 = 0;
    }
    puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x230) + (long)(int)uVar2 * 0x40);
    if (puVar3 != (undefined8 *)0x0) {
      (*(code *)*puVar3)();
    }
  }
  if (*(long *)(*(long *)(param_1 + 0x2b8) + 8) != 0) {
    plVar4 = *(long **)(param_1 + 0x1d0);
    local_38 = 5.74532e-44;
    puVar1 = PTR_DAT_04bc0cb8 + 0x10;
    local_40 = puVar1;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_40);
    (**(code **)(plVar4[3] + 0x2b0))(&local_4c,plVar4[1]);
    plVar4 = *(long **)(param_1 + 0x2b8);
    local_38 = 5.74532e-44;
    local_40 = puVar1;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_40);
    (**(code **)(plVar4[3] + 0x2b0))(&local_40,plVar4[1]);
    *(float *)(param_1 + 0x2cc) = local_40._4_4_ - fStack_48;
    *(float *)(param_1 + 0x2c8) = (float)local_40 - local_4c;
    *(float *)(param_1 + 0x2d0) = local_38 - local_44;
  }
  return;
}

