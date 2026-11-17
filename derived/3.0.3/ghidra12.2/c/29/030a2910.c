
void FUN_030a2910(long param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined8 *puVar5;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined8 ***local_b0;
  undefined8 ***pppuStack_a8;
  undefined8 ***local_a0;
  undefined8 ***local_98;
  undefined8 ***local_90;
  undefined8 ***local_88;
  undefined8 ***local_80;
  undefined8 **local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 local_60 [8];
  
  local_a0 = &local_98;
  local_98 = &local_90;
  local_c0 = 0;
  local_b8 = (undefined8 *)0x0;
  local_90 = &local_88;
  local_88 = &local_80;
  local_b0 = &local_a0;
  local_80 = &local_78;
  local_78 = &local_70;
  local_70 = &local_68;
  local_68 = 0;
  if (local_60 != (undefined8 *)0x0) {
    local_c0 = 0x800000000;
    local_b8 = local_60;
  }
  pppuStack_a8 = local_b0;
  uVar1 = FUN_0264cdf0(&local_c0,param_1 + 8);
  if ((uVar1 & 1) == 0) {
    if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14)) {
      puVar5 = *(undefined8 **)(param_1 + 0x20);
      if (puVar5 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x20) = *puVar5;
      }
      *(undefined2 *)puVar5 = *(undefined2 *)(param_1 + 8);
      *(undefined1 *)((long)puVar5 + 2) = *(undefined1 *)(param_1 + 10);
      *(undefined1 *)((long)puVar5 + 3) = *(undefined1 *)(param_1 + 0xb);
      *(undefined4 *)((long)puVar5 + 4) = *(undefined4 *)(param_1 + 0xc);
      if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14)) {
        *(undefined8 **)(*(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x10) * 8) = puVar5;
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      }
    }
  }
  else if ((int)local_c0 != 0) {
    iVar3 = *(int *)(param_1 + 0x10);
    if (iVar3 < *(int *)(param_1 + 0x14)) {
      lVar2 = (long)(int)local_c0 << 3;
      do {
        if (iVar3 < *(int *)(param_1 + 0x14)) {
          puVar4 = (undefined2 *)*local_b8;
          puVar5 = *(undefined8 **)(param_1 + 0x20);
          if (puVar5 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 0x20) = *puVar5;
          }
          *(undefined2 *)puVar5 = *puVar4;
          *(undefined1 *)((long)puVar5 + 2) = *(undefined1 *)(puVar4 + 1);
          *(undefined1 *)((long)puVar5 + 3) = *(undefined1 *)((long)puVar4 + 3);
          *(undefined4 *)((long)puVar5 + 4) = *(undefined4 *)(puVar4 + 2);
          iVar3 = *(int *)(param_1 + 0x10);
          if (iVar3 < *(int *)(param_1 + 0x14)) {
            *(undefined8 **)(*(long *)(param_1 + 0x18) + (long)iVar3 * 8) = puVar5;
            iVar3 = *(int *)(param_1 + 0x10) + 1;
            *(int *)(param_1 + 0x10) = iVar3;
          }
        }
        local_b8 = local_b8 + 1;
        lVar2 = lVar2 + -8;
      } while (lVar2 != 0);
    }
  }
  return;
}

