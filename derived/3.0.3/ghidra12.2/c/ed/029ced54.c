
void FUN_029ced54(byte *param_1,char *param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint local_38;
  uint local_34;
  uint local_18;
  uint local_14;
  
  if (*param_2 == '\0') {
    FUN_029ce9c4(param_1,param_2);
    *param_2 = '\x01';
    bVar2 = *param_1;
  }
  else {
    bVar2 = *param_1;
  }
  if ((bVar2 >> 1 & 1) != 0) {
    if (*(int *)(param_2 + 8) == 2) {
      puVar10 = *(uint **)(param_2 + 0x10);
      nn::os::GetSystemTick();
      if (param_2[2] == '\0') {
        uVar4 = *puVar10;
        puVar7 = puVar10 + 1;
        uVar3 = *puVar7;
        puVar9 = puVar10 + 2;
        uVar6 = *puVar9;
        puVar5 = puVar10 + 3;
        uVar8 = *puVar5;
      }
      else {
        puVar9 = &local_34;
        puVar10 = &local_14;
        uVar6 = (*(uint *)(param_1 + 0x10) ^ *(uint *)(param_1 + 0x10) >> 0x1e) * 0x6c078965 + 1;
        uVar3 = uVar6 ^ uVar6 * 0x800;
        uVar8 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 2;
        uVar6 = uVar8 ^ uVar8 * 0x800;
        uVar4 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 3;
        uVar8 = uVar4 ^ uVar4 * 0x800;
        uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 4;
        uVar1 = uVar4 ^ uVar4 * 0x800;
        uVar4 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
        uVar3 = uVar6 >> 8 ^ uVar4 >> 0x13 ^ uVar6 ^ uVar4;
        uVar6 = uVar8 >> 8 ^ uVar3 >> 0x13 ^ uVar8 ^ uVar3;
        puVar5 = &local_38;
        uVar8 = uVar1 >> 8 ^ uVar6 >> 0x13 ^ uVar1 ^ uVar6;
        puVar7 = &local_18;
      }
      uVar4 = uVar4 ^ uVar4 << 0xb;
      *puVar10 = uVar3;
      *puVar7 = uVar6;
      *puVar9 = uVar8;
      uVar3 = uVar4 >> 8 ^ uVar8 >> 0x13 ^ uVar4 ^ uVar8;
      *puVar5 = uVar3;
      if ((int)(char)param_1[8] <= (int)((ulong)uVar3 * 100 >> 0x20)) {
        return;
      }
    }
    uVar3 = param_1[5] - 2;
    if ((uVar3 < 4) && (*(int *)(param_2 + 8) == 2)) {
      if (3 < uVar3) {
        return;
      }
      bVar2 = param_2[4];
      switch(uVar3) {
      case 0:
        if (3 < bVar2) {
          return;
        }
        if (bVar2 == 2) {
          return;
        }
        break;
      case 1:
        if (3 < bVar2) {
          return;
        }
        if (bVar2 == 1) {
          return;
        }
        break;
      case 3:
        if (bVar2 != 0) {
          if (bVar2 != 1) {
            return;
          }
          if (param_2[3] != '\0') {
            return;
          }
        }
      }
    }
    param_2[1] = '\x01';
  }
  return;
}

