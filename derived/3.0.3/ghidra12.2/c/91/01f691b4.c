
void FUN_01f691b4(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  uint *puVar5;
  undefined4 uVar6;
  long lVar7;
  undefined *local_40;
  char *pcStack_38;
  undefined4 local_14;
  
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "CarnivalWanderEventPlaza";
  local_40 = puVar1;
  sVar4 = FUN_02196ed0(*(long *)(param_1 + 8) + 0x508,&local_40);
  if (sVar4 == 0) {
    pcStack_38 = "ArrivedInEventPlaza";
    local_40 = puVar1;
    sVar4 = FUN_02196ed0(*(long *)(param_1 + 8) + 0x508,&local_40);
    if (sVar4 == 0) {
      uVar6 = 1;
    }
    else {
      uVar6 = 8;
    }
  }
  else {
    uVar6 = 6;
  }
  *(undefined4 *)(param_1 + 0x7880) = uVar6;
  FUN_01edb4ac(param_1);
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x56c) = 0x27;
  puVar5 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar2 = *puVar5 ^ *puVar5 << 0xb;
  uVar3 = puVar5[3];
  *puVar5 = puVar5[1];
  puVar5[1] = puVar5[2];
  uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
  puVar5[2] = uVar3;
  puVar5[3] = uVar2;
  if ((uint)((ulong)uVar2 * 100 >> 0x20) < 0x14) {
    local_40 = (undefined *)((ulong)local_40 & 0xffffffff00000000);
    lVar7 = *(long *)(param_1 + 0x10);
    local_14 = 0;
    FUN_01e5a930(0x40000000,lVar7,0xc,PTR_DAT_04bb2150,&local_40,&local_14,PTR_DAT_04bc1600,6);
    *(undefined4 *)(lVar7 + 0x3ac) = 0x47;
  }
  if (*(int *)(param_1 + 0x77b8) == 0x74) {
    *(undefined4 *)(param_1 + 0x136bc) = 0x1c2;
  }
  uVar2 = *(uint *)(*(long *)(param_1 + 8) + 0x508);
  if ((uVar2 < 10) && ((&DAT_053fee41)[(ulong)uVar2 * 0xba0] != '\0')) {
    FUN_0219bcf0(&DAT_053fe348 + (ulong)uVar2 * 0xba0,0,0xffffffff,1,1);
  }
  return;
}

