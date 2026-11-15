
/* WARNING: Removing unreachable block (ram,0x01e39a28) */

void FUN_01e39960(long param_1)

{
  uint uVar1;
  ushort uVar2;
  uint *puVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  ushort uVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  int local_38;
  float local_34;
  undefined4 uStack_30;
  float local_2c;
  undefined1 local_28 [4];
  undefined4 local_24;
  
  pbVar9 = *(byte **)(param_1 + 0x690);
  if (pbVar9 == (byte *)0x0) {
    return;
  }
  uVar5 = *(ushort *)PTR_DAT_04bb6298;
  if ((long)(short)uVar5 != 0xffffffffffffffff) {
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar5 * 8);
    if (0xff < uVar5) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    uVar7 = uVar5;
    if ((*puVar3 >> 3 & 1) == 0) goto LAB_01e39a2c;
    if (DAT_055c1b60 != &DAT_055c1b58) {
      uVar7 = 0;
      puVar8 = DAT_055c1b60;
      do {
        if (*(int *)(puVar8 + -1) == 0x6622bd46) goto LAB_01e39a2c;
        puVar8 = (undefined8 *)puVar8[1];
        uVar7 = uVar7 + 1;
      } while (puVar8 != &DAT_055c1b58);
    }
  }
  uVar7 = 0xffff;
LAB_01e39a2c:
  uVar2 = (ushort)pbVar9[4] | (pbVar9[5] & 3) << 8;
  if (0x1ff < uVar2) {
    uVar2 = uVar2 | 0xfc00;
  }
  if (uVar2 == uVar7) {
    bVar4 = pbVar9[1];
    uVar1 = (uint)*pbVar9 | (bVar4 & 0xf) << 8;
    if ((bVar4 & 8) != 0) {
      uVar1 = uVar1 | 0xfffff000;
    }
    uVar6 = (uint)(bVar4 >> 4) | (uint)pbVar9[2] << 4;
    local_34 = (float)(int)uVar1;
    local_28[0] = 0;
    uVar1 = uVar6 | 0xfffff000;
    if (-1 < (char)pbVar9[2]) {
      uVar1 = uVar6;
    }
    local_2c = (float)(int)uVar1;
    uStack_30 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x27c);
    if (*(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8) != 0) {
      if (uVar5 == 0xffff) {
        local_24 = 7;
      }
      else {
        puVar3 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar5 & 0xffffffffU) * 8);
        if (0xff < uVar5) {
          puVar3 = (uint *)PTR_DAT_04bc39f8;
        }
        local_24 = 7;
        if ((*puVar3 & 2) != 0) {
          local_24 = 5;
        }
      }
      FUN_00962700(*(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8),&local_34,&local_24,1,local_28);
    }
    local_38 = (uint)pbVar9[3] << 0x18;
    FUN_01e39520(param_1,&local_34,&local_38,0);
  }
  return;
}

