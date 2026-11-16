
void FUN_029d6950(long param_1,int *param_2)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 *puVar8;
  byte bVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  
  if ((char)param_2[2] == '\0') {
    if (*(char *)(param_1 + 0x5c) != '\0') {
      local_54 = 0;
      FUN_029d6bc8(param_1 + 0x20,&local_54,*(undefined8 *)(param_1 + 0xe0));
    }
    if (*(char *)(param_1 + 0x9c) != '\0') {
      local_54 = 0;
      FUN_029d6bc8(param_1 + 0x60,&local_54,*(undefined8 *)(param_1 + 0xe0));
    }
    if (*(char *)(param_1 + 0xdc) != '\0') {
      local_54 = 0;
      FUN_029d6bc8(param_1 + 0xa0,&local_54,*(undefined8 *)(param_1 + 0xe0));
    }
    iVar3 = *(int *)(param_1 + 0x10);
    if (iVar3 != 0) {
      lVar11 = *(long *)(param_1 + 0x18);
      uVar10 = 0;
      do {
        *(undefined8 *)(lVar11 + (-(uVar10 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3)) = 0;
        uVar13 = uVar10 + 1;
        uVar10 = uVar13 & 0xffffffff;
      } while (iVar3 != (int)uVar13);
    }
    *(undefined1 *)(param_1 + 0xe8) = 0;
  }
  else {
    bVar9 = *(byte *)(param_1 + 0xe8);
    lVar11 = param_1 + 0x20;
    iVar3 = *param_2;
    iVar7 = param_2[1];
    lVar12 = lVar11 + ((long)(char)bVar9 & 0xffffffffU) * 0x40;
    if (2 < bVar9) {
      lVar12 = lVar11;
    }
    if (*(int *)(lVar12 + 0x38) != iVar3) {
      uVar4 = (char)(bVar9 + 1) * 0x56;
      bVar9 = bVar9 + 1 + (((byte)(uVar4 >> 0xf) & 1) + (char)(uVar4 >> 8)) * -3;
      *(byte *)(param_1 + 0xe8) = bVar9;
    }
    uVar4 = ((char)bVar9 + 2) * 0x5556;
    uVar4 = (char)bVar9 + 2 + ((uVar4 >> 0x10) - ((int)uVar4 >> 0x1f)) * -3;
    lVar12 = lVar11 + (ulong)(uint)(int)(char)uVar4 * 0x40;
    if (2 < (uVar4 & 0xff)) {
      lVar12 = lVar11;
    }
    local_58 = *(undefined4 *)(lVar12 + 0x38);
    FUN_029d6bc8(lVar12,&local_58,*(undefined8 *)(param_1 + 0xe0));
    lVar12 = lVar11 + ((long)(char)*(byte *)(param_1 + 0xe8) & 0xffffffffU) * 0x40;
    if (2 < *(byte *)(param_1 + 0xe8)) {
      lVar12 = lVar11;
    }
    local_5c = iVar3;
    FUN_029d6bc8(lVar12,&local_5c,*(undefined8 *)(param_1 + 0xe0));
    iVar3 = *(char *)(param_1 + 0xe8) + 1;
    uVar4 = iVar3 * 0x5556;
    uVar4 = iVar3 + ((uVar4 >> 0x10) - ((int)uVar4 >> 0x1f)) * -3;
    lVar12 = lVar11 + (ulong)(uint)(int)(char)uVar4 * 0x40;
    if (2 < (uVar4 & 0xff)) {
      lVar12 = lVar11;
    }
    local_60 = iVar7;
    FUN_029d6bc8(lVar12,&local_60,*(undefined8 *)(param_1 + 0xe0));
    puVar6 = PTR_DAT_04bc4000;
    puVar5 = PTR_DAT_04bc3ff8;
    iVar3 = *(int *)(param_1 + 0x10);
    if (iVar3 != 0) {
      lVar12 = *(long *)(param_1 + 0x18);
      uVar10 = 0;
      uVar13 = 0;
      puVar1 = PTR_DAT_04bb4448 + 0x10;
      do {
        lVar2 = lVar11 + uVar13 * 0x40;
        if (2 < (uint)uVar10) {
          lVar2 = lVar11;
        }
        puVar8 = (undefined8 *)FUN_03f2d7f0(lVar2);
        if (((*puVar6 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar6), iVar7 != 0)) {
          *(undefined **)puVar5 = puVar1;
          __cxa_guard_release(puVar6);
        }
        if (puVar8 == (undefined8 *)0x0) {
          puVar8 = (undefined8 *)0x0;
        }
        else {
          uVar10 = (**(code **)*puVar8)(puVar8,puVar5);
          if ((uVar10 & 1) == 0) {
            puVar8 = (undefined8 *)0x0;
          }
        }
        *(undefined8 **)(lVar12 + (-(uVar13 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3)) = puVar8;
        uVar10 = uVar13 + 1;
        uVar13 = uVar10 & 0xffffffff;
      } while (iVar3 != (int)uVar10);
    }
  }
  return;
}

