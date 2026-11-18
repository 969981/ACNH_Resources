
/* WARNING: Removing unreachable block (ram,0x0377e23c) */

void FUN_0377e1f0(undefined8 param_1,long *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  short *psVar5;
  long *plVar6;
  ushort uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  
  lVar8 = *(long *)PTR_DAT_04bb46b0;
  if (lVar8 != 0) {
    local_58 = CONCAT44(local_58._4_4_,1);
    if ((((*(byte *)(lVar8 + 0x50d) ^ 0xff) & 6) == 0) &&
       (lVar8 = (**(code **)(**(long **)(*(long *)(lVar8 + 0x10) + 0x188) + 0x30))(), lVar8 != 0)) {
      if ((*(long **)(lVar8 + 0x36620) == (long *)0x0) ||
         (puVar2 = (undefined8 *)**(long **)(lVar8 + 0x36620), puVar2 == (undefined8 *)0x0)) {
        uVar3 = 0;
      }
      else {
        uVar3 = (**(code **)*puVar2)();
        uVar3 = uVar3 & 0xffffffff;
      }
      uVar4 = FUN_029066e0(*(long *)(lVar8 + 0x36608) + *(long *)(lVar8 + 0x36600),param_1);
      if ((((uVar3 & 1) != 0) && (*(long *)(lVar8 + 0x36620) != 0)) &&
         (puVar2 = *(undefined8 **)(*(long *)(lVar8 + 0x36620) + 8), puVar2 != (undefined8 *)0x0)) {
        (**(code **)*puVar2)();
      }
      if ((uVar4 & 1) != 0) {
        lVar9 = *(long *)(lVar8 + 0x37c70);
        if (lVar9 == 0) {
          uVar3 = 0;
        }
        else {
          if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
            uVar3 = 0;
          }
          else {
            uVar3 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
            lVar9 = *(long *)(lVar8 + 0x37c70);
            uVar3 = uVar3 & 0xffffffff;
            if (lVar9 == 0) goto LAB_0377e4d8;
          }
          plVar6 = *(long **)(lVar9 + 0x20);
          if (plVar6 != (long *)0x0) {
            local_58 = *(undefined8 *)(lVar8 + 0x37c50);
            local_50 = *(undefined8 *)(lVar8 + 0x37c58);
            local_48 = 0x40;
            (**(code **)(*plVar6 + 0x20))(plVar6,&local_58);
          }
        }
LAB_0377e4d8:
        lVar9 = *(long *)(lVar8 + 0x37c50);
        lVar10 = *(long *)(lVar8 + 0x37c58);
        psVar5 = (short *)(**(code **)(*param_2 + 0x18))(param_2);
        iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
        uVar7 = 0;
        if ((psVar5 != (short *)0x0) && (iVar1 != 0)) {
          uVar7 = (ushort)(*psVar5 != 0);
        }
        *(ushort *)(lVar9 + lVar10) = *(ushort *)(lVar9 + lVar10) & 0xfffe | uVar7;
        lVar9 = *(long *)(lVar8 + 0x37c70);
        if ((uVar3 & 1) == 0) {
LAB_0377e550:
          if (lVar9 != 0) goto LAB_0377e554;
LAB_0377e578:
          uVar3 = 0;
        }
        else {
          if (lVar9 == 0) goto LAB_0377e578;
          if (*(undefined8 **)(lVar9 + 0x18) != (undefined8 *)0x0) {
            (**(code **)**(undefined8 **)(lVar9 + 0x18))();
            lVar9 = *(long *)(lVar8 + 0x37c70);
            goto LAB_0377e550;
          }
LAB_0377e554:
          if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
            uVar3 = 0;
          }
          else {
            uVar3 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
            lVar9 = *(long *)(lVar8 + 0x37c70);
            uVar3 = uVar3 & 0xffffffff;
            if (lVar9 == 0) goto LAB_0377e5b0;
          }
          plVar6 = *(long **)(lVar9 + 0x20);
          if (plVar6 != (long *)0x0) {
            local_58 = *(undefined8 *)(lVar8 + 0x37c50);
            local_50 = *(undefined8 *)(lVar8 + 0x37c58);
            local_48 = 0x40;
            (**(code **)(*plVar6 + 0x20))(plVar6,&local_58);
          }
        }
LAB_0377e5b0:
        local_50 = *(long *)(lVar8 + 0x37c58) + *(long *)(lVar8 + 0x37c50) + 4;
        local_58 = CONCAT44(local_58._4_4_,0x17);
        FUN_02906c90(&local_58,param_2);
        if ((uVar3 & 1) == 0) {
          return;
        }
        lVar8 = *(long *)(lVar8 + 0x37c70);
        goto joined_r0x0377e484;
      }
    }
  }
  lVar8 = FUN_03762b90(param_1);
  if (lVar8 == 0) {
    return;
  }
  lVar9 = *(long *)(lVar8 + 0x1758);
  if (lVar9 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
      uVar3 = 0;
      plVar6 = *(long **)(lVar9 + 0x20);
    }
    else {
      uVar3 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      uVar3 = uVar3 & 0xffffffff;
      if (*(long *)(lVar8 + 0x1758) == 0) goto LAB_0377e374;
      plVar6 = *(long **)(*(long *)(lVar8 + 0x1758) + 0x20);
    }
    if (plVar6 != (long *)0x0) {
      local_58 = *(undefined8 *)(lVar8 + 0x1738);
      local_50 = *(undefined8 *)(lVar8 + 0x1740);
      local_48 = 0x40;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_58);
    }
  }
LAB_0377e374:
  lVar9 = *(long *)(lVar8 + 0x1738);
  lVar10 = *(long *)(lVar8 + 0x1740);
  psVar5 = (short *)(**(code **)(*param_2 + 0x18))(param_2);
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  uVar7 = 0;
  if ((psVar5 != (short *)0x0) && (iVar1 != 0)) {
    uVar7 = (ushort)(*psVar5 != 0);
  }
  *(ushort *)(lVar9 + lVar10) = *(ushort *)(lVar9 + lVar10) & 0xfffe | uVar7;
  lVar9 = *(long *)(lVar8 + 0x1758);
  if ((uVar3 & 1) == 0) {
LAB_0377e3ec:
    if (lVar9 != 0) goto LAB_0377e3f0;
LAB_0377e41c:
    uVar3 = 0;
  }
  else {
    if (lVar9 == 0) goto LAB_0377e41c;
    if (*(undefined8 **)(lVar9 + 0x18) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      lVar9 = *(long *)(lVar8 + 0x1758);
      goto LAB_0377e3ec;
    }
LAB_0377e3f0:
    if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
      uVar3 = 0;
      plVar6 = *(long **)(lVar9 + 0x20);
    }
    else {
      uVar3 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      uVar3 = uVar3 & 0xffffffff;
      if (*(long *)(lVar8 + 0x1758) == 0) goto LAB_0377e454;
      plVar6 = *(long **)(*(long *)(lVar8 + 0x1758) + 0x20);
    }
    if (plVar6 != (long *)0x0) {
      local_58 = *(undefined8 *)(lVar8 + 0x1738);
      local_50 = *(undefined8 *)(lVar8 + 0x1740);
      local_48 = 0x40;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_58);
    }
  }
LAB_0377e454:
  local_50 = *(long *)(lVar8 + 0x1740) + *(long *)(lVar8 + 0x1738) + 4;
  local_58 = CONCAT44(local_58._4_4_,0x17);
  FUN_02906c90(&local_58,param_2);
  if ((uVar3 & 1) == 0) {
    return;
  }
  lVar8 = *(long *)(lVar8 + 0x1758);
joined_r0x0377e484:
  if ((lVar8 != 0) && (*(undefined8 **)(lVar8 + 0x18) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(lVar8 + 0x18))();
  }
  return;
}

