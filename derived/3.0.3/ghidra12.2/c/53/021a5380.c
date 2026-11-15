
void FUN_021a5380(long param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  undefined *puVar1;
  byte *pbVar2;
  uint *puVar3;
  byte bVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *local_80;
  long local_78;
  undefined1 local_70;
  byte local_6f;
  undefined *local_68;
  long local_60;
  undefined1 local_58;
  byte local_57;
  
  if ((param_4 & 1) == 0) {
    uVar6 = FUN_02640eb0();
    if ((uVar6 & 1) == 0) {
      return;
    }
    if (DAT_0537d558 == (long *)0x0) {
      return;
    }
    if ((1 < *(byte *)(*DAT_0537d558 + 0x476)) && (DAT_04c487d4 != -1)) {
      local_68 = (undefined *)CONCAT44(local_68._4_4_,5);
      puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar3 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar3 >> 5 & 1) != 0) {
        return;
      }
    }
LAB_021a53c4:
    if ((DAT_0537d558[5] != 0) && ((int)DAT_0537d558[0x10] == 1)) {
      return;
    }
  }
  else if (DAT_0537d558 != (long *)0x0) goto LAB_021a53c4;
  uVar6 = FUN_0290d828();
  if ((uVar6 & 1) != 0) {
    return;
  }
  if ((DAT_05ab8198 != (ushort *)0x0) && ((*DAT_05ab8198 & 1) != 0)) {
    return;
  }
  if (DAT_04c487d4 != -1) {
    local_68 = (undefined *)CONCAT44(local_68._4_4_,0x20);
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar1 + 4) & 1) != 0) {
      return;
    }
  }
  if (DAT_0537d558 == (long *)0x0) {
    bVar5 = false;
  }
  else {
    lVar10 = *DAT_0537d558;
    bVar4 = *(byte *)(lVar10 + 0x473);
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      pbVar2 = (byte *)(lVar10 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x80;
      if (7 < bVar4) {
        pbVar2 = (byte *)(lVar10 + 0x48);
      }
      if ((*pbVar2 >> 3 & 1) != 0) {
        bVar5 = *(byte *)(lVar10 + 0x472) == bVar4;
        goto LAB_021a5528;
      }
    }
    bVar5 = true;
  }
LAB_021a5528:
  param_3 = param_3 & param_4;
  if (*(char *)(param_1 + 0xaf9) != '\0') {
    FUN_0219d7e0(param_1,0,param_2 & 1,param_3 & 1);
  }
  if (*(char *)(param_1 + 0x1699) != '\0') {
    FUN_0219d7e0(param_1,1,param_2 & 1,param_3 & 1);
  }
  if (*(char *)(param_1 + 0x2239) != '\0') {
    FUN_0219d7e0(param_1,2,param_2 & 1,param_3 & 1);
  }
  if (*(char *)(param_1 + 0x2dd9) != '\0') {
    FUN_0219d7e0(param_1,3,param_2 & 1,param_3 & 1);
  }
  if (*(char *)(param_1 + 0x3979) != '\0') {
    FUN_0219d7e0(param_1,4,param_2 & 1,param_3 & 1);
  }
  if (*(char *)(param_1 + 0x4519) != '\0') {
    FUN_0219d7e0(param_1,5,param_2 & 1,param_3 & 1);
  }
  if (*(char *)(param_1 + 0x50b9) != '\0') {
    FUN_0219d7e0(param_1,6,param_2 & 1,param_3 & 1);
  }
  if (*(char *)(param_1 + 0x5c59) != '\0') {
    FUN_0219d7e0(param_1,7,param_2 & 1,param_3 & 1);
  }
  if (*(char *)(param_1 + 0x67f9) != '\0') {
    FUN_0219d7e0(param_1,8,param_2 & 1,param_3 & 1);
  }
  if (*(char *)(param_1 + 0x7399) != '\0') {
    FUN_0219d7e0(param_1,9,param_2 & 1,param_3 & 1);
  }
  if ((param_2 & 1) != 0) {
    if ((bVar5) && (lVar10 = FUN_0265b050(), lVar10 != 0)) {
      local_58 = 0;
      local_60 = lVar10;
      if (*(long *)(lVar10 + 0x28) == 0) {
        local_57 = 0;
      }
      else {
        puVar7 = *(undefined8 **)(*(long *)(lVar10 + 0x28) + 0x10);
        local_57 = 0;
        if (puVar7 != (undefined8 *)0x0) {
          local_57 = (**(code **)*puVar7)();
        }
      }
      puVar1 = PTR_DAT_04bb4dc8;
      local_57 = local_57 & 1;
      local_68 = PTR_DAT_04bb4dc8 + 0x10;
      uVar8 = FUN_021a5c18(&local_68);
      uVar6 = FUN_027e09dc(uVar8,1);
      if ((uVar6 & 1) != 0) {
        lVar9 = FUN_021a5c18(&local_68);
        if (((ulong)*(byte *)(lVar9 + 0x1e3366) < 3) &&
           (bVar4 = *(byte *)(lVar9 + (ulong)*(byte *)(lVar9 + 0x1e3366) + 0x1e3363), bVar4 < 10)) {
          FUN_0214d570(param_1 + (ulong)bVar4 * 0xba0 + 0x8b0);
        }
        local_70 = 0;
        local_78 = lVar10;
        if (*(long *)(lVar10 + 0x28) == 0) {
          local_6f = 0;
        }
        else {
          puVar7 = *(undefined8 **)(*(long *)(lVar10 + 0x28) + 0x10);
          local_6f = 0;
          if (puVar7 != (undefined8 *)0x0) {
            local_6f = (**(code **)*puVar7)();
          }
        }
        local_6f = local_6f & 1;
        local_80 = puVar1 + 0x10;
        uVar8 = FUN_021a5c18(&local_80);
        FUN_027ddea0(uVar8,1);
        FUN_02640184(&local_80);
      }
      FUN_02640184(&local_68);
    }
    if ((param_5 & 1) == 0) {
      FUN_021a5c80(&DAT_053fe348,0,0);
      return;
    }
  }
  return;
}

