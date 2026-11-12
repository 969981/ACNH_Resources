
undefined4 FUN_0096ff30(uint param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  puVar2 = PTR_DAT_04bb2640;
  if (((DAT_05292338 == 0) || (DAT_05aed670 == 0)) || (*(long *)(DAT_05aed670 + 0x330) == 0)) {
    return 6;
  }
  puVar8 = (undefined8 *)
           (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                     (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(DAT_05aed670 + 0x338));
  iVar5 = FUN_006bd550(*puVar8,0);
  if (iVar5 != 0x758f7eaf) {
    return 6;
  }
  if (DAT_05aed670 == 0) {
    return 6;
  }
  if (*(long *)(DAT_05aed670 + 0x330) == 0) {
    return 6;
  }
  if (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244) == 0) {
    return 6;
  }
  puVar8 = (undefined8 *)
           (**(code **)(**(long **)puVar2 + 0x18))
                     (*(long **)puVar2,*(undefined4 *)(DAT_05aed670 + 0x338));
  iVar6 = FUN_006bd550(*puVar8,0);
  puVar3 = PTR_DAT_04bbe4b0;
  iVar5 = 0;
  if ((iVar6 == 0x758f7eaf) && (iVar5 = 0, DAT_05aed670 != 0)) {
    iVar5 = 0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      iVar5 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
    }
  }
  uVar10 = 6;
  if (*(int *)(PTR_DAT_04bbe4b0 + 0x18) == iVar5) {
    iVar5 = FUN_017ba638();
    iVar6 = FUN_017ba638();
    iVar7 = FUN_017ba638();
    uVar10 = 0;
    if ((param_1 != 3 || iVar5 < 3) && ((param_1 != 4 || iVar6 < 4) && (param_1 != 5 || iVar7 < 5)))
    {
      uVar10 = 6;
    }
  }
  if (DAT_05aed670 == 0) {
LAB_009700e4:
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar8 = (undefined8 *)
               (**(code **)(**(long **)puVar2 + 0x18))
                         (*(long **)puVar2,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar5 = FUN_006bd550(*puVar8,0);
      if ((iVar5 != 0x758f7eaf) || (DAT_05aed670 == 0)) goto LAB_009700e4;
      iVar5 = 0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        iVar5 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
      }
    }
  }
  uVar11 = uVar10;
  if (*(int *)(puVar3 + 0x24) == iVar5) {
    if (DAT_05aed670 == 0) {
LAB_00970140:
      iVar5 = 0;
    }
    else {
      iVar5 = 0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar8 = (undefined8 *)
                 (**(code **)(**(long **)puVar2 + 0x18))
                           (*(long **)puVar2,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar5 = FUN_006bd550(*puVar8,0);
        if ((iVar5 != 0x758f7eaf) || (DAT_05aed670 == 0)) goto LAB_00970140;
        iVar5 = 0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          iVar5 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x248);
        }
      }
    }
    uVar11 = 3;
    if (iVar5 != 0 || (param_1 & 0xfffffffd) != 0) {
      uVar11 = uVar10;
    }
  }
  if (DAT_05aed670 == 0) {
LAB_009701a4:
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar8 = (undefined8 *)
               (**(code **)(**(long **)puVar2 + 0x18))
                         (*(long **)puVar2,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar5 = FUN_006bd550(*puVar8,0);
      if ((iVar5 != 0x758f7eaf) || (DAT_05aed670 == 0)) goto LAB_009701a4;
      iVar5 = 0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        iVar5 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
      }
    }
  }
  uVar10 = uVar11;
  if (*(int *)(puVar3 + 0x1c) == iVar5) {
    if (DAT_05aed670 == 0) {
LAB_00970200:
      iVar5 = 0;
    }
    else {
      iVar5 = 0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar8 = (undefined8 *)
                 (**(code **)(**(long **)puVar2 + 0x18))
                           (*(long **)puVar2,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar5 = FUN_006bd550(*puVar8,0);
        if ((iVar5 != 0x758f7eaf) || (DAT_05aed670 == 0)) goto LAB_00970200;
        iVar5 = 0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          iVar5 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x248);
        }
      }
    }
    uVar10 = 0;
    if (iVar5 != 1 || param_1 != 1) {
      uVar10 = uVar11;
    }
  }
  if (DAT_05aed670 == 0) {
LAB_0097025c:
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar8 = (undefined8 *)
               (**(code **)(**(long **)puVar2 + 0x18))
                         (*(long **)puVar2,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar5 = FUN_006bd550(*puVar8,0);
      if ((iVar5 != 0x758f7eaf) || (DAT_05aed670 == 0)) goto LAB_0097025c;
      iVar5 = 0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        iVar5 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
      }
    }
  }
  uVar11 = uVar10;
  if (*(int *)(puVar3 + 0x1c) == iVar5) {
    if (DAT_05aed670 == 0) {
LAB_009702b8:
      iVar5 = 0;
    }
    else {
      iVar5 = 0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar8 = (undefined8 *)
                 (**(code **)(**(long **)puVar2 + 0x18))
                           (*(long **)puVar2,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar5 = FUN_006bd550(*puVar8,0);
        if ((iVar5 != 0x758f7eaf) || (DAT_05aed670 == 0)) goto LAB_009702b8;
        iVar5 = 0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          iVar5 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x248);
        }
      }
    }
    uVar11 = 3;
    if (iVar5 != 2 || param_1 != 2) {
      uVar11 = uVar10;
    }
  }
  if (DAT_05aed670 == 0) {
LAB_00970318:
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar8 = (undefined8 *)
               (**(code **)(**(long **)puVar2 + 0x18))
                         (*(long **)puVar2,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar5 = FUN_006bd550(*puVar8,0);
      if ((iVar5 != 0x758f7eaf) || (DAT_05aed670 == 0)) goto LAB_00970318;
      iVar5 = 0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        iVar5 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
      }
    }
  }
  lVar9 = DAT_05aed670;
  if (*(int *)(puVar3 + 0x20) == iVar5) {
    if (DAT_05aed670 == 0) {
LAB_00970380:
      lVar9 = 0;
      iVar5 = 0;
      uVar10 = 0;
      if (param_1 != 1) {
        uVar10 = uVar11;
      }
      goto LAB_0097044c;
    }
    iVar5 = 0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar8 = (undefined8 *)
               (**(code **)(**(long **)puVar2 + 0x18))
                         (*(long **)puVar2,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar5 = FUN_006bd550(*puVar8,0);
      if (iVar5 == 0x758f7eaf) {
        if (DAT_05aed670 == 0) goto LAB_00970380;
        iVar5 = 0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          iVar5 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x248);
        }
        goto LAB_00970370;
      }
      uVar10 = 0;
      if (param_1 != 1) {
        uVar10 = uVar11;
      }
      if (DAT_05aed670 != 0) goto LAB_009703a0;
      goto LAB_00970448;
    }
LAB_00970370:
    uVar10 = 0;
    if (iVar5 != 0 || param_1 != 1) {
      uVar10 = uVar11;
    }
LAB_009703a0:
    if (*(long *)(DAT_05aed670 + 0x330) == 0) {
LAB_00970400:
      iVar5 = 0;
      lVar9 = DAT_05aed670;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar8 = (undefined8 *)
                 (**(code **)(**(long **)puVar2 + 0x18))
                           (*(long **)puVar2,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar5 = FUN_006bd550(*puVar8,0);
        if ((iVar5 != 0x758f7eaf) || (DAT_05aed670 == 0)) goto LAB_00970448;
        iVar5 = 0;
        lVar9 = DAT_05aed670;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          iVar5 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x248);
        }
      }
    }
    else {
      puVar8 = (undefined8 *)
               (**(code **)(**(long **)puVar2 + 0x18))
                         (*(long **)puVar2,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar5 = FUN_006bd550(*puVar8,0);
      if (iVar5 == 0x758f7eaf) {
        if (DAT_05aed670 != 0) {
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            uVar1 = 0;
            if (1 < param_1 - 1) {
              uVar1 = uVar11;
            }
            if (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x248) != 1) {
              uVar1 = uVar10;
            }
            uVar10 = uVar1;
          }
          goto LAB_00970400;
        }
      }
      else if (DAT_05aed670 != 0) goto LAB_00970400;
LAB_00970448:
      iVar5 = 0;
      lVar9 = DAT_05aed670;
    }
LAB_0097044c:
    uVar11 = 0;
    if (iVar5 != 2 || 1 < param_1) {
      uVar11 = uVar10;
    }
  }
  if (lVar9 == 0) {
LAB_009704a4:
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    if (*(long *)(lVar9 + 0x330) != 0) {
      puVar8 = (undefined8 *)
               (**(code **)(**(long **)puVar2 + 0x18))
                         (*(long **)puVar2,*(undefined4 *)(lVar9 + 0x338));
      iVar5 = FUN_006bd550(*puVar8,0);
      lVar9 = DAT_05aed670;
      if ((iVar5 != 0x758f7eaf) || (DAT_05aed670 == 0)) goto LAB_009704a4;
      iVar5 = 0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        iVar5 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
      }
    }
  }
  uVar10 = uVar11;
  if (*(int *)(puVar3 + 0x24) == iVar5) {
    if (lVar9 == 0) goto LAB_00970564;
    if (*(long *)(lVar9 + 0x330) == 0) {
LAB_00970514:
      bVar4 = false;
      if (*(long *)(lVar9 + 0x330) != 0) {
        puVar8 = (undefined8 *)
                 (**(code **)(**(long **)puVar2 + 0x18))
                           (*(long **)puVar2,*(undefined4 *)(lVar9 + 0x338));
        iVar5 = FUN_006bd550(*puVar8,0);
        lVar9 = DAT_05aed670;
        if ((iVar5 != 0x758f7eaf) || (DAT_05aed670 == 0)) goto LAB_00970564;
        bVar4 = false;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          bVar4 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x248) == 2;
        }
      }
LAB_00970568:
      uVar10 = 0;
      if (!(bool)(param_1 == 1 & bVar4)) {
        uVar10 = uVar11;
      }
      goto LAB_00970578;
    }
    puVar8 = (undefined8 *)
             (**(code **)(**(long **)puVar2 + 0x18))
                       (*(long **)puVar2,*(undefined4 *)(lVar9 + 0x338));
    iVar5 = FUN_006bd550(*puVar8,0);
    lVar9 = DAT_05aed670;
    if (iVar5 != 0x758f7eaf) {
      if (DAT_05aed670 != 0) goto LAB_00970514;
LAB_00970564:
      bVar4 = false;
      goto LAB_00970568;
    }
    if (DAT_05aed670 == 0) goto LAB_00970564;
    if ((*(long *)(DAT_05aed670 + 0x330) == 0) ||
       (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x248) != 1)) goto LAB_00970514;
    uVar10 = 0;
    if (1 < param_1) {
      uVar10 = uVar11;
    }
  }
  else {
LAB_00970578:
    iVar5 = 0;
    if (lVar9 == 0) goto LAB_009705c8;
  }
  if (*(long *)(lVar9 + 0x330) != 0) {
    puVar8 = (undefined8 *)
             (**(code **)(**(long **)puVar2 + 0x18))
                       (*(long **)puVar2,*(undefined4 *)(lVar9 + 0x338));
    iVar5 = FUN_006bd550(*puVar8,0);
    if (iVar5 == 0x758f7eaf) {
      iVar5 = 0;
      if (DAT_05aed670 != 0) {
        iVar5 = 0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          iVar5 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
        }
      }
      goto LAB_009705c8;
    }
  }
  iVar5 = 0;
LAB_009705c8:
  if (*(int *)(puVar3 + 0x8c) != iVar5) {
    return uVar10;
  }
  if ((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
    puVar8 = (undefined8 *)
             (**(code **)(**(long **)puVar2 + 0x18))
                       (*(long **)puVar2,*(undefined4 *)(DAT_05aed670 + 0x338));
    iVar5 = FUN_006bd550(*puVar8,0);
    if ((iVar5 == 0x758f7eaf) &&
       (((DAT_05aed670 != 0 && (*(long *)(DAT_05aed670 + 0x330) != 0)) &&
        (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x248) != 0)))) {
      return uVar10;
    }
  }
  return 3;
}

