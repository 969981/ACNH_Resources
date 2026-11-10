
void FUN_0022bc38(undefined8 param_1,long param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int local_600;
  ErrorResultVariant aEStack_5fc [12];
  int local_5f0 [4];
  int local_5e0;
  ErrorResultVariant aEStack_5dc [1436];
  undefined4 local_34;
  
  piVar4 = &local_600;
  if ((*(int *)(param_2 + 8) == 0x32ab9864) && ((*(byte *)(param_2 + 0xc) & 0x7f) == 9)) {
    uVar1 = *(uint *)(param_2 + 0x5f8) - 0x20;
    if (0x5a0 < uVar1) goto LAB_0022bcd8;
    if ((char)*(byte *)(param_2 + 0xc) < '\0') {
      if (*param_3 == 1) {
        uVar1 = uVar1 - *(byte *)(param_2 + 0x1a);
        if ((uVar1 == 0) || (*(uint *)(param_2 + 0x5f8) < *(byte *)(param_2 + 0x1a) + 0x20)) {
          local_5e0 = 0;
          *(undefined1 *)(param_2 + 0xc) = 9;
          goto LAB_0022bce0;
        }
        uVar3 = FUN_00222118(1);
        uVar2 = 0;
        if (uVar3 != 0) {
          uVar2 = uVar1 / uVar3;
        }
        if ((uVar1 == uVar2 * uVar3) && (uVar1 < 0x5a1)) {
          FUN_00221f5c(local_5f0,&local_5e0,(void *)(param_2 + 0x58),uVar1,param_2 + 0x23,8,param_3)
          ;
          if (local_5f0[0] == 0) {
            memcpy((void *)(param_2 + 0x58),&local_5e0,(ulong)uVar1);
            local_600 = 0;
            local_34 = 0;
            *(byte *)(param_2 + 0xc) = *(byte *)(param_2 + 0xc) & 0x7f;
            nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5fc,(Result *)&local_34);
          }
          else {
            piVar4 = local_5f0;
          }
          goto LAB_0022bcf8;
        }
      }
      goto LAB_0022bcd8;
    }
    local_5e0 = 0;
  }
  else {
LAB_0022bcd8:
    local_5e0 = 0x2c03;
  }
LAB_0022bce0:
  local_5f0[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5dc,(Result *)local_5f0);
  piVar4 = &local_5e0;
LAB_0022bcf8:
  FUN_002296c4(param_1,piVar4);
  return;
}

