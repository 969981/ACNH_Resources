
void FUN_0384c684(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if ((param_2 == 0) || ((*(ushort *)(param_2 + 0x98) >> 9 & 1) == 0)) {
    uVar3 = 0;
    uVar4 = 0;
    if (param_3 != 0) {
      puVar1 = *(undefined8 **)(param_3 + 0x50);
      if (puVar1 == (undefined8 *)0x0) {
        lVar2 = *(long *)(param_3 + 0x40);
        if (lVar2 != 0) {
          if (*(char *)(param_3 + 0x48) == '\0') {
            uVar4 = *(undefined4 *)(lVar2 + 0x2c);
            uVar3 = CONCAT44(*(undefined4 *)(lVar2 + 0x1c),*(undefined4 *)(lVar2 + 0xc));
          }
          else {
            uVar3 = *(undefined8 *)(lVar2 + 0x30);
            uVar4 = (undefined4)*(undefined8 *)(lVar2 + 0x38);
          }
        }
      }
      else {
        uVar4 = *(undefined4 *)(puVar1 + 1);
        uVar3 = *puVar1;
      }
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0xc0);
    uVar4 = *(undefined4 *)(param_2 + 200);
  }
  *param_1 = uVar3;
  *(undefined4 *)(param_1 + 1) = uVar4;
  return;
}

