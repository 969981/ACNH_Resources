
undefined8 FUN_003db8d0(long param_1,undefined1 *param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  
  piVar2 = (int *)FUN_003dbc3c(*(undefined8 *)(param_1 + 8));
  uVar4 = 0;
  if (piVar2 != (int *)0x0) {
    if (*piVar2 <= param_3) {
      return 0;
    }
    puVar3 = (undefined1 *)FUN_003dbc6c(piVar2,param_3);
    *param_2 = *puVar3;
    param_2[1] = puVar3[1];
    param_2[2] = puVar3[2];
    param_2[3] = puVar3[3];
    uVar1 = *(uint *)(puVar3 + *(int *)(puVar3 + 8));
    uVar5 = uVar1 & 0xff;
    param_2[4] = (char)uVar1;
    if ((uVar1 & 0xfe) != 0) {
      uVar5 = 2;
    }
    if ((uVar5 != 0) && (param_2[5] = puVar3[(long)*(int *)(puVar3 + 8) + 4], uVar5 != 1)) {
      param_2[6] = puVar3[(long)*(int *)(puVar3 + 8) + 5];
    }
    uVar4 = 1;
  }
  return uVar4;
}

