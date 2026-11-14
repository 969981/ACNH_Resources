
/* WARNING: Removing unreachable block (ram,0x017ff16c) */

void FUN_017ff11c(void)

{
  byte *pbVar1;
  long lVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined1 uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  uint uVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  long lVar21;
  uint uVar22;
  undefined4 uVar23;
  uint local_e4;
  undefined1 auStack_b4 [2];
  undefined1 auStack_b2 [2];
  undefined2 local_b0 [2];
  undefined2 local_ac [2];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined2 local_68;
  undefined1 auStack_66 [2];
  uint local_64;
  
  if (DAT_05574040 == 0) {
    return;
  }
  local_90 = CONCAT44(local_90._4_4_,1);
  if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0) {
    return;
  }
  lVar15 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))();
  if (lVar15 == 0) {
    return;
  }
  if ((*(long **)(lVar15 + 0x5d4020) == (long *)0x0) ||
     (puVar16 = (undefined8 *)**(long **)(lVar15 + 0x5d4020), puVar16 == (undefined8 *)0x0)) {
    uVar17 = 0;
  }
  else {
    uVar17 = (**(code **)*puVar16)();
    uVar17 = uVar17 & 0xffffffff;
  }
  local_98 = 0xfffe;
  FUN_0277d4ac(&local_98);
  local_a0 = 0xfffe;
  FUN_0277d4ac(&local_a0);
  local_a8 = 0xfffe;
  FUN_0277d4ac(&local_a8);
  puVar16 = (undefined8 *)(*(long *)(lVar15 + 0x5d4008) + *(long *)(lVar15 + 0x5d4000));
  uVar3 = *(undefined1 *)((long)puVar16 + 0x1e);
  bVar4 = *(byte *)(puVar16 + 4);
  local_98 = *puVar16;
  uVar5 = *(undefined1 *)((long)puVar16 + 0x1f);
  local_a0 = puVar16[1];
  local_a8 = puVar16[2];
  local_68 = *(undefined2 *)((long)puVar16 + 0x1a);
  local_ac[0] = *(undefined2 *)(puVar16 + 3);
  local_b0[0] = *(undefined2 *)((long)puVar16 + 0x1c);
  if ((*(long **)(lVar15 + 0x5d4288) == (long *)0x0) ||
     (puVar16 = (undefined8 *)**(long **)(lVar15 + 0x5d4288), puVar16 == (undefined8 *)0x0)) {
    uVar14 = 1;
  }
  else {
    uVar14 = (**(code **)*puVar16)();
    uVar14 = uVar14 ^ 1;
  }
  pbVar1 = (byte *)(*(long *)(lVar15 + 0x5d4270) + *(long *)(lVar15 + 0x5d4268));
  bVar6 = *pbVar1;
  bVar7 = pbVar1[1];
  uVar9 = *(undefined2 *)(pbVar1 + 4);
  uVar10 = *(undefined2 *)(pbVar1 + 6);
  uVar22 = (uint)bVar7;
  bVar8 = pbVar1[2];
  uVar23 = *(undefined4 *)(pbVar1 + 8);
  uVar11 = *(undefined2 *)(pbVar1 + 0xc);
  uVar12 = *(undefined2 *)(pbVar1 + 0x10);
  uVar13 = *(undefined2 *)(pbVar1 + 0xe);
  lVar18 = FUN_03776f00();
  if (lVar18 == 0) goto LAB_017ff4e0;
  lVar21 = *(long *)(lVar18 + 0x140);
  if (lVar21 == 0) {
    local_e4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar21 + 0x10) == (undefined8 *)0x0) {
      local_e4 = 0;
    }
    else {
      local_e4 = (**(code **)**(undefined8 **)(lVar21 + 0x10))();
      lVar21 = *(long *)(lVar18 + 0x140);
      if (lVar21 == 0) goto LAB_017ff358;
    }
    plVar20 = *(long **)(lVar21 + 0x20);
    if (plVar20 != (long *)0x0) {
      local_90 = *(undefined8 *)(lVar18 + 0x120);
      uStack_88 = *(undefined8 *)(lVar18 + 0x128);
      local_80 = 0x24;
      (**(code **)(*plVar20 + 0x20))(plVar20,&local_90);
    }
  }
LAB_017ff358:
  lVar21 = *(long *)(lVar18 + 0x120);
  lVar2 = *(long *)(lVar18 + 0x128);
  FUN_007ef010(auStack_66,&local_68);
  FUN_007ef010(auStack_b2,local_ac);
  FUN_007ef010(auStack_b4,local_b0);
  FUN_0285a20c(lVar2 + lVar21,uVar3,&local_98,&local_a0,&local_a8,bVar4 & 1,uVar5,auStack_66,
               auStack_b2,auStack_b4,bVar4 >> 1 & 7);
  lVar21 = *(long *)(lVar18 + 0x3a8);
  if (lVar21 == 0) {
    uVar19 = 0;
  }
  else {
    if (*(undefined8 **)(lVar21 + 0x10) == (undefined8 *)0x0) {
      uVar19 = 0;
    }
    else {
      uVar19 = (**(code **)**(undefined8 **)(lVar21 + 0x10))();
      lVar21 = *(long *)(lVar18 + 0x3a8);
      uVar19 = uVar19 & 0xffffffff;
      if (lVar21 == 0) goto LAB_017ff450;
    }
    plVar20 = *(long **)(lVar21 + 0x20);
    if (plVar20 != (long *)0x0) {
      local_90 = *(undefined8 *)(lVar18 + 0x388);
      uStack_88 = *(undefined8 *)(lVar18 + 0x390);
      local_80 = 0x14;
      (**(code **)(*plVar20 + 0x20))(plVar20,&local_90);
    }
  }
LAB_017ff450:
  local_90 = CONCAT44(local_90._4_4_,(uint)bVar6);
  pbVar1 = (byte *)(*(long *)(lVar18 + 0x390) + *(long *)(lVar18 + 0x388));
  *pbVar1 = bVar6;
  *(undefined2 *)(pbVar1 + 4) = uVar9;
  *(undefined2 *)(pbVar1 + 6) = uVar10;
  *(undefined4 *)(pbVar1 + 8) = uVar23;
  *(undefined2 *)(pbVar1 + 0xe) = uVar13;
  *(undefined2 *)(pbVar1 + 0x10) = uVar12;
  pbVar1[1] = bVar7;
  pbVar1[2] = bVar8;
  *(undefined2 *)(pbVar1 + 0xc) = uVar11;
  local_64 = uVar22;
  if ((((uVar19 & 1) != 0) && (*(long *)(lVar18 + 0x3a8) != 0)) &&
     (puVar16 = *(undefined8 **)(*(long *)(lVar18 + 0x3a8) + 0x18), puVar16 != (undefined8 *)0x0)) {
    (**(code **)*puVar16)();
  }
  if ((((local_e4 & 1) != 0) && (*(long *)(lVar18 + 0x140) != 0)) &&
     (puVar16 = *(undefined8 **)(*(long *)(lVar18 + 0x140) + 0x18), puVar16 != (undefined8 *)0x0)) {
    (**(code **)*puVar16)();
  }
LAB_017ff4e0:
  if ((((uVar14 & 1) == 0) && (*(long *)(lVar15 + 0x5d4288) != 0)) &&
     (puVar16 = *(undefined8 **)(*(long *)(lVar15 + 0x5d4288) + 8), puVar16 != (undefined8 *)0x0)) {
    (**(code **)*puVar16)();
  }
  if ((((uVar17 & 1) != 0) && (*(long *)(lVar15 + 0x5d4020) != 0)) &&
     (puVar16 = *(undefined8 **)(*(long *)(lVar15 + 0x5d4020) + 8), puVar16 != (undefined8 *)0x0)) {
    (**(code **)*puVar16)();
  }
  return;
}

