
/* WARNING: Removing unreachable block (ram,0x0228b858) */
/* WARNING: Removing unreachable block (ram,0x0228b860) */
/* WARNING: Removing unreachable block (ram,0x0228b56c) */
/* WARNING: Removing unreachable block (ram,0x0228b574) */
/* WARNING: Removing unreachable block (ram,0x0228b280) */
/* WARNING: Removing unreachable block (ram,0x0228b288) */
/* WARNING: Removing unreachable block (ram,0x0228af94) */
/* WARNING: Removing unreachable block (ram,0x0228af8c) */
/* WARNING: Removing unreachable block (ram,0x0228af9c) */
/* WARNING: Removing unreachable block (ram,0x0228afb8) */
/* WARNING: Removing unreachable block (ram,0x0228b278) */
/* WARNING: Removing unreachable block (ram,0x0228b2a4) */
/* WARNING: Removing unreachable block (ram,0x0228b564) */
/* WARNING: Removing unreachable block (ram,0x0228b590) */
/* WARNING: Removing unreachable block (ram,0x0228b850) */
/* WARNING: Removing unreachable block (ram,0x0228b87c) */

void FUN_0228ad68(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  float fVar15;
  float fVar16;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  byte local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  puVar2 = PTR_DAT_04bb46b0;
  lVar13 = *(long *)PTR_DAT_04bb46b0;
  if (lVar13 == 0) {
LAB_0228ade4:
    lVar13 = 0;
  }
  else {
    puVar14 = *(undefined8 **)(lVar13 + 0x10);
    if ((*(byte *)(lVar13 + 0x453) & 1) == 0) {
      lVar6 = (**(code **)(*(long *)*puVar14 + 0x38))();
      lVar13 = 0;
      if (lVar6 != 0) {
        lVar13 = lVar6 + 0x70;
      }
    }
    else {
      if (puVar14 == (undefined8 *)0x0) goto LAB_0228ade4;
      lVar13 = 0;
      if ((long *)puVar14[0x26] != (long *)0x0) {
        lVar13 = (**(code **)(*(long *)puVar14[0x26] + 0x38))();
      }
    }
  }
  if ((*(long **)(lVar13 + 0x1bfdf8) == (long *)0x0) ||
     (puVar14 = (undefined8 *)**(long **)(lVar13 + 0x1bfdf8), puVar14 == (undefined8 *)0x0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = (**(code **)*puVar14)();
    uVar7 = uVar7 & 0xffffffff;
  }
  puVar4 = PTR_DAT_04bbfe68;
  puVar3 = PTR_DAT_04bbbf90;
  puVar1 = PTR_DAT_04bb2010;
  if (*(uint *)(*(long *)(lVar13 + 0x1bfde0) + *(long *)(lVar13 + 0x1bfdd8) + 100) < 4) {
    lVar6 = *(long *)puVar2;
    if (lVar6 == 0) {
LAB_0228ae9c:
      lVar6 = 0;
    }
    else {
      puVar14 = *(undefined8 **)(lVar6 + 0x10);
      if ((*(byte *)(lVar6 + 0x453) & 1) == 0) {
        lVar8 = (**(code **)(*(long *)*puVar14 + 0x38))();
        lVar6 = 0;
        if (lVar8 != 0) {
          lVar6 = lVar8 + 0x70;
        }
      }
      else {
        if (puVar14 == (undefined8 *)0x0) goto LAB_0228ae9c;
        lVar6 = 0;
        if ((long *)puVar14[0x26] != (long *)0x0) {
          lVar6 = (**(code **)(*(long *)puVar14[0x26] + 0x38))();
        }
      }
    }
    if ((*(long *)(lVar6 + 0x1bfdf8) == 0) ||
       (puVar14 = *(undefined8 **)(*(long *)(lVar6 + 0x1bfdf8) + 0x10), puVar14 == (undefined8 *)0x0
       )) {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)*puVar14)();
      uVar9 = uVar9 & 0xffffffff;
    }
    uStack_94 = *(undefined4 *)(puVar3 + 0xc);
    local_a0 = puVar4 + 0x10;
    local_98 = 1;
    local_90 = FUN_017baf44();
    local_90 = local_90 & 1;
    lVar8 = *(long *)(lVar13 + 0x1bfde0) + *(long *)(lVar13 + 0x1bfdd8);
    local_88 = puVar1 + 0x10;
    fVar15 = *(float *)(lVar8 + 0x14);
    fVar16 = *(float *)(lVar8 + 0x1c);
    local_80 = CONCAT44((int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0),
                        (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0));
    uVar10 = FUN_01a4f798(&local_a0,0,&local_88);
    if (((uVar10 & 1) != 0) &&
       (lVar8 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0xd0), lVar8 != 0)) {
      FUN_012e5af4(lVar8,&local_88);
    }
    if ((*(long *)(lVar6 + 0x1bfdf8) != 0) &&
       (plVar11 = *(long **)(*(long *)(lVar6 + 0x1bfdf8) + 0x20), plVar11 != (long *)0x0)) {
      local_88 = *(undefined **)(lVar6 + 0x1bfdd8);
      local_80 = *(undefined8 *)(lVar6 + 0x1bfde0);
      uStack_78 = 0x6c;
      (**(code **)(*plVar11 + 0x20))(plVar11,&local_88);
    }
    puVar14 = (undefined8 *)(*(long *)(lVar6 + 0x1bfde0) + *(long *)(lVar6 + 0x1bfdd8));
    puVar14[2] = 0;
    puVar14[3] = 0;
    *puVar14 = 0;
    puVar14[1] = 0;
    *(undefined4 *)((long)puVar14 + 0xc) = 9;
    *(undefined4 *)(puVar14 + 2) = 0x3f000000;
    puVar14[6] = 0;
    puVar14[7] = 0;
    *(undefined4 *)((long)puVar14 + 0x3c) = 0;
    *(undefined4 *)(puVar14 + 8) = 0;
    *(undefined8 *)((long)puVar14 + 0x14) = 0;
    *(undefined4 *)((long)puVar14 + 0x1c) = 0;
    *(undefined8 *)((long)puVar14 + 0x34) = 0;
    *(undefined8 *)((long)puVar14 + 0x5c) = 0;
    *(undefined8 *)((long)puVar14 + 0x54) = 0;
    *(undefined8 *)((long)puVar14 + 0x4c) = 0;
    *(undefined8 *)((long)puVar14 + 0x44) = 0;
    puVar14[4] = 0x3f00000000000009;
    puVar14[5] = 0;
    *(undefined1 *)(puVar14 + 8) = 2;
    *(undefined8 *)((long)puVar14 + 0x2c) = 0;
    *(undefined8 *)((long)puVar14 + 100) = 0x300000004;
    if ((((uVar9 & 1) != 0) && (*(long *)(lVar6 + 0x1bfdf8) != 0)) &&
       (puVar14 = *(undefined8 **)(*(long *)(lVar6 + 0x1bfdf8) + 0x18), puVar14 != (undefined8 *)0x0
       )) {
      (**(code **)*puVar14)();
    }
  }
  if ((((uVar7 & 1) != 0) && (*(long *)(lVar13 + 0x1bfdf8) != 0)) &&
     (puVar14 = *(undefined8 **)(*(long *)(lVar13 + 0x1bfdf8) + 8), puVar14 != (undefined8 *)0x0)) {
    (**(code **)*puVar14)();
  }
  lVar13 = *(long *)puVar2;
  if (lVar13 == 0) {
LAB_0228b0f0:
    lVar13 = 0;
  }
  else {
    puVar14 = *(undefined8 **)(lVar13 + 0x10);
    if ((*(byte *)(lVar13 + 0x453) & 1) == 0) {
      lVar6 = (**(code **)(*(long *)*puVar14 + 0x38))();
      lVar13 = 0;
      if (lVar6 != 0) {
        lVar13 = lVar6 + 0x70;
      }
    }
    else {
      if (puVar14 == (undefined8 *)0x0) goto LAB_0228b0f0;
      lVar13 = 0;
      if ((long *)puVar14[0x26] != (long *)0x0) {
        lVar13 = (**(code **)(*(long *)puVar14[0x26] + 0x38))();
      }
    }
  }
  if ((*(long **)(lVar13 + 0x1c0798) == (long *)0x0) ||
     (puVar14 = (undefined8 *)**(long **)(lVar13 + 0x1c0798), puVar14 == (undefined8 *)0x0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = (**(code **)*puVar14)();
    uVar7 = uVar7 & 0xffffffff;
  }
  if (*(uint *)(*(long *)(lVar13 + 0x1c0780) + *(long *)(lVar13 + 0x1c0778) + 100) < 4) {
    lVar6 = *(long *)puVar2;
    if (lVar6 == 0) {
LAB_0228b188:
      lVar6 = 0;
    }
    else {
      puVar14 = *(undefined8 **)(lVar6 + 0x10);
      if ((*(byte *)(lVar6 + 0x453) & 1) == 0) {
        lVar8 = (**(code **)(*(long *)*puVar14 + 0x38))();
        lVar6 = 0;
        if (lVar8 != 0) {
          lVar6 = lVar8 + 0x70;
        }
      }
      else {
        if (puVar14 == (undefined8 *)0x0) goto LAB_0228b188;
        lVar6 = 0;
        if ((long *)puVar14[0x26] != (long *)0x0) {
          lVar6 = (**(code **)(*(long *)puVar14[0x26] + 0x38))();
        }
      }
    }
    if ((*(long *)(lVar6 + 0x1c0798) == 0) ||
       (puVar14 = *(undefined8 **)(*(long *)(lVar6 + 0x1c0798) + 0x10), puVar14 == (undefined8 *)0x0
       )) {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)*puVar14)();
      uVar9 = uVar9 & 0xffffffff;
    }
    uStack_94 = *(undefined4 *)(puVar3 + 0xc);
    local_a0 = puVar4 + 0x10;
    local_98 = 1;
    local_90 = FUN_017baf44();
    local_90 = local_90 & 1;
    lVar8 = *(long *)(lVar13 + 0x1c0780) + *(long *)(lVar13 + 0x1c0778);
    local_88 = puVar1 + 0x10;
    fVar15 = *(float *)(lVar8 + 0x14);
    fVar16 = *(float *)(lVar8 + 0x1c);
    local_80 = CONCAT44((int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0),
                        (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0));
    uVar10 = FUN_01a4f798(&local_a0,0,&local_88);
    if (((uVar10 & 1) != 0) &&
       (lVar8 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0xd0), lVar8 != 0)) {
      FUN_012e5af4(lVar8,&local_88);
    }
    if ((*(long *)(lVar6 + 0x1c0798) != 0) &&
       (plVar11 = *(long **)(*(long *)(lVar6 + 0x1c0798) + 0x20), plVar11 != (long *)0x0)) {
      local_88 = *(undefined **)(lVar6 + 0x1c0778);
      local_80 = *(undefined8 *)(lVar6 + 0x1c0780);
      uStack_78 = 0x6c;
      (**(code **)(*plVar11 + 0x20))(plVar11,&local_88);
    }
    puVar14 = (undefined8 *)(*(long *)(lVar6 + 0x1c0780) + *(long *)(lVar6 + 0x1c0778));
    puVar14[2] = 0;
    puVar14[3] = 0;
    *puVar14 = 0;
    puVar14[1] = 0;
    *(undefined4 *)((long)puVar14 + 0xc) = 9;
    *(undefined4 *)(puVar14 + 2) = 0x3f000000;
    puVar14[6] = 0;
    puVar14[7] = 0;
    *(undefined4 *)((long)puVar14 + 0x3c) = 0;
    *(undefined4 *)(puVar14 + 8) = 0;
    *(undefined8 *)((long)puVar14 + 0x14) = 0;
    *(undefined4 *)((long)puVar14 + 0x1c) = 0;
    *(undefined8 *)((long)puVar14 + 0x34) = 0;
    *(undefined8 *)((long)puVar14 + 0x5c) = 0;
    *(undefined8 *)((long)puVar14 + 0x54) = 0;
    *(undefined8 *)((long)puVar14 + 0x4c) = 0;
    *(undefined8 *)((long)puVar14 + 0x44) = 0;
    puVar14[4] = 0x3f00000000000009;
    puVar14[5] = 0;
    *(undefined1 *)(puVar14 + 8) = 2;
    *(undefined8 *)((long)puVar14 + 0x2c) = 0;
    *(undefined8 *)((long)puVar14 + 100) = 0x300000004;
    if ((((uVar9 & 1) != 0) && (*(long *)(lVar6 + 0x1c0798) != 0)) &&
       (puVar14 = *(undefined8 **)(*(long *)(lVar6 + 0x1c0798) + 0x18), puVar14 != (undefined8 *)0x0
       )) {
      (**(code **)*puVar14)();
    }
  }
  if ((((uVar7 & 1) != 0) && (*(long *)(lVar13 + 0x1c0798) != 0)) &&
     (puVar14 = *(undefined8 **)(*(long *)(lVar13 + 0x1c0798) + 8), puVar14 != (undefined8 *)0x0)) {
    (**(code **)*puVar14)();
  }
  lVar13 = *(long *)puVar2;
  if (lVar13 == 0) {
LAB_0228b3dc:
    lVar13 = 0;
  }
  else {
    puVar14 = *(undefined8 **)(lVar13 + 0x10);
    if ((*(byte *)(lVar13 + 0x453) & 1) == 0) {
      lVar6 = (**(code **)(*(long *)*puVar14 + 0x38))();
      lVar13 = 0;
      if (lVar6 != 0) {
        lVar13 = lVar6 + 0x70;
      }
    }
    else {
      if (puVar14 == (undefined8 *)0x0) goto LAB_0228b3dc;
      lVar13 = 0;
      if ((long *)puVar14[0x26] != (long *)0x0) {
        lVar13 = (**(code **)(*(long *)puVar14[0x26] + 0x38))();
      }
    }
  }
  if ((*(long **)(lVar13 + 0x1c1138) == (long *)0x0) ||
     (puVar14 = (undefined8 *)**(long **)(lVar13 + 0x1c1138), puVar14 == (undefined8 *)0x0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = (**(code **)*puVar14)();
    uVar7 = uVar7 & 0xffffffff;
  }
  if (*(uint *)(*(long *)(lVar13 + 0x1c1120) + *(long *)(lVar13 + 0x1c1118) + 100) < 4) {
    lVar6 = *(long *)puVar2;
    if (lVar6 == 0) {
LAB_0228b474:
      lVar6 = 0;
    }
    else {
      puVar14 = *(undefined8 **)(lVar6 + 0x10);
      if ((*(byte *)(lVar6 + 0x453) & 1) == 0) {
        lVar8 = (**(code **)(*(long *)*puVar14 + 0x38))();
        lVar6 = 0;
        if (lVar8 != 0) {
          lVar6 = lVar8 + 0x70;
        }
      }
      else {
        if (puVar14 == (undefined8 *)0x0) goto LAB_0228b474;
        lVar6 = 0;
        if ((long *)puVar14[0x26] != (long *)0x0) {
          lVar6 = (**(code **)(*(long *)puVar14[0x26] + 0x38))();
        }
      }
    }
    if ((*(long *)(lVar6 + 0x1c1138) == 0) ||
       (puVar14 = *(undefined8 **)(*(long *)(lVar6 + 0x1c1138) + 0x10), puVar14 == (undefined8 *)0x0
       )) {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)*puVar14)();
      uVar9 = uVar9 & 0xffffffff;
    }
    uStack_94 = *(undefined4 *)(puVar3 + 0xc);
    local_a0 = puVar4 + 0x10;
    local_98 = 1;
    local_90 = FUN_017baf44();
    local_90 = local_90 & 1;
    lVar8 = *(long *)(lVar13 + 0x1c1120) + *(long *)(lVar13 + 0x1c1118);
    local_88 = puVar1 + 0x10;
    fVar15 = *(float *)(lVar8 + 0x14);
    fVar16 = *(float *)(lVar8 + 0x1c);
    local_80 = CONCAT44((int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0),
                        (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0));
    uVar10 = FUN_01a4f798(&local_a0,0,&local_88);
    if (((uVar10 & 1) != 0) &&
       (lVar8 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0xd0), lVar8 != 0)) {
      FUN_012e5af4(lVar8,&local_88);
    }
    if ((*(long *)(lVar6 + 0x1c1138) != 0) &&
       (plVar11 = *(long **)(*(long *)(lVar6 + 0x1c1138) + 0x20), plVar11 != (long *)0x0)) {
      local_88 = *(undefined **)(lVar6 + 0x1c1118);
      local_80 = *(undefined8 *)(lVar6 + 0x1c1120);
      uStack_78 = 0x6c;
      (**(code **)(*plVar11 + 0x20))(plVar11,&local_88);
    }
    puVar14 = (undefined8 *)(*(long *)(lVar6 + 0x1c1120) + *(long *)(lVar6 + 0x1c1118));
    puVar14[2] = 0;
    puVar14[3] = 0;
    *puVar14 = 0;
    puVar14[1] = 0;
    *(undefined4 *)((long)puVar14 + 0xc) = 9;
    *(undefined4 *)(puVar14 + 2) = 0x3f000000;
    puVar14[6] = 0;
    puVar14[7] = 0;
    *(undefined4 *)((long)puVar14 + 0x3c) = 0;
    *(undefined4 *)(puVar14 + 8) = 0;
    *(undefined8 *)((long)puVar14 + 0x14) = 0;
    *(undefined4 *)((long)puVar14 + 0x1c) = 0;
    *(undefined8 *)((long)puVar14 + 0x34) = 0;
    *(undefined8 *)((long)puVar14 + 0x5c) = 0;
    *(undefined8 *)((long)puVar14 + 0x54) = 0;
    *(undefined8 *)((long)puVar14 + 0x4c) = 0;
    *(undefined8 *)((long)puVar14 + 0x44) = 0;
    puVar14[4] = 0x3f00000000000009;
    puVar14[5] = 0;
    *(undefined1 *)(puVar14 + 8) = 2;
    *(undefined8 *)((long)puVar14 + 0x2c) = 0;
    *(undefined8 *)((long)puVar14 + 100) = 0x300000004;
    if ((((uVar9 & 1) != 0) && (*(long *)(lVar6 + 0x1c1138) != 0)) &&
       (puVar14 = *(undefined8 **)(*(long *)(lVar6 + 0x1c1138) + 0x18), puVar14 != (undefined8 *)0x0
       )) {
      (**(code **)*puVar14)();
    }
  }
  if ((((uVar7 & 1) != 0) && (*(long *)(lVar13 + 0x1c1138) != 0)) &&
     (puVar14 = *(undefined8 **)(*(long *)(lVar13 + 0x1c1138) + 8), puVar14 != (undefined8 *)0x0)) {
    (**(code **)*puVar14)();
  }
  lVar13 = *(long *)puVar2;
  if (lVar13 == 0) {
LAB_0228b6c8:
    lVar13 = 0;
  }
  else {
    puVar14 = *(undefined8 **)(lVar13 + 0x10);
    if ((*(byte *)(lVar13 + 0x453) & 1) == 0) {
      lVar6 = (**(code **)(*(long *)*puVar14 + 0x38))();
      lVar13 = 0;
      if (lVar6 != 0) {
        lVar13 = lVar6 + 0x70;
      }
    }
    else {
      if (puVar14 == (undefined8 *)0x0) goto LAB_0228b6c8;
      lVar13 = 0;
      if ((long *)puVar14[0x26] != (long *)0x0) {
        lVar13 = (**(code **)(*(long *)puVar14[0x26] + 0x38))();
      }
    }
  }
  if ((*(long **)(lVar13 + 0x1c1ad8) == (long *)0x0) ||
     (puVar14 = (undefined8 *)**(long **)(lVar13 + 0x1c1ad8), puVar14 == (undefined8 *)0x0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = (**(code **)*puVar14)();
    uVar7 = uVar7 & 0xffffffff;
  }
  if (*(uint *)(*(long *)(lVar13 + 0x1c1ac0) + *(long *)(lVar13 + 0x1c1ab8) + 100) < 4) {
    lVar6 = *(long *)puVar2;
    if (lVar6 == 0) {
LAB_0228b760:
      lVar6 = 0;
    }
    else {
      puVar14 = *(undefined8 **)(lVar6 + 0x10);
      if ((*(byte *)(lVar6 + 0x453) & 1) == 0) {
        lVar8 = (**(code **)(*(long *)*puVar14 + 0x38))();
        lVar6 = 0;
        if (lVar8 != 0) {
          lVar6 = lVar8 + 0x70;
        }
      }
      else {
        if (puVar14 == (undefined8 *)0x0) goto LAB_0228b760;
        lVar6 = 0;
        if ((long *)puVar14[0x26] != (long *)0x0) {
          lVar6 = (**(code **)(*(long *)puVar14[0x26] + 0x38))();
        }
      }
    }
    if ((*(long *)(lVar6 + 0x1c1ad8) == 0) ||
       (puVar14 = *(undefined8 **)(*(long *)(lVar6 + 0x1c1ad8) + 0x10), puVar14 == (undefined8 *)0x0
       )) {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)*puVar14)();
      uVar9 = uVar9 & 0xffffffff;
    }
    uStack_94 = *(undefined4 *)(puVar3 + 0xc);
    local_a0 = puVar4 + 0x10;
    local_98 = 1;
    local_90 = FUN_017baf44();
    local_90 = local_90 & 1;
    lVar8 = *(long *)(lVar13 + 0x1c1ac0) + *(long *)(lVar13 + 0x1c1ab8);
    local_88 = puVar1 + 0x10;
    fVar15 = *(float *)(lVar8 + 0x14);
    fVar16 = *(float *)(lVar8 + 0x1c);
    local_80 = CONCAT44((int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0),
                        (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0));
    uVar10 = FUN_01a4f798(&local_a0,0,&local_88);
    if (((uVar10 & 1) != 0) &&
       (lVar8 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0xd0), lVar8 != 0)) {
      FUN_012e5af4(lVar8,&local_88);
    }
    if ((*(long *)(lVar6 + 0x1c1ad8) != 0) &&
       (plVar11 = *(long **)(*(long *)(lVar6 + 0x1c1ad8) + 0x20), plVar11 != (long *)0x0)) {
      local_88 = *(undefined **)(lVar6 + 0x1c1ab8);
      local_80 = *(undefined8 *)(lVar6 + 0x1c1ac0);
      uStack_78 = 0x6c;
      (**(code **)(*plVar11 + 0x20))(plVar11,&local_88);
    }
    puVar14 = (undefined8 *)(*(long *)(lVar6 + 0x1c1ac0) + *(long *)(lVar6 + 0x1c1ab8));
    puVar14[2] = 0;
    puVar14[3] = 0;
    *puVar14 = 0;
    puVar14[1] = 0;
    *(undefined4 *)((long)puVar14 + 0xc) = 9;
    *(undefined4 *)(puVar14 + 2) = 0x3f000000;
    puVar14[6] = 0;
    puVar14[7] = 0;
    *(undefined4 *)((long)puVar14 + 0x3c) = 0;
    *(undefined4 *)(puVar14 + 8) = 0;
    *(undefined8 *)((long)puVar14 + 0x14) = 0;
    *(undefined4 *)((long)puVar14 + 0x1c) = 0;
    *(undefined8 *)((long)puVar14 + 0x34) = 0;
    *(undefined8 *)((long)puVar14 + 0x5c) = 0;
    *(undefined8 *)((long)puVar14 + 0x54) = 0;
    *(undefined8 *)((long)puVar14 + 0x4c) = 0;
    *(undefined8 *)((long)puVar14 + 0x44) = 0;
    puVar14[4] = 0x3f00000000000009;
    puVar14[5] = 0;
    *(undefined1 *)(puVar14 + 8) = 2;
    *(undefined8 *)((long)puVar14 + 0x2c) = 0;
    *(undefined8 *)((long)puVar14 + 100) = 0x300000004;
    if ((((uVar9 & 1) != 0) && (*(long *)(lVar6 + 0x1c1ad8) != 0)) &&
       (puVar14 = *(undefined8 **)(*(long *)(lVar6 + 0x1c1ad8) + 0x18), puVar14 != (undefined8 *)0x0
       )) {
      (**(code **)*puVar14)();
    }
  }
  if ((((uVar7 & 1) != 0) && (*(long *)(lVar13 + 0x1c1ad8) != 0)) &&
     (puVar14 = *(undefined8 **)(*(long *)(lVar13 + 0x1c1ad8) + 8), puVar14 != (undefined8 *)0x0)) {
    (**(code **)*puVar14)();
  }
  lVar13 = *(long *)puVar2;
  if (lVar13 == 0) {
LAB_0228b9b4:
    lVar13 = 0;
  }
  else {
    puVar14 = *(undefined8 **)(lVar13 + 0x10);
    if ((*(byte *)(lVar13 + 0x453) & 1) == 0) {
      lVar6 = (**(code **)(*(long *)*puVar14 + 0x38))();
      lVar13 = 0;
      if (lVar6 != 0) {
        lVar13 = lVar6 + 0x70;
      }
    }
    else {
      if (puVar14 == (undefined8 *)0x0) goto LAB_0228b9b4;
      lVar13 = 0;
      if ((long *)puVar14[0x26] != (long *)0x0) {
        lVar13 = (**(code **)(*(long *)puVar14[0x26] + 0x38))();
      }
    }
  }
  plVar11 = (long *)(&LAB_001bfd68 + lVar13);
  lVar6 = *(long *)(&LAB_001bfd88 + lVar13);
  if (lVar6 == 0) {
    *(undefined4 *)(*(long *)(&LAB_001bfd70 + lVar13) + *plVar11 + 0x1b4) = 0;
    return;
  }
  if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
    uVar5 = 1;
    plVar12 = *(long **)(lVar6 + 0x20);
  }
  else {
    uVar5 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
    uVar5 = uVar5 ^ 1;
    if (*(long *)(&LAB_001bfd88 + lVar13) == 0) goto LAB_0228ba14;
    plVar12 = *(long **)(*(long *)(&LAB_001bfd88 + lVar13) + 0x20);
  }
  if (plVar12 != (long *)0x0) {
    local_88 = (undefined *)*plVar11;
    local_80 = *(undefined8 *)(&LAB_001bfd70 + lVar13);
    uStack_78 = 0x1b8;
    (**(code **)(*plVar12 + 0x20))(plVar12,&local_88);
  }
LAB_0228ba14:
  *(undefined4 *)(*(long *)(&LAB_001bfd70 + lVar13) + *plVar11 + 0x1b4) = 0;
  if ((((uVar5 & 1) == 0) && (*(long *)(&LAB_001bfd88 + lVar13) != 0)) &&
     (puVar14 = *(undefined8 **)(*(long *)(&LAB_001bfd88 + lVar13) + 0x18),
     puVar14 != (undefined8 *)0x0)) {
    (**(code **)*puVar14)();
  }
  return;
}

