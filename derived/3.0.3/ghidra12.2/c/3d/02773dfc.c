
undefined4
FUN_02773dfc(undefined8 param_1,undefined8 *param_2,uint param_3,long param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined4 uVar11;
  long local_80;
  long lStack_78;
  int local_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  uint local_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  
  lVar7 = DAT_0556ca20;
  uVar8 = 7;
  if (0x30 < param_3) {
    if ((param_2 != (undefined8 *)0x0) && (DAT_0556ca20 != 0)) {
      if (**(char **)(param_4 + 8) == '\0') {
        uVar8 = 7;
      }
      else {
        puVar1 = param_2 + 6;
        uVar9 = nn::os::GetSystemTick();
        uVar3 = ((uint)uVar9 ^ (uint)uVar9 >> 0x1e) * 0x6c078965 + 1;
        uVar2 = uVar3 ^ uVar3 * 0x800;
        uVar4 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 2;
        uVar3 = uVar4 ^ uVar4 * 0x800;
        uVar5 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 3;
        uVar4 = uVar5 ^ uVar5 * 0x800;
        uVar6 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 4;
        uVar5 = uVar6 ^ uVar6 * 0x800;
        local_60 = uVar2 >> 8 ^ uVar6 >> 0x13 ^ uVar2 ^ uVar6;
        uStack_5c = uVar3 >> 8 ^ local_60 >> 0x13 ^ uVar3 ^ local_60;
        *(uint *)(param_2 + 2) = local_60;
        *(uint *)((long)param_2 + 0x14) = uStack_5c;
        local_58 = uVar4 >> 8 ^ uStack_5c >> 0x13 ^ uVar4 ^ uStack_5c;
        uStack_54 = uVar5 >> 8 ^ local_58 >> 0x13 ^ uVar5 ^ local_58;
        *(uint *)(param_2 + 3) = local_58;
        *(uint *)((long)param_2 + 0x1c) = uStack_54;
        *param_2 = CONCAT44(local_60,uStack_5c);
        param_2[1] = CONCAT44(local_58,uStack_54);
        uVar9 = FUN_02774218(uVar9,&local_70,&local_60,param_5);
        FUN_02774218(uVar9,&local_80,&local_60,param_5);
        uVar10 = (ulong)(int)(param_3 - 0x30);
        FUN_007d2960(param_2 + 4,0x10,puVar1,uVar10,&local_80,0x10);
        nn::crypto::EncryptAes128Cbc(puVar1,uVar10,&local_70,0x10,param_2,0x10,puVar1,uVar10);
        uVar9 = FUN_026ce9d0(lVar7,param_2,param_3,param_4,0);
        local_60 = (uint)uVar9;
        if (local_60 < 9) {
          uVar11 = *(undefined4 *)(&DAT_0417b8c4 + (long)(int)local_60 * 4);
        }
        else {
          uVar11 = 7;
        }
        local_70 = *(int *)(param_2 + 2);
        iStack_6c = *(int *)((long)param_2 + 0x14);
        local_68 = *(int *)(param_2 + 3);
        iStack_64 = *(int *)((long)param_2 + 0x1c);
        if ((iStack_6c == 0 && local_70 == 0) && (local_68 == 0 && iStack_64 == 0)) {
          iStack_6c = 0x6c078967;
          iStack_64 = 0x48077044;
          local_68 = 0x714acb41;
          local_70 = 1;
        }
        FUN_02774218(uVar9,&local_60,&local_70,param_5);
        uVar9 = nn::crypto::DecryptAes128Cbc
                          (puVar1,uVar10,&local_60,0x10,param_2,0x10,puVar1,uVar10);
        FUN_02774218(uVar9,&local_60,&local_70,param_5);
        FUN_007d2960(&local_80,0x10,puVar1,uVar10,&local_60,0x10);
        uVar8 = 6;
        if (local_80 == param_2[4] && lStack_78 == param_2[5]) {
          uVar8 = uVar11;
        }
      }
    }
  }
  return uVar8;
}

