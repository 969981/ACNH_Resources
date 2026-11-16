
void FUN_02653660(short *param_1,short *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 local_307c;
  undefined1 auStack_3078 [680];
  undefined *local_2dd0;
  long local_2dc8;
  undefined1 local_2dc0;
  byte local_2dbf;
  undefined1 auStack_2db2 [2];
  undefined1 auStack_2db0 [8];
  long local_2da8;
  long local_2da0;
  undefined1 auStack_170a [2];
  undefined1 auStack_1708 [8];
  long local_1700;
  long local_16f8;
  undefined *local_68;
  long local_60;
  ulong local_58;
  
  if (*param_1 == *(short *)PTR_DAT_04bb3170) {
    return;
  }
  if (*param_2 == *(short *)PTR_DAT_04bb3170) {
    return;
  }
  FUN_007ef010(auStack_170a,param_1);
  FUN_007e4920(auStack_1708,auStack_170a);
  FUN_007ef010(auStack_2db2,param_2);
  FUN_007e4920(auStack_2db0,auStack_2db2);
  uVar4 = FUN_007e4bb0(auStack_1708);
  uVar5 = FUN_007e4bb0(auStack_2db0);
  uVar6 = FUN_007e4bb0(auStack_1708);
  if (((uVar4 ^ uVar5) & 1) != 0) {
    if (((uVar6 & 1) == 0) && (uVar6 = FUN_007e4bb0(auStack_2db0), (uVar6 & 1) != 0)) {
      if (local_1700 == 0) {
        return;
      }
      if (local_2da0 == 0) {
        return;
      }
      local_60 = local_1700;
      local_58 = CONCAT71(local_58._1_7_,1);
      if (*(long **)(local_1700 + 0x28) == (long *)0x0) {
        uVar3 = 0;
      }
      else {
        puVar7 = (undefined8 *)**(long **)(local_1700 + 0x28);
        uVar3 = 0;
        if (puVar7 != (undefined8 *)0x0) {
          uVar3 = (**(code **)*puVar7)();
        }
      }
      local_58 = CONCAT62(local_58._2_6_,CONCAT11(uVar3,(undefined1)local_58)) & 0xffffffffffff01ff;
      local_2dc8 = local_2da0;
      local_68 = PTR_DAT_04bb4c58 + 0x10;
      local_2dc0 = 0;
      if (*(long *)(local_2da0 + 0x28) == 0) {
        local_2dbf = 0;
      }
      else {
        puVar7 = *(undefined8 **)(*(long *)(local_2da0 + 0x28) + 0x10);
        local_2dbf = 0;
        if (puVar7 != (undefined8 *)0x0) {
          local_2dbf = (**(code **)*puVar7)();
        }
      }
      local_2dbf = local_2dbf & 1;
      local_2dd0 = PTR_DAT_04bb4c50 + 0x10;
      uVar9 = FUN_02125b64(&local_2dd0);
      FUN_027c1430(auStack_3078,*(long *)(local_1700 + 0x10) + *(long *)(local_1700 + 8));
      FUN_00807334(uVar9,auStack_3078);
    }
    else {
      uVar6 = FUN_007e4bb0(auStack_1708);
      if ((uVar6 & 1) == 0) {
        return;
      }
      uVar6 = FUN_007e4bb0(auStack_2db0);
      if ((uVar6 & 1) != 0) {
        return;
      }
      if (local_16f8 == 0) {
        return;
      }
      if (local_2da8 == 0) {
        return;
      }
      local_60 = local_16f8;
      local_58 = CONCAT71(local_58._1_7_,1);
      if (*(long **)(local_16f8 + 0x28) == (long *)0x0) {
        uVar3 = 0;
      }
      else {
        puVar7 = (undefined8 *)**(long **)(local_16f8 + 0x28);
        uVar3 = 0;
        if (puVar7 != (undefined8 *)0x0) {
          uVar3 = (**(code **)*puVar7)();
        }
      }
      local_58 = CONCAT62(local_58._2_6_,CONCAT11(uVar3,(undefined1)local_58)) & 0xffffffffffff01ff;
      local_2dc8 = local_2da8;
      local_68 = PTR_DAT_04bb4c50 + 0x10;
      local_2dc0 = 0;
      if (*(long *)(local_2da8 + 0x28) == 0) {
        local_2dbf = 0;
      }
      else {
        puVar7 = *(undefined8 **)(*(long *)(local_2da8 + 0x28) + 0x10);
        local_2dbf = 0;
        if (puVar7 != (undefined8 *)0x0) {
          local_2dbf = (**(code **)*puVar7)();
        }
      }
      local_2dbf = local_2dbf & 1;
      local_2dd0 = PTR_DAT_04bb4c58 + 0x10;
      uVar9 = FUN_026535fc(&local_2dd0);
      FUN_00807430(uVar9,*(long *)(local_16f8 + 0x10) + *(long *)(local_16f8 + 8));
    }
    local_307c = 0xffffffff;
    FUN_007e5260(auStack_2db0,&local_307c);
    FUN_02640184(&local_2dd0);
    FUN_02640184(&local_68);
    return;
  }
  if ((uVar6 & 1) != 0) {
    if (local_16f8 == 0) {
      return;
    }
    if (local_2da0 == 0) {
      return;
    }
    if ((*(long **)(local_16f8 + 0x28) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(local_16f8 + 0x28), puVar7 == (undefined8 *)0x0)) {
      uVar4 = 1;
    }
    else {
      uVar4 = (**(code **)*puVar7)();
      uVar4 = uVar4 ^ 1;
    }
    puVar1 = (undefined4 *)(*(long *)(local_16f8 + 0x10) + *(long *)(local_16f8 + 8));
    lVar10 = *(long *)(local_2da0 + 0x28);
    if (lVar10 == 0) {
      uVar6 = 0;
    }
    else {
      if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
        lVar10 = *(long *)(local_2da0 + 0x28);
        uVar6 = uVar6 & 0xffffffff;
        if (lVar10 == 0) goto LAB_026538e4;
      }
      plVar8 = *(long **)(lVar10 + 0x20);
      if (plVar8 != (long *)0x0) {
        local_68 = *(undefined **)(local_2da0 + 8);
        local_60 = *(undefined8 *)(local_2da0 + 0x10);
        local_58 = 0x8a8;
        (**(code **)(*plVar8 + 0x20))(plVar8,&local_68);
      }
    }
LAB_026538e4:
    puVar2 = (undefined4 *)(*(long *)(local_2da0 + 0x10) + *(long *)(local_2da0 + 8));
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(puVar1 + 2);
    *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(puVar1 + 4);
    uVar9 = *(undefined8 *)(puVar1 + 6);
    uVar12 = *(undefined8 *)(puVar1 + 8);
    uVar13 = *(undefined8 *)(puVar1 + 0xc);
    *(undefined8 *)(puVar2 + 10) = *(undefined8 *)(puVar1 + 10);
    *(undefined8 *)(puVar2 + 0xc) = uVar13;
    *(undefined8 *)(puVar2 + 6) = uVar9;
    *(undefined8 *)(puVar2 + 8) = uVar12;
    uVar13 = *(undefined8 *)(puVar1 + 0x12);
    uVar9 = *(undefined8 *)(puVar1 + 0xe);
    uVar12 = *(undefined8 *)(puVar1 + 0x10);
    *(undefined1 *)(puVar2 + 0x14) = *(undefined1 *)(puVar1 + 0x14);
    *(undefined8 *)(puVar2 + 0x10) = uVar12;
    *(undefined8 *)(puVar2 + 0x12) = uVar13;
    *(undefined8 *)(puVar2 + 0xe) = uVar9;
    uVar9 = *(undefined8 *)(puVar1 + 0x15);
    uVar12 = *(undefined8 *)(puVar1 + 0x17);
    *(undefined8 *)(puVar2 + 0x19) = *(undefined8 *)(puVar1 + 0x19);
    *(undefined8 *)(puVar2 + 0x17) = uVar12;
    *(undefined8 *)(puVar2 + 0x15) = uVar9;
    uVar5 = puVar1[0x1b];
    if (1 < uVar5) {
      uVar5 = 0;
    }
    puVar2[0x1b] = uVar5;
    *(undefined1 *)(puVar2 + 0x1c) = *(undefined1 *)(puVar1 + 0x1c);
    *(undefined1 *)((long)puVar2 + 0x71) = *(undefined1 *)((long)puVar1 + 0x71);
    *(undefined2 *)((long)puVar2 + 0x72) = *(undefined2 *)((long)puVar1 + 0x72);
    uVar9 = *(undefined8 *)(puVar1 + 0x20);
    *(undefined8 *)(puVar2 + 0x1e) = *(undefined8 *)(puVar1 + 0x1e);
    *(undefined8 *)(puVar2 + 0x20) = uVar9;
    uVar13 = *(undefined8 *)(puVar1 + 0x26);
    uVar9 = *(undefined8 *)(puVar1 + 0x22);
    uVar12 = *(undefined8 *)(puVar1 + 0x24);
    *(undefined8 *)((long)puVar2 + 0x9d) = *(undefined8 *)((long)puVar1 + 0x9d);
    *(undefined8 *)(puVar2 + 0x24) = uVar12;
    *(undefined8 *)(puVar2 + 0x26) = uVar13;
    *(undefined8 *)(puVar2 + 0x22) = uVar9;
    memcpy((void *)((long)puVar2 + 0xa5),(void *)((long)puVar1 + 0xa5),0x800);
    uVar3 = *(undefined1 *)((long)puVar1 + 0x8a5);
    *(undefined2 *)((long)puVar2 + 0x8a6) = 0;
    *(undefined1 *)((long)puVar2 + 0x8a5) = uVar3;
    FUN_027c1b80(puVar2);
    local_1700 = local_16f8;
    if ((((uVar6 & 1) != 0) && (*(long *)(local_2da0 + 0x28) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(local_2da0 + 0x28) + 0x18), puVar7 != (undefined8 *)0x0)
       ) {
      (**(code **)*puVar7)();
    }
    goto joined_r0x02653a40;
  }
  if (local_1700 == 0) {
    return;
  }
  if (local_2da8 == 0) {
    return;
  }
  if ((*(long **)(local_1700 + 0x28) == (long *)0x0) ||
     (puVar7 = (undefined8 *)**(long **)(local_1700 + 0x28), puVar7 == (undefined8 *)0x0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = (**(code **)*puVar7)();
    uVar4 = uVar4 ^ 1;
  }
  lVar10 = *(long *)(local_1700 + 0x10) + *(long *)(local_1700 + 8);
  lVar11 = *(long *)(local_2da8 + 0x28);
  if (lVar11 == 0) {
    FUN_027c1640(*(long *)(local_2da8 + 0x10) + *(long *)(local_2da8 + 8),lVar10);
    goto joined_r0x02653a40;
  }
  if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
    uVar6 = 0;
LAB_026539e4:
    plVar8 = *(long **)(lVar11 + 0x20);
    if (plVar8 != (long *)0x0) {
      local_68 = *(undefined **)(local_2da8 + 8);
      local_60 = *(undefined8 *)(local_2da8 + 0x10);
      local_58 = 0x2a8;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_68);
    }
  }
  else {
    uVar6 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
    lVar11 = *(long *)(local_2da8 + 0x28);
    uVar6 = uVar6 & 0xffffffff;
    if (lVar11 != 0) goto LAB_026539e4;
  }
  FUN_027c1640(*(long *)(local_2da8 + 0x10) + *(long *)(local_2da8 + 8),lVar10);
  if ((((uVar6 & 1) != 0) && (*(long *)(local_2da8 + 0x28) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(local_2da8 + 0x28) + 0x18), puVar7 != (undefined8 *)0x0))
  {
    (**(code **)*puVar7)();
  }
joined_r0x02653a40:
  if ((((uVar4 & 1) == 0) && (*(long *)(local_1700 + 0x28) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(local_1700 + 0x28) + 8), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0xffffffff);
  FUN_007e5260(auStack_2db0,&local_68);
  return;
}

