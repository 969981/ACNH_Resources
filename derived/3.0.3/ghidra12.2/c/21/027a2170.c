
undefined8 FUN_027a2170(byte *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  uint *puVar9;
  int *piVar10;
  short *psVar11;
  uint *puVar12;
  int iVar13;
  short sVar14;
  short *psVar15;
  char cVar16;
  ulong uVar17;
  uint uVar18;
  undefined8 uVar19;
  byte local_24 [4];
  
  local_24[0] = *param_1;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  lVar6 = FUN_025830c0(DAT_055021a0,local_24,1);
  if (lVar6 == 0) {
    return 0;
  }
  if (*(long **)(lVar6 + 0x18358) == (long *)0x0) {
    uVar8 = 0;
  }
  else {
    puVar7 = (undefined8 *)**(long **)(lVar6 + 0x18358);
    uVar8 = 0;
    if (puVar7 != (undefined8 *)0x0) {
      uVar8 = (**(code **)*puVar7)();
    }
  }
  puVar5 = PTR_DAT_04bb6428;
  if ((int)*(uint *)(DAT_04da8a30 + 0x1b20) < 1) {
    if ((((*(long *)(DAT_04da8a30 + 0x1a10) != 0) &&
         (puVar12 = *(uint **)(*(long *)(DAT_04da8a30 + 0x1a10) + 8), puVar12 != (uint *)0x0)) &&
        ((*(uint *)(DAT_04da8a30 + 0x1a28) <= param_2 ||
         (*(char *)(*(long *)(DAT_04da8a30 + 0x1a30) + (long)(int)param_2) != '\0')))) &&
       (((param_2 < *puVar12 && (puVar12[1] != 0)) && ((ushort)puVar12[2] != 0)))) {
      iVar13 = 0xc;
      if (*(char *)((long)puVar12 + 10) != '\0') {
        iVar13 = 0x1c;
      }
      puVar12 = (uint *)((ulong)(puVar12[1] * param_2 + (uint)(ushort)puVar12[2] * 8 + iVar13) +
                        (long)puVar12);
      goto joined_r0x027a2370;
    }
  }
  else if (param_2 < *(uint *)(DAT_04da8a30 + 0x1b20)) {
    if (*(uint *)(DAT_04da8a30 + 0x1b10) <= param_2) {
      param_2 = 0;
    }
    puVar12 = *(uint **)(*(long *)(DAT_04da8a30 + 0x1b18) + (ulong)param_2 * 8);
joined_r0x027a2370:
    if (puVar12 != (uint *)0x0) {
      psVar11 = (short *)(*(long *)(lVar6 + 0x18340) + *(long *)(lVar6 + 0x18338));
      psVar15 = psVar11 + 0x200;
      if (*puVar12 != 0) {
        cVar16 = DAT_04da84c8;
        do {
          if (cVar16 == '\0') {
            cVar16 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            DAT_04da84c8 = '\x01';
            *(undefined4 *)(puVar5 + 0x50) = 0xffffffff;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
          }
          else {
            uVar2 = *(uint *)(puVar5 + 0x20);
            if (-1 < (int)uVar2) {
              if (((ushort *)((ulong)uVar2 + (long)puVar12) != (ushort *)0x0) &&
                 (uVar3 = *(ushort *)((ulong)uVar2 + (long)puVar12), uVar3 < 0x200)) {
                psVar15 = (short *)((long)psVar15 + (ulong)uVar3);
              }
              break;
            }
            if (uVar2 != 0xffffffff) break;
          }
          lVar4 = (long)puVar12 - (ulong)*puVar12;
          if ((*puVar12 == 0) || (lVar4 == 0)) break;
          lVar1 = 0xc;
          if (*(char *)(lVar4 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          if (lVar1 + lVar4 == 0) break;
          uVar17 = (ulong)*(ushort *)(lVar4 + 8);
          *(undefined4 *)(puVar5 + 0x20) = 0xfffffffe;
          if (uVar17 == 0) break;
          piVar10 = (int *)(lVar1 + lVar4 + 4);
          while (piVar10[-1] != 0x54706054) {
            piVar10 = piVar10 + 2;
            uVar17 = uVar17 - 1;
            if (uVar17 == 0) goto LAB_027a2394;
          }
          iVar13 = 0;
          if (*piVar10 != -1) {
            iVar13 = *piVar10;
          }
          *(int *)(puVar5 + 0x20) = iVar13;
          if (*puVar12 == 0) break;
        } while( true );
      }
LAB_027a2394:
      if ((char)*psVar15 != '\0') {
        sVar14 = 0;
        if (*puVar12 != 0) {
          cVar16 = DAT_04da84c8;
          do {
            if (cVar16 != '\0') {
              uVar2 = *(uint *)(puVar5 + 0x14);
              if ((int)uVar2 < 0) {
                if (uVar2 == 0xffffffff) goto LAB_027a23f4;
              }
              else if ((short *)((ulong)uVar2 + (long)puVar12) != (short *)0x0) {
                sVar14 = *(short *)((ulong)uVar2 + (long)puVar12);
                goto LAB_027a247c;
              }
LAB_027a2478:
              sVar14 = 0;
LAB_027a247c:
              uVar2 = *puVar12;
              if (uVar2 == 0) goto LAB_027a2528;
              uVar18 = *(uint *)(puVar5 + 0x20);
              goto LAB_027a249c;
            }
            cVar16 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            DAT_04da84c8 = '\x01';
            *(undefined4 *)(puVar5 + 0x50) = 0xffffffff;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
LAB_027a23f4:
            puVar9 = (uint *)(ulong)*puVar12;
            sVar14 = 0;
            if ((*puVar12 == 0) || (puVar12 == puVar9)) goto LAB_027a247c;
            lVar4 = 0xc;
            if (*(char *)((long)puVar12 + (10 - (long)puVar9)) != '\0') {
              lVar4 = 0x1c;
            }
            lVar4 = (long)puVar12 + (lVar4 - (long)puVar9);
            if (lVar4 == 0) goto LAB_027a2478;
            uVar17 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar9));
            *(undefined4 *)(puVar5 + 0x14) = 0xfffffffe;
            sVar14 = 0;
            if (uVar17 == 0) goto LAB_027a247c;
            piVar10 = (int *)(lVar4 + 4);
            while (piVar10[-1] != 0x110b14c) {
              piVar10 = piVar10 + 2;
              uVar17 = uVar17 - 1;
              if (uVar17 == 0) {
                sVar14 = 0;
                goto LAB_027a247c;
              }
            }
            iVar13 = 0;
            if (*piVar10 != -1) {
              iVar13 = *piVar10;
            }
            *(int *)(puVar5 + 0x14) = iVar13;
          } while (*puVar12 != 0);
          sVar14 = 0;
        }
LAB_027a2528:
        if (sVar14 == *psVar11) {
          uVar19 = 1;
          goto joined_r0x027a2538;
        }
      }
    }
  }
  uVar19 = 0;
joined_r0x027a2538:
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar6 + 0x18358) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x18358) + 8), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return uVar19;
LAB_027a249c:
  if (-1 < (int)uVar18) {
    if (((ushort *)((long)puVar12 + (ulong)uVar18) != (ushort *)0x0) &&
       (uVar3 = *(ushort *)((long)puVar12 + (ulong)uVar18), uVar3 < 0x200)) {
      psVar11 = psVar11 + uVar3;
    }
    goto LAB_027a2528;
  }
  if ((uVar18 != 0xffffffff) || (lVar4 = (long)puVar12 - (ulong)uVar2, lVar4 == 0))
  goto LAB_027a2528;
  lVar1 = 0xc;
  if (*(char *)(lVar4 + 10) != '\0') {
    lVar1 = 0x1c;
  }
  if (lVar1 + lVar4 == 0) goto LAB_027a2528;
  uVar17 = (ulong)*(ushort *)(lVar4 + 8);
  *(undefined4 *)(puVar5 + 0x20) = 0xfffffffe;
  if (uVar17 == 0) goto LAB_027a2528;
  puVar9 = (uint *)(lVar1 + lVar4 + 4);
  while (puVar9[-1] != 0x54706054) {
    puVar9 = puVar9 + 2;
    uVar17 = uVar17 - 1;
    if (uVar17 == 0) goto LAB_027a2528;
  }
  uVar18 = 0;
  if (*puVar9 != 0xffffffff) {
    uVar18 = *puVar9;
  }
  *(uint *)(puVar5 + 0x20) = uVar18;
  uVar2 = *puVar12;
  if (uVar2 == 0) goto LAB_027a2528;
  goto LAB_027a249c;
}

