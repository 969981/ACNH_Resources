
void FUN_0022bab8(undefined8 param_1,long param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int local_604;
  ErrorResultVariant aEStack_600 [12];
  int local_5f4 [4];
  int local_5e4;
  ErrorResultVariant aEStack_5e0 [1436];
  undefined4 local_44;
  
  if ((*(int *)(param_2 + 8) == 0x32ab9864) && ((*(byte *)(param_2 + 0xc) & 0x7f) == 9)) {
    uVar2 = *(uint *)(param_2 + 0x5f8);
    if ((0x5a0 < uVar2 - 0x20) || ((char)*(byte *)(param_2 + 0xc) < '\0')) goto LAB_0022bb6c;
    if (*param_3 == 1) {
      if (0x20 < uVar2) {
        iVar1 = 0;
        if (*(byte *)(param_2 + 0x1a) + 0x20 <= uVar2) {
          iVar1 = (uVar2 - 0x20) - (uint)*(byte *)(param_2 + 0x1a);
        }
        uVar3 = FUN_00222118(1);
        uVar2 = 0;
        if (uVar3 != 0) {
          uVar2 = ((uVar3 + iVar1) - 1) / uVar3;
        }
        uVar2 = uVar2 * uVar3;
        if (uVar2 < 0x5a1) {
          memset(&local_5e4,0xff,0x5a0);
          memcpy(&local_5e4,(void *)(param_2 + 0x58),(long)iVar1);
          FUN_00221dc8(local_5f4,(void *)(param_2 + 0x58),&local_5e4,uVar2,param_2 + 0x23,8,param_3)
          ;
          if (local_5f4[0] == 0) {
            local_604 = 0;
            *(uint *)(param_2 + 0x5f8) = uVar2 + 0x20;
            local_44 = 0;
            *(byte *)(param_2 + 0xc) = *(byte *)(param_2 + 0xc) | 0x80;
            nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_600,(Result *)&local_44);
            piVar4 = &local_604;
          }
          else {
            piVar4 = local_5f4;
          }
          goto LAB_0022bb90;
        }
        goto LAB_0022bb6c;
      }
LAB_0022bb30:
      local_5e4 = 0;
    }
    else {
      if (*param_3 == 0) goto LAB_0022bb30;
      local_5e4 = 0xc0b;
    }
  }
  else {
LAB_0022bb6c:
    local_5e4 = 0x10c08;
  }
  local_5f4[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5e0,(Result *)local_5f4);
  piVar4 = &local_5e4;
LAB_0022bb90:
  FUN_002296c4(param_1,piVar4);
  return;
}

