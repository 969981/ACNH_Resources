
void FUN_023564c0(byte *param_1,undefined8 *param_2,int param_3,int param_4)

{
  long lVar1;
  uint *puVar2;
  byte *pbVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  byte bVar11;
  byte bVar12;
  undefined8 *puVar13;
  undefined2 *puVar14;
  undefined8 *puVar15;
  undefined1 *__src;
  long *plVar16;
  undefined4 uVar17;
  ushort local_2bc;
  undefined2 uStack_2ba;
  undefined4 local_2b8;
  undefined1 local_2b4;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined8 local_2a4;
  undefined8 local_29c;
  undefined8 local_294;
  undefined8 local_28c;
  undefined8 local_284;
  long local_27c;
  undefined8 local_274;
  undefined8 local_26c;
  undefined8 local_264;
  undefined4 local_25c;
  undefined4 local_258;
  byte local_254;
  undefined2 local_240;
  undefined1 local_23e;
  undefined1 local_23d;
  undefined4 local_23c;
  undefined2 local_238;
  undefined1 local_236;
  undefined1 local_235;
  undefined4 local_234;
  undefined2 local_230;
  undefined1 local_22e;
  undefined1 local_22d;
  undefined4 local_22c;
  undefined2 local_228;
  undefined1 local_226;
  undefined1 local_225;
  undefined4 local_224;
  undefined2 local_220;
  undefined1 local_21e;
  undefined1 local_21d;
  undefined4 local_21c;
  undefined2 local_218;
  undefined1 local_216;
  undefined1 local_215;
  undefined4 local_214;
  undefined2 local_210;
  undefined1 local_20e;
  undefined1 local_20d;
  undefined4 local_20c;
  undefined2 local_208;
  undefined1 local_206;
  undefined1 local_205;
  undefined4 local_204;
  undefined2 local_200;
  undefined1 local_1fe;
  undefined1 local_1fd;
  undefined4 local_1fc;
  byte local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_124;
  undefined8 local_11c;
  undefined *local_110;
  undefined1 *puStack_108;
  int local_100;
  undefined1 auStack_fc [127];
  undefined1 local_7d;
  ulong local_78;
  undefined4 *local_70;
  int local_68;
  int local_64;
  
  puVar6 = PTR_DAT_04bb6298;
  puVar5 = PTR_DAT_04bb4718;
  local_68 = param_4;
  local_64 = param_3;
  if (param_4 == 0) {
    uVar7 = FUN_02582d8c(param_1,1);
    if ((uVar7 < 8) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar7 * 0x13f0 + 0x13d4) != '\0')) {
      uVar17 = *(undefined4 *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar7 * 0x13f0 + 0x13d8);
    }
    else {
      uVar17 = 0xffffffff;
    }
    if (local_64 != 1) {
      lVar10 = *(long *)PTR_DAT_04bb2720;
      if (lVar10 == 0) {
        puVar15 = &DAT_055c04a0;
      }
      else {
        puVar15 = &DAT_055c04a0;
        if (*(long *)(lVar10 + 0x330) != 0) {
          puVar15 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
          iVar8 = FUN_006bd550(*puVar15,0);
          puVar15 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar8 != 0x758f7eaf) {
            puVar15 = &DAT_055c04a0;
          }
        }
      }
      if (DAT_055c1b60 != &DAT_055c1b58) {
        uVar7 = 0;
        puVar13 = DAT_055c1b60;
        do {
          if (*(int *)(puVar13 + -1) == *(int *)(puVar15 + 7)) {
            if (((uVar7 ^ 0xffffffff) & 0xffff) != 0) goto LAB_02356628;
            break;
          }
          puVar13 = (undefined8 *)puVar13[1];
          uVar7 = uVar7 + 1;
        } while (puVar13 != &DAT_055c1b58);
      }
      uVar7 = 0;
LAB_02356628:
      uVar9 = FUN_016e6c20(uVar7);
      if (((uVar9 & 1) == 0) && (*(long *)puVar5 != 0)) {
        *(undefined2 *)(*(long *)puVar5 + 0x11c8) = *(undefined2 *)puVar6;
      }
    }
  }
  else {
    uVar17 = 0xffffffff;
  }
  local_140 = *param_2;
  uStack_138 = param_2[1];
  local_124 = *(undefined8 *)((long)param_2 + 0x1c);
  local_128 = *(undefined4 *)(param_2 + 3);
  local_11c = *(undefined8 *)((long)param_2 + 0x24);
  local_100 = 0x80;
  local_7d = 0;
  local_130 = param_2[2];
  local_110 = PTR_DAT_04bb2e90 + 0x10;
  plVar16 = param_2 + 6;
  puStack_108 = auStack_fc;
  (**(code **)(*plVar16 + 0x18))(plVar16);
  __src = (undefined1 *)param_2[7];
  if (auStack_fc != __src) {
    (**(code **)(param_2[6] + 0x18))(plVar16);
    lVar10 = 0;
    do {
      if (*(char *)(param_2[7] + lVar10) == '\0') goto LAB_0235670c;
      lVar1 = param_2[7] + lVar10;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_0235670c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_0235670c;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_0235670c:
    iVar8 = (int)lVar10;
    if (local_100 <= (int)lVar10) {
      iVar8 = local_100 + -1;
    }
    memcpy(auStack_fc,__src,(long)iVar8);
    auStack_fc[iVar8] = 0;
  }
  local_140 = CONCAT44(1,(undefined4)local_140);
  local_110 = PTR_DAT_04bb2d88 + 0x10;
  local_78 = param_2[0x19];
  local_70 = (undefined4 *)param_2[0x1a];
  FUN_0235428c(&local_258);
  local_254 = *param_1;
  local_258 = 1;
  if (7 < local_254) {
    local_254 = 0xff;
  }
  local_78 = local_78 | 0x20000000000;
  local_11c = CONCAT44(local_64,uVar17);
  local_124 = CONCAT44(local_68,(int)(char)local_254);
  uVar4 = *(ushort *)puVar6;
  if ((long)(short)uVar4 != 0xffffffffffffffff) {
    uStack_2ba = 0;
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar4 * 8);
    if (0xff < uVar4) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 0x15 & 1) == 0) {
      uStack_2ba = 0;
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar4 & 0xffffffffU) * 8);
      if (0xff < uVar4) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((((*puVar2 >> 0x1a & 1) == 0) || (lVar10 = *(long *)PTR_DAT_04bb4e28, lVar10 == 0)) ||
         (((byte)(&DAT_00001230)[lVar10] >> 6 & 1) == 0)) goto LAB_023569a8;
      puVar14 = (undefined2 *)(lVar10 + 0x11d0);
    }
    else {
      if (((*(long *)PTR_DAT_04bb3968 == 0) ||
          (lVar10 = *(long *)(*(long *)PTR_DAT_04bb3968 + 0x175a0), lVar10 == 0)) ||
         ((*(ushort *)(lVar10 + 0x1528) >> 6 & 1) == 0)) goto LAB_023569a8;
      puVar14 = (undefined2 *)(lVar10 + 0x13c);
    }
    uStack_2ba = 0;
    local_240 = *puVar14;
    local_23e = *(undefined1 *)(puVar14 + 1);
    local_23d = *(undefined1 *)((long)puVar14 + 3);
    local_23c = *(undefined4 *)(puVar14 + 2);
    local_238 = puVar14[4];
    local_236 = *(undefined1 *)(puVar14 + 5);
    local_235 = *(undefined1 *)((long)puVar14 + 0xb);
    local_234 = *(undefined4 *)(puVar14 + 6);
    local_230 = puVar14[8];
    local_22e = *(undefined1 *)(puVar14 + 9);
    local_22d = *(undefined1 *)((long)puVar14 + 0x13);
    local_22c = *(undefined4 *)(puVar14 + 10);
    local_228 = puVar14[0xc];
    local_226 = *(undefined1 *)(puVar14 + 0xd);
    local_225 = *(undefined1 *)((long)puVar14 + 0x1b);
    local_224 = *(undefined4 *)(puVar14 + 0xe);
    local_220 = puVar14[0x10];
    local_21e = *(undefined1 *)(puVar14 + 0x11);
    local_21d = *(undefined1 *)((long)puVar14 + 0x23);
    local_21c = *(undefined4 *)(puVar14 + 0x12);
    local_218 = puVar14[0x14];
    local_216 = *(undefined1 *)(puVar14 + 0x15);
    local_215 = *(undefined1 *)((long)puVar14 + 0x2b);
    local_214 = *(undefined4 *)(puVar14 + 0x16);
    local_210 = puVar14[0x18];
    local_20e = *(undefined1 *)(puVar14 + 0x19);
    local_20d = *(undefined1 *)((long)puVar14 + 0x33);
    local_20c = *(undefined4 *)(puVar14 + 0x1a);
    local_208 = puVar14[0x1c];
    local_206 = *(undefined1 *)(puVar14 + 0x1d);
    local_205 = *(undefined1 *)((long)puVar14 + 0x3b);
    local_204 = *(undefined4 *)(puVar14 + 0x1e);
    local_200 = puVar14[0x20];
    local_1fe = *(undefined1 *)(puVar14 + 0x21);
    local_1fd = *(undefined1 *)((long)puVar14 + 0x43);
    local_1fc = *(undefined4 *)(puVar14 + 0x22);
    local_258 = 5;
    local_148 = local_254;
  }
LAB_023569a8:
  _local_2bc = CONCAT22(uStack_2ba,uVar4);
  local_2b0 = param_2[1];
  local_2a8 = *(undefined4 *)(param_2 + 2);
  local_2b4 = 1;
  local_2a4 = 0;
  local_29c = 0;
  local_294 = 0;
  local_28c = 0;
  local_284 = 0;
  local_274 = 0;
  local_26c = 0;
  local_264 = 0;
  local_25c = 1;
  local_27c = (ulong)*(uint *)(param_2 + 3) << 0x20;
  local_70 = &local_258;
  local_2b8 = FUN_0255a1a8(local_64);
  FUN_0255a688(*(undefined8 *)puVar5,param_1,&local_2bc);
  iVar8 = FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_140,local_140 & 0xffffffff,0);
  if ((iVar8 != 0) && ((ulong)*param_1 < 8)) {
    *(int *)(*(long *)puVar5 + (ulong)*param_1 * 4 + 0xde8) = iVar8;
    lVar10 = *(long *)PTR_DAT_04bb39b0;
    if ((lVar10 != 0) && (*(int *)(lVar10 + 0x15c) != 0)) {
      pbVar3 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar10 + 0x15c) != 0) {
        pbVar3 = (byte *)(lVar10 + 0x158);
      }
      bVar12 = *param_1;
      bVar11 = *pbVar3;
      if (7 < bVar11) {
        bVar11 = 0xff;
      }
      if (7 < bVar12) {
        bVar12 = 0xff;
      }
      if (bVar11 != bVar12) {
        return;
      }
    }
    FUN_0251a33c(param_1,1);
  }
  return;
}

