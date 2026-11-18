
void FUN_036c7820(long *param_1)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  ushort uVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  long *plVar12;
  ushort uVar13;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) & 0xfffc;
  puVar3 = PTR_DAT_04bb2720;
  lVar9 = *(long *)PTR_DAT_04bb2720;
  if ((lVar9 != 0) && (*(long *)(lVar9 + 0x330) != 0)) {
    puVar6 = (undefined8 *)
             (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar9 + 0x338));
    iVar5 = FUN_006bd550(*puVar6,0);
    uVar11 = 0;
    if (iVar5 != 0x758f7eaf) goto LAB_036c78c0;
    if ((*(long *)puVar3 != 0) && (lVar9 = *(long *)(*(long *)puVar3 + 0x330), lVar9 != 0)) {
      uVar11 = *(uint *)(lVar9 + 0x248);
      goto LAB_036c78c0;
    }
  }
  uVar11 = 0;
LAB_036c78c0:
  uVar4 = 2;
  if ((int)param_1[3] != 0) {
    plVar12 = (long *)param_1[4];
    lVar9 = (long)(int)param_1[3] << 3;
    uVar13 = 1;
    do {
      lVar10 = *plVar12;
      uVar2 = *(uint *)(lVar10 + 0x90);
      if (uVar11 == uVar2) {
        uVar4 = (**(code **)(*param_1 + 0x18))(param_1,*(undefined4 *)(lVar10 + 0x98));
        uVar2 = *(uint *)(lVar10 + 0x90);
        *(byte *)(lVar10 + 0x9c) = (byte)uVar4 & 1;
        iVar5 = *(int *)((long)param_1 + 0xc);
        local_78 = CONCAT44(local_78._4_4_,iVar5);
        if (((iVar5 != 5) && (iVar5 != 6)) && (lVar10 = FUN_03776400(), lVar10 != 0)) {
          lVar1 = lVar10 + 0x70 + (ulong)uVar2 * 0x658;
          if (2 < uVar2) {
            lVar1 = lVar10 + 0x70;
          }
          lVar10 = *(long *)(lVar1 + 0x28);
          if (lVar10 == 0) {
            uVar7 = 0;
          }
          else {
            if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
              uVar7 = 0;
              plVar8 = *(long **)(lVar10 + 0x20);
            }
            else {
              uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
              uVar7 = uVar7 & 0xffffffff;
              if (*(long *)(lVar1 + 0x28) == 0) goto LAB_036c7a70;
              plVar8 = *(long **)(*(long *)(lVar1 + 0x28) + 0x20);
            }
            if (plVar8 != (long *)0x0) {
              local_78 = *(undefined8 *)(lVar1 + 8);
              uStack_70 = *(undefined8 *)(lVar1 + 0x10);
              local_68 = 0x155c;
              (**(code **)(*plVar8 + 0x20))(plVar8,&local_78);
            }
          }
LAB_036c7a70:
          local_78 = CONCAT44(local_78._4_4_,2);
          lVar10 = *(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8);
          if ((uVar4 & 1) == 0) {
            *(ushort *)(lVar10 + 0x153c) = *(ushort *)(lVar10 + 0x153c) & 0xfffb;
          }
          else {
            *(ushort *)(lVar10 + 0x153c) = *(ushort *)(lVar10 + 0x153c) | 4;
          }
          if ((((uVar7 & 1) != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
             (puVar6 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 0x18), puVar6 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar6)();
          }
        }
        *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) & 0xfffe | uVar4 & 1;
      }
      else {
        local_78 = CONCAT44(local_78._4_4_,*(int *)((long)param_1 + 0xc));
        if ((*(int *)((long)param_1 + 0xc) == 5) || (lVar10 = FUN_03776680(), lVar10 == 0)) {
          uVar4 = 0;
        }
        else {
          lVar1 = lVar10 + 0x70 + (ulong)uVar2 * 0x658;
          if (2 < uVar2) {
            lVar1 = lVar10 + 0x70;
          }
          if (*(long **)(lVar1 + 0x28) == (long *)0x0) {
            uVar7 = 0;
          }
          else {
            puVar6 = (undefined8 *)**(long **)(lVar1 + 0x28);
            uVar7 = 0;
            if (puVar6 != (undefined8 *)0x0) {
              uVar7 = (**(code **)*puVar6)();
            }
          }
          local_78 = CONCAT44(local_78._4_4_,2);
          uVar4 = *(ushort *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x153c) >> 2 & 1;
          if ((((uVar7 & 1) != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
             (puVar6 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 8), puVar6 != (undefined8 *)0x0))
          {
            (**(code **)*puVar6)();
          }
        }
      }
      uVar13 = uVar13 & uVar4;
      plVar12 = plVar12 + 1;
      lVar9 = lVar9 + -8;
    } while (lVar9 != 0);
    uVar4 = 2;
    if (uVar13 == 0) {
      uVar4 = 0;
    }
  }
  *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) & 0xfffd | uVar4;
  return;
}

