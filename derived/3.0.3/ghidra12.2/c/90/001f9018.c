
undefined8 FUN_001f9018(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 local_e8 [8];
  undefined8 uStack_e0;
  undefined8 local_d8;
  int local_d0 [2];
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b8 [2];
  undefined1 local_b0;
  long local_a8;
  long local_a0;
  undefined1 auStack_48 [24];
  
  lVar3 = (**(code **)(**(long **)(param_1 + 0x58) + 0x60))
                    (*(long **)(param_1 + 0x58),*(undefined2 *)(param_1 + 0x48));
  if (lVar3 == 0) {
    local_b8[0] = 0x80010002;
    FUN_0018aa70(auStack_48,local_b8);
    FUN_00197bcc(param_2,auStack_48);
    return 1;
  }
  uVar4 = FUN_001abe40(param_3);
  FUN_001abd58(local_b8,uVar4);
  lVar1 = local_a0;
  if (*(long *)(local_a8 + 0x18) != local_a0) {
    lVar1 = local_a0 + 1;
    if (((*(byte *)(*(long *)(local_a8 + 0x10) + *(long *)(local_a8 + 0x28) + local_a0) ^ 0xff) &
        0x7f) != 0) goto LAB_001f90b8;
    if (1 < (ulong)(*(long *)(local_a8 + 0x18) - lVar1)) {
      lVar1 = local_a0 + 3;
      goto LAB_001f90b8;
    }
  }
  local_a0 = lVar1;
  local_b0 = 1;
  lVar1 = local_a0;
LAB_001f90b8:
  local_a0 = lVar1;
  (**(code **)(**(long **)(lVar3 + 0x58) + 0x68))
            (local_d0,*(long **)(lVar3 + 0x58),local_b8,param_1,lVar3,0);
  puVar2 = &LAB_01c68ad4;
  if (local_d0[0] < 0) {
    puVar2 = (undefined1 *)0x0;
  }
  if ((puVar2 == (undefined1 *)0x0) && (*(int *)(param_2 + 0x14) == 1)) {
    uStack_e0 = uStack_c8;
    local_d8 = local_c0;
    FUN_00197bcc(param_2,local_e8);
  }
  FUN_001abdec(local_b8);
  return 1;
}

