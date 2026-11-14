
bool FUN_01b9cbc0(long param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  byte *pbVar7;
  undefined **local_60;
  undefined8 uStack_58;
  undefined1 *local_50;
  undefined4 local_48;
  undefined1 auStack_44 [4];
  undefined4 local_24;
  
  iVar4 = *param_4;
  if (iVar4 == 3) {
    pbVar7 = (byte *)(param_4 + 4);
  }
  else if (iVar4 == 2) {
    pbVar7 = (byte *)(param_4 + 3);
  }
  else {
    if (iVar4 != 1) {
      uVar6 = 0;
      goto LAB_01b9cc30;
    }
    pbVar7 = (byte *)((long)param_4 + 6);
  }
  uVar6 = 0;
  if (*pbVar7 < 0x18) {
    uVar6 = (uint)*pbVar7;
  }
LAB_01b9cc30:
  if (uVar6 == 0) {
    bVar5 = false;
  }
  else {
    uVar1 = (uint)(uVar6 < 0x18) & 0x8a9554U >> (ulong)(uVar6 & 0x1f);
    if (uVar6 - 0xe < 9) {
      uVar3 = 0;
      if (uVar6 - 0xe < 6) {
        uVar3 = uVar1;
      }
      local_50 = auStack_44;
      local_48 = 0xffffffff;
      if (uVar6 - 0x14 < 3) {
        uVar3 = 1;
      }
      local_24 = 0xffffffff;
      puVar2 = &local_24;
      if (uVar3 == 0) {
        puVar2 = (undefined4 *)0x0;
      }
      local_60 = &PTR_LAB_04a39930;
      uStack_58 = 0x10000001b;
      FUN_01b9d0e0(param_1,&local_60,puVar2,param_4,param_2,param_3);
      FUN_01b9d2d0(param_1,&local_60,uVar6,param_2,param_3,local_24);
    }
    else if (2 < uVar6 - 0xb) {
      FUN_01b9cd50(param_1,uVar6,param_2,param_3);
    }
    iVar4 = *(int *)(param_1 + 0xa88);
    if (uVar1 != 0) {
      uVar6 = iVar4 - 1;
      *(uint *)(param_1 + 0xa8c) = uVar6;
      if (uVar6 < 7) {
        param_1 = param_1 + (ulong)uVar6 * 0x180;
        *(uint *)(param_1 + 0x17c) = *(uint *)(param_1 + 0x17c) | 1;
      }
    }
    bVar5 = 0 < iVar4;
  }
  return bVar5;
}

