
void FUN_007e7b10(ushort *param_1)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  uVar11 = (ulong)*param_1;
  uVar10 = (uint)*param_1;
  if (uVar10 == DAT_04cb6038) {
    return;
  }
  if (*(long *)(param_1 + 8) == 0 && *(long *)(param_1 + 4) == 0) {
    return;
  }
  pbVar8 = &DAT_04c8c100;
  if ((DAT_04c8c100 & 1) == 0) {
    iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3128);
    uVar11 = (ulong)uVar10;
    pbVar8 = PTR_DAT_04bb3128;
    if (iVar5 != 0) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
      uVar11 = (ulong)uVar10;
      pbVar8 = PTR_DAT_04bb3128;
    }
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar12 = 0;
    do {
      if (*(int *)(DAT_04c8c0f8 + uVar12 * 4) == (int)(uVar11 >> 0xb)) goto LAB_007e7b9c;
      uVar12 = uVar12 + 1;
    } while (DAT_04c8c0f0 != uVar12);
  }
  uVar12 = 0;
LAB_007e7b9c:
  local_38 = CONCAT44(local_38._4_4_,(int)uVar12);
  if (((*pbVar8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04c8c100), iVar5 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  uVar10 = (uint)local_38;
  if (DAT_04c8c0f0 <= (uint)local_38) {
    uVar10 = 0;
  }
  if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar10 * 4) == 0x11) {
    lVar14 = *(long *)(param_1 + 8);
    if (lVar14 == 0) {
LAB_007e7c2c:
      lVar14 = *(long *)(param_1 + 4);
      lVar9 = *(long *)(lVar14 + 0x28);
      if (lVar9 == 0) {
        uVar11 = 0;
      }
      else {
        if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
          uVar11 = 0;
        }
        else {
          uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
          lVar9 = *(long *)(lVar14 + 0x28);
          uVar11 = uVar11 & 0xffffffff;
          if (lVar9 == 0) goto LAB_007e7cd0;
        }
        plVar6 = *(long **)(lVar9 + 0x20);
        if (plVar6 != (long *)0x0) {
          local_38 = *(undefined8 *)(lVar14 + 8);
          uStack_30 = *(undefined8 *)(lVar14 + 0x10);
          local_28 = 0x2a8;
          (**(code **)(*plVar6 + 0x20))(plVar6,&local_38);
        }
      }
LAB_007e7cd0:
      uVar12 = 0;
      uVar10 = 0;
      bVar4 = true;
      puVar2 = (uint *)(*(long *)(lVar14 + 0x10) + *(long *)(lVar14 + 8));
      do {
        iVar5 = 0x20;
        uVar13 = uVar12;
        do {
          if ((((*(byte *)((long)puVar2 + uVar13 + 0xa5) ^ 0xff) & 0xf) == 0) ||
             (0xef < *(byte *)((long)puVar2 + uVar13 + 0xa5))) goto LAB_007e7d3c;
          uVar13 = (ulong)((int)uVar13 + 1);
          iVar5 = iVar5 + -2;
        } while (iVar5 != 0);
        bVar4 = uVar10 < 0x1f;
        uVar10 = uVar10 + 1;
        uVar12 = (ulong)((int)uVar12 + 0x10);
      } while (uVar10 != 0x20);
LAB_007e7d3c:
      *puVar2 = 0;
      bVar3 = 2;
      if (!bVar4) {
        bVar3 = 0;
      }
      uVar12 = 0;
      *(byte *)(puVar2 + 0x1c) = bVar3 | (byte)puVar2[0x1c] & 0xfc;
      uVar10 = 0;
      do {
        piVar1 = (int *)((long)puVar2 + uVar12);
        uVar12 = uVar12 + 4;
        uVar10 = (*piVar1 * 0x16a88000 | (uint)(*piVar1 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
                 uVar10;
        uVar10 = (uVar10 >> 0x13 | uVar10 << 0xd) * 5 + 0xe6546b64;
      } while (uVar12 < 0x2a5);
      uVar10 = (uVar10 ^ uVar10 >> 0x10 ^ 0x2a8) * -0x7a143595;
      uVar10 = (uVar10 ^ uVar10 >> 0xd) * -0x3d4d51cb;
      *puVar2 = uVar10 ^ uVar10 >> 0x10;
      goto joined_r0x007e7ddc;
    }
    lVar9 = *(long *)(lVar14 + 0x28);
  }
  else {
    uVar11 = FUN_007ef180(param_1);
    if ((uVar11 & 1) == 0) goto LAB_007e7c2c;
    lVar14 = *(long *)(param_1 + 8);
    lVar9 = *(long *)(lVar14 + 0x28);
  }
  if (lVar9 == 0) {
    FUN_027c1b80(*(long *)(lVar14 + 0x10) + *(long *)(lVar14 + 8));
    return;
  }
  if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
    uVar11 = 0;
LAB_007e7c68:
    plVar6 = *(long **)(lVar9 + 0x20);
    if (plVar6 != (long *)0x0) {
      local_38 = *(undefined8 *)(lVar14 + 8);
      uStack_30 = *(undefined8 *)(lVar14 + 0x10);
      local_28 = 0x8a8;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_38);
    }
  }
  else {
    uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
    lVar9 = *(long *)(lVar14 + 0x28);
    uVar11 = uVar11 & 0xffffffff;
    if (lVar9 != 0) goto LAB_007e7c68;
  }
  FUN_027c1b80(*(long *)(lVar14 + 0x10) + *(long *)(lVar14 + 8));
joined_r0x007e7ddc:
  if ((((uVar11 & 1) != 0) && (*(long *)(lVar14 + 0x28) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar14 + 0x28) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return;
}

