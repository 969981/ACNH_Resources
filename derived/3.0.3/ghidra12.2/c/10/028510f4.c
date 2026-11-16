
void FUN_028510f4(int *param_1,uint param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined *local_80 [4];
  int local_5c;
  undefined4 local_58;
  undefined8 local_50;
  undefined *puStack_48;
  undefined4 local_28;
  undefined4 local_24;
  
  bVar6 = *(byte *)(param_1 + 0xb);
  if ((bVar6 < 10) && ((&DAT_053fee41)[((long)(char)bVar6 & 0xffffffffU) * 0xba0] != '\0')) {
    if (((&DAT_053fede8)[(ulong)(uint)(int)(char)bVar6 * 0x174] != 0) &&
       (*(int *)((&DAT_053fede8)[(ulong)(uint)(int)(char)bVar6 * 0x174] + 4) - 0x14U < 3)) {
      FUN_0214eb90(&DAT_053febf8 + (ulong)(uint)(int)(char)bVar6 * 0xba0,(long)(char)bVar6,1);
    }
  }
  if ((*(char *)((long)param_1 + 0x2f) != '\x02') || (DAT_05574040 == 0)) goto LAB_0285185c;
  lVar8 = FUN_026eec4c(DAT_05574040,0);
  if (lVar8 == 0) {
LAB_02851240:
    if (DAT_05574040 == 0) goto LAB_0285185c;
    lVar8 = FUN_026eec4c(DAT_05574040,1);
    if (lVar8 != 0) {
      if (*(long **)(lVar8 + 0x17bb0) == (long *)0x0) {
        uVar10 = 0;
      }
      else {
        puVar9 = (undefined8 *)**(long **)(lVar8 + 0x17bb0);
        uVar10 = 0;
        if (puVar9 != (undefined8 *)0x0) {
          uVar10 = (**(code **)*puVar9)();
        }
      }
      lVar2 = *(long *)(lVar8 + 0x17b98) + *(long *)(lVar8 + 0x17b90);
      if (*(int *)(lVar2 + 0x1c) == *param_1) {
        lVar11 = *(long *)(param_1 + 1);
        lVar3 = *(long *)(lVar2 + 0x20);
        lVar4 = *(long *)(lVar2 + 0x28);
        lVar12 = *(long *)(param_1 + 3);
        iVar7 = param_1[5];
        iVar5 = *(int *)(lVar2 + 0x30);
        if ((((uVar10 & 1) != 0) && (*(long *)(lVar8 + 0x17bb0) != 0)) &&
           (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x17bb0) + 8), puVar9 != (undefined8 *)0x0))
        {
          (**(code **)*puVar9)();
        }
        if ((lVar11 == lVar3 && lVar12 == lVar4) && iVar7 == iVar5) {
          local_28 = 1;
          goto LAB_02851794;
        }
      }
      else if ((((uVar10 & 1) != 0) && (*(long *)(lVar8 + 0x17bb0) != 0)) &&
              (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x17bb0) + 8),
              puVar9 != (undefined8 *)0x0)) {
        (**(code **)*puVar9)();
      }
    }
    if (DAT_05574040 == 0) goto LAB_0285185c;
    lVar8 = FUN_026eec4c(DAT_05574040,2);
    if (lVar8 != 0) {
      if (*(long **)(lVar8 + 0x17bb0) == (long *)0x0) {
        uVar10 = 0;
      }
      else {
        puVar9 = (undefined8 *)**(long **)(lVar8 + 0x17bb0);
        uVar10 = 0;
        if (puVar9 != (undefined8 *)0x0) {
          uVar10 = (**(code **)*puVar9)();
        }
      }
      lVar2 = *(long *)(lVar8 + 0x17b98) + *(long *)(lVar8 + 0x17b90);
      if (*(int *)(lVar2 + 0x1c) == *param_1) {
        lVar11 = *(long *)(param_1 + 1);
        lVar3 = *(long *)(lVar2 + 0x20);
        lVar4 = *(long *)(lVar2 + 0x28);
        lVar12 = *(long *)(param_1 + 3);
        iVar7 = param_1[5];
        iVar5 = *(int *)(lVar2 + 0x30);
        if ((((uVar10 & 1) != 0) && (*(long *)(lVar8 + 0x17bb0) != 0)) &&
           (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x17bb0) + 8), puVar9 != (undefined8 *)0x0))
        {
          (**(code **)*puVar9)();
        }
        if ((lVar11 == lVar3 && lVar12 == lVar4) && iVar7 == iVar5) {
          local_28 = 2;
          goto LAB_02851794;
        }
      }
      else if ((((uVar10 & 1) != 0) && (*(long *)(lVar8 + 0x17bb0) != 0)) &&
              (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x17bb0) + 8),
              puVar9 != (undefined8 *)0x0)) {
        (**(code **)*puVar9)();
      }
    }
    if (DAT_05574040 == 0) goto LAB_0285185c;
    lVar8 = FUN_026eec4c(DAT_05574040,3);
    if (lVar8 != 0) {
      if (*(long **)(lVar8 + 0x17bb0) == (long *)0x0) {
        uVar10 = 0;
      }
      else {
        puVar9 = (undefined8 *)**(long **)(lVar8 + 0x17bb0);
        uVar10 = 0;
        if (puVar9 != (undefined8 *)0x0) {
          uVar10 = (**(code **)*puVar9)();
        }
      }
      lVar2 = *(long *)(lVar8 + 0x17b98) + *(long *)(lVar8 + 0x17b90);
      if (*(int *)(lVar2 + 0x1c) == *param_1) {
        lVar11 = *(long *)(param_1 + 1);
        lVar3 = *(long *)(lVar2 + 0x20);
        lVar4 = *(long *)(lVar2 + 0x28);
        lVar12 = *(long *)(param_1 + 3);
        iVar7 = param_1[5];
        iVar5 = *(int *)(lVar2 + 0x30);
        if ((((uVar10 & 1) != 0) && (*(long *)(lVar8 + 0x17bb0) != 0)) &&
           (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x17bb0) + 8), puVar9 != (undefined8 *)0x0))
        {
          (**(code **)*puVar9)();
        }
        if ((lVar11 == lVar3 && lVar12 == lVar4) && iVar7 == iVar5) {
          local_28 = 3;
          goto LAB_02851794;
        }
      }
      else if ((((uVar10 & 1) != 0) && (*(long *)(lVar8 + 0x17bb0) != 0)) &&
              (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x17bb0) + 8),
              puVar9 != (undefined8 *)0x0)) {
        (**(code **)*puVar9)();
      }
    }
    if (DAT_05574040 == 0) goto LAB_0285185c;
    lVar8 = FUN_026eec4c(DAT_05574040,4);
    if (lVar8 != 0) {
      if (*(long **)(lVar8 + 0x17bb0) == (long *)0x0) {
        uVar10 = 0;
      }
      else {
        puVar9 = (undefined8 *)**(long **)(lVar8 + 0x17bb0);
        uVar10 = 0;
        if (puVar9 != (undefined8 *)0x0) {
          uVar10 = (**(code **)*puVar9)();
        }
      }
      lVar2 = *(long *)(lVar8 + 0x17b98) + *(long *)(lVar8 + 0x17b90);
      if (*(int *)(lVar2 + 0x1c) == *param_1) {
        lVar11 = *(long *)(param_1 + 1);
        lVar3 = *(long *)(lVar2 + 0x20);
        lVar4 = *(long *)(lVar2 + 0x28);
        lVar12 = *(long *)(param_1 + 3);
        iVar7 = param_1[5];
        iVar5 = *(int *)(lVar2 + 0x30);
        if ((((uVar10 & 1) != 0) && (*(long *)(lVar8 + 0x17bb0) != 0)) &&
           (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x17bb0) + 8), puVar9 != (undefined8 *)0x0))
        {
          (**(code **)*puVar9)();
        }
        if ((lVar11 == lVar3 && lVar12 == lVar4) && iVar7 == iVar5) {
          local_28 = 4;
          goto LAB_02851794;
        }
      }
      else if ((((uVar10 & 1) != 0) && (*(long *)(lVar8 + 0x17bb0) != 0)) &&
              (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x17bb0) + 8),
              puVar9 != (undefined8 *)0x0)) {
        (**(code **)*puVar9)();
      }
    }
    if (DAT_05574040 == 0) goto LAB_0285185c;
    lVar8 = FUN_026eec4c(DAT_05574040,5);
    if (lVar8 != 0) {
      if (*(long **)(lVar8 + 0x17bb0) == (long *)0x0) {
        uVar10 = 0;
      }
      else {
        puVar9 = (undefined8 *)**(long **)(lVar8 + 0x17bb0);
        uVar10 = 0;
        if (puVar9 != (undefined8 *)0x0) {
          uVar10 = (**(code **)*puVar9)();
        }
      }
      lVar2 = *(long *)(lVar8 + 0x17b98) + *(long *)(lVar8 + 0x17b90);
      if (*(int *)(lVar2 + 0x1c) == *param_1) {
        lVar11 = *(long *)(param_1 + 1);
        lVar3 = *(long *)(lVar2 + 0x20);
        lVar4 = *(long *)(lVar2 + 0x28);
        lVar12 = *(long *)(param_1 + 3);
        iVar7 = param_1[5];
        iVar5 = *(int *)(lVar2 + 0x30);
        if ((((uVar10 & 1) != 0) && (*(long *)(lVar8 + 0x17bb0) != 0)) &&
           (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x17bb0) + 8), puVar9 != (undefined8 *)0x0))
        {
          (**(code **)*puVar9)();
        }
        if ((lVar11 == lVar3 && lVar12 == lVar4) && iVar7 == iVar5) {
          local_28 = 5;
          goto LAB_02851794;
        }
      }
      else if ((((uVar10 & 1) != 0) && (*(long *)(lVar8 + 0x17bb0) != 0)) &&
              (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x17bb0) + 8),
              puVar9 != (undefined8 *)0x0)) {
        (**(code **)*puVar9)();
      }
    }
    if (DAT_05574040 == 0) goto LAB_0285185c;
    lVar8 = FUN_026eec4c(DAT_05574040,6);
    if (lVar8 != 0) {
      if (*(long **)(lVar8 + 0x17bb0) == (long *)0x0) {
        uVar10 = 0;
      }
      else {
        puVar9 = (undefined8 *)**(long **)(lVar8 + 0x17bb0);
        uVar10 = 0;
        if (puVar9 != (undefined8 *)0x0) {
          uVar10 = (**(code **)*puVar9)();
        }
      }
      lVar2 = *(long *)(lVar8 + 0x17b98) + *(long *)(lVar8 + 0x17b90);
      if (*(int *)(lVar2 + 0x1c) == *param_1) {
        lVar11 = *(long *)(param_1 + 1);
        lVar3 = *(long *)(lVar2 + 0x20);
        lVar4 = *(long *)(lVar2 + 0x28);
        lVar12 = *(long *)(param_1 + 3);
        iVar7 = param_1[5];
        iVar5 = *(int *)(lVar2 + 0x30);
        if ((((uVar10 & 1) != 0) && (*(long *)(lVar8 + 0x17bb0) != 0)) &&
           (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x17bb0) + 8), puVar9 != (undefined8 *)0x0))
        {
          (**(code **)*puVar9)();
        }
        if ((lVar11 == lVar3 && lVar12 == lVar4) && iVar7 == iVar5) {
          local_28 = 6;
          goto LAB_02851794;
        }
      }
      else if ((((uVar10 & 1) != 0) && (*(long *)(lVar8 + 0x17bb0) != 0)) &&
              (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x17bb0) + 8),
              puVar9 != (undefined8 *)0x0)) {
        (**(code **)*puVar9)();
      }
    }
    if ((DAT_05574040 == 0) || (lVar8 = FUN_026eec4c(DAT_05574040,7), lVar8 == 0))
    goto LAB_0285185c;
    if (*(long **)(lVar8 + 0x17bb0) == (long *)0x0) {
      uVar10 = 0;
    }
    else {
      puVar9 = (undefined8 *)**(long **)(lVar8 + 0x17bb0);
      uVar10 = 0;
      if (puVar9 != (undefined8 *)0x0) {
        uVar10 = (**(code **)*puVar9)();
      }
    }
    lVar2 = *(long *)(lVar8 + 0x17b98) + *(long *)(lVar8 + 0x17b90);
    if (*(int *)(lVar2 + 0x1c) != *param_1) {
      if ((((uVar10 & 1) != 0) && (*(long *)(lVar8 + 0x17bb0) != 0)) &&
         (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x17bb0) + 8), puVar9 != (undefined8 *)0x0)) {
        (**(code **)*puVar9)();
      }
      goto LAB_0285185c;
    }
    lVar11 = *(long *)(param_1 + 1);
    lVar3 = *(long *)(lVar2 + 0x20);
    lVar4 = *(long *)(lVar2 + 0x28);
    lVar12 = *(long *)(param_1 + 3);
    iVar7 = param_1[5];
    iVar5 = *(int *)(lVar2 + 0x30);
    if ((((uVar10 & 1) != 0) && (*(long *)(lVar8 + 0x17bb0) != 0)) &&
       (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x17bb0) + 8), puVar9 != (undefined8 *)0x0)) {
      (**(code **)*puVar9)();
    }
    if ((lVar11 != lVar3 || lVar12 != lVar4) || iVar7 != iVar5) goto LAB_0285185c;
    local_28 = 7;
  }
  else {
    if (*(long **)(lVar8 + 0x17bb0) == (long *)0x0) {
      uVar10 = 0;
    }
    else {
      puVar9 = (undefined8 *)**(long **)(lVar8 + 0x17bb0);
      uVar10 = 0;
      if (puVar9 != (undefined8 *)0x0) {
        uVar10 = (**(code **)*puVar9)();
      }
    }
    lVar2 = *(long *)(lVar8 + 0x17b98) + *(long *)(lVar8 + 0x17b90);
    if (*(int *)(lVar2 + 0x1c) != *param_1) {
      if ((((uVar10 & 1) != 0) && (*(long *)(lVar8 + 0x17bb0) != 0)) &&
         (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x17bb0) + 8), puVar9 != (undefined8 *)0x0)) {
        (**(code **)*puVar9)();
      }
      goto LAB_02851240;
    }
    lVar11 = *(long *)(param_1 + 1);
    lVar3 = *(long *)(lVar2 + 0x20);
    lVar4 = *(long *)(lVar2 + 0x28);
    lVar12 = *(long *)(param_1 + 3);
    iVar7 = param_1[5];
    iVar5 = *(int *)(lVar2 + 0x30);
    if ((((uVar10 & 1) != 0) && (*(long *)(lVar8 + 0x17bb0) != 0)) &&
       (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x17bb0) + 8), puVar9 != (undefined8 *)0x0)) {
      (**(code **)*puVar9)();
    }
    if ((lVar11 != lVar3 || lVar12 != lVar4) || iVar7 != iVar5) goto LAB_02851240;
    local_28 = 0;
  }
LAB_02851794:
  local_24 = 1;
  puStack_48 = PTR_s_promise_nnpc_myhouse_result_04a86798;
  local_50 = &PTR_LAB_048f9770;
  FUN_026012f4(local_80,&local_50,&local_28);
  puVar1 = PTR_DAT_04bc3498 + 0x10;
  local_58 = local_24;
  local_50._4_4_ = 1;
  if (*(char *)((long)param_1 + 0x35) != '\x01' && (param_2 & 1) == 0) {
    local_50._4_4_ = 2;
  }
  local_50._0_4_ = (int)(char)param_1[0xb];
  local_80[0] = puVar1;
  FUN_025e8138(local_80,&local_50);
  local_80[0] = puVar1;
  iVar7 = FUN_025e83e8(local_80);
  if (((iVar7 == -1) ||
      (local_50._0_4_ = (**(code **)(local_80[0] + 0x20))(local_80), 0xc < (int)local_50)) &&
     (local_5c == 0)) {
    local_5c = 1;
  }
  FUN_02601530(local_80);
LAB_0285185c:
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined2 *)((long)param_1 + 0x1e) = 0x101;
  param_1[8] = 0;
  *(undefined1 **)(param_1 + 9) = &LAB_01010000;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined1 *)((long)param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0xff;
  *(undefined1 *)((long)param_1 + 0x2e) = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)((long)param_1 + 0x2f) = 0;
  return;
}

