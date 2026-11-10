
bool FUN_00193770(long *param_1,long param_2)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  undefined **local_a0;
  undefined4 local_98;
  undefined1 local_94;
  long local_90;
  ulong local_88;
  ulong uStack_80;
  long local_78;
  undefined1 local_70;
  undefined2 local_6f;
  undefined **local_68;
  undefined4 local_60;
  undefined1 local_5c;
  long local_58;
  ulong local_50;
  undefined8 uStack_48;
  long local_40;
  undefined1 local_38;
  undefined2 local_37;
  
  uVar5 = (**(code **)(*param_1 + 0x20))();
  if ((uVar5 & 1) == 0) {
    return false;
  }
  if (*(byte *)(param_1 + 2) == 0) {
    bVar2 = (**(code **)(*param_1 + 0x38))(param_1);
    *(byte *)(param_1 + 2) = bVar2;
    if (*(ulong *)(param_2 + 0x18) < (ulong)bVar2) {
      return false;
    }
  }
  else if (*(ulong *)(param_2 + 0x18) < (ulong)*(byte *)(param_1 + 2)) {
    return false;
  }
  local_60 = 1;
  local_5c = 0;
  local_40 = 0;
  local_38 = 0;
  local_68 = &PTR_FUN_048393d8;
  local_50 = 0;
  uStack_48 = DAT_04be21f8;
  local_58 = FUN_00196a4c(&local_68);
  bVar2 = *(byte *)(param_1 + 2);
  local_37 = 0;
  lVar7 = *(long *)(param_2 + 0x18) - (ulong)bVar2;
  *(long *)(param_2 + 0x18) = lVar7;
  FUN_00193030(&local_68,*(long *)(param_2 + 0x10) + *(long *)(param_2 + 0x28) + lVar7,(ulong)bVar2,
               0xffffffffffffffff);
  uStack_80 = (**(code **)(*param_1 + 0x38))(param_1);
  uStack_80 = uStack_80 & 0xff;
  local_98 = 1;
  local_94 = 0;
  local_a0 = &PTR_FUN_048393d8;
  local_78 = 0;
  local_70 = 0;
  local_88 = 0;
  local_90 = FUN_00196a4c(&local_a0);
  local_6f = 0;
  (**(code **)(*param_1 + 0x10))(param_1,param_2,&local_a0);
  bVar2 = *(byte *)(param_1 + 2);
  bVar3 = (**(code **)(*param_1 + 0x38))(param_1);
  if (bVar2 < bVar3) {
    bVar2 = *(byte *)(param_1 + 2);
    uVar5 = (ulong)bVar2;
    bVar3 = (**(code **)(*param_1 + 0x38))(param_1);
    if (bVar2 < bVar3) {
      do {
        pbVar6 = (byte *)FUN_001939b4(&local_a0,uVar5);
        bVar2 = *pbVar6;
        pbVar6 = (byte *)FUN_001939b4(&local_a0,(ulong)*(byte *)(param_1 + 2) - 1);
        uVar5 = uVar5 + 1;
        *pbVar6 = *pbVar6 ^ bVar2;
      } while (bVar3 != uVar5);
    }
    local_88 = (ulong)*(byte *)(param_1 + 2);
    if (local_50 == local_88) {
LAB_00193968:
      iVar4 = memcmp((void *)(local_90 + local_78),(void *)(local_58 + local_40),local_88);
      bVar1 = iVar4 == 0;
      goto LAB_0019398c;
    }
  }
  else if (local_50 == local_88) goto LAB_00193968;
  bVar1 = false;
LAB_0019398c:
  FUN_00196ce0(&local_a0);
  FUN_00196ce0(&local_68);
  return bVar1;
}

