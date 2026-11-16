
void FUN_025725d8(long param_1,undefined4 *param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  long *plVar5;
  ushort uVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  uint *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 uStack_48;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_50 = &DAT_3f8000003f800000;
  uStack_48 = 0x3f800000;
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(param_2);
  lVar12 = *(long *)puVar3;
  if (lVar12 == 0) goto switchD_025727a4_caseD_e;
  lVar13 = *(long *)(lVar13 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
  if ((*(uint *)(lVar13 + 0x1d8) <= uVar4) ||
     (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar4 * 8) == 0))
  goto switchD_025727a4_caseD_e;
  local_58 = 0;
  local_60 = *param_2;
  uStack_5c = param_2[1];
  uVar4 = FUN_0277d6c4(&local_60);
  if (*(long *)puVar3 == 0) {
LAB_02572778:
    uVar6 = 0x21;
  }
  else {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((*(uint *)(lVar12 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_02572778;
    lVar12 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(param_2);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((*(uint *)(lVar12 + 0x1d8) <= uVar4) ||
       (puVar8 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8), puVar8 == (uint *)0x0
       )) goto LAB_02572778;
    uVar4 = *puVar8;
    uVar6 = 0;
    if ((uVar4 != 0) && (puVar8 != (uint *)(ulong)uVar4)) {
      puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
      uVar6 = 0;
      if (*puVar10 != 0) {
        uVar4 = puVar10[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar12 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar10 + lVar12 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar12 != 0) {
            uVar2 = 0;
            if ((ulong)uVar4 != 0) {
              uVar2 = (uint)((ulong)((long)puVar8 - lVar12) / (ulong)uVar4);
            }
            if (*puVar10 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326af0) &&
               (uVar6 = *(ushort *)(DAT_05326af8 + (long)(int)uVar2 * 2), uVar6 < 0xa2))
            goto LAB_0257277c;
          }
        }
        uVar6 = 0;
      }
    }
  }
LAB_0257277c:
  switch(uVar6) {
  case 10:
    local_50 = (undefined1 *)0x3f800000;
    break;
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x14:
    local_50 = (undefined1 *)0x0;
    uStack_48 = 0;
  default:
switchD_025727a4_caseD_e:
    lVar12 = *(long *)(param_1 + 0x60);
    if (lVar12 == 0) {
      return;
    }
    goto LAB_025727b4;
  case 0x15:
    local_50 = &DAT_3f8000003f800000;
  }
  uStack_48 = 0;
  lVar12 = *(long *)(param_1 + 0x60);
  if (lVar12 != 0) {
LAB_025727b4:
    lVar13 = *(long *)(lVar12 + 0x1150);
    if (lVar13 != 0) {
      lVar7 = *(long *)(lVar12 + 0x1180);
      uVar11 = 0xffffffffffff;
      lVar9 = *(long *)(lVar12 + 0x1160);
      if ((lVar7 != 0) && (lVar9 != 0)) {
        lVar1 = 0x28;
        if (*(uint *)(lVar12 + 0x1178) < 6) {
          lVar1 = 0;
        }
        uVar11 = *(ulong *)(lVar7 + lVar1);
      }
      if ((((((uint)(uVar11 >> 0x20) ^ 0xffffffff) & 0xffff) != 0) &&
          ((((uint)uVar11 ^ 0xffffffff) & 0xffff) != 0)) &&
         ((((uint)(uVar11 >> 0x10) ^ 0xffffffff) & 0xffff) != 0)) {
        plVar5 = (long *)**(undefined8 **)
                           (*(long *)(lVar13 + 0x38) +
                           (-(uVar11 >> 0xf & 1) & 0xfffffffffff80000 | (uVar11 & 0xffff) << 3));
        (**(code **)(*plVar5 + 0x158))
                  (plVar5,(int)(short)(uVar11 >> 0x10),(int)(short)(uVar11 >> 0x20),&local_50);
        lVar7 = *(long *)(lVar12 + 0x1180);
        lVar9 = *(long *)(lVar12 + 0x1160);
      }
      uVar11 = 0xffffffffffff;
      if ((lVar7 != 0) && (lVar9 != 0)) {
        lVar9 = 0x30;
        if (*(uint *)(lVar12 + 0x1178) < 7) {
          lVar9 = 0;
        }
        uVar11 = *(ulong *)(lVar7 + lVar9);
      }
      if ((((((uint)(uVar11 >> 0x20) ^ 0xffffffff) & 0xffff) != 0) &&
          ((((uint)uVar11 ^ 0xffffffff) & 0xffff) != 0)) &&
         ((((uint)(uVar11 >> 0x10) ^ 0xffffffff) & 0xffff) != 0)) {
        plVar5 = (long *)**(undefined8 **)
                           (*(long *)(lVar13 + 0x38) +
                           (-(uVar11 >> 0xf & 1) & 0xfffffffffff80000 | (uVar11 & 0xffff) << 3));
        (**(code **)(*plVar5 + 0x158))
                  (plVar5,(int)(short)(uVar11 >> 0x10),(int)(short)(uVar11 >> 0x20),&local_50);
      }
    }
  }
  return;
}

