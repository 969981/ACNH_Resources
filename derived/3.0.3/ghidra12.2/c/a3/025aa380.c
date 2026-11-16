
void FUN_025aa380(long param_1)

{
  undefined *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  undefined *local_c0;
  char *pcStack_b8;
  undefined2 local_64;
  undefined1 local_62;
  
  lVar8 = *(long *)PTR_DAT_04bb46b0;
  if (lVar8 != 0) {
    puVar9 = *(undefined8 **)(lVar8 + 0x10);
    if ((*(byte *)(lVar8 + 0x453) & 1) == 0) {
      lVar8 = (**(code **)(*(long *)*puVar9 + 0x38))();
      if (lVar8 == 0) {
        return;
      }
      lVar8 = lVar8 + 0x70;
    }
    else {
      if (puVar9 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar9[0x26] == (long *)0x0) {
        return;
      }
      lVar8 = (**(code **)(*(long *)puVar9[0x26] + 0x38))();
      if (lVar8 == 0) {
        return;
      }
    }
    if ((*(long **)(lVar8 + 0xd0) == (long *)0x0) ||
       (puVar9 = (undefined8 *)**(long **)(lVar8 + 0xd0), puVar9 == (undefined8 *)0x0)) {
      uVar6 = 1;
    }
    else {
      uVar6 = (**(code **)*puVar9)();
      uVar6 = uVar6 ^ 1;
    }
    puVar5 = PTR_DAT_04bc2a20;
    puVar4 = PTR_DAT_04bc27f0;
    lVar13 = 0;
    uVar11 = 0;
    iVar12 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      puVar2 = (undefined2 *)(*(long *)(lVar8 + 0xb8) + *(long *)(lVar8 + 0xb0) + lVar13);
      uVar3 = *puVar2;
      local_62 = *(undefined1 *)(puVar2 + 1);
      local_64._0_1_ = (byte)uVar3;
      uVar10 = (ulong)(byte)local_64;
      if (((uVar10 < 0x23) &&
          (local_64._1_1_ = (byte)((ushort)uVar3 >> 8), local_64._1_1_ <= (byte)puVar4[uVar10])) &&
         ((*(uint *)(puVar5 + uVar10 * 4) >> (ulong)(local_64._1_1_ & 0x1f) & 1) != 0)) {
        pcStack_b8 = "MoveInCompletion";
        local_c0 = puVar1;
        local_64 = uVar3;
        iVar7 = FUN_02749340(puVar2 + 0x933e,&local_c0);
        uVar3 = local_64;
        if (iVar7 != 0) {
          FUN_0071b954(&local_c0,"VillegerNpcID_%d",uVar11 & 0xffffffff);
          iVar7 = FUN_020fd950(&local_64);
          if (*(long *)(param_1 + 8) != 0) {
            FUN_02605660(*(long *)(param_1 + 8),&local_c0,(long)iVar7);
          }
          iVar12 = iVar12 + 1;
          uVar3 = local_64;
        }
      }
      local_64 = uVar3;
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 0x13230;
    } while (uVar11 != 10);
    local_c0 = PTR_DAT_04bb2020 + 0x10;
    pcStack_b8 = "VillegerNpcNum";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_026054d0(*(long *)(param_1 + 8),&local_c0,(long)iVar12);
    }
    if ((((uVar6 & 1) == 0) && (*(long *)(lVar8 + 0xd0) != 0)) &&
       (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0xd0) + 8), puVar9 != (undefined8 *)0x0)) {
      (**(code **)*puVar9)();
    }
  }
  return;
}

