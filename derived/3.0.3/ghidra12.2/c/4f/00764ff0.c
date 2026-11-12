
void FUN_00764ff0(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  void *__dest;
  undefined8 *puVar12;
  void *__src;
  char *__dest_00;
  long *plVar13;
  long lVar14;
  undefined1 *puVar15;
  
  switch(*param_1) {
  case 0:
    if (**(char **)(param_1 + 0x10) == '\0') {
      return;
    }
    if (*(long *)(param_1 + 2) == 0) {
      return;
    }
    plVar13 = (long *)(param_1 + 0xe);
    lVar9 = *(long *)(param_1 + 0x24);
    __dest = *(void **)(lVar9 + 8);
    (**(code **)(*plVar13 + 0x18))(plVar13);
    __src = *(void **)(param_1 + 0x10);
    if (__dest != __src) {
      (**(code **)(*(long *)(param_1 + 0xe) + 0x18))(plVar13);
      lVar8 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x10) + lVar8) == '\0') goto LAB_0076537c;
        lVar14 = *(long *)(param_1 + 0x10) + lVar8;
        if (*(char *)(lVar14 + 1) == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_0076537c;
        }
        if (*(char *)(lVar14 + 2) == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_0076537c;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_0076537c:
      iVar4 = *(int *)(lVar9 + 0x10);
      iVar5 = (int)lVar8;
      if (iVar4 <= (int)lVar8) {
        iVar5 = iVar4 + -1;
      }
      memcpy(__dest,__src,(long)iVar5);
      *(undefined1 *)((long)__dest + (long)iVar5) = 0;
    }
    FUN_0074fad0(*(undefined8 *)(param_1 + 2),*(undefined4 *)(*(long *)(param_1 + 0x24) + 0x58),
                 *(long *)(param_1 + 0x24),0);
    uVar7 = 1;
    goto LAB_007653bc;
  case 1:
    lVar9 = *(long *)(param_1 + 2);
    if (lVar9 == 0) {
      return;
    }
    uVar3 = *(uint *)(*(long *)(param_1 + 0x24) + 0x58);
    lVar8 = *(long *)(lVar9 + 0x298);
    if (lVar8 != 0) {
      uVar2 = uVar3;
      if (*(uint *)(lVar9 + 0x290) <= uVar3) {
        uVar2 = 0;
      }
      lVar14 = lVar8 + (long)(int)uVar2 * 0x110;
      if (*(long *)(lVar14 + 0x10) == 0 && *(long *)(lVar14 + 8) == 0) {
        return;
      }
    }
    if (*(uint *)(lVar9 + 0x290) <= uVar3) {
      uVar3 = 0;
    }
    if ((*(byte *)(lVar8 + (long)(int)uVar3 * 0x110 + 0x30) >> 1 & 1) == 0) {
      return;
    }
    uVar6 = FUN_03f2d924(lVar8 + (long)(int)uVar3 * 0x110 + 0x28);
    if ((uVar6 & 1) == 0) {
      return;
    }
    uVar7 = 2;
    goto LAB_007653bc;
  case 2:
    if (*(char *)(param_1 + 0x5a) != '\0') {
      return;
    }
    uVar7 = 3;
LAB_007653bc:
    *param_1 = uVar7;
    break;
  case 3:
    lVar9 = FUN_0074f690(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_1 + 0x24));
    lVar8 = *(long *)(param_1 + 0x26);
    if (**(char **)(lVar8 + 8) != '\0') {
      uVar3 = *(uint *)(lVar8 + 0x58);
      lVar14 = *(long *)(*(long *)(param_1 + 2) + 0x298);
      uVar2 = *(uint *)(*(long *)(param_1 + 2) + 0x290);
      if (lVar14 != 0) {
        uVar1 = uVar3;
        if (uVar2 <= uVar3) {
          uVar1 = 0;
        }
        lVar11 = lVar14 + (long)(int)uVar1 * 0x110;
        if (*(long *)(lVar11 + 0x10) == 0 && *(long *)(lVar11 + 8) == 0) goto LAB_00765204;
      }
      if (uVar2 <= uVar3) {
        uVar3 = 0;
      }
      puVar15 = (undefined1 *)(lVar14 + (long)(int)uVar3 * 0x110);
      __dest_00 = *(char **)(puVar15 + 0x70);
      if (__dest_00 != "invalid_name") {
        iVar5 = 0xc;
        if (*(int *)(puVar15 + 0x78) < 0xd) {
          iVar5 = *(int *)(puVar15 + 0x78) + -1;
        }
        memcpy(__dest_00,"invalid_name",(long)iVar5);
        __dest_00[iVar5] = '\0';
      }
      *(undefined4 *)(lVar14 + (long)(int)uVar3 * 0x110 + 0x100) = 0;
      *puVar15 = 1;
      lVar8 = *(long *)(param_1 + 0x26);
    }
LAB_00765204:
    plVar13 = (long *)(param_1 + 6);
    uVar10 = *(undefined8 *)(param_1 + 0x24);
    *(long *)(param_1 + 0x24) = lVar8;
    *(undefined8 *)(param_1 + 0x26) = uVar10;
    uVar6 = (**(code **)(*plVar13 + 0x10))(plVar13);
    if ((lVar9 != 0) && ((uVar6 & 1) != 0)) {
      (**(code **)*plVar13)(plVar13,lVar9);
    }
    *param_1 = 4;
    param_1[0x5b] = 3;
    break;
  case 4:
    if (param_1[0x5b] == 0) {
      *param_1 = 5;
    }
    param_1[0x5b] = param_1[0x5b] + -1;
    break;
  case 5:
    lVar9 = *(long *)(param_1 + 2);
    if ((lVar9 != 0) && (*(long *)(lVar9 + 0x298) != 0)) {
      lVar8 = *(long *)(param_1 + 0x24);
      uVar3 = *(uint *)(lVar8 + 0x58);
      if (*(uint *)(lVar9 + 0x290) <= uVar3) {
        uVar3 = 0;
      }
      lVar9 = *(long *)(lVar9 + 0x298) + (long)(int)uVar3 * 0x110;
      if (*(long *)(lVar9 + 0x10) == 0 && *(long *)(lVar9 + 8) == 0) {
        puVar12 = *(undefined8 **)(lVar8 + 8);
        if (puVar12 != &DAT_0407ebb1) {
          iVar5 = 0;
          if (*(int *)(lVar8 + 0x10) < 1) {
            iVar5 = *(int *)(lVar8 + 0x10) + -1;
          }
          memset(puVar12,0,(long)iVar5);
          *(undefined1 *)((long)puVar12 + (long)iVar5) = 0;
        }
        if ((((**(char **)(*(long *)(param_1 + 0x26) + 8) != '\0') && (*(long *)(param_1 + 2) != 0))
            && (lVar9 = FUN_0074eb00(), lVar9 != 0)) && ((*(byte *)(lVar9 + 0x18) >> 1 & 1) != 0)) {
          uVar6 = FUN_03f2d924(lVar9 + 0x10);
          if ((uVar6 & 1) != 0) {
            iVar5 = FUN_03f2da54(lVar9 + 0x10);
            if (*(ulong *)(param_1 + 0x58) < (ulong)(long)iVar5) {
              *(long *)(param_1 + 0x58) = (long)iVar5;
            }
          }
        }
        puVar12 = *(undefined8 **)(param_1 + 0x10);
        if (puVar12 != &DAT_0407ebb1) {
          iVar5 = 0;
          if ((int)param_1[0x12] < 1) {
            iVar5 = param_1[0x12] + -1;
          }
          memset(puVar12,0,(long)iVar5);
          *(undefined1 *)((long)puVar12 + (long)iVar5) = 0;
        }
        *param_1 = 0;
      }
    }
  }
  return;
}

