
undefined8 FUN_02683560(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  void *__src;
  size_t __n;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined1 auStack_450 [1024];
  long local_50;
  long lStack_48;
  
  puVar4 = DAT_0536b9f8;
  if ((((DAT_0556be08 == 0) || (*(char *)(DAT_0556be08 + 0x1fc) == '\0')) ||
      (param_1 == 0 && param_2 == 0)) || (DAT_0536b9f8 == (undefined8 *)0x0)) {
LAB_0268364c:
    uVar6 = 0;
  }
  else {
    local_50 = param_1;
    lStack_48 = param_2;
    puVar5 = (undefined8 *)FUN_00db0cf4(DAT_0536b9f8,DAT_0556be08,0,0);
    uVar6 = 0;
    if (puVar5 != (undefined8 *)0x0) {
      puVar8 = (undefined8 *)puVar4[2];
      puVar1 = puVar4 + 1;
      if (puVar8 != puVar1) {
        do {
          if (puVar8 == (undefined8 *)((long)puVar5 + (long)*(int *)((long)puVar4 + 0x1c))) {
            if (0x400 < puVar5[1] + 1) goto LAB_0268364c;
            break;
          }
          puVar8 = (undefined8 *)puVar8[1];
        } while (puVar8 != puVar1);
      }
      memset(auStack_450,0,0x400);
      puVar8 = (undefined8 *)puVar4[2];
      if (puVar8 == puVar1) {
        __src = (void *)0x0;
        __n = 0;
      }
      else {
        puVar2 = (undefined8 *)((long)puVar5 + (long)*(int *)((long)puVar4 + 0x1c));
        puVar9 = puVar8;
        do {
          if (puVar9 == puVar2) {
            __src = (void *)*puVar5;
            goto LAB_02683680;
          }
          puVar9 = (undefined8 *)puVar9[1];
        } while (puVar9 != puVar1);
        __src = (void *)0x0;
LAB_02683680:
        do {
          if (puVar8 == puVar2) {
            __n = puVar5[1];
            goto LAB_026836a0;
          }
          puVar8 = (undefined8 *)puVar8[1];
        } while (puVar8 != puVar1);
        __n = 0;
      }
LAB_026836a0:
      memcpy(auStack_450,__src,__n);
      puVar8 = (undefined8 *)puVar4[2];
      if (puVar8 == puVar1) {
        lVar7 = 1;
      }
      else {
        lVar7 = 1;
        do {
          if (puVar8 == (undefined8 *)((long)puVar5 + (long)*(int *)((long)puVar4 + 0x1c))) {
            lVar7 = puVar5[1] + 1;
            break;
          }
          puVar8 = (undefined8 *)puVar8[1];
        } while (puVar8 != puVar1);
      }
      FUN_006b7b90(&local_50,auStack_450,lVar7);
      puVar4 = DAT_0536b9f8;
      if (DAT_0536b9f8 != (undefined8 *)0x0) {
        plVar10 = (long *)DAT_0536b9f8[2];
        if (plVar10 != DAT_0536b9f8 + 1) {
          plVar3 = (long *)((long)puVar5 + (long)*(int *)((long)DAT_0536b9f8 + 0x1c));
          while (plVar10 != plVar3) {
            plVar10 = (long *)plVar10[1];
            if (plVar10 == DAT_0536b9f8 + 1) {
              return 1;
            }
          }
          if (*plVar3 != 0) {
            *(long *)(*plVar3 + 8) = plVar3[1];
          }
          if ((long *)plVar3[1] != (long *)0x0) {
            *(long *)plVar3[1] = *plVar3;
          }
          *plVar3 = 0;
          plVar3[1] = 0;
          *(int *)(puVar4 + 3) = *(int *)(puVar4 + 3) + -1;
          if (*(char *)(puVar5 + 2) == '\0') {
            (**(code **)(*(long *)*puVar4 + 0x38))((long *)*puVar4,*puVar5);
          }
          (**(code **)(*(long *)*puVar4 + 0x38))((long *)*puVar4,puVar5);
        }
      }
      uVar6 = 1;
    }
  }
  return uVar6;
}

