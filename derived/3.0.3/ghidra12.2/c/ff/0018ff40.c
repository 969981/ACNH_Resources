
undefined8 FUN_0018ff40(long *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 local_2c [12];
  
  puVar2 = (undefined1 *)FUN_001900b0(param_2,local_2c);
  plVar3 = (long *)*param_1;
  lVar6 = plVar3[3];
  puVar5 = (undefined1 *)plVar3[4];
  if (puVar5 < puVar2 + (lVar6 - (long)local_2c)) {
    lVar8 = plVar3[2];
    if (lVar8 == 0) {
      if (*plVar3 == 0) {
        if (DAT_04c57ea0 == (code *)0x0) {
          puVar4 = malloc(0x18);
        }
        else {
          puVar4 = (undefined8 *)(*DAT_04c57ea0)(0x18);
        }
        *puVar4 = *(undefined8 *)PTR_DAT_04bcba28;
        puVar5 = (undefined1 *)plVar3[5];
        *plVar3 = (long)(puVar4 + 2);
        plVar3[1] = (long)(puVar4 + 2);
        lVar8 = plVar3[2];
        lVar6 = plVar3[3];
      }
      else {
        puVar5 = (undefined1 *)plVar3[5];
        lVar8 = 0;
      }
    }
    else {
      puVar5 = puVar5 + (((ulong)(puVar5 + (1 - lVar8)) >> 1) - lVar8);
    }
    if (puVar5 <= puVar2 + lVar6 + (-lVar8 - (long)local_2c)) {
      puVar5 = puVar2 + lVar6 + (-lVar8 - (long)local_2c);
    }
    FUN_0018f24c(plVar3,puVar5);
  }
  if (local_2c != puVar2) {
    puVar5 = local_2c;
    uVar7 = ~(ulong)puVar5;
    if (((ulong)puVar2 & 1) != 0) {
      puVar5 = (undefined1 *)((ulong)puVar5 | 1);
      puVar9 = *(undefined1 **)(*param_1 + 0x18);
      *(undefined1 **)(*param_1 + 0x18) = puVar9 + 1;
      *puVar9 = local_2c[0];
    }
    if (puVar2 + uVar7 != (undefined1 *)0x0) {
      do {
        uVar1 = *puVar5;
        puVar9 = *(undefined1 **)(*param_1 + 0x18);
        *(undefined1 **)(*param_1 + 0x18) = puVar9 + 1;
        *puVar9 = uVar1;
        uVar1 = puVar5[1];
        puVar5 = puVar5 + 2;
        puVar9 = *(undefined1 **)(*param_1 + 0x18);
        *(undefined1 **)(*param_1 + 0x18) = puVar9 + 1;
        *puVar9 = uVar1;
      } while (puVar5 != puVar2);
    }
  }
  return 1;
}

