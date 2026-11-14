
bool FUN_01adbe40(long param_1,ulong param_2,ulong param_3,ulong param_4,uint param_5)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  int iVar10;
  char cVar11;
  uint *puVar12;
  int *piVar13;
  byte local_50 [4];
  uint local_4c;
  uint local_48;
  uint local_44;
  
  local_50[0] = 0;
  local_50[1] = 0;
  FUN_01adab50(param_1,local_50);
  local_4c = 0;
  do {
    if ((local_4c != 0) && (local_4c < 0xe)) {
      uVar6 = local_4c + 7;
      if (-1 < (int)local_4c) {
        uVar6 = local_4c;
      }
      if (((uint)((int)uVar6 >> 3) < 2) &&
         ((local_50[(uint)((int)uVar6 >> 3)] >> (ulong)(local_4c & 7) & 1) != 0)) {
        if (local_4c != 9) {
          return false;
        }
        local_48 = local_4c;
        local_44 = local_4c;
        if (((param_4 & 1) != 0) && (uVar7 = FUN_01adc230(param_1), (uVar7 & 1) == 0)) {
          return false;
        }
        if (((param_5 & 1) == 0) && (sVar3 = *(short *)PTR_DAT_04bb6298, sVar3 != -1)) {
          local_44 = 0x17;
          puVar9 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
          if (0xff < (uint)(int)sVar3) {
            puVar9 = (uint *)PTR_DAT_04bc39f8;
          }
          if (((*puVar9 >> 0x17 & 1) != 0) && (uVar7 = FUN_01adc580(param_1), (uVar7 & 1) == 0)) {
            return false;
          }
        }
        if ((param_3 & 1) != 0) {
          if (*(long *)(param_1 + 0x10) == 0) {
            local_44 = 0x21;
          }
          else {
            uVar6 = FUN_03853b94();
            if ((*(uint *)PTR_DAT_04bc0148 <= uVar6) ||
               (uVar2 = *(ushort *)(*(long *)(PTR_DAT_04bc0148 + 8) + (long)(int)uVar6 * 2),
               local_44 = (uint)uVar2, 0xa1 < uVar2)) {
              local_44 = 0;
            }
          }
          if ((int)*(uint *)(DAT_0532a7a0 + 0x1c0) < 1) {
            if ((((*(long *)(DAT_0532a7a0 + 0xb0) != 0) &&
                 (puVar9 = *(uint **)(*(long *)(DAT_0532a7a0 + 0xb0) + 8), puVar9 != (uint *)0x0))
                && ((*(uint *)(DAT_0532a7a0 + 200) <= local_44 ||
                    (*(char *)(*(long *)(DAT_0532a7a0 + 0xd0) + (long)(int)local_44) != '\0')))) &&
               (((local_44 < *puVar9 && (puVar9[1] != 0)) && ((ushort)puVar9[2] != 0)))) {
              iVar10 = 0xc;
              if (*(char *)((long)puVar9 + 10) != '\0') {
                iVar10 = 0x1c;
              }
              lVar8 = (ulong)(puVar9[1] * local_44 + (uint)(ushort)puVar9[2] * 8 + iVar10) +
                      (long)puVar9;
              goto joined_r0x01adc078;
            }
          }
          else if (local_44 < *(uint *)(DAT_0532a7a0 + 0x1c0)) {
            uVar6 = local_44;
            if (*(uint *)(DAT_0532a7a0 + 0x1b0) <= local_44) {
              uVar6 = 0;
            }
            lVar8 = *(long *)(*(long *)(DAT_0532a7a0 + 0x1b8) + (ulong)uVar6 * 8);
joined_r0x01adc078:
            if (((lVar8 != 0) && (uVar6 = FUN_03853b94(), uVar6 < *(uint *)PTR_DAT_04bc02c8)) &&
               (0xfffd < (ushort)(*(short *)(*(long *)(PTR_DAT_04bc02c8 + 8) + (long)(int)uVar6 * 2)
                                 - 10U))) {
              return false;
            }
          }
        }
        puVar9 = (uint *)FUN_01ad81b0(param_1);
        puVar5 = PTR_DAT_04bbe220;
        puVar4 = PTR_DAT_04bbe218;
        if (puVar9 == (uint *)0x0) {
          return false;
        }
        if (*puVar9 == 0) goto LAB_01adc1b0;
        cVar11 = *PTR_DAT_04bbe218;
        break;
      }
    }
    local_4c = local_4c + 1;
    if (local_4c == 0xe) {
      return false;
    }
  } while( true );
LAB_01adc0c4:
  if (cVar11 == '\0') {
    cVar11 = '\x01';
    *(undefined8 *)puVar5 = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
    *puVar4 = 1;
    *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
  }
  else {
    uVar6 = *(uint *)(puVar5 + 0x18);
    if (-1 < (int)uVar6) {
      if ((byte *)((ulong)uVar6 + (long)puVar9) != (byte *)0x0) {
        bVar1 = *(byte *)((ulong)uVar6 + (long)puVar9) & 0x10;
        if (bVar1 != 0) {
          return bVar1 == 0;
        }
        if ((param_2 & 1) != 0) {
          return true;
        }
        goto LAB_01adc1bc;
      }
LAB_01adc1b0:
      if ((param_2 & 1) != 0) {
        return true;
      }
LAB_01adc1bc:
      local_44 = 0xb;
      lVar8 = FUN_0172f620(puVar9,6,0x42ad246a,DAT_0532ad08);
      if (lVar8 == 0) {
        return false;
      }
      uVar6 = local_44 + 7;
      if (-1 < (int)local_44) {
        uVar6 = local_44;
      }
      return (bool)(*(byte *)(lVar8 + (ulong)(uint)((int)uVar6 >> 3)) >> (ulong)(local_44 & 7) & 1);
    }
    if (uVar6 != 0xffffffff) goto LAB_01adc1b0;
  }
  puVar12 = (uint *)(ulong)*puVar9;
  if ((*puVar9 == 0) || (puVar9 == puVar12)) goto LAB_01adc1b0;
  lVar8 = 0xc;
  if (*(char *)((long)puVar9 + (10 - (long)puVar12)) != '\0') {
    lVar8 = 0x1c;
  }
  lVar8 = (long)puVar9 + (lVar8 - (long)puVar12);
  if (lVar8 == 0) goto LAB_01adc1b0;
  uVar7 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar12));
  *(undefined4 *)(puVar5 + 0x18) = 0xfffffffe;
  if (uVar7 == 0) goto LAB_01adc1b0;
  piVar13 = (int *)(lVar8 + 4);
  while (piVar13[-1] != 0x42ad246a) {
    piVar13 = piVar13 + 2;
    uVar7 = uVar7 - 1;
    if (uVar7 == 0) goto LAB_01adc1b0;
  }
  iVar10 = 0;
  if (*piVar13 != -1) {
    iVar10 = *piVar13;
  }
  *(int *)(puVar5 + 0x18) = iVar10;
  if (*puVar9 == 0) goto LAB_01adc1b0;
  goto LAB_01adc0c4;
}

