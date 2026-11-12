
uint FUN_008026f0(ushort *param_1,byte *param_2)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  long lVar13;
  undefined1 auStack_446a [2];
  undefined1 auStack_4468 [5792];
  undefined1 auStack_2dc8 [6];
  undefined1 auStack_2dc2 [2];
  undefined1 auStack_2dc0 [28];
  undefined2 local_2da4;
  undefined1 local_2da2;
  undefined1 local_2da1;
  undefined4 local_2da0;
  undefined1 auStack_2d9a [2];
  undefined1 auStack_2d98 [5796];
  byte local_16f4 [4];
  uint local_16f0;
  undefined1 auStack_16ea [2];
  undefined1 auStack_16e8 [5796];
  byte local_44 [2];
  undefined1 auStack_42 [2];
  
  FUN_007ef010(auStack_42,param_1);
  local_44[0] = *param_2;
  if (7 < local_44[0]) {
    local_44[0] = 0xff;
  }
  uVar9 = FUN_00800cc0(auStack_42,local_44);
  if ((uVar9 & 1) != 0) {
    FUN_007ef010(auStack_16ea,param_1);
    FUN_007e4920(auStack_16e8,auStack_16ea);
    uVar9 = FUN_007e4bb0(auStack_16e8);
    if ((((uVar9 & 1) != 0) && (uVar2 = *param_1, uVar2 != DAT_04cb6038)) && (*param_2 < 8)) {
      if (((DAT_04c8c100 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0))
      {
        FUN_00706e58(&DAT_04c8c0f0);
        __cxa_guard_release(&DAT_04c8c100);
      }
      if (0 < (int)DAT_04c8c0f0) {
        uVar9 = 0;
        do {
          if (*(uint *)(DAT_04c8c0f8 + uVar9 * 4) == (uint)(uVar2 >> 0xb)) goto LAB_008027ec;
          uVar9 = uVar9 + 1;
        } while (DAT_04c8c0f0 != uVar9);
      }
      uVar9 = 0;
LAB_008027ec:
      local_16f0 = (uint)uVar9;
      if (((DAT_04c8c100 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0))
      {
        FUN_00706e58(&DAT_04c8c0f0);
        __cxa_guard_release(&DAT_04c8c100);
      }
      uVar5 = local_16f0;
      if (DAT_04c8c0f0 <= local_16f0) {
        uVar5 = 0;
      }
      if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar5 * 4) != 1) {
        if (((DAT_04c8c100 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04c8c100), iVar7 != 0)) {
          FUN_00706e58(&DAT_04c8c0f0);
          __cxa_guard_release(&DAT_04c8c100);
        }
        uVar5 = local_16f0;
        if (DAT_04c8c0f0 <= local_16f0) {
          uVar5 = 0;
        }
        if ((*(int *)(DAT_04c8c0f8 + (long)(int)uVar5 * 4) != 5) &&
           ((iVar7 = FUN_00802664(&local_16f0), iVar7 != 0x1a || ((*param_1 & 0x780) != 0x80))))
        goto LAB_00802a4c;
      }
      local_16f4[0] = *param_2;
      if (7 < local_16f4[0]) {
        local_16f4[0] = 0xff;
      }
      lVar10 = FUN_025830c0(DAT_055021a0,local_16f4,1);
      if (lVar10 != 0) {
        FUN_007ef010(auStack_2d9a,param_1);
        FUN_007e4920(auStack_2d98,auStack_2d9a);
        if ((*(long **)(lVar10 + 0x178) == (long *)0x0) ||
           (puVar11 = (undefined8 *)**(long **)(lVar10 + 0x178), puVar11 == (undefined8 *)0x0)) {
          uVar5 = 1;
        }
        else {
          uVar5 = (**(code **)*puVar11)();
          uVar5 = uVar5 ^ 1;
        }
        puVar12 = (undefined2 *)FUN_026e85f0(*(long *)(lVar10 + 0x160) + *(long *)(lVar10 + 0x158));
        puVar4 = PTR_DAT_04bb43c0;
        local_2da4 = *puVar12;
        local_2da2 = *(undefined1 *)(puVar12 + 1);
        local_2da1 = *(undefined1 *)((long)puVar12 + 3);
        local_2da0 = *(undefined4 *)(puVar12 + 2);
        lVar13 = *(long *)PTR_DAT_04bb43c0;
        uVar6 = FUN_0277d6c4(&local_2da4);
        if (*(long *)puVar4 == 0) {
LAB_008029fc:
          bVar3 = true;
        }
        else {
          lVar13 = *(long *)(lVar13 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if ((*(uint *)(lVar13 + 0x1d8) <= uVar6) ||
             (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_008029fc;
          FUN_01ad5d04(auStack_2dc0,&local_2da4);
          uVar9 = FUN_01ae887c(auStack_2dc0);
          if ((uVar9 & 1) == 0) goto LAB_008029fc;
          FUN_007f3c20(auStack_2dc8,8);
          bVar1 = *param_2;
          if (7 < bVar1) {
            bVar1 = 0xff;
          }
          FUN_007eef5c(auStack_2dc2,auStack_2dc8,0xffffffff,(int)(char)bVar1);
          FUN_007ef010(auStack_446a,auStack_2dc2);
          FUN_007e4920(auStack_4468,auStack_446a);
          iVar7 = FUN_007e68d0(auStack_2d98);
          iVar8 = FUN_007e68d0(auStack_4468);
          bVar3 = false;
          param_2 = (byte *)(ulong)(iVar7 != iVar8);
        }
        uVar6 = (uint)param_2;
        if ((((uVar5 & 1) == 0) && (*(long *)(lVar10 + 0x178) != 0)) &&
           (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0x178) + 8), puVar11 != (undefined8 *)0x0)
           ) {
          (**(code **)*puVar11)();
        }
        if (!bVar3) goto LAB_00802a50;
      }
    }
  }
LAB_00802a4c:
  uVar6 = 0;
LAB_00802a50:
  return uVar6 & 1;
}

