
/* WARNING: Removing unreachable block (ram,0x02659f18) */

void FUN_02659740(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  puVar3 = PTR_DAT_04bb46b0;
  if (param_1 == 0) {
    return;
  }
  lVar14 = param_1 + 0x194b0;
  lVar10 = lVar14;
  if (*(long *)(param_1 + 0x194b8) == 0) {
    lVar10 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
  }
  plVar7 = (long *)(lVar10 + 0x24818);
  lVar11 = *(long *)(lVar10 + 0x24838);
  if (lVar11 == 0) {
    puVar6 = (undefined8 *)(*(long *)(lVar10 + 0x24820) + *plVar7);
    puVar6[9] = 0;
    puVar6[10] = 0;
    *puVar6 = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
  }
  else {
    if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar5 = *(long **)(lVar11 + 0x20);
joined_r0x02659890:
      if (plVar5 != (long *)0x0) {
        local_68 = *plVar7;
        local_60 = *(undefined8 *)(lVar10 + 0x24820);
        local_58 = 0x58;
        (**(code **)(*plVar5 + 0x20))(plVar5,&local_68);
      }
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(lVar10 + 0x24838) != 0) {
        plVar5 = *(long **)(*(long *)(lVar10 + 0x24838) + 0x20);
        goto joined_r0x02659890;
      }
    }
    puVar6 = (undefined8 *)(*(long *)(lVar10 + 0x24820) + *plVar7);
    puVar6[9] = 0;
    puVar6[10] = 0;
    *puVar6 = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    if ((((uVar4 & 1) != 0) && (*(long *)(lVar10 + 0x24838) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar10 + 0x24838) + 0x18), puVar6 != (undefined8 *)0x0))
    {
      (**(code **)*puVar6)();
    }
  }
  lVar10 = *(long *)(param_1 + 0x18438);
  if (lVar10 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar7 = *(long **)(lVar10 + 0x20);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(param_1 + 0x18438) == 0) goto LAB_026598c4;
      plVar7 = *(long **)(*(long *)(param_1 + 0x18438) + 0x20);
    }
    if (plVar7 != (long *)0x0) {
      local_68 = *(long *)(param_1 + 0x18418);
      local_60 = *(undefined8 *)(param_1 + 0x18420);
      local_58 = 0x10;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_68);
    }
  }
LAB_026598c4:
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x18420) + *(long *)(param_1 + 0x18418));
  *puVar6 = 0;
  puVar6[1] = 0;
  lVar10 = *(long *)(param_1 + 0x184e0);
  if (lVar10 == 0) {
    uVar8 = 0;
  }
  else {
    if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
      uVar8 = 0;
      plVar7 = *(long **)(lVar10 + 0x20);
    }
    else {
      uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      uVar8 = uVar8 & 0xffffffff;
      if (*(long *)(param_1 + 0x184e0) == 0) goto LAB_0265993c;
      plVar7 = *(long **)(*(long *)(param_1 + 0x184e0) + 0x20);
    }
    if (plVar7 != (long *)0x0) {
      local_68 = *(long *)(param_1 + 0x184c0);
      local_60 = *(undefined8 *)(param_1 + 0x184c8);
      local_58 = 0x234d0;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_68);
    }
  }
LAB_0265993c:
  *(undefined8 *)(*(long *)(param_1 + 0x184c8) + *(long *)(param_1 + 0x184c0) + 0x23100) = 0;
  if ((*(long *)(param_1 + 0x184e0) != 0) &&
     (plVar7 = *(long **)(*(long *)(param_1 + 0x184e0) + 0x20), plVar7 != (long *)0x0)) {
    local_68 = *(long *)(param_1 + 0x184c0);
    local_60 = *(undefined8 *)(param_1 + 0x184c8);
    local_58 = 0x234d0;
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_68);
  }
  *(undefined8 *)(*(long *)(param_1 + 0x184c8) + *(long *)(param_1 + 0x184c0) + 0x23110) = 0;
  if ((((uVar8 & 1) != 0) && (*(long *)(param_1 + 0x184e0) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x184e0) + 0x18), puVar6 != (undefined8 *)0x0))
  {
    (**(code **)*puVar6)();
  }
  if ((((uVar4 & 1) != 0) && (*(long *)(param_1 + 0x18438) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x18438) + 0x18), puVar6 != (undefined8 *)0x0))
  {
    (**(code **)*puVar6)();
  }
  lVar10 = lVar14;
  if (*(long *)(param_1 + 0x194b8) == 0) {
    lVar10 = *(long *)(*(long *)puVar3 + 0x20);
  }
  lVar11 = *(long *)(lVar10 + 0x8560);
  if (lVar11 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar7 = *(long **)(lVar11 + 0x20);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(lVar10 + 0x8560) == 0) goto LAB_02659a60;
      plVar7 = *(long **)(*(long *)(lVar10 + 0x8560) + 0x20);
    }
    if (plVar7 != (long *)0x0) {
      local_68 = *(long *)(lVar10 + 0x8540);
      local_60 = *(undefined8 *)(lVar10 + 0x8548);
      local_58 = 0xb548;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_68);
    }
  }
LAB_02659a60:
  lVar11 = 0;
  plVar7 = (long *)(*(long *)(lVar10 + 0x8548) + *(long *)(lVar10 + 0x8540));
  do {
    uVar9 = *(uint *)((long)plVar7 + lVar11 + 0xaf00);
    plVar5 = plVar7 + (ulong)uVar9 * 0xe;
    if (399 < uVar9) {
      plVar5 = plVar7;
    }
    if ((*plVar5 != 0) &&
       (piVar13 = (int *)((long)plVar5 + 0x2c), *piVar13 != 0 && (int)plVar5[2] != 0)) {
      plVar5[3] = 0;
      plVar5[4] = 0;
      *plVar5 = 0;
      *(undefined8 *)((long)plVar5 + 0x3c) = 0;
      *(undefined4 *)((long)plVar5 + 0x44) = 0;
      *(undefined1 *)(plVar5 + 5) = 2;
      *(undefined2 *)(plVar5 + 10) = 0;
      *(undefined4 *)((long)plVar5 + 0x52) = 0x101;
      *(undefined1 *)((long)plVar5 + 0x56) = 0;
      plVar5[0xb] = 0;
      *(undefined1 *)((long)plVar5 + 0x6c) = 0;
      *(undefined2 *)((long)plVar5 + 0x6d) = 0;
      plVar5[1] = 0;
      plVar5[2] = 0;
      piVar13[0] = 0;
      piVar13[1] = 0;
      *(undefined8 *)((long)plVar5 + 0x34) = 0;
    }
    lVar11 = lVar11 + 4;
  } while (lVar11 != 0x640);
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar10 + 0x8560) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar10 + 0x8560) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  lVar10 = lVar14;
  if (*(long *)(param_1 + 0x194b8) == 0) {
    lVar10 = *(long *)(*(long *)puVar3 + 0x20);
  }
  lVar11 = *(long *)(lVar10 + 0x248a8);
  if (lVar11 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar7 = *(long **)(lVar11 + 0x20);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(lVar10 + 0x248a8) == 0) goto LAB_02659ba0;
      plVar7 = *(long **)(*(long *)(lVar10 + 0x248a8) + 0x20);
    }
    if (plVar7 != (long *)0x0) {
      local_68 = *(long *)(lVar10 + 0x24888);
      local_60 = *(undefined8 *)(lVar10 + 0x24890);
      local_58 = 0x680;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_68);
    }
  }
LAB_02659ba0:
  lVar11 = *(long *)(lVar10 + 0x24890) + *(long *)(lVar10 + 0x24888);
  *(undefined8 *)(lVar11 + 0x670) = 0;
  *(undefined8 *)(lVar11 + 0x668) = 0;
  *(undefined8 *)(lVar11 + 0x660) = 0;
  lVar11 = lVar14;
  if (*(long *)(param_1 + 0x194b8) == 0) {
    lVar11 = *(long *)(*(long *)puVar3 + 0x20);
  }
  plVar7 = (long *)(lVar11 + 0x2ac80);
  lVar12 = *(long *)(lVar11 + 0x2aca0);
  if (lVar12 == 0) {
    memset((void *)(*(long *)(lVar11 + 0x2ac88) + *plVar7),0,0x180);
  }
  else {
    if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
      uVar8 = 0;
      plVar5 = *(long **)(lVar12 + 0x20);
joined_r0x02659cd4:
      if (plVar5 != (long *)0x0) {
        local_68 = *plVar7;
        local_60 = *(undefined8 *)(lVar11 + 0x2ac88);
        local_58 = 0x180;
        (**(code **)(*plVar5 + 0x20))(plVar5,&local_68);
      }
    }
    else {
      uVar8 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
      uVar8 = uVar8 & 0xffffffff;
      if (*(long *)(lVar11 + 0x2aca0) != 0) {
        plVar5 = *(long **)(*(long *)(lVar11 + 0x2aca0) + 0x20);
        goto joined_r0x02659cd4;
      }
    }
    memset((void *)(*(long *)(lVar11 + 0x2ac88) + *plVar7),0,0x180);
    if ((((uVar8 & 1) != 0) && (*(long *)(lVar11 + 0x2aca0) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar11 + 0x2aca0) + 0x18), puVar6 != (undefined8 *)0x0))
    {
      (**(code **)*puVar6)();
    }
  }
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar10 + 0x248a8) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar10 + 0x248a8) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  lVar10 = *(long *)(param_1 + 0x184e0);
  if (lVar10 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar7 = *(long **)(lVar10 + 0x20);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(param_1 + 0x184e0) == 0) goto LAB_02659d0c;
      plVar7 = *(long **)(*(long *)(param_1 + 0x184e0) + 0x20);
    }
    if (plVar7 != (long *)0x0) {
      local_68 = *(long *)(param_1 + 0x184c0);
      local_60 = *(undefined8 *)(param_1 + 0x184c8);
      local_58 = 0x234d0;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_68);
    }
  }
LAB_02659d0c:
  *(undefined8 *)(*(long *)(param_1 + 0x184c8) + *(long *)(param_1 + 0x184c0) + 0x230d8) = 0;
  lVar10 = lVar14;
  if (*(long *)(param_1 + 0x194b8) == 0) {
    lVar10 = *(long *)(*(long *)puVar3 + 0x20);
  }
  plVar7 = (long *)(lVar10 + 0x2acb8);
  lVar11 = *(long *)(lVar10 + 0x2acd8);
  if (lVar11 == 0) {
    puVar6 = (undefined8 *)(*(long *)(lVar10 + 0x2acc0) + *plVar7);
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
  }
  else {
    if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
      uVar8 = 0;
      plVar5 = *(long **)(lVar11 + 0x20);
joined_r0x02659e60:
      if (plVar5 != (long *)0x0) {
        local_68 = *plVar7;
        local_60 = *(undefined8 *)(lVar10 + 0x2acc0);
        local_58 = 0x40;
        (**(code **)(*plVar5 + 0x20))(plVar5,&local_68);
      }
    }
    else {
      uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      uVar8 = uVar8 & 0xffffffff;
      if (*(long *)(lVar10 + 0x2acd8) != 0) {
        plVar5 = *(long **)(*(long *)(lVar10 + 0x2acd8) + 0x20);
        goto joined_r0x02659e60;
      }
    }
    puVar6 = (undefined8 *)(*(long *)(lVar10 + 0x2acc0) + *plVar7);
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
    if ((((uVar8 & 1) != 0) && (*(long *)(lVar10 + 0x2acd8) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar10 + 0x2acd8) + 0x18), puVar6 != (undefined8 *)0x0))
    {
      (**(code **)*puVar6)();
    }
  }
  if ((((uVar4 & 1) != 0) && (*(long *)(param_1 + 0x184e0) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x184e0) + 0x18), puVar6 != (undefined8 *)0x0))
  {
    (**(code **)*puVar6)();
  }
  if (*(long *)(param_1 + 0x194b8) == 0) {
    lVar14 = *(long *)(*(long *)puVar3 + 0x20);
  }
  lVar10 = *(long *)(lVar14 + 0x2aed0);
  if (lVar10 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar7 = *(long **)(lVar10 + 0x20);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(lVar14 + 0x2aed0) == 0) goto LAB_02659e98;
      plVar7 = *(long **)(*(long *)(lVar14 + 0x2aed0) + 0x20);
    }
    if (plVar7 != (long *)0x0) {
      local_68 = *(long *)(lVar14 + 0x2aeb0);
      local_60 = *(undefined8 *)(lVar14 + 0x2aeb8);
      local_58 = 800;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_68);
    }
  }
LAB_02659e98:
  uVar8 = 0;
  lVar10 = *(long *)(lVar14 + 0x2aeb8) + *(long *)(lVar14 + 0x2aeb0);
  do {
    lVar11 = uVar8 << 0x20;
    uVar1 = uVar8 << 3;
    uVar2 = uVar8 >> 0x1f;
    uVar9 = (int)uVar8 + 2;
    uVar8 = (ulong)uVar9;
    *(undefined8 *)(lVar10 + (-uVar2 & 0xfffffff800000000 | uVar1)) = 0;
    *(undefined8 *)(lVar10 + (lVar11 + 0x100000000 >> 0x1d)) = 0;
  } while (uVar9 != 100);
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar14 + 0x2aed0) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar14 + 0x2aed0) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  lVar14 = *(long *)puVar3;
  if (lVar14 == 0) {
    return;
  }
  local_68 = CONCAT44(local_68._4_4_,1);
  if (((*(byte *)(lVar14 + 0x50d) ^ 0xff) & 6) != 0) {
    return;
  }
  lVar14 = (**(code **)(**(long **)(*(long *)(lVar14 + 0x10) + 0x188) + 0x30))();
  if (lVar14 == 0) {
    return;
  }
  lVar10 = *(long *)(lVar14 + 0x5d9500);
  if (lVar10 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      lVar10 = *(long *)(lVar14 + 0x5d9500);
      uVar4 = uVar4 & 0xffffffff;
      if (lVar10 == 0) goto LAB_02659fac;
    }
    plVar7 = *(long **)(lVar10 + 0x20);
    if (plVar7 != (long *)0x0) {
      local_68 = *(long *)(lVar14 + 0x5d94e0);
      local_60 = *(undefined8 *)(lVar14 + 0x5d94e8);
      local_58 = 0x640;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_68);
    }
  }
LAB_02659fac:
  lVar10 = *(long *)(lVar14 + 0x5d94e0);
  lVar11 = *(long *)(lVar14 + 0x5d94e8);
  uVar9 = 0;
  do {
    uVar8 = (ulong)uVar9;
    uVar9 = uVar9 + 1;
    puVar6 = (undefined8 *)(lVar11 + lVar10 + ((long)(uVar8 << 0x20) >> 0x1c));
    *puVar6 = 0;
    *(undefined1 *)(puVar6 + 1) = 0;
  } while (uVar9 != 100);
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar14 + 0x5d9500) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar14 + 0x5d9500) + 0x18), puVar6 != (undefined8 *)0x0))
  {
    (**(code **)*puVar6)();
  }
  return;
}

