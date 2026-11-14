
/* WARNING: Removing unreachable block (ram,0x014fe604) */
/* WARNING: Removing unreachable block (ram,0x014fe5d4) */
/* WARNING: Removing unreachable block (ram,0x014fe560) */
/* WARNING: Removing unreachable block (ram,0x014fe65c) */
/* WARNING: Removing unreachable block (ram,0x014fe434) */
/* WARNING: Removing unreachable block (ram,0x014fe404) */
/* WARNING: Removing unreachable block (ram,0x014fe390) */
/* WARNING: Removing unreachable block (ram,0x014fe48c) */
/* WARNING: Removing unreachable block (ram,0x014fe264) */
/* WARNING: Removing unreachable block (ram,0x014fe234) */
/* WARNING: Removing unreachable block (ram,0x014fe1c0) */
/* WARNING: Removing unreachable block (ram,0x014fe2bc) */
/* WARNING: Removing unreachable block (ram,0x014fe094) */
/* WARNING: Removing unreachable block (ram,0x014fe064) */
/* WARNING: Removing unreachable block (ram,0x014fdff0) */
/* WARNING: Removing unreachable block (ram,0x014fe0ec) */
/* WARNING: Removing unreachable block (ram,0x014fdec4) */
/* WARNING: Removing unreachable block (ram,0x014fde94) */
/* WARNING: Removing unreachable block (ram,0x014fde20) */
/* WARNING: Removing unreachable block (ram,0x014fdf1c) */
/* WARNING: Removing unreachable block (ram,0x014fdcf4) */
/* WARNING: Removing unreachable block (ram,0x014fdcc4) */
/* WARNING: Removing unreachable block (ram,0x014fdc50) */
/* WARNING: Removing unreachable block (ram,0x014fdd4c) */
/* WARNING: Removing unreachable block (ram,0x014fdb2c) */
/* WARNING: Removing unreachable block (ram,0x014fdafc) */
/* WARNING: Removing unreachable block (ram,0x014fda88) */
/* WARNING: Removing unreachable block (ram,0x014fdb7c) */
/* WARNING: Removing unreachable block (ram,0x014fd964) */
/* WARNING: Removing unreachable block (ram,0x014fd904) */
/* WARNING: Removing unreachable block (ram,0x014fd8cc) */
/* WARNING: Removing unreachable block (ram,0x014fd850) */
/* WARNING: Removing unreachable block (ram,0x014fd9b8) */
/* WARNING: Removing unreachable block (ram,0x014fd840) */
/* WARNING: Removing unreachable block (ram,0x014fd85c) */
/* WARNING: Removing unreachable block (ram,0x014fd8bc) */
/* WARNING: Removing unreachable block (ram,0x014fd8d8) */
/* WARNING: Removing unreachable block (ram,0x014fd8f4) */
/* WARNING: Removing unreachable block (ram,0x014fd9f8) */
/* WARNING: Removing unreachable block (ram,0x014fda78) */
/* WARNING: Removing unreachable block (ram,0x014fda94) */
/* WARNING: Removing unreachable block (ram,0x014fdaec) */
/* WARNING: Removing unreachable block (ram,0x014fdbc0) */
/* WARNING: Removing unreachable block (ram,0x014fdc40) */
/* WARNING: Removing unreachable block (ram,0x014fdc5c) */
/* WARNING: Removing unreachable block (ram,0x014fdcb4) */
/* WARNING: Removing unreachable block (ram,0x014fdd90) */
/* WARNING: Removing unreachable block (ram,0x014fde10) */
/* WARNING: Removing unreachable block (ram,0x014fde2c) */
/* WARNING: Removing unreachable block (ram,0x014fde84) */
/* WARNING: Removing unreachable block (ram,0x014fdf60) */
/* WARNING: Removing unreachable block (ram,0x014fdfe0) */
/* WARNING: Removing unreachable block (ram,0x014fdffc) */
/* WARNING: Removing unreachable block (ram,0x014fe054) */
/* WARNING: Removing unreachable block (ram,0x014fe130) */
/* WARNING: Removing unreachable block (ram,0x014fe1b0) */
/* WARNING: Removing unreachable block (ram,0x014fe1cc) */
/* WARNING: Removing unreachable block (ram,0x014fe224) */
/* WARNING: Removing unreachable block (ram,0x014fe300) */
/* WARNING: Removing unreachable block (ram,0x014fe380) */
/* WARNING: Removing unreachable block (ram,0x014fe39c) */
/* WARNING: Removing unreachable block (ram,0x014fe3f4) */
/* WARNING: Removing unreachable block (ram,0x014fe4d0) */
/* WARNING: Removing unreachable block (ram,0x014fe550) */
/* WARNING: Removing unreachable block (ram,0x014fe56c) */
/* WARNING: Removing unreachable block (ram,0x014fe5c4) */
/* WARNING: Removing unreachable block (ram,0x014fe6a0) */

void FUN_014fd7d4(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  puVar2 = PTR_DAT_04bb27a8;
  uVar1 = *(uint *)(param_1 + 8);
  lVar4 = *(long *)PTR_DAT_04bb27a8;
  if (uVar1 == 0) {
    if (*(long *)(lVar4 + 0x1f8) == 0) {
      return;
    }
    if ((*(long *)(lVar4 + 0x1f8) != 0) && (*(long *)(*(long *)(lVar4 + 0x1f8) + 0x60) != 0)) {
LAB_014fd9dc:
      plVar6 = (long *)(lVar4 + 0x1f8);
LAB_014fd9e0:
      lVar4 = *plVar6;
LAB_014fd9e4:
      if (*(long *)(lVar4 + 0xd0) != 0) {
        plVar6 = (long *)(*(long *)(lVar4 + 0xd0) + 0xb0);
        uVar3 = (**(code **)(*plVar6 + 0x10))(plVar6);
        if ((uVar3 & 1) != 0) {
          (**(code **)*plVar6)(plVar6);
        }
      }
    }
  }
  else {
    if (uVar1 == 0) {
      return;
    }
    if (uVar1 == 0) {
      lVar5 = *(long *)(lVar4 + 0x1f8);
    }
    else {
      plVar6 = (long *)(lVar4 + 0x30) + uVar1;
      if (0x38 < uVar1) {
        plVar6 = (long *)(lVar4 + 0x30);
      }
      lVar5 = *plVar6;
    }
    if (lVar5 == 0) {
      return;
    }
    if (uVar1 != 0) {
      if (uVar1 == 0) {
        lVar5 = *(long *)(lVar4 + 0x1f8);
      }
      else {
        plVar6 = (long *)(lVar4 + 0x30) + uVar1;
        if (0x38 < uVar1) {
          plVar6 = (long *)(lVar4 + 0x30);
        }
        lVar5 = *plVar6;
      }
      if (lVar5 != 0) {
        if (uVar1 == 0) {
          lVar5 = 0;
        }
        else {
          if (uVar1 == 0) {
            plVar6 = (long *)(lVar4 + 0x1f8);
          }
          else {
            plVar6 = (long *)(lVar4 + 0x30) + uVar1;
            if (0x38 < uVar1) {
              plVar6 = (long *)(lVar4 + 0x30);
            }
          }
          lVar5 = *plVar6;
        }
        if (*(long *)(lVar5 + 0x60) != 0) {
          if (uVar1 != 0) {
            if (uVar1 == 0) goto LAB_014fd9dc;
            plVar6 = (long *)(lVar4 + 0x30) + uVar1;
            if (0x38 < uVar1) {
              plVar6 = (long *)(lVar4 + 0x30);
            }
            goto LAB_014fd9e0;
          }
          lVar4 = 0;
          goto LAB_014fd9e4;
        }
      }
    }
  }
  uVar1 = *(uint *)(param_1 + 8);
  lVar4 = *(long *)puVar2;
  if (uVar1 == 0) {
    if ((*(long *)(lVar4 + 0x1f8) != 0) && (*(long *)(*(long *)(lVar4 + 0x1f8) + 0x68) != 0)) {
LAB_014fdba0:
      plVar6 = (long *)(lVar4 + 0x1f8);
LAB_014fdba4:
      lVar4 = *plVar6;
LAB_014fdba8:
      if (*(long *)(lVar4 + 0xe0) != 0) {
        plVar6 = (long *)(*(long *)(lVar4 + 0xe0) + 0xb0);
        uVar3 = (**(code **)(*plVar6 + 0x10))(plVar6);
        if ((uVar3 & 1) != 0) {
          (**(code **)*plVar6)(plVar6);
        }
      }
    }
  }
  else if (uVar1 != 0) {
    if (uVar1 == 0) {
      lVar5 = *(long *)(lVar4 + 0x1f8);
    }
    else {
      plVar6 = (long *)(lVar4 + 0x30) + uVar1;
      if (0x38 < uVar1) {
        plVar6 = (long *)(lVar4 + 0x30);
      }
      lVar5 = *plVar6;
    }
    if (lVar5 != 0) {
      if (uVar1 == 0) {
        lVar5 = 0;
      }
      else {
        if (uVar1 == 0) {
          plVar6 = (long *)(lVar4 + 0x1f8);
        }
        else {
          plVar6 = (long *)(lVar4 + 0x30) + uVar1;
          if (0x38 < uVar1) {
            plVar6 = (long *)(lVar4 + 0x30);
          }
        }
        lVar5 = *plVar6;
      }
      if (*(long *)(lVar5 + 0x68) != 0) {
        if (uVar1 != 0) {
          if (uVar1 == 0) goto LAB_014fdba0;
          plVar6 = (long *)(lVar4 + 0x30) + uVar1;
          if (0x38 < uVar1) {
            plVar6 = (long *)(lVar4 + 0x30);
          }
          goto LAB_014fdba4;
        }
        lVar4 = 0;
        goto LAB_014fdba8;
      }
    }
  }
  uVar1 = *(uint *)(param_1 + 8);
  lVar4 = *(long *)puVar2;
  if (uVar1 == 0) {
    if ((*(long *)(lVar4 + 0x1f8) != 0) && (*(long *)(*(long *)(lVar4 + 0x1f8) + 0x70) != 0)) {
LAB_014fdd70:
      plVar6 = (long *)(lVar4 + 0x1f8);
LAB_014fdd74:
      lVar4 = *plVar6;
LAB_014fdd78:
      if (*(long *)(lVar4 + 0xf0) != 0) {
        plVar6 = (long *)(*(long *)(lVar4 + 0xf0) + 0xb0);
        uVar3 = (**(code **)(*plVar6 + 0x10))(plVar6);
        if ((uVar3 & 1) != 0) {
          (**(code **)*plVar6)(plVar6);
        }
      }
    }
  }
  else if (uVar1 != 0) {
    if (uVar1 == 0) {
      lVar5 = *(long *)(lVar4 + 0x1f8);
    }
    else {
      plVar6 = (long *)(lVar4 + 0x30) + uVar1;
      if (0x38 < uVar1) {
        plVar6 = (long *)(lVar4 + 0x30);
      }
      lVar5 = *plVar6;
    }
    if (lVar5 != 0) {
      if (uVar1 == 0) {
        lVar5 = 0;
      }
      else {
        if (uVar1 == 0) {
          plVar6 = (long *)(lVar4 + 0x1f8);
        }
        else {
          plVar6 = (long *)(lVar4 + 0x30) + uVar1;
          if (0x38 < uVar1) {
            plVar6 = (long *)(lVar4 + 0x30);
          }
        }
        lVar5 = *plVar6;
      }
      if (*(long *)(lVar5 + 0x70) != 0) {
        if (uVar1 != 0) {
          if (uVar1 == 0) goto LAB_014fdd70;
          plVar6 = (long *)(lVar4 + 0x30) + uVar1;
          if (0x38 < uVar1) {
            plVar6 = (long *)(lVar4 + 0x30);
          }
          goto LAB_014fdd74;
        }
        lVar4 = 0;
        goto LAB_014fdd78;
      }
    }
  }
  uVar1 = *(uint *)(param_1 + 8);
  lVar4 = *(long *)puVar2;
  if (uVar1 == 0) {
    if ((*(long *)(lVar4 + 0x1f8) != 0) && (*(long *)(*(long *)(lVar4 + 0x1f8) + 0x78) != 0)) {
LAB_014fdf40:
      plVar6 = (long *)(lVar4 + 0x1f8);
LAB_014fdf44:
      lVar4 = *plVar6;
LAB_014fdf48:
      if (*(long *)(lVar4 + 0x100) != 0) {
        plVar6 = (long *)(*(long *)(lVar4 + 0x100) + 0xb0);
        uVar3 = (**(code **)(*plVar6 + 0x10))(plVar6);
        if ((uVar3 & 1) != 0) {
          (**(code **)*plVar6)(plVar6);
        }
      }
    }
  }
  else if (uVar1 != 0) {
    if (uVar1 == 0) {
      lVar5 = *(long *)(lVar4 + 0x1f8);
    }
    else {
      plVar6 = (long *)(lVar4 + 0x30) + uVar1;
      if (0x38 < uVar1) {
        plVar6 = (long *)(lVar4 + 0x30);
      }
      lVar5 = *plVar6;
    }
    if (lVar5 != 0) {
      if (uVar1 == 0) {
        lVar5 = 0;
      }
      else {
        if (uVar1 == 0) {
          plVar6 = (long *)(lVar4 + 0x1f8);
        }
        else {
          plVar6 = (long *)(lVar4 + 0x30) + uVar1;
          if (0x38 < uVar1) {
            plVar6 = (long *)(lVar4 + 0x30);
          }
        }
        lVar5 = *plVar6;
      }
      if (*(long *)(lVar5 + 0x78) != 0) {
        if (uVar1 != 0) {
          if (uVar1 == 0) goto LAB_014fdf40;
          plVar6 = (long *)(lVar4 + 0x30) + uVar1;
          if (0x38 < uVar1) {
            plVar6 = (long *)(lVar4 + 0x30);
          }
          goto LAB_014fdf44;
        }
        lVar4 = 0;
        goto LAB_014fdf48;
      }
    }
  }
  uVar1 = *(uint *)(param_1 + 8);
  lVar4 = *(long *)puVar2;
  if (uVar1 == 0) {
    if ((*(long *)(lVar4 + 0x1f8) != 0) && (*(long *)(*(long *)(lVar4 + 0x1f8) + 0x80) != 0)) {
LAB_014fe110:
      plVar6 = (long *)(lVar4 + 0x1f8);
LAB_014fe114:
      lVar4 = *plVar6;
LAB_014fe118:
      if (*(long *)(lVar4 + 0x110) != 0) {
        plVar6 = (long *)(*(long *)(lVar4 + 0x110) + 0xb0);
        uVar3 = (**(code **)(*plVar6 + 0x10))(plVar6);
        if ((uVar3 & 1) != 0) {
          (**(code **)*plVar6)(plVar6);
        }
      }
    }
  }
  else if (uVar1 != 0) {
    if (uVar1 == 0) {
      lVar5 = *(long *)(lVar4 + 0x1f8);
    }
    else {
      plVar6 = (long *)(lVar4 + 0x30) + uVar1;
      if (0x38 < uVar1) {
        plVar6 = (long *)(lVar4 + 0x30);
      }
      lVar5 = *plVar6;
    }
    if (lVar5 != 0) {
      if (uVar1 == 0) {
        lVar5 = 0;
      }
      else {
        if (uVar1 == 0) {
          plVar6 = (long *)(lVar4 + 0x1f8);
        }
        else {
          plVar6 = (long *)(lVar4 + 0x30) + uVar1;
          if (0x38 < uVar1) {
            plVar6 = (long *)(lVar4 + 0x30);
          }
        }
        lVar5 = *plVar6;
      }
      if (*(long *)(lVar5 + 0x80) != 0) {
        if (uVar1 != 0) {
          if (uVar1 == 0) goto LAB_014fe110;
          plVar6 = (long *)(lVar4 + 0x30) + uVar1;
          if (0x38 < uVar1) {
            plVar6 = (long *)(lVar4 + 0x30);
          }
          goto LAB_014fe114;
        }
        lVar4 = 0;
        goto LAB_014fe118;
      }
    }
  }
  uVar1 = *(uint *)(param_1 + 8);
  lVar4 = *(long *)puVar2;
  if (uVar1 == 0) {
    if ((*(long *)(lVar4 + 0x1f8) != 0) && (*(long *)(*(long *)(lVar4 + 0x1f8) + 0x88) != 0)) {
LAB_014fe2e0:
      plVar6 = (long *)(lVar4 + 0x1f8);
LAB_014fe2e4:
      lVar4 = *plVar6;
LAB_014fe2e8:
      if (*(long *)(lVar4 + 0x120) != 0) {
        plVar6 = (long *)(*(long *)(lVar4 + 0x120) + 0xb0);
        uVar3 = (**(code **)(*plVar6 + 0x10))(plVar6);
        if ((uVar3 & 1) != 0) {
          (**(code **)*plVar6)(plVar6);
        }
      }
    }
  }
  else if (uVar1 != 0) {
    if (uVar1 == 0) {
      lVar5 = *(long *)(lVar4 + 0x1f8);
    }
    else {
      plVar6 = (long *)(lVar4 + 0x30) + uVar1;
      if (0x38 < uVar1) {
        plVar6 = (long *)(lVar4 + 0x30);
      }
      lVar5 = *plVar6;
    }
    if (lVar5 != 0) {
      if (uVar1 == 0) {
        lVar5 = 0;
      }
      else {
        if (uVar1 == 0) {
          plVar6 = (long *)(lVar4 + 0x1f8);
        }
        else {
          plVar6 = (long *)(lVar4 + 0x30) + uVar1;
          if (0x38 < uVar1) {
            plVar6 = (long *)(lVar4 + 0x30);
          }
        }
        lVar5 = *plVar6;
      }
      if (*(long *)(lVar5 + 0x88) != 0) {
        if (uVar1 != 0) {
          if (uVar1 == 0) goto LAB_014fe2e0;
          plVar6 = (long *)(lVar4 + 0x30) + uVar1;
          if (0x38 < uVar1) {
            plVar6 = (long *)(lVar4 + 0x30);
          }
          goto LAB_014fe2e4;
        }
        lVar4 = 0;
        goto LAB_014fe2e8;
      }
    }
  }
  uVar1 = *(uint *)(param_1 + 8);
  lVar4 = *(long *)puVar2;
  if (uVar1 == 0) {
    if ((*(long *)(lVar4 + 0x1f8) != 0) && (*(long *)(*(long *)(lVar4 + 0x1f8) + 0x90) != 0)) {
LAB_014fe4b0:
      plVar6 = (long *)(lVar4 + 0x1f8);
LAB_014fe4b4:
      lVar4 = *plVar6;
LAB_014fe4b8:
      if (*(long *)(lVar4 + 0x130) != 0) {
        plVar6 = (long *)(*(long *)(lVar4 + 0x130) + 0xb0);
        uVar3 = (**(code **)(*plVar6 + 0x10))(plVar6);
        if ((uVar3 & 1) != 0) {
          (**(code **)*plVar6)(plVar6);
        }
      }
    }
  }
  else if (uVar1 != 0) {
    if (uVar1 == 0) {
      lVar5 = *(long *)(lVar4 + 0x1f8);
    }
    else {
      plVar6 = (long *)(lVar4 + 0x30) + uVar1;
      if (0x38 < uVar1) {
        plVar6 = (long *)(lVar4 + 0x30);
      }
      lVar5 = *plVar6;
    }
    if (lVar5 != 0) {
      if (uVar1 == 0) {
        lVar5 = 0;
      }
      else {
        if (uVar1 == 0) {
          plVar6 = (long *)(lVar4 + 0x1f8);
        }
        else {
          plVar6 = (long *)(lVar4 + 0x30) + uVar1;
          if (0x38 < uVar1) {
            plVar6 = (long *)(lVar4 + 0x30);
          }
        }
        lVar5 = *plVar6;
      }
      if (*(long *)(lVar5 + 0x90) != 0) {
        if (uVar1 != 0) {
          if (uVar1 == 0) goto LAB_014fe4b0;
          plVar6 = (long *)(lVar4 + 0x30) + uVar1;
          if (0x38 < uVar1) {
            plVar6 = (long *)(lVar4 + 0x30);
          }
          goto LAB_014fe4b4;
        }
        lVar4 = 0;
        goto LAB_014fe4b8;
      }
    }
  }
  uVar1 = *(uint *)(param_1 + 8);
  lVar4 = *(long *)puVar2;
  if (uVar1 == 0) {
    if (*(long *)(lVar4 + 0x1f8) == 0) {
      return;
    }
    if (*(long *)(*(long *)(lVar4 + 0x1f8) + 0x98) == 0) {
      return;
    }
LAB_014fe680:
    plVar6 = (long *)(lVar4 + 0x1f8);
  }
  else {
    if (uVar1 == 0) {
      return;
    }
    if (uVar1 == 0) {
      lVar5 = *(long *)(lVar4 + 0x1f8);
    }
    else {
      plVar6 = (long *)(lVar4 + 0x30) + uVar1;
      if (0x38 < uVar1) {
        plVar6 = (long *)(lVar4 + 0x30);
      }
      lVar5 = *plVar6;
    }
    if (lVar5 == 0) {
      return;
    }
    if (uVar1 == 0) {
      lVar5 = 0;
    }
    else {
      if (uVar1 == 0) {
        plVar6 = (long *)(lVar4 + 0x1f8);
      }
      else {
        plVar6 = (long *)(lVar4 + 0x30) + uVar1;
        if (0x38 < uVar1) {
          plVar6 = (long *)(lVar4 + 0x30);
        }
      }
      lVar5 = *plVar6;
    }
    if (*(long *)(lVar5 + 0x98) == 0) {
      return;
    }
    if (uVar1 == 0) {
      lVar4 = 0;
      goto LAB_014fe688;
    }
    if (uVar1 == 0) goto LAB_014fe680;
    plVar6 = (long *)(lVar4 + 0x30) + uVar1;
    if (0x38 < uVar1) {
      plVar6 = (long *)(lVar4 + 0x30);
    }
  }
  lVar4 = *plVar6;
LAB_014fe688:
  if (*(long *)(lVar4 + 0x140) != 0) {
    plVar6 = (long *)(*(long *)(lVar4 + 0x140) + 0xb0);
    uVar3 = (**(code **)(*plVar6 + 0x10))(plVar6);
    if ((uVar3 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x014fe6d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*plVar6)(plVar6);
      return;
    }
  }
  return;
}

