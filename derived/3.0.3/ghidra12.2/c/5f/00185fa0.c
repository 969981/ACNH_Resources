
undefined8 * FUN_00185fa0(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *local_78;
  undefined1 local_70 [16];
  undefined1 *local_60;
  undefined8 uStack_58;
  
  puVar1 = PTR_DAT_04bc0ec8;
  puVar9 = (undefined8 *)(param_1 + 0x38);
  puVar8 = (undefined8 *)*puVar9;
  if (puVar8 != (undefined8 *)0x0) {
    puVar5 = puVar9;
    do {
      puVar3 = puVar8;
      if (*(uint *)(puVar8 + 4) < param_2) {
        puVar3 = puVar5;
        puVar8 = puVar8 + 1;
      }
      puVar8 = (undefined8 *)*puVar8;
      puVar5 = puVar3;
    } while (puVar8 != (undefined8 *)0x0);
    if ((puVar3 != puVar9) && (*(uint *)(puVar3 + 4) <= param_2)) {
      return (undefined8 *)puVar3[5];
    }
  }
  local_70[0] = 0;
  local_78 = PTR_DAT_04bc0ec8 + 0x10;
  uStack_58 = 0x10;
  local_60 = local_70;
  FUN_0018619c(&local_78,"%s %d",*(undefined8 *)(param_1 + 0x20),param_2);
  if (DAT_04c57ea0 == (code *)0x0) {
    puVar8 = malloc(0xd8);
  }
  else {
    puVar8 = (undefined8 *)(*DAT_04c57ea0)(0xd8);
  }
  puVar2 = PTR_DAT_04bcba28;
  puVar5 = puVar8 + 2;
  *puVar8 = *(undefined8 *)PTR_DAT_04bcba28;
  FUN_0018623c(puVar5,&local_78);
  puVar8 = (undefined8 *)*puVar9;
  do {
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = puVar9;
joined_r0x001860d0:
      if (DAT_04c57ea0 == (code *)0x0) {
        puVar3 = malloc(0x40);
      }
      else {
        puVar3 = (undefined8 *)(*DAT_04c57ea0)(0x40);
      }
      uVar6 = *(undefined8 *)puVar2;
      *(uint *)(puVar3 + 6) = param_2;
      puVar4 = puVar3 + 2;
      *puVar4 = 0;
      puVar3[7] = 0;
      *puVar3 = uVar6;
      puVar3[3] = 0;
      puVar3[4] = puVar9;
      *puVar8 = puVar4;
      if (**(long **)(param_1 + 0x30) != 0) {
        *(long *)(param_1 + 0x30) = **(long **)(param_1 + 0x30);
        puVar4 = (undefined8 *)*puVar8;
      }
      FUN_03876250(*(undefined8 *)(param_1 + 0x38),puVar4);
      *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
      puVar3[7] = puVar5;
joined_r0x0018615c:
      if ((local_60 != (undefined1 *)0x0) && (local_78 = puVar1 + 0x10, local_60 != local_70)) {
        pcVar7 = *(code **)(local_60 + -0x14);
        if (pcVar7 == (code *)0x0) {
          free(local_60 + -0x14);
        }
        else {
          (*pcVar7)();
        }
      }
      return puVar5;
    }
    while (puVar9 = puVar8, *(uint *)(puVar9 + 4) <= param_2) {
      if (param_2 <= *(uint *)(puVar9 + 4)) {
        puVar9[5] = puVar5;
        goto joined_r0x0018615c;
      }
      puVar8 = (undefined8 *)puVar9[1];
      if ((undefined8 *)puVar9[1] == (undefined8 *)0x0) {
        puVar8 = puVar9 + 1;
        goto joined_r0x001860d0;
      }
    }
    puVar8 = (undefined8 *)*puVar9;
  } while( true );
}

