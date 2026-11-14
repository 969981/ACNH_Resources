
void FUN_0154d800(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined2 *puVar5;
  uint uVar6;
  long lVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  uint local_ac;
  undefined *local_a8;
  undefined *puStack_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined8 local_88;
  uint local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar2 = PTR_DAT_04bbc1a0 + 0x10;
  puVar3 = PTR_DAT_04bb2010 + 0x10;
  uVar20 = 0;
  do {
    local_ac = 0;
    lVar7 = param_2 + 0x70 + (ulong)uVar20 * 0x70;
    if (7 < uVar20) {
      lVar7 = param_2 + 0x70;
    }
    lVar4 = lVar7 + 0x38;
    local_7c = uVar20;
    do {
      uVar19 = 0;
      do {
        uVar10 = (**(code **)(*(long *)(lVar7 + 0x38) + 0x18))(lVar4);
        uVar11 = (**(code **)(*(long *)(lVar7 + 0x38) + 0x20))(lVar4);
        uVar6 = local_ac;
        if (uVar10 <= local_ac) {
          uVar6 = 0;
        }
        uVar10 = uVar19;
        if (uVar11 <= uVar19) {
          uVar10 = 0;
        }
        if ((*(long **)(lVar7 + 0x60) == (long *)0x0) ||
           (puVar13 = (undefined8 *)**(long **)(lVar7 + 0x60), puVar13 == (undefined8 *)0x0)) {
          uVar14 = 0;
        }
        else {
          uVar14 = (**(code **)*puVar13)();
          uVar14 = uVar14 & 0xffffffff;
        }
        puVar13 = (undefined8 *)*param_1;
        lVar15 = (**(code **)(*(long *)(lVar7 + 0x38) + 0x28))(lVar4,uVar6,uVar10);
        uVar16 = (**(code **)*puVar13)(puVar13,lVar15 + *(long *)(lVar7 + 0x40));
        if ((uVar16 & 1) != 0) {
          local_98 = 0;
          local_88 = 0;
          local_a8 = puVar2;
          puStack_a0 = puVar3;
          local_90 = puVar3;
          lVar15 = (**(code **)(*(long *)(lVar7 + 0x38) + 0x28))(lVar4,uVar6,uVar10);
          FUN_012e5518(&local_a8,lVar15 + *(long *)(lVar7 + 0x40));
          iVar1 = local_88._4_4_ + 1;
          if (iVar1 != local_98._4_4_) {
            iVar9 = (int)local_98;
            iVar22 = local_98._4_4_;
            iVar21 = (int)local_98;
            do {
              uVar6 = iVar21 + local_ac;
              if ((uVar6 < 0x14) && (uVar10 = iVar22 + uVar19, uVar10 < 0x14)) {
                uVar11 = (**(code **)(*(long *)(lVar7 + 0x38) + 0x18))(lVar4);
                uVar12 = (**(code **)(*(long *)(lVar7 + 0x38) + 0x20))(lVar4);
                lVar15 = *(long *)(lVar7 + 0x60);
                if (uVar11 <= uVar6) {
                  uVar6 = 0;
                }
                if (uVar12 <= uVar10) {
                  uVar10 = 0;
                }
                if ((lVar15 == 0) || (*(undefined8 **)(lVar15 + 0x10) == (undefined8 *)0x0)) {
                  uVar16 = 0;
                  if (iVar22 != 0 || iVar21 != 0) goto LAB_0154dab0;
joined_r0x0154db24:
                  if ((lVar15 != 0) && (*(long *)(lVar15 + 0x20) != 0)) {
                    local_78 = *(undefined8 *)(lVar7 + 0x40);
                    local_70 = (**(code **)(*(long *)(lVar7 + 0x38) + 0x28))(lVar4,uVar6,uVar10);
                    uStack_68 = 8;
                    plVar18 = *(long **)(*(long *)(lVar7 + 0x60) + 0x20);
                    (**(code **)(*plVar18 + 0x20))(plVar18,&local_78);
                  }
                  lVar15 = (**(code **)(*(long *)(lVar7 + 0x38) + 0x28))(lVar4,uVar6,uVar10);
                  puVar8 = PTR_DAT_04bb37e0;
                  puVar5 = (undefined2 *)(lVar15 + *(long *)(lVar7 + 0x40));
                  *puVar5 = *(undefined2 *)PTR_DAT_04bb37e0;
                  *(undefined *)(puVar5 + 1) = puVar8[2];
                  *(undefined *)((long)puVar5 + 3) = puVar8[3];
                  *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(puVar8 + 4);
                }
                else {
                  uVar16 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
                  lVar15 = *(long *)(lVar7 + 0x60);
                  uVar16 = uVar16 & 0xffffffff;
                  if (iVar22 == 0 && iVar21 == 0) goto joined_r0x0154db24;
LAB_0154dab0:
                  if ((lVar15 != 0) && (*(long *)(lVar15 + 0x20) != 0)) {
                    local_78 = *(undefined8 *)(lVar7 + 0x40);
                    local_70 = (**(code **)(*(long *)(lVar7 + 0x38) + 0x28))(lVar4,uVar6,uVar10);
                    uStack_68 = 8;
                    plVar18 = *(long **)(*(long *)(lVar7 + 0x60) + 0x20);
                    (**(code **)(*plVar18 + 0x20))(plVar18,&local_78);
                  }
                  lVar15 = (**(code **)(*(long *)(lVar7 + 0x38) + 0x28))(lVar4,uVar6,uVar10);
                  uVar17 = FUN_0277da10(lVar15 + *(long *)(lVar7 + 0x40));
                  if ((uVar17 & 1) == 0) {
                    lVar15 = *(long *)(lVar7 + 0x60);
                    goto joined_r0x0154db24;
                  }
                }
                if ((((uVar16 & 1) != 0) && (*(long *)(lVar7 + 0x60) != 0)) &&
                   (puVar13 = *(undefined8 **)(*(long *)(lVar7 + 0x60) + 0x18),
                   puVar13 != (undefined8 *)0x0)) {
                  (**(code **)*puVar13)();
                }
              }
              if (iVar21 < (int)local_88) {
                iVar21 = iVar21 + 1;
              }
              else {
                iVar22 = iVar22 + 1;
                iVar21 = (int)local_98;
              }
            } while (iVar9 != iVar21 || iVar1 != iVar22);
          }
        }
        if ((((uVar14 & 1) != 0) && (*(long *)(lVar7 + 0x60) != 0)) &&
           (puVar13 = *(undefined8 **)(*(long *)(lVar7 + 0x60) + 8), puVar13 != (undefined8 *)0x0))
        {
          (**(code **)*puVar13)();
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 != 0x14);
      local_ac = local_ac + 1;
    } while (local_ac != 0x14);
    uVar19 = 8;
    if ((int)uVar20 < 8) {
      uVar19 = uVar20 + 1;
    }
    uVar20 = uVar19;
    if (uVar19 == 8) {
      return;
    }
  } while( true );
}

