
/* WARNING: Removing unreachable block (ram,0x0176f6a8) */
/* WARNING: Removing unreachable block (ram,0x0176f6d4) */
/* WARNING: Removing unreachable block (ram,0x0176f6e4) */
/* WARNING: Removing unreachable block (ram,0x0176f6f4) */
/* WARNING: Removing unreachable block (ram,0x0176f704) */
/* WARNING: Removing unreachable block (ram,0x0176f714) */
/* WARNING: Removing unreachable block (ram,0x0176f724) */
/* WARNING: Removing unreachable block (ram,0x0176feac) */
/* WARNING: Removing unreachable block (ram,0x0176febc) */
/* WARNING: Removing unreachable block (ram,0x0176fecc) */
/* WARNING: Removing unreachable block (ram,0x0176fedc) */
/* WARNING: Removing unreachable block (ram,0x0176feec) */
/* WARNING: Removing unreachable block (ram,0x0176fefc) */
/* WARNING: Type propagation algorithm not settling */

void FUN_0176e6b0(long param_1)

{
  float *pfVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  char cVar9;
  ushort uVar10;
  short sVar11;
  undefined1 *__src;
  undefined **ppuVar12;
  long *plVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  byte bVar18;
  undefined2 uVar19;
  undefined4 uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  int *piVar29;
  long lVar30;
  char *pcVar31;
  undefined1 uVar32;
  int iVar33;
  int iVar34;
  undefined *puVar35;
  ulong uVar36;
  char *pcVar37;
  long lVar38;
  uint uVar39;
  void *pvVar40;
  ulong uVar41;
  void *pvVar42;
  char *pcVar43;
  undefined8 uVar44;
  undefined1 *__dest;
  undefined8 uVar45;
  char *pcVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined **local_2b0;
  undefined *local_2a8;
  char *local_2a0;
  undefined4 local_298;
  char local_294 [63];
  undefined1 local_255;
  undefined **local_250;
  ulong local_248;
  undefined *local_240;
  undefined1 *local_238;
  undefined **local_230;
  uint local_228;
  undefined4 uStack_224;
  undefined *local_220;
  undefined1 *local_218;
  undefined *local_210;
  undefined1 *local_208;
  undefined4 local_200;
  undefined1 local_1fc [63];
  undefined1 local_1bd;
  long *local_1b8;
  uint local_1b0;
  undefined *local_1a8;
  undefined1 *local_1a0;
  undefined *local_198;
  char *local_190;
  ushort local_184 [2];
  undefined8 local_180;
  undefined8 local_178;
  float local_170;
  undefined8 local_16c;
  int local_164;
  int iStack_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined *local_150;
  char *local_148;
  int local_140;
  char local_13c [8];
  char acStack_134 [9];
  char cStack_12b;
  undefined1 local_11f;
  undefined1 local_ed;
  undefined1 local_bd;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined8 local_b0;
  
  plVar2 = (long *)(param_1 + 0x188);
  (**(code **)(*(long *)(param_1 + 0x188) + 0x18))(plVar2);
  lVar25 = 0;
  do {
    if (*(char *)(*(long *)(param_1 + 400) + lVar25) == '\0') {
LAB_0176e778:
      uVar39 = (int)lVar25 + 1;
      if ((int)lVar25 == -1) {
        return;
      }
      goto LAB_0176e7ac;
    }
    lVar26 = *(long *)(param_1 + 400) + lVar25;
    if (*(char *)(lVar26 + 1) == '\0') {
      lVar25 = lVar25 + 1;
      goto LAB_0176e778;
    }
    if (*(char *)(lVar26 + 2) == '\0') {
      lVar25 = lVar25 + 2;
      goto LAB_0176e778;
    }
    lVar25 = lVar25 + 3;
  } while (lVar25 != 0x80001);
  uVar39 = 1;
LAB_0176e7ac:
  local_1a0 = &DAT_04079e84;
  local_1a8 = PTR_DAT_04bb2020 + 0x10;
  local_1b0 = 0;
  local_2b0 = &local_1a8;
  lVar25 = param_1 + 0x2a8;
  local_1b8 = plVar2;
  FUN_0076e020(&local_1b8,lVar25);
  pvVar40 = *(void **)(param_1 + 0x348);
  (**(code **)(*(long *)(param_1 + 0x2a8) + 0x18))(lVar25);
  pvVar42 = *(void **)(param_1 + 0x2b0);
  if (pvVar40 != pvVar42) {
    (**(code **)(*(long *)(param_1 + 0x2a8) + 0x18))(lVar25);
    lVar26 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x2b0) + lVar26) == '\0') goto LAB_0176e83c;
      lVar6 = *(long *)(param_1 + 0x2b0) + lVar26;
      if (*(char *)(lVar6 + 1) == '\0') {
        lVar26 = lVar26 + 1;
        goto LAB_0176e83c;
      }
      if (*(char *)(lVar6 + 2) == '\0') {
        lVar26 = lVar26 + 2;
        goto LAB_0176e83c;
      }
      lVar26 = lVar26 + 3;
    } while (lVar26 != 0x80001);
    lVar26 = 0;
LAB_0176e83c:
    iVar33 = (int)lVar26;
    if (*(int *)(param_1 + 0x350) <= (int)lVar26) {
      iVar33 = *(int *)(param_1 + 0x350) + -1;
    }
    memcpy(pvVar40,pvVar42,(long)iVar33);
    *(undefined1 *)((long)pvVar40 + (long)iVar33) = 0;
  }
  lVar26 = param_1 + 0x340;
  pvVar40 = *(void **)(param_1 + 0x3e0);
  lVar6 = param_1 + 0x3d8;
  (**(code **)(*(long *)(param_1 + 0x2a8) + 0x18))(lVar25);
  pvVar42 = *(void **)(param_1 + 0x2b0);
  if (pvVar40 != pvVar42) {
    (**(code **)(*(long *)(param_1 + 0x2a8) + 0x18))(lVar25);
    lVar27 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x2b0) + lVar27) == '\0') goto LAB_0176e8ec;
      lVar7 = *(long *)(param_1 + 0x2b0) + lVar27;
      if (*(char *)(lVar7 + 1) == '\0') {
        lVar27 = lVar27 + 1;
        goto LAB_0176e8ec;
      }
      if (*(char *)(lVar7 + 2) == '\0') {
        lVar27 = lVar27 + 2;
        goto LAB_0176e8ec;
      }
      lVar27 = lVar27 + 3;
    } while (lVar27 != 0x80001);
    lVar27 = 0;
LAB_0176e8ec:
    iVar33 = (int)lVar27;
    if (*(int *)(param_1 + 1000) <= (int)lVar27) {
      iVar33 = *(int *)(param_1 + 1000) + -1;
    }
    memcpy(pvVar40,pvVar42,(long)iVar33);
    *(undefined1 *)((long)pvVar40 + (long)iVar33) = 0;
  }
  uVar22 = local_1b0;
  plVar13 = local_1b8;
  uVar41 = (ulong)local_1b0;
  (**(code **)(*local_1b8 + 0x18))(local_1b8);
  lVar27 = 0;
  do {
    if (*(char *)(plVar13[1] + lVar27) == '\0') {
LAB_0176e970:
      iVar33 = (int)lVar27;
      goto joined_r0x0176e9a0;
    }
    lVar7 = plVar13[1] + lVar27;
    if (*(char *)(lVar7 + 1) == '\0') {
      lVar27 = lVar27 + 1;
      goto LAB_0176e970;
    }
    if (*(char *)(lVar7 + 2) == '\0') {
      iVar33 = (int)lVar27 + 2;
      goto joined_r0x0176e9a0;
    }
    lVar27 = lVar27 + 3;
  } while (lVar27 != 0x80001);
  iVar33 = 0;
joined_r0x0176e9a0:
  if ((-1 < (int)uVar22) && ((int)uVar22 <= iVar33)) {
    pcVar46 = (char *)(local_1b8[1] + uVar41);
    cVar9 = *pcVar46;
    while (cVar9 != '\0') {
      (**(code **)(local_1a8 + 0x18))(local_2b0);
      uVar36 = 0;
      bVar17 = true;
      cVar9 = *pcVar46;
      do {
        if (local_1a0[uVar36] == '\0') break;
        if (local_1a0[uVar36] == cVar9) {
          if (bVar17) goto LAB_0176ea40;
          break;
        }
        if (local_1a0[uVar36 + 1] == '\0') break;
        if (local_1a0[uVar36 + 1] == cVar9) goto LAB_0176ea40;
        if (local_1a0[uVar36 + 2] == '\0') break;
        if (local_1a0[uVar36 + 2] == cVar9) goto LAB_0176ea40;
        bVar17 = uVar36 < 0x7fffe;
        uVar36 = uVar36 + 3;
      } while (uVar36 != 0x80001);
      uVar41 = uVar41 + 1;
      pcVar46 = (char *)(local_1b8[1] + uVar41);
      cVar9 = *pcVar46;
    }
LAB_0176ea40:
    local_1b0 = (int)uVar41 + 1;
  }
  if ((local_1b8 == plVar2) && (local_1b0 == uVar39)) {
    s_RoomMdlArch_ARCH__04091cdb[8] = s_RoomMdlArch_ARCH__04091cdb[8];
    s_RoomMdlArch_ARCH__04091cdb[9] = s_RoomMdlArch_ARCH__04091cdb[9];
    s_RoomMdlArch_ARCH__04091cdb[10] = s_RoomMdlArch_ARCH__04091cdb[10];
    s_RoomMdlArch_ARCH__04091cdb[0xb] = s_RoomMdlArch_ARCH__04091cdb[0xb];
    s_RoomMdlArch_ARCH__04091cdb[0xc] = s_RoomMdlArch_ARCH__04091cdb[0xc];
    s_RoomMdlArch_ARCH__04091cdb[0xd] = s_RoomMdlArch_ARCH__04091cdb[0xd];
    s_RoomMdlArch_ARCH__04091cdb[0xe] = s_RoomMdlArch_ARCH__04091cdb[0xe];
    s_RoomMdlArch_ARCH__04091cdb[0xf] = s_RoomMdlArch_ARCH__04091cdb[0xf];
    s_RoomMdlArch_ARCH__04091cdb[0] = s_RoomMdlArch_ARCH__04091cdb[0];
    s_RoomMdlArch_ARCH__04091cdb[1] = s_RoomMdlArch_ARCH__04091cdb[1];
    s_RoomMdlArch_ARCH__04091cdb[2] = s_RoomMdlArch_ARCH__04091cdb[2];
    s_RoomMdlArch_ARCH__04091cdb[3] = s_RoomMdlArch_ARCH__04091cdb[3];
    s_RoomMdlArch_ARCH__04091cdb[4] = s_RoomMdlArch_ARCH__04091cdb[4];
    s_RoomMdlArch_ARCH__04091cdb[5] = s_RoomMdlArch_ARCH__04091cdb[5];
    s_RoomMdlArch_ARCH__04091cdb[6] = s_RoomMdlArch_ARCH__04091cdb[6];
    s_RoomMdlArch_ARCH__04091cdb[7] = s_RoomMdlArch_ARCH__04091cdb[7];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x18] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x18];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x19] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x19];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x1a] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x1a];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x1b] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x1b];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x1c] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x1c];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x15] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x15];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x16] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x16];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x17] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x17];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x10] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x10];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x11] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x11];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x12] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x12];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x13] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x13];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x14] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x14];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[8] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[8];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[9] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[9];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[10] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[10];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[0xb] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0xb];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[0xc] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0xc];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[0xd] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0xd];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[0xe] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0xe];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[0xf] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0xf];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[0] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[1] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[1];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[2] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[2];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[3] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[3];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[4] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[4];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[5] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[5];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[6] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[6];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[7] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[7];
    s_RoomMdlWall_WALL__0407220a[8] = s_RoomMdlWall_WALL__0407220a[8];
    s_RoomMdlWall_WALL__0407220a[9] = s_RoomMdlWall_WALL__0407220a[9];
    s_RoomMdlWall_WALL__0407220a[10] = s_RoomMdlWall_WALL__0407220a[10];
    s_RoomMdlWall_WALL__0407220a[0xb] = s_RoomMdlWall_WALL__0407220a[0xb];
    s_RoomMdlWall_WALL__0407220a[0xc] = s_RoomMdlWall_WALL__0407220a[0xc];
    s_RoomMdlWall_WALL__0407220a[0xd] = s_RoomMdlWall_WALL__0407220a[0xd];
    s_RoomMdlWall_WALL__0407220a[0xe] = s_RoomMdlWall_WALL__0407220a[0xe];
    s_RoomMdlWall_WALL__0407220a[0xf] = s_RoomMdlWall_WALL__0407220a[0xf];
    s_RoomMdlWall_WALL__0407220a[0] = s_RoomMdlWall_WALL__0407220a[0];
    s_RoomMdlWall_WALL__0407220a[1] = s_RoomMdlWall_WALL__0407220a[1];
    s_RoomMdlWall_WALL__0407220a[2] = s_RoomMdlWall_WALL__0407220a[2];
    s_RoomMdlWall_WALL__0407220a[3] = s_RoomMdlWall_WALL__0407220a[3];
    s_RoomMdlWall_WALL__0407220a[4] = s_RoomMdlWall_WALL__0407220a[4];
    s_RoomMdlWall_WALL__0407220a[5] = s_RoomMdlWall_WALL__0407220a[5];
    s_RoomMdlWall_WALL__0407220a[6] = s_RoomMdlWall_WALL__0407220a[6];
    s_RoomMdlWall_WALL__0407220a[7] = s_RoomMdlWall_WALL__0407220a[7];
    return;
  }
  lVar27 = param_1 + 0x770;
  lVar7 = param_1 + 0x7a0;
  puVar3 = PTR_DAT_04bb2bc0 + 0x10;
  puVar4 = PTR_DAT_04bb2020 + 0x10;
  puVar5 = PTR_DAT_04bb2d88 + 0x10;
LAB_0176eb44:
  local_200 = 0x40;
  local_1bd = 0;
  local_1fc[0] = 0;
  local_210 = puVar3;
  local_208 = local_1fc;
  FUN_0076e020(&local_1b8,&local_210);
  local_228 = 0;
  local_218 = &DAT_040addd9;
  local_230 = &local_210;
  local_220 = puVar4;
  (**(code **)(local_210 + 0x18))(&local_210);
  uVar22 = local_228;
  ppuVar12 = local_230;
  lVar28 = 0;
  do {
    if (local_208[lVar28] == '\0') {
LAB_0176ebe4:
      uVar23 = (int)lVar28 + 1;
      goto LAB_0176ebe8;
    }
    if (local_208[lVar28 + 1] == '\0') {
      lVar28 = lVar28 + 1;
      goto LAB_0176ebe4;
    }
    if (local_208[lVar28 + 2] == '\0') {
      lVar28 = lVar28 + 2;
      goto LAB_0176ebe4;
    }
    lVar28 = lVar28 + 3;
  } while (lVar28 != 0x80001);
  uVar23 = 1;
LAB_0176ebe8:
  uVar36 = CONCAT44(uStack_224,local_228);
  local_250 = local_230;
  uVar41 = (ulong)local_228;
  local_240 = PTR_DAT_04bb2020 + 0x10;
  local_238 = local_218;
  local_248 = uVar36;
  (**(code **)(*local_230 + 0x18))(local_230);
  puVar35 = ppuVar12[1];
  lVar28 = 0;
  do {
    if (puVar35[lVar28] == '\0') {
LAB_0176ec58:
      iVar33 = (int)lVar28;
      goto joined_r0x0176ec84;
    }
    if (puVar35[lVar28 + 1] == '\0') {
      lVar28 = lVar28 + 1;
      goto LAB_0176ec58;
    }
    if (puVar35[lVar28 + 2] == '\0') {
      iVar33 = (int)lVar28 + 2;
      goto joined_r0x0176ec84;
    }
    lVar28 = lVar28 + 3;
  } while (lVar28 != 0x80001);
  iVar33 = 0;
joined_r0x0176ec84:
  if ((-1 < (int)uVar22) && ((int)uVar22 <= iVar33)) {
    pcVar46 = local_250[1] + uVar41;
    if (*pcVar46 != '\0') {
      do {
        (**(code **)(local_240 + 0x18))(&local_240);
        uVar36 = 0;
        bVar17 = true;
        cVar9 = *pcVar46;
        do {
          if (local_238[uVar36] == '\0') break;
          if (local_238[uVar36] == cVar9) {
            if (bVar17) goto LAB_0176ed20;
            break;
          }
          if (local_238[uVar36 + 1] == '\0') break;
          if (local_238[uVar36 + 1] == cVar9) goto LAB_0176ed20;
          if (local_238[uVar36 + 2] == '\0') break;
          if (local_238[uVar36 + 2] == cVar9) goto LAB_0176ed20;
          bVar17 = uVar36 < 0x7fffe;
          uVar36 = uVar36 + 3;
        } while (uVar36 != 0x80001);
        uVar41 = uVar41 + 1;
        pcVar46 = local_250[1] + uVar41;
      } while (*pcVar46 != '\0');
LAB_0176ed20:
      uVar36 = uVar41 & 0xffffffff;
    }
    local_248 = CONCAT44(local_248._4_4_,(int)uVar36 + 1);
  }
  if (((local_230 != &local_210) || (local_228 != uVar23)) &&
     ((local_250 != &local_210 || ((uint)local_248 != uVar23)))) {
    local_255 = 0;
    local_298 = 0x40;
    local_294[0] = '\0';
    local_2a8 = PTR_DAT_04bb2bc0 + 0x10;
    local_2a0 = local_294;
    FUN_0076e020(&local_230,&local_2a8);
    local_180 = PTR_DAT_04bb2020 + 0x10;
    local_178 = "WALL";
    (**(code **)(local_2a8 + 0x18))(&local_2a8);
    (**(code **)(local_2a8 + 0x18))(&local_2a8);
    pcVar46 = local_2a0;
    (**(code **)(local_180 + 0x18))(&local_180);
    if (pcVar46 == local_178) {
LAB_0176ee54:
      *(undefined4 *)(param_1 + 0x638) = 1;
      FUN_0176d870(param_1);
      goto LAB_0176ee64;
    }
    uVar41 = 0;
    bVar17 = true;
    do {
      if (local_2a0[uVar41] != local_178[uVar41]) break;
      if (local_2a0[uVar41] == '\0') {
        if (bVar17) goto LAB_0176ee54;
        break;
      }
      if (local_2a0[uVar41 + 1] != local_178[uVar41 + 1]) break;
      if (local_2a0[uVar41 + 1] == '\0') goto LAB_0176ee54;
      if (local_2a0[uVar41 + 2] != local_178[uVar41 + 2]) break;
      if (local_2a0[uVar41 + 2] == '\0') goto LAB_0176ee54;
      bVar17 = uVar41 < 0x7fffe;
      uVar41 = uVar41 + 3;
    } while (uVar41 != 0x80001);
    local_180 = PTR_DAT_04bb2020 + 0x10;
    local_178 = "OUTSIDE";
    (**(code **)(local_2a8 + 0x18))(&local_2a8);
    (**(code **)(local_2a8 + 0x18))(&local_2a8);
    pcVar46 = local_2a0;
    (**(code **)(local_180 + 0x18))(&local_180);
    if (pcVar46 == local_178) {
LAB_0176f060:
      *(undefined4 *)(param_1 + 0x638) = 1;
      *(undefined1 *)(param_1 + 0x6e8) = 1;
      FUN_01772a20(param_1);
      FUN_0176d870(param_1);
      local_180 = PTR_DAT_04bb2020 + 0x10;
      local_178 = "Outside4";
      (**(code **)(*(long *)(param_1 + 0x3d8) + 0x18))(lVar6);
      lVar28 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x3e0) + lVar28) == '\0') goto LAB_0176f1b8;
        lVar30 = *(long *)(param_1 + 0x3e0) + lVar28;
        if (*(char *)(lVar30 + 1) == '\0') {
          lVar28 = lVar28 + 1;
          goto LAB_0176f1b8;
        }
        if (*(char *)(lVar30 + 2) == '\0') {
          lVar28 = lVar28 + 2;
          goto LAB_0176f1b8;
        }
        lVar28 = lVar28 + 3;
      } while (lVar28 != 0x80001);
      lVar28 = 0;
LAB_0176f1b8:
      (**(code **)(local_180 + 0x18))(&local_180);
      lVar30 = 0;
      do {
        iVar33 = (int)lVar28;
        if (local_178[lVar30] == '\0') {
LAB_0176f204:
          iVar24 = (int)lVar30;
          if (iVar33 < iVar24) goto LAB_0176ee64;
LAB_0176f21c:
          if ((int)lVar30 < 1) goto LAB_0176f29c;
          uVar41 = 0;
          goto LAB_0176f230;
        }
        if (local_178[lVar30 + 1] == '\0') {
          lVar30 = lVar30 + 1;
          goto LAB_0176f204;
        }
        if (local_178[lVar30 + 2] == '\0') {
          lVar30 = lVar30 + 2;
          iVar24 = (int)lVar30;
          if (iVar24 <= iVar33) goto LAB_0176f21c;
          goto LAB_0176ee64;
        }
        lVar30 = lVar30 + 3;
      } while (lVar30 != 0x80001);
      if (-1 < iVar33) {
LAB_0176f29c:
        (**(code **)(local_180 + 0x18))(&local_180);
LAB_0176f2bc:
        fVar47 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x170));
        fVar47 = fVar47 * 8.381903e-08;
        bVar17 = false;
        bVar14 = false;
        bVar15 = false;
        if (45.0 <= fVar47) {
          bVar17 = false;
          bVar14 = false;
          bVar15 = true;
          if (!NAN(fVar47)) {
            bVar17 = fVar47 < 315.0;
            bVar14 = fVar47 == 315.0;
            bVar15 = false;
          }
        }
        if (bVar14 || bVar17 != bVar15) {
          bVar17 = false;
          if ((45.0 <= fVar47) && (bVar17 = false, !NAN(fVar47))) {
            bVar17 = fVar47 < 135.0;
          }
          if (!bVar17) {
            bVar17 = false;
            if ((135.0 <= fVar47) && (bVar17 = false, !NAN(fVar47))) {
              bVar17 = fVar47 < 225.0;
            }
            if (bVar17 && *(char *)(param_1 + 0x6e8) == '\0') goto LAB_0176f338;
          }
        }
        else if (*(char *)(param_1 + 0x6e8) != '\0') {
LAB_0176f338:
          lVar28 = *(long *)PTR_DAT_04bb5ce0;
          if ((lVar28 == 0) ||
             ((*(char *)(lVar28 + 0xf5e) == '\0' && (*(char *)(lVar28 + 0xf5d) == '\0')))) {
            uVar41 = FUN_0180df40();
            if (((uVar41 & 1) != 0) && (sVar11 = *(short *)PTR_DAT_04bb6298, sVar11 != -1)) {
              local_198 = (undefined *)CONCAT44(local_198._4_4_,0x1a);
              puVar8 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar11 * 8);
              if (0xff < (uint)(int)sVar11) {
                puVar8 = (uint *)PTR_DAT_04bc39f8;
              }
              if ((*puVar8 >> 0x1a & 1) != 0) goto LAB_0176f3b0;
            }
          }
          else {
LAB_0176f3b0:
            local_184[0] = local_184[0] & 0xff00;
            uVar45 = *(undefined8 *)(param_1 + 0x3e0);
            local_198 = PTR_DAT_04bb2020 + 0x10;
            uVar20 = *(undefined4 *)(param_1 + 1000);
            local_190 = "Outside4Cover";
            local_178 = "Outside4";
            local_180 = local_198;
            (**(code **)(*(long *)(param_1 + 0x3d8) + 0x18))(lVar6);
            uVar44 = *(undefined8 *)(param_1 + 0x3e0);
            (**(code **)(*(long *)(param_1 + 0x3d8) + 0x18))(lVar6);
            lVar28 = 0;
            do {
              if (*(char *)(*(long *)(param_1 + 0x3e0) + lVar28) == '\0') goto LAB_0176fc0c;
              lVar30 = *(long *)(param_1 + 0x3e0) + lVar28;
              if (*(char *)(lVar30 + 1) == '\0') {
                lVar28 = lVar28 + 1;
                goto LAB_0176fc0c;
              }
              if (*(char *)(lVar30 + 2) == '\0') {
                lVar28 = lVar28 + 2;
                goto LAB_0176fc0c;
              }
              lVar28 = lVar28 + 3;
            } while (lVar28 != 0x80001);
            lVar28 = 0;
LAB_0176fc0c:
            FUN_038d0770(uVar45,0,uVar20,uVar44,lVar28,&local_180,&local_198,local_184);
            pvVar42 = *(void **)(param_1 + 0x348);
            (**(code **)(*(long *)(param_1 + 0x3d8) + 0x18))(lVar6);
            pvVar40 = *(void **)(param_1 + 0x3e0);
            if (pvVar42 != pvVar40) {
              (**(code **)(*(long *)(param_1 + 0x3d8) + 0x18))(lVar6);
              lVar28 = 0;
              do {
                if (*(char *)(*(long *)(param_1 + 0x3e0) + lVar28) == '\0') goto LAB_0176ff14;
                lVar30 = *(long *)(param_1 + 0x3e0) + lVar28;
                if (*(char *)(lVar30 + 1) == '\0') {
                  lVar28 = lVar28 + 1;
                  goto LAB_0176ff14;
                }
                if (*(char *)(lVar30 + 2) == '\0') {
                  lVar28 = lVar28 + 2;
                  goto LAB_0176ff14;
                }
                lVar28 = lVar28 + 3;
              } while (lVar28 != 0x80001);
              lVar28 = 0;
LAB_0176ff14:
              iVar33 = (int)lVar28;
              if (*(int *)(param_1 + 0x350) <= (int)lVar28) {
                iVar33 = *(int *)(param_1 + 0x350) + -1;
              }
              memcpy(pvVar42,pvVar40,(long)iVar33);
              *(undefined1 *)((long)pvVar42 + (long)iVar33) = 0;
            }
          }
        }
      }
      goto LAB_0176ee64;
    }
    uVar41 = 0;
    bVar17 = true;
    do {
      if (local_2a0[uVar41] != local_178[uVar41]) break;
      if (local_2a0[uVar41] == '\0') {
        if (bVar17) goto LAB_0176f060;
        break;
      }
      if (local_2a0[uVar41 + 1] != local_178[uVar41 + 1]) break;
      if (local_2a0[uVar41 + 1] == '\0') goto LAB_0176f060;
      if (local_2a0[uVar41 + 2] != local_178[uVar41 + 2]) break;
      if (local_2a0[uVar41 + 2] == '\0') goto LAB_0176f060;
      bVar17 = uVar41 < 0x7fffe;
      uVar41 = uVar41 + 3;
    } while (uVar41 != 0x80001);
    local_180 = PTR_DAT_04bb2020 + 0x10;
    local_178 = "FLOOR";
    (**(code **)(local_2a8 + 0x18))(&local_2a8);
    (**(code **)(local_2a8 + 0x18))(&local_2a8);
    pcVar46 = local_2a0;
    (**(code **)(local_180 + 0x18))(&local_180);
    if (pcVar46 == local_178) {
LAB_0176f444:
      *(undefined4 *)(param_1 + 0x638) = 2;
      puVar35 = PTR_DAT_04bb5ce0;
      uVar19 = FUN_017f0fa0(*(long *)PTR_DAT_04bb5ce0 + 0xda0);
      lVar28 = *(long *)puVar35;
      *(undefined2 *)(param_1 + 0x994) = uVar19;
      *(undefined4 *)(param_1 + 0xa3c) = *(undefined4 *)(lVar28 + 0xfa8);
      iVar33 = *(int *)(lVar28 + 0xe48);
      if (iVar33 == 1) {
LAB_0176f62c:
        uVar32 = 0;
      }
      else {
        local_180 = (undefined *)CONCAT44(local_180._4_4_,iVar33);
        if (1 < iVar33) {
          local_198 = (undefined *)CONCAT44(local_198._4_4_,iVar33);
          if (iVar33 < 6) goto LAB_0176f62c;
        }
        local_180 = (undefined *)CONCAT44(local_180._4_4_,iVar33);
        if (5 < iVar33) {
          local_198 = (undefined *)CONCAT44(local_198._4_4_,iVar33);
          if (iVar33 < 0x11) goto LAB_0176f62c;
        }
        local_180 = (undefined *)CONCAT44(local_180._4_4_,iVar33);
        if (iVar33 < 0x11) goto LAB_0176f62c;
        local_198 = (undefined *)CONCAT44(local_198._4_4_,iVar33);
        if (0x12 < iVar33) goto LAB_0176f62c;
        uVar32 = 1;
      }
      *(undefined1 *)(param_1 + 0xaf7) = uVar32;
      iVar33 = *(int *)(lVar28 + 0xe48);
      if (iVar33 != 1) {
        local_180 = (undefined *)CONCAT44(local_180._4_4_,iVar33);
        if (1 < iVar33) {
          local_198 = (undefined *)CONCAT44(local_198._4_4_,iVar33);
          if (iVar33 < 6) goto LAB_0176f758;
        }
        local_180 = (undefined *)CONCAT44(local_180._4_4_,iVar33);
        if (5 < iVar33) {
          local_198 = (undefined *)CONCAT44(local_198._4_4_,iVar33);
          if (iVar33 < 0x11) goto LAB_0176f758;
        }
        local_180 = (undefined *)CONCAT44(local_180._4_4_,iVar33);
        if (0x10 < iVar33) {
          local_198 = (undefined *)CONCAT44(local_198._4_4_,iVar33);
        }
        if ((iVar33 == 0x14) &&
           ((*(int *)(lVar28 + 0xf64) == 3 ||
            (local_180 = (undefined *)CONCAT44(local_180._4_4_,0x14), *(int *)(lVar28 + 0xf68) == 3)
            ))) {
          local_180 = (undefined *)CONCAT44(local_180._4_4_,0x14);
          *(undefined1 *)(param_1 + 0xaf7) = 1;
        }
      }
LAB_0176f758:
      FUN_007ef010(local_184,lVar28 + 0xe5c);
      uVar10 = *(ushort *)PTR_DAT_04bb3170;
      if (local_184[0] == uVar10) {
        if (*(int *)(param_1 + 0xa3c) != -1) {
          *(undefined1 *)(param_1 + 0x99a) = 1;
          goto LAB_0176f7c8;
        }
        lVar28 = *(long *)PTR_DAT_04bb5ce0;
        if (lVar28 != 0) goto LAB_0176f7e8;
LAB_0176f838:
        *(undefined1 *)(param_1 + 0x929) = 0;
LAB_0176f83c:
        *(undefined1 *)(param_1 + 0x928) = 0;
        lVar28 = 0;
        bVar18 = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x730) = 0;
        *(undefined1 *)(param_1 + 0x72d) = 1;
        *(ushort *)(param_1 + 0x770) = uVar10;
        *(ushort *)(param_1 + 0x7a0) = uVar10;
        *(undefined8 *)(param_1 + 2000) = 0;
        *(ushort *)(param_1 + 0x758) = local_184[0];
        *(ushort *)(param_1 + 0x75a) = local_184[0];
        *(undefined2 *)(param_1 + 0x7d8) = 1;
        *(long *)(param_1 + 0x760) = lVar27;
        *(long *)(param_1 + 0x768) = lVar7;
LAB_0176f7c8:
        lVar28 = *(long *)PTR_DAT_04bb5ce0;
        if (lVar28 == 0) {
          *(undefined1 *)(param_1 + 0x92c) = 0;
          goto LAB_0176f838;
        }
        *(byte *)(param_1 + 0x92c) = *(byte *)(lVar28 + 0xedc) >> 5 & 1;
        if (lVar28 == 0) goto LAB_0176f838;
LAB_0176f7e8:
        bVar18 = FUN_017f8d00(lVar28 + 0xda0);
        puVar35 = PTR_DAT_04bb5ce0;
        *(byte *)(param_1 + 0x929) = bVar18 & 1;
        lVar28 = *(long *)puVar35;
        if (lVar28 == 0) goto LAB_0176f83c;
        *(byte *)(param_1 + 0x928) = *(byte *)(lVar28 + 0xedc) >> 6 & 1;
        bVar18 = FUN_017f8ef0(lVar28 + 0xda0);
        lVar28 = *(long *)PTR_DAT_04bb5ce0;
      }
      puVar35 = PTR_DAT_04bb5ce0;
      *(byte *)(param_1 + 0x92a) = bVar18 & 1;
      iVar33 = FUN_017f24f8(lVar28 + 0xda0);
      *(bool *)(param_1 + 0x92d) = iVar33 == 1;
      iVar33 = FUN_017f2784(*(long *)puVar35 + 0xda0);
      *(bool *)(param_1 + 0x92e) = iVar33 == 1;
      pcVar46 = (char *)FUN_017f0ca0(*(long *)puVar35 + 0xda0);
      **(undefined1 **)(param_1 + 0xa48) = 0;
      if (pcVar46 != (char *)0x0) {
        pcVar31 = *(char **)(param_1 + 0xa48);
        if (pcVar31 != pcVar46) {
          lVar28 = 0;
          do {
            if (pcVar46[lVar28] == '\0') goto LAB_0176f900;
            if (pcVar46[lVar28 + 1] == '\0') {
              lVar28 = lVar28 + 1;
              goto LAB_0176f900;
            }
            if (pcVar46[lVar28 + 2] == '\0') {
              lVar28 = lVar28 + 2;
              goto LAB_0176f900;
            }
            lVar28 = lVar28 + 3;
          } while (lVar28 != 0x80001);
          lVar28 = 0;
LAB_0176f900:
          iVar33 = (int)lVar28;
          if (*(int *)(param_1 + 0xa50) <= (int)lVar28) {
            iVar33 = *(int *)(param_1 + 0xa50) + -1;
          }
          memcpy(pcVar31,pcVar46,(long)iVar33);
          pcVar31[iVar33] = '\0';
        }
        local_198 = PTR_DAT_04bb2020 + 0x10;
        local_190 = pcVar46;
        uVar41 = FUN_017c0b50(*(undefined8 *)PTR_DAT_04bb46d0,*(undefined2 *)(param_1 + 0x994));
        if ((uVar41 & 1) == 0) {
          iVar33 = 0;
          if (*(long *)PTR_DAT_04bb5ce0 != 0) {
            iVar33 = *(int *)(*(long *)PTR_DAT_04bb5ce0 + 0xe48);
          }
          bVar17 = iVar33 == 0x14;
          cVar9 = *(char *)(param_1 + 0x72d);
        }
        else {
          bVar17 = false;
          cVar9 = *(char *)(param_1 + 0x72d);
        }
        if ((cVar9 != '\0') && (*(char *)(param_1 + 0x99a) != '\0')) goto LAB_01772068;
        lVar28 = 0;
        do {
          if (pcVar46[lVar28] == '\0') goto LAB_0176f9d0;
          if (pcVar46[lVar28 + 1] == '\0') {
            lVar28 = lVar28 + 1;
            goto LAB_0176f9d0;
          }
          if (pcVar46[lVar28 + 2] == '\0') {
            lVar28 = lVar28 + 2;
            goto LAB_0176f9d0;
          }
          lVar28 = lVar28 + 3;
        } while (lVar28 != 0x80001);
        lVar28 = 0;
LAB_0176f9d0:
        (**(code **)(DAT_0528d020 + 0x18))(&DAT_0528d020);
        lVar30 = 0;
        do {
          iVar33 = (int)lVar28;
          if (DAT_0528d028[lVar30] == '\0') {
LAB_0176fa2c:
            iVar24 = (int)lVar30;
            if (iVar33 < iVar24) goto LAB_01772068;
            if (iVar24 < 1) goto LAB_0176fac0;
            uVar41 = 0;
            pcVar31 = pcVar46;
            goto LAB_0176fa50;
          }
          if (DAT_0528d028[lVar30 + 1] == '\0') {
            lVar30 = lVar30 + 1;
            goto LAB_0176fa2c;
          }
          if (DAT_0528d028[lVar30 + 2] == '\0') {
            lVar30 = lVar30 + 2;
            goto LAB_0176fa2c;
          }
          lVar30 = lVar30 + 3;
        } while (lVar30 != 0x80001);
        if (iVar33 < 0) goto LAB_01772068;
LAB_0176fac0:
        (**(code **)(DAT_0528d020 + 0x18))();
LAB_0176fae4:
        (**(code **)(*(long *)(param_1 + 0x2a8) + 0x18))(lVar25);
        lVar28 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0x2b0) + lVar28) == '\0') goto LAB_0176ff54;
          lVar30 = *(long *)(param_1 + 0x2b0) + lVar28;
          if (*(char *)(lVar30 + 1) == '\0') {
            lVar28 = lVar28 + 1;
            goto LAB_0176ff54;
          }
          if (*(char *)(lVar30 + 2) == '\0') {
            lVar28 = lVar28 + 2;
            goto LAB_0176ff54;
          }
          lVar28 = lVar28 + 3;
        } while (lVar28 != 0x80001);
        lVar28 = 0;
LAB_0176ff54:
        (**(code **)(DAT_0528cdf0 + 0x18))(&DAT_0528cdf0);
        lVar30 = 0;
        do {
          iVar33 = (int)lVar28;
          if (DAT_0528cdf8[lVar30] == '\0') {
LAB_0176ffb4:
            iVar24 = (int)lVar30;
            iVar34 = -1;
            if (iVar33 < iVar24) goto LAB_01771928;
            if (iVar24 < 1) goto LAB_01770050;
            uVar41 = 0;
            goto LAB_0176ffd8;
          }
          if (DAT_0528cdf8[lVar30 + 1] == '\0') {
            lVar30 = lVar30 + 1;
            goto LAB_0176ffb4;
          }
          if (DAT_0528cdf8[lVar30 + 2] == '\0') {
            lVar30 = lVar30 + 2;
            goto LAB_0176ffb4;
          }
          lVar30 = lVar30 + 3;
        } while (lVar30 != 0x80001);
        if (-1 < iVar33) {
LAB_01770050:
          (**(code **)(DAT_0528cdf0 + 0x18))();
          goto LAB_01772068;
        }
        iVar34 = -1;
        goto LAB_01771928;
      }
      goto LAB_01772068;
    }
    uVar41 = 0;
    bVar17 = true;
    do {
      if (local_2a0[uVar41] != local_178[uVar41]) break;
      if (local_2a0[uVar41] == '\0') {
        if (bVar17) goto LAB_0176f444;
        break;
      }
      if (local_2a0[uVar41 + 1] != local_178[uVar41 + 1]) break;
      if (local_2a0[uVar41 + 1] == '\0') goto LAB_0176f444;
      if (local_2a0[uVar41 + 2] != local_178[uVar41 + 2]) break;
      if (local_2a0[uVar41 + 2] == '\0') goto LAB_0176f444;
      bVar17 = uVar41 < 0x7fffe;
      uVar41 = uVar41 + 3;
    } while (uVar41 != 0x80001);
    local_180 = PTR_DAT_04bb2020 + 0x10;
    local_178 = "CEILING";
    (**(code **)(local_2a8 + 0x18))(&local_2a8);
    (**(code **)(local_2a8 + 0x18))(&local_2a8);
    pcVar46 = local_2a0;
    (**(code **)(local_180 + 0x18))(&local_180);
    if (pcVar46 == local_178) {
LAB_0176f578:
      *(undefined4 *)(param_1 + 0x638) = 3;
      pvVar40 = (void *)FUN_017f1d4c(*(long *)PTR_DAT_04bb5ce0 + 0xda0);
      pvVar42 = *(void **)(param_1 + 0x5a8);
      if (pvVar42 != pvVar40) {
        lVar28 = 0;
        do {
          if (*(char *)((long)pvVar40 + lVar28) == '\0') goto LAB_0176fc98;
          if (*(char *)((long)pvVar40 + lVar28 + 1) == '\0') {
            lVar28 = lVar28 + 1;
            goto LAB_0176fc98;
          }
          if (*(char *)((long)pvVar40 + lVar28 + 2) == '\0') {
            lVar28 = lVar28 + 2;
            goto LAB_0176fc98;
          }
          lVar28 = lVar28 + 3;
        } while (lVar28 != 0x80001);
        lVar28 = 0;
LAB_0176fc98:
        iVar33 = (int)lVar28;
        if (*(int *)(param_1 + 0x5b0) <= (int)lVar28) {
          iVar33 = *(int *)(param_1 + 0x5b0) + -1;
        }
        memcpy(pvVar42,pvVar40,(long)iVar33);
        *(undefined1 *)((long)pvVar42 + (long)iVar33) = 0;
      }
      FUN_007ef010(&local_180,*(long *)PTR_DAT_04bb5ce0 + 0xe78);
      sVar11 = *(short *)PTR_DAT_04bb3170;
      if ((short)local_180 == sVar11) {
        if (*(int *)(param_1 + 0xa38) == -1) goto LAB_0176ee64;
        local_198 = (undefined *)((ulong)local_198._1_7_ << 8);
        *(undefined1 *)(param_1 + 0x99a) = 1;
        uVar45 = *(undefined8 *)(param_1 + 0x348);
        uVar20 = *(undefined4 *)(param_1 + 0x350);
        (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(lVar26);
        uVar44 = *(undefined8 *)(param_1 + 0x348);
        (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(lVar26);
        lVar28 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0x348) + lVar28) == '\0') goto LAB_0177006c;
          lVar30 = *(long *)(param_1 + 0x348) + lVar28;
          if (*(char *)(lVar30 + 1) == '\0') {
            lVar28 = lVar28 + 1;
            goto LAB_0177006c;
          }
          if (*(char *)(lVar30 + 2) == '\0') {
            lVar28 = lVar28 + 2;
            goto LAB_0177006c;
          }
          lVar28 = lVar28 + 3;
        } while (lVar28 != 0x80001);
        lVar28 = 0;
LAB_0177006c:
        FUN_038d0770(uVar45,0,uVar20,uVar44,lVar28,&DAT_0528c7e0,&DAT_0528c7f0,&local_198);
        local_198 = (undefined *)((ulong)local_198 & 0xffffffffffffff00);
        uVar44 = *(undefined8 *)(param_1 + 0x3e0);
        uVar20 = *(undefined4 *)(param_1 + 1000);
        (**(code **)(*(long *)(param_1 + 0x3d8) + 0x18))(lVar6);
        uVar45 = *(undefined8 *)(param_1 + 0x3e0);
        (**(code **)(*(long *)(param_1 + 0x3d8) + 0x18))(lVar6);
        lVar28 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0x3e0) + lVar28) == '\0') goto LAB_0177010c;
          lVar30 = *(long *)(param_1 + 0x3e0) + lVar28;
          if (*(char *)(lVar30 + 1) == '\0') goto LAB_01770100;
          if (*(char *)(lVar30 + 2) == '\0') goto LAB_01770108;
          lVar28 = lVar28 + 3;
        } while (lVar28 != 0x80001);
      }
      else {
        *(short *)(param_1 + 0x758) = (short)local_180;
        *(short *)(param_1 + 0x75a) = (short)local_180;
        *(undefined1 *)(param_1 + 0x72d) = 1;
        *(undefined4 *)(param_1 + 0x730) = 0;
        uVar44 = *(undefined8 *)(param_1 + 0x348);
        uVar20 = *(undefined4 *)(param_1 + 0x350);
        *(short *)(param_1 + 0x770) = sVar11;
        *(short *)(param_1 + 0x7a0) = sVar11;
        *(long *)(param_1 + 0x760) = lVar27;
        *(undefined8 *)(param_1 + 2000) = 0;
        *(undefined2 *)(param_1 + 0x7d8) = 1;
        local_198 = (undefined *)((ulong)local_198._1_7_ << 8);
        *(long *)(param_1 + 0x768) = lVar7;
        (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(lVar26);
        uVar45 = *(undefined8 *)(param_1 + 0x348);
        (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(lVar26);
        lVar28 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0x348) + lVar28) == '\0') goto LAB_0176fe1c;
          lVar30 = *(long *)(param_1 + 0x348) + lVar28;
          if (*(char *)(lVar30 + 1) == '\0') {
            lVar28 = lVar28 + 1;
            goto LAB_0176fe1c;
          }
          if (*(char *)(lVar30 + 2) == '\0') {
            lVar28 = lVar28 + 2;
            goto LAB_0176fe1c;
          }
          lVar28 = lVar28 + 3;
        } while (lVar28 != 0x80001);
        lVar28 = 0;
LAB_0176fe1c:
        FUN_038d0770(uVar44,0,uVar20,uVar45,lVar28,&DAT_0528c7e0,&DAT_0528c7f0,&local_198);
        local_198 = (undefined *)((ulong)local_198 & 0xffffffffffffff00);
        uVar44 = *(undefined8 *)(param_1 + 0x3e0);
        uVar20 = *(undefined4 *)(param_1 + 1000);
        (**(code **)(*(long *)(param_1 + 0x3d8) + 0x18))(lVar6);
        uVar45 = *(undefined8 *)(param_1 + 0x3e0);
        (**(code **)(*(long *)(param_1 + 0x3d8) + 0x18))(lVar6);
        lVar28 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0x3e0) + lVar28) == '\0') goto LAB_0177010c;
          lVar30 = *(long *)(param_1 + 0x3e0) + lVar28;
          if (*(char *)(lVar30 + 1) == '\0') goto LAB_01770100;
          if (*(char *)(lVar30 + 2) == '\0') goto LAB_01770108;
          lVar28 = lVar28 + 3;
        } while (lVar28 != 0x80001);
      }
      lVar28 = 0;
      goto LAB_0177010c;
    }
    uVar41 = 0;
    bVar17 = true;
    do {
      if (local_2a0[uVar41] != local_178[uVar41]) break;
      if (local_2a0[uVar41] == '\0') {
        if (bVar17) goto LAB_0176f578;
        break;
      }
      if (local_2a0[uVar41 + 1] != local_178[uVar41 + 1]) break;
      if (local_2a0[uVar41 + 1] == '\0') goto LAB_0176f578;
      if (local_2a0[uVar41 + 2] != local_178[uVar41 + 2]) break;
      if (local_2a0[uVar41 + 2] == '\0') goto LAB_0176f578;
      bVar17 = uVar41 < 0x7fffe;
      uVar41 = uVar41 + 3;
    } while (uVar41 != 0x80001);
    local_180 = PTR_DAT_04bb2020 + 0x10;
    local_178 = "ENTRANCE";
    (**(code **)(local_2a8 + 0x18))(&local_2a8);
    (**(code **)(local_2a8 + 0x18))(&local_2a8);
    pcVar46 = local_2a0;
    (**(code **)(local_180 + 0x18))(&local_180);
    if (pcVar46 == local_178) {
LAB_0177013c:
      *(undefined4 *)(param_1 + 0x638) = 4;
      fVar47 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x170));
      fVar47 = fVar47 * 8.381903e-08;
      bVar17 = false;
      bVar14 = false;
      bVar15 = false;
      if (45.0 <= fVar47) {
        bVar17 = false;
        bVar14 = false;
        bVar15 = true;
        if (!NAN(fVar47)) {
          bVar17 = fVar47 < 315.0;
          bVar14 = fVar47 == 315.0;
          bVar15 = false;
        }
      }
      if (bVar14 || bVar17 != bVar15) {
        bVar17 = false;
        if ((45.0 <= fVar47) && (bVar17 = false, !NAN(fVar47))) {
          bVar17 = fVar47 < 135.0;
        }
        if (!bVar17) {
          uVar22 = (uint)(fVar47 < 135.0);
          if (225.0 <= fVar47) {
            uVar22 = 1;
          }
          goto LAB_01770284;
        }
        uVar22 = 3;
        if (*(char *)(param_1 + 0x6e8) != '\0') {
          uVar22 = 1;
        }
      }
      else {
        uVar22 = 2;
LAB_01770284:
        if (*(char *)(param_1 + 0x6e8) != '\0') {
          uVar22 = *(uint *)(&DAT_04130c24 + (ulong)uVar22 * 4);
        }
      }
      local_180 = PTR_DAT_04bb2020 + 0x10;
      local_178 = "EntranceBothCover";
      (**(code **)(*(long *)(param_1 + 0x3d8) + 0x18))(lVar6);
      lVar28 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x3e0) + lVar28) == '\0') {
LAB_01770328:
          if (0x10 < (int)lVar28) {
            uVar41 = 0;
            goto LAB_01770338;
          }
          break;
        }
        lVar30 = *(long *)(param_1 + 0x3e0) + lVar28;
        if (*(char *)(lVar30 + 1) == '\0') {
          lVar28 = lVar28 + 1;
          goto LAB_01770328;
        }
        if (*(char *)(lVar30 + 2) == '\0') {
          lVar28 = lVar28 + 2;
          goto LAB_01770328;
        }
        lVar28 = lVar28 + 3;
      } while (lVar28 != 0x80001);
      goto LAB_0177039c;
    }
    uVar41 = 0;
    bVar17 = true;
    do {
      if (local_2a0[uVar41] != local_178[uVar41]) break;
      if (local_2a0[uVar41] == '\0') {
        if (bVar17) goto LAB_0177013c;
        break;
      }
      if (local_2a0[uVar41 + 1] != local_178[uVar41 + 1]) break;
      if (local_2a0[uVar41 + 1] == '\0') goto LAB_0177013c;
      if (local_2a0[uVar41 + 2] != local_178[uVar41 + 2]) break;
      if (local_2a0[uVar41 + 2] == '\0') goto LAB_0177013c;
      bVar17 = uVar41 < 0x7fffe;
      uVar41 = uVar41 + 3;
    } while (uVar41 != 0x80001);
    local_180 = PTR_DAT_04bb2020 + 0x10;
    local_178 = "STAIRS";
    (**(code **)(local_2a8 + 0x18))(&local_2a8);
    (**(code **)(local_2a8 + 0x18))(&local_2a8);
    pcVar46 = local_2a0;
    (**(code **)(local_180 + 0x18))(&local_180);
    if (pcVar46 == local_178) {
LAB_017702a0:
      uVar20 = 5;
LAB_017702a4:
      *(undefined4 *)(param_1 + 0x638) = uVar20;
      goto LAB_0176ee64;
    }
    uVar41 = 0;
    bVar17 = true;
    do {
      if (local_2a0[uVar41] != local_178[uVar41]) break;
      if (local_2a0[uVar41] == '\0') {
        if (bVar17) goto LAB_017702a0;
        break;
      }
      if (local_2a0[uVar41 + 1] != local_178[uVar41 + 1]) break;
      if (local_2a0[uVar41 + 1] == '\0') goto LAB_017702a0;
      if (local_2a0[uVar41 + 2] != local_178[uVar41 + 2]) break;
      if (local_2a0[uVar41 + 2] == '\0') goto LAB_017702a0;
      bVar17 = uVar41 < 0x7fffe;
      uVar41 = uVar41 + 3;
    } while (uVar41 != 0x80001);
    local_180 = PTR_DAT_04bb2020 + 0x10;
    local_178 = "WINDOWWALL";
    (**(code **)(local_2a8 + 0x18))(&local_2a8);
    (**(code **)(local_2a8 + 0x18))(&local_2a8);
    pcVar46 = local_2a0;
    (**(code **)(local_180 + 0x18))(&local_180);
    if (pcVar46 != local_178) {
      uVar41 = 0;
      bVar17 = true;
      do {
        if (local_2a0[uVar41] != local_178[uVar41]) break;
        if (local_2a0[uVar41] == '\0') {
          if (bVar17) goto LAB_01770720;
          break;
        }
        if (local_2a0[uVar41 + 1] != local_178[uVar41 + 1]) break;
        if (local_2a0[uVar41 + 1] == '\0') goto LAB_01770720;
        if (local_2a0[uVar41 + 2] != local_178[uVar41 + 2]) break;
        if (local_2a0[uVar41 + 2] == '\0') goto LAB_01770720;
        bVar17 = uVar41 < 0x7fffe;
        uVar41 = uVar41 + 3;
      } while (uVar41 != 0x80001);
      local_180 = PTR_DAT_04bb2020 + 0x10;
      local_178 = "CURTAIN";
      (**(code **)(local_2a8 + 0x18))(&local_2a8);
      (**(code **)(local_2a8 + 0x18))(&local_2a8);
      pcVar46 = local_2a0;
      (**(code **)(local_180 + 0x18))(&local_180);
      if (pcVar46 == local_178) {
LAB_01770fec:
        *(undefined4 *)(param_1 + 0x638) = 7;
        FUN_0176d630(param_1);
        uVar20 = FUN_0176cdec(param_1);
        local_178 = (char *)FUN_017f8520(*(long *)PTR_DAT_04bb5ce0 + 0xda0,uVar20);
        local_180 = PTR_DAT_04bb2020 + 0x10;
        FUN_008aa0a0(param_1 + 0xd18,&local_180,0xffffffff);
      }
      else {
        uVar41 = 0;
        bVar17 = true;
        do {
          if (local_2a0[uVar41] != local_178[uVar41]) break;
          if (local_2a0[uVar41] == '\0') {
            if (bVar17) goto LAB_01770fec;
            break;
          }
          if (local_2a0[uVar41 + 1] != local_178[uVar41 + 1]) break;
          if (local_2a0[uVar41 + 1] == '\0') goto LAB_01770fec;
          if (local_2a0[uVar41 + 2] != local_178[uVar41 + 2]) break;
          if (local_2a0[uVar41 + 2] == '\0') goto LAB_01770fec;
          bVar17 = uVar41 < 0x7fffe;
          uVar41 = uVar41 + 3;
        } while (uVar41 != 0x80001);
        puVar35 = PTR_DAT_04bb2020 + 0x10;
        local_178 = "ARCH";
        local_180 = puVar35;
        uVar41 = FUN_00710cb0(&local_2a8,&local_180);
        if ((uVar41 & 1) == 0) {
          local_178 = "OUTSIDECEILING";
          local_180 = puVar35;
          uVar41 = FUN_00710cb0(&local_2a8,&local_180);
          if ((uVar41 & 1) == 0) {
            puVar35 = PTR_DAT_04bb2020 + 0x10;
            local_178 = "WINDOW";
            local_180 = puVar35;
            uVar41 = FUN_00710cb0(&local_2a8,&local_180);
            if ((uVar41 & 1) == 0) {
              local_178 = "SUBWINDOW";
              local_180 = puVar35;
              uVar41 = FUN_00710cb0(&local_2a8,&local_180);
              if ((uVar41 & 1) == 0) {
                puVar35 = PTR_DAT_04bb2020 + 0x10;
                local_178 = "ENV";
                local_180 = puVar35;
                uVar41 = FUN_00710cb0(&local_2a8,&local_180);
                if ((uVar41 & 1) == 0) {
                  local_178 = "FLOORCOVER";
                  local_180 = puVar35;
                  uVar41 = FUN_00710cb0(&local_2a8,&local_180);
                  if ((uVar41 & 1) != 0) {
                    uVar20 = 0xf;
                    goto LAB_017702a4;
                  }
                }
                else {
                  *(undefined4 *)(param_1 + 0x638) = 0xe;
                  FUN_0176d0bc(param_1);
                }
              }
              else {
                *(undefined4 *)(param_1 + 0x638) = 0xb;
                **(undefined1 **)(param_1 + 0x348) = 0;
              }
            }
            else {
              *(undefined4 *)(param_1 + 0x638) = 10;
              FUN_0176cea0(param_1);
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x638) = 9;
            FUN_007ef010(&local_180,*(long *)PTR_DAT_04bb5ce0 + 0xe78);
            sVar11 = *(short *)PTR_DAT_04bb3170;
            if ((short)local_180 == sVar11) {
              if (*(int *)(param_1 + 0xa38) != -1) {
                *(undefined1 *)(param_1 + 0x99a) = 1;
              }
            }
            else {
              *(undefined4 *)(param_1 + 0x730) = 0;
              *(undefined1 *)(param_1 + 0x72d) = 1;
              *(short *)(param_1 + 0x770) = sVar11;
              *(short *)(param_1 + 0x7a0) = sVar11;
              *(undefined8 *)(param_1 + 2000) = 0;
              *(short *)(param_1 + 0x758) = (short)local_180;
              *(short *)(param_1 + 0x75a) = (short)local_180;
              *(undefined2 *)(param_1 + 0x7d8) = 1;
              *(long *)(param_1 + 0x760) = lVar27;
              *(long *)(param_1 + 0x768) = lVar7;
            }
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x638) = 8;
          FUN_0176e510(param_1);
        }
      }
      goto LAB_0176ee64;
    }
LAB_01770720:
    *(undefined4 *)(param_1 + 0x638) = 6;
    local_180 = PTR_DAT_04bb2020 + 0x10;
    local_178 = "4m";
    (**(code **)(*(long *)(param_1 + 0x2a8) + 0x18))(lVar25);
    lVar28 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x2b0) + lVar28) == '\0') {
LAB_01770a5c:
        if (1 < (int)lVar28) {
          uVar41 = 0;
          goto LAB_01770a84;
        }
        break;
      }
      lVar30 = *(long *)(param_1 + 0x2b0) + lVar28;
      if (*(char *)(lVar30 + 1) == '\0') {
        lVar28 = lVar28 + 1;
        goto LAB_01770a5c;
      }
      if (*(char *)(lVar30 + 2) == '\0') {
        lVar28 = lVar28 + 2;
        goto LAB_01770a5c;
      }
      lVar28 = lVar28 + 3;
    } while (lVar28 != 0x80001);
    goto LAB_01770a64;
  }
  goto LAB_0176ee64;
  while( true ) {
    pcVar46 = local_178;
    lVar38 = lVar30;
    while( true ) {
      lVar38 = lVar38 + -1;
      if (*(char *)(lVar28 + uVar41) != *pcVar46) break;
      if (*(char *)(lVar28 + uVar41) == '\0') goto LAB_0176f2b0;
      lVar28 = lVar28 + 1;
      pcVar46 = pcVar46 + 1;
      if (lVar38 == 0) goto LAB_0176f2b0;
    }
    uVar41 = uVar41 + 1;
    if (uVar41 == (iVar33 - iVar24) + 1) break;
LAB_0176f230:
    lVar28 = *(long *)(param_1 + 0x3e0);
    (**(code **)(local_180 + 0x18))(&local_180);
    if ((char *)(lVar28 + uVar41) == local_178) {
LAB_0176f2b0:
      if ((int)uVar41 != -1) goto LAB_0176f2bc;
      break;
    }
  }
  goto LAB_0176ee64;
  while( true ) {
    pcVar43 = DAT_0528d028;
    pcVar37 = pcVar31;
    lVar28 = lVar30;
    while( true ) {
      lVar28 = lVar28 + -1;
      if (*pcVar37 != *pcVar43) break;
      if (*pcVar37 == '\0') goto LAB_0176fad8;
      pcVar43 = pcVar43 + 1;
      pcVar37 = pcVar37 + 1;
      if (lVar28 == 0) goto LAB_0176fad8;
    }
    uVar41 = uVar41 + 1;
    pcVar31 = pcVar31 + 1;
    if (uVar41 == (iVar33 - iVar24) + 1) break;
LAB_0176fa50:
    (**(code **)(DAT_0528d020 + 0x18))(&DAT_0528d020);
    if (pcVar46 + uVar41 == DAT_0528d028) {
LAB_0176fad8:
      if ((int)uVar41 != -1) goto LAB_0176fae4;
      break;
    }
  }
  goto LAB_01772068;
  while( true ) {
    pcVar46 = DAT_0528cdf8;
    lVar38 = lVar30;
    while( true ) {
      lVar38 = lVar38 + -1;
      if (*(char *)(lVar28 + uVar41) != *pcVar46) break;
      if (*(char *)(lVar28 + uVar41) == '\0') goto LAB_01771924;
      lVar28 = lVar28 + 1;
      pcVar46 = pcVar46 + 1;
      if (lVar38 == 0) goto LAB_01771924;
    }
    uVar41 = uVar41 + 1;
    iVar34 = -1;
    if (uVar41 == (iVar33 - iVar24) + 1) break;
LAB_0176ffd8:
    lVar28 = *(long *)(param_1 + 0x2b0);
    (**(code **)(DAT_0528cdf0 + 0x18))(&DAT_0528cdf0);
    if ((char *)(lVar28 + uVar41) == DAT_0528cdf8) {
LAB_01771924:
      iVar34 = (int)uVar41;
      break;
    }
  }
LAB_01771928:
  if (iVar34 != -1) {
    bVar17 = true;
  }
  if (!bVar17) {
    (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(lVar26);
    lVar28 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x348) + lVar28) == '\0') goto LAB_0177198c;
      lVar30 = *(long *)(param_1 + 0x348) + lVar28;
      if (*(char *)(lVar30 + 1) == '\0') {
        lVar28 = lVar28 + 1;
        goto LAB_0177198c;
      }
      if (*(char *)(lVar30 + 2) == '\0') {
        lVar28 = lVar28 + 2;
        goto LAB_0177198c;
      }
      lVar28 = lVar28 + 3;
    } while (lVar28 != 0x80001);
    lVar28 = 0;
LAB_0177198c:
    (**(code **)(DAT_0528ce20 + 0x18))(&DAT_0528ce20);
    lVar30 = 0;
    do {
      iVar33 = (int)lVar28;
      if (DAT_0528ce28[lVar30] == '\0') {
LAB_017719e8:
        iVar24 = (int)lVar30;
        if (iVar33 < iVar24) goto LAB_017719f0;
        if (iVar24 < 1) goto LAB_01771a84;
        uVar41 = 0;
        goto LAB_01771a14;
      }
      if (DAT_0528ce28[lVar30 + 1] == '\0') {
        lVar30 = lVar30 + 1;
        goto LAB_017719e8;
      }
      if (DAT_0528ce28[lVar30 + 2] == '\0') {
        lVar30 = lVar30 + 2;
        goto LAB_017719e8;
      }
      lVar30 = lVar30 + 3;
    } while (lVar30 != 0x80001);
    if (iVar33 < 0) goto LAB_017719f0;
LAB_01771a84:
    (**(code **)(DAT_0528ce20 + 0x18))();
    uVar41 = 0;
LAB_01771a9c:
    if (((int)uVar41 == -1) || (*(char *)(param_1 + 0x929) == '\0')) {
      if (*(char *)(param_1 + 0x929) == '\0') goto LAB_01771b40;
    }
    else {
      bVar14 = *(char *)(param_1 + 0x928) == '\0';
      bVar17 = !bVar14;
      if (*(char *)(param_1 + 0x92a) != '\0') {
        bVar17 = bVar14;
      }
      if (bVar17) {
        *(undefined1 *)(param_1 + 0x92b) = 1;
      }
    }
    goto LAB_01771adc;
  }
LAB_01772068:
  local_180 = (undefined *)0x800000000;
  local_16c = 0x3f800000;
  local_140 = 0x80;
  local_170 = *(float *)(param_1 + 0x168);
  local_bd = 0;
  local_b0 = 0;
  local_b4 = 0;
  local_b8 = 7;
  local_178 = (char *)CONCAT44(*(float *)(param_1 + 0x164) + -3.0,*(undefined4 *)(param_1 + 0x160));
  local_164 = 0;
  iStack_160 = 0;
  local_15c = 0;
  local_158 = 0;
  local_13c[0] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0];
  acStack_134[0] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[8];
  acStack_134[1] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[9];
  acStack_134[2] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[10];
  acStack_134[3] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0xb];
  acStack_134[4] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0xc];
  acStack_134[5] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0xd];
  acStack_134[6] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0xe];
  acStack_134[7] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0xf];
  cStack_12b = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x11];
  local_11f = 0;
  local_150 = puVar5;
  local_148 = local_13c;
  FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_180,*(undefined4 *)(param_1 + 0x230),0);
  FUN_017b79b0(*(undefined8 *)PTR_DAT_04bb5ce0,0);
LAB_0176ee64:
  uVar22 = local_1b0;
  plVar13 = local_1b8;
  uVar41 = (ulong)local_1b0;
  (**(code **)(*local_1b8 + 0x18))(local_1b8);
  lVar28 = 0;
  do {
    if (*(char *)(plVar13[1] + lVar28) == '\0') {
LAB_0176eec4:
      iVar33 = (int)lVar28;
      goto joined_r0x0176eee8;
    }
    lVar30 = plVar13[1] + lVar28;
    if (*(char *)(lVar30 + 1) == '\0') {
      lVar28 = lVar28 + 1;
      goto LAB_0176eec4;
    }
    if (*(char *)(lVar30 + 2) == '\0') {
      iVar33 = (int)lVar28 + 2;
      goto joined_r0x0176eee8;
    }
    lVar28 = lVar28 + 3;
  } while (lVar28 != 0x80001);
  iVar33 = 0;
joined_r0x0176eee8:
  if ((-1 < (int)uVar22) && ((int)uVar22 <= iVar33)) {
    for (; lVar28 = local_1b8[1], *(char *)(lVar28 + uVar41) != '\0'; uVar41 = uVar41 + 1) {
      (**(code **)(local_1a8 + 0x18))(local_2b0);
      uVar36 = 0;
      bVar17 = true;
      cVar9 = *(char *)(lVar28 + uVar41);
      do {
        if (local_1a0[uVar36] == '\0') break;
        if (local_1a0[uVar36] == cVar9) {
          if (bVar17) goto LAB_0176ef84;
          break;
        }
        if (local_1a0[uVar36 + 1] == '\0') break;
        if (local_1a0[uVar36 + 1] == cVar9) goto LAB_0176ef84;
        if (local_1a0[uVar36 + 2] == '\0') break;
        if (local_1a0[uVar36 + 2] == cVar9) goto LAB_0176ef84;
        bVar17 = uVar36 < 0x7fffe;
        uVar36 = uVar36 + 3;
      } while (uVar36 != 0x80001);
    }
LAB_0176ef84:
    local_1b0 = (int)uVar41 + 1;
  }
  if ((local_1b8 == plVar2) && (local_1b0 == uVar39)) {
    s_RoomMdlWall_WALL__0407220a[0] = s_RoomMdlWall_WALL__0407220a[0];
    s_RoomMdlWall_WALL__0407220a[1] = s_RoomMdlWall_WALL__0407220a[1];
    s_RoomMdlWall_WALL__0407220a[2] = s_RoomMdlWall_WALL__0407220a[2];
    s_RoomMdlWall_WALL__0407220a[3] = s_RoomMdlWall_WALL__0407220a[3];
    s_RoomMdlWall_WALL__0407220a[4] = s_RoomMdlWall_WALL__0407220a[4];
    s_RoomMdlWall_WALL__0407220a[5] = s_RoomMdlWall_WALL__0407220a[5];
    s_RoomMdlWall_WALL__0407220a[6] = s_RoomMdlWall_WALL__0407220a[6];
    s_RoomMdlWall_WALL__0407220a[7] = s_RoomMdlWall_WALL__0407220a[7];
    s_RoomMdlWall_WALL__0407220a[8] = s_RoomMdlWall_WALL__0407220a[8];
    s_RoomMdlWall_WALL__0407220a[9] = s_RoomMdlWall_WALL__0407220a[9];
    s_RoomMdlWall_WALL__0407220a[10] = s_RoomMdlWall_WALL__0407220a[10];
    s_RoomMdlWall_WALL__0407220a[0xb] = s_RoomMdlWall_WALL__0407220a[0xb];
    s_RoomMdlWall_WALL__0407220a[0xc] = s_RoomMdlWall_WALL__0407220a[0xc];
    s_RoomMdlWall_WALL__0407220a[0xd] = s_RoomMdlWall_WALL__0407220a[0xd];
    s_RoomMdlWall_WALL__0407220a[0xe] = s_RoomMdlWall_WALL__0407220a[0xe];
    s_RoomMdlWall_WALL__0407220a[0xf] = s_RoomMdlWall_WALL__0407220a[0xf];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[0] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[1] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[1];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[2] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[2];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[3] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[3];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[4] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[4];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[5] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[5];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[6] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[6];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[7] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[7];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[8] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[8];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[9] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[9];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[10] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[10];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[0xb] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0xb];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[0xc] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0xc];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[0xd] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0xd];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[0xe] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0xe];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[0xf] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0xf];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x10] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x10];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x11] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x11];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x12] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x12];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x13] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x13];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x14] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x14];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x15] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x15];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x16] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x16];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x17] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x17];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x18] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x18];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x19] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x19];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x1a] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x1a];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x1b] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x1b];
    s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x1c] = s_RoomMdlFloorCover_FLOORCOVER__0408175b[0x1c];
    s_RoomMdlArch_ARCH__04091cdb[0] = s_RoomMdlArch_ARCH__04091cdb[0];
    s_RoomMdlArch_ARCH__04091cdb[1] = s_RoomMdlArch_ARCH__04091cdb[1];
    s_RoomMdlArch_ARCH__04091cdb[2] = s_RoomMdlArch_ARCH__04091cdb[2];
    s_RoomMdlArch_ARCH__04091cdb[3] = s_RoomMdlArch_ARCH__04091cdb[3];
    s_RoomMdlArch_ARCH__04091cdb[4] = s_RoomMdlArch_ARCH__04091cdb[4];
    s_RoomMdlArch_ARCH__04091cdb[5] = s_RoomMdlArch_ARCH__04091cdb[5];
    s_RoomMdlArch_ARCH__04091cdb[6] = s_RoomMdlArch_ARCH__04091cdb[6];
    s_RoomMdlArch_ARCH__04091cdb[7] = s_RoomMdlArch_ARCH__04091cdb[7];
    s_RoomMdlArch_ARCH__04091cdb[8] = s_RoomMdlArch_ARCH__04091cdb[8];
    s_RoomMdlArch_ARCH__04091cdb[9] = s_RoomMdlArch_ARCH__04091cdb[9];
    s_RoomMdlArch_ARCH__04091cdb[10] = s_RoomMdlArch_ARCH__04091cdb[10];
    s_RoomMdlArch_ARCH__04091cdb[0xb] = s_RoomMdlArch_ARCH__04091cdb[0xb];
    s_RoomMdlArch_ARCH__04091cdb[0xc] = s_RoomMdlArch_ARCH__04091cdb[0xc];
    s_RoomMdlArch_ARCH__04091cdb[0xd] = s_RoomMdlArch_ARCH__04091cdb[0xd];
    s_RoomMdlArch_ARCH__04091cdb[0xe] = s_RoomMdlArch_ARCH__04091cdb[0xe];
    s_RoomMdlArch_ARCH__04091cdb[0xf] = s_RoomMdlArch_ARCH__04091cdb[0xf];
    return;
  }
  goto LAB_0176eb44;
  while( true ) {
    pcVar46 = DAT_0528ce28;
    lVar38 = lVar30;
    while( true ) {
      lVar38 = lVar38 + -1;
      if (*(char *)(lVar28 + uVar41) != *pcVar46) break;
      if (*(char *)(lVar28 + uVar41) == '\0') goto LAB_01771a9c;
      lVar28 = lVar28 + 1;
      pcVar46 = pcVar46 + 1;
      if (lVar38 == 0) goto LAB_01771a9c;
    }
    uVar41 = uVar41 + 1;
    if (uVar41 == (iVar33 - iVar24) + 1) break;
LAB_01771a14:
    lVar28 = *(long *)(param_1 + 0x348);
    (**(code **)(DAT_0528ce20 + 0x18))(&DAT_0528ce20);
    if ((char *)(lVar28 + uVar41) == DAT_0528ce28) goto LAB_01771a9c;
  }
LAB_017719f0:
  if (*(char *)(param_1 + 0x929) == '\0') {
LAB_01771b40:
    puVar35 = PTR_DAT_04bb2020 + 0x10;
  }
  else {
LAB_01771adc:
    bVar14 = *(char *)(param_1 + 0x928) == '\0';
    bVar17 = !bVar14;
    if (*(char *)(param_1 + 0x92a) != '\0') {
      bVar17 = bVar14;
    }
    puVar35 = PTR_DAT_04bb2020 + 0x10;
    if ((bVar17) && (*(char *)(param_1 + 0x92b) == '\0')) {
      lVar28 = *(long *)PTR_DAT_04bb5ce0;
      if (lVar28 == 0) {
        iVar33 = 4;
        iVar24 = 4;
      }
      else {
        iVar33 = *(int *)(lVar28 + 0xf64) * 2 + 4;
        iVar24 = *(int *)(lVar28 + 0xf68) * 2 + 4;
      }
      iVar21 = FUN_0180e2d0();
      local_ed = 0;
      local_170 = 1.79366e-43;
      local_16c = local_16c & 0xffffffffffffff00;
      iVar34 = 8;
      if (iVar21 != 3) {
        iVar34 = iVar33;
      }
      iVar33 = 8;
      if (iVar21 != 3) {
        iVar33 = iVar24;
      }
      local_180 = PTR_DAT_04bb2d88 + 0x10;
      local_178 = (char *)&local_16c;
      FUN_038d1270(&local_180,"RoomMdlFloor%dx%d",iVar33,iVar34);
      pcVar31 = *(char **)(param_1 + 0x348);
      (**(code **)(local_180 + 0x18))(&local_180);
      pcVar46 = local_178;
      if (pcVar31 != local_178) {
        (**(code **)(local_180 + 0x18))(&local_180);
        lVar28 = 0;
        do {
          if (local_178[lVar28] == '\0') goto LAB_01771c14;
          if (local_178[lVar28 + 1] == '\0') {
            lVar28 = lVar28 + 1;
            goto LAB_01771c14;
          }
          if (local_178[lVar28 + 2] == '\0') {
            lVar28 = lVar28 + 2;
            goto LAB_01771c14;
          }
          lVar28 = lVar28 + 3;
        } while (lVar28 != 0x80001);
        lVar28 = 0;
LAB_01771c14:
        iVar33 = (int)lVar28;
        if (*(int *)(param_1 + 0x350) <= (int)lVar28) {
          iVar33 = *(int *)(param_1 + 0x350) + -1;
        }
        memcpy(pcVar31,pcVar46,(long)iVar33);
        pcVar31[iVar33] = '\0';
      }
      pcVar31 = *(char **)(param_1 + 0x2b0);
      (**(code **)(local_180 + 0x18))(&local_180);
      pcVar46 = local_178;
      if (pcVar31 != local_178) {
        (**(code **)(local_180 + 0x18))(&local_180);
        lVar28 = 0;
        do {
          if (local_178[lVar28] == '\0') goto LAB_01771cb0;
          if (local_178[lVar28 + 1] == '\0') {
            lVar28 = lVar28 + 1;
            goto LAB_01771cb0;
          }
          if (local_178[lVar28 + 2] == '\0') {
            lVar28 = lVar28 + 2;
            goto LAB_01771cb0;
          }
          lVar28 = lVar28 + 3;
        } while (lVar28 != 0x80001);
        lVar28 = 0;
LAB_01771cb0:
        iVar33 = (int)lVar28;
        if (*(int *)(param_1 + 0x2b8) <= (int)lVar28) {
          iVar33 = *(int *)(param_1 + 0x2b8) + -1;
        }
        memcpy(pcVar31,pcVar46,(long)iVar33);
        pcVar31[iVar33] = '\0';
      }
      pcVar31 = *(char **)(param_1 + 0x3e0);
      (**(code **)(local_180 + 0x18))(&local_180);
      pcVar46 = local_178;
      if (pcVar31 != local_178) {
        (**(code **)(local_180 + 0x18))(&local_180);
        lVar28 = 0;
        do {
          if (local_178[lVar28] == '\0') goto LAB_01771d4c;
          if (local_178[lVar28 + 1] == '\0') {
            lVar28 = lVar28 + 1;
            goto LAB_01771d4c;
          }
          if (local_178[lVar28 + 2] == '\0') {
            lVar28 = lVar28 + 2;
            goto LAB_01771d4c;
          }
          lVar28 = lVar28 + 3;
        } while (lVar28 != 0x80001);
        lVar28 = 0;
LAB_01771d4c:
        iVar33 = (int)lVar28;
        if (*(int *)(param_1 + 1000) <= (int)lVar28) {
          iVar33 = *(int *)(param_1 + 1000) + -1;
        }
        memcpy(pcVar31,pcVar46,(long)iVar33);
        pcVar31[iVar33] = '\0';
      }
      puVar35 = local_198;
    }
  }
  pcVar31 = *(char **)(param_1 + 0x348);
  (**(code **)(puVar35 + 0x18))(&local_198);
  pcVar46 = local_190;
  if (pcVar31 != local_190) {
    (**(code **)(local_198 + 0x18))(&local_198);
    lVar28 = 0;
    do {
      if (local_190[lVar28] == '\0') goto LAB_01771de8;
      if (local_190[lVar28 + 1] == '\0') {
        lVar28 = lVar28 + 1;
        goto LAB_01771de8;
      }
      if (local_190[lVar28 + 2] == '\0') {
        lVar28 = lVar28 + 2;
        goto LAB_01771de8;
      }
      lVar28 = lVar28 + 3;
    } while (lVar28 != 0x80001);
    lVar28 = 0;
LAB_01771de8:
    iVar33 = (int)lVar28;
    if (*(int *)(param_1 + 0x350) <= (int)lVar28) {
      iVar33 = *(int *)(param_1 + 0x350) + -1;
    }
    memcpy(pcVar31,pcVar46,(long)iVar33);
    pcVar31[iVar33] = '\0';
  }
  pvVar42 = *(void **)(param_1 + 0x3e0);
  (**(code **)(*(long *)(param_1 + 0x2a8) + 0x18))(lVar25);
  pvVar40 = *(void **)(param_1 + 0x2b0);
  if (pvVar42 != pvVar40) {
    (**(code **)(*(long *)(param_1 + 0x2a8) + 0x18))(lVar25);
    lVar28 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x2b0) + lVar28) == '\0') goto LAB_01771e84;
      lVar30 = *(long *)(param_1 + 0x2b0) + lVar28;
      if (*(char *)(lVar30 + 1) == '\0') {
        lVar28 = lVar28 + 1;
        goto LAB_01771e84;
      }
      if (*(char *)(lVar30 + 2) == '\0') {
        lVar28 = lVar28 + 2;
        goto LAB_01771e84;
      }
      lVar28 = lVar28 + 3;
    } while (lVar28 != 0x80001);
    lVar28 = 0;
LAB_01771e84:
    iVar33 = (int)lVar28;
    if (*(int *)(param_1 + 1000) <= (int)lVar28) {
      iVar33 = *(int *)(param_1 + 1000) + -1;
    }
    memcpy(pvVar42,pvVar40,(long)iVar33);
    *(undefined1 *)((long)pvVar42 + (long)iVar33) = 0;
  }
  local_180 = (undefined *)((ulong)local_180 & 0xffffffffffffff00);
  uVar45 = *(undefined8 *)(param_1 + 0x3e0);
  uVar20 = *(undefined4 *)(param_1 + 1000);
  (**(code **)(*(long *)(param_1 + 0x3d8) + 0x18))(lVar6);
  uVar44 = *(undefined8 *)(param_1 + 0x3e0);
  (**(code **)(*(long *)(param_1 + 0x3d8) + 0x18))(lVar6);
  lVar28 = 0;
  do {
    if (*(char *)(*(long *)(param_1 + 0x3e0) + lVar28) == '\0') goto LAB_01771f24;
    lVar30 = *(long *)(param_1 + 0x3e0) + lVar28;
    if (*(char *)(lVar30 + 1) == '\0') {
      lVar28 = lVar28 + 1;
      goto LAB_01771f24;
    }
    if (*(char *)(lVar30 + 2) == '\0') {
      lVar28 = lVar28 + 2;
      goto LAB_01771f24;
    }
    lVar28 = lVar28 + 3;
  } while (lVar28 != 0x80001);
  lVar28 = 0;
LAB_01771f24:
  FUN_038d0770(uVar45,0,uVar20,uVar44,lVar28,&DAT_0528ccc0,lVar26,&local_180);
  if (*(char *)(param_1 + 0x92b) != '\0') {
    lVar30 = *(long *)(param_1 + 0x3e0);
    (**(code **)(*(long *)(param_1 + 0x3d8) + 0x18))(lVar6);
    lVar28 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x3e0) + lVar28) == '\0') goto LAB_01771fa8;
      lVar38 = *(long *)(param_1 + 0x3e0) + lVar28;
      if (*(char *)(lVar38 + 1) == '\0') {
        lVar28 = lVar28 + 1;
        goto LAB_01771fa8;
      }
      if (*(char *)(lVar38 + 2) == '\0') {
        lVar28 = lVar28 + 2;
        goto LAB_01771fa8;
      }
      lVar28 = lVar28 + 3;
    } while (lVar28 != 0x80001);
    lVar28 = 0;
LAB_01771fa8:
    uVar22 = (uint)lVar28 & ((int)(uint)lVar28 >> 0x1f ^ 0xffffffffU);
    (**(code **)(DAT_0528ce30 + 0x18))(&DAT_0528ce30);
    lVar28 = 0;
    do {
      if (*(char *)((long)DAT_0528ce38 + lVar28) == '\0') goto LAB_01772008;
      if (*(char *)((long)DAT_0528ce38 + lVar28 + 1) == '\0') {
        lVar28 = lVar28 + 1;
        goto LAB_01772008;
      }
      if (*(char *)((long)DAT_0528ce38 + lVar28 + 2) == '\0') {
        lVar28 = lVar28 + 2;
        goto LAB_01772008;
      }
      lVar28 = lVar28 + 3;
    } while (lVar28 != 0x80001);
    lVar28 = 0;
LAB_01772008:
    uVar23 = (uint)lVar28;
    if ((int)(*(int *)(param_1 + 1000) - uVar22) <= (int)(uint)lVar28) {
      uVar23 = *(int *)(param_1 + 1000) + ~uVar22;
    }
    if (0 < (int)uVar23) {
      (**(code **)(DAT_0528ce30 + 0x18))(&DAT_0528ce30);
      memcpy((void *)(lVar30 + (ulong)uVar22),DAT_0528ce38,(ulong)uVar23);
      *(undefined1 *)(lVar30 + (int)(uVar23 + uVar22)) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x72c) = 1;
  goto LAB_01772068;
LAB_01770100:
  lVar28 = lVar28 + 1;
  goto LAB_0177010c;
LAB_01770108:
  lVar28 = lVar28 + 2;
LAB_0177010c:
  FUN_038d0770(uVar44,0,uVar20,uVar45,lVar28,&DAT_0528c7e0,&DAT_0528c7f0,&local_198);
  goto LAB_0176ee64;
  while( true ) {
    lVar30 = 0;
    while (cVar9 = pcVar46[lVar30], cVar9 == local_178[lVar30]) {
      if ((cVar9 == '\0') || (bVar17 = lVar30 == 0x10, lVar30 = lVar30 + 1, bVar17))
      goto LAB_01770394;
    }
    uVar41 = uVar41 + 1;
    if (uVar41 == (int)lVar28 - 0x10) break;
LAB_01770338:
    pcVar46 = (char *)(*(long *)(param_1 + 0x3e0) + uVar41);
    (**(code **)(local_180 + 0x18))(&local_180);
    if (pcVar46 == local_178) {
LAB_01770394:
      if ((int)uVar41 != -1) {
        *(undefined1 *)(param_1 + 0xaf4) = 1;
        goto LAB_017714f8;
      }
      break;
    }
  }
LAB_0177039c:
  lVar28 = *(long *)PTR_DAT_04bb5ce0;
  if ((*(char *)(lVar28 + 0xe9e) == '\0') || (*(uint *)(lVar28 + 0xea0) != uVar22)) {
    lVar28 = lVar28 + 0xe78;
  }
  else {
    lVar28 = lVar28 + 0xe9c;
  }
  local_180._0_4_ = uVar22;
  FUN_007ef010(&local_198,lVar28);
  local_180 = (undefined *)CONCAT44(local_180._4_4_,uVar22);
  lVar28 = *(long *)PTR_DAT_04bb5ce0;
  if ((*(char *)(lVar28 + 0xe9e) == '\0') || (*(uint *)(lVar28 + 0xea0) != uVar22)) {
    piVar29 = (int *)(lVar28 + 0xf90);
  }
  else {
    piVar29 = (int *)(lVar28 + 0xf9c);
  }
  sVar11 = (short)local_198;
  if ((short)local_198 == *(short *)PTR_DAT_04bb3170) {
    if (*piVar29 != -1) {
      *(undefined1 *)(param_1 + 0x99a) = 1;
      uVar45 = *(undefined8 *)(param_1 + 0x348);
      local_180 = (undefined *)((ulong)local_180._1_7_ << 8);
      uVar20 = *(undefined4 *)(param_1 + 0x350);
      (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(lVar26);
      uVar44 = *(undefined8 *)(param_1 + 0x348);
      (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(lVar26);
      lVar28 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x348) + lVar28) == '\0') goto LAB_01770788;
        lVar30 = *(long *)(param_1 + 0x348) + lVar28;
        if (*(char *)(lVar30 + 1) == '\0') {
          lVar28 = lVar28 + 1;
          goto LAB_01770788;
        }
        if (*(char *)(lVar30 + 2) == '\0') {
          lVar28 = lVar28 + 2;
          goto LAB_01770788;
        }
        lVar28 = lVar28 + 3;
      } while (lVar28 != 0x80001);
      lVar28 = 0;
LAB_01770788:
      FUN_038d0770(uVar45,0,uVar20,uVar44,lVar28,&DAT_0528c7e0,&DAT_0528c7f0,&local_180);
      local_180 = (undefined *)((ulong)local_180 & 0xffffffffffffff00);
      uVar44 = *(undefined8 *)(param_1 + 0x3e0);
      uVar20 = *(undefined4 *)(param_1 + 1000);
      (**(code **)(*(long *)(param_1 + 0x3d8) + 0x18))(lVar6);
      uVar45 = *(undefined8 *)(param_1 + 0x3e0);
      (**(code **)(*(long *)(param_1 + 0x3d8) + 0x18))(lVar6);
      lVar28 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x3e0) + lVar28) == '\0') goto LAB_01770828;
        lVar30 = *(long *)(param_1 + 0x3e0) + lVar28;
        if (*(char *)(lVar30 + 1) == '\0') {
          lVar28 = lVar28 + 1;
          goto LAB_01770828;
        }
        if (*(char *)(lVar30 + 2) == '\0') {
          lVar28 = lVar28 + 2;
          goto LAB_01770828;
        }
        lVar28 = lVar28 + 3;
      } while (lVar28 != 0x80001);
      lVar28 = 0;
LAB_01770828:
      FUN_038d0770(uVar44,0,uVar20,uVar45,lVar28,&DAT_0528c7e0,&DAT_0528c7f0,&local_180);
      goto LAB_01770850;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x72d) = 1;
    uVar44 = *(undefined8 *)(param_1 + 0x348);
    uVar20 = *(undefined4 *)(param_1 + 0x350);
    local_180 = (undefined *)((ulong)local_180._1_7_ << 8);
    (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(lVar26);
    uVar45 = *(undefined8 *)(param_1 + 0x348);
    (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(lVar26);
    lVar28 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x348) + lVar28) == '\0') goto LAB_0177053c;
      lVar30 = *(long *)(param_1 + 0x348) + lVar28;
      if (*(char *)(lVar30 + 1) == '\0') {
        lVar28 = lVar28 + 1;
        goto LAB_0177053c;
      }
      if (*(char *)(lVar30 + 2) == '\0') {
        lVar28 = lVar28 + 2;
        goto LAB_0177053c;
      }
      lVar28 = lVar28 + 3;
    } while (lVar28 != 0x80001);
    lVar28 = 0;
LAB_0177053c:
    FUN_038d0770(uVar44,0,uVar20,uVar45,lVar28,&DAT_0528c7e0,&DAT_0528c7f0,&local_180);
    uVar44 = *(undefined8 *)(param_1 + 0x3e0);
    local_180 = (undefined *)((ulong)local_180 & 0xffffffffffffff00);
    uVar20 = *(undefined4 *)(param_1 + 1000);
    (**(code **)(*(long *)(param_1 + 0x3d8) + 0x18))(lVar6);
    uVar45 = *(undefined8 *)(param_1 + 0x3e0);
    (**(code **)(*(long *)(param_1 + 0x3d8) + 0x18))(lVar6);
    lVar28 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x3e0) + lVar28) == '\0') goto LAB_017705e0;
      lVar30 = *(long *)(param_1 + 0x3e0) + lVar28;
      if (*(char *)(lVar30 + 1) == '\0') {
        lVar28 = lVar28 + 1;
        goto LAB_017705e0;
      }
      if (*(char *)(lVar30 + 2) == '\0') {
        lVar28 = lVar28 + 2;
        goto LAB_017705e0;
      }
      lVar28 = lVar28 + 3;
    } while (lVar28 != 0x80001);
    lVar28 = 0;
LAB_017705e0:
    FUN_038d0770(uVar44,0,uVar20,uVar45,lVar28,&DAT_0528c7e0,&DAT_0528c7f0,&local_180);
    *(undefined4 *)(param_1 + 0x730) = 0;
    puVar35 = PTR_DAT_04bb3170;
    *(undefined8 *)(param_1 + 2000) = 0;
    *(short *)(param_1 + 0x758) = sVar11;
    uVar19 = *(undefined2 *)puVar35;
    *(long *)(param_1 + 0x760) = lVar27;
    *(short *)(param_1 + 0x75a) = sVar11;
    *(undefined2 *)(param_1 + 0x770) = uVar19;
    *(undefined2 *)(param_1 + 0x7a0) = uVar19;
    *(long *)(param_1 + 0x768) = lVar7;
    *(undefined2 *)(param_1 + 0x7d8) = 1;
LAB_01770850:
    lVar28 = *(long *)PTR_DAT_04bb5ce0;
    bVar17 = false;
    if (lVar28 != 0) {
      local_180 = (undefined *)CONCAT44(local_180._4_4_,uVar22);
      if (*(char *)(lVar28 + 0xe9e) == '\0') {
        bVar18 = *(byte *)(lVar28 + 0xedc);
      }
      else {
        bVar18 = *(byte *)(lVar28 + 0xedc);
        if (*(uint *)(lVar28 + 0xea0) == uVar22) {
          bVar17 = (char)bVar18 < '\0';
          goto LAB_0177089c;
        }
      }
      bVar17 = (bool)(bVar18 >> 4 & 1);
    }
LAB_0177089c:
    *(bool *)(param_1 + 0xad8) = bVar17;
  }
  pcVar46 = *(char **)(param_1 + 0xbe8);
  if ((*pcVar46 != '\0') &&
     ((*(char *)(param_1 + 0x72d) == '\0' || (*(char *)(param_1 + 0x99a) == '\0')))) {
    lVar28 = 0;
    do {
      if (pcVar46[lVar28] == '\0') goto LAB_017708fc;
      if (pcVar46[lVar28 + 1] == '\0') {
        lVar28 = lVar28 + 1;
        goto LAB_017708fc;
      }
      if (pcVar46[lVar28 + 2] == '\0') {
        lVar28 = lVar28 + 2;
        goto LAB_017708fc;
      }
      lVar28 = lVar28 + 3;
    } while (lVar28 != 0x80001);
    lVar28 = 0;
LAB_017708fc:
    (**(code **)(DAT_0528d020 + 0x18))(&DAT_0528d020);
    lVar30 = 0;
    do {
      iVar33 = (int)lVar28;
      if (DAT_0528d028[lVar30] == '\0') {
LAB_01770958:
        iVar24 = (int)lVar30;
        if (iVar33 < iVar24) goto LAB_017713f8;
        if (iVar24 < 1) goto LAB_017709ec;
        uVar41 = 0;
        pcVar31 = pcVar46;
        goto LAB_0177097c;
      }
      if (DAT_0528d028[lVar30 + 1] == '\0') {
        lVar30 = lVar30 + 1;
        goto LAB_01770958;
      }
      if (DAT_0528d028[lVar30 + 2] == '\0') {
        lVar30 = lVar30 + 2;
        goto LAB_01770958;
      }
      lVar30 = lVar30 + 3;
    } while (lVar30 != 0x80001);
    if (-1 < iVar33) {
LAB_017709ec:
      (**(code **)(DAT_0528d020 + 0x18))();
LAB_01770a10:
      pcVar31 = *(char **)(param_1 + 0x348);
      if (pcVar31 != pcVar46) {
        lVar28 = 0;
        do {
          if (pcVar46[lVar28] == '\0') goto LAB_01771290;
          if (pcVar46[lVar28 + 1] == '\0') {
            lVar28 = lVar28 + 1;
            goto LAB_01771290;
          }
          if (pcVar46[lVar28 + 2] == '\0') {
            lVar28 = lVar28 + 2;
            goto LAB_01771290;
          }
          lVar28 = lVar28 + 3;
        } while (lVar28 != 0x80001);
        lVar28 = 0;
LAB_01771290:
        iVar33 = (int)lVar28;
        if (*(int *)(param_1 + 0x350) <= (int)lVar28) {
          iVar33 = *(int *)(param_1 + 0x350) + -1;
        }
        memcpy(pcVar31,pcVar46,(long)iVar33);
        pcVar31[iVar33] = '\0';
      }
      pvVar42 = *(void **)(param_1 + 0x3e0);
      (**(code **)(*(long *)(param_1 + 0x2a8) + 0x18))(lVar25);
      pvVar40 = *(void **)(param_1 + 0x2b0);
      if (pvVar42 != pvVar40) {
        (**(code **)(*(long *)(param_1 + 0x2a8) + 0x18))(lVar25);
        lVar28 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0x2b0) + lVar28) == '\0') goto LAB_0177132c;
          lVar30 = *(long *)(param_1 + 0x2b0) + lVar28;
          if (*(char *)(lVar30 + 1) == '\0') {
            lVar28 = lVar28 + 1;
            goto LAB_0177132c;
          }
          if (*(char *)(lVar30 + 2) == '\0') {
            lVar28 = lVar28 + 2;
            goto LAB_0177132c;
          }
          lVar28 = lVar28 + 3;
        } while (lVar28 != 0x80001);
        lVar28 = 0;
LAB_0177132c:
        iVar33 = (int)lVar28;
        if (*(int *)(param_1 + 1000) <= (int)lVar28) {
          iVar33 = *(int *)(param_1 + 1000) + -1;
        }
        memcpy(pvVar42,pvVar40,(long)iVar33);
        *(undefined1 *)((long)pvVar42 + (long)iVar33) = 0;
      }
      local_180 = (undefined *)((ulong)local_180 & 0xffffffffffffff00);
      uVar45 = *(undefined8 *)(param_1 + 0x3e0);
      uVar20 = *(undefined4 *)(param_1 + 1000);
      (**(code **)(*(long *)(param_1 + 0x3d8) + 0x18))(lVar6);
      uVar44 = *(undefined8 *)(param_1 + 0x3e0);
      (**(code **)(*(long *)(param_1 + 0x3d8) + 0x18))(lVar6);
      lVar28 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x3e0) + lVar28) == '\0') goto LAB_017713cc;
        lVar30 = *(long *)(param_1 + 0x3e0) + lVar28;
        if (*(char *)(lVar30 + 1) == '\0') {
          lVar28 = lVar28 + 1;
          goto LAB_017713cc;
        }
        if (*(char *)(lVar30 + 2) == '\0') {
          lVar28 = lVar28 + 2;
          goto LAB_017713cc;
        }
        lVar28 = lVar28 + 3;
      } while (lVar28 != 0x80001);
      lVar28 = 0;
LAB_017713cc:
      FUN_038d0770(uVar45,0,uVar20,uVar44,lVar28,&DAT_0528ccc0,lVar26,&local_180);
      *(undefined1 *)(param_1 + 0x72c) = 1;
    }
  }
LAB_017713f8:
  if (*(char *)(param_1 + 0xaf4) == '\0') {
    local_bd = 0;
    local_140 = 0x80;
    local_178 = *(char **)(param_1 + 0x160);
    local_170 = *(float *)(param_1 + 0x168);
    local_b0 = 0;
    local_b4 = 0;
    local_150 = PTR_DAT_04bb2d88 + 0x10;
    local_180 = (undefined *)0x800000000;
    local_b8 = 7;
    local_164 = 0;
    iStack_160 = 0;
    local_15c = 0;
    local_158 = 0;
    local_16c = CONCAT44(*(undefined4 *)(param_1 + 0x170),0x3f800000);
    local_13c[0] = s_RoomMdlArch_ARCH__04091cdb[0];
    acStack_134[0] = s_RoomMdlArch_ARCH__04091cdb[8];
    acStack_134[1] = s_RoomMdlArch_ARCH__04091cdb[9];
    acStack_134[2] = s_RoomMdlArch_ARCH__04091cdb[10];
    acStack_134[3] = s_RoomMdlArch_ARCH__04091cdb[0xb];
    acStack_134[4] = s_RoomMdlArch_ARCH__04091cdb[0xc];
    acStack_134[5] = s_RoomMdlArch_ARCH__04091cdb[0xd];
    acStack_134[6] = s_RoomMdlArch_ARCH__04091cdb[0xe];
    acStack_134[7] = s_RoomMdlArch_ARCH__04091cdb[0xf];
    cStack_12b = '\0';
    local_148 = local_13c;
    uVar20 = FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_180,
                          *(undefined4 *)(param_1 + 0x230),0);
    pcVar46 = local_148;
    *(undefined4 *)(param_1 + 0xaec) = uVar20;
    if (local_148 != "RoomMdlEntranceBothCover/ENTRANCE:") {
      iVar33 = 0x22;
      if (local_140 < 0x23) {
        iVar33 = local_140 + -1;
      }
      memcpy(local_148,"RoomMdlEntranceBothCover/ENTRANCE:",(long)iVar33);
      pcVar46[iVar33] = '\0';
    }
    uVar20 = FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_180,
                          *(undefined4 *)(param_1 + 0x230),0);
    *(undefined4 *)(param_1 + 0xaf0) = uVar20;
  }
LAB_017714f8:
  fVar47 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x170));
  fVar47 = fVar47 * 8.381903e-08;
  bVar17 = false;
  bVar14 = false;
  bVar15 = false;
  if (45.0 <= fVar47) {
    bVar17 = false;
    bVar14 = false;
    bVar15 = true;
    if (!NAN(fVar47)) {
      bVar17 = fVar47 < 315.0;
      bVar14 = fVar47 == 315.0;
      bVar15 = false;
    }
  }
  if (bVar14 || bVar17 != bVar15) {
    bVar17 = false;
    if ((45.0 <= fVar47) && (bVar17 = false, !NAN(fVar47))) {
      bVar17 = fVar47 < 135.0;
    }
    if (!bVar17) {
      uVar22 = (uint)(fVar47 < 135.0);
      if (225.0 <= fVar47) {
        uVar22 = 1;
      }
      goto LAB_01771574;
    }
    uVar22 = 3;
    if (*(char *)(param_1 + 0x6e8) != '\0') {
      uVar22 = 1;
    }
  }
  else {
    uVar22 = 2;
LAB_01771574:
    if (*(char *)(param_1 + 0x6e8) != '\0') {
      uVar22 = *(uint *)(&DAT_04130c24 + (ulong)uVar22 * 4);
    }
  }
  uVar44 = *(undefined8 *)PTR_DAT_04bb46d0;
  uVar20 = FUN_017f1348(*(long *)PTR_DAT_04bb5ce0 + 0xda0,uVar22);
  pvVar40 = (void *)FUN_017c1960(uVar44,uVar20);
  pvVar42 = *(void **)(param_1 + 0x5a8);
  if (pvVar42 != pvVar40) {
    lVar28 = 0;
    do {
      if (*(char *)((long)pvVar40 + lVar28) == '\0') goto LAB_01771610;
      if (*(char *)((long)pvVar40 + lVar28 + 1) == '\0') {
        lVar28 = lVar28 + 1;
        goto LAB_01771610;
      }
      if (*(char *)((long)pvVar40 + lVar28 + 2) == '\0') {
        lVar28 = lVar28 + 2;
        goto LAB_01771610;
      }
      lVar28 = lVar28 + 3;
    } while (lVar28 != 0x80001);
    lVar28 = 0;
LAB_01771610:
    iVar33 = (int)lVar28;
    if (*(int *)(param_1 + 0x5b0) <= (int)lVar28) {
      iVar33 = *(int *)(param_1 + 0x5b0) + -1;
    }
    memcpy(pvVar42,pvVar40,(long)iVar33);
    *(undefined1 *)((long)pvVar42 + (long)iVar33) = 0;
  }
  goto LAB_0176ee64;
  while( true ) {
    pcVar43 = DAT_0528d028;
    pcVar37 = pcVar31;
    lVar28 = lVar30;
    while( true ) {
      lVar28 = lVar28 + -1;
      if (*pcVar37 != *pcVar43) break;
      if (*pcVar37 == '\0') goto LAB_01770a04;
      pcVar43 = pcVar43 + 1;
      pcVar37 = pcVar37 + 1;
      if (lVar28 == 0) goto LAB_01770a04;
    }
    uVar41 = uVar41 + 1;
    pcVar31 = pcVar31 + 1;
    if (uVar41 == (iVar33 - iVar24) + 1) break;
LAB_0177097c:
    (**(code **)(DAT_0528d020 + 0x18))(&DAT_0528d020);
    if (pcVar46 + uVar41 == DAT_0528d028) {
LAB_01770a04:
      if ((int)uVar41 != -1) goto LAB_01770a10;
      break;
    }
  }
  goto LAB_017713f8;
  while (uVar41 = uVar41 + 1, (int)lVar28 - 1 != uVar41) {
LAB_01770a84:
    pcVar46 = (char *)(*(long *)(param_1 + 0x2b0) + uVar41);
    (**(code **)(local_180 + 0x18))(&local_180);
    if ((pcVar46 == local_178) ||
       ((*pcVar46 == *local_178 && ((*pcVar46 == '\0' || (pcVar46[1] == local_178[1])))))) {
      bVar17 = (int)uVar41 != -1;
      goto LAB_01770ad4;
    }
  }
LAB_01770a64:
  bVar17 = false;
LAB_01770ad4:
  fVar47 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x170));
  fVar47 = fVar47 * 8.381903e-08;
  bVar14 = false;
  bVar15 = false;
  bVar16 = false;
  if (45.0 <= fVar47) {
    bVar14 = false;
    bVar15 = false;
    bVar16 = true;
    if (!NAN(fVar47)) {
      bVar14 = fVar47 < 315.0;
      bVar15 = fVar47 == 315.0;
      bVar16 = false;
    }
  }
  if (bVar15 || bVar14 != bVar16) {
    bVar14 = false;
    if ((45.0 <= fVar47) && (bVar14 = false, !NAN(fVar47))) {
      bVar14 = fVar47 < 135.0;
    }
    if (!bVar14) {
      uVar22 = (uint)(fVar47 < 135.0);
      if (225.0 <= fVar47) {
        uVar22 = 1;
      }
      goto LAB_01770b44;
    }
    uVar22 = 3;
    if (*(char *)(param_1 + 0x6e8) != '\0') {
      uVar22 = 1;
    }
  }
  else {
    uVar22 = 2;
LAB_01770b44:
    if (*(char *)(param_1 + 0x6e8) != '\0') {
      uVar22 = *(uint *)(&DAT_04130c24 + (ulong)uVar22 * 4);
    }
  }
  uVar20 = FUN_017f827c(*(long *)PTR_DAT_04bb5ce0 + 0xda0,uVar22);
  local_198 = (undefined *)CONCAT44(local_198._4_4_,uVar20);
  switch(uVar20) {
  case 0:
    __dest = *(undefined1 **)(param_1 + 0x348);
    if (bVar17) {
      *__dest = 0;
      **(undefined1 **)(param_1 + 0x3e0) = 0;
      uVar23 = *(uint *)(param_1 + 0x170);
      pfVar1 = (float *)(PTR_DAT_04bb2d00 + (ulong)(uVar23 + 0xc0000000 >> 0x18) * 0x10);
      *(undefined4 *)(param_1 + 0x638) = 0xc;
      puVar35 = PTR_DAT_04bb27c0;
      local_180 = (undefined1 *)0x800000000;
      local_140 = 0x80;
      iVar33 = *(int *)(param_1 + 0x174);
      iVar24 = *(int *)(param_1 + 0x178);
      local_bd = 0;
      local_b0 = 0;
      local_b4 = 0;
      cStack_12b = '\0';
      local_158 = 0;
      fVar47 = (float)(uVar23 & 0xffffff) * 5.9604645e-08;
      local_150 = PTR_DAT_04bb2d88 + 0x10;
      local_b8 = 7;
      local_13c[0] = s_RoomMdlWall_WALL__0407220a[0];
      acStack_134[0] = s_RoomMdlWall_WALL__0407220a[8];
      acStack_134[1] = s_RoomMdlWall_WALL__0407220a[9];
      acStack_134[2] = s_RoomMdlWall_WALL__0407220a[10];
      acStack_134[3] = s_RoomMdlWall_WALL__0407220a[0xb];
      acStack_134[4] = s_RoomMdlWall_WALL__0407220a[0xc];
      acStack_134[5] = s_RoomMdlWall_WALL__0407220a[0xd];
      acStack_134[6] = s_RoomMdlWall_WALL__0407220a[0xe];
      acStack_134[7] = s_RoomMdlWall_WALL__0407220a[0xf];
      local_15c = *(undefined4 *)(param_1 + 0x17c);
      local_16c = CONCAT44(uVar23,0x3f800000);
      fVar49 = *(float *)(param_1 + 0x164) + 0.0;
      fVar48 = (*pfVar1 + fVar47 * pfVar1[1]) * 10.0;
      fVar47 = (pfVar1[2] + fVar47 * pfVar1[3]) * 10.0;
      fVar50 = *(float *)(param_1 + 0x160) + fVar48;
      fVar51 = *(float *)(param_1 + 0x168) + fVar47;
      local_178 = (char *)CONCAT44(fVar49,fVar50);
      local_170 = fVar51;
      local_164 = iVar33;
      iStack_160 = iVar24;
      local_148 = local_13c;
      uVar20 = FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_180,
                            *(undefined4 *)(param_1 + 0x230),0);
      iStack_160 = iVar24 * 2 - iVar33;
      *(undefined4 *)(param_1 + 0x700) = uVar20;
      local_15c = *(undefined4 *)(param_1 + 0x17c);
      local_170 = fVar51 - (fVar47 + fVar47);
      local_178 = (char *)CONCAT44(fVar49,fVar50 - (fVar48 + fVar48));
      local_164 = iVar24;
      uVar20 = FUN_007402e0(*(undefined8 *)puVar35,&local_180,*(undefined4 *)(param_1 + 0x230),0);
      *(undefined4 *)(param_1 + 0x704) = uVar20;
      break;
    }
    (**(code **)(DAT_0528cdd0 + 0x18))(&DAT_0528cdd0);
    __src = DAT_0528cdd8;
    if (__dest != DAT_0528cdd8) {
      (**(code **)(DAT_0528cdd0 + 0x18))(&DAT_0528cdd0);
      lVar28 = 0;
      do {
        if (DAT_0528cdd8[lVar28] == '\0') goto LAB_017722c4;
        if (DAT_0528cdd8[lVar28 + 1] == '\0') {
          lVar28 = lVar28 + 1;
          goto LAB_017722c4;
        }
        if (DAT_0528cdd8[lVar28 + 2] == '\0') {
          lVar28 = lVar28 + 2;
          goto LAB_017722c4;
        }
        lVar28 = lVar28 + 3;
      } while (lVar28 != 0x80001);
      lVar28 = 0;
LAB_017722c4:
      iVar33 = (int)lVar28;
      if (*(int *)(param_1 + 0x350) <= (int)lVar28) {
        iVar33 = *(int *)(param_1 + 0x350) + -1;
      }
      memcpy(__dest,__src,(long)iVar33);
      __dest[iVar33] = 0;
    }
    pvVar42 = *(void **)(param_1 + 0x3e0);
    (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(lVar26);
    pvVar40 = *(void **)(param_1 + 0x348);
    if (pvVar42 != pvVar40) {
      (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(lVar26);
      lVar28 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x348) + lVar28) == '\0') goto LAB_01772364;
        lVar30 = *(long *)(param_1 + 0x348) + lVar28;
        if (*(char *)(lVar30 + 1) == '\0') {
          lVar28 = lVar28 + 1;
          goto LAB_01772364;
        }
        if (*(char *)(lVar30 + 2) == '\0') {
          lVar28 = lVar28 + 2;
          goto LAB_01772364;
        }
        lVar28 = lVar28 + 3;
      } while (lVar28 != 0x80001);
      lVar28 = 0;
LAB_01772364:
      iVar33 = (int)lVar28;
      if (*(int *)(param_1 + 1000) <= (int)lVar28) {
        iVar33 = *(int *)(param_1 + 1000) + -1;
      }
      memcpy(pvVar42,pvVar40,(long)iVar33);
      *(undefined1 *)((long)pvVar42 + (long)iVar33) = 0;
    }
    *(undefined4 *)(param_1 + 0x638) = 1;
    goto LAB_01772394;
  case 1:
    pcVar46 = *(char **)(param_1 + 0x348);
    if (bVar17) {
      if (pcVar46 != "RoomMdlWindowWallSquare4m") {
        iVar33 = 0x19;
        if (*(int *)(param_1 + 0x350) < 0x1a) {
          iVar33 = *(int *)(param_1 + 0x350) + -1;
        }
        memcpy(pcVar46,"RoomMdlWindowWallSquare4m",(long)iVar33);
        pcVar46[iVar33] = '\0';
      }
      pvVar42 = *(void **)(param_1 + 0x3e0);
      (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(lVar26);
      pvVar40 = *(void **)(param_1 + 0x348);
      if (pvVar42 != pvVar40) {
        (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(lVar26);
        lVar28 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0x348) + lVar28) == '\0') goto LAB_01771644;
          lVar30 = *(long *)(param_1 + 0x348) + lVar28;
          if (*(char *)(lVar30 + 1) == '\0') goto LAB_01771638;
          if (*(char *)(lVar30 + 2) == '\0') goto LAB_01771640;
          lVar28 = lVar28 + 3;
        } while (lVar28 != 0x80001);
        goto LAB_01771284;
      }
    }
    else {
      if (pcVar46 != "RoomMdlWindowWallSquare2m") {
        iVar33 = 0x19;
        if (*(int *)(param_1 + 0x350) < 0x1a) {
          iVar33 = *(int *)(param_1 + 0x350) + -1;
        }
        memcpy(pcVar46,"RoomMdlWindowWallSquare2m",(long)iVar33);
        pcVar46[iVar33] = '\0';
      }
      pvVar42 = *(void **)(param_1 + 0x3e0);
      (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(lVar26);
      pvVar40 = *(void **)(param_1 + 0x348);
      if (pvVar42 != pvVar40) {
        (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(lVar26);
        lVar28 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0x348) + lVar28) == '\0') goto LAB_01771644;
          lVar30 = *(long *)(param_1 + 0x348) + lVar28;
          if (*(char *)(lVar30 + 1) == '\0') goto LAB_01771638;
          if (*(char *)(lVar30 + 2) == '\0') goto LAB_01771640;
          lVar28 = lVar28 + 3;
        } while (lVar28 != 0x80001);
LAB_01771284:
        lVar28 = 0;
        goto LAB_01771644;
      }
    }
    break;
  case 2:
    pcVar46 = *(char **)(param_1 + 0x348);
    if (bVar17) {
      if (pcVar46 != "RoomMdlWindowWallCircle4m") {
        iVar33 = 0x19;
        if (*(int *)(param_1 + 0x350) < 0x1a) {
          iVar33 = *(int *)(param_1 + 0x350) + -1;
        }
        memcpy(pcVar46,"RoomMdlWindowWallCircle4m",(long)iVar33);
        pcVar46[iVar33] = '\0';
      }
      pvVar42 = *(void **)(param_1 + 0x3e0);
      (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(lVar26);
      pvVar40 = *(void **)(param_1 + 0x348);
      if (pvVar42 != pvVar40) {
        (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(lVar26);
        lVar28 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0x348) + lVar28) == '\0') goto LAB_01771644;
          lVar30 = *(long *)(param_1 + 0x348) + lVar28;
          if (*(char *)(lVar30 + 1) == '\0') goto LAB_01771638;
          if (*(char *)(lVar30 + 2) == '\0') goto LAB_01771640;
          lVar28 = lVar28 + 3;
        } while (lVar28 != 0x80001);
        goto LAB_01771284;
      }
    }
    else {
      if (pcVar46 != "RoomMdlWindowWallCircle2m") {
        iVar33 = 0x19;
        if (*(int *)(param_1 + 0x350) < 0x1a) {
          iVar33 = *(int *)(param_1 + 0x350) + -1;
        }
        memcpy(pcVar46,"RoomMdlWindowWallCircle2m",(long)iVar33);
        pcVar46[iVar33] = '\0';
      }
      pvVar42 = *(void **)(param_1 + 0x3e0);
      (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(lVar26);
      pvVar40 = *(void **)(param_1 + 0x348);
      if (pvVar42 != pvVar40) {
        (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(lVar26);
        lVar28 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0x348) + lVar28) == '\0') goto LAB_01771644;
          lVar30 = *(long *)(param_1 + 0x348) + lVar28;
          if (*(char *)(lVar30 + 1) == '\0') goto LAB_01771638;
          if (*(char *)(lVar30 + 2) == '\0') goto LAB_01771640;
          lVar28 = lVar28 + 3;
        } while (lVar28 != 0x80001);
        goto LAB_01771284;
      }
    }
    break;
  case 3:
    pcVar46 = *(char **)(param_1 + 0x348);
    if (bVar17) {
      if (pcVar46 != "RoomMdlWindowWallArch4m") {
        iVar33 = 0x17;
        if (*(int *)(param_1 + 0x350) < 0x18) {
          iVar33 = *(int *)(param_1 + 0x350) + -1;
        }
        memcpy(pcVar46,"RoomMdlWindowWallArch4m",(long)iVar33);
        pcVar46[iVar33] = '\0';
      }
      pvVar42 = *(void **)(param_1 + 0x3e0);
      (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(lVar26);
      pvVar40 = *(void **)(param_1 + 0x348);
      if (pvVar42 != pvVar40) {
        (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(lVar26);
        lVar28 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0x348) + lVar28) == '\0') goto LAB_01771644;
          lVar30 = *(long *)(param_1 + 0x348) + lVar28;
          if (*(char *)(lVar30 + 1) == '\0') goto LAB_01771638;
          if (*(char *)(lVar30 + 2) == '\0') goto LAB_01771640;
          lVar28 = lVar28 + 3;
        } while (lVar28 != 0x80001);
        goto LAB_01771284;
      }
    }
    else {
      if (pcVar46 != "RoomMdlWindowWallArch2m") {
        iVar33 = 0x17;
        if (*(int *)(param_1 + 0x350) < 0x18) {
          iVar33 = *(int *)(param_1 + 0x350) + -1;
        }
        memcpy(pcVar46,"RoomMdlWindowWallArch2m",(long)iVar33);
        pcVar46[iVar33] = '\0';
      }
      pvVar42 = *(void **)(param_1 + 0x3e0);
      (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(lVar26);
      pvVar40 = *(void **)(param_1 + 0x348);
      if (pvVar42 != pvVar40) {
        (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(lVar26);
        lVar28 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0x348) + lVar28) == '\0') goto LAB_01771644;
          lVar30 = *(long *)(param_1 + 0x348) + lVar28;
          if (*(char *)(lVar30 + 1) == '\0') goto LAB_01771638;
          if (*(char *)(lVar30 + 2) == '\0') goto LAB_01771640;
          lVar28 = lVar28 + 3;
        } while (lVar28 != 0x80001);
        goto LAB_01771284;
      }
    }
  }
  goto switchD_01770bac_default;
LAB_01771638:
  lVar28 = lVar28 + 1;
  goto LAB_01771644;
LAB_01771640:
  lVar28 = lVar28 + 2;
LAB_01771644:
  iVar33 = (int)lVar28;
  if (*(int *)(param_1 + 1000) <= (int)lVar28) {
    iVar33 = *(int *)(param_1 + 1000) + -1;
  }
  memcpy(pvVar42,pvVar40,(long)iVar33);
  *(undefined1 *)((long)pvVar42 + (long)iVar33) = 0;
switchD_01770bac_default:
  if (*(int *)(param_1 + 0x638) == 6) {
    local_bd = 0;
    local_13c[0] = '\0';
    local_178 = (char *)0x0;
    local_170 = 0.0;
    local_16c = 0x3f800000;
    local_140 = 0x80;
    local_180 = &DAT_ffffffff00000000;
    local_b0 = 0;
    local_b4 = 0;
    local_150 = PTR_DAT_04bb2d88 + 0x10;
    fVar47 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x170));
    local_b8 = 7;
    local_164 = 0;
    iStack_160 = 0;
    local_15c = 0;
    local_158 = 0;
    fVar47 = fVar47 * 8.381903e-08;
    bVar17 = false;
    bVar14 = false;
    bVar15 = false;
    if (45.0 <= fVar47) {
      bVar17 = false;
      bVar14 = false;
      bVar15 = true;
      if (!NAN(fVar47)) {
        bVar17 = fVar47 < 315.0;
        bVar14 = fVar47 == 315.0;
        bVar15 = false;
      }
    }
    if (bVar14 || bVar17 != bVar15) {
      bVar17 = false;
      if ((45.0 <= fVar47) && (bVar17 = false, !NAN(fVar47))) {
        bVar17 = fVar47 < 135.0;
      }
      if (!bVar17) {
        uVar23 = (uint)(fVar47 < 135.0);
        if (225.0 <= fVar47) {
          uVar23 = 1;
        }
        uVar41 = (ulong)uVar23;
        goto LAB_01771748;
      }
      uVar23 = 3;
      if (*(char *)(param_1 + 0x6e8) != '\0') {
        uVar23 = 1;
      }
      uVar41 = (ulong)uVar23;
    }
    else {
      uVar41 = 2;
LAB_01771748:
      if (*(char *)(param_1 + 0x6e8) != '\0') {
        uVar41 = (ulong)*(uint *)(&DAT_04130c24 + uVar41 * 4);
      }
    }
    local_148 = local_13c;
    lVar28 = FUN_017f8364(*(long *)PTR_DAT_04bb5ce0 + 0xda0,uVar41);
    pcVar46 = local_148;
    if (lVar28 != 0) {
      local_170 = *(float *)(param_1 + 0x168);
      local_180 = (undefined *)CONCAT44(8,(uint)local_180);
      local_178 = *(char **)(param_1 + 0x160);
      local_16c = CONCAT44(*(undefined4 *)(param_1 + 0x170),(undefined4)local_16c);
      if (local_148 != "RoomMdlWindowNml/WINDOW:") {
        iVar33 = 0x18;
        if (local_140 < 0x19) {
          iVar33 = local_140 + -1;
        }
        memcpy(local_148,"RoomMdlWindowNml/WINDOW:",(long)iVar33);
        pcVar46[iVar33] = '\0';
      }
      uVar20 = FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_180,
                            *(undefined4 *)(param_1 + 0x230),0);
      pcVar46 = local_148;
      *(undefined4 *)(param_1 + 0xadc) = uVar20;
      if (local_148 != "RoomMdlWindowNml/SUBWINDOW:") {
        iVar33 = 0x1b;
        if (local_140 < 0x1c) {
          iVar33 = local_140 + -1;
        }
        memcpy(local_148,"RoomMdlWindowNml/SUBWINDOW:",(long)iVar33);
        pcVar46[iVar33] = '\0';
      }
      uVar20 = FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_180,
                            *(undefined4 *)(param_1 + 0x230),0);
      pcVar46 = local_148;
      *(undefined4 *)(param_1 + 0xae0) = uVar20;
      if (local_148 != "RoomMdlEnv/ENV:") {
        iVar33 = 0xf;
        if (local_140 < 0x10) {
          iVar33 = local_140 + -1;
        }
        memcpy(local_148,"RoomMdlEnv/ENV:",(long)iVar33);
        pcVar46[iVar33] = '\0';
      }
      uVar20 = FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_180,
                            *(undefined4 *)(param_1 + 0x230),0);
      pcVar46 = local_148;
      *(undefined4 *)(param_1 + 0xae8) = uVar20;
      if (local_148 != "RoomMdlCurtainNml/CURTAIN:") {
        iVar33 = 0x1a;
        if (local_140 < 0x1b) {
          iVar33 = local_140 + -1;
        }
        memcpy(local_148,"RoomMdlCurtainNml/CURTAIN:",(long)iVar33);
        pcVar46[iVar33] = '\0';
      }
      uVar20 = FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_180,
                            *(undefined4 *)(param_1 + 0x230),0);
      *(undefined4 *)(param_1 + 0xae4) = uVar20;
    }
  }
LAB_01772394:
  lVar28 = *(long *)PTR_DAT_04bb5ce0;
  if ((*(char *)(lVar28 + 0xe9e) == '\0') || (*(uint *)(lVar28 + 0xea0) != uVar22)) {
    lVar28 = lVar28 + 0xe78;
  }
  else {
    lVar28 = lVar28 + 0xe9c;
  }
  local_180._0_4_ = uVar22;
  FUN_007ef010(local_184,lVar28);
  uVar10 = local_184[0];
  local_180 = (undefined *)CONCAT44(local_180._4_4_,uVar22);
  lVar28 = *(long *)PTR_DAT_04bb5ce0;
  if ((*(char *)(lVar28 + 0xe9e) == '\0') || (*(uint *)(lVar28 + 0xea0) != uVar22)) {
    piVar29 = (int *)(lVar28 + 0xf90);
  }
  else {
    piVar29 = (int *)(lVar28 + 0xf9c);
  }
  if (local_184[0] == *(ushort *)PTR_DAT_04bb3170) {
    if (*piVar29 != -1) {
      local_180 = (undefined *)((ulong)local_180._1_7_ << 8);
      *(undefined1 *)(param_1 + 0x99a) = 1;
      uVar45 = *(undefined8 *)(param_1 + 0x348);
      uVar20 = *(undefined4 *)(param_1 + 0x350);
      (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(lVar26);
      uVar44 = *(undefined8 *)(param_1 + 0x348);
      (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(lVar26);
      lVar28 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x348) + lVar28) == '\0') goto LAB_0177263c;
        lVar30 = *(long *)(param_1 + 0x348) + lVar28;
        if (*(char *)(lVar30 + 1) == '\0') {
          lVar28 = lVar28 + 1;
          goto LAB_0177263c;
        }
        if (*(char *)(lVar30 + 2) == '\0') {
          lVar28 = lVar28 + 2;
          goto LAB_0177263c;
        }
        lVar28 = lVar28 + 3;
      } while (lVar28 != 0x80001);
      lVar28 = 0;
LAB_0177263c:
      FUN_038d0770(uVar45,0,uVar20,uVar44,lVar28,&DAT_0528c7e0,&DAT_0528c7f0,&local_180);
      local_180 = (undefined *)((ulong)local_180 & 0xffffffffffffff00);
      uVar44 = *(undefined8 *)(param_1 + 0x3e0);
      uVar20 = *(undefined4 *)(param_1 + 1000);
      (**(code **)(*(long *)(param_1 + 0x3d8) + 0x18))(lVar6);
      uVar45 = *(undefined8 *)(param_1 + 0x3e0);
      (**(code **)(*(long *)(param_1 + 0x3d8) + 0x18))(lVar6);
      lVar28 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x3e0) + lVar28) == '\0') goto LAB_017726dc;
        lVar30 = *(long *)(param_1 + 0x3e0) + lVar28;
        if (*(char *)(lVar30 + 1) == '\0') {
          lVar28 = lVar28 + 1;
          goto LAB_017726dc;
        }
        if (*(char *)(lVar30 + 2) == '\0') {
          lVar28 = lVar28 + 2;
          goto LAB_017726dc;
        }
        lVar28 = lVar28 + 3;
      } while (lVar28 != 0x80001);
      lVar28 = 0;
LAB_017726dc:
      FUN_038d0770(uVar44,0,uVar20,uVar45,lVar28,&DAT_0528c7e0,&DAT_0528c7f0,&local_180);
      goto LAB_01772708;
    }
  }
  else {
    local_180 = (undefined *)((ulong)local_180._1_7_ << 8);
    *(undefined1 *)(param_1 + 0x72d) = 1;
    uVar44 = *(undefined8 *)(param_1 + 0x348);
    uVar20 = *(undefined4 *)(param_1 + 0x350);
    (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(lVar26);
    uVar45 = *(undefined8 *)(param_1 + 0x348);
    (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(lVar26);
    lVar28 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x348) + lVar28) == '\0') goto LAB_01772520;
      lVar30 = *(long *)(param_1 + 0x348) + lVar28;
      if (*(char *)(lVar30 + 1) == '\0') {
        lVar28 = lVar28 + 1;
        goto LAB_01772520;
      }
      if (*(char *)(lVar30 + 2) == '\0') {
        lVar28 = lVar28 + 2;
        goto LAB_01772520;
      }
      lVar28 = lVar28 + 3;
    } while (lVar28 != 0x80001);
    lVar28 = 0;
LAB_01772520:
    FUN_038d0770(uVar44,0,uVar20,uVar45,lVar28,&DAT_0528c7e0,&DAT_0528c7f0,&local_180);
    uVar44 = *(undefined8 *)(param_1 + 0x3e0);
    local_180 = (undefined *)((ulong)local_180 & 0xffffffffffffff00);
    uVar20 = *(undefined4 *)(param_1 + 1000);
    (**(code **)(*(long *)(param_1 + 0x3d8) + 0x18))(lVar6);
    uVar45 = *(undefined8 *)(param_1 + 0x3e0);
    (**(code **)(*(long *)(param_1 + 0x3d8) + 0x18))(lVar6);
    lVar28 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x3e0) + lVar28) == '\0') goto LAB_017725c4;
      lVar30 = *(long *)(param_1 + 0x3e0) + lVar28;
      if (*(char *)(lVar30 + 1) == '\0') {
        lVar28 = lVar28 + 1;
        goto LAB_017725c4;
      }
      if (*(char *)(lVar30 + 2) == '\0') {
        lVar28 = lVar28 + 2;
        goto LAB_017725c4;
      }
      lVar28 = lVar28 + 3;
    } while (lVar28 != 0x80001);
    lVar28 = 0;
LAB_017725c4:
    FUN_038d0770(uVar44,0,uVar20,uVar45,lVar28,&DAT_0528c7e0,&DAT_0528c7f0,&local_180);
    *(undefined4 *)(param_1 + 0x730) = 0;
    puVar35 = PTR_DAT_04bb3170;
    *(undefined8 *)(param_1 + 2000) = 0;
    *(ushort *)(param_1 + 0x758) = uVar10;
    uVar19 = *(undefined2 *)puVar35;
    *(long *)(param_1 + 0x760) = lVar27;
    *(ushort *)(param_1 + 0x75a) = uVar10;
    *(undefined2 *)(param_1 + 0x770) = uVar19;
    *(undefined2 *)(param_1 + 0x7a0) = uVar19;
    *(long *)(param_1 + 0x768) = lVar7;
    *(undefined2 *)(param_1 + 0x7d8) = 1;
LAB_01772708:
    lVar28 = *(long *)PTR_DAT_04bb5ce0;
    bVar17 = false;
    if (lVar28 != 0) {
      local_180 = (undefined *)CONCAT44(local_180._4_4_,uVar22);
      if (*(char *)(lVar28 + 0xe9e) == '\0') {
        bVar18 = *(byte *)(lVar28 + 0xedc);
      }
      else {
        bVar18 = *(byte *)(lVar28 + 0xedc);
        if (*(uint *)(lVar28 + 0xea0) == uVar22) {
          bVar17 = (char)bVar18 < '\0';
          goto LAB_01772750;
        }
      }
      bVar17 = (bool)(bVar18 >> 4 & 1);
    }
LAB_01772750:
    *(bool *)(param_1 + 0xad8) = bVar17;
  }
  pcVar46 = *(char **)(param_1 + 0xbe8);
  if ((*pcVar46 != '\0') &&
     ((*(char *)(param_1 + 0x72d) == '\0' || (*(char *)(param_1 + 0x99a) == '\0')))) {
    lVar28 = 0;
    do {
      if (pcVar46[lVar28] == '\0') goto LAB_017727b0;
      if (pcVar46[lVar28 + 1] == '\0') {
        lVar28 = lVar28 + 1;
        goto LAB_017727b0;
      }
      if (pcVar46[lVar28 + 2] == '\0') {
        lVar28 = lVar28 + 2;
        goto LAB_017727b0;
      }
      lVar28 = lVar28 + 3;
    } while (lVar28 != 0x80001);
    lVar28 = 0;
LAB_017727b0:
    (**(code **)(DAT_0528d020 + 0x18))(&DAT_0528d020);
    lVar30 = 0;
    do {
      iVar33 = (int)lVar28;
      if (DAT_0528d028[lVar30] == '\0') {
LAB_0177280c:
        iVar24 = (int)lVar30;
        if (iVar33 < iVar24) goto LAB_0176ee64;
        if (iVar24 < 1) goto LAB_017728a0;
        uVar41 = 0;
        pcVar31 = pcVar46;
        goto LAB_01772830;
      }
      if (DAT_0528d028[lVar30 + 1] == '\0') {
        lVar30 = lVar30 + 1;
        goto LAB_0177280c;
      }
      if (DAT_0528d028[lVar30 + 2] == '\0') {
        lVar30 = lVar30 + 2;
        goto LAB_0177280c;
      }
      lVar30 = lVar30 + 3;
    } while (lVar30 != 0x80001);
    if (-1 < iVar33) {
LAB_017728a0:
      (**(code **)(DAT_0528d020 + 0x18))();
LAB_017728c4:
      pcVar31 = *(char **)(param_1 + 0x3e0);
      if (*pcVar31 != '\0') {
        pcVar43 = *(char **)(param_1 + 0x348);
        if (pcVar43 != pcVar46) {
          lVar28 = 0;
          do {
            if (pcVar46[lVar28] == '\0') goto LAB_01772928;
            if (pcVar46[lVar28 + 1] == '\0') {
              lVar28 = lVar28 + 1;
              goto LAB_01772928;
            }
            if (pcVar46[lVar28 + 2] == '\0') {
              lVar28 = lVar28 + 2;
              goto LAB_01772928;
            }
            lVar28 = lVar28 + 3;
          } while (lVar28 != 0x80001);
          lVar28 = 0;
LAB_01772928:
          iVar33 = (int)lVar28;
          if (*(int *)(param_1 + 0x350) <= (int)lVar28) {
            iVar33 = *(int *)(param_1 + 0x350) + -1;
          }
          memcpy(pcVar43,pcVar46,(long)iVar33);
          pcVar43[iVar33] = '\0';
          pcVar31 = *(char **)(param_1 + 0x3e0);
        }
        local_180 = (undefined *)((ulong)local_180 & 0xffffffffffffff00);
        uVar20 = *(undefined4 *)(param_1 + 1000);
        (**(code **)(*(long *)(param_1 + 0x3d8) + 0x18))(lVar6);
        uVar44 = *(undefined8 *)(param_1 + 0x3e0);
        (**(code **)(*(long *)(param_1 + 0x3d8) + 0x18))(lVar6);
        lVar28 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0x3e0) + lVar28) == '\0') goto LAB_017729c8;
          lVar30 = *(long *)(param_1 + 0x3e0) + lVar28;
          if (*(char *)(lVar30 + 1) == '\0') {
            lVar28 = lVar28 + 1;
            goto LAB_017729c8;
          }
          if (*(char *)(lVar30 + 2) == '\0') {
            lVar28 = lVar28 + 2;
            goto LAB_017729c8;
          }
          lVar28 = lVar28 + 3;
        } while (lVar28 != 0x80001);
        lVar28 = 0;
LAB_017729c8:
        FUN_038d0770(pcVar31,0,uVar20,uVar44,lVar28,&DAT_0528ccc0,lVar26,&local_180);
        *(undefined1 *)(param_1 + 0x72c) = 1;
      }
    }
  }
  goto LAB_0176ee64;
  while( true ) {
    pcVar43 = DAT_0528d028;
    pcVar37 = pcVar31;
    lVar28 = lVar30;
    while( true ) {
      lVar28 = lVar28 + -1;
      if (*pcVar37 != *pcVar43) break;
      if (*pcVar37 == '\0') goto LAB_017728b8;
      pcVar43 = pcVar43 + 1;
      pcVar37 = pcVar37 + 1;
      if (lVar28 == 0) goto LAB_017728b8;
    }
    uVar41 = uVar41 + 1;
    pcVar31 = pcVar31 + 1;
    if (uVar41 == (iVar33 - iVar24) + 1) break;
LAB_01772830:
    (**(code **)(DAT_0528d020 + 0x18))(&DAT_0528d020);
    if (pcVar46 + uVar41 == DAT_0528d028) {
LAB_017728b8:
      if ((int)uVar41 != -1) goto LAB_017728c4;
      break;
    }
  }
  goto LAB_0176ee64;
}

