
void FUN_02601530(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  byte local_58 [4];
  undefined4 local_54;
  undefined2 local_50;
  byte local_3c [4];
  undefined4 local_38;
  undefined2 local_34;
  
  *param_1 = &PTR_LAB_04a86ce8;
  if (DAT_05554928 == 0) {
    return;
  }
  if (param_1[1] == 0) {
    return;
  }
  if (*(byte *)(param_1 + 3) < 8) {
    FUN_02507c6c(local_58,1,1,0,0);
    puVar2 = PTR_DAT_04bb5038;
    local_38 = local_54;
    local_3c[0] = local_58[0];
    if (7 < local_58[0]) {
      local_3c[0] = 0xff;
    }
    local_34 = local_50;
    if (local_58[0] < 8) {
      bVar5 = *(byte *)(param_1 + 3);
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      if (bVar5 != local_58[0]) {
        do {
          uVar4 = (ulong)local_58[0];
          do {
            if (uVar4 == 7) goto LAB_02601624;
            uVar4 = uVar4 + 1;
            uVar3 = FUN_02507924(local_3c,puVar2 + uVar4);
          } while ((uVar3 & 1) == 0);
          local_58[0] = puVar2[uVar4];
          if (7 < local_58[0]) goto LAB_02601624;
          bVar5 = *(byte *)(param_1 + 3);
          if (7 < bVar5) {
            bVar5 = 0xff;
          }
          local_3c[0] = local_58[0];
        } while (bVar5 != local_58[0]);
      }
    }
    else {
LAB_02601624:
      if (*(int *)((long)param_1 + 0x24) == 0) {
        *(undefined4 *)((long)param_1 + 0x24) = 3;
        iVar1 = *(int *)((long)param_1 + 0x24);
        goto joined_r0x02601660;
      }
    }
  }
  iVar1 = *(int *)((long)param_1 + 0x24);
joined_r0x02601660:
  if ((iVar1 == 0) && (uVar4 = FUN_02601690(param_1,local_58), (uVar4 & 1) != 0)) {
    FUN_02605e50(param_1[1],local_58);
  }
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 0x18))();
  }
  param_1[1] = 0;
  return;
}

