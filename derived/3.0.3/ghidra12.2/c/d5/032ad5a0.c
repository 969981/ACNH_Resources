
void FUN_032ad5a0(long *param_1,byte *param_2)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  uint local_4;
  
  lVar7 = 0;
  do {
    if (param_2[lVar7] == 0) {
LAB_032ad5f0:
      uVar6 = (uint)lVar7;
joined_r0x032ad5f0:
      if (uVar6 != 0) {
        uVar2 = uVar6 & 3;
        if (uVar6 < 4) {
          local_4 = 0xffffffff;
        }
        else {
          uVar6 = uVar6 & 0xfffffffc;
          local_4 = 0xffffffff;
          do {
            uVar6 = uVar6 - 4;
            uVar3 = crc32b(local_4,(uint)*param_2,0x4c11db7);
            uVar3 = crc32b(uVar3,(uint)param_2[1],0x4c11db7);
            uVar3 = crc32b(uVar3,(uint)param_2[2],0x4c11db7);
            pbVar1 = param_2 + 3;
            param_2 = param_2 + 4;
            local_4 = crc32b(uVar3,(uint)*pbVar1,0x4c11db7);
          } while (uVar6 != 0);
        }
        while (uVar2 != 0) {
          uVar2 = uVar2 - 1;
          local_4 = crc32b(local_4,(uint)*param_2,0x4c11db7);
          param_2 = param_2 + 1;
        }
        local_4 = ~local_4;
        goto LAB_032ad664;
      }
      break;
    }
    if (param_2[lVar7 + 1] == 0) {
      lVar7 = lVar7 + 1;
      goto LAB_032ad5f0;
    }
    if (param_2[lVar7 + 2] == 0) {
      uVar6 = (int)lVar7 + 2;
      goto joined_r0x032ad5f0;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  local_4 = 0;
LAB_032ad664:
  lVar7 = *param_1;
  do {
    if (lVar7 == 0) {
      return;
    }
    while (*(uint *)(lVar7 + 0x20) <= local_4) {
      if (local_4 <= *(uint *)(lVar7 + 0x20)) {
        iVar4 = *(int *)(lVar7 + 0x24);
        iVar5 = iVar4 + -1;
        *(int *)(lVar7 + 0x24) = iVar5;
        if (iVar5 != 0 && 0 < iVar4) {
          return;
        }
        lVar7 = *param_1;
        if (lVar7 == 0) {
          return;
        }
        lVar8 = lVar7;
        do {
          if (local_4 < *(uint *)(lVar8 + 0x20)) {
            lVar8 = *(long *)(lVar8 + 8);
          }
          else {
            if (local_4 <= *(uint *)(lVar8 + 0x20)) {
              lVar7 = FUN_032ada80(param_1,lVar7,&local_4);
              *param_1 = lVar7;
              if (lVar7 == 0) {
                return;
              }
              *(undefined8 *)(lVar7 + 0x18) = 1;
              return;
            }
            lVar8 = *(long *)(lVar8 + 0x10);
          }
        } while (lVar8 != 0);
        return;
      }
      lVar7 = *(long *)(lVar7 + 0x10);
      if (lVar7 == 0) {
        return;
      }
    }
    lVar7 = *(long *)(lVar7 + 8);
  } while( true );
}

