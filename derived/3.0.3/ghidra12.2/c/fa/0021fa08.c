
void FUN_0021fa08(undefined8 param_1,long param_2,uint *param_3,int *param_4,uint param_5)

{
  uint *__s1;
  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 local_54;
  ErrorResultVariant aEStack_50 [12];
  undefined4 local_44;
  
  if ((param_3 != (uint *)0x0) && (param_4 != (int *)0x0)) {
    __s1 = (uint *)(param_2 + 8);
    iVar1 = memcmp(__s1,&DAT_0410d274,0x10);
    if (iVar1 == 0) {
      if (1 < param_5) goto LAB_0021fae8;
    }
    else {
      iVar1 = memcmp(__s1,&DAT_0410d274,0x10);
      uVar2 = 6;
      if (iVar1 != 0) {
        iVar1 = memcmp((void *)(param_2 + 0xc),&DAT_0410d274,0xc);
        uVar2 = 6;
        if (iVar1 != 0) {
          uVar2 = 0x12;
        }
      }
      if (uVar2 <= param_5) {
LAB_0021fae8:
        iVar1 = memcmp(__s1,&DAT_0410d274,0x10);
        puVar3 = param_3;
        if (iVar1 != 0) {
          iVar1 = memcmp(__s1,&DAT_0410d274,0x10);
          if ((iVar1 == 0) ||
             (iVar1 = memcmp((void *)(param_2 + 0xc),&DAT_0410d274,0xc), iVar1 == 0)) {
            uVar2 = (*__s1 & 0xff00ff00) >> 8 | (*__s1 & 0xff00ff) << 8;
            puVar3 = param_3 + 1;
            *param_3 = uVar2 >> 0x10 | uVar2 << 0x10;
          }
          else {
            memcpy(param_3,__s1,0x10);
            puVar3 = param_3 + 4;
          }
        }
        local_54 = 0;
        *(ushort *)puVar3 = *(ushort *)(param_2 + 0x18) >> 8 | *(ushort *)(param_2 + 0x18) << 8;
        *param_4 = ((int)puVar3 - (int)param_3) + 2;
        goto LAB_0021faa4;
      }
    }
  }
  local_54 = 0x10c07;
LAB_0021faa4:
  local_44 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_44);
  FUN_002296c4(param_1,&local_54);
  return;
}

