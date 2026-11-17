
void FUN_02d95d30(int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  lVar2 = 0;
  if (*(long *)PTR_DAT_04bb2230 != 0) {
    lVar2 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x470);
  }
  if (param_1 == 0) {
    puVar5 = *(undefined8 **)(lVar2 + 0x28);
  }
  else {
    puVar5 = *(undefined8 **)(lVar2 + 0x20);
  }
  if (puVar5 != (undefined8 *)0x0) {
    uVar1 = param_2[1];
    uVar3 = param_2[2];
    *puVar5 = *param_2;
    puVar5[1] = uVar1;
    puVar5[2] = uVar3;
    uVar1 = param_2[3];
    uVar3 = param_2[4];
    uVar4 = param_2[6];
    puVar5[5] = param_2[5];
    puVar5[6] = uVar4;
    puVar5[3] = uVar1;
    puVar5[4] = uVar3;
    FUN_033d61cc(puVar5 + 7,param_2 + 7);
    puVar5[0x15] = param_2[0x15];
    uVar3 = param_2[0x19];
    uVar1 = param_2[0x16];
    uVar4 = param_2[0x17];
    puVar5[0x18] = param_2[0x18];
    puVar5[0x19] = uVar3;
    puVar5[0x16] = uVar1;
    puVar5[0x17] = uVar4;
    uVar1 = param_2[0x1b];
    uVar3 = param_2[0x1c];
    uVar4 = param_2[0x1a];
    *(undefined1 *)(puVar5 + 0x1d) = *(undefined1 *)(param_2 + 0x1d);
    puVar5[0x1b] = uVar1;
    puVar5[0x1c] = uVar3;
    puVar5[0x1a] = uVar4;
  }
  return;
}

