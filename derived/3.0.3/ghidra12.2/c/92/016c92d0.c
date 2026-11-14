
void FUN_016c92d0(long *param_1,char *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (*(int *)(param_2 + 4) == -1) {
    return;
  }
  if (DAT_05574040 == 0) {
    return;
  }
  puVar12 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar8 = (**(code **)(*(long *)*puVar12 + 0x38))();
    if (lVar8 == 0) {
      return;
    }
    lVar8 = lVar8 + 0x70;
  }
  else {
    if (puVar12 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar12[0x26] == (long *)0x0) {
      return;
    }
    lVar8 = (**(code **)(*(long *)puVar12[0x26] + 0x38))();
    if (lVar8 == 0) {
      return;
    }
  }
  puVar2 = &LAB_002057b0 + lVar8;
  if (*param_2 != '\0') {
    puVar2 = (undefined1 *)(lVar8 + 0x20b9e8);
  }
  if (*(char *)param_1[1] == '\0') {
    return;
  }
  iVar5 = *(int *)(param_2 + 4);
  iVar7 = FUN_021d5df0(param_1);
  local_78 = CONCAT44(local_78._4_4_,iVar7);
  if ((iVar7 != 0) && (iVar7 != 1)) {
    return;
  }
  lVar8 = *(long *)(puVar2 + (long)iVar5 * 0xc40 + 0x6f0);
  if (lVar8 == 0) {
    uVar9 = 0;
  }
  else {
    if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      lVar8 = *(long *)(puVar2 + (long)iVar5 * 0xc40 + 0x6f0);
      uVar9 = uVar9 & 0xffffffff;
      if (lVar8 == 0) goto LAB_016c9414;
    }
    plVar10 = *(long **)(lVar8 + 0x20);
    if (plVar10 != (long *)0x0) {
      local_78 = *(undefined8 *)(puVar2 + (long)iVar5 * 0xc40 + 0x6d0);
      local_70 = *(undefined8 *)(puVar2 + (long)iVar5 * 0xc40 + 0x6d8);
      uStack_68 = 5;
      (**(code **)(*plVar10 + 0x20))(plVar10,&local_78);
    }
  }
LAB_016c9414:
  puVar1 = (undefined1 *)
           (*(long *)(puVar2 + (long)iVar5 * 0xc40 + 0x6d8) +
           *(long *)(puVar2 + (long)iVar5 * 0xc40 + 0x6d0));
  (**(code **)(*param_1 + 0x18))(param_1);
  lVar8 = 0;
  do {
    if (*(char *)(param_1[1] + lVar8) == '\0') {
LAB_016c9478:
      if (5 < (int)lVar8) goto LAB_016c972c;
      break;
    }
    lVar14 = param_1[1] + lVar8;
    if (*(char *)(lVar14 + 1) == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_016c9478;
    }
    if (*(char *)(lVar14 + 2) == '\0') {
      lVar8 = lVar8 + 2;
      goto LAB_016c9478;
    }
    lVar8 = lVar8 + 3;
  } while (lVar8 != 0x80001);
  (**(code **)(*param_1 + 0x18))(param_1);
  lVar8 = 0;
  do {
    if (*(char *)(param_1[1] + lVar8) == '\0') {
LAB_016c94dc:
      uVar16 = (uint)lVar8;
      uVar11 = uVar16;
      if (4 < (int)uVar16) {
        uVar11 = 5;
      }
      if ((int)uVar16 < 1) goto LAB_016c9714;
      uVar3 = uVar11;
      if ((int)uVar11 < 2) {
        uVar3 = 1;
      }
      (**(code **)(*param_1 + 0x18))(param_1);
      puVar13 = (undefined1 *)param_1[1];
      lVar8 = 0;
      goto LAB_016c9514;
    }
    lVar14 = param_1[1] + lVar8;
    if (*(char *)(lVar14 + 1) == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_016c94dc;
    }
    if (*(char *)(lVar14 + 2) == '\0') {
      lVar8 = lVar8 + 2;
      goto LAB_016c94dc;
    }
    lVar8 = lVar8 + 3;
  } while (lVar8 != 0x80001);
  uVar11 = 0;
  goto LAB_016c9714;
  while (bVar6 = lVar8 != 0x7fffe, lVar8 = lVar8 + 3, bVar6) {
LAB_016c9514:
    if (((puVar13[lVar8] == '\0') || (puVar13[lVar8 + 1] == '\0')) || (puVar13[lVar8 + 2] == '\0'))
    break;
  }
  *puVar1 = *puVar13;
  if (1 < (int)uVar11) {
    (**(code **)(*param_1 + 0x18))(param_1);
    puVar13 = PTR_DAT_04bb2120;
    lVar14 = param_1[1];
    lVar8 = 0;
    do {
      if (*(char *)(lVar14 + lVar8) == '\0') goto LAB_016c95a0;
      if (*(char *)(lVar14 + lVar8 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_016c95a0;
      }
      if (*(char *)(lVar14 + lVar8 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_016c95a0;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_016c95a0:
    puVar4 = PTR_DAT_04bb2120;
    if ((int)lVar8 != 0) {
      puVar4 = (undefined1 *)(lVar14 + 1);
    }
    puVar1[1] = *puVar4;
    if (uVar3 != 2) {
      (**(code **)(*param_1 + 0x18))(param_1);
      lVar8 = param_1[1];
      uVar15 = 0;
      do {
        if (*(char *)(lVar8 + uVar15) == '\0') goto LAB_016c9614;
        if (*(char *)(lVar8 + uVar15 + 1) == '\0') {
          uVar15 = uVar15 + 1;
          goto LAB_016c9614;
        }
        if (*(char *)(lVar8 + uVar15 + 2) == '\0') {
          uVar15 = uVar15 + 2;
          goto LAB_016c9614;
        }
        uVar15 = uVar15 + 3;
      } while (uVar15 != 0x80001);
      uVar15 = 0;
LAB_016c9614:
      puVar4 = puVar13;
      if ((uVar15 & 0xfffffffe) != 0) {
        puVar4 = (undefined1 *)(lVar8 + 2);
      }
      puVar1[2] = *puVar4;
      if (uVar3 != 3) {
        (**(code **)(*param_1 + 0x18))(param_1);
        lVar8 = param_1[1];
        uVar15 = 0;
        do {
          if (*(char *)(lVar8 + uVar15) == '\0') goto LAB_016c9684;
          if (*(char *)(lVar8 + uVar15 + 1) == '\0') {
            uVar15 = uVar15 + 1;
            goto LAB_016c9684;
          }
          if (*(char *)(lVar8 + uVar15 + 2) == '\0') {
            uVar15 = uVar15 + 2;
            goto LAB_016c9684;
          }
          uVar15 = uVar15 + 3;
        } while (uVar15 != 0x80001);
        uVar15 = 0;
LAB_016c9684:
        puVar4 = puVar13;
        if (2 < (uVar15 & 0xffffffff)) {
          puVar4 = (undefined1 *)(lVar8 + 3);
        }
        puVar1[3] = *puVar4;
        if (uVar3 != 4) {
          (**(code **)(*param_1 + 0x18))(param_1);
          lVar8 = param_1[1];
          uVar15 = 0;
          do {
            if (*(char *)(lVar8 + uVar15) == '\0') goto LAB_016c96f8;
            if (*(char *)(lVar8 + uVar15 + 1) == '\0') {
              uVar15 = uVar15 + 1;
              goto LAB_016c96f8;
            }
            if (*(char *)(lVar8 + uVar15 + 2) == '\0') {
              uVar15 = uVar15 + 2;
              goto LAB_016c96f8;
            }
            uVar15 = uVar15 + 3;
          } while (uVar15 != 0x80001);
          uVar15 = 0;
LAB_016c96f8:
          if ((uVar15 & 0xfffffffc) != 0) {
            puVar13 = (undefined1 *)(lVar8 + 4);
          }
          puVar1[4] = *puVar13;
        }
      }
    }
  }
  if (4 < (int)uVar16) goto LAB_016c972c;
LAB_016c9714:
  memset(puVar1 + uVar11,0,5 - (ulong)uVar11);
LAB_016c972c:
  if ((((uVar9 & 1) != 0) && (*(long *)(puVar2 + (long)iVar5 * 0xc40 + 0x6f0) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(puVar2 + (long)iVar5 * 0xc40 + 0x6f0) + 0x18),
     puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  return;
}

