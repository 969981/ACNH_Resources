
int FUN_021d7e50(long *param_1)

{
  byte *pbVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  long lVar12;
  undefined *local_a8;
  undefined1 *local_a0;
  undefined4 local_98;
  undefined1 local_94 [7];
  undefined1 local_8d;
  undefined1 local_88 [4];
  int local_84;
  undefined **local_80;
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 local_6c [7];
  undefined1 local_65;
  
  if ((*(char *)param_1[1] != '\0') && (DAT_05574040 != 0)) {
    puVar7 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar5 = (**(code **)(*(long *)*puVar7 + 0x38))();
      if (lVar5 == 0) {
        return -1;
      }
      lVar5 = lVar5 + 0x70;
    }
    else {
      if (puVar7 == (undefined8 *)0x0) {
        return -1;
      }
      if ((long *)puVar7[0x26] == (long *)0x0) {
        return -1;
      }
      lVar5 = (**(code **)(*(long *)puVar7[0x26] + 0x38))();
      if (lVar5 == 0) {
        return -1;
      }
    }
    bVar4 = false;
    iVar11 = 0;
    iVar9 = 0;
    do {
      local_65 = 0;
      local_6c[0] = 0;
      lVar12 = lVar5 + 0x218210 + (long)iVar11 * 0x38;
      local_70 = 8;
      local_80 = &PTR_LAB_04908da0;
      local_78 = local_6c;
      if ((*(long **)(lVar12 + 0x28) == (long *)0x0) ||
         (puVar7 = (undefined8 *)**(long **)(lVar12 + 0x28), puVar7 == (undefined8 *)0x0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = (**(code **)*puVar7)();
        uVar6 = uVar6 & 0xffffffff;
      }
      pbVar1 = (byte *)(*(long *)(lVar12 + 0x10) + *(long *)(lVar12 + 8));
      FUN_038d1270(&local_80,"-----");
      uVar8 = (ulong)*pbVar1;
      if (uVar8 < 0x23) {
        FUN_038d1270(&local_80,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + uVar8 * 8 + 0xb0),
                     pbVar1[1]);
      }
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar12 + 0x28) != 0)) &&
         (puVar7 = *(undefined8 **)(*(long *)(lVar12 + 0x28) + 8), puVar7 != (undefined8 *)0x0)) {
        (**(code **)*puVar7)();
      }
      (**(code **)(*param_1 + 0x18))(param_1);
      (**(code **)(*param_1 + 0x18))(param_1);
      puVar10 = (undefined1 *)param_1[1];
      (*(code *)local_80[3])(&local_80);
      if (puVar10 == local_78) {
LAB_021d80bc:
        if (!bVar4) {
          return iVar9;
        }
        break;
      }
      uVar6 = 0;
      bVar3 = true;
      do {
        lVar12 = param_1[1] + 2 + uVar6;
        cVar2 = *(char *)(lVar12 + -2);
        if (cVar2 != local_78[uVar6]) break;
        if (cVar2 == '\0') {
          if (bVar3) goto LAB_021d80bc;
          break;
        }
        cVar2 = *(char *)(lVar12 + -1);
        if (cVar2 != local_78[uVar6 + 1]) break;
        if (cVar2 == '\0') goto LAB_021d80bc;
        cVar2 = *(char *)(param_1[1] + 2 + uVar6);
        if (cVar2 != local_78[uVar6 + 2]) break;
        if (cVar2 == '\0') goto LAB_021d80bc;
        bVar3 = uVar6 < 0x7fffe;
        uVar6 = uVar6 + 3;
      } while (uVar6 != 0x80001);
      iVar11 = iVar11 + 1;
      iVar9 = iVar9 + 1;
      bVar4 = iVar11 == 8;
    } while (iVar9 != 8);
    iVar11 = 0;
    do {
      local_88[0] = 1;
      local_70 = 8;
      local_65 = 0;
      local_6c[0] = 0;
      local_80 = &PTR_LAB_04908da0;
      local_84 = iVar11;
      local_78 = local_6c;
      FUN_016d055c(&local_80,local_88);
      (**(code **)(*param_1 + 0x18))(param_1);
      (**(code **)(*param_1 + 0x18))(param_1);
      puVar10 = (undefined1 *)param_1[1];
      (*(code *)local_80[3])(&local_80);
      if (puVar10 == local_78) {
LAB_021d82b4:
        return iVar11 + 8;
      }
      uVar6 = 0;
      bVar4 = true;
      do {
        lVar5 = param_1[1] + 2 + uVar6;
        cVar2 = *(char *)(lVar5 + -2);
        if (cVar2 != local_78[uVar6]) break;
        if (cVar2 == '\0') {
          if (bVar4) goto LAB_021d82b4;
          break;
        }
        cVar2 = *(char *)(lVar5 + -1);
        if (cVar2 != local_78[uVar6 + 1]) break;
        if (cVar2 == '\0') goto LAB_021d82b4;
        cVar2 = *(char *)(param_1[1] + 2 + uVar6);
        if (cVar2 != local_78[uVar6 + 2]) break;
        if (cVar2 == '\0') goto LAB_021d82b4;
        bVar4 = uVar6 < 0x7fffe;
        uVar6 = uVar6 + 3;
      } while (uVar6 != 0x80001);
      local_98 = 8;
      local_8d = 0;
      local_94[0] = 0;
      local_a8 = PTR_DAT_04bb3768 + 0x10;
      local_a0 = local_94;
      FUN_016d068c(&local_a8,local_88);
      (**(code **)(*param_1 + 0x18))(param_1);
      (**(code **)(*param_1 + 0x18))(param_1);
      puVar10 = (undefined1 *)param_1[1];
      (**(code **)(local_a8 + 0x18))(&local_a8);
      if (puVar10 == local_a0) {
        return 0x10;
      }
      uVar6 = 0;
      bVar4 = true;
      do {
        lVar5 = param_1[1] + 2 + uVar6;
        cVar2 = *(char *)(lVar5 + -2);
        if (cVar2 != local_a0[uVar6]) break;
        if (cVar2 == '\0') {
          if (bVar4) {
            return 0x10;
          }
          break;
        }
        cVar2 = *(char *)(lVar5 + -1);
        if (cVar2 != local_a0[uVar6 + 1]) break;
        if (cVar2 == '\0') {
          return 0x10;
        }
        cVar2 = *(char *)(param_1[1] + 2 + uVar6);
        if (cVar2 != local_a0[uVar6 + 2]) break;
        if (cVar2 == '\0') {
          return 0x10;
        }
        bVar4 = uVar6 < 0x7fffe;
        uVar6 = uVar6 + 3;
      } while (uVar6 != 0x80001);
      iVar11 = iVar11 + 1;
    } while (iVar11 != 8);
  }
  return -1;
}

