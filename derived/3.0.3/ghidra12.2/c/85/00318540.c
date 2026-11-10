
void FUN_00318540(long *param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  
  lVar7 = *param_1;
  if ((ulong)((param_1[2] - lVar7 >> 3) * -0x3333333333333333) < param_2) {
    if (0x666666666666666 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_01c670e8(param_1);
    }
    lVar9 = param_1[1];
    lVar5 = FUN_00187df4(param_2 * 0x28);
    lVar2 = lVar5 + param_2 * 0x28;
    puVar10 = (undefined8 *)*param_1;
    puVar4 = (undefined8 *)param_1[1];
    puVar3 = (undefined8 *)(lVar5 + (lVar9 - lVar7));
    if (puVar4 == puVar10) {
      *param_1 = (long)puVar3;
      param_1[1] = (long)puVar3;
      param_1[2] = lVar2;
    }
    else {
      lVar7 = 0;
      puVar1 = PTR_DAT_04bc0ec8 + 0x10;
      do {
        plVar6 = (long *)((long)puVar3 + lVar7 + -0x28);
        *plVar6 = (long)puVar1;
        puVar8 = (undefined1 *)((long)puVar3 + lVar7 + -0x20);
        *puVar8 = 0;
        *(undefined1 **)((long)puVar3 + lVar7 + -0x10) = puVar8;
        *(undefined8 *)((long)puVar3 + lVar7 + -8) = 0x10;
        if (puVar3 != puVar4) {
          FUN_01c672e0(plVar6,(long)puVar4 + lVar7 + -0x28);
        }
        lVar7 = lVar7 + -0x28;
      } while ((undefined8 *)((long)puVar4 + lVar7) != puVar10);
      puVar4 = (undefined8 *)*param_1;
      puVar10 = (undefined8 *)param_1[1];
      *param_1 = (long)puVar3 + lVar7;
      param_1[1] = (long)puVar3;
      param_1[2] = lVar2;
      while (puVar10 != puVar4) {
        puVar10 = puVar10 + -5;
        (**(code **)*puVar10)(puVar10);
      }
    }
    if (puVar4 != (undefined8 *)0x0) {
      FUN_00187e4c(puVar4);
      return;
    }
  }
  return;
}

