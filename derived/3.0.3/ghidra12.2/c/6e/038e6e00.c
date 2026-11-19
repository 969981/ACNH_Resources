
void FUN_038e6e00(long param_1,undefined8 param_2,undefined8 *param_3,uint param_4,
                 undefined8 param_5)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 *puVar3;
  ushort *puVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ushort uVar8;
  ushort *puVar9;
  long lVar10;
  ushort *puVar11;
  uint uVar12;
  undefined *local_488;
  undefined1 *local_480;
  uint local_478;
  ushort auStack_470 [256];
  undefined1 auStack_270 [512];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar11 = *(ushort **)(param_1 + 0x60);
  if (puVar11 == (ushort *)0x0) {
    puVar11 = auStack_470;
    local_480 = auStack_270;
    local_478 = 0x200;
  }
  else {
    uVar12 = *(uint *)(param_1 + 0x68);
    local_480 = (undefined1 *)((long)puVar11 + (long)(int)uVar12);
    local_488 = PTR_DAT_04bb2030 + 0x10;
    local_478 = uVar12;
    if ((int)uVar12 < 1) {
      local_480 = (undefined1 *)0x0;
      local_478 = 0;
      goto LAB_038e6ed4;
    }
  }
  uVar12 = local_478;
  puVar3 = local_480;
  local_488 = PTR_DAT_04bb2030 + 0x10;
  local_480[local_478 - 1] = 0;
  uVar7 = (ulong)(int)local_478;
  if (local_478 != 0) {
    local_70 = *param_3;
    uStack_68 = param_3[1];
    local_60 = param_3[2];
    uStack_58 = param_3[3];
    uVar5 = nn::util::VSNPrintf(local_480,uVar7,param_2,&local_70);
    if (((int)uVar5 < 0) || (uVar7 <= uVar5)) {
      puVar3[uVar7 - 1] = 0;
    }
  }
LAB_038e6ed4:
  (**(code **)(local_488 + 0x18))(&local_488);
  if (0 < (int)uVar12) {
    lVar6 = 0;
    uVar7 = (ulong)uVar12;
    puVar4 = puVar11;
    while (puVar9 = puVar4, (int)lVar6 < (int)(uVar12 - 1)) {
      pbVar1 = local_480 + lVar6;
      bVar2 = *pbVar1;
      uVar8 = (ushort)bVar2;
      if (bVar2 == 0) break;
      if ((char)bVar2 < '\0') {
        uVar8 = (ushort)bVar2;
        if ((uVar8 & 0xe0) == 0xc0) {
          if (pbVar1[1] == 0) break;
          lVar10 = 2;
          uVar8 = pbVar1[1] & 0x3f | (uVar8 & 0x1f) << 6;
        }
        else {
          if ((((uVar8 & 0xf0) != 0xe0) || (pbVar1[1] == 0)) || (pbVar1[2] == 0)) break;
          lVar10 = 3;
          uVar8 = (ushort)bVar2 << 0xc | (pbVar1[1] & 0x3f) << 6 | pbVar1[2] & 0x3f;
        }
      }
      else {
        lVar10 = 1;
      }
      lVar6 = lVar10 + lVar6;
      uVar7 = uVar7 - 1;
      *puVar9 = uVar8;
      puVar4 = puVar9 + 1;
      if (uVar7 == 0) break;
    }
    *puVar9 = 0;
  }
  FUN_038e7464(param_1,puVar11,0xffffffff,param_4 & 1,param_5);
  return;
}

