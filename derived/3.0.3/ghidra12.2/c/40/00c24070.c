
void FUN_00c24070(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 local_50;
  undefined2 local_48;
  byte local_2c [4];
  undefined4 local_28;
  undefined2 local_24;
  
  if ((*(long *)PTR_DAT_04bb39b0 == 0) || (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 0)) {
    puVar1 = PTR_DAT_04bb32e0;
    if (*(long *)(param_1 + 8) != 0) {
      puVar1 = (undefined *)(*(long *)(param_1 + 8) + 0x2a8);
    }
    FUN_025277e8(puVar1);
  }
  else {
    FUN_02507c6c(&local_50,1,1,0,0);
    local_28 = local_50._4_4_;
    local_2c[0] = 0xff;
    if ((byte)local_50 < 8) {
      local_2c[0] = (byte)local_50;
    }
    local_24 = local_48;
    if ((byte)local_50 < 8) {
      FUN_025277e8(local_2c);
      puVar1 = PTR_DAT_04bb5038;
      while (local_2c[0] < 8) {
        uVar5 = (ulong)local_2c[0];
        do {
          if (uVar5 == 7) goto LAB_00c24160;
          uVar5 = uVar5 + 1;
          uVar4 = FUN_02507924(local_2c,puVar1 + uVar5);
        } while ((uVar4 & 1) == 0);
        bVar2 = puVar1[uVar5];
        if (7 < bVar2) break;
        local_2c[0] = bVar2;
        FUN_025277e8(local_2c);
      }
    }
  }
LAB_00c24160:
  local_50 = &PTR_FUN_04940d78;
  iVar3 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
  if (iVar3 != 0) {
    lVar7 = (long)iVar3 << 3;
    puVar6 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
    do {
      (*(code *)*local_50)(&local_50,*puVar6);
      lVar7 = lVar7 + -8;
      puVar6 = puVar6 + 1;
    } while (lVar7 != 0);
  }
  return;
}

