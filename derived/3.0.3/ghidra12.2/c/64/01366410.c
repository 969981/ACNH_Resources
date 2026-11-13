
void FUN_01366410(void)

{
  long lVar1;
  undefined2 uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  short *psVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  uint local_a0;
  undefined *local_98;
  undefined2 local_90;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined8 local_70;
  
  puVar3 = PTR_DAT_04bb46b0;
  lVar6 = *(long *)PTR_DAT_04bb46b0;
  if (lVar6 == 0) {
LAB_01366488:
    lVar6 = 0;
  }
  else {
    puVar7 = *(undefined8 **)(lVar6 + 0x10);
    if ((*(byte *)(lVar6 + 0x453) & 1) == 0) {
      lVar4 = (**(code **)(*(long *)*puVar7 + 0x38))();
      lVar6 = 0;
      if (lVar4 != 0) {
        lVar6 = lVar4 + 0x70;
      }
    }
    else {
      if (puVar7 == (undefined8 *)0x0) goto LAB_01366488;
      lVar6 = 0;
      if ((long *)puVar7[0x26] != (long *)0x0) {
        lVar6 = (**(code **)(*(long *)puVar7[0x26] + 0x38))();
      }
    }
  }
  if (*(long **)(lVar6 + 0xe7648) == (long *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar7 = (undefined8 *)**(long **)(lVar6 + 0xe7648);
    uVar5 = 0;
    if (puVar7 != (undefined8 *)0x0) {
      uVar5 = (**(code **)*puVar7)();
    }
  }
  uVar2 = *(undefined2 *)(*(long *)(lVar6 + 0xe7630) + *(long *)(lVar6 + 0xe7628) + 0x10063e);
  if ((((uVar5 & 1) != 0) && (*(long *)(lVar6 + 0xe7648) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0xe7648) + 8), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  lVar6 = *(long *)puVar3;
  if (lVar6 != 0) {
    puVar7 = *(undefined8 **)(lVar6 + 0x10);
    if ((*(byte *)(lVar6 + 0x453) & 1) == 0) {
      lVar4 = (**(code **)(*(long *)*puVar7 + 0x38))();
      lVar6 = 0;
      if (lVar4 != 0) {
        lVar6 = lVar4 + 0x70;
      }
      goto LAB_01366540;
    }
    if (puVar7 != (undefined8 *)0x0) {
      lVar6 = 0;
      if ((long *)puVar7[0x26] != (long *)0x0) {
        lVar6 = (**(code **)(*(long *)puVar7[0x26] + 0x38))();
      }
      goto LAB_01366540;
    }
  }
  lVar6 = 0;
LAB_01366540:
  if ((*(long **)(&LAB_00116d20 + lVar6) == (long *)0x0) ||
     (puVar7 = (undefined8 *)**(long **)(&LAB_00116d20 + lVar6), puVar7 == (undefined8 *)0x0)) {
    local_a0 = 0;
  }
  else {
    local_a0 = (**(code **)*puVar7)();
  }
  puVar3 = PTR_DAT_04bb2720;
  lVar4 = 0;
  lVar1 = *(long *)(lVar6 + 0x116d08) + *(long *)(lVar6 + 0x116d00);
  psVar9 = (short *)(lVar1 + 8);
  do {
    uVar11 = (undefined4)lVar4;
    if ((lVar1 != 0) && (psVar9[-4] != 0)) {
      local_70 = 0;
      local_88 = (undefined *)0x0;
      if (*(long *)puVar3 != 0) {
        lVar8 = *(long *)(*(long *)puVar3 + 0x330);
        local_88 = (undefined *)0x0;
        if (lVar8 != 0) {
          local_88 = *(undefined **)(lVar8 + 0xd0);
        }
      }
      local_80 = (undefined *)(lVar4 << 0x20);
      local_78 = (code *)CONCAT62(local_78._2_6_,psVar9[-4]);
      FUN_0133bcb0(&local_98,&local_88);
    }
    if (psVar9[-3] != 0) {
      local_70 = 0;
      local_88 = (undefined *)0x0;
      if (*(long *)puVar3 != 0) {
        lVar8 = *(long *)(*(long *)puVar3 + 0x330);
        local_88 = (undefined *)0x0;
        if (lVar8 != 0) {
          local_88 = *(undefined **)(lVar8 + 0xd0);
        }
      }
      local_80 = (undefined *)CONCAT44(uVar11,1);
      local_78 = (code *)CONCAT62(local_78._2_6_,psVar9[-3]);
      FUN_0133bcb0(&local_98,&local_88);
    }
    if (psVar9[-2] != 0) {
      local_70 = 0;
      local_88 = (undefined *)0x0;
      if (*(long *)puVar3 != 0) {
        lVar8 = *(long *)(*(long *)puVar3 + 0x330);
        local_88 = (undefined *)0x0;
        if (lVar8 != 0) {
          local_88 = *(undefined **)(lVar8 + 0xd0);
        }
      }
      local_80 = (undefined *)CONCAT44(uVar11,2);
      local_78 = (code *)CONCAT62(local_78._2_6_,psVar9[-2]);
      FUN_0133bcb0(&local_98,&local_88);
    }
    if (psVar9[-1] != 0) {
      local_70 = 0;
      local_88 = (undefined *)0x0;
      if (*(long *)puVar3 != 0) {
        lVar8 = *(long *)(*(long *)puVar3 + 0x330);
        local_88 = (undefined *)0x0;
        if (lVar8 != 0) {
          local_88 = *(undefined **)(lVar8 + 0xd0);
        }
      }
      local_80 = (undefined *)CONCAT44(uVar11,3);
      local_78 = (code *)CONCAT62(local_78._2_6_,psVar9[-1]);
      FUN_0133bcb0(&local_98,&local_88);
    }
    if (*psVar9 != 0) {
      local_70 = 0;
      local_88 = (undefined *)0x0;
      if (*(long *)puVar3 != 0) {
        lVar8 = *(long *)(*(long *)puVar3 + 0x330);
        local_88 = (undefined *)0x0;
        if (lVar8 != 0) {
          local_88 = *(undefined **)(lVar8 + 0xd0);
        }
      }
      local_80 = (undefined *)CONCAT44(uVar11,4);
      local_78 = (code *)CONCAT62(local_78._2_6_,*psVar9);
      FUN_0133bcb0(&local_98,&local_88);
    }
    if (psVar9[1] != 0) {
      local_70 = 0;
      local_88 = (undefined *)0x0;
      if (*(long *)puVar3 != 0) {
        lVar8 = *(long *)(*(long *)puVar3 + 0x330);
        local_88 = (undefined *)0x0;
        if (lVar8 != 0) {
          local_88 = *(undefined **)(lVar8 + 0xd0);
        }
      }
      local_80 = (undefined *)CONCAT44(uVar11,5);
      local_78 = (code *)CONCAT62(local_78._2_6_,psVar9[1]);
      FUN_0133bcb0(&local_98,&local_88);
    }
    if (psVar9[2] != 0) {
      local_70 = 0;
      local_88 = (undefined *)0x0;
      if (*(long *)puVar3 != 0) {
        lVar8 = *(long *)(*(long *)puVar3 + 0x330);
        local_88 = (undefined *)0x0;
        if (lVar8 != 0) {
          local_88 = *(undefined **)(lVar8 + 0xd0);
        }
      }
      local_80 = (undefined *)CONCAT44(uVar11,6);
      local_78 = (code *)CONCAT62(local_78._2_6_,psVar9[2]);
      FUN_0133bcb0(&local_98,&local_88);
    }
    if (psVar9[3] != 0) {
      local_70 = 0;
      local_88 = (undefined *)0x0;
      if (*(long *)puVar3 != 0) {
        lVar8 = *(long *)(*(long *)puVar3 + 0x330);
        local_88 = (undefined *)0x0;
        if (lVar8 != 0) {
          local_88 = *(undefined **)(lVar8 + 0xd0);
        }
      }
      local_80 = (undefined *)CONCAT44(uVar11,7);
      local_78 = (code *)CONCAT62(local_78._2_6_,psVar9[3]);
      FUN_0133bcb0(&local_98,&local_88);
    }
    if (psVar9[4] != 0) {
      local_70 = 0;
      local_88 = (undefined *)0x0;
      if (*(long *)puVar3 != 0) {
        lVar8 = *(long *)(*(long *)puVar3 + 0x330);
        local_88 = (undefined *)0x0;
        if (lVar8 != 0) {
          local_88 = *(undefined **)(lVar8 + 0xd0);
        }
      }
      local_80 = (undefined *)CONCAT44(uVar11,8);
      local_78 = (code *)CONCAT62(local_78._2_6_,psVar9[4]);
      FUN_0133bcb0(&local_98,&local_88);
    }
    lVar4 = lVar4 + 1;
    psVar9 = psVar9 + 9;
  } while (lVar4 != 8);
  if ((((local_a0 & 1) != 0) && (*(long *)(&LAB_00116d20 + lVar6) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(&LAB_00116d20 + lVar6) + 8), puVar7 != (undefined8 *)0x0))
  {
    (**(code **)*puVar7)();
  }
  local_98 = PTR_DAT_04bbc4e0 + 0x10;
  if ((*(long *)puVar3 == 0) || (lVar6 = *(long *)(*(long *)puVar3 + 0x330), lVar6 == 0)) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(lVar6 + 0xd0);
  }
  local_78 = FUN_01367460;
  local_88 = PTR_DAT_04bbc2e0 + 0x10;
  local_80 = PTR_DAT_04bbc000 + 0x10;
  local_90 = uVar2;
  FUN_01338160(&local_98,uVar10,&local_88);
  FUN_01338ba8(&local_98,uVar10,0);
  FUN_01338f24(&local_98,uVar10);
  return;
}

