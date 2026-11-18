
void FUN_032ca830(int *param_1,uint *param_2,undefined1 *param_3,long param_4,long param_5)

{
  byte *pbVar1;
  undefined4 uVar2;
  int iVar3;
  byte *pbVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  uint uVar10;
  
  *param_2 = 0;
  *param_3 = 0;
  pbVar4 = *(byte **)(param_4 + 8);
  uVar6 = (uint)*pbVar4;
  if (*pbVar4 != 0) {
    lVar8 = 0;
    do {
      if (pbVar4[lVar8] == 0) {
LAB_032ca880:
        uVar7 = (uint)lVar8;
joined_r0x032ca880:
        if (uVar7 != 0) {
          uVar10 = uVar7 & 3;
          if (uVar7 < 4) {
            uVar6 = 0xffffffff;
          }
          else {
            uVar7 = uVar7 & 0xfffffffc;
            uVar6 = 0xffffffff;
            do {
              uVar7 = uVar7 - 4;
              uVar2 = crc32b(uVar6,(uint)*pbVar4,0x4c11db7);
              uVar2 = crc32b(uVar2,(uint)pbVar4[1],0x4c11db7);
              uVar2 = crc32b(uVar2,(uint)pbVar4[2],0x4c11db7);
              pbVar1 = pbVar4 + 3;
              pbVar4 = pbVar4 + 4;
              uVar6 = crc32b(uVar2,(uint)*pbVar1,0x4c11db7);
            } while (uVar7 != 0);
          }
          while (uVar10 != 0) {
            uVar10 = uVar10 - 1;
            uVar6 = crc32b(uVar6,(uint)*pbVar4,0x4c11db7);
            pbVar4 = pbVar4 + 1;
          }
          uVar6 = ~uVar6;
          iVar3 = *param_1;
          if (iVar3 == 0) {
            return;
          }
          goto LAB_032ca90c;
        }
        break;
      }
      if (pbVar4[lVar8 + 1] == 0) {
        lVar8 = lVar8 + 1;
        goto LAB_032ca880;
      }
      if (pbVar4[lVar8 + 2] == 0) {
        uVar7 = (int)lVar8 + 2;
        goto joined_r0x032ca880;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    uVar6 = 0;
  }
  iVar3 = *param_1;
  if (iVar3 == 0) {
    return;
  }
LAB_032ca90c:
  puVar9 = *(undefined8 **)(param_1 + 2);
  lVar8 = (long)iVar3 << 3;
  while (puVar5 = (uint *)*puVar9, uVar6 != *puVar5) {
    puVar9 = puVar9 + 1;
    lVar8 = lVar8 + -8;
    if (lVar8 == 0) {
      return;
    }
  }
  pbVar4 = *(byte **)(param_5 + 8);
  if (*pbVar4 != 0) {
    lVar8 = 0;
    do {
      if (pbVar4[lVar8] == 0) {
LAB_032ca980:
        uVar6 = (uint)lVar8;
joined_r0x032ca980:
        if (uVar6 != 0) {
          uVar7 = uVar6 & 3;
          if (uVar6 < 4) {
            uVar10 = 0xffffffff;
          }
          else {
            uVar6 = uVar6 & 0xfffffffc;
            uVar10 = 0xffffffff;
            do {
              uVar6 = uVar6 - 4;
              uVar2 = crc32b(uVar10,(uint)*pbVar4,0x4c11db7);
              uVar2 = crc32b(uVar2,(uint)pbVar4[1],0x4c11db7);
              uVar2 = crc32b(uVar2,(uint)pbVar4[2],0x4c11db7);
              pbVar1 = pbVar4 + 3;
              pbVar4 = pbVar4 + 4;
              uVar10 = crc32b(uVar2,(uint)*pbVar1,0x4c11db7);
            } while (uVar6 != 0);
          }
          while (uVar7 != 0) {
            uVar7 = uVar7 - 1;
            uVar10 = crc32b(uVar10,(uint)*pbVar4,0x4c11db7);
            pbVar4 = pbVar4 + 1;
          }
          uVar10 = ~uVar10;
          uVar6 = puVar5[2];
          if (uVar6 == 0) {
            return;
          }
          goto LAB_032caa0c;
        }
        break;
      }
      if (pbVar4[lVar8 + 1] == 0) {
        lVar8 = lVar8 + 1;
        goto LAB_032ca980;
      }
      if (pbVar4[lVar8 + 2] == 0) {
        uVar6 = (int)lVar8 + 2;
        goto joined_r0x032ca980;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
  }
  uVar10 = 0;
  uVar6 = puVar5[2];
  if (uVar6 != 0) {
LAB_032caa0c:
    puVar9 = *(undefined8 **)(puVar5 + 4);
    lVar8 = (long)(int)uVar6 << 3;
    do {
      puVar5 = (uint *)*puVar9;
      if (uVar10 == *puVar5) {
        *param_2 = puVar5[1];
        *param_3 = (char)puVar5[2];
        return;
      }
      puVar9 = puVar9 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
  }
  return;
}

