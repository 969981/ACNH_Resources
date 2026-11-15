
void FUN_02346fe0(long param_1,undefined1 *param_2)

{
  uint uVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined *puVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  uint *puVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  undefined2 local_8c [2];
  undefined2 local_88 [12];
  undefined1 auStack_70 [16];
  
  *(undefined1 *)(param_1 + 0xc1a8) = *param_2;
  FUN_0234ad28(param_1,param_2[1]);
  FUN_0233aaa8(param_1,param_2[2]);
  *(undefined1 *)(param_1 + 0xc1ab) = param_2[3];
  puVar4 = PTR_DAT_04bb4868;
  lVar11 = *(long *)(param_1 + 0x1150);
  if (lVar11 == 0) {
    *(undefined1 *)(param_1 + 0xc1ac) = param_2[4];
    lVar7 = DAT_04cf00a0;
  }
  else {
    uVar12 = 0xffffffffffff;
    if ((*(long *)(param_1 + 0x1180) != 0) && (*(long *)(param_1 + 0x1160) != 0)) {
      uVar12 = *(ulong *)(*(long *)(param_1 + 0x1180) +
                         (ulong)(4 < *(uint *)(param_1 + 0x1178)) * 0x20);
    }
    if ((((((uint)(uVar12 >> 0x20) ^ 0xffffffff) & 0xffff) == 0) ||
        ((((uint)uVar12 ^ 0xffffffff) & 0xffff) == 0)) ||
       ((((uint)(uVar12 >> 0x10) ^ 0xffffffff) & 0xffff) == 0)) {
      bVar2 = param_2[4];
      *(byte *)(param_1 + 0xc1ac) = bVar2;
      lVar7 = *(long *)puVar4;
    }
    else {
      FUN_0090e5a0(local_88,*(undefined8 *)PTR_DAT_04bb4868);
      plVar6 = (long *)**(undefined8 **)
                         (*(long *)(lVar11 + 0x38) +
                         (-(uVar12 >> 0xf & 1) & 0xfffffffffff80000 | (uVar12 & 0xffff) << 3));
      (**(code **)(*plVar6 + 0x158))
                (plVar6,(int)(short)(uVar12 >> 0x10),(int)(short)(uVar12 >> 0x20),auStack_70);
      bVar2 = param_2[4];
      *(byte *)(param_1 + 0xc1ac) = bVar2;
      lVar11 = *(long *)(param_1 + 0x1150);
      lVar7 = *(long *)puVar4;
      if (lVar11 == 0) goto LAB_0234719c;
    }
    uVar5 = *(uint *)(*(long *)(lVar7 + 0x28) + 0x1c0);
    if ((0 < (int)uVar5) ||
       (((lVar9 = *(long *)(*(long *)(lVar7 + 0x28) + 0xb0), lVar9 != 0 &&
         (puVar10 = *(uint **)(lVar9 + 8), puVar10 != (uint *)0x0)) &&
        (uVar5 = *puVar10, uVar5 != 0)))) {
      uVar13 = 0;
      do {
        if (*(long *)(param_1 + 0x1170) != 0 && *(long *)(param_1 + 0x1160) != 0) {
          uVar1 = uVar13;
          if (*(uint *)(param_1 + 0x1168) <= uVar13) {
            uVar1 = 0;
          }
          uVar1 = *(uint *)(*(long *)(param_1 + 0x1170) + (long)(int)uVar1 * 4);
          if (uVar1 < 0xffff0000 && ((uVar1 ^ 0xffffffff) & 0xffff) != 0) {
            plVar6 = (long *)**(undefined8 **)(*(long *)(lVar11 + 0x38) + (long)(short)uVar1 * 8);
            (**(code **)(*plVar6 + 0x88))
                      (plVar6,(int)uVar1 >> 0x10,
                       bVar2 == uVar13 && *(char *)(param_1 + 0xc1d4) != '\0');
          }
        }
        uVar13 = uVar13 + 1;
      } while (uVar5 != uVar13);
      lVar7 = *(long *)puVar4;
    }
  }
LAB_0234719c:
  *(undefined1 *)(param_1 + 0xc1ad) = param_2[5];
  FUN_0090f270(local_88,lVar7);
  FUN_00764d50(param_1 + 0xbf88,auStack_70);
  FUN_0234b1e8(param_1,param_2[6]);
  FUN_0234b2c4(param_1,param_2[7]);
  FUN_0234b3c8(param_1,param_2[8]);
  uVar3 = *(undefined2 *)(param_2 + 10);
  local_8c[0] = uVar3;
  FUN_007ef010(local_88,local_8c);
  *(undefined2 *)(param_1 + 0xc1b2) = local_88[0];
  if (((1 < *(uint *)(DAT_0537d558 + 0x80)) && (pbVar8 = (byte *)FUN_02335d54(param_1), *pbVar8 < 8)
      ) && ((uVar5 = FUN_02582d8c(pbVar8,1), uVar5 < 8 &&
            ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d4) != '\0' &&
             (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d6) != '\0')))))) {
    *(undefined1 *)(param_1 + 0xc1a2) = 1;
  }
  *(undefined2 *)(param_1 + 0xc120) = uVar3;
  *(undefined2 *)(param_1 + 0xc122) = uVar3;
  *(undefined2 *)(param_1 + 0xc1a0) = 0x101;
  return;
}

