
void FUN_01dceef0(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined1 *puVar12;
  int local_34;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1a0));
  if ((*(char *)(param_1 + 0x161) == '\0') || (*(char *)(param_1 + 0x162) == '\0')) {
    if ((*(char *)(param_1 + 0x161) != '\0') &&
       ((*(char *)(param_1 + 0x162) == '\0' && (*(int *)(DAT_05358908 + 0x78) != 0)))) {
      lVar5 = *(long *)PTR_DAT_04bb36f0;
      iVar2 = 10;
      if (*(uint *)(lVar5 + 0x20) < 0xb) {
        iVar2 = 0;
      }
      if (*(char *)(*(long *)(lVar5 + 0x28) + (long)iVar2 * 0x38 + 0x2c) != '\0') {
        *(undefined2 *)(param_1 + 0x161) = 0x101;
        iVar2 = 10;
        if (*(uint *)(lVar5 + 0x20) < 0xb) {
          iVar2 = 0;
        }
        *(undefined1 *)(*(long *)(lVar5 + 0x28) + (long)iVar2 * 0x38 + 0x2c) = 0;
        iVar2 = 10;
        if (*(uint *)(lVar5 + 0x20) < 0xb) {
          iVar2 = 0;
        }
        *(undefined1 *)(*(long *)(lVar5 + 0x28) + (long)iVar2 * 0x38 + 0x2d) = 0;
        iVar2 = 10;
        if (*(uint *)(lVar5 + 0x20) < 0xb) {
          iVar2 = 0;
        }
        *(undefined4 *)(*(long *)(lVar5 + 0x28) + (long)iVar2 * 0x38) = 1;
        goto LAB_01dcf094;
      }
    }
  }
  else if (*(int *)(DAT_05358908 + 0x78) == 0) {
    lVar5 = *(long *)PTR_DAT_04bb36f0;
    iVar2 = 10;
    if (*(uint *)(lVar5 + 0x20) < 0xb) {
      iVar2 = 0;
    }
    if (*(char *)(*(long *)(lVar5 + 0x28) + (long)iVar2 * 0x38 + 0x2c) != '\0') {
      *(undefined2 *)(param_1 + 0x161) = 1;
      iVar2 = 10;
      if (*(uint *)(lVar5 + 0x20) < 0xb) {
        iVar2 = 0;
      }
      *(undefined1 *)(*(long *)(lVar5 + 0x28) + (long)iVar2 * 0x38 + 0x2c) = 0;
      iVar2 = 10;
      if (*(uint *)(lVar5 + 0x20) < 0xb) {
        iVar2 = 0;
      }
      *(undefined1 *)(*(long *)(lVar5 + 0x28) + (long)iVar2 * 0x38 + 0x2d) = 0;
      iVar2 = 10;
      if (*(uint *)(lVar5 + 0x20) < 0xb) {
        iVar2 = 0;
      }
      *(undefined4 *)(*(long *)(lVar5 + 0x28) + (long)iVar2 * 0x38) = 0;
LAB_01dcf094:
      local_34 = 10;
      if (*(uint *)(lVar5 + 0x20) < 0xb) {
        local_34 = 0;
      }
      *(undefined1 *)(*(long *)(lVar5 + 0x28) + (long)local_34 * 0x38 + 0x2f) = 0;
    }
  }
  lVar5 = *(long *)(param_1 + 0x58);
  if (lVar5 != 0) {
    if (((*(char *)(param_1 + 0x161) == '\0') || (*(char *)(param_1 + 0x162) == '\0')) ||
       (*(char *)(param_1 + 0x163) != '\0')) {
      if (*(int *)(lVar5 + 0xe8) != 0) {
        if (0 < *(int *)(lVar5 + 0xe8)) {
          lVar6 = 0;
          puVar10 = *(undefined8 **)(lVar5 + 0xf8);
          do {
            puVar8 = *(undefined8 **)(*(long *)(lVar5 + 0xf0) + lVar6 * 8);
            lVar6 = lVar6 + 1;
            *puVar8 = puVar10;
            *(undefined8 **)(lVar5 + 0xf8) = puVar8;
            puVar10 = puVar8;
          } while (lVar6 < *(int *)(lVar5 + 0xe8));
        }
        *(undefined4 *)(lVar5 + 0xe8) = 0;
      }
      lVar5 = *(long *)(lVar5 + 0x3a438);
      if (*(int *)(lVar5 + 0x50) != 0) {
        if (*(long *)(lVar5 + 0x48) != lVar5 + 0x40) {
          lVar9 = (long)*(int *)(lVar5 + 0x54);
          lVar11 = *(long *)(lVar5 + 0x48) - lVar9;
          lVar6 = lVar11 + lVar9;
          do {
            lVar6 = *(long *)(lVar6 + 8);
            if (*(long *)(lVar11 + 0x6f8) != 0) {
              *(undefined1 *)(*(long *)(lVar11 + 0x6f8) + 0x5a) = 1;
            }
            lVar11 = lVar6 - lVar9;
          } while (lVar11 != (lVar5 + 0x40) - lVar9);
        }
      }
      FUN_01d6bde0(*(undefined8 *)(param_1 + 0x60));
      lVar5 = *(long *)(param_1 + 0x58);
      *(undefined1 *)(param_1 + 0x160) = 0;
    }
    uVar4 = *(uint *)(lVar5 + 0x30);
    if (uVar4 == 0xffffffff && *(char *)(lVar5 + 0x48) != '\0') {
      puVar12 = (undefined1 *)(lVar5 + 0x49);
      *puVar12 = 1;
      uVar3 = *(undefined4 *)(lVar5 + 0x34);
      *(undefined8 *)(lVar5 + 0x34) = 0xffffffff00000000;
      *(undefined4 *)(lVar5 + 0x3c) = uVar3;
      uVar4 = *(uint *)(lVar5 + 0x40);
      *(uint *)(lVar5 + 0x30) = uVar4;
      if (uVar4 != 0xffffffff) {
        uVar7 = *(uint *)(lVar5 + 0x50);
        lVar6 = *(long *)(lVar5 + 0x58);
        uVar1 = uVar4;
        if (uVar7 <= uVar4) {
          uVar1 = 0;
        }
        puVar10 = *(undefined8 **)(lVar6 + (long)(int)uVar1 * 0x40);
        if (puVar10 != (undefined8 *)0x0) {
          (*(code *)*puVar10)();
          uVar4 = *(uint *)(lVar5 + 0x30);
          goto LAB_01dcf1fc;
        }
        *puVar12 = 0;
        goto LAB_01dcf224;
      }
      *puVar12 = 0;
    }
    else {
LAB_01dcf1fc:
      *(undefined1 *)(lVar5 + 0x49) = 0;
      if (uVar4 != 0xffffffff) {
        uVar7 = *(uint *)(lVar5 + 0x50);
        lVar6 = *(long *)(lVar5 + 0x58);
LAB_01dcf224:
        if (uVar7 <= uVar4) {
          uVar4 = 0;
        }
        lVar6 = *(long *)(lVar6 + (long)(int)uVar4 * 0x40);
        if ((lVar6 != 0) && ((**(code **)(lVar6 + 8))(), *(char *)(lVar5 + 0x49) != '\0'))
        goto LAB_01dcf258;
      }
    }
    *(int *)(lVar5 + 0x34) = *(int *)(lVar5 + 0x34) + 1;
  }
LAB_01dcf258:
  uVar4 = *(uint *)(param_1 + 8);
  if ((uVar4 == 0xffffffff) && (*(char *)(param_1 + 0x20) != '\0')) {
    puVar12 = (undefined1 *)(param_1 + 0x21);
    *puVar12 = 1;
    uVar3 = *(undefined4 *)(param_1 + 0xc);
    *(undefined8 *)(param_1 + 0xc) = 0xffffffff00000000;
    *(undefined4 *)(param_1 + 0x14) = uVar3;
    uVar4 = *(uint *)(param_1 + 0x18);
    *(uint *)(param_1 + 8) = uVar4;
    if (uVar4 != 0xffffffff) {
      uVar7 = *(uint *)(param_1 + 0x28);
      lVar5 = *(long *)(param_1 + 0x30);
      uVar1 = uVar4;
      if (uVar7 <= uVar4) {
        uVar1 = 0;
      }
      puVar10 = *(undefined8 **)(lVar5 + (long)(int)uVar1 * 0x40);
      if (puVar10 != (undefined8 *)0x0) {
        (*(code *)*puVar10)();
        uVar4 = *(uint *)(param_1 + 8);
        goto LAB_01dcf2c4;
      }
      *puVar12 = 0;
      goto LAB_01dcf2ec;
    }
    *puVar12 = 0;
  }
  else {
LAB_01dcf2c4:
    *(undefined1 *)(param_1 + 0x21) = 0;
    if (uVar4 != 0xffffffff) {
      uVar7 = *(uint *)(param_1 + 0x28);
      lVar5 = *(long *)(param_1 + 0x30);
LAB_01dcf2ec:
      if (uVar7 <= uVar4) {
        uVar4 = 0;
      }
      lVar5 = *(long *)(lVar5 + (long)(int)uVar4 * 0x40);
      if ((lVar5 != 0) && ((**(code **)(lVar5 + 8))(), *(char *)(param_1 + 0x21) != '\0'))
      goto LAB_01dcf320;
    }
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
LAB_01dcf320:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1a0));
  return;
}

