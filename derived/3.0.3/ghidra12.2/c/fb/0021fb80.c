
void FUN_0021fb80(undefined8 param_1,long param_2,uint *param_3,uint param_4)

{
  void *__s;
  uint uVar1;
  uint *puVar2;
  uint local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  
  if (((param_3 == (uint *)0x0) || (0x12 < param_4)) ||
     ((1 << (ulong)(param_4 & 0x1f) & 0x40044U) == 0)) {
    local_44 = 0x10c07;
  }
  else {
    __s = (void *)(param_2 + 8);
    memset(__s,0,0x10);
    puVar2 = param_3;
    if (2 < param_4) {
      if (param_4 == 0x12) {
        memcpy(__s,param_3,0x10);
        puVar2 = param_3 + 4;
      }
      else {
        puVar2 = param_3 + 1;
        uVar1 = (*param_3 & 0xff00ff00) >> 8 | (*param_3 & 0xff00ff) << 8;
        local_44 = uVar1 >> 0x10 | uVar1 << 0x10;
        memcpy(__s,&local_44,4);
      }
    }
    local_44 = 0;
    *(ushort *)(param_2 + 0x18) = (ushort)*puVar2 >> 8 | (ushort)*puVar2 << 8;
  }
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_34);
  FUN_002296c4(param_1,&local_44);
  return;
}

