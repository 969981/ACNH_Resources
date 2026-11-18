
undefined8 FUN_037a79ac(long param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x3c8);
  iVar4 = *(int *)(param_1 + 0x3c0);
  if (iVar3 < iVar4) {
    *(int *)(param_1 + 0x3c8) = iVar3 + 1;
    iVar3 = *(int *)(param_1 + 0x3c4) + iVar3;
    iVar2 = 0;
    if (iVar4 <= iVar3) {
      iVar2 = iVar4;
    }
    if (*(long *)(param_1 + 0x3b8) != 0) {
      puVar1 = (undefined1 *)(*(long *)(param_1 + 0x3b8) + (long)(iVar3 - iVar2) * 0x20);
      *puVar1 = *(undefined1 *)(param_2 + 7);
      *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(param_2 + 2);
      if (NAN((float)param_2[4])) {
        *(float *)(puVar1 + 0x10) = NAN;
      }
      else {
        *(undefined4 *)(puVar1 + 0x10) = param_2[4];
        *(undefined4 *)(puVar1 + 0x14) = param_2[5];
        *(undefined4 *)(puVar1 + 0x18) = param_2[6];
      }
      *(undefined4 *)(puVar1 + 0x1c) = *param_2;
      return 1;
    }
  }
  return 0;
}

