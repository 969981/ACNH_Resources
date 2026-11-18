
void FUN_032d7320(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  ushort *puVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  ushort *puVar12;
  ushort *puVar13;
  ushort uVar14;
  ushort *puVar15;
  int iVar16;
  ulong uVar17;
  undefined *local_20a8;
  undefined2 *local_20a0;
  undefined8 local_2098;
  undefined *local_2090;
  ushort *puStack_2088;
  undefined *local_2080;
  ushort *local_2078;
  int local_2070;
  ushort local_206c [4095];
  undefined2 local_6e;
  
  local_206c[0] = 0;
  local_2070 = 0x1000;
  local_6e = 0;
  local_2080 = &DAT_04b1bae0;
  local_2078 = local_206c;
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar15 = (ushort *)param_2[1];
  if (local_206c != puVar15) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar10 = 0;
    do {
      if (*(short *)(param_2[1] + lVar10 * 2) == 0) goto LAB_032d73ec;
      lVar2 = param_2[1] + lVar10 * 2;
      if (*(short *)(lVar2 + 2) == 0) {
        lVar10 = lVar10 + 1;
        goto LAB_032d73ec;
      }
      if (*(short *)(lVar2 + 4) == 0) {
        lVar10 = lVar10 + 2;
        goto LAB_032d73ec;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_032d73ec:
    uVar6 = (uint)lVar10;
    if (local_2070 <= (int)(uint)lVar10) {
      uVar6 = local_2070 - 1;
    }
    uVar17 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar6 << 1;
    memcpy(local_206c,puVar15,uVar17);
    *(undefined2 *)((long)local_206c + uVar17) = 0;
  }
  (**(code **)(local_2080 + 0x18))(&local_2080);
  uVar17 = 0;
  bVar7 = true;
  do {
    if (local_2078[uVar17] == 0) break;
    if (local_2078[uVar17] == 10) {
      if (bVar7) {
LAB_032d7484:
        (**(code **)(local_2080 + 0x18))(&local_2080);
        lVar10 = 0;
        goto LAB_032d74a0;
      }
      break;
    }
    if (local_2078[uVar17 + 1] == 0) break;
    if (local_2078[uVar17 + 1] == 10) goto LAB_032d7484;
    if (local_2078[uVar17 + 2] == 0) break;
    if (local_2078[uVar17 + 2] == 10) goto LAB_032d7484;
    bVar7 = uVar17 < 0x7fffe;
    uVar17 = uVar17 + 3;
  } while (uVar17 != 0x80001);
  goto LAB_032d758c;
  while( true ) {
    if (local_2078[lVar10 + 1] == 0) {
      lVar10 = lVar10 + 1;
      goto LAB_032d74d0;
    }
    if (local_2078[lVar10 + 2] == 0) {
      lVar10 = lVar10 + 2;
      iVar8 = (int)lVar10;
      goto joined_r0x032d74d0;
    }
    lVar10 = lVar10 + 3;
    if (lVar10 == 0x80001) break;
LAB_032d74a0:
    if (local_2078[lVar10] == 0) {
LAB_032d74d0:
      iVar8 = (int)lVar10;
joined_r0x032d74d0:
      if ((iVar8 != 0) &&
         (lVar10 = (lVar10 << 0x20) + -0x100000000,
         *(short *)((long)local_2078 + (lVar10 >> 0x1f)) == 10)) {
        local_2078[lVar10 >> 0x20] = 0;
      }
      break;
    }
  }
  (**(code **)(local_2080 + 0x18))(&local_2080);
  uVar17 = 0;
  do {
    if (local_2078[uVar17] == 0) {
LAB_032d7550:
      iVar8 = (int)uVar17;
joined_r0x032d7554:
      if (0 < iVar8) {
        if (uVar17 == 1) {
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          do {
            if (local_2078[uVar11] == 10) {
              local_2078[uVar11] = 0x20;
            }
            if (local_2078[uVar11 + 1] == 10) {
              local_2078[uVar11 + 1] = 0x20;
            }
            uVar11 = uVar11 + 2;
          } while ((uVar17 & 0xfffffffffffffffe) != uVar11);
        }
        if (((uVar17 & 1) != 0) && (local_2078[uVar11] == 10)) {
          local_2078[uVar11] = 0x20;
        }
      }
      break;
    }
    if (local_2078[uVar17 + 1] == 0) {
      uVar17 = uVar17 + 1;
      goto LAB_032d7550;
    }
    if (local_2078[uVar17 + 2] == 0) {
      uVar17 = uVar17 + 2;
      iVar8 = (int)uVar17;
      goto joined_r0x032d7554;
    }
    uVar17 = uVar17 + 3;
  } while (uVar17 != 0x80001);
LAB_032d758c:
  pcVar4 = "";
  if (*(char **)(*param_1 + 0xe0) != (char *)0x0) {
    pcVar4 = *(char **)(*param_1 + 0xe0);
  }
  if ((pcVar4 == "$") || (*pcVar4 == '$')) {
    local_2090 = PTR_DAT_04bc8e78 + 0x10;
    puStack_2088 = local_2078;
    uVar17 = FUN_032d70a8(param_1,&local_2090);
    if ((uVar17 & 1) == 0) goto LAB_032d768c;
    uVar14 = *local_2078;
    if (uVar14 != 0) {
      iVar16 = 0;
      iVar8 = 0;
      puVar15 = local_2078;
      do {
        puVar12 = puVar15;
        puVar13 = puVar15;
        while ((uVar14 & 0xfffe) != 0xe) {
          puVar12 = puVar12 + 1;
          uVar14 = *puVar12;
          iVar16 = iVar16 + 1;
          puVar13 = puVar13 + 1;
          if (uVar14 == 0) goto LAB_032d7904;
        }
        if (uVar14 == 0xe) {
          puVar15 = (ushort *)((long)puVar13 + (ulong)puVar12[3] + 8);
        }
        else {
          puVar5 = puVar12;
          puVar15 = puVar13 + 3;
          if (uVar14 != 0xf) {
            puVar5 = (ushort *)0x0;
            puVar15 = puVar12;
          }
          puVar12 = puVar5;
        }
        iVar8 = iVar8 + ((uint)((int)puVar15 - (int)puVar13) >> 1 & 0xffff);
        if ((puVar12[1] == 0) && (puVar12[2] == 0)) {
          iVar16 = (uint)(puVar12[5] >> 1) + iVar16;
          iVar8 = iVar8 - (uint)(puVar12[5] >> 1);
        }
        uVar14 = *puVar15;
      } while (uVar14 != 0);
      goto LAB_032d7904;
    }
  }
  else {
LAB_032d768c:
    local_2098 = 0;
    (**(code **)(local_2080 + 0x18))(&local_2080);
    iVar8 = FUN_032d79e0(param_1,local_2078,(long)&local_2098 + 4,&local_2098);
    if ((iVar8 != 0) && (iVar8 = local_2098._4_4_, 0 < local_2098._4_4_)) {
      iVar16 = 0;
      puVar1 = PTR_DAT_04bb8610 + 0x10;
      do {
        uVar6 = iVar8 - iVar16;
        if ((int)uVar6 < local_2070) {
          local_2078[uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)] = 0;
        }
        else {
          (**(code **)(local_2080 + 0x18))(&local_2080);
        }
        puVar15 = local_2078;
        local_20a0 = &DAT_04169bca;
        local_20a8 = puVar1;
        (**(code **)(local_2080 + 0x18))(&local_2080);
        lVar10 = 0;
        do {
          if (local_2078[lVar10] == 0) goto LAB_032d7774;
          if (local_2078[lVar10 + 1] == 0) {
            lVar10 = lVar10 + 1;
            goto LAB_032d7774;
          }
          if (local_2078[lVar10 + 2] == 0) {
            lVar10 = lVar10 + 2;
            goto LAB_032d7774;
          }
          lVar10 = lVar10 + 3;
        } while (lVar10 != 0x80001);
        lVar10 = 0;
LAB_032d7774:
        uVar6 = (uint)lVar10 & ((int)(uint)lVar10 >> 0x1f ^ 0xffffffffU);
        (**(code **)(local_20a8 + 0x18))(&local_20a8);
        lVar10 = 0;
        do {
          if (local_20a0[lVar10] == 0) goto LAB_032d77d4;
          if (local_20a0[lVar10 + 1] == 0) {
            lVar10 = lVar10 + 1;
            goto LAB_032d77d4;
          }
          if (local_20a0[lVar10 + 2] == 0) {
            lVar10 = lVar10 + 2;
            goto LAB_032d77d4;
          }
          lVar10 = lVar10 + 3;
        } while (lVar10 != 0x80001);
        lVar10 = 0;
LAB_032d77d4:
        uVar3 = (uint)lVar10;
        if ((int)(local_2070 - uVar6) <= (int)(uint)lVar10) {
          uVar3 = local_2070 + ~uVar6;
        }
        if (0 < (int)uVar3) {
          (**(code **)(local_20a8 + 0x18))(&local_20a8);
          memcpy(puVar15 + uVar6,local_20a0,(ulong)uVar3 << 1);
          puVar15[(int)(uVar3 + uVar6)] = 0;
        }
        (**(code **)(local_2080 + 0x18))(&local_2080);
        iVar9 = FUN_032d79e0(param_1,local_2078,&local_20a8,&local_2098);
      } while ((iVar9 != 0) && (iVar16 = iVar16 + 1, iVar16 != iVar8));
    }
    uVar14 = *local_2078;
    if (uVar14 != 0) {
      iVar16 = 0;
      iVar8 = 0;
      puVar15 = local_2078;
      do {
        puVar12 = puVar15;
        puVar13 = puVar15;
        while ((uVar14 & 0xfffe) != 0xe) {
          puVar12 = puVar12 + 1;
          uVar14 = *puVar12;
          iVar16 = iVar16 + 1;
          puVar13 = puVar13 + 1;
          if (uVar14 == 0) goto LAB_032d7904;
        }
        if (uVar14 == 0xe) {
          puVar15 = (ushort *)((long)puVar13 + (ulong)puVar12[3] + 8);
        }
        else {
          puVar5 = puVar12;
          puVar15 = puVar13 + 3;
          if (uVar14 != 0xf) {
            puVar5 = (ushort *)0x0;
            puVar15 = puVar12;
          }
          puVar12 = puVar5;
        }
        iVar8 = iVar8 + ((uint)((int)puVar15 - (int)puVar13) >> 1 & 0xffff);
        if ((puVar12[1] == 0) && (puVar12[2] == 0)) {
          iVar16 = (uint)(puVar12[5] >> 1) + iVar16;
          iVar8 = iVar8 - (uint)(puVar12[5] >> 1);
        }
        uVar14 = *puVar15;
      } while (uVar14 != 0);
      goto LAB_032d7904;
    }
  }
  iVar8 = 0;
  iVar16 = 0;
LAB_032d7904:
  puVar15 = local_2078;
  (**(code **)(*(long *)*param_1 + 0xf0))
            ((long *)*param_1,*(undefined8 *)(*(long *)PTR_DAT_04bc6338 + 0x68),iVar16 + iVar8);
  (**(code **)(*(long *)*param_1 + 0x100))((long *)*param_1,&DAT_04169358,0);
  (**(code **)(*(long *)*param_1 + 0x110))((long *)*param_1,puVar15,0,iVar16 + iVar8);
  return;
}

