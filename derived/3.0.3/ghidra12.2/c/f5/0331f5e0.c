
void FUN_0331f5e0(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = param_1[100];
  if ((lVar5 != 0) && (*(char *)(lVar5 + 2000) == '\0')) {
    lVar1 = lVar5 + 0x230;
    if (*(long *)(lVar5 + 0x20) != lVar1 && *(long *)(lVar5 + 0x20) != lVar5 + 0x2d8) {
      FUN_03292228(*(undefined8 *)(lVar5 + 0x4f8));
      lVar3 = *(long *)(lVar5 + 0x20);
      if (((lVar3 != lVar1) && (lVar3 != lVar5 + 0x2d8)) && (lVar3 != lVar5 + 0x38)) {
        if (((lVar3 != 0) && (-1 < *(int *)(lVar5 + 0x30))) &&
           (*(long **)(lVar3 + 0x80) != (long *)0x0)) {
          (**(code **)(**(long **)(lVar3 + 0x80) + 0x20))();
        }
        *(long *)(lVar5 + 0x28) = lVar1;
        *(undefined4 *)(lVar5 + 0x30) = 0xffffffff;
      }
      plVar6 = (long *)param_1[0x72];
      *(undefined1 *)(param_1 + 0x2f9) = 0;
      lVar5 = DAT_0572ba48;
      if (*plVar6 == 0) {
        puVar4 = (undefined8 *)(DAT_0572ba48 + 8);
        puVar2 = (undefined8 *)*puVar4;
        if ((undefined8 *)*puVar4 == (undefined8 *)0x0) {
          *puVar4 = plVar6;
        }
        else {
          do {
            puVar4 = puVar2;
            puVar2 = (undefined8 *)puVar4[2];
          } while ((undefined8 *)puVar4[2] != (undefined8 *)0x0);
          puVar4[2] = plVar6;
          plVar6[1] = (long)puVar4;
          puVar4 = (undefined8 *)*puVar4;
        }
        *plVar6 = (long)puVar4;
        FUN_0328fad0(lVar5);
        if ((*(uint *)((long)plVar6 + 0x2c) & 1) == 0) {
          *(undefined8 *)(lVar5 + 0xa8) = 0;
          *(byte *)(lVar5 + 0xd4) = *(byte *)(lVar5 + 0xd4) & 0xfd;
        }
      }
      FUN_032924d0(param_1[0x72],param_1[0x73]);
                    /* WARNING: Could not recover jumptable at 0x0331f73c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x118))(param_1);
      return;
    }
  }
  return;
}

