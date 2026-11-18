
void FUN_03337ea0(long param_1,int param_2)

{
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  
  if (param_2 == 0) {
    return;
  }
  iVar4 = *(int *)(param_1 + 0x308);
  iVar7 = 4;
  switch(iVar4) {
  case 0xd:
    break;
  default:
    iVar7 = 2;
    break;
  case 0x17:
  case 0x19:
    iVar7 = 3;
    break;
  case 0x18:
    iVar7 = 5;
  }
  if (*(int *)(param_1 + 0x1b2c) == iVar7) {
    bVar2 = false;
  }
  else {
    iVar7 = 3;
    switch(*(undefined4 *)(param_1 + 0x308)) {
    case 0xd:
      break;
    default:
      iVar7 = 1;
      break;
    case 0x17:
    case 0x19:
      iVar7 = 2;
    }
    bVar2 = *(int *)(param_1 + 0x1b2c) != iVar7;
  }
  iVar7 = *(int *)(param_1 + 0x1b2c);
  *(int *)(param_1 + 0x1b2c) = param_2;
  if (iVar7 != param_2) {
    if (iVar4 - 0x18U < 2) {
      switch(*(undefined4 *)(param_1 + 0x308)) {
      case 0x18:
        iVar4 = 5;
        break;
      case 0x19:
        iVar4 = 3;
        break;
      default:
        iVar4 = 2;
      }
      if (*(int *)(param_1 + 0x1b2c) == iVar4) {
        bVar3 = true;
      }
      else {
        iVar4 = 3;
        switch(*(undefined4 *)(param_1 + 0x308)) {
        case 0xd:
          break;
        default:
          iVar4 = 1;
          break;
        case 0x17:
        case 0x19:
          iVar4 = 2;
        }
        bVar3 = *(int *)(param_1 + 0x1b2c) == iVar4;
      }
      if ((bool)(bVar2 | bVar3 ^ 1U)) {
        uVar6 = 0x11;
        if (!(bool)(bVar2 | bVar3)) {
          uVar6 = 3;
        }
        FUN_032e4b30(*(undefined8 *)(param_1 + 8),uVar6,0);
        lVar8 = *(long *)(param_1 + 0x310);
        *(undefined2 *)(lVar8 + 0x177c) = 0x100;
        *(undefined8 *)(lVar8 + 0xdf8) = 0;
      }
    }
    else if (iVar4 != 0x17) goto LAB_03338198;
    lVar8 = *(long *)(DAT_05355a60 + 0x20);
    if (*(long *)(lVar8 + 0x1ae0) != 0) {
      FUN_032e28a0(*(long *)(lVar8 + 0x1ae0),lVar8 + 0x1a70);
    }
    *(undefined1 *)(lVar8 + 0x1aa8) = 1;
    if (*(int *)(lVar8 + 0x1aa4) - 1U < 2) {
      lVar9 = *(long *)PTR_DAT_04bb29d0;
      do {
        nn::os::ConvertToTimeSpan(lVar9 / 1000);
        nn::os::SleepThread();
      } while (*(int *)(lVar8 + 0x1aa4) - 1U < 2);
    }
    lVar8 = DAT_05355a60;
    iVar4 = FUN_0331f740(param_1);
    puVar1 = PTR_DAT_04bc96c0;
    if ((((iVar4 != 0x13) && (lVar8 = *(long *)(lVar8 + 0x20), lVar8 != 0)) &&
        (*(int *)(lVar8 + 0x1050) != 1)) &&
       ((*(char *)(lVar8 + 0x106a) != '\0' ||
        (*(char *)(lVar8 + 0x16408) != '\0' && *(int *)(lVar8 + 0x1568) == 0)))) {
      *(undefined4 *)(lVar8 + 0x1a68) = 0xffffffff;
      *(int *)(lVar8 + 0x1a44) = iVar4;
      iVar7 = *(int *)puVar1;
      *(undefined4 *)(lVar8 + 0x1810) = 0;
      iVar4 = 0;
      if (iVar7 != -2) {
        iVar4 = iVar7 + 1;
      }
      *(int *)puVar1 = iVar4;
      *(int *)(lVar8 + 0x1a40) = iVar4;
      *(undefined1 *)(lVar8 + 0x1a48) = 0;
      *(undefined1 *)(lVar8 + 0x1a4c) = 1;
    }
    if (*(int *)(*(long *)(DAT_05355a60 + 0x20) + 0xcf4) !=
        *(int *)(*(long *)(DAT_05355a60 + 0x20) + 0xcf8)) {
      FUN_032e4b30(*(undefined8 *)(param_1 + 8),0x17,0);
    }
  }
LAB_03338198:
  iVar4 = *(int *)(param_1 + 0x1b28);
  if (iVar4 == 1) {
    lVar8 = *(long *)(param_1 + 0x1ad8);
    local_40 = CONCAT44(local_40._4_4_,(int)*(char *)(lVar8 + 0x57c));
    if (*(char *)(lVar8 + 0x57c) == 2) {
      local_40 = (ulong)local_40._4_4_ << 0x20;
      plVar5 = *(long **)(lVar8 + 0x548);
      *(ushort *)(lVar8 + 0x578) = *(ushort *)(lVar8 + 0x578) | 1;
      if (plVar5 != (long *)0x0) {
        local_38 = 0;
        local_34 = 1;
        local_40 = lVar8;
        (**(code **)(*plVar5 + 0x20))(plVar5,&local_40);
      }
      FUN_0328a0b0(lVar8,7,1,0);
    }
    lVar8 = *(long *)(param_1 + 0x1ae0);
    local_40 = CONCAT44(local_40._4_4_,(int)*(char *)(lVar8 + 0x57c));
    if (*(char *)(lVar8 + 0x57c) == 2) {
      local_40 = (ulong)local_40._4_4_ << 0x20;
      plVar5 = *(long **)(lVar8 + 0x548);
      *(ushort *)(lVar8 + 0x578) = *(ushort *)(lVar8 + 0x578) | 1;
      if (plVar5 != (long *)0x0) {
        local_38 = 0;
        local_34 = 1;
        local_40 = lVar8;
        (**(code **)(*plVar5 + 0x20))(plVar5,&local_40);
      }
      FUN_0328a0b0(lVar8,7,1,0);
    }
    lVar8 = *(long *)(param_1 + 0x1ae8);
    local_40 = CONCAT44(local_40._4_4_,(int)*(char *)(lVar8 + 0x57c));
    if (*(char *)(lVar8 + 0x57c) == 2) {
      local_40 = (ulong)local_40._4_4_ << 0x20;
      plVar5 = *(long **)(lVar8 + 0x548);
      *(ushort *)(lVar8 + 0x578) = *(ushort *)(lVar8 + 0x578) | 1;
      if (plVar5 != (long *)0x0) {
        local_38 = 0;
        local_34 = 1;
        local_40 = lVar8;
        (**(code **)(*plVar5 + 0x20))(plVar5,&local_40);
      }
      FUN_0328a0b0(lVar8,7,1,0);
    }
    lVar8 = *(long *)(param_1 + 0x1af0);
    local_40 = CONCAT44(local_40._4_4_,(int)*(char *)(lVar8 + 0x57c));
    if (*(char *)(lVar8 + 0x57c) == 2) {
      local_40 = (ulong)local_40._4_4_ << 0x20;
      plVar5 = *(long **)(lVar8 + 0x548);
      *(ushort *)(lVar8 + 0x578) = *(ushort *)(lVar8 + 0x578) & 0xfffe;
      if (plVar5 != (long *)0x0) {
        local_38 = 0;
        local_34 = 0;
        local_40 = lVar8;
        (**(code **)(*plVar5 + 0x20))(plVar5,&local_40);
      }
      uVar6 = 8;
LAB_03338738:
      FUN_0328a0b0(lVar8,uVar6,1,0);
    }
LAB_03338744:
    uVar10 = *(ulong *)(param_1 + 0x1af8);
    local_40 = CONCAT44(local_40._4_4_,(int)*(char *)(uVar10 + 0x57c));
    if (*(char *)(uVar10 + 0x57c) == 2) {
      local_40 = (ulong)local_40._4_4_ << 0x20;
      plVar5 = *(long **)(uVar10 + 0x548);
      *(ushort *)(uVar10 + 0x578) = *(ushort *)(uVar10 + 0x578) & 0xfffe;
      if (plVar5 != (long *)0x0) {
        local_38 = 0;
        local_34 = 0;
        local_40 = uVar10;
        (**(code **)(*plVar5 + 0x20))(plVar5,&local_40);
      }
      uVar6 = 8;
LAB_033387a4:
      FUN_0328a0b0(uVar10,uVar6,1,0);
    }
  }
  else {
    if (iVar4 == 2) {
      lVar8 = *(long *)(param_1 + 0x1ad8);
      local_40 = CONCAT44(local_40._4_4_,(int)*(char *)(lVar8 + 0x57c));
      if (*(char *)(lVar8 + 0x57c) == 2) {
        local_40 = (ulong)local_40._4_4_ << 0x20;
        plVar5 = *(long **)(lVar8 + 0x548);
        *(ushort *)(lVar8 + 0x578) = *(ushort *)(lVar8 + 0x578) | 1;
        if (plVar5 != (long *)0x0) {
          local_38 = 0;
          local_34 = 1;
          local_40 = lVar8;
          (**(code **)(*plVar5 + 0x20))(plVar5,&local_40);
        }
        FUN_0328a0b0(lVar8,7,1,0);
      }
      lVar8 = *(long *)(param_1 + 0x1ae0);
      local_40 = CONCAT44(local_40._4_4_,(int)*(char *)(lVar8 + 0x57c));
      if (*(char *)(lVar8 + 0x57c) == 2) {
        local_40 = (ulong)local_40._4_4_ << 0x20;
        plVar5 = *(long **)(lVar8 + 0x548);
        *(ushort *)(lVar8 + 0x578) = *(ushort *)(lVar8 + 0x578) | 1;
        if (plVar5 != (long *)0x0) {
          local_38 = 0;
          local_34 = 1;
          local_40 = lVar8;
          (**(code **)(*plVar5 + 0x20))(plVar5,&local_40);
        }
        FUN_0328a0b0(lVar8,7,1,0);
      }
      lVar8 = *(long *)(param_1 + 0x1ae8);
      local_40 = CONCAT44(local_40._4_4_,(int)*(char *)(lVar8 + 0x57c));
      if (*(char *)(lVar8 + 0x57c) == 2) {
        local_40 = (ulong)local_40._4_4_ << 0x20;
        plVar5 = *(long **)(lVar8 + 0x548);
        *(ushort *)(lVar8 + 0x578) = *(ushort *)(lVar8 + 0x578) | 1;
        if (plVar5 != (long *)0x0) {
          local_38 = 0;
          local_34 = 1;
          local_40 = lVar8;
          (**(code **)(*plVar5 + 0x20))(plVar5,&local_40);
        }
        FUN_0328a0b0(lVar8,7,1,0);
      }
      lVar8 = *(long *)(param_1 + 0x1af0);
      local_40 = CONCAT44(local_40._4_4_,(int)*(char *)(lVar8 + 0x57c));
      if (*(char *)(lVar8 + 0x57c) == 2) {
        local_40 = (ulong)local_40._4_4_ << 0x20;
        plVar5 = *(long **)(lVar8 + 0x548);
        *(ushort *)(lVar8 + 0x578) = *(ushort *)(lVar8 + 0x578) | 1;
        if (plVar5 != (long *)0x0) {
          local_38 = 0;
          local_34 = 1;
          local_40 = lVar8;
          (**(code **)(*plVar5 + 0x20))(plVar5,&local_40);
        }
        uVar6 = 7;
        goto LAB_03338738;
      }
      goto LAB_03338744;
    }
    if (iVar4 != 3) goto LAB_03338834;
    lVar8 = *(long *)(param_1 + 0x1ad8);
    local_40 = CONCAT44(local_40._4_4_,(int)*(char *)(lVar8 + 0x57c));
    if (*(char *)(lVar8 + 0x57c) == 2) {
      local_40 = (ulong)local_40._4_4_ << 0x20;
      plVar5 = *(long **)(lVar8 + 0x548);
      *(ushort *)(lVar8 + 0x578) = *(ushort *)(lVar8 + 0x578) | 1;
      if (plVar5 != (long *)0x0) {
        local_38 = 0;
        local_34 = 1;
        local_40 = lVar8;
        (**(code **)(*plVar5 + 0x20))(plVar5,&local_40);
      }
      FUN_0328a0b0(lVar8,7,1,0);
    }
    lVar8 = *(long *)(param_1 + 0x1ae0);
    local_40 = CONCAT44(local_40._4_4_,(int)*(char *)(lVar8 + 0x57c));
    if (*(char *)(lVar8 + 0x57c) == 2) {
      local_40 = (ulong)local_40._4_4_ << 0x20;
      plVar5 = *(long **)(lVar8 + 0x548);
      *(ushort *)(lVar8 + 0x578) = *(ushort *)(lVar8 + 0x578) | 1;
      if (plVar5 != (long *)0x0) {
        local_38 = 0;
        local_34 = 1;
        local_40 = lVar8;
        (**(code **)(*plVar5 + 0x20))(plVar5,&local_40);
      }
      FUN_0328a0b0(lVar8,7,1,0);
    }
    lVar8 = *(long *)(param_1 + 0x1ae8);
    local_40 = CONCAT44(local_40._4_4_,(int)*(char *)(lVar8 + 0x57c));
    if (*(char *)(lVar8 + 0x57c) == 2) {
      local_40 = (ulong)local_40._4_4_ << 0x20;
      plVar5 = *(long **)(lVar8 + 0x548);
      *(ushort *)(lVar8 + 0x578) = *(ushort *)(lVar8 + 0x578) | 1;
      if (plVar5 != (long *)0x0) {
        local_38 = 0;
        local_34 = 1;
        local_40 = lVar8;
        (**(code **)(*plVar5 + 0x20))(plVar5,&local_40);
      }
      FUN_0328a0b0(lVar8,7,1,0);
    }
    lVar8 = *(long *)(param_1 + 0x1af0);
    local_40 = CONCAT44(local_40._4_4_,(int)*(char *)(lVar8 + 0x57c));
    if (*(char *)(lVar8 + 0x57c) == 2) {
      local_40 = (ulong)local_40._4_4_ << 0x20;
      plVar5 = *(long **)(lVar8 + 0x548);
      *(ushort *)(lVar8 + 0x578) = *(ushort *)(lVar8 + 0x578) | 1;
      if (plVar5 != (long *)0x0) {
        local_38 = 0;
        local_34 = 1;
        local_40 = lVar8;
        (**(code **)(*plVar5 + 0x20))(plVar5,&local_40);
      }
      FUN_0328a0b0(lVar8,7,1,0);
    }
    uVar10 = *(ulong *)(param_1 + 0x1af8);
    local_40 = CONCAT44(local_40._4_4_,(int)*(char *)(uVar10 + 0x57c));
    if (*(char *)(uVar10 + 0x57c) == 2) {
      local_40 = (ulong)local_40._4_4_ << 0x20;
      plVar5 = *(long **)(uVar10 + 0x548);
      *(ushort *)(uVar10 + 0x578) = *(ushort *)(uVar10 + 0x578) | 1;
      if (plVar5 != (long *)0x0) {
        local_38 = 0;
        local_34 = 1;
        local_40 = uVar10;
        (**(code **)(*plVar5 + 0x20))(plVar5,&local_40);
      }
      uVar6 = 7;
      goto LAB_033387a4;
    }
  }
  lVar8 = param_1 + (ulong)(param_2 - 1U) * 8;
  if (4 < param_2 - 1U) {
    lVar8 = param_1;
  }
  uVar10 = *(ulong *)(lVar8 + 0x1ad8);
  if (*(char *)(uVar10 + 0x57c) == '\x02') {
    local_40 = local_40 & 0xffffffff00000000;
    plVar5 = *(long **)(uVar10 + 0x548);
    *(ushort *)(uVar10 + 0x578) = *(ushort *)(uVar10 + 0x578) & 0xfffe;
    if (plVar5 != (long *)0x0) {
      local_38 = 0;
      local_34 = 0;
      local_40 = uVar10;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_40);
    }
    FUN_0328a0b0(uVar10,8,1,0);
  }
LAB_03338834:
  if ((*(int *)(param_1 + 0x308) == 0xd) && (*(long *)(DAT_05355a60 + 0x20) != 0)) {
    *(undefined4 *)(*(long *)(DAT_05355a60 + 0x20) + 0x1640c) = *(undefined4 *)(param_1 + 0x1b2c);
  }
  return;
}

