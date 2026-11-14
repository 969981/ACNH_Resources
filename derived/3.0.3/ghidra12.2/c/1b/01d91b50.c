
undefined8 FUN_01d91b50(long param_1,char *param_2)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  void *__dest;
  void *__src;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  size_t __n;
  undefined8 *puVar16;
  undefined *local_60;
  char *pcStack_58;
  
  puVar2 = PTR_DAT_04bb46b0;
  if ((((*(long *)(param_1 + 0x50) == 0 || *(int *)(param_1 + 0x10) != 0) ||
       (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0x78) == 0)) ||
      (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0xc4) - 1U < 2)) ||
     (lVar9 = *(long *)PTR_DAT_04bb46b0, lVar9 == 0)) {
    return 0;
  }
  puVar10 = *(undefined8 **)(lVar9 + 0x10);
  if ((*(byte *)(lVar9 + 0x453) & 1) == 0) {
    lVar9 = (**(code **)(*(long *)*puVar10 + 0x38))();
    if (lVar9 == 0) {
      return 0;
    }
    lVar9 = lVar9 + 0x70;
  }
  else {
    if (puVar10 == (undefined8 *)0x0) {
      return 0;
    }
    if ((long *)puVar10[0x26] == (long *)0x0) {
      return 0;
    }
    lVar9 = (**(code **)(*(long *)puVar10[0x26] + 0x38))();
    if (lVar9 == 0) {
      return 0;
    }
  }
  if ((*(long **)(lVar9 + 0x28) == (long *)0x0) ||
     (puVar10 = (undefined8 *)**(long **)(lVar9 + 0x28), puVar10 == (undefined8 *)0x0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)*puVar10)();
    uVar5 = uVar5 & 0xffffffff;
  }
  lVar11 = *(long *)(&LAB_00578438 + *(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8));
  *(long *)(param_1 + 0xc0) = lVar11;
  if (lVar11 != 0) {
    lVar11 = 0;
    if (*(long *)puVar2 != 0) {
      lVar6 = (**(code **)(*(long *)**(undefined8 **)(*(long *)puVar2 + 0x10) + 0x38))();
      lVar11 = 0;
      if (lVar6 != 0) {
        lVar11 = lVar6 + 0x276cb0;
      }
    }
    if ((*(long **)(lVar11 + 0x89c0) == (long *)0x0) ||
       (puVar10 = (undefined8 *)**(long **)(lVar11 + 0x89c0), puVar10 == (undefined8 *)0x0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)*puVar10)();
      uVar7 = uVar7 & 0xffffffff;
    }
    uVar8 = FUN_027331d0(*(long *)(lVar11 + 0x89a8) + *(long *)(lVar11 + 0x89a0),
                         *(undefined8 *)(param_1 + 0xa8));
    if ((uVar8 & 1) == 0) {
      if ((((uVar7 & 1) != 0) && (*(long *)(lVar11 + 0x89c0) != 0)) &&
         (puVar10 = *(undefined8 **)(*(long *)(lVar11 + 0x89c0) + 8), puVar10 != (undefined8 *)0x0))
      {
        (**(code **)*puVar10)();
      }
    }
    else {
      if (*param_2 == '\0') {
        local_60 = PTR_DAT_04bb2020 + 0x10;
        pcStack_58 = "IsDisclosedMyDream";
        iVar4 = FUN_0273ec70(&LAB_0022ebf0 + *(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8),
                             &local_60);
        cVar3 = iVar4 != 0;
      }
      else {
        cVar3 = param_2[1];
      }
      *(char *)(*(long *)(param_1 + 0xa8) + 0x5b4) = cVar3;
      if ((((uVar7 & 1) != 0) && (*(long *)(lVar11 + 0x89c0) != 0)) &&
         (puVar10 = *(undefined8 **)(*(long *)(lVar11 + 0x89c0) + 8), puVar10 != (undefined8 *)0x0))
      {
        (**(code **)*puVar10)();
      }
      puVar2 = PTR_DAT_04bc1048;
      puVar10 = (undefined8 *)
                FUN_01d91f00(*(undefined8 *)PTR_DAT_04bc1048,*(undefined8 *)(param_1 + 0xa8));
      if (puVar10 != (undefined8 *)0x0) {
        puVar16 = *(undefined8 **)puVar2;
        plVar1 = puVar16 + 1;
        plVar13 = (long *)puVar16[2];
        lVar11 = *(long *)(param_1 + 0x98);
        plVar12 = (long *)((long)puVar10 + (long)*(int *)((long)puVar16 + 0x1c));
        if (plVar13 == plVar1) {
          __src = (void *)0x0;
          __n = 0;
        }
        else {
          plVar14 = plVar13;
          do {
            if (plVar14 == plVar12) {
              __src = (void *)*puVar10;
              goto LAB_01d91e04;
            }
            plVar14 = (long *)plVar14[1];
          } while (plVar14 != plVar1);
          __src = (void *)0x0;
LAB_01d91e04:
          plVar14 = plVar13;
          do {
            if (plVar14 == plVar12) {
              __n = puVar10[1];
              goto LAB_01d91e28;
            }
            plVar14 = (long *)plVar14[1];
          } while (plVar14 != plVar1);
          __n = 0;
        }
LAB_01d91e28:
        __dest = *(void **)(lVar11 + 0x10);
        if (__dest != (void *)0x0) {
          if (*(uint *)(lVar11 + 8) < __n) {
            memcpy(__dest,__src,(ulong)*(uint *)(lVar11 + 8));
            __n = (size_t)*(uint *)(lVar11 + 8);
          }
          else {
            memcpy(__dest,__src,__n);
          }
          puVar16 = *(undefined8 **)puVar2;
          *(size_t *)(lVar11 + 0x18) = __n;
          plVar13 = (long *)puVar16[2];
          plVar12 = (long *)((long)puVar10 + (long)*(int *)((long)puVar16 + 0x1c));
        }
        for (; plVar13 != puVar16 + 1; plVar13 = (long *)plVar13[1]) {
          if (plVar13 == plVar12) {
            if (*plVar12 != 0) {
              *(long *)(*plVar12 + 8) = plVar12[1];
            }
            if ((long *)plVar12[1] != (long *)0x0) {
              *(long *)plVar12[1] = *plVar12;
            }
            *plVar12 = 0;
            plVar12[1] = 0;
            *(int *)(puVar16 + 3) = *(int *)(puVar16 + 3) + -1;
            if (*(char *)(puVar10 + 2) == '\0') {
              (**(code **)(*(long *)*puVar16 + 0x38))((long *)*puVar16,*puVar10);
            }
            (**(code **)(*(long *)*puVar16 + 0x38))((long *)*puVar16,puVar10);
            break;
          }
        }
        FUN_03ebb160(param_1 + 8,3);
        uVar15 = 1;
        goto joined_r0x01d91dd0;
      }
    }
  }
  uVar15 = 0;
joined_r0x01d91dd0:
  if ((uVar5 & 1) == 0) {
    return uVar15;
  }
  if (*(long *)(lVar9 + 0x28) == 0) {
    return uVar15;
  }
  puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 8);
  if (puVar10 == (undefined8 *)0x0) {
    return uVar15;
  }
  (**(code **)*puVar10)();
  return uVar15;
}

