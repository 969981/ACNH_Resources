
/* WARNING: Type propagation algorithm not settling */

void FUN_02586300(long param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  bool bVar5;
  undefined *puVar6;
  undefined1 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  byte bVar15;
  byte local_64 [4];
  undefined4 local_60;
  undefined2 local_5c;
  undefined8 local_58;
  long local_50;
  ulong local_48;
  
  if (7 < *(byte *)(param_1 + 8)) {
    return;
  }
  FUN_02507c6c(&local_58,1,1,0,0);
  puVar6 = PTR_DAT_04bb5038;
  local_60 = local_58._4_4_;
  local_64[0] = (byte)local_58;
  if (7 < (byte)local_58) {
    local_64[0] = 0xff;
  }
  local_5c = (undefined2)local_50;
  if (7 < (byte)local_58) {
    return;
  }
  bVar2 = *(byte *)(param_1 + 8);
  bVar15 = bVar2;
  if (7 < bVar2) {
    bVar15 = 0xff;
  }
  bVar4 = (byte)local_58;
  if (bVar15 != (byte)local_58) {
    do {
      uVar13 = (ulong)bVar4;
      do {
        if (uVar13 == 7) {
          return;
        }
        uVar13 = uVar13 + 1;
        uVar8 = FUN_02507924(local_64,puVar6 + uVar13);
      } while ((uVar8 & 1) == 0);
      local_64[0] = puVar6[uVar13];
      if (7 < local_64[0]) {
        return;
      }
      bVar2 = *(byte *)(param_1 + 8);
      bVar15 = bVar2;
      if (7 < bVar2) {
        bVar15 = 0xff;
      }
      bVar4 = local_64[0];
    } while (bVar15 != local_64[0]);
  }
  if ((*(uint *)(DAT_0537d558 + 0x10) < 2) ||
     (lVar14 = *DAT_0537d558, *(byte *)(lVar14 + 0x476) < 2)) {
LAB_025863dc:
    bVar3 = false;
    bVar5 = false;
  }
  else if (*(int *)(lVar14 + 0x508) == 0 || *(char *)(lVar14 + 0x55d) == '\0') {
    if ((*(int *)(DAT_05358908 + 0x78) == 0) || (*(int *)(DAT_05358908 + 0xc4) != 0))
    goto LAB_025863dc;
    bVar3 = true;
    bVar5 = false;
  }
  else {
    bVar3 = false;
    bVar5 = true;
  }
  iVar1 = *param_2;
  if (iVar1 != 2) {
    if (iVar1 != 1) {
      if (iVar1 != 0) {
        return;
      }
      if ((char)param_2[1] == '\0') {
        if (!bVar3) {
          if (bVar5) {
            uVar11 = 2;
          }
          else {
            uVar11 = 0;
          }
          FUN_02586ca8(param_1,uVar11);
          return;
        }
        if (bVar2 < 8) {
          local_58 = (undefined **)CONCAT71(local_58._1_7_,bVar2);
          lVar14 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_58,1);
        }
        else {
          if (*(int *)(param_1 + 0xc) == -1) {
            return;
          }
          if (DAT_05574040 == 0) {
            return;
          }
          lVar14 = FUN_026eec4c();
        }
        if (lVar14 == 0) {
          return;
        }
        lVar12 = lVar14 + 0x194b0;
        if (*(long *)(lVar14 + 0x194b8) == 0) {
          lVar12 = *(long *)(DAT_05574040 + 0x20);
        }
        local_48 = local_48 & 0xffffffffffffff00;
        lVar14 = lVar12 + 0x2a930;
        local_50 = lVar14;
        if (*(long *)(lVar12 + 0x2a958) == 0) {
          uVar7 = 0;
        }
        else {
          puVar10 = *(undefined8 **)(*(long *)(lVar12 + 0x2a958) + 0x10);
          uVar7 = 0;
          if (puVar10 != (undefined8 *)0x0) {
            uVar7 = (**(code **)*puVar10)();
          }
        }
        local_48 = CONCAT62(local_48._2_6_,CONCAT11(uVar7,(undefined1)local_48)) &
                   0xffffffffffff01ff;
        local_58 = &PTR_FUN_04a85210;
        FUN_02640280(lVar14,0x80);
        lVar14 = *(long *)(lVar12 + 0x2a940) + *(long *)(lVar12 + 0x2a938);
        *(int *)(lVar14 + 0x10) = *(int *)(lVar14 + 0x10) + 1;
        goto LAB_02586c88;
      }
      if (bVar2 < 8) {
        local_58 = (undefined **)CONCAT71(local_58._1_7_,bVar2);
        lVar14 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_58,1);
LAB_025866b4:
        if (lVar14 == 0) goto LAB_025866e4;
        lVar12 = lVar14 + 0x194b0;
        if (*(long *)(lVar14 + 0x194b8) == 0) {
          lVar12 = *(long *)(DAT_05574040 + 0x20);
        }
        lVar12 = lVar12 + 0x2a690;
      }
      else {
        if ((*(int *)(param_1 + 0xc) != -1) && (DAT_05574040 != 0)) {
          lVar14 = FUN_026eec4c();
          goto LAB_025866b4;
        }
LAB_025866e4:
        lVar12 = 0;
      }
      if (bVar3) {
        if (lVar12 == 0) {
          return;
        }
        lVar14 = *(long *)(lVar12 + 0x2c8);
        if (lVar14 == 0) {
          lVar14 = *(long *)(lVar12 + 0x2b0) + *(long *)(lVar12 + 0x2a8);
          *(int *)(lVar14 + 0x40) = *(int *)(lVar14 + 0x40) + 1;
          return;
        }
        if (*(undefined8 **)(lVar14 + 0x10) == (undefined8 *)0x0) {
          uVar13 = 0;
LAB_02586a78:
          plVar9 = *(long **)(lVar14 + 0x20);
          if (plVar9 != (long *)0x0) {
            local_58 = *(undefined ***)(lVar12 + 0x2a8);
            local_50 = *(undefined8 *)(lVar12 + 0x2b0);
            local_48 = 0x80;
            (**(code **)(*plVar9 + 0x20))(plVar9,&local_58);
          }
        }
        else {
          uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
          lVar14 = *(long *)(lVar12 + 0x2c8);
          uVar13 = uVar13 & 0xffffffff;
          if (lVar14 != 0) goto LAB_02586a78;
        }
        lVar14 = *(long *)(lVar12 + 0x2b0) + *(long *)(lVar12 + 0x2a8);
        *(int *)(lVar14 + 0x40) = *(int *)(lVar14 + 0x40) + 1;
        goto joined_r0x0258699c;
      }
      if (lVar12 == 0) {
        return;
      }
      lVar14 = *(long *)(lVar12 + 0x2c8);
      if (lVar14 == 0) {
        lVar14 = *(long *)(lVar12 + 0x2b0) + *(long *)(lVar12 + 0x2a8);
        *(int *)(lVar14 + 0x38) = *(int *)(lVar14 + 0x38) + 1;
        return;
      }
      if (*(undefined8 **)(lVar14 + 0x10) == (undefined8 *)0x0) {
        uVar13 = 0;
LAB_02586b68:
        plVar9 = *(long **)(lVar14 + 0x20);
        if (plVar9 != (long *)0x0) {
          local_58 = *(undefined ***)(lVar12 + 0x2a8);
          local_50 = *(undefined8 *)(lVar12 + 0x2b0);
          local_48 = 0x80;
          (**(code **)(*plVar9 + 0x20))(plVar9,&local_58);
        }
      }
      else {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        lVar14 = *(long *)(lVar12 + 0x2c8);
        uVar13 = uVar13 & 0xffffffff;
        if (lVar14 != 0) goto LAB_02586b68;
      }
      lVar14 = *(long *)(lVar12 + 0x2b0) + *(long *)(lVar12 + 0x2a8);
      *(int *)(lVar14 + 0x38) = *(int *)(lVar14 + 0x38) + 1;
      goto joined_r0x0258699c;
    }
    iVar1 = param_2[1];
    if (bVar2 < 8) {
      local_58 = (undefined **)CONCAT71(local_58._1_7_,bVar2);
      lVar14 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_58,1);
LAB_02586594:
      if (lVar14 == 0) goto LAB_025865c4;
      lVar12 = lVar14 + 0x194b0;
      if (*(long *)(lVar14 + 0x194b8) == 0) {
        lVar12 = *(long *)(DAT_05574040 + 0x20);
      }
      lVar12 = lVar12 + 0x2a690;
    }
    else {
      if ((*(int *)(param_1 + 0xc) != -1) && (DAT_05574040 != 0)) {
        lVar14 = FUN_026eec4c();
        goto LAB_02586594;
      }
LAB_025865c4:
      lVar12 = 0;
    }
    if ((char)iVar1 == '\0') {
      if (bVar3) {
        if (lVar12 == 0) {
          return;
        }
        lVar14 = lVar12 + 0x2a0;
        local_48 = (ulong)local_48._1_7_ << 8;
        local_50 = lVar14;
        if (*(long *)(lVar12 + 0x2c8) == 0) {
          uVar7 = 0;
        }
        else {
          puVar10 = *(undefined8 **)(*(long *)(lVar12 + 0x2c8) + 0x10);
          uVar7 = 0;
          if (puVar10 != (undefined8 *)0x0) {
            uVar7 = (**(code **)*puVar10)();
          }
        }
        local_48 = CONCAT62(local_48._2_6_,CONCAT11(uVar7,(undefined1)local_48)) &
                   0xffffffffffff01ff;
        local_58 = &PTR_FUN_04a85210;
        FUN_02640280(lVar14,0x80);
        lVar14 = *(long *)(lVar12 + 0x2b0) + *(long *)(lVar12 + 0x2a8);
        *(int *)(lVar14 + 0x20) = *(int *)(lVar14 + 0x20) + 1;
      }
      else {
        if (lVar12 == 0) {
          return;
        }
        lVar14 = lVar12 + 0x2a0;
        local_48 = (ulong)local_48._1_7_ << 8;
        local_50 = lVar14;
        if (*(long *)(lVar12 + 0x2c8) == 0) {
          uVar7 = 0;
        }
        else {
          puVar10 = *(undefined8 **)(*(long *)(lVar12 + 0x2c8) + 0x10);
          uVar7 = 0;
          if (puVar10 != (undefined8 *)0x0) {
            uVar7 = (**(code **)*puVar10)();
          }
        }
        local_48 = CONCAT62(local_48._2_6_,CONCAT11(uVar7,(undefined1)local_48)) &
                   0xffffffffffff01ff;
        local_58 = &PTR_FUN_04a85210;
        FUN_02640280(lVar14,0x80);
        lVar14 = *(long *)(lVar12 + 0x2b0) + *(long *)(lVar12 + 0x2a8);
        *(int *)(lVar14 + 0x18) = *(int *)(lVar14 + 0x18) + 1;
      }
      goto LAB_02586c88;
    }
    if (!bVar3) {
      if (lVar12 == 0) {
        return;
      }
      lVar14 = *(long *)(lVar12 + 0x2c8);
      if (lVar14 == 0) {
        lVar14 = *(long *)(lVar12 + 0x2b0) + *(long *)(lVar12 + 0x2a8);
        *(int *)(lVar14 + 0x48) = *(int *)(lVar14 + 0x48) + 1;
        return;
      }
      if (*(undefined8 **)(lVar14 + 0x10) == (undefined8 *)0x0) {
        uVar13 = 0;
LAB_02586b18:
        plVar9 = *(long **)(lVar14 + 0x20);
        if (plVar9 != (long *)0x0) {
          local_58 = *(undefined ***)(lVar12 + 0x2a8);
          local_50 = *(undefined8 *)(lVar12 + 0x2b0);
          local_48 = 0x80;
          (**(code **)(*plVar9 + 0x20))(plVar9,&local_58);
        }
      }
      else {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        lVar14 = *(long *)(lVar12 + 0x2c8);
        uVar13 = uVar13 & 0xffffffff;
        if (lVar14 != 0) goto LAB_02586b18;
      }
      lVar14 = *(long *)(lVar12 + 0x2b0) + *(long *)(lVar12 + 0x2a8);
      *(int *)(lVar14 + 0x48) = *(int *)(lVar14 + 0x48) + 1;
      goto joined_r0x0258699c;
    }
    if (lVar12 == 0) {
      return;
    }
    lVar14 = *(long *)(lVar12 + 0x2c8);
    if (lVar14 == 0) {
      lVar14 = *(long *)(lVar12 + 0x2b0) + *(long *)(lVar12 + 0x2a8);
      *(int *)(lVar14 + 0x50) = *(int *)(lVar14 + 0x50) + 1;
      return;
    }
    if (*(undefined8 **)(lVar14 + 0x10) == (undefined8 *)0x0) {
      uVar13 = 0;
LAB_025869a8:
      plVar9 = *(long **)(lVar14 + 0x20);
      if (plVar9 != (long *)0x0) {
        local_58 = *(undefined ***)(lVar12 + 0x2a8);
        local_50 = *(undefined8 *)(lVar12 + 0x2b0);
        local_48 = 0x80;
        (**(code **)(*plVar9 + 0x20))(plVar9,&local_58);
      }
    }
    else {
      uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      lVar14 = *(long *)(lVar12 + 0x2c8);
      uVar13 = uVar13 & 0xffffffff;
      if (lVar14 != 0) goto LAB_025869a8;
    }
    lVar14 = *(long *)(lVar12 + 0x2b0) + *(long *)(lVar12 + 0x2a8);
    *(int *)(lVar14 + 0x50) = *(int *)(lVar14 + 0x50) + 1;
    goto joined_r0x0258699c;
  }
  iVar1 = param_2[1];
  if (bVar2 < 8) {
    local_58 = (undefined **)CONCAT71(local_58._1_7_,bVar2);
    lVar14 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_58,1);
LAB_02586508:
    if (lVar14 == 0) goto LAB_02586538;
    lVar12 = lVar14 + 0x194b0;
    if (*(long *)(lVar14 + 0x194b8) == 0) {
      lVar12 = *(long *)(DAT_05574040 + 0x20);
    }
    lVar12 = lVar12 + 0x2a690;
  }
  else {
    if ((*(int *)(param_1 + 0xc) != -1) && (DAT_05574040 != 0)) {
      lVar14 = FUN_026eec4c();
      goto LAB_02586508;
    }
LAB_02586538:
    lVar12 = 0;
  }
  if ((char)iVar1 == '\0') {
    if (bVar3) {
      if (lVar12 == 0) {
        return;
      }
      lVar14 = lVar12 + 0x2a0;
      local_48 = (ulong)local_48._1_7_ << 8;
      local_50 = lVar14;
      if (*(long *)(lVar12 + 0x2c8) == 0) {
        uVar7 = 0;
      }
      else {
        puVar10 = *(undefined8 **)(*(long *)(lVar12 + 0x2c8) + 0x10);
        uVar7 = 0;
        if (puVar10 != (undefined8 *)0x0) {
          uVar7 = (**(code **)*puVar10)();
        }
      }
      local_48 = CONCAT62(local_48._2_6_,CONCAT11(uVar7,(undefined1)local_48)) & 0xffffffffffff01ff;
      local_58 = &PTR_FUN_04a85210;
      FUN_02640280(lVar14,0x80);
      lVar14 = *(long *)(lVar12 + 0x2b0) + *(long *)(lVar12 + 0x2a8);
      *(int *)(lVar14 + 0x30) = *(int *)(lVar14 + 0x30) + 1;
    }
    else {
      if (lVar12 == 0) {
        return;
      }
      lVar14 = lVar12 + 0x2a0;
      local_48 = (ulong)local_48._1_7_ << 8;
      local_50 = lVar14;
      if (*(long *)(lVar12 + 0x2c8) == 0) {
        uVar7 = 0;
      }
      else {
        puVar10 = *(undefined8 **)(*(long *)(lVar12 + 0x2c8) + 0x10);
        uVar7 = 0;
        if (puVar10 != (undefined8 *)0x0) {
          uVar7 = (**(code **)*puVar10)();
        }
      }
      local_48 = CONCAT62(local_48._2_6_,CONCAT11(uVar7,(undefined1)local_48)) & 0xffffffffffff01ff;
      local_58 = &PTR_FUN_04a85210;
      FUN_02640280(lVar14,0x80);
      lVar14 = *(long *)(lVar12 + 0x2b0) + *(long *)(lVar12 + 0x2a8);
      *(int *)(lVar14 + 0x28) = *(int *)(lVar14 + 0x28) + 1;
    }
LAB_02586c88:
    FUN_02640184(&local_58);
    return;
  }
  if (!bVar3) {
    if (lVar12 == 0) {
      return;
    }
    lVar14 = *(long *)(lVar12 + 0x2c8);
    if (lVar14 == 0) {
      lVar14 = *(long *)(lVar12 + 0x2b0) + *(long *)(lVar12 + 0x2a8);
      *(int *)(lVar14 + 0x58) = *(int *)(lVar14 + 0x58) + 1;
      return;
    }
    if (*(undefined8 **)(lVar14 + 0x10) == (undefined8 *)0x0) {
      uVar13 = 0;
LAB_02586ac8:
      plVar9 = *(long **)(lVar14 + 0x20);
      if (plVar9 != (long *)0x0) {
        local_58 = *(undefined ***)(lVar12 + 0x2a8);
        local_50 = *(undefined8 *)(lVar12 + 0x2b0);
        local_48 = 0x80;
        (**(code **)(*plVar9 + 0x20))(plVar9,&local_58);
      }
    }
    else {
      uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      lVar14 = *(long *)(lVar12 + 0x2c8);
      uVar13 = uVar13 & 0xffffffff;
      if (lVar14 != 0) goto LAB_02586ac8;
    }
    lVar14 = *(long *)(lVar12 + 0x2b0) + *(long *)(lVar12 + 0x2a8);
    *(int *)(lVar14 + 0x58) = *(int *)(lVar14 + 0x58) + 1;
    goto joined_r0x0258699c;
  }
  if (lVar12 == 0) {
    return;
  }
  lVar14 = *(long *)(lVar12 + 0x2c8);
  if (lVar14 == 0) {
    lVar14 = *(long *)(lVar12 + 0x2b0) + *(long *)(lVar12 + 0x2a8);
    *(int *)(lVar14 + 0x60) = *(int *)(lVar14 + 0x60) + 1;
    return;
  }
  if (*(undefined8 **)(lVar14 + 0x10) == (undefined8 *)0x0) {
    uVar13 = 0;
LAB_02586958:
    plVar9 = *(long **)(lVar14 + 0x20);
    if (plVar9 != (long *)0x0) {
      local_58 = *(undefined ***)(lVar12 + 0x2a8);
      local_50 = *(undefined8 *)(lVar12 + 0x2b0);
      local_48 = 0x80;
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_58);
    }
  }
  else {
    uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
    lVar14 = *(long *)(lVar12 + 0x2c8);
    uVar13 = uVar13 & 0xffffffff;
    if (lVar14 != 0) goto LAB_02586958;
  }
  lVar14 = *(long *)(lVar12 + 0x2b0) + *(long *)(lVar12 + 0x2a8);
  *(int *)(lVar14 + 0x60) = *(int *)(lVar14 + 0x60) + 1;
joined_r0x0258699c:
  if ((((uVar13 & 1) != 0) && (*(long *)(lVar12 + 0x2c8) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar12 + 0x2c8) + 0x18), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
  return;
}

