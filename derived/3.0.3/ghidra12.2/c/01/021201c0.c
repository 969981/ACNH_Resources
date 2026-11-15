
void FUN_021201c0(ushort *param_1,long param_2,undefined8 param_3,short *param_4)

{
  long lVar1;
  uint *puVar2;
  short sVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  byte *pbVar11;
  long lVar12;
  byte bVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  undefined1 auStack_170c [2];
  undefined1 auStack_170a [2];
  undefined8 local_1708;
  undefined8 uStack_1700;
  undefined8 local_16f8;
  short local_64 [2];
  
  if (*param_4 == DAT_04cb6038) {
LAB_02120288:
    FUN_007ef010(param_1,param_4);
    return;
  }
  FUN_02119c7c();
  iVar5 = FUN_02119c7c(param_2,param_3);
  if (iVar5 == -1) goto LAB_02120288;
  if (iVar5 == -2) {
    uVar7 = *(uint *)(param_2 + 0x1cc);
    lVar14 = *(long *)PTR_DAT_04bb39b0;
    if (lVar14 == 0) {
      pbVar11 = &DAT_0548e140;
LAB_021202d0:
      if (*pbVar11 < 8) goto LAB_02120348;
LAB_021202dc:
      if (DAT_0537d558 == (long *)0x0) {
LAB_02120340:
        pbVar11 = &DAT_0548e168;
        goto LAB_02120348;
      }
      lVar14 = *DAT_0537d558;
      bVar13 = *(byte *)(lVar14 + 0x473);
      pbVar11 = PTR_DAT_04bb5038;
      if ((long)(char)bVar13 != 0xffffffffffffffff) {
        puVar2 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar13 & 0xffffffffU) * 0x20;
        if (7 < bVar13) {
          puVar2 = (uint *)(lVar14 + 0x48);
        }
        if ((*puVar2 & 8) != 0) {
          pbVar11 = (byte *)(lVar14 + 0x471);
        }
      }
      bVar13 = *pbVar11;
      bVar4 = 7 < bVar13;
      if (bVar4) {
        bVar13 = 0xff;
      }
      local_1708 = CONCAT71(local_1708._1_7_,bVar13);
      if (bVar4) goto LAB_02120340;
    }
    else {
      pbVar11 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar14 + 0x15c) != 0) {
        pbVar11 = (byte *)(lVar14 + 0x158);
      }
      if (7 < *pbVar11) {
        if ((*(int *)(lVar14 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
          pbVar11 = (byte *)(DAT_054f5738 + 0x11a5);
          goto LAB_021202d0;
        }
        goto LAB_021202dc;
      }
LAB_02120348:
      bVar13 = *pbVar11;
      if (7 < bVar13) {
        bVar13 = 0xff;
      }
      local_1708 = CONCAT71(local_1708._1_7_,bVar13);
    }
    uVar6 = FUN_02582fe0(&local_1708);
  }
  else {
    lVar14 = *(long *)(*(long *)(param_2 + 0x1f0) + (long)iVar5 * 8);
    uVar7 = *(uint *)(lVar14 + 0x1c4);
    uVar6 = *(undefined4 *)(lVar14 + 0xf0);
  }
  if (DAT_04ccbb68 == 0) {
LAB_02120474:
    FUN_007ef010(param_1,param_4);
    return;
  }
  uVar15 = (ulong)uVar7;
  if (10 < uVar7) {
    uVar15 = 0;
  }
  lVar14 = *(long *)(DAT_04ccbb68 + uVar15 * 8);
  if (lVar14 == 0) goto LAB_02120474;
  if (((DAT_04c8c100 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04c8c100), iVar5 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar15 = 0;
    do {
      if (*(int *)(DAT_04c8c0f8 + uVar15 * 4) == 0x10) goto LAB_021203dc;
      uVar15 = uVar15 + 1;
    } while (DAT_04c8c0f0 != uVar15);
  }
  uVar15 = 0;
LAB_021203dc:
  *param_1 = 0;
  if (((DAT_04c8c100 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04c8c100), iVar5 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  uVar16 = (uint)uVar15;
  if (DAT_04c8c0f0 <= uVar16) {
    uVar16 = 0;
  }
  *param_1 = (ushort)uVar7 & 0x7f | (ushort)(*(int *)(DAT_04c8c0f8 + (long)(int)uVar16 * 4) << 0xb);
  iVar5 = FUN_02119c7c(param_2,param_3);
  if ((iVar5 != -2) &&
     (*(char *)(*(long *)(*(long *)(param_2 + 0x1f0) + (long)iVar5 * 8) + 0xec) != '\0')) {
    return;
  }
  if ((DAT_05574040 == 0) || (lVar8 = FUN_026eec4c(DAT_05574040,uVar6), lVar8 == 0))
  goto LAB_0212057c;
  if ((*(long **)(lVar8 + 0x32e8) == (long *)0x0) ||
     (puVar9 = (undefined8 *)**(long **)(lVar8 + 0x32e8), puVar9 == (undefined8 *)0x0)) {
    uVar7 = 1;
  }
  else {
    uVar7 = (**(code **)*puVar9)();
    uVar7 = uVar7 ^ 1;
  }
  lVar1 = *(long *)(lVar8 + 0x32d0) + *(long *)(lVar8 + 13000);
  lVar12 = *(long *)(lVar14 + 0x1678);
  if (lVar12 == 0) {
    FUN_027c1640(*(long *)(lVar14 + 0x1660) + *(long *)(lVar14 + 0x1658),lVar1);
  }
  else {
    if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
      uVar15 = 0;
LAB_021204fc:
      plVar10 = *(long **)(lVar12 + 0x20);
      if (plVar10 != (long *)0x0) {
        local_1708 = *(undefined8 *)(lVar14 + 0x1658);
        uStack_1700 = *(undefined8 *)(lVar14 + 0x1660);
        local_16f8 = 0x2a8;
        (**(code **)(*plVar10 + 0x20))(plVar10,&local_1708);
      }
    }
    else {
      uVar15 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
      lVar12 = *(long *)(lVar14 + 0x1678);
      uVar15 = uVar15 & 0xffffffff;
      if (lVar12 != 0) goto LAB_021204fc;
    }
    FUN_027c1640(*(long *)(lVar14 + 0x1660) + *(long *)(lVar14 + 0x1658),lVar1);
    if ((((uVar15 & 1) != 0) && (*(long *)(lVar14 + 0x1678) != 0)) &&
       (puVar9 = *(undefined8 **)(*(long *)(lVar14 + 0x1678) + 0x18), puVar9 != (undefined8 *)0x0))
    {
      (**(code **)*puVar9)();
    }
  }
  if ((((uVar7 & 1) == 0) && (*(long *)(lVar8 + 0x32e8) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x32e8) + 8), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
LAB_0212057c:
  if (iVar5 != -2) {
    return;
  }
  if (DAT_05574040 == 0) {
    return;
  }
  lVar14 = FUN_026eec4c(DAT_05574040,uVar6);
  if (lVar14 == 0) {
    return;
  }
  if ((*(long **)(lVar14 + 0x108) == (long *)0x0) ||
     (puVar9 = (undefined8 *)**(long **)(lVar14 + 0x108), puVar9 == (undefined8 *)0x0)) {
    uVar7 = 1;
  }
  else {
    uVar7 = (**(code **)*puVar9)();
    uVar7 = uVar7 ^ 1;
  }
  sVar3 = *(short *)(*(long *)(lVar14 + 0xf0) + *(long *)(lVar14 + 0xe8) + 0x1d82);
  if (sVar3 == 0) {
    FUN_007ef010(local_64,PTR_DAT_04bb3170);
  }
  else {
    local_64[0] = sVar3 + -1;
  }
  if ((((uVar7 & 1) == 0) && (*(long *)(lVar14 + 0x108) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar14 + 0x108) + 8), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
  FUN_007ef010(auStack_170a,param_1);
  FUN_007e4920(&local_1708,auStack_170a);
  FUN_007ef010(auStack_170c,local_64);
  FUN_007e90a0(&local_1708,auStack_170c);
  return;
}

