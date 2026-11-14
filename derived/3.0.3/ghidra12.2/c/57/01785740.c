
void FUN_01785740(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  char cVar9;
  ulong uVar10;
  undefined1 *puVar11;
  uint *puVar12;
  int *piVar13;
  long lVar14;
  undefined1 *__src;
  undefined *local_1b0;
  undefined1 *puStack_1a8;
  long local_1a0;
  long local_198;
  long local_190;
  long local_188;
  long local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  long local_168;
  long local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  long local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  long local_118;
  undefined8 local_110;
  long local_108;
  undefined *local_100;
  undefined1 *local_f8;
  int local_f0;
  undefined1 local_ec [127];
  undefined1 local_6d;
  undefined *local_68;
  undefined2 local_60;
  undefined2 local_5e;
  undefined4 local_5c;
  long local_58;
  
  puVar2 = PTR_DAT_04bb43c0;
  if (param_1 == 0) {
    return;
  }
  local_58 = 0;
  local_5e = *(undefined2 *)(param_1 + 0x11f6);
  local_68 = PTR_DAT_04bc0510 + 0x10;
  local_60 = *(undefined2 *)(param_1 + 0x11f4);
  local_5c = *(undefined4 *)(param_1 + 0x11f8);
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_60);
  if (*(long *)puVar2 != 0) {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar14 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar14 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_1 + 0x11f4);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar14 + 0x1d8)) &&
         (lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8), lVar14 != 0)) {
        local_58 = lVar14;
      }
    }
  }
  uVar4 = FUN_01b01f10(&local_68);
  puVar3 = PTR_DAT_04bbe400;
  puVar2 = PTR_DAT_04bbe3f8;
  lVar14 = *(long *)PTR_DAT_04bb46d0;
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x400);
  if (*(uint *)(lVar14 + 0x3e0) <= uVar4) {
    return;
  }
  puVar8 = *(uint **)(*(long *)(lVar14 + 1000) + (long)(int)uVar4 * 8);
  if (puVar8 == (uint *)0x0) {
    return;
  }
  if (*puVar8 != 0) {
    cVar9 = *PTR_DAT_04bbe3f8;
    do {
      if (cVar9 == '\0') {
        cVar9 = '\x01';
        *(undefined8 *)puVar3 = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
        *puVar2 = 1;
        *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
        *(undefined4 *)(puVar3 + 0x38) = 0xffffffff;
        *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar4 = *(uint *)(puVar3 + 0x30);
        if (-1 < (int)uVar4) {
          puVar11 = (undefined1 *)((ulong)uVar4 + (long)puVar8);
          goto LAB_01785948;
        }
        if (uVar4 != 0xffffffff) break;
      }
      puVar12 = (uint *)(ulong)*puVar8;
      puVar11 = (undefined1 *)0x0;
      if ((*puVar8 == 0) || (puVar8 == puVar12)) goto LAB_01785948;
      lVar14 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar12)) != '\0') {
        lVar14 = 0x1c;
      }
      lVar14 = (long)puVar8 + (lVar14 - (long)puVar12);
      if (lVar14 == 0) break;
      uVar10 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar12));
      *(undefined4 *)(puVar3 + 0x30) = 0xfffffffe;
      puVar11 = (undefined1 *)0x0;
      if (uVar10 == 0) goto LAB_01785948;
      piVar13 = (int *)(lVar14 + 4);
      while (piVar13[-1] != 0x4b9c4229) {
        piVar13 = piVar13 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          puVar11 = (undefined1 *)0x0;
          goto LAB_01785948;
        }
      }
      iVar1 = 0;
      if (*piVar13 != -1) {
        iVar1 = *piVar13;
      }
      *(int *)(puVar3 + 0x30) = iVar1;
    } while (*puVar8 != 0);
  }
  puVar11 = (undefined1 *)0x0;
LAB_01785948:
  __src = *(undefined1 **)PTR_PTR_04bbe3f0;
  if (puVar11 != (undefined1 *)0x0) {
    __src = puVar11;
  }
  if (__src == (undefined1 *)0x0) {
    return;
  }
  local_6d = 0;
  local_f0 = 0x80;
  local_ec[0] = 0;
  local_100 = PTR_DAT_04bb2d88 + 0x10;
  local_f8 = local_ec;
  if (*(int *)(param_1 + 0x11f0) == 4) {
    (**(code **)(*(long *)(param_1 + 0x1200) + 0x18))(param_1 + 0x1200);
    __src = *(undefined1 **)(param_1 + 0x1208);
    if (local_ec != __src) {
      (**(code **)(*(long *)(param_1 + 0x1200) + 0x18))(param_1 + 0x1200);
      lVar14 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x1208) + lVar14) == '\0') goto LAB_01785a68;
        lVar5 = *(long *)(param_1 + 0x1208) + lVar14;
        if (*(char *)(lVar5 + 1) == '\0') {
          lVar14 = lVar14 + 1;
          goto LAB_01785a68;
        }
        if (*(char *)(lVar5 + 2) == '\0') {
          lVar14 = lVar14 + 2;
          goto LAB_01785a68;
        }
        lVar14 = lVar14 + 3;
      } while (lVar14 != 0x80001);
      lVar14 = 0;
LAB_01785a68:
      iVar1 = (int)lVar14;
      if (local_f0 <= (int)lVar14) {
        iVar1 = local_f0 + -1;
      }
LAB_01785aa0:
      memcpy(local_ec,__src,(long)iVar1);
      local_ec[iVar1] = 0;
    }
  }
  else if (local_ec != __src) {
    lVar14 = 0;
    do {
      if (__src[lVar14] == '\0') {
LAB_01785a8c:
        iVar1 = (int)lVar14;
        if (0x7f < (int)lVar14) {
          iVar1 = 0x7f;
        }
        goto LAB_01785aa0;
      }
      if (__src[lVar14 + 1] == '\0') {
        lVar14 = lVar14 + 1;
        goto LAB_01785a8c;
      }
      if (__src[lVar14 + 2] == '\0') {
        lVar14 = lVar14 + 2;
        goto LAB_01785a8c;
      }
      lVar14 = lVar14 + 3;
    } while (lVar14 != 0x80001);
    iVar1 = 0;
    goto LAB_01785aa0;
  }
  lVar14 = FUN_0074f690(param_2,&local_100);
  if (lVar14 == 0) {
    return;
  }
  lVar5 = FUN_0074f690(param_2,&DAT_0528c980);
  if (lVar5 == 0) {
    return;
  }
  local_110 = 0;
  local_108 = 0;
  local_120 = 0;
  local_118 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_140 = 0;
  local_138 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_170 = 0;
  local_168 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_190 = 0;
  local_188 = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_1b0 = PTR_DAT_04bb2020 + 0x10;
  puStack_1a8 = local_f8;
  FUN_017779b0(lVar14,&local_1b0,&local_1a0,lVar5);
  if (local_108 != 0) {
    FUN_039a9540(*(undefined8 *)(param_1 + 0x1150),local_108,&DAT_0528c9a0);
  }
  iVar1 = *(int *)(param_1 + 0x11f0);
  if (iVar1 == 4) {
    FUN_0073d7b0(param_1,&DAT_0528c8c0,10,0,0);
    if (local_1a0 != 0) {
      FUN_039a9540(*(undefined8 *)(param_1 + 0x1150),local_1a0,&DAT_0528cb80);
    }
    if (local_188 != 0) {
      FUN_039a9540(*(undefined8 *)(param_1 + 0x1150),local_188,&DAT_0528cb90);
    }
    if (local_180 == 0) goto LAB_01785cac;
    uVar6 = *(undefined8 *)(param_1 + 0x1150);
    puVar7 = &DAT_0528cba0;
    lVar14 = local_180;
  }
  else {
    if (iVar1 == 2) {
      lVar14 = local_198;
      if (((local_198 != 0) || (lVar14 = local_1a0, local_1a0 != 0)) ||
         (lVar14 = local_138, local_138 != 0)) {
        FUN_039a9540(*(undefined8 *)(param_1 + 0x1150),lVar14,&DAT_0528c9f0);
      }
      if (local_190 != 0) {
        FUN_039a9540(*(undefined8 *)(param_1 + 0x1150),local_190,&DAT_0528ca30);
      }
      lVar14 = local_168;
      if ((local_168 != 0) || (lVar14 = local_188, local_188 != 0)) {
        FUN_039a9540(*(undefined8 *)(param_1 + 0x1150),lVar14,&DAT_0528ca00);
      }
      lVar14 = local_160;
      if (local_160 == 0) goto LAB_01785c80;
LAB_01785c88:
      FUN_039a9540(*(undefined8 *)(param_1 + 0x1150),lVar14,&DAT_0528ca10);
    }
    else {
      if (iVar1 != 1) goto LAB_01785cac;
      lVar14 = local_198;
      if (((local_198 != 0) || (lVar14 = local_1a0, local_1a0 != 0)) ||
         (lVar14 = local_138, local_138 != 0)) {
        FUN_039a9540(*(undefined8 *)(param_1 + 0x1150),lVar14,&DAT_0528c9f0);
      }
      if (local_190 != 0) {
        FUN_039a9540(*(undefined8 *)(param_1 + 0x1150),local_190,&DAT_0528ca30);
      }
      if (local_188 != 0) {
        FUN_039a9540(*(undefined8 *)(param_1 + 0x1150),local_188,&DAT_0528ca00);
      }
LAB_01785c80:
      lVar14 = local_180;
      if (local_180 != 0) goto LAB_01785c88;
    }
    uVar6 = *(undefined8 *)(param_1 + 0x1150);
    puVar7 = &DAT_0528ca20;
    lVar14 = local_118;
  }
  FUN_039a9540(uVar6,lVar14,puVar7);
LAB_01785cac:
  FUN_017831e0(param_1);
  return;
}

