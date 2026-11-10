
void FUN_0019c970(long *param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  
  *param_1 = (long)(PTR_DAT_04bcbc48 + 0x10);
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  plVar7 = param_1 + 2;
  *plVar7 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = (long)&PTR_FUN_04839690;
  if (param_3 != 0) {
    if ((long)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c6e7e8(plVar7);
    }
    puVar4 = (undefined8 *)FUN_00187df4(param_3);
    puVar1 = (undefined8 *)((long)puVar4 + param_3);
    param_1[2] = (long)puVar4;
    param_1[4] = (long)puVar1;
    for (uVar6 = param_3 & 7; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined8 *)((long)puVar4 + 1);
    }
    if (7 < param_3) {
      do {
        puVar5 = puVar4 + 1;
        *puVar4 = 0;
        puVar4 = puVar5;
      } while (puVar5 != puVar1);
    }
    param_1[3] = (long)puVar1;
    if (param_3 != 0) {
      if (param_3 == 1) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        do {
          puVar2 = (undefined1 *)(param_2 + uVar6);
          *(undefined1 *)(*plVar7 + uVar6) = *puVar2;
          lVar3 = *plVar7 + uVar6;
          uVar6 = uVar6 + 2;
          *(undefined1 *)(lVar3 + 1) = puVar2[1];
        } while ((param_3 & 0xfffffffffffffffe) != uVar6);
      }
      if ((param_3 & 1) != 0) {
        *(undefined1 *)(*plVar7 + uVar6) = *(undefined1 *)(param_2 + uVar6);
      }
    }
  }
  return;
}

