
/* WARNING: Removing unreachable block (ram,0x03760598) */
/* WARNING: Removing unreachable block (ram,0x03760688) */

void FUN_03760540(short param_1)

{
  int iVar1;
  short sVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  short *psVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  long local_68;
  long lStack_60;
  undefined8 local_58;
  
  puVar3 = PTR_DAT_04bb46b0;
  if (param_1 == -1) {
    return;
  }
  lVar12 = *(long *)PTR_DAT_04bb46b0;
  if (lVar12 == 0) {
    lVar12 = 0;
    lVar4 = lRam0000000000000060;
    if (lRam0000000000000060 != 0) goto LAB_037605f0;
LAB_037605cc:
    uVar5 = 0;
  }
  else {
    local_68 = CONCAT44(local_68._4_4_,1);
    if (((*(byte *)(lVar12 + 0x50d) ^ 0xff) & 6) == 0) {
      lVar4 = (**(code **)(**(long **)(*(long *)(lVar12 + 0x10) + 0x188) + 0x30))();
    }
    else {
      lVar4 = 0;
    }
    lVar12 = 0;
    if (lVar4 != 0) {
      lVar12 = lVar4 + 0x365f8;
    }
    lVar4 = *(long *)(lVar12 + 0x60);
    if (*(long *)(lVar12 + 0x60) == 0) goto LAB_037605cc;
LAB_037605f0:
    if (*(undefined8 **)(lVar4 + 0x10) == (undefined8 *)0x0) {
      uVar5 = 0;
      plVar6 = *(long **)(lVar4 + 0x20);
joined_r0x037606b8:
      if (plVar6 != (long *)0x0) {
        local_68 = *(long *)(lVar12 + 0x40);
        lStack_60 = *(long *)(lVar12 + 0x48);
        local_58 = 0x490c;
        (**(code **)(*plVar6 + 0x20))(plVar6,&local_68);
      }
    }
    else {
      uVar5 = (**(code **)**(undefined8 **)(lVar4 + 0x10))();
      uVar5 = uVar5 & 0xffffffff;
      if (*(long *)(lVar12 + 0x60) != 0) {
        plVar6 = *(long **)(*(long *)(lVar12 + 0x60) + 0x20);
        goto joined_r0x037606b8;
      }
    }
  }
  lVar4 = *(long *)(lVar12 + 0x48) + *(long *)(lVar12 + 0x40);
  sVar2 = *(short *)(lVar4 + 0x4904);
  if (sVar2 == -1) goto LAB_037608d8;
  iVar1 = *(int *)(lVar4 + 0x4900);
  uVar18 = *(uint *)(lVar4 + 0x48fc);
  lVar4 = *(long *)puVar3;
  if (lVar4 == 0) {
    lVar4 = 0;
    lVar7 = lRam0000000000000450;
    if (lRam0000000000000450 != 0) goto LAB_037606f4;
LAB_037606cc:
    uVar8 = 0;
    if (0x14 < uVar18) {
      uVar18 = 0;
    }
  }
  else {
    local_68 = CONCAT44(local_68._4_4_,1);
    if (((*(byte *)(lVar4 + 0x50d) ^ 0xff) & 6) == 0) {
      lVar7 = (**(code **)(**(long **)(*(long *)(lVar4 + 0x10) + 0x188) + 0x30))();
    }
    else {
      lVar7 = 0;
    }
    lVar4 = 0;
    if (lVar7 != 0) {
      lVar4 = lVar7 + 0xa8;
    }
    lVar7 = *(long *)(lVar4 + 0x450);
    if (*(long *)(lVar4 + 0x450) == 0) goto LAB_037606cc;
LAB_037606f4:
    if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
      uVar8 = 0;
      if (0x14 < uVar18) {
        uVar18 = 0;
      }
      plVar6 = *(long **)(lVar7 + 0x20);
joined_r0x03760810:
      if (plVar6 != (long *)0x0) {
        local_68 = *(long *)(lVar4 + 0x430);
        lStack_60 = *(long *)(lVar4 + 0x438);
        local_58 = 0x297e8;
        (**(code **)(*plVar6 + 0x20))(plVar6,&local_68);
      }
    }
    else {
      uVar8 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      uVar8 = uVar8 & 0xffffffff;
      if (0x14 < uVar18) {
        uVar18 = 0;
      }
      if (*(long *)(lVar4 + 0x450) != 0) {
        plVar6 = *(long **)(*(long *)(lVar4 + 0x450) + 0x20);
        goto joined_r0x03760810;
      }
    }
  }
  uVar11 = 0;
  iVar15 = 0;
  iVar16 = 0;
  lVar7 = lVar4 + 0x498;
  local_68 = CONCAT44(local_68._4_4_,uVar18);
  do {
    uVar17 = (uint)*(ushort *)
                    (*(long *)(lVar4 + 0x438) + *(long *)(lVar4 + 0x430) + (long)iVar16 * 0x1178 + 6
                    );
    if (0x14 < uVar17) {
      uVar17 = 0;
    }
    if (uVar18 == uVar17) {
      if (iVar15 == iVar1) {
        if (0x25 < uVar11) {
          lVar7 = lVar4 + 0x498;
        }
        lVar13 = *(long *)(lVar7 + 0x28);
        if (lVar13 == 0) {
          uVar9 = 0;
        }
        else {
          if (*(undefined8 **)(lVar13 + 0x10) == (undefined8 *)0x0) {
            uVar9 = 0;
          }
          else {
            uVar9 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
            lVar13 = *(long *)(lVar7 + 0x28);
            uVar9 = uVar9 & 0xffffffff;
            if (lVar13 == 0) goto LAB_0376084c;
          }
          plVar6 = *(long **)(lVar13 + 0x20);
          if (plVar6 != (long *)0x0) {
            local_68 = *(long *)(lVar7 + 8);
            lStack_60 = *(long *)(lVar7 + 0x10);
            local_58 = 0x1178;
            (**(code **)(*plVar6 + 0x20))(plVar6,&local_68);
          }
        }
LAB_0376084c:
        psVar14 = (short *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8));
        if (*psVar14 == sVar2) {
          if ((*(long *)(lVar7 + 0x28) != 0) &&
             (plVar6 = *(long **)(*(long *)(lVar7 + 0x28) + 0x20), plVar6 != (long *)0x0)) {
            local_58 = 0x1178;
            local_68 = *(long *)(lVar7 + 8);
            lStack_60 = *(long *)(lVar7 + 0x10);
            (**(code **)(*plVar6 + 0x20))(plVar6,&local_68);
            psVar14 = (short *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8));
          }
          *psVar14 = param_1;
        }
        if ((((uVar9 & 1) != 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
           (puVar10 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 0x18), puVar10 != (undefined8 *)0x0
           )) {
          (**(code **)*puVar10)();
        }
        break;
      }
      iVar15 = iVar15 + 1;
    }
    uVar11 = uVar11 + 1;
    iVar16 = iVar16 + 1;
    lVar7 = lVar7 + 0x16c0;
  } while (uVar11 != 0x26);
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar4 + 0x450) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar4 + 0x450) + 0x18), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
LAB_037608d8:
  if ((*(long *)(lVar12 + 0x60) != 0) &&
     (plVar6 = *(long **)(*(long *)(lVar12 + 0x60) + 0x20), plVar6 != (long *)0x0)) {
    local_68 = *(long *)(lVar12 + 0x40);
    lStack_60 = *(long *)(lVar12 + 0x48);
    local_58 = 0x490c;
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_68);
  }
  lVar4 = *(long *)(lVar12 + 0x48) + *(long *)(lVar12 + 0x40);
  *(undefined2 *)(lVar4 + 0x4904) = 0xffff;
  *(undefined8 *)(lVar4 + 0x48fc) = 0;
  if ((((uVar5 & 1) != 0) && (*(long *)(lVar12 + 0x60) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar12 + 0x60) + 0x18), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
  return;
}

