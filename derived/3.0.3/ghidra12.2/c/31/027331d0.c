
bool FUN_027331d0(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  char *pcVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int *local_70;
  int local_64;
  
  if (param_1[0x16e] == 0) {
    return false;
  }
  memset(param_2,0,0x5b8);
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  uVar7 = *(undefined8 *)((long)param_1 + 0x1f);
  uVar8 = *(undefined8 *)(param_1 + 4);
  uVar9 = *(undefined8 *)(param_1 + 6);
  puVar11 = (undefined8 *)(param_2 + 2);
  *puVar11 = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)((long)param_2 + 0x1f) = uVar7;
  *(undefined8 *)(param_2 + 4) = uVar8;
  *(undefined8 *)(param_2 + 6) = uVar9;
  *(undefined1 *)((long)param_2 + 0x27) = *(undefined1 *)((long)param_1 + 0x27);
  *(undefined1 *)(param_2 + 10) = *(undefined1 *)(param_1 + 10);
  *(undefined1 *)((long)param_2 + 0x29) = *(undefined1 *)((long)param_1 + 0x29);
  uVar7 = *(undefined8 *)((long)param_1 + 0x469);
  uVar8 = *(undefined8 *)((long)param_1 + 0x45a);
  uVar9 = *(undefined8 *)((long)param_1 + 0x462);
  puVar12 = (undefined8 *)((long)param_2 + 0x2a);
  *puVar12 = *(undefined8 *)((long)param_1 + 0x452);
  *(undefined8 *)((long)param_2 + 0x41) = uVar7;
  *(undefined8 *)((long)param_2 + 0x3a) = uVar9;
  *(undefined8 *)((long)param_2 + 0x32) = uVar8;
  uVar8 = *(undefined8 *)(param_1 + 0x122);
  uVar9 = *(undefined8 *)((long)param_1 + 0x481);
  uVar7 = *(undefined8 *)((long)param_1 + 0x471);
  *(undefined8 *)((long)param_2 + 0x52) = *(undefined8 *)((long)param_1 + 0x479);
  *(undefined8 *)((long)param_2 + 0x4a) = uVar7;
  *(undefined8 *)((long)param_2 + 0x5a) = uVar9;
  *(undefined8 *)((long)param_2 + 0x61) = uVar8;
  uVar8 = *(undefined8 *)((long)param_1 + 0x4a7);
  uVar9 = *(undefined8 *)(param_1 + 0x128);
  uVar7 = *(undefined8 *)(param_1 + 0x126);
  *(undefined8 *)((long)param_2 + 0x6a) = *(undefined8 *)(param_1 + 0x124);
  *(undefined8 *)((long)param_2 + 0x72) = uVar7;
  *(undefined8 *)((long)param_2 + 0x7a) = uVar9;
  *(undefined8 *)((long)param_2 + 0x81) = uVar8;
  uVar8 = *(undefined8 *)((long)param_1 + 0x4c6);
  uVar9 = *(undefined8 *)((long)param_1 + 0x4bf);
  uVar7 = *(undefined8 *)((long)param_1 + 0x4af);
  *(undefined8 *)((long)param_2 + 0x92) = *(undefined8 *)((long)param_1 + 0x4b7);
  *(undefined8 *)((long)param_2 + 0x9a) = uVar9;
  *(undefined8 *)((long)param_2 + 0x8a) = uVar7;
  *(undefined8 *)((long)param_2 + 0xa1) = uVar8;
  uVar8 = *(undefined8 *)((long)param_1 + 0x4d6);
  uVar9 = *(undefined8 *)((long)param_1 + 0x4de);
  uVar7 = *(undefined8 *)((long)param_1 + 0x4ce);
  *(undefined8 *)((long)param_2 + 0xc1) = *(undefined8 *)((long)param_1 + 0x4e5);
  *(undefined8 *)((long)param_2 + 0xaa) = uVar7;
  *(undefined8 *)((long)param_2 + 0xba) = uVar9;
  *(undefined8 *)((long)param_2 + 0xb2) = uVar8;
  uVar8 = *(undefined8 *)((long)param_1 + 0x4f5);
  uVar9 = *(undefined8 *)((long)param_1 + 0x4fd);
  uVar7 = *(undefined8 *)(param_1 + 0x141);
  *(undefined8 *)((long)param_2 + 0xca) = *(undefined8 *)((long)param_1 + 0x4ed);
  *(undefined8 *)((long)param_2 + 0xe1) = uVar7;
  *(undefined8 *)((long)param_2 + 0xda) = uVar9;
  *(undefined8 *)((long)param_2 + 0xd2) = uVar8;
  uVar7 = *(undefined8 *)(param_1 + 0x143);
  uVar8 = *(undefined8 *)(param_1 + 0x145);
  uVar9 = *(undefined8 *)(param_1 + 0x147);
  *(undefined8 *)((long)param_2 + 0x101) = *(undefined8 *)((long)param_1 + 0x523);
  *(undefined8 *)((long)param_2 + 0xea) = uVar7;
  *(undefined8 *)((long)param_2 + 0xf2) = uVar8;
  *(undefined8 *)((long)param_2 + 0xfa) = uVar9;
  uVar9 = *(undefined8 *)((long)param_1 + 0x533);
  uVar7 = *(undefined8 *)((long)param_1 + 0x53b);
  uVar8 = *(undefined8 *)((long)param_1 + 0x52b);
  *(undefined8 *)((long)param_2 + 0x121) = *(undefined8 *)((long)param_1 + 0x542);
  *(undefined8 *)((long)param_2 + 0x10a) = uVar8;
  *(undefined8 *)((long)param_2 + 0x112) = uVar9;
  *(undefined8 *)((long)param_2 + 0x11a) = uVar7;
  *(undefined1 *)((long)param_2 + 0x49) = *(undefined1 *)((long)param_1 + 0x54a);
  *(undefined1 *)((long)param_2 + 0x69) = *(undefined1 *)((long)param_1 + 0x54b);
  *(undefined1 *)((long)param_2 + 0x89) = *(undefined1 *)(param_1 + 0x153);
  *(undefined1 *)((long)param_2 + 0xa9) = *(undefined1 *)((long)param_1 + 0x54d);
  *(undefined1 *)((long)param_2 + 0xc9) = *(undefined1 *)((long)param_1 + 0x54e);
  *(undefined1 *)((long)param_2 + 0xe9) = *(undefined1 *)((long)param_1 + 0x54f);
  *(undefined1 *)((long)param_2 + 0x109) = *(undefined1 *)(param_1 + 0x154);
  *(undefined1 *)((long)param_2 + 0x129) = *(undefined1 *)((long)param_1 + 0x551);
  uVar8 = *(undefined8 *)((long)param_1 + 0x552);
  *(undefined2 *)((long)param_2 + 0x132) = *(undefined2 *)((long)param_1 + 0x55a);
  *(undefined8 *)((long)param_2 + 0x12a) = uVar8;
  uVar4 = *(undefined2 *)(param_1 + 0x159);
  *(undefined8 *)(param_2 + 0x4d) = *(undefined8 *)(param_1 + 0x157);
  *(undefined2 *)(param_2 + 0x4f) = uVar4;
  uVar4 = *(undefined2 *)((long)param_1 + 0x56e);
  *(undefined8 *)((long)param_2 + 0x13e) = *(undefined8 *)((long)param_1 + 0x566);
  *(undefined2 *)((long)param_2 + 0x146) = uVar4;
  uVar4 = *(undefined2 *)(param_1 + 0x15e);
  *(undefined8 *)(param_2 + 0x52) = *(undefined8 *)(param_1 + 0x15c);
  *(undefined2 *)(param_2 + 0x54) = uVar4;
  uVar4 = *(undefined2 *)((long)param_1 + 0x582);
  *(undefined8 *)((long)param_2 + 0x152) = *(undefined8 *)((long)param_1 + 0x57a);
  *(undefined2 *)((long)param_2 + 0x15a) = uVar4;
  uVar4 = *(undefined2 *)(param_1 + 0x163);
  *(undefined8 *)(param_2 + 0x57) = *(undefined8 *)(param_1 + 0x161);
  *(undefined2 *)(param_2 + 0x59) = uVar4;
  uVar4 = *(undefined2 *)((long)param_1 + 0x596);
  *(undefined8 *)((long)param_2 + 0x166) = *(undefined8 *)((long)param_1 + 0x58e);
  *(undefined2 *)((long)param_2 + 0x16e) = uVar4;
  uVar4 = *(undefined2 *)(param_1 + 0x168);
  *(undefined8 *)(param_2 + 0x5c) = *(undefined8 *)(param_1 + 0x166);
  *(undefined2 *)(param_2 + 0x5e) = uVar4;
  uVar4 = *(undefined2 *)((long)param_1 + 0x5aa);
  *(undefined8 *)((long)param_2 + 0x17a) = *(undefined8 *)((long)param_1 + 0x5a2);
  *(undefined2 *)((long)param_2 + 0x182) = uVar4;
  uVar4 = *(undefined2 *)(param_1 + 0x16d);
  *(undefined8 *)(param_2 + 0x61) = *(undefined8 *)(param_1 + 0x16b);
  *(undefined2 *)(param_2 + 99) = uVar4;
  uVar8 = *(undefined8 *)((long)param_1 + 0x2a);
  *(short *)((long)param_2 + 0x18e) = (short)uVar8;
  *(char *)(param_2 + 100) = (char)((ulong)uVar8 >> 0x10);
  *(char *)((long)param_2 + 0x191) = (char)((ulong)uVar8 >> 0x18);
  *(char *)((long)param_2 + 0x192) = (char)((ulong)uVar8 >> 0x20);
  *(char *)((long)param_2 + 0x193) = (char)((ulong)uVar8 >> 0x28);
  uVar8 = *(undefined8 *)((long)param_1 + 0x32);
  *(short *)(param_2 + 0x65) = (short)uVar8;
  *(char *)((long)param_2 + 0x196) = (char)((ulong)uVar8 >> 0x10);
  *(char *)((long)param_2 + 0x197) = (char)((ulong)uVar8 >> 0x18);
  *(char *)(param_2 + 0x66) = (char)((ulong)uVar8 >> 0x20);
  *(char *)((long)param_2 + 0x199) = (char)((ulong)uVar8 >> 0x28);
  *(undefined1 *)((long)param_2 + 0x19a) = *(undefined1 *)((long)param_1 + 0x3a);
  *(undefined1 *)((long)param_2 + 0x19b) = *(undefined1 *)((long)param_1 + 0x3b);
  *(undefined1 *)(param_2 + 0x67) = *(undefined1 *)(param_1 + 0xf);
  *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(param_1 + 0x10);
  *(undefined1 *)(param_2 + 0x6a) = *(undefined1 *)(param_1 + 0x12);
  *(undefined1 *)((long)param_2 + 0x1a9) = *(undefined1 *)((long)param_1 + 0x49);
  pcVar2 = (char *)((long)param_2 + 0x1aa);
  *(undefined8 *)((long)param_2 + 0x1aa) = *(undefined8 *)((long)param_1 + 0x4a);
  memcpy((void *)((long)param_2 + 0x1b2),(void *)((long)param_1 + 0x52),0x400);
  uVar10 = 0;
  uVar6 = 0;
  *(undefined1 *)((long)param_2 + 0x5b2) = *(undefined1 *)((long)param_1 + 0x5b6);
  *(undefined1 *)((long)param_2 + 0x5b3) = 1;
  uVar3 = *(undefined1 *)((long)param_1 + 0x5b7);
  *(undefined1 *)((long)param_2 + 0x5b5) = 1;
  *(undefined1 *)(param_2 + 0x16d) = uVar3;
  do {
    piVar1 = (int *)((long)param_2 + uVar10);
    uVar10 = uVar10 + 4;
    uVar6 = (*piVar1 * 0x16a88000 | (uint)(*piVar1 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar6;
    uVar6 = (uVar6 >> 0x13 | uVar6 << 0xd) * 5 + 0xe6546b64;
  } while (uVar10 < 0x5b5);
  uVar6 = (uVar6 ^ uVar6 >> 0x10 ^ 0x5b8) * -0x7a143595;
  uVar6 = (uVar6 ^ uVar6 >> 0xd) * -0x3d4d51cb;
  uVar6 = uVar6 ^ uVar6 >> 0x10;
  if (uVar6 < 2) {
    uVar6 = 1;
  }
  if (((((((param_1[0x16e] == uVar6) && (lVar5 = FUN_00a7f6d4(puVar11), lVar5 != -1)) &&
         (lVar5 = FUN_00a7f6d4(puVar12), lVar5 != -1)) &&
        ((lVar5 = FUN_00a7f6d4((undefined8 *)((long)param_2 + 0x4a)), lVar5 != -1 &&
         (lVar5 = FUN_00a7f6d4((undefined8 *)((long)param_2 + 0x6a)), lVar5 != -1)))) &&
       (lVar5 = FUN_00a7f6d4((undefined8 *)((long)param_2 + 0x8a)), lVar5 != -1)) &&
      (((((lVar5 = FUN_00a7f6d4((undefined8 *)((long)param_2 + 0xaa)), lVar5 != -1 &&
          (lVar5 = FUN_00a7f6d4((undefined8 *)((long)param_2 + 0xca)), lVar5 != -1)) &&
         ((lVar5 = FUN_00a7f6d4((undefined8 *)((long)param_2 + 0xea)), lVar5 != -1 &&
          (lVar5 = FUN_00a7f6d4((undefined8 *)((long)param_2 + 0x10a)), lVar5 != -1)))) &&
        ((((((*(char *)((long)param_2 + 0x12a) == '\0' || (*(char *)((long)param_2 + 299) == '\0'))
            || (*(char *)(param_2 + 0x4b) == '\0')) ||
           ((*(char *)((long)param_2 + 0x12d) == '\0' || (*(char *)((long)param_2 + 0x12e) == '\0'))
           )) || (*(char *)((long)param_2 + 0x12f) == '\0')) ||
         (((*(char *)(param_2 + 0x4c) == '\0' || (*(char *)((long)param_2 + 0x131) == '\0')) ||
          ((*(char *)((long)param_2 + 0x132) == '\0' || (*(char *)((long)param_2 + 0x133) == '\0')))
          ))))) &&
       ((((*(char *)(param_2 + 0x4d) == '\0' || (*(char *)((long)param_2 + 0x135) == '\0')) ||
         (*(char *)((long)param_2 + 0x136) == '\0')) ||
        (((*(char *)((long)param_2 + 0x137) == '\0' || (*(char *)(param_2 + 0x4e) == '\0')) ||
         ((*(char *)((long)param_2 + 0x139) == '\0' ||
          (((*(char *)((long)param_2 + 0x13a) == '\0' || (*(char *)((long)param_2 + 0x13b) == '\0'))
           || ((*(char *)(param_2 + 0x4f) == '\0' || (*(char *)((long)param_2 + 0x13d) == '\0'))))))
         )))))))) &&
     (((((((((*(char *)((long)param_2 + 0x13e) == '\0' || (*(char *)((long)param_2 + 0x13f) == '\0')
             ) || (*(char *)(param_2 + 0x50) == '\0')) ||
           ((*(char *)((long)param_2 + 0x141) == '\0' || (*(char *)((long)param_2 + 0x142) == '\0'))
           )) || (*(char *)((long)param_2 + 0x143) == '\0')) ||
         ((*(char *)(param_2 + 0x51) == '\0' || (*(char *)((long)param_2 + 0x145) == '\0')))) ||
        ((*(char *)((long)param_2 + 0x146) == '\0' || (*(char *)((long)param_2 + 0x147) == '\0'))))
       && (((((*(char *)(param_2 + 0x52) == '\0' || (*(char *)((long)param_2 + 0x149) == '\0')) ||
             (*(char *)((long)param_2 + 0x14a) == '\0')) ||
            (((((*(char *)((long)param_2 + 0x14b) == '\0' || (*(char *)(param_2 + 0x53) == '\0')) ||
               (*(char *)((long)param_2 + 0x14d) == '\0')) ||
              ((*(char *)((long)param_2 + 0x14e) == '\0' ||
               (*(char *)((long)param_2 + 0x14f) == '\0')))) ||
             ((*(char *)(param_2 + 0x54) == '\0' || (*(char *)((long)param_2 + 0x151) == '\0'))))))
           && ((((((*(char *)((long)param_2 + 0x152) == '\0' ||
                   (*(char *)((long)param_2 + 0x153) == '\0')) ||
                  (*(char *)(param_2 + 0x55) == '\0')) ||
                 ((*(char *)((long)param_2 + 0x155) == '\0' ||
                  (*(char *)((long)param_2 + 0x156) == '\0')))) ||
                (*(char *)((long)param_2 + 0x157) == '\0')) ||
               (((*(char *)(param_2 + 0x56) == '\0' || (*(char *)((long)param_2 + 0x159) == '\0'))
                || ((*(char *)((long)param_2 + 0x15a) == '\0' ||
                    (*(char *)((long)param_2 + 0x15b) == '\0')))))))))) &&
      (((((((*(char *)(param_2 + 0x57) == '\0' || (*(char *)((long)param_2 + 0x15d) == '\0')) ||
           (*(char *)((long)param_2 + 0x15e) == '\0')) ||
          ((*(char *)((long)param_2 + 0x15f) == '\0' || (*(char *)(param_2 + 0x58) == '\0')))) ||
         ((*(char *)((long)param_2 + 0x161) == '\0' ||
          ((*(char *)((long)param_2 + 0x162) == '\0' || (*(char *)((long)param_2 + 0x163) == '\0')))
          ))) || ((*(char *)(param_2 + 0x59) == '\0' || (*(char *)((long)param_2 + 0x165) == '\0')))
        ) && (((((((*(char *)((long)param_2 + 0x166) == '\0' ||
                   (*(char *)((long)param_2 + 0x167) == '\0')) ||
                  (*(char *)(param_2 + 0x5a) == '\0')) ||
                 (((*(char *)((long)param_2 + 0x169) == '\0' ||
                   (*(char *)((long)param_2 + 0x16a) == '\0')) ||
                  (*(char *)((long)param_2 + 0x16b) == '\0')))) ||
                (((*(char *)(param_2 + 0x5b) == '\0' || (*(char *)((long)param_2 + 0x16d) == '\0'))
                 || ((*(char *)((long)param_2 + 0x16e) == '\0' ||
                     (*(char *)((long)param_2 + 0x16f) == '\0')))))) &&
               ((((*(char *)(param_2 + 0x5c) == '\0' || (*(char *)((long)param_2 + 0x171) == '\0'))
                 || (*(char *)((long)param_2 + 0x172) == '\0')) ||
                ((((*(char *)((long)param_2 + 0x173) == '\0' || (*(char *)(param_2 + 0x5d) == '\0'))
                  || (*(char *)((long)param_2 + 0x175) == '\0')) ||
                 (((*(char *)((long)param_2 + 0x176) == '\0' ||
                   (*(char *)((long)param_2 + 0x177) == '\0')) ||
                  ((*(char *)(param_2 + 0x5e) == '\0' || (*(char *)((long)param_2 + 0x179) == '\0'))
                  )))))))) &&
              ((((((((*(char *)((long)param_2 + 0x17a) == '\0' ||
                     (*(char *)((long)param_2 + 0x17b) == '\0')) ||
                    (*(char *)(param_2 + 0x5f) == '\0')) ||
                   ((*(char *)((long)param_2 + 0x17d) == '\0' ||
                    (*(char *)((long)param_2 + 0x17e) == '\0')))) ||
                  (*(char *)((long)param_2 + 0x17f) == '\0')) ||
                 ((*(char *)(param_2 + 0x60) == '\0' || (*(char *)((long)param_2 + 0x181) == '\0')))
                 ) || ((*(char *)((long)param_2 + 0x182) == '\0' ||
                       (*(char *)((long)param_2 + 0x183) == '\0')))) &&
               ((((((*(char *)(param_2 + 0x61) == '\0' || (*(char *)((long)param_2 + 0x185) == '\0')
                    ) || (*(char *)((long)param_2 + 0x186) == '\0')) ||
                  (((*(char *)((long)param_2 + 0x187) == '\0' || (*(char *)(param_2 + 0x62) == '\0')
                    ) || ((*(char *)((long)param_2 + 0x189) == '\0' ||
                          ((*(char *)((long)param_2 + 0x18a) == '\0' ||
                           (*(char *)((long)param_2 + 0x18b) == '\0')))))))) ||
                 ((*(char *)(param_2 + 99) == '\0' || (*(char *)((long)param_2 + 0x18d) == '\0'))))
                && (((((*pcVar2 == '\0' || (*(char *)((long)param_2 + 0x1ab) == '\0')) ||
                      (*(char *)(param_2 + 0x6b) == '\0')) ||
                     ((*(char *)((long)param_2 + 0x1ad) == '\0' ||
                      (*(char *)((long)param_2 + 0x1ae) == '\0')))) ||
                    ((*(char *)((long)param_2 + 0x1af) == '\0' ||
                     ((*(char *)(param_2 + 0x6c) == '\0' ||
                      (*(char *)((long)param_2 + 0x1b1) == '\0')))))))))))))))))) {
    lVar5 = 0;
    do {
      if ((*(char *)((long)param_2 + lVar5 + 0x1b2) == '\0') ||
         (*(char *)((long)param_2 + lVar5 + 0x1b3) == '\0')) {
        uVar10 = FUN_02733a80(&local_64,puVar11);
        if ((uVar10 & 1) == 0) {
          return false;
        }
        if (10 < local_64) {
          return false;
        }
        local_70 = &local_64;
        uVar10 = FUN_02733b20(puVar12,&local_70);
        if ((uVar10 & 1) != 0) {
          return false;
        }
        local_70 = &local_64;
        uVar10 = FUN_02733bf0((long)param_2 + 0x12a,&local_70);
        if ((uVar10 & 1) != 0) {
          return false;
        }
        uVar10 = FUN_02733a80(&local_64,pcVar2);
        if ((uVar10 & 1) == 0) {
          return false;
        }
        lVar5 = FUN_02733d7c(pcVar2);
        return lVar5 == local_64;
      }
      lVar5 = lVar5 + 2;
    } while (lVar5 != 0x400);
  }
  return false;
}

