
uint FUN_022167a0(undefined8 param_1,uint *param_2,long param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint *puVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 local_48;
  
  uVar4 = *param_2 - (*param_2 >> 1 & 0x55555555);
  uVar7 = param_2[1] - (param_2[1] >> 1 & 0x55555555);
  uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
  uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
  uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
  uVar4 = uVar4 + (uVar4 >> 8);
  uVar7 = uVar7 + (uVar7 >> 4) & 0xf0f0f0f;
  uVar7 = uVar7 + (uVar7 >> 8);
  if ((uVar7 + (uVar7 >> 0x10) & 0x3f) + (uVar4 + (uVar4 >> 0x10) & 0x3f) == 0) {
    return 0;
  }
  puVar5 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar4 = 0;
  uVar1 = puVar5[3];
  uVar6 = 0;
  local_48 = 0;
  uVar7 = *puVar5 ^ *puVar5 << 0xb;
  *puVar5 = puVar5[1];
  puVar5[1] = puVar5[2];
  uVar7 = uVar7 >> 8 ^ uVar1 >> 0x13 ^ uVar7 ^ uVar1;
  puVar5[2] = uVar1;
  puVar5[3] = uVar7;
  uVar7 = (uint)((ulong)uVar7 * 100 >> 0x20);
  lVar3 = param_3;
  if (0x1d < uVar7) {
    lVar3 = param_4;
  }
  do {
    uVar1 = *(uint *)(lVar3 + (-(uVar6 >> 0x1f) & 0xfffffffc00000000 | uVar6 << 2));
    uVar1 = uVar1 - (uVar1 >> 1 & 0x55555555);
    uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
    uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
    uVar1 = uVar1 + (uVar1 >> 8);
    if ((uVar1 + (uVar1 >> 0x10) & 0x3f) != 0) {
      lVar2 = (ulong)(uVar4 >> 5) * 4;
      *(uint *)((long)&local_48 + lVar2) =
           *(uint *)((long)&local_48 + lVar2) | 1 << (ulong)(uVar4 & 0x1f);
    }
    uVar4 = uVar4 + 1;
    uVar6 = (ulong)((int)uVar6 + 1);
  } while (uVar4 != 0x23);
  local_48 = CONCAT44(param_2[1] & local_48._4_4_,*param_2 & (uint)local_48) & 0x7ffffffff;
  uVar6 = FUN_02216480(param_1,&local_48);
  uVar4 = 1;
  if ((uVar6 & 1) == 0) {
    uVar4 = 0;
    local_48 = 0;
    uVar6 = 0;
    if (0x1d < uVar7) {
      param_4 = param_3;
    }
    do {
      uVar7 = *(uint *)(param_4 + (-(uVar6 >> 0x1f) & 0xfffffffc00000000 | uVar6 << 2));
      uVar7 = uVar7 - (uVar7 >> 1 & 0x55555555);
      uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
      uVar7 = uVar7 + (uVar7 >> 4) & 0xf0f0f0f;
      uVar7 = uVar7 + (uVar7 >> 8);
      if ((uVar7 + (uVar7 >> 0x10) & 0x3f) != 0) {
        lVar3 = (ulong)(uVar4 >> 5) * 4;
        *(uint *)((long)&local_48 + lVar3) =
             *(uint *)((long)&local_48 + lVar3) | 1 << (ulong)(uVar4 & 0x1f);
      }
      uVar4 = uVar4 + 1;
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (uVar4 != 0x23);
    local_48 = CONCAT44(param_2[1] & local_48._4_4_,*param_2 & (uint)local_48) & 0x7ffffffff;
    uVar4 = FUN_02216480(param_1,&local_48);
  }
  return uVar4 & 1;
}

