
/* WARNING: Removing unreachable block (ram,0x03781f94) */
/* WARNING: Removing unreachable block (ram,0x03781ee8) */
/* WARNING: Removing unreachable block (ram,0x03782050) */
/* WARNING: Removing unreachable block (ram,0x0378221c) */

void FUN_03781e80(uint *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ushort *puVar11;
  long lVar12;
  ushort uVar13;
  ushort uVar14;
  undefined *local_58;
  long local_50;
  ulong local_48;
  
  uVar2 = *param_1;
  uVar1 = uVar2 & 0xe000;
  if (uVar1 != 0) {
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
      local_58 = (undefined *)CONCAT44(local_58._4_4_,1);
      if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0) {
        return;
      }
      lVar5 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))();
      if (lVar5 == 0) {
        return;
      }
      switch(uVar1) {
      case 0:
        lVar5 = lVar5 + 0x390a0;
        break;
      case 1:
        lVar5 = lVar5 + 0x3a488;
        break;
      case 2:
        lVar5 = lVar5 + 0x3b870;
        break;
      case 3:
        lVar5 = lVar5 + 0x3cc58;
        break;
      case 4:
        lVar5 = lVar5 + 0x3e040;
        break;
      default:
        return;
      }
      if ((*param_1 & 7) == 1) {
        lVar10 = *(long *)(lVar5 + 0x28);
        if (lVar10 == 0) {
          uVar7 = 0;
        }
        else {
          if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
            uVar7 = 0;
          }
          else {
            uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
            lVar10 = *(long *)(lVar5 + 0x28);
            uVar7 = uVar7 & 0xffffffff;
            if (lVar10 == 0) goto LAB_037825f8;
          }
          plVar9 = *(long **)(lVar10 + 0x20);
          if (plVar9 != (long *)0x0) {
            local_58 = *(undefined **)(lVar5 + 8);
            local_50 = *(long *)(lVar5 + 0x10);
            local_48 = 0x408c;
            (**(code **)(*plVar9 + 0x20))(plVar9,&local_58);
          }
        }
LAB_037825f8:
        lVar10 = *(long *)(lVar5 + 8);
        lVar12 = *(long *)(lVar5 + 0x10);
        uVar14 = 8;
        uVar13 = *(ushort *)(lVar12 + lVar10) & 0xfff7;
      }
      else {
        if ((*param_1 & 7) != 0) {
          return;
        }
        lVar10 = *(long *)(lVar5 + 0x28);
        if (lVar10 == 0) {
          uVar7 = 0;
        }
        else {
          if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
            uVar7 = 0;
          }
          else {
            uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
            lVar10 = *(long *)(lVar5 + 0x28);
            uVar7 = uVar7 & 0xffffffff;
            if (lVar10 == 0) goto LAB_037825b4;
          }
          plVar9 = *(long **)(lVar10 + 0x20);
          if (plVar9 != (long *)0x0) {
            local_58 = *(undefined **)(lVar5 + 8);
            local_50 = *(long *)(lVar5 + 0x10);
            local_48 = 0x408c;
            (**(code **)(*plVar9 + 0x20))(plVar9,&local_58);
          }
        }
LAB_037825b4:
        lVar10 = *(long *)(lVar5 + 8);
        lVar12 = *(long *)(lVar5 + 0x10);
        uVar14 = 4;
        uVar13 = *(ushort *)(lVar12 + lVar10) & 0xfffb;
      }
      if ((param_2 & 1) == 0) {
        uVar14 = 0;
      }
      *(ushort *)(lVar12 + lVar10) = uVar13 | uVar14;
      if ((uVar7 & 1) == 0) {
        return;
      }
      lVar5 = *(long *)(lVar5 + 0x28);
      goto joined_r0x03782620;
    }
    if (uVar1 != 0xa000) {
      return;
    }
    if (DAT_05574040 == 0) {
      return;
    }
    local_58 = (undefined *)CONCAT44(local_58._4_4_,1);
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
        local_48 = (ulong)local_48._1_7_ << 8;
        lVar10 = lVar5 + 0x37cb8;
        local_50 = lVar10;
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
        local_48 = CONCAT62(local_48._2_6_,CONCAT11(uVar4,(undefined1)local_48)) &
                   0xffffffffffff01ff;
        local_58 = PTR_DAT_04bc11d8 + 0x10;
        FUN_02640280(lVar10,0x408c);
        lVar10 = *(long *)(lVar5 + 0x37cc0);
        uVar14 = 8;
        lVar5 = *(long *)(lVar5 + 0x37cc8);
        uVar13 = *(ushort *)(lVar5 + lVar10) & 0xfff7;
      }
      else {
        if ((*param_1 & 7) != 0) {
          return;
        }
        local_48 = (ulong)local_48._1_7_ << 8;
        lVar10 = lVar5 + 0x37cb8;
        local_50 = lVar10;
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
        local_48 = CONCAT62(local_48._2_6_,CONCAT11(uVar4,(undefined1)local_48)) &
                   0xffffffffffff01ff;
        local_58 = PTR_DAT_04bc11d8 + 0x10;
        FUN_02640280(lVar10,0x408c);
        lVar10 = *(long *)(lVar5 + 0x37cc0);
        uVar14 = 4;
        lVar5 = *(long *)(lVar5 + 0x37cc8);
        uVar13 = *(ushort *)(lVar5 + lVar10) & 0xfffb;
      }
      if ((param_2 & 1) == 0) {
        uVar14 = 0;
      }
      *(ushort *)(lVar5 + lVar10) = uVar13 | uVar14;
      FUN_02640184(&local_58);
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
        if (lVar10 == 0) goto LAB_037822d0;
      }
      plVar9 = *(long **)(lVar10 + 0x20);
      if (plVar9 != (long *)0x0) {
        local_58 = *(undefined **)(lVar5 + 0x36670);
        local_50 = *(long *)(lVar5 + 0x36678);
        local_48 = 0x48b0;
        (**(code **)(*plVar9 + 0x20))(plVar9,&local_58);
      }
    }
LAB_037822d0:
    uVar13 = 4;
    if ((param_2 & 1) == 0) {
      uVar13 = 0;
    }
    *(ushort *)(*(long *)(lVar5 + 0x36678) + *(long *)(lVar5 + 0x36670)) =
         *(ushort *)(*(long *)(lVar5 + 0x36678) + *(long *)(lVar5 + 0x36670)) & 0xfffb | uVar13;
    if ((uVar7 & 1) == 0) {
      return;
    }
    lVar5 = *(long *)(lVar5 + 0x36690);
    goto joined_r0x03782620;
  }
  if (DAT_05574040 == 0) {
    return;
  }
  local_58 = (undefined *)CONCAT44(local_58._4_4_,1);
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
  lVar10 = *(long *)(lVar5 + 0x4cc70);
  if (lVar10 == 0) {
    uVar7 = 0;
  }
  else {
    if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      lVar10 = *(long *)(lVar5 + 0x4cc70);
      uVar7 = uVar7 & 0xffffffff;
      if (lVar10 == 0) goto LAB_03782174;
    }
    plVar9 = *(long **)(lVar10 + 0x20);
    if (plVar9 != (long *)0x0) {
      local_58 = *(undefined **)(lVar5 + 0x4cc50);
      local_50 = *(long *)(lVar5 + 0x4cc58);
      local_48 = 0x1188;
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_58);
    }
  }
LAB_03782174:
  puVar11 = (ushort *)(*(undefined **)(lVar5 + 0x4cc50) + *(long *)(lVar5 + 0x4cc58));
  if (puVar11[2] == 0xffff || (*puVar11 & 1) != 0) {
    lVar10 = *(long *)(lVar5 + 0x4e3a0);
    if (lVar10 == 0) {
      uVar8 = 0;
    }
    else {
      if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
        lVar10 = *(long *)(lVar5 + 0x4e3a0);
        uVar8 = uVar8 & 0xffffffff;
        if (lVar10 == 0) goto LAB_03782330;
      }
      plVar9 = *(long **)(lVar10 + 0x20);
      if (plVar9 != (long *)0x0) {
        local_58 = *(undefined **)(lVar5 + 0x4e380);
        local_50 = *(long *)(lVar5 + 0x4e388);
        local_48 = 0x48b0;
        (**(code **)(*plVar9 + 0x20))(plVar9,&local_58);
      }
    }
LAB_03782330:
    uVar13 = 4;
    if ((param_2 & 1) == 0) {
      uVar13 = 0;
    }
    *(ushort *)(*(long *)(lVar5 + 0x4e388) + *(long *)(lVar5 + 0x4e380)) =
         *(ushort *)(*(long *)(lVar5 + 0x4e388) + *(long *)(lVar5 + 0x4e380)) & 0xfffb | uVar13;
    if ((uVar8 & 1) != 0) {
      lVar10 = *(long *)(lVar5 + 0x4e3a0);
joined_r0x0378254c:
      if ((lVar10 != 0) && (*(undefined8 **)(lVar10 + 0x18) != (undefined8 *)0x0)) {
        (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      }
    }
  }
  else {
    if ((*(long *)(lVar5 + 0x4cc70) != 0) &&
       (plVar9 = *(long **)(*(long *)(lVar5 + 0x4cc70) + 0x20), plVar9 != (long *)0x0)) {
      local_48 = 0x1188;
      local_58 = *(undefined **)(lVar5 + 0x4cc50);
      local_50 = *(long *)(lVar5 + 0x4cc58);
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_58);
      puVar11 = (ushort *)(*(long *)(lVar5 + 0x4cc58) + *(long *)(lVar5 + 0x4cc50));
    }
    if (DAT_05574040 != 0) {
      uVar13 = puVar11[2];
      local_58 = (undefined *)CONCAT44(local_58._4_4_,1);
      if ((((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) &&
         (lVar10 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))(),
         uVar13 < 500 && lVar10 != 0)) {
        lVar10 = lVar10 + (ulong)uVar13 * 0x2d48;
        lVar12 = *(long *)(lVar10 + 0x4e3a0);
        if (lVar12 == 0) {
          uVar8 = 0;
        }
        else {
          if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
            uVar8 = 0;
          }
          else {
            uVar8 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
            lVar12 = *(long *)(lVar10 + 0x4e3a0);
            uVar8 = uVar8 & 0xffffffff;
            if (lVar12 == 0) goto LAB_03782524;
          }
          plVar9 = *(long **)(lVar12 + 0x20);
          if (plVar9 != (long *)0x0) {
            local_58 = *(undefined **)(lVar10 + 0x4e380);
            local_50 = *(long *)(lVar10 + 0x4e388);
            local_48 = 0x48b0;
            (**(code **)(*plVar9 + 0x20))(plVar9,&local_58);
          }
        }
LAB_03782524:
        uVar13 = 4;
        if ((param_2 & 1) == 0) {
          uVar13 = 0;
        }
        *(ushort *)(*(long *)(lVar10 + 0x4e388) + *(long *)(lVar10 + 0x4e380)) =
             *(ushort *)(*(long *)(lVar10 + 0x4e388) + *(long *)(lVar10 + 0x4e380)) & 0xfffb |
             uVar13;
        if ((uVar8 & 1) != 0) {
          lVar10 = *(long *)(lVar10 + 0x4e3a0);
          goto joined_r0x0378254c;
        }
      }
    }
  }
  if ((uVar7 & 1) == 0) {
    return;
  }
  lVar5 = *(long *)(lVar5 + 0x4cc70);
joined_r0x03782620:
  if ((lVar5 != 0) && (*(undefined8 **)(lVar5 + 0x18) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(lVar5 + 0x18))();
  }
  return;
}

