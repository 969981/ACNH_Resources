
void FUN_01372110(uint *param_1,long *param_2)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  undefined8 *puVar9;
  
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    puVar5 = malloc(0x1900);
joined_r0x013721cc:
    if (puVar5 != (undefined8 *)0x0) {
      uVar8 = 400;
      lVar7 = 400;
      puVar9 = puVar5;
      do {
        *puVar9 = 0xfffe;
        FUN_0277d4ac(puVar9);
        lVar7 = lVar7 + -1;
        puVar9 = puVar9 + 2;
      } while (lVar7 != 0);
      *param_1 = 400;
      *(undefined8 **)(param_1 + 2) = puVar5;
      goto LAB_013721dc;
    }
  }
  else {
    if (param_2 != (long *)0x0) {
LAB_01372168:
      puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,0x1900,8);
      goto joined_r0x013721cc;
    }
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    param_2 = (long *)(lVar7 + 8);
    if (lVar4 != 0) {
      param_2 = (long *)(lVar4 + 0xa8);
    }
    param_2 = (long *)*param_2;
    if (param_2 != (long *)0x0) goto LAB_01372168;
  }
  uVar8 = *param_1;
  if (uVar8 == 0) {
    return;
  }
  puVar5 = *(undefined8 **)(param_1 + 2);
LAB_013721dc:
  puVar3 = PTR_DAT_04bb37e0;
  uVar6 = 0;
  do {
    puVar1 = (undefined2 *)((long)puVar5 + ((long)((ulong)uVar6 << 0x20) >> 0x1c));
    *puVar1 = *(undefined2 *)puVar3;
    *(undefined *)(puVar1 + 1) = puVar3[2];
    *(undefined *)((long)puVar1 + 3) = puVar3[3];
    uVar2 = *(undefined4 *)(puVar3 + 4);
    *(undefined8 *)(puVar1 + 4) = 0;
    *(undefined4 *)(puVar1 + 2) = uVar2;
    uVar6 = uVar6 + 1;
  } while (uVar8 != uVar6);
  return;
}

