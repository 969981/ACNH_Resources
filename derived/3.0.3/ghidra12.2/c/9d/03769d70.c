
/* WARNING: Removing unreachable block (ram,0x03769f44) */
/* WARNING: Removing unreachable block (ram,0x03769dd4) */
/* WARNING: Removing unreachable block (ram,0x03769e80) */

void FUN_03769d70(uint *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ushort uVar11;
  ushort uVar12;
  undefined *local_48;
  long local_40;
  ulong local_38;
  
  uVar2 = *param_1;
  uVar1 = uVar2 & 0xe000;
  if (uVar1 == 0) {
    if (DAT_05574040 == 0) {
      return;
    }
    local_48 = (undefined *)CONCAT44(local_48._4_4_,1);
    if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0) {
      return;
    }
    uVar1 = (uVar2 & 0xffff) >> 3 & 0x3ff;
    lVar5 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))();
    if (499 < uVar1) {
      return;
    }
    if (lVar5 == 0) {
      return;
    }
    lVar5 = lVar5 + (ulong)uVar1 * 0x2d48;
    lVar10 = lVar5 + 0x4e378;
    lVar9 = *(long *)(lVar5 + 0x4e3a0);
    if (lVar9 == 0) {
LAB_0376a168:
      uVar7 = 0;
    }
    else {
      if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
        lVar9 = *(long *)(lVar5 + 0x4e3a0);
        uVar7 = uVar7 & 0xffffffff;
        if (lVar9 == 0) goto LAB_0376a16c;
      }
      plVar8 = *(long **)(lVar9 + 0x20);
      if (plVar8 != (long *)0x0) {
        local_48 = *(undefined **)(lVar5 + 0x4e380);
        local_40 = *(undefined8 *)(lVar5 + 0x4e388);
        local_38 = 0x48b0;
        goto LAB_0376a050;
      }
    }
LAB_0376a16c:
    lVar5 = *(long *)(lVar10 + 8);
    lVar9 = *(long *)(lVar10 + 0x10);
    uVar12 = 4;
    uVar11 = *(ushort *)(lVar9 + lVar5) & 0xfffb;
LAB_0376a180:
    if ((param_2 & 1) == 0) {
      uVar12 = 0;
    }
    *(ushort *)(lVar9 + lVar5) = uVar11 | uVar12;
    if ((uVar7 & 1) == 0) {
      return;
    }
    lVar5 = *(long *)(lVar10 + 0x28);
  }
  else {
    if (uVar1 == 0x2000) {
      uVar1 = uVar2 >> 3 & 0x3ff;
      if (6 < uVar1) {
        return;
      }
      if (uVar1 == 5) {
        return;
      }
      if (DAT_05574040 == 0) {
        return;
      }
      local_48 = (undefined *)CONCAT44(local_48._4_4_,1);
      if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0) {
        return;
      }
      lVar10 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))();
      if (lVar10 == 0) {
        return;
      }
      switch(uVar1) {
      case 0:
        lVar10 = lVar10 + 0x390a0;
        break;
      case 1:
        lVar10 = lVar10 + 0x3a488;
        break;
      case 2:
        lVar10 = lVar10 + 0x3b870;
        break;
      case 3:
        lVar10 = lVar10 + 0x3cc58;
        break;
      case 4:
        lVar10 = lVar10 + 0x3e040;
        break;
      default:
        goto switchD_03769f8c_default;
      }
      if ((*param_1 & 7) != 1) {
        if ((*param_1 & 7) != 0) {
          return;
        }
        lVar5 = *(long *)(lVar10 + 0x28);
        if (lVar5 == 0) goto LAB_0376a168;
        if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
          lVar5 = *(long *)(lVar10 + 0x28);
          uVar7 = uVar7 & 0xffffffff;
          if (lVar5 == 0) goto LAB_0376a16c;
        }
        plVar8 = *(long **)(lVar5 + 0x20);
        if (plVar8 == (long *)0x0) goto LAB_0376a16c;
        local_48 = *(undefined **)(lVar10 + 8);
        local_40 = *(undefined8 *)(lVar10 + 0x10);
        local_38 = 0x408c;
LAB_0376a050:
        (**(code **)(*plVar8 + 0x20))(plVar8,&local_48);
        goto LAB_0376a16c;
      }
      lVar5 = *(long *)(lVar10 + 0x28);
      if (lVar5 == 0) {
        uVar7 = 0;
      }
      else {
        if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
          lVar5 = *(long *)(lVar10 + 0x28);
          uVar7 = uVar7 & 0xffffffff;
          if (lVar5 == 0) goto LAB_0376a2dc;
        }
        plVar8 = *(long **)(lVar5 + 0x20);
        if (plVar8 != (long *)0x0) {
          local_48 = *(undefined **)(lVar10 + 8);
          local_40 = *(undefined8 *)(lVar10 + 0x10);
          local_38 = 0x408c;
          (**(code **)(*plVar8 + 0x20))(plVar8,&local_48);
        }
      }
LAB_0376a2dc:
      lVar5 = *(long *)(lVar10 + 8);
      lVar9 = *(long *)(lVar10 + 0x10);
      uVar12 = 8;
      uVar11 = *(ushort *)(lVar9 + lVar5) & 0xfff7;
      goto LAB_0376a180;
    }
    if (uVar1 != 0xa000) {
      return;
    }
    if (DAT_05574040 == 0) {
      return;
    }
    local_48 = (undefined *)CONCAT44(local_48._4_4_,1);
    if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0) {
      return;
    }
    lVar5 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))();
    if (lVar5 == 0) {
      return;
    }
    if ((*(long **)(lVar5 + 0x36620) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x36620), puVar6 == (undefined8 *)0x0)) {
      cVar3 = *(char *)(*(long *)(lVar5 + 0x36608) + *(long *)(lVar5 + 0x36600));
    }
    else {
      uVar7 = (**(code **)*puVar6)();
      cVar3 = *(char *)(*(long *)(lVar5 + 0x36608) + *(long *)(lVar5 + 0x36600));
      if ((((uVar7 & 1) != 0) && (*(long *)(lVar5 + 0x36620) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x36620) + 8), puVar6 != (undefined8 *)0x0)) {
        (**(code **)*puVar6)();
      }
    }
    if (cVar3 != '\x01') {
      if (cVar3 != '\x02') {
        return;
      }
      if ((*param_1 & 7) == 1) {
        local_38 = (ulong)local_38._1_7_ << 8;
        lVar10 = lVar5 + 0x37cb8;
        local_40 = lVar10;
        if (*(long *)(lVar5 + 0x37ce0) == 0) {
          uVar4 = 0;
        }
        else {
          puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x37ce0) + 0x10);
          uVar4 = 0;
          if (puVar6 != (undefined8 *)0x0) {
            uVar4 = (**(code **)*puVar6)();
          }
        }
        local_38 = CONCAT62(local_38._2_6_,CONCAT11(uVar4,(undefined1)local_38)) &
                   0xffffffffffff01ff;
        local_48 = PTR_DAT_04bc11d8 + 0x10;
        FUN_02640280(lVar10,0x408c);
        lVar10 = *(long *)(lVar5 + 0x37cc0);
        uVar12 = 8;
        lVar5 = *(long *)(lVar5 + 0x37cc8);
        uVar11 = *(ushort *)(lVar5 + lVar10) & 0xfff7;
      }
      else {
        if ((*param_1 & 7) != 0) {
          return;
        }
        local_38 = (ulong)local_38._1_7_ << 8;
        lVar10 = lVar5 + 0x37cb8;
        local_40 = lVar10;
        if (*(long *)(lVar5 + 0x37ce0) == 0) {
          uVar4 = 0;
        }
        else {
          puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x37ce0) + 0x10);
          uVar4 = 0;
          if (puVar6 != (undefined8 *)0x0) {
            uVar4 = (**(code **)*puVar6)();
          }
        }
        local_38 = CONCAT62(local_38._2_6_,CONCAT11(uVar4,(undefined1)local_38)) &
                   0xffffffffffff01ff;
        local_48 = PTR_DAT_04bc11d8 + 0x10;
        FUN_02640280(lVar10,0x408c);
        lVar10 = *(long *)(lVar5 + 0x37cc0);
        uVar12 = 4;
        lVar5 = *(long *)(lVar5 + 0x37cc8);
        uVar11 = *(ushort *)(lVar5 + lVar10) & 0xfffb;
      }
      if ((param_2 & 1) == 0) {
        uVar12 = 0;
      }
      *(ushort *)(lVar5 + lVar10) = uVar11 | uVar12;
      FUN_02640184(&local_48);
      return;
    }
    lVar10 = *(long *)(lVar5 + 0x36690);
    if (lVar10 == 0) {
      uVar7 = 0;
    }
    else {
      if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
        lVar10 = *(long *)(lVar5 + 0x36690);
        uVar7 = uVar7 & 0xffffffff;
        if (lVar10 == 0) goto LAB_0376a09c;
      }
      plVar8 = *(long **)(lVar10 + 0x20);
      if (plVar8 != (long *)0x0) {
        local_48 = *(undefined **)(lVar5 + 0x36670);
        local_40 = *(undefined8 *)(lVar5 + 0x36678);
        local_38 = 0x48b0;
        (**(code **)(*plVar8 + 0x20))(plVar8,&local_48);
      }
    }
LAB_0376a09c:
    uVar11 = 4;
    if ((param_2 & 1) == 0) {
      uVar11 = 0;
    }
    *(ushort *)(*(long *)(lVar5 + 0x36678) + *(long *)(lVar5 + 0x36670)) =
         *(ushort *)(*(long *)(lVar5 + 0x36678) + *(long *)(lVar5 + 0x36670)) & 0xfffb | uVar11;
    if ((uVar7 & 1) == 0) {
      return;
    }
    lVar5 = *(long *)(lVar5 + 0x36690);
  }
  if ((lVar5 != 0) && (*(undefined8 **)(lVar5 + 0x18) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(lVar5 + 0x18))();
  }
switchD_03769f8c_default:
  return;
}

