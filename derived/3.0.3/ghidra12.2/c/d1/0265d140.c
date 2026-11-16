
void FUN_0265d140(undefined1 *param_1,uint param_2,uint param_3,ulong param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  uint uVar14;
  undefined1 local_b4 [4];
  byte local_b0 [4];
  undefined4 local_ac;
  undefined2 local_a8;
  byte local_a4 [4];
  undefined4 local_a0;
  undefined2 local_9c;
  int local_98;
  short sStack_94;
  undefined2 uStack_92;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  int iStack_84;
  undefined8 uStack_80;
  long local_78;
  long lStack_70;
  ulong local_68;
  
  if ((param_4 & 1) == 0) {
    if (((param_2 < 10) && (param_3 < 0xa0)) && (lVar10 = *(long *)PTR_DAT_04bb46b0, lVar10 != 0)) {
      puVar11 = *(undefined8 **)(lVar10 + 0x10);
      if ((*(byte *)(lVar10 + 0x453) & 1) == 0) {
        lVar10 = (**(code **)(*(long *)*puVar11 + 0x38))();
        if (lVar10 == 0) goto LAB_0265d2dc;
        lVar10 = lVar10 + 0x70;
      }
      else if (((puVar11 == (undefined8 *)0x0) || ((long *)puVar11[0x26] == (long *)0x0)) ||
              (lVar10 = (**(code **)(*(long *)puVar11[0x26] + 0x38))(), lVar10 == 0))
      goto LAB_0265d2dc;
      lVar12 = lVar10 + (ulong)param_2 * 0x10798 + (ulong)param_3 * 0xa8;
      lVar10 = lVar12 + 0x39c0;
      plVar13 = *(long **)(lVar12 + 0x39e8);
      goto joined_r0x0265d278;
    }
  }
  else if (((param_2 < 10) && (param_3 < 8)) && (lVar10 = *(long *)PTR_DAT_04bb46b0, lVar10 != 0)) {
    puVar11 = *(undefined8 **)(lVar10 + 0x10);
    if ((*(byte *)(lVar10 + 0x453) & 1) == 0) {
      lVar10 = (**(code **)(*(long *)*puVar11 + 0x38))();
      if (lVar10 == 0) goto LAB_0265d2dc;
      lVar10 = lVar10 + 0x70;
    }
    else if (((puVar11 == (undefined8 *)0x0) || ((long *)puVar11[0x26] == (long *)0x0)) ||
            (lVar10 = (**(code **)(*(long *)puVar11[0x26] + 0x38))(), lVar10 == 0))
    goto LAB_0265d2dc;
    lVar12 = lVar10 + (ulong)param_2 * 0x10798 + (ulong)param_3 * 0x700;
    lVar10 = lVar12 + 0x188;
    plVar13 = *(long **)(lVar12 + 0x1b0);
joined_r0x0265d278:
    if ((plVar13 == (long *)0x0) || ((undefined8 *)*plVar13 == (undefined8 *)0x0)) {
      puVar11 = (undefined8 *)(*(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8));
      local_78 = puVar11[4];
      lStack_70 = puVar11[5];
      local_68 = puVar11[6];
      uVar2 = *puVar11;
      local_98 = (int)uVar2;
      sStack_94 = (short)((ulong)uVar2 >> 0x20);
      uStack_92 = (undefined2)((ulong)uVar2 >> 0x30);
      uStack_90 = (undefined4)puVar11[1];
      uStack_8c = (undefined4)((ulong)puVar11[1] >> 0x20);
      uStack_80 = puVar11[3];
      local_88 = (undefined4)puVar11[2];
      iStack_84 = (int)((ulong)puVar11[2] >> 0x20);
    }
    else {
      uVar8 = (*(code *)**(undefined8 **)*plVar13)();
      puVar11 = (undefined8 *)(*(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8));
      local_78 = puVar11[4];
      lStack_70 = puVar11[5];
      local_68 = puVar11[6];
      uVar2 = *puVar11;
      local_98 = (int)uVar2;
      sStack_94 = (short)((ulong)uVar2 >> 0x20);
      uStack_92 = (undefined2)((ulong)uVar2 >> 0x30);
      uStack_90 = (undefined4)puVar11[1];
      uStack_8c = (undefined4)((ulong)puVar11[1] >> 0x20);
      uStack_80 = puVar11[3];
      local_88 = (undefined4)puVar11[2];
      iStack_84 = (int)((ulong)puVar11[2] >> 0x20);
      if ((((uVar8 & 1) != 0) && (*(long *)(lVar10 + 0x28) != 0)) &&
         (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0x28) + 8), puVar11 != (undefined8 *)0x0)) {
        (**(code **)*puVar11)();
      }
    }
    FUN_02507c6c(local_a4,1,1,0,0);
    sVar6 = sStack_94;
    iVar5 = local_98;
    puVar4 = PTR_DAT_04bb5038;
    puVar3 = PTR_DAT_04bb4f78;
    local_ac = local_a0;
    uVar14 = (uint)local_a4[0];
    local_b0[0] = 0xff;
    if (local_a4[0] < 8) {
      local_b0[0] = local_a4[0];
    }
    local_a8 = local_9c;
    if (local_a4[0] < 8) {
      iVar7 = uStack_80._4_4_;
      do {
        local_b4[0] = (char)uVar14;
        lVar10 = FUN_025830c0(*(undefined8 *)puVar3,local_b4,1);
        if (lVar10 != 0) {
          if (*(long **)(lVar10 + 0x17bb0) == (long *)0x0) {
            uVar8 = 0;
          }
          else {
            puVar11 = (undefined8 *)**(long **)(lVar10 + 0x17bb0);
            uVar8 = 0;
            if (puVar11 != (undefined8 *)0x0) {
              uVar8 = (**(code **)*puVar11)();
            }
          }
          piVar1 = (int *)(*(long *)(lVar10 + 0x17b98) + *(long *)(lVar10 + 0x17b90));
          if ((piVar1[7] == iVar7) &&
             ((local_78 == *(long *)(piVar1 + 8) && lStack_70 == *(long *)(piVar1 + 10)) &&
              (local_68 & 0xffffffff) == (ulong)(uint)piVar1[0xc])) {
            if ((short)piVar1[1] == 0 || sVar6 == 0) {
              if (*piVar1 == iVar5) goto LAB_0265d4b0;
            }
            else if ((*piVar1 == iVar5) &&
                    ((CONCAT44(uStack_90,CONCAT22(uStack_92,sStack_94)) == *(long *)(piVar1 + 1) &&
                     CONCAT44(local_88,uStack_8c) == *(long *)(piVar1 + 3)) &&
                     iStack_84 == piVar1[5])) {
LAB_0265d4b0:
              *param_1 = (char)uVar14;
              if ((uVar8 & 1) == 0) {
                return;
              }
              if (*(long *)(lVar10 + 0x17bb0) == 0) {
                return;
              }
              puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0x17bb0) + 8);
              if (puVar11 == (undefined8 *)0x0) {
                return;
              }
              (**(code **)*puVar11)();
              return;
            }
          }
          if ((((uVar8 & 1) != 0) && (*(long *)(lVar10 + 0x17bb0) != 0)) &&
             (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0x17bb0) + 8),
             puVar11 != (undefined8 *)0x0)) {
            (**(code **)*puVar11)();
          }
        }
        uVar8 = (ulong)uVar14;
        do {
          if (uVar8 == 7) goto LAB_0265d36c;
          uVar8 = uVar8 + 1;
          uVar9 = FUN_02507924(local_b0,puVar4 + uVar8);
        } while ((uVar9 & 1) == 0);
        local_b0[0] = puVar4[uVar8];
        uVar14 = (uint)local_b0[0];
      } while (uVar14 < 8);
    }
LAB_0265d36c:
    *param_1 = 0xff;
    return;
  }
LAB_0265d2dc:
  *param_1 = 0xff;
  return;
}

