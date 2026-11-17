
/* WARNING: Removing unreachable block (ram,0x02cdbcb0) */

void FUN_02cdbc60(byte *param_1,undefined4 *param_2)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined2 *puVar11;
  undefined1 auStack_7e [2];
  undefined2 local_7c;
  undefined1 local_7a;
  undefined1 local_79;
  undefined4 local_78;
  undefined1 auStack_74 [2];
  undefined1 auStack_72 [2];
  undefined *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  long local_60;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (7 < *param_1) {
    return;
  }
  if (DAT_05574040 == 0) {
    return;
  }
  local_58 = CONCAT44(local_58._4_4_,1);
  if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0) {
    return;
  }
  lVar5 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))();
  if (lVar5 == 0) {
    return;
  }
  plVar1 = (long *)(lVar5 + 0x5d7870);
  if ((*(long *)(lVar5 + 0x5d7890) == 0) ||
     (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x5d7890) + 0x10), puVar6 == (undefined8 *)0x0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = (**(code **)*puVar6)();
    uVar7 = uVar7 & 0xffffffff;
  }
  uVar8 = FUN_02665700(param_2);
  lVar10 = DAT_053274a0;
  if ((uVar8 & 1) == 0) {
    if ((*(long *)(lVar5 + 0x5d7890) != 0) &&
       (plVar9 = *(long **)(*(long *)(lVar5 + 0x5d7890) + 0x20), plVar9 != (long *)0x0)) {
      local_58 = *plVar1;
      local_50 = *(undefined8 *)(lVar5 + 0x5d7878);
      uStack_48 = 0x1190;
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_58);
    }
    puVar11 = (undefined2 *)(*(long *)(lVar5 + 0x5d7878) + *plVar1);
    *puVar11 = *(undefined2 *)param_2;
    *(undefined1 *)(puVar11 + 1) = *(undefined1 *)((long)param_2 + 2);
    *(undefined1 *)((long)puVar11 + 3) = *(undefined1 *)((long)param_2 + 3);
    local_78 = param_2[1];
  }
  else {
    local_68 = *param_2;
    uStack_64 = param_2[1];
    local_60 = 0;
    local_70 = PTR_DAT_04bc0510 + 0x10;
    uVar4 = FUN_0277d6c4(&local_68);
    if (DAT_053274a0 != 0) {
      lVar10 = *(long *)(lVar10 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        lVar10 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(param_2);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
           (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8), lVar10 != 0)) {
          local_60 = lVar10;
        }
      }
    }
    FUN_01b086f4(auStack_74,&local_70);
    FUN_02656db0(auStack_72,auStack_74);
    FUN_007ef010(auStack_7e,auStack_72);
    FUN_00805ba8(&local_7c,auStack_7e);
    if ((*(long *)(lVar5 + 0x5d7890) != 0) &&
       (plVar9 = *(long **)(*(long *)(lVar5 + 0x5d7890) + 0x20), plVar9 != (long *)0x0)) {
      local_58 = *plVar1;
      local_50 = *(undefined8 *)(lVar5 + 0x5d7878);
      uStack_48 = 0x1190;
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_58);
    }
    puVar11 = (undefined2 *)(*(long *)(lVar5 + 0x5d7878) + *plVar1);
    *puVar11 = local_7c;
    *(undefined1 *)(puVar11 + 1) = local_7a;
    *(undefined1 *)((long)puVar11 + 3) = local_79;
  }
  *(undefined4 *)(puVar11 + 2) = local_78;
  if ((*(long *)(lVar5 + 0x5d7890) != 0) &&
     (plVar9 = *(long **)(*(long *)(lVar5 + 0x5d7890) + 0x20), plVar9 != (long *)0x0)) {
    local_58 = *plVar1;
    local_50 = *(undefined8 *)(lVar5 + 0x5d7878);
    uStack_48 = 0x1190;
    (**(code **)(*plVar9 + 0x20))(plVar9,&local_58);
  }
  lVar10 = *(long *)(lVar5 + 0x5d7878) + *plVar1;
  *(undefined2 *)(lVar10 + 0x8b0) = *(undefined2 *)(param_2 + 2);
  *(undefined1 *)(lVar10 + 0x8b2) = *(undefined1 *)((long)param_2 + 10);
  *(undefined1 *)(lVar10 + 0x8b3) = *(undefined1 *)((long)param_2 + 0xb);
  *(undefined4 *)(lVar10 + 0x8b4) = param_2[3];
  if ((*(long *)(lVar5 + 0x5d7890) != 0) &&
     (plVar9 = *(long **)(*(long *)(lVar5 + 0x5d7890) + 0x20), plVar9 != (long *)0x0)) {
    local_58 = *plVar1;
    local_50 = *(undefined8 *)(lVar5 + 0x5d7878);
    uStack_48 = 0x1190;
    (**(code **)(*plVar9 + 0x20))(plVar9,&local_58);
  }
  lVar2 = DAT_053274a0;
  lVar10 = *(long *)(lVar5 + 0x5d7878) + *plVar1;
  *(undefined2 *)(lVar10 + 0x8b8) = *(undefined2 *)(param_2 + 4);
  *(undefined1 *)(lVar10 + 0x8ba) = *(undefined1 *)((long)param_2 + 0x12);
  *(undefined1 *)(lVar10 + 0x8bb) = *(undefined1 *)((long)param_2 + 0x13);
  *(undefined4 *)(lVar10 + 0x8bc) = param_2[5];
  uVar4 = FUN_0277d6c4(param_2 + 6);
  if (DAT_053274a0 != 0) {
    lVar10 = *(long *)(lVar2 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      if ((*(long *)(lVar5 + 0x5d7890) != 0) &&
         (plVar9 = *(long **)(*(long *)(lVar5 + 0x5d7890) + 0x20), plVar9 != (long *)0x0)) {
        local_58 = *plVar1;
        local_50 = *(undefined8 *)(lVar5 + 0x5d7878);
        uStack_48 = 0x1190;
        (**(code **)(*plVar9 + 0x20))(plVar9,&local_58);
      }
      lVar10 = *(long *)(lVar5 + 0x5d7878) + *plVar1;
      *(undefined2 *)(lVar10 + 0x8c0) = *(undefined2 *)(param_2 + 6);
      *(undefined1 *)(lVar10 + 0x8c2) = *(undefined1 *)((long)param_2 + 0x1a);
      *(undefined1 *)(lVar10 + 0x8c3) = *(undefined1 *)((long)param_2 + 0x1b);
      *(undefined4 *)(lVar10 + 0x8c4) = param_2[7];
    }
  }
  FUN_0277d6c4(param_2 + 6);
  lVar10 = DAT_053274a0;
  uVar4 = FUN_0277d6c4(param_2 + 8);
  if (DAT_053274a0 == 0) {
LAB_02cdc058:
    bVar3 = false;
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if (*(uint *)(lVar10 + 0x1d8) <= uVar4) goto LAB_02cdc058;
    bVar3 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0;
  }
  if ((*(long *)(lVar5 + 0x5d7890) != 0) &&
     (plVar9 = *(long **)(*(long *)(lVar5 + 0x5d7890) + 0x20), plVar9 != (long *)0x0)) {
    local_58 = *plVar1;
    local_50 = *(undefined8 *)(lVar5 + 0x5d7878);
    uStack_48 = 0x1190;
    (**(code **)(*plVar9 + 0x20))(plVar9,&local_58);
  }
  lVar10 = *(long *)(lVar5 + 0x5d7878) + *plVar1;
  if (bVar3) {
    FUN_026e8d10();
    uVar8 = FUN_03422340();
    if ((uVar8 & 1) != 0) goto LAB_02cdc10c;
    if ((*(long *)(lVar5 + 0x5d7890) != 0) &&
       (plVar9 = *(long **)(*(long *)(lVar5 + 0x5d7890) + 0x20), plVar9 != (long *)0x0)) {
      local_58 = *plVar1;
      local_50 = *(undefined8 *)(lVar5 + 0x5d7878);
      uStack_48 = 0x1190;
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_58);
    }
    lVar10 = *(long *)(lVar5 + 0x5d7878) + *plVar1;
  }
  *(undefined2 *)(lVar10 + 0x1170) = *(undefined2 *)(param_2 + 8);
  *(undefined1 *)(lVar10 + 0x1172) = *(undefined1 *)((long)param_2 + 0x22);
  *(undefined1 *)(lVar10 + 0x1173) = *(undefined1 *)((long)param_2 + 0x23);
  *(undefined4 *)(lVar10 + 0x1174) = param_2[9];
LAB_02cdc10c:
  if ((*(long *)(lVar5 + 0x5d7890) != 0) &&
     (plVar9 = *(long **)(*(long *)(lVar5 + 0x5d7890) + 0x20), plVar9 != (long *)0x0)) {
    local_58 = *plVar1;
    local_50 = *(undefined8 *)(lVar5 + 0x5d7878);
    uStack_48 = 0x1190;
    (**(code **)(*plVar9 + 0x20))(plVar9,&local_58);
  }
  lVar10 = *(long *)(lVar5 + 0x5d7878) + *plVar1;
  *(undefined2 *)(lVar10 + 0x1178) = *(undefined2 *)(param_2 + 10);
  *(undefined1 *)(lVar10 + 0x117a) = *(undefined1 *)((long)param_2 + 0x2a);
  *(undefined1 *)(lVar10 + 0x117b) = *(undefined1 *)((long)param_2 + 0x2b);
  *(undefined4 *)(lVar10 + 0x117c) = param_2[0xb];
  if ((*(long *)(lVar5 + 0x5d7890) != 0) &&
     (plVar9 = *(long **)(*(long *)(lVar5 + 0x5d7890) + 0x20), plVar9 != (long *)0x0)) {
    local_58 = *plVar1;
    local_50 = *(undefined8 *)(lVar5 + 0x5d7878);
    uStack_48 = 0x1190;
    (**(code **)(*plVar9 + 0x20))(plVar9,&local_58);
  }
  lVar10 = *(long *)(lVar5 + 0x5d7878) + *plVar1;
  *(undefined2 *)(lVar10 + 0x1180) = *(undefined2 *)(param_2 + 0xc);
  *(undefined1 *)(lVar10 + 0x1182) = *(undefined1 *)((long)param_2 + 0x32);
  *(undefined1 *)(lVar10 + 0x1183) = *(undefined1 *)((long)param_2 + 0x33);
  *(undefined4 *)(lVar10 + 0x1184) = param_2[0xd];
  if ((*(long *)(lVar5 + 0x5d7890) != 0) &&
     (plVar9 = *(long **)(*(long *)(lVar5 + 0x5d7890) + 0x20), plVar9 != (long *)0x0)) {
    local_58 = *plVar1;
    local_50 = *(undefined8 *)(lVar5 + 0x5d7878);
    uStack_48 = 0x1190;
    (**(code **)(*plVar9 + 0x20))(plVar9,&local_58);
  }
  lVar10 = *(long *)(lVar5 + 0x5d7878) + *plVar1;
  *(undefined2 *)(lVar10 + 0x1188) = *(undefined2 *)(param_2 + 0xe);
  *(undefined1 *)(lVar10 + 0x118a) = *(undefined1 *)((long)param_2 + 0x3a);
  *(undefined1 *)(lVar10 + 0x118b) = *(undefined1 *)((long)param_2 + 0x3b);
  *(undefined4 *)(lVar10 + 0x118c) = param_2[0xf];
  if ((((uVar7 & 1) != 0) && (*(long *)(lVar5 + 0x5d7890) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x5d7890) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}

