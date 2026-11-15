
void FUN_01f6cad0(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint *puVar4;
  undefined4 uVar5;
  long lVar6;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar3 = FUN_01f69f70(param_1,1);
  if ((uVar3 & 1) == 0) {
    puVar4 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar1 = *puVar4 ^ *puVar4 << 0xb;
    uVar2 = puVar4[3];
    *puVar4 = puVar4[1];
    puVar4[1] = puVar4[2];
    uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
    puVar4[2] = uVar2;
    puVar4[3] = uVar1;
    lVar6 = *(long *)(param_1 + 0x10);
    if (uVar1 < 0x55555556) {
      local_34 = 0;
      local_38 = 0;
      FUN_01e5a930(0x40000000,lVar6,0xc,PTR_DAT_04bb2150,&local_34,&local_38,PTR_DAT_04bc1600,6);
      uVar5 = 0x4a;
      goto LAB_01f6cbcc;
    }
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x136d8) = 1;
  }
  local_34 = 0;
  local_38 = 0;
  FUN_01e5a930(0x40000000,lVar6,0xc,PTR_DAT_04bb2150,&local_34,&local_38,PTR_DAT_04bc1600,6);
  uVar5 = 0x47;
LAB_01f6cbcc:
  *(undefined4 *)(lVar6 + 0x3ac) = uVar5;
  *(undefined4 *)(param_1 + 0x136c0) = 0;
  *(undefined4 *)(param_1 + 0x13648) = 0x1e;
  *(ulong *)(param_1 + 0xad58) = *(ulong *)(param_1 + 0xad58) | 0x1000;
  return;
}

