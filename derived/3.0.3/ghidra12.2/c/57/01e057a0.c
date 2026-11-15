
void FUN_01e057a0(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  char *pcVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  int iVar18;
  undefined1 *puVar19;
  undefined4 *local_48;
  char *pcStack_40;
  undefined4 local_34;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x6f0));
  puVar6 = PTR_DAT_04bb36f0;
  puVar7 = local_48;
  if ((*(char *)(param_1 + 0x108) == '\0') || (*(char *)(param_1 + 0x109) == '\0')) {
    if ((*(char *)(param_1 + 0x108) != '\0') &&
       ((*(char *)(param_1 + 0x109) == '\0' && (*(int *)(DAT_05358908 + 0x78) != 0)))) {
      local_48 = (undefined4 *)CONCAT44(local_48._4_4_,0xf);
      puVar7 = local_48;
      lVar9 = *(long *)PTR_DAT_04bb36f0;
      local_48._0_4_ = 0xf;
      if (*(uint *)(lVar9 + 0x20) < 0x10) {
        local_48._0_4_ = 0;
      }
      if (*(char *)(*(long *)(lVar9 + 0x28) + (long)(int)local_48 * 0x38 + 0x2c) != '\0') {
        if (*(int *)(param_1 + 0x140) != 0) {
          plVar10 = *(long **)(param_1 + 0x148);
          lVar14 = (long)*(int *)(param_1 + 0x140) << 3;
          do {
            lVar17 = *plVar10;
            if (*(char *)(lVar17 + 0xfb0) != '\0' && *(char *)(lVar17 + 0xfb1) == '\0') {
              *(undefined1 *)(lVar17 + 0xfb0) = 0;
              *(undefined8 *)(lVar17 + 0xfa8) = 0;
            }
            if (*(char *)(lVar17 + 0xfc0) != '\0' && *(char *)(lVar17 + 0xfc1) == '\0') {
              *(undefined1 *)(lVar17 + 0xfc0) = 0;
              *(undefined8 *)(lVar17 + 0xfb8) = 0;
            }
            if (*(char *)(lVar17 + 0xfd0) != '\0' && *(char *)(lVar17 + 0xfd1) == '\0') {
              *(undefined1 *)(lVar17 + 0xfd0) = 0;
              *(undefined8 *)(lVar17 + 0xfc8) = 0;
            }
            plVar10 = plVar10 + 1;
            lVar14 = lVar14 + -8;
          } while (lVar14 != 0);
        }
        if (*(int *)(param_1 + 0x1b0) != 0) {
          plVar10 = *(long **)(param_1 + 0x1b8);
          lVar14 = (long)*(int *)(param_1 + 0x1b0) << 3;
          do {
            lVar17 = *plVar10;
            if (*(char *)(lVar17 + 0xfb0) != '\0' && *(char *)(lVar17 + 0xfb1) == '\0') {
              *(undefined1 *)(lVar17 + 0xfb0) = 0;
              *(undefined8 *)(lVar17 + 0xfa8) = 0;
            }
            if (*(char *)(lVar17 + 0xfc0) != '\0' && *(char *)(lVar17 + 0xfc1) == '\0') {
              *(undefined1 *)(lVar17 + 0xfc0) = 0;
              *(undefined8 *)(lVar17 + 0xfb8) = 0;
            }
            if (*(char *)(lVar17 + 0xfd0) != '\0' && *(char *)(lVar17 + 0xfd1) == '\0') {
              *(undefined1 *)(lVar17 + 0xfd0) = 0;
              *(undefined8 *)(lVar17 + 0xfc8) = 0;
            }
            plVar10 = plVar10 + 1;
            lVar14 = lVar14 + -8;
          } while (lVar14 != 0);
        }
        if (*(int *)(param_1 + 0x1d8) != 0) {
          plVar10 = *(long **)(param_1 + 0x1e0);
          lVar14 = (long)*(int *)(param_1 + 0x1d8) << 3;
          do {
            lVar17 = *plVar10;
            if (*(char *)(lVar17 + 0xfb0) != '\0' && *(char *)(lVar17 + 0xfb1) == '\0') {
              *(undefined1 *)(lVar17 + 0xfb0) = 0;
              *(undefined8 *)(lVar17 + 0xfa8) = 0;
            }
            if (*(char *)(lVar17 + 0xfc0) != '\0' && *(char *)(lVar17 + 0xfc1) == '\0') {
              *(undefined1 *)(lVar17 + 0xfc0) = 0;
              *(undefined8 *)(lVar17 + 0xfb8) = 0;
            }
            if (*(char *)(lVar17 + 0xfd0) != '\0' && *(char *)(lVar17 + 0xfd1) == '\0') {
              *(undefined1 *)(lVar17 + 0xfd0) = 0;
              *(undefined8 *)(lVar17 + 0xfc8) = 0;
            }
            plVar10 = plVar10 + 1;
            lVar14 = lVar14 + -8;
          } while (lVar14 != 0);
        }
        if (*(int *)(param_1 + 0x220) != 0) {
          plVar10 = *(long **)(param_1 + 0x228);
          lVar14 = (long)*(int *)(param_1 + 0x220) << 3;
          do {
            lVar17 = *plVar10;
            if (*(char *)(lVar17 + 0xfb0) != '\0' && *(char *)(lVar17 + 0xfb1) == '\0') {
              *(undefined1 *)(lVar17 + 0xfb0) = 0;
              *(undefined8 *)(lVar17 + 0xfa8) = 0;
            }
            if (*(char *)(lVar17 + 0xfc0) != '\0' && *(char *)(lVar17 + 0xfc1) == '\0') {
              *(undefined1 *)(lVar17 + 0xfc0) = 0;
              *(undefined8 *)(lVar17 + 0xfb8) = 0;
            }
            if (*(char *)(lVar17 + 0xfd0) != '\0' && *(char *)(lVar17 + 0xfd1) == '\0') {
              *(undefined1 *)(lVar17 + 0xfd0) = 0;
              *(undefined8 *)(lVar17 + 0xfc8) = 0;
            }
            plVar10 = plVar10 + 1;
            lVar14 = lVar14 + -8;
          } while (lVar14 != 0);
        }
        *(undefined2 *)(param_1 + 0x108) = 0x101;
        local_48 = (undefined4 *)CONCAT44(local_48._4_4_,0xf);
        puVar7 = local_48;
        local_48._0_4_ = 0xf;
        if (*(uint *)(lVar9 + 0x20) < 0x10) {
          local_48._0_4_ = 0;
        }
        *(undefined1 *)(*(long *)(lVar9 + 0x28) + (long)(int)local_48 * 0x38 + 0x2c) = 0;
        iVar2 = 0xf;
        if (*(uint *)(lVar9 + 0x20) < 0x10) {
          iVar2 = 0;
        }
        *(undefined1 *)(*(long *)(lVar9 + 0x28) + (long)iVar2 * 0x38 + 0x2d) = 0;
        local_48._0_4_ = 0xf;
        if (*(uint *)(lVar9 + 0x20) < 0x10) {
          local_48._0_4_ = 0;
        }
        *(undefined4 *)(*(long *)(lVar9 + 0x28) + (long)(int)local_48 * 0x38) = 1;
        iVar2 = 0xf;
        if (*(uint *)(lVar9 + 0x20) < 0x10) {
          iVar2 = 0;
        }
        *(undefined1 *)(*(long *)(lVar9 + 0x28) + (long)iVar2 * 0x38 + 0x2f) = 0;
      }
    }
  }
  else if (*(int *)(DAT_05358908 + 0x78) == 0) {
    *(undefined2 *)(param_1 + 0x108) = 1;
    lVar9 = *(long *)puVar6;
    local_48._0_4_ = 0xf;
    if (*(uint *)(lVar9 + 0x20) < 0x10) {
      local_48._0_4_ = 0;
    }
    if (*(char *)(*(long *)(lVar9 + 0x28) + (long)(int)local_48 * 0x38 + 0x2c) != '\0') {
      local_48._0_4_ = 0xf;
      if (*(uint *)(lVar9 + 0x20) < 0x10) {
        local_48._0_4_ = 0;
      }
      *(undefined1 *)(*(long *)(lVar9 + 0x28) + (long)(int)local_48 * 0x38 + 0x2c) = 0;
      iVar2 = 0xf;
      if (*(uint *)(lVar9 + 0x20) < 0x10) {
        iVar2 = 0;
      }
      *(undefined1 *)(*(long *)(lVar9 + 0x28) + (long)iVar2 * 0x38 + 0x2d) = 0;
      local_48._0_4_ = 0xf;
      if (*(uint *)(lVar9 + 0x20) < 0x10) {
        local_48._0_4_ = 0;
      }
      *(undefined4 *)(*(long *)(lVar9 + 0x28) + (long)(int)local_48 * 0x38) = 0;
      iVar2 = 0xf;
      if (*(uint *)(lVar9 + 0x20) < 0x10) {
        iVar2 = 0;
      }
      *(undefined1 *)(*(long *)(lVar9 + 0x28) + (long)iVar2 * 0x38 + 0x2f) = 0;
    }
    local_48 = (undefined4 *)CONCAT44(local_48._4_4_,0xf);
    if (*(int *)(param_1 + 0x140) != 0) {
      plVar10 = *(long **)(param_1 + 0x148);
      lVar9 = (long)*(int *)(param_1 + 0x140) << 3;
      do {
        lVar14 = *plVar10;
        if (*(char *)(lVar14 + 0xfb0) == '\0') {
          *(undefined2 *)(lVar14 + 0xfb0) = 1;
          if (*(char *)(lVar14 + 0xfc0) == '\0') goto LAB_01e058ec;
LAB_01e058d0:
          cVar5 = *(char *)(lVar14 + 0xfd0);
        }
        else {
          if (*(char *)(lVar14 + 0xfc0) != '\0') goto LAB_01e058d0;
LAB_01e058ec:
          *(undefined2 *)(lVar14 + 0xfc0) = 1;
          cVar5 = *(char *)(lVar14 + 0xfd0);
        }
        if (cVar5 == '\0') {
          *(undefined2 *)(lVar14 + 0xfd0) = 1;
        }
        plVar10 = plVar10 + 1;
        lVar9 = lVar9 + -8;
      } while (lVar9 != 0);
    }
    if (*(int *)(param_1 + 0x1b0) != 0) {
      plVar10 = *(long **)(param_1 + 0x1b8);
      lVar9 = (long)*(int *)(param_1 + 0x1b0) << 3;
      do {
        lVar14 = *plVar10;
        if (*(char *)(lVar14 + 0xfb0) == '\0') {
          *(undefined2 *)(lVar14 + 0xfb0) = 1;
          if (*(char *)(lVar14 + 0xfc0) == '\0') goto LAB_01e05a2c;
LAB_01e05a10:
          cVar5 = *(char *)(lVar14 + 0xfd0);
        }
        else {
          if (*(char *)(lVar14 + 0xfc0) != '\0') goto LAB_01e05a10;
LAB_01e05a2c:
          *(undefined2 *)(lVar14 + 0xfc0) = 1;
          cVar5 = *(char *)(lVar14 + 0xfd0);
        }
        if (cVar5 == '\0') {
          *(undefined2 *)(lVar14 + 0xfd0) = 1;
        }
        plVar10 = plVar10 + 1;
        lVar9 = lVar9 + -8;
      } while (lVar9 != 0);
    }
    if (*(int *)(param_1 + 0x1d8) != 0) {
      plVar10 = *(long **)(param_1 + 0x1e0);
      lVar9 = (long)*(int *)(param_1 + 0x1d8) << 3;
      do {
        lVar14 = *plVar10;
        if (*(char *)(lVar14 + 0xfb0) == '\0') {
          *(undefined2 *)(lVar14 + 0xfb0) = 1;
          if (*(char *)(lVar14 + 0xfc0) == '\0') goto LAB_01e05a9c;
LAB_01e05a80:
          cVar5 = *(char *)(lVar14 + 0xfd0);
        }
        else {
          if (*(char *)(lVar14 + 0xfc0) != '\0') goto LAB_01e05a80;
LAB_01e05a9c:
          *(undefined2 *)(lVar14 + 0xfc0) = 1;
          cVar5 = *(char *)(lVar14 + 0xfd0);
        }
        if (cVar5 == '\0') {
          *(undefined2 *)(lVar14 + 0xfd0) = 1;
        }
        plVar10 = plVar10 + 1;
        lVar9 = lVar9 + -8;
      } while (lVar9 != 0);
    }
    puVar7 = local_48;
    if (*(int *)(param_1 + 0x220) != 0) {
      plVar10 = *(long **)(param_1 + 0x228);
      lVar9 = (long)*(int *)(param_1 + 0x220) << 3;
      do {
        lVar14 = *plVar10;
        if (*(char *)(lVar14 + 0xfb0) == '\0') {
          *(undefined2 *)(lVar14 + 0xfb0) = 1;
          if (*(char *)(lVar14 + 0xfc0) == '\0') goto LAB_01e05b0c;
LAB_01e05af0:
          cVar5 = *(char *)(lVar14 + 0xfd0);
        }
        else {
          if (*(char *)(lVar14 + 0xfc0) != '\0') goto LAB_01e05af0;
LAB_01e05b0c:
          *(undefined2 *)(lVar14 + 0xfc0) = 1;
          cVar5 = *(char *)(lVar14 + 0xfd0);
        }
        if (cVar5 == '\0') {
          *(undefined2 *)(lVar14 + 0xfd0) = 1;
        }
        plVar10 = plVar10 + 1;
        lVar9 = lVar9 + -8;
      } while (lVar9 != 0);
    }
  }
  local_48 = puVar7;
  lVar9 = *(long *)(param_1 + 0x6b0);
  if (lVar9 != 0) {
    uVar8 = *(uint *)(lVar9 + 0x38);
    if ((uVar8 == 0xffffffff) && (*(char *)(lVar9 + 0x50) != '\0')) {
      puVar19 = (undefined1 *)(lVar9 + 0x51);
      *puVar19 = 1;
      uVar4 = *(undefined4 *)(lVar9 + 0x3c);
      *(undefined8 *)(lVar9 + 0x3c) = 0xffffffff00000000;
      *(undefined4 *)(lVar9 + 0x44) = uVar4;
      uVar8 = *(uint *)(lVar9 + 0x48);
      *(uint *)(lVar9 + 0x38) = uVar8;
      if (uVar8 != 0xffffffff) {
        uVar12 = *(uint *)(lVar9 + 0x58);
        lVar14 = *(long *)(lVar9 + 0x60);
        uVar1 = uVar8;
        if (uVar12 <= uVar8) {
          uVar1 = 0;
        }
        puVar15 = *(undefined8 **)(lVar14 + (long)(int)uVar1 * 0x40);
        if (puVar15 != (undefined8 *)0x0) {
          (*(code *)*puVar15)();
          uVar8 = *(uint *)(lVar9 + 0x38);
          goto LAB_01e05d94;
        }
        *puVar19 = 0;
        goto LAB_01e05dbc;
      }
      *puVar19 = 0;
    }
    else {
LAB_01e05d94:
      *(undefined1 *)(lVar9 + 0x51) = 0;
      if (uVar8 != 0xffffffff) {
        uVar12 = *(uint *)(lVar9 + 0x58);
        lVar14 = *(long *)(lVar9 + 0x60);
LAB_01e05dbc:
        if (uVar12 <= uVar8) {
          uVar8 = 0;
        }
        lVar14 = *(long *)(lVar14 + (long)(int)uVar8 * 0x40);
        if ((lVar14 != 0) && ((**(code **)(lVar14 + 8))(), *(char *)(lVar9 + 0x51) != '\0'))
        goto LAB_01e05df0;
      }
    }
    *(int *)(lVar9 + 0x3c) = *(int *)(lVar9 + 0x3c) + 1;
  }
LAB_01e05df0:
  nn::os::LockMutex((MutexType *)(param_1 + 0x658));
  uVar8 = *(uint *)(param_1 + 0x10);
  if ((uVar8 == 0xffffffff) && (*(char *)(param_1 + 0x28) != '\0')) {
    puVar19 = (undefined1 *)(param_1 + 0x29);
    *puVar19 = 1;
    uVar4 = *(undefined4 *)(param_1 + 0x14);
    *(undefined8 *)(param_1 + 0x14) = 0xffffffff00000000;
    *(undefined4 *)(param_1 + 0x1c) = uVar4;
    uVar8 = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x10) = uVar8;
    if (uVar8 != 0xffffffff) {
      uVar12 = *(uint *)(param_1 + 0x30);
      lVar9 = *(long *)(param_1 + 0x38);
      uVar1 = uVar8;
      if (uVar12 <= uVar8) {
        uVar1 = 0;
      }
      puVar15 = *(undefined8 **)(lVar9 + (long)(int)uVar1 * 0x40);
      if (puVar15 != (undefined8 *)0x0) {
        (*(code *)*puVar15)();
        uVar8 = *(uint *)(param_1 + 0x10);
        goto LAB_01e05e68;
      }
      *puVar19 = 0;
      goto LAB_01e05e90;
    }
    *puVar19 = 0;
LAB_01e05eb8:
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  else {
LAB_01e05e68:
    *(undefined1 *)(param_1 + 0x29) = 0;
    if (uVar8 == 0xffffffff) goto LAB_01e05eb8;
    uVar12 = *(uint *)(param_1 + 0x30);
    lVar9 = *(long *)(param_1 + 0x38);
LAB_01e05e90:
    if (uVar12 <= uVar8) {
      uVar8 = 0;
    }
    lVar9 = *(long *)(lVar9 + (long)(int)uVar8 * 0x40);
    if ((lVar9 == 0) || ((**(code **)(lVar9 + 8))(), *(char *)(param_1 + 0x29) == '\0'))
    goto LAB_01e05eb8;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x658));
  pcVar11 = *(char **)(param_1 + 0x60);
  if (pcVar11 == (char *)0x0) goto LAB_01e0611c;
  iVar2 = *(int *)(param_1 + 0x10);
  if (*pcVar11 != '\0') {
    lVar9 = *(long *)(pcVar11 + 8);
    if (*(int *)(lVar9 + 0x38) != 0) {
      iVar3 = *(int *)(lVar9 + 0xa8);
      lVar14 = *(long *)(lVar9 + 0x800a0);
      iVar18 = *(int *)(lVar14 + 0x68);
      if ((*(int *)(lVar9 + 0x38) == 1) && (iVar18 == 0)) {
        if (iVar3 == 0) goto LAB_01e05f10;
LAB_01e05f60:
        if (0 < iVar3) {
          lVar14 = 0;
          puVar15 = *(undefined8 **)(lVar9 + 0xb8);
          do {
            puVar16 = *(undefined8 **)(*(long *)(lVar9 + 0xb0) + lVar14 * 8);
            lVar14 = lVar14 + 1;
            *puVar16 = puVar15;
            *(undefined8 **)(lVar9 + 0xb8) = puVar16;
            puVar15 = puVar16;
          } while (lVar14 < *(int *)(lVar9 + 0xa8));
          lVar14 = *(long *)(lVar9 + 0x800a0);
        }
        *(undefined4 *)(lVar9 + 0xa8) = 0;
        iVar18 = *(int *)(lVar14 + 0x68);
      }
      else if (iVar3 != 0) goto LAB_01e05f60;
      if (iVar18 != 0) {
        if (*(long *)(lVar14 + 0x60) != lVar14 + 0x58) {
          lVar13 = (long)*(int *)(lVar14 + 0x6c);
          lVar17 = *(long *)(lVar14 + 0x60) - lVar13;
          lVar9 = lVar17 + lVar13;
          do {
            lVar9 = *(long *)(lVar9 + 8);
            if (*(long *)(lVar17 + 0xfe8) != 0) {
              *(undefined1 *)(*(long *)(lVar17 + 0xfe8) + 0x5a) = 1;
            }
            lVar17 = lVar9 - lVar13;
          } while (lVar17 != (lVar14 + 0x58) - lVar13);
        }
      }
      goto LAB_01e0611c;
    }
LAB_01e05f10:
    *pcVar11 = '\0';
  }
  if ((iVar2 != 0) || (pcVar11[0x10] != '\0')) goto LAB_01e0611c;
  lVar9 = *(long *)(pcVar11 + 8);
  if (*(int *)(lVar9 + 0x38) == 0) {
    if (*(int *)(param_1 + 0x10) != 0) goto LAB_01e0611c;
  }
  else if (((*(int *)(lVar9 + 0x38) != 1) || (*(int *)(*(long *)(lVar9 + 0x800a0) + 0x68) != 0)) ||
          (*(int *)(lVar9 + 0xa8) != 0 || *(int *)(param_1 + 0x10) != 0)) goto LAB_01e0611c;
  local_34 = 4;
  local_48 = &local_34;
  pcStack_40 = pcVar11;
  if (DAT_0538adc0 == 0) {
    FUN_01e08f90(&local_48,param_1 + 0x170);
    if (DAT_0538adc0 == 1) goto LAB_01e06054;
LAB_01e0601c:
    if (DAT_0538adc0 != 2) goto LAB_01e06024;
LAB_01e0606c:
    FUN_01e09290(&local_48,param_1 + 0x1b0);
    if (DAT_0538adc0 == 4) goto LAB_01e06084;
LAB_01e0602c:
    if (DAT_0538adc0 != 3) goto LAB_01e06034;
LAB_01e0609c:
    FUN_01e09290(&local_48,param_1 + 0x1d8);
    if (DAT_0538adc0 != 0) goto LAB_01e060b0;
LAB_01e060c8:
    FUN_01e08f90(&local_48,param_1 + 0x180);
    if (DAT_0538adc0 != 2) goto LAB_01e060e0;
LAB_01e060f8:
    FUN_01e09290(&local_48,param_1 + 0x220);
    if (DAT_0538adc0 == 3) goto LAB_01e0611c;
  }
  else {
    if (DAT_0538adc0 != 1) goto LAB_01e0601c;
LAB_01e06054:
    FUN_01e08f90(&local_48,param_1 + 0x180);
    if (DAT_0538adc0 == 2) goto LAB_01e0606c;
LAB_01e06024:
    if (DAT_0538adc0 != 4) goto LAB_01e0602c;
LAB_01e06084:
    FUN_01e09290(&local_48,param_1 + 0x220);
    if (DAT_0538adc0 == 3) goto LAB_01e0609c;
LAB_01e06034:
    if (DAT_0538adc0 == 0) goto LAB_01e060c8;
LAB_01e060b0:
    FUN_01e08f90(&local_48,param_1 + 0x170);
    if (DAT_0538adc0 != 1) goto LAB_01e060c8;
LAB_01e060e0:
    FUN_01e09290(&local_48,param_1 + 0x1b0);
    if (DAT_0538adc0 != 4) goto LAB_01e060f8;
  }
  FUN_01e09290(&local_48,param_1 + 0x1d8);
LAB_01e0611c:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x6f0));
  return;
}

