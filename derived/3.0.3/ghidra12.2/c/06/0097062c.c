
undefined8 FUN_0097062c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulong uVar6;
  
  puVar1 = PTR_DAT_04bb2640;
  if (DAT_05292338 == 0) {
    return 0;
  }
  if (DAT_05aed670 == 0) {
    return 0;
  }
  if (*(long *)(DAT_05aed670 + 0x330) == 0) {
    return 0;
  }
  puVar4 = (undefined8 *)
           (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                     (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(DAT_05aed670 + 0x338));
  iVar2 = FUN_006bd550(*puVar4,0);
  if (iVar2 != 0x758f7eaf) {
    return 0;
  }
  if (DAT_05aed670 == 0) {
    return 0;
  }
  if (*(long *)(DAT_05aed670 + 0x330) == 0) {
    return 0;
  }
  if (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244) == 0) {
    return 0;
  }
  puVar4 = (undefined8 *)
           (**(code **)(**(long **)puVar1 + 0x18))
                     (*(long **)puVar1,*(undefined4 *)(DAT_05aed670 + 0x338));
  iVar3 = FUN_006bd550(*puVar4,0);
  iVar2 = 0;
  if ((iVar3 == 0x758f7eaf) && (iVar2 = 0, DAT_05aed670 != 0)) {
    iVar2 = 0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      iVar2 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
    }
  }
  if (DAT_05292380 == iVar2) {
    iVar2 = FUN_017ba638();
    if (((2 < iVar2) && (0xfffffffb < *(int *)(param_1 + 8) - 0x22U)) &&
       (*(int *)(param_1 + 0xc) - 0x1cU < 10)) {
      return 1;
    }
    iVar2 = FUN_017ba638();
    if (((3 < iVar2) && (0xfffffffb < *(int *)(param_1 + 8) - 0x22U)) &&
       (*(int *)(param_1 + 0xc) - 0x10U < 6)) {
      return 1;
    }
    iVar2 = FUN_017ba638();
    if (((4 < iVar2) && (0xfffffff8 < *(int *)(param_1 + 8) - 0x17U)) &&
       ((*(uint *)(param_1 + 0xc) & 0xfffffffc) == 0x18)) {
      return 1;
    }
  }
  if (DAT_05aed670 == 0) {
LAB_00970800:
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar4 = (undefined8 *)
               (**(code **)(**(long **)puVar1 + 0x18))
                         (*(long **)puVar1,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar2 = FUN_006bd550(*puVar4,0);
      if ((iVar2 != 0x758f7eaf) || (DAT_05aed670 == 0)) goto LAB_00970800;
      iVar2 = 0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        iVar2 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
      }
    }
  }
  if (DAT_05292384 == iVar2) {
    if (DAT_05aed670 != 0) {
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar4 = (undefined8 *)
                 (**(code **)(**(long **)puVar1 + 0x18))
                           (*(long **)puVar1,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar2 = FUN_006bd550(*puVar4,0);
        if (iVar2 != 0x758f7eaf) goto LAB_00970880;
        if (DAT_05aed670 == 0) goto LAB_009708cc;
        if ((((*(long *)(DAT_05aed670 + 0x330) != 0) &&
             (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x248) == 1)) &&
            (*(uint *)(param_1 + 8) < 4)) && (*(int *)(param_1 + 0xc) - 9U < 7)) {
          return 1;
        }
      }
      goto LAB_00970884;
    }
LAB_009708cc:
    iVar2 = 0;
  }
  else {
LAB_00970880:
    if (DAT_05aed670 == 0) goto LAB_009708cc;
LAB_00970884:
    iVar2 = 0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar4 = (undefined8 *)
               (**(code **)(**(long **)puVar1 + 0x18))
                         (*(long **)puVar1,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar2 = FUN_006bd550(*puVar4,0);
      if ((iVar2 != 0x758f7eaf) || (DAT_05aed670 == 0)) goto LAB_009708cc;
      iVar2 = 0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        iVar2 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
      }
    }
  }
  if (DAT_05292388 == iVar2) {
    if ((DAT_05aed670 == 0) || (*(long *)(DAT_05aed670 + 0x330) == 0)) {
LAB_00970928:
      if ((0xfffffffa < *(int *)(param_1 + 8) - 0x23U) && (*(int *)(param_1 + 0xc) - 5U < 9)) {
        return 1;
      }
    }
    else {
      puVar4 = (undefined8 *)
               (**(code **)(**(long **)puVar1 + 0x18))
                         (*(long **)puVar1,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar2 = FUN_006bd550(*puVar4,0);
      if ((iVar2 != 0x758f7eaf) ||
         (((DAT_05aed670 == 0 || (*(long *)(DAT_05aed670 + 0x330) == 0)) ||
          (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x248) == 0)))) goto LAB_00970928;
    }
    uVar6 = DAT_05aed670;
    if (DAT_05aed670 == 0) goto LAB_00970ab8;
    if (*(long *)(DAT_05aed670 + 0x330) == 0) {
LAB_009709dc:
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar4 = (undefined8 *)
                 (**(code **)(**(long **)puVar1 + 0x18))
                           (*(long **)puVar1,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar2 = FUN_006bd550(*puVar4,0);
        if (iVar2 != 0x758f7eaf) goto LAB_00970a64;
        uVar6 = 0;
        if (DAT_05aed670 == 0) goto LAB_00970ab8;
        if (((*(long *)(DAT_05aed670 + 0x330) != 0) &&
            (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x248) == 2)) &&
           (uVar5 = *(int *)(param_1 + 8) - 9, 0xfffffffa < uVar5)) {
          if (*(int *)(param_1 + 0xc) - 0x15U < 5) {
            return 1;
          }
          if ((0xfffffffb < uVar5) && (*(int *)(param_1 + 0xc) - 0x27U < 6)) {
            return 1;
          }
        }
      }
LAB_00970a68:
      if (*(long *)(DAT_05aed670 + 0x330) == 0) {
        uVar6 = 0;
      }
      else {
        puVar4 = (undefined8 *)
                 (**(code **)(**(long **)puVar1 + 0x18))
                           (*(long **)puVar1,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar2 = FUN_006bd550(*puVar4,0);
        uVar6 = 0;
        if ((iVar2 == 0x758f7eaf) && (uVar6 = 0, DAT_05aed670 != 0)) {
          uVar6 = 0;
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            uVar6 = (ulong)*(uint *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
          }
        }
      }
    }
    else {
      puVar4 = (undefined8 *)
               (**(code **)(**(long **)puVar1 + 0x18))
                         (*(long **)puVar1,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar2 = FUN_006bd550(*puVar4,0);
      uVar6 = DAT_05aed670;
      if (iVar2 == 0x758f7eaf) {
        if (DAT_05aed670 != 0) {
          if (((*(long *)(DAT_05aed670 + 0x330) != 0) &&
              (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x248) == 1)) &&
             ((0xfffffffa < *(int *)(param_1 + 8) - 0x40U &&
              ((uVar5 = *(int *)(param_1 + 0xc) - 5, uVar5 < 0x2e &&
               ((0x3f000000003fU >> ((ulong)uVar5 & 0x3f) & 1) != 0)))))) {
            return 1;
          }
          goto LAB_009709dc;
        }
      }
      else if (DAT_05aed670 != 0) goto LAB_009709dc;
    }
  }
  else {
LAB_00970a64:
    uVar6 = 0;
    if (DAT_05aed670 != 0) goto LAB_00970a68;
  }
LAB_00970ab8:
  if (DAT_0529238c != (int)uVar6) {
    return 0;
  }
  if (DAT_05aed670 == 0) {
    return 0;
  }
  if (*(long *)(DAT_05aed670 + 0x330) != 0) {
    puVar4 = (undefined8 *)
             (**(code **)(**(long **)puVar1 + 0x18))
                       (*(long **)puVar1,*(undefined4 *)(DAT_05aed670 + 0x338));
    iVar2 = FUN_006bd550(*puVar4,0);
    if (iVar2 == 0x758f7eaf) {
      if (DAT_05aed670 == 0) {
        return 0;
      }
      if ((*(long *)(DAT_05aed670 + 0x330) != 0) &&
         (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x248) == 1)) {
        if (*(int *)(param_1 + 8) - 0x3aU < 0xfffffff2) {
          if (*(int *)(param_1 + 8) - 0x22U < 0xfffffffb) {
            return 0;
          }
          if (*(int *)(param_1 + 0xc) - 6U < 0xe) {
            return 1;
          }
          return 0;
        }
        uVar5 = *(int *)(param_1 + 0xc) - 0x1d;
        goto LAB_00970bbc;
      }
    }
    else if (DAT_05aed670 == 0) {
      return 0;
    }
  }
  if (*(long *)(DAT_05aed670 + 0x330) == 0) {
    return 0;
  }
  puVar4 = (undefined8 *)
           (**(code **)(**(long **)puVar1 + 0x18))
                     (*(long **)puVar1,*(undefined4 *)(DAT_05aed670 + 0x338));
  iVar2 = FUN_006bd550(*puVar4,0);
  if (iVar2 != 0x758f7eaf) {
    return 0;
  }
  if (DAT_05aed670 == 0) {
    return 0;
  }
  if (*(long *)(DAT_05aed670 + 0x330) == 0) {
    return 0;
  }
  if (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x248) != 2) {
    return 0;
  }
  if (*(int *)(param_1 + 8) - 0x39U < 0xfffffffa) {
    return 0;
  }
  uVar5 = *(int *)(param_1 + 0xc) - 0x26;
LAB_00970bbc:
  if (uVar5 < 6) {
    return 1;
  }
  return 0;
}

