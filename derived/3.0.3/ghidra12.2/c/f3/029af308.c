
void FUN_029af308(long param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 local_40;
  undefined *local_38;
  undefined8 uStack_30;
  undefined2 local_28;
  
  if (*(int *)(param_1 + 0x274) == 1) {
    if (((*(byte *)(param_1 + 0x280) >> 1 & 1) == 0) || ((*(byte *)(param_1 + 0x14) & 1) != 0)) {
      if (*(char *)(param_1 + 0x259) != '\0') {
        iVar2 = *(short *)(param_1 + 0x27e) + 1;
        if (*(short *)(param_1 + 0x27c) <= iVar2) {
          if (*(int *)(param_1 + 0xc) == 1) {
            uVar1 = 0;
          }
          else if (*(int *)(param_1 + 0xc) == 2) {
            uVar1 = 1;
          }
          else {
            uVar1 = *(uint *)(param_1 + 0x278) ^ 1;
          }
          *(uint *)(param_1 + 0x278) = uVar1;
          FUN_029af440(param_1);
          iVar2 = 0;
        }
        *(short *)(param_1 + 0x27e) = (short)iVar2;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x274) = 0;
      *(byte *)(param_1 + 600) = *(byte *)(param_1 + 600) | 2;
    }
  }
  else if ((*(int *)(param_1 + 0x274) == 0) &&
          (((*(byte *)(param_1 + 0x280) & 1) != 0 || ((*(byte *)(param_1 + 0x14) & 1) != 0)))) {
    *(undefined2 *)(param_1 + 0x27e) = 0;
    *(uint *)(param_1 + 0x278) = (uint)(*(int *)(param_1 + 0xc) == 2);
    FUN_029af440(param_1);
    *(undefined4 *)(param_1 + 0x274) = 1;
  }
  local_28 = 0xff;
  uStack_30 = *(undefined8 *)(PTR_PTR_04bb2238 + 8);
  local_40 = *param_2;
  local_38 = PTR_DAT_04bb2020 + 0x10;
  FUN_02a0b444(param_1 + 0x20,&local_40);
  *(undefined1 *)(param_1 + 0x280) = 0;
  return;
}

