
uint FUN_013038a4(long param_1,undefined4 *param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  long local_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  undefined **local_28;
  
  lVar1 = param_1 + 0x48;
  *(undefined4 *)(param_1 + 0x50) = *param_2;
  lVar2 = param_1 + 0x13c0;
  *(undefined4 *)(param_1 + 0x13c8) = *param_2;
  FUN_01301b70(lVar1);
  FUN_013014f0(lVar1);
  FUN_013014f0(lVar2);
  if (*(char *)((long)param_2 + 0x19) == '\0') {
    if (param_2[4] == 0) {
      iVar4 = param_2[2];
      if (iVar4 == 2) {
        sVar5 = *(short *)(param_1 + 0x84);
        if (*(short *)(param_1 + 0x88) <= *(short *)(param_1 + 0x84)) {
          sVar5 = *(short *)(param_1 + 0x88);
        }
        sVar6 = *(short *)(param_1 + 0x86);
        if (*(short *)(param_1 + 0x8a) <= *(short *)(param_1 + 0x86)) {
          sVar6 = *(short *)(param_1 + 0x8a);
        }
        uVar8 = *(int *)(param_1 + 0x1c) - (int)sVar6;
        uVar7 = *(int *)(param_1 + 0x18) - (int)sVar5;
        puVar3 = (undefined *)(param_1 + (ulong)(uVar8 * 3 + uVar7) * 0xe + 0x8c);
        if (2 < uVar8 || 2 < uVar7) {
          puVar3 = PTR_DAT_04bbc2f8;
        }
        iVar4 = 0;
        if ((byte)puVar3[0xc] - 1 < 3) {
          iVar4 = ((byte)puVar3[0xc] - 1 & 0xff) + 1;
        }
        FUN_01305bb0(param_1,param_2,iVar4,5,0);
        FUN_01307b2c(param_1,param_2[2]);
      }
      else {
        if (iVar4 == 1) {
          FUN_01307b2c(param_1,1);
        }
        else if (iVar4 != 0) goto LAB_01303a48;
        sVar5 = *(short *)(param_1 + 0x84);
        if (*(short *)(param_1 + 0x88) <= *(short *)(param_1 + 0x84)) {
          sVar5 = *(short *)(param_1 + 0x88);
        }
        sVar6 = *(short *)(param_1 + 0x86);
        if (*(short *)(param_1 + 0x8a) <= *(short *)(param_1 + 0x86)) {
          sVar6 = *(short *)(param_1 + 0x8a);
        }
        uVar8 = *(int *)(param_1 + 0x1c) - (int)sVar6;
        uVar7 = *(int *)(param_1 + 0x18) - (int)sVar5;
        puVar3 = (undefined *)(param_1 + (ulong)(uVar8 * 3 + uVar7) * 0xe + 0x8c);
        if (2 < uVar8 || 2 < uVar7) {
          puVar3 = PTR_DAT_04bbc2f8;
        }
        iVar4 = 0;
        if ((byte)puVar3[0xc] - 1 < 3) {
          iVar4 = ((byte)puVar3[0xc] - 1 & 0xff) + 1;
        }
        FUN_01305bb0(param_1,param_2,iVar4,5,0);
      }
    }
    else {
      FUN_01303ac8(param_1,param_2);
    }
  }
LAB_01303a48:
  FUN_01300f40(lVar1);
  FUN_01300f40(lVar2);
  FUN_01301d70(lVar1);
  uVar8 = FUN_01304010(param_1,param_2);
  FUN_013049b0(param_1,param_2);
  local_50 = param_1 + 8;
  lStack_48 = param_1 + 0x2738;
  local_28 = &PTR_LAB_0498d9e0;
  local_60 = lVar2;
  lStack_58 = lVar1;
  FUN_012fef90(&local_28,&local_60);
  return uVar8 & 1;
}

