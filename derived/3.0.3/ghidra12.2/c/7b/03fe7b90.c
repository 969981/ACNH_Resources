
void FUN_03fe7b90(long *param_1)

{
  byte *pbVar1;
  long *plVar2;
  char *pcVar3;
  bool bVar4;
  int iVar5;
  ushort uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  short sVar11;
  short sVar12;
  long lVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  int *piVar17;
  uint uVar18;
  uint uVar19;
  byte bVar20;
  
  if (4 < *(ushort *)((long)param_1 + 0x34e0ac)) goto LAB_03fe8654;
  pbVar1 = (byte *)((long)param_1 + 0x38a44c);
  switch(*(ushort *)((long)param_1 + 0x34e0ac)) {
  case 0:
    if (*(short *)((long)param_1 + 0x7a5fa) != (short)param_1[0xf4bf]) {
      plVar2 = param_1 + 0x68f0;
      if (*(char *)((long)param_1 + 0x788b6) != '\0') {
        iVar14 = 0;
        do {
          FUN_03fc161c(plVar2,iVar14);
          iVar14 = iVar14 + 1;
        } while (iVar14 != 0x80);
        FUN_03fc1d80(param_1 + 0xec8b,*(undefined2 *)((long)param_1 + 0x7a0cc),plVar2);
        *(char *)((long)param_1 + 0x788b6) = '\0';
      }
      if ((char)param_1[0xf419] == '\0') {
        *(short *)((long)param_1 + 0x7a5fa) = (short)param_1[0xf4bf];
      }
      else {
        (*(code *)param_1[0x6970f])(plVar2);
      }
    }
    *(int *)((long)param_1 + 0x34e0bc) =
         *(int *)((long)param_1 + 0x34e0bc) + *(int *)(*param_1 + 0x24);
    break;
  case 1:
    if ((int)*(short *)((long)param_1 + 0x34e122) <= (int)(uint)*(ushort *)((long)param_1 + 0x7a0cc)
       ) {
      bVar20 = *(byte *)(param_1 + 0x69c25);
      uVar7 = (uint)bVar20;
      if (bVar20 != 0) {
        *(undefined1 *)((long)param_1 + 0x34e0f5) = 1;
        *(int *)((long)param_1 + 0x34e0bc) = *(int *)((long)param_1 + 0x34e0bc) + 0x1200;
        if (((bVar20 & 1) != 0) && (uVar9 = FUN_03f4e0bc(param_1 + 0x71438,0), (uVar9 & 1) == 0)) {
          uVar7 = uVar7 & 0xfe;
          *(byte *)((long)param_1 + 0x34e129) = *(byte *)((long)param_1 + 0x34e129) | 1;
        }
        if (((uVar7 >> 1 & 1) != 0) && (uVar9 = FUN_03f4e0bc(param_1 + 0x71442,1), (uVar9 & 1) == 0)
           ) {
          uVar7 = uVar7 & 0xfffffffd;
          *(byte *)((long)param_1 + 0x34e129) = *(byte *)((long)param_1 + 0x34e129) | 2;
        }
        if (((uVar7 >> 2 & 1) != 0) && (uVar9 = FUN_03f4e0bc(param_1 + 0x7144c,2), (uVar9 & 1) == 0)
           ) {
          uVar7 = uVar7 & 0xfb;
          *(byte *)((long)param_1 + 0x34e129) = *(byte *)((long)param_1 + 0x34e129) | 4;
        }
        if (((uVar7 >> 3 & 1) != 0) && (uVar9 = FUN_03f4e0bc(param_1 + 0x71456,3), (uVar9 & 1) == 0)
           ) {
          uVar7 = uVar7 & 0xf7;
          *(byte *)((long)param_1 + 0x34e129) = *(byte *)((long)param_1 + 0x34e129) | 8;
        }
        if (((uVar7 >> 4 & 1) != 0) && (uVar9 = FUN_03f4e0bc(param_1 + 0x71460,4), (uVar9 & 1) == 0)
           ) {
          uVar7 = uVar7 & 0xef;
          *(byte *)((long)param_1 + 0x34e129) = *(byte *)((long)param_1 + 0x34e129) | 0x10;
        }
        if (((uVar7 >> 5 & 1) != 0) && (uVar9 = FUN_03f4e0bc(param_1 + 0x7146a,5), (uVar9 & 1) == 0)
           ) {
          uVar7 = uVar7 & 0xdf;
          *(byte *)((long)param_1 + 0x34e129) = *(byte *)((long)param_1 + 0x34e129) | 0x20;
        }
        if (((uVar7 >> 6 & 1) != 0) && (uVar9 = FUN_03f4e0bc(param_1 + 0x71474,6), (uVar9 & 1) == 0)
           ) {
          uVar7 = uVar7 & 0xbf;
          *(byte *)((long)param_1 + 0x34e129) = *(byte *)((long)param_1 + 0x34e129) | 0x40;
        }
        bVar20 = (byte)uVar7;
        if ((uVar7 >> 7 != 0) && (uVar9 = FUN_03f4e0bc(param_1 + 0x7147e,7), (uVar9 & 1) == 0)) {
          bVar20 = bVar20 & 0x7f;
          *(byte *)((long)param_1 + 0x34e129) = *(byte *)((long)param_1 + 0x34e129) | 0x80;
        }
        *(undefined1 *)((long)param_1 + 0x34e0f5) = 0;
        *(byte *)(param_1 + 0x69c25) = bVar20;
      }
    }
    break;
  case 2:
    if ((char)((long *)param_1[0x69c0f])[1] != '\0') {
      (**(code **)(*(long *)param_1[0x69c0f] + 0x18))();
    }
    plVar2 = param_1 + 0x40ce;
    lVar8 = *param_1;
    iVar14 = *(int *)((long)param_1 + 0x34e0bc) - *(int *)(lVar8 + 0x28);
    *(int *)((long)param_1 + 0x34e0bc) = iVar14;
    *(int *)(param_1 + 0x69c18) = iVar14;
    sVar11 = *(short *)((long)param_1 + 0x3c);
    *(int *)((long)param_1 + 0x54) = *(int *)((long)param_1 + 0x54) - *(int *)(param_1[9] + 0x28);
    sVar12 = sVar11 + -1;
    if (sVar11 < 1) {
      if (sVar11 < 0) {
        sVar12 = 0;
        goto LAB_03fe7e64;
      }
    }
    else {
LAB_03fe7e64:
      *(short *)((long)param_1 + 0x3c) = sVar12;
    }
    if ((char)param_1[0x68e2] != '\0') {
      *(int *)plVar2 = (int)*plVar2 - *(int *)(lVar8 + 0x28);
    }
    sVar11 = *(short *)((long)param_1 + 0x34e122) + 1;
    iVar14 = (int)sVar11;
    *(short *)((long)param_1 + 0x34e122) = sVar11;
    if (iVar14 <= (int)(uint)*(ushort *)((long)param_1 + 0x7a0cc)) {
      *(short *)(param_1 + 0xf4bf) = sVar11;
      (**(code **)(**(long **)(lVar8 + 0x78) + 0x70))(*(long **)(lVar8 + 0x78),param_1 + 0x68f0);
      sVar11 = *(short *)((long)param_1 + 0x34e122);
      iVar14 = (int)sVar11;
      lVar8 = *param_1;
    }
    if (*(int *)(lVar8 + 8) <= iVar14) {
      *(undefined4 *)((long)param_1 + 0x34e094) = *(undefined4 *)(lVar8 + 0x1c);
      *(undefined4 *)(param_1 + 0x69c13) = *(undefined4 *)(lVar8 + 0x20);
      *(undefined4 *)((long)param_1 + 0x34e09c) = *(undefined4 *)(lVar8 + 0x28);
      sVar12 = *(short *)(lVar8 + 8);
      *(undefined1 *)((long)param_1 + 0x34e129) = 0;
      *pbVar1 = *pbVar1 & 0x7f;
      *(byte *)(param_1 + 0x69c24) = *(byte *)(param_1 + 0x69c24) ^ 1;
      bVar20 = *(byte *)((long)param_1 + 0x34e127);
      uVar7 = (uint)bVar20;
      *(short *)((long)param_1 + 0x34e122) = sVar11 - sVar12;
      *(undefined1 *)((long)param_1 + 0x34e0f5) = 1;
      *(byte *)(param_1 + 0x69c25) = bVar20;
      if (bVar20 == 0) {
        *(undefined1 *)((long)param_1 + 0x38a20b) = 0;
        *(undefined1 *)((long)param_1 + 0x38a209) = 0;
        *(undefined1 *)((long)param_1 + 0x38a25b) = 0;
        *(undefined1 *)((long)param_1 + 0x38a259) = 0;
        *(undefined1 *)((long)param_1 + 0x38a2ab) = 0;
        *(undefined1 *)((long)param_1 + 0x38a2a9) = 0;
        *(undefined1 *)((long)param_1 + 0x38a2fb) = 0;
        *(undefined1 *)((long)param_1 + 0x38a2f9) = 0;
        *(undefined1 *)((long)param_1 + 0x38a34b) = 0;
        *(undefined1 *)((long)param_1 + 0x38a349) = 0;
        *(undefined1 *)((long)param_1 + 0x38a39b) = 0;
        *(undefined1 *)((long)param_1 + 0x38a399) = 0;
        *(undefined1 *)((long)param_1 + 0x38a3eb) = 0;
        *(undefined1 *)((long)param_1 + 0x38a3e9) = 0;
        *(undefined1 *)((long)param_1 + 0x38a43b) = 0;
        *(undefined1 *)((long)param_1 + 0x38a439) = 0;
      }
      else {
        *(undefined1 *)((long)param_1 + 0x38a20b) = 0;
        *(undefined1 *)((long)param_1 + 0x38a209) = 0;
        *(int *)((long)param_1 + 0x34e0bc) = *(int *)((long)param_1 + 0x34e0bc) + 0x1200;
        if ((bVar20 & 1) != 0) {
          *(undefined1 *)((long)param_1 + 0x38a20a) = 0;
          *(short *)(param_1 + 0x7143b) = (short)param_1[0x7143a];
          uVar9 = FUN_03f4df84(param_1 + 0x71438);
          uVar7 = (uint)*(byte *)(param_1 + 0x69c25);
          if ((uVar9 & 1) == 0) {
            uVar7 = *(byte *)(param_1 + 0x69c25) & 0xfe;
            *(char *)(param_1 + 0x69c25) = (char)uVar7;
            *(byte *)((long)param_1 + 0x34e129) = *(byte *)((long)param_1 + 0x34e129) | 1;
          }
        }
        *(undefined1 *)((long)param_1 + 0x38a25b) = 0;
        *(undefined1 *)((long)param_1 + 0x38a259) = 0;
        if ((uVar7 >> 1 & 1) != 0) {
          *(undefined1 *)((long)param_1 + 0x38a25a) = 0;
          *(short *)(param_1 + 0x71445) = (short)param_1[0x71444];
          uVar9 = FUN_03f4df84(param_1 + 0x71442);
          uVar7 = (uint)*(byte *)(param_1 + 0x69c25);
          if ((uVar9 & 1) == 0) {
            uVar7 = *(byte *)(param_1 + 0x69c25) & 0xfffffffd;
            *(char *)(param_1 + 0x69c25) = (char)uVar7;
            *(byte *)((long)param_1 + 0x34e129) = *(byte *)((long)param_1 + 0x34e129) | 2;
          }
        }
        *(undefined1 *)((long)param_1 + 0x38a2ab) = 0;
        *(undefined1 *)((long)param_1 + 0x38a2a9) = 0;
        if ((uVar7 >> 2 & 1) != 0) {
          *(undefined1 *)((long)param_1 + 0x38a2aa) = 0;
          *(short *)(param_1 + 0x7144f) = (short)param_1[0x7144e];
          uVar9 = FUN_03f4df84(param_1 + 0x7144c);
          uVar7 = (uint)*(byte *)(param_1 + 0x69c25);
          if ((uVar9 & 1) == 0) {
            uVar7 = *(byte *)(param_1 + 0x69c25) & 0xfffffffb;
            *(char *)(param_1 + 0x69c25) = (char)uVar7;
            *(byte *)((long)param_1 + 0x34e129) = *(byte *)((long)param_1 + 0x34e129) | 4;
          }
        }
        *(undefined1 *)((long)param_1 + 0x38a2fb) = 0;
        *(undefined1 *)((long)param_1 + 0x38a2f9) = 0;
        if ((uVar7 >> 3 & 1) != 0) {
          *(undefined1 *)((long)param_1 + 0x38a2fa) = 0;
          *(short *)(param_1 + 0x71459) = (short)param_1[0x71458];
          uVar9 = FUN_03f4df84(param_1 + 0x71456);
          uVar7 = (uint)*(byte *)(param_1 + 0x69c25);
          if ((uVar9 & 1) == 0) {
            uVar7 = *(byte *)(param_1 + 0x69c25) & 0xfffffff7;
            *(char *)(param_1 + 0x69c25) = (char)uVar7;
            *(byte *)((long)param_1 + 0x34e129) = *(byte *)((long)param_1 + 0x34e129) | 8;
          }
        }
        *(undefined1 *)((long)param_1 + 0x38a34b) = 0;
        *(undefined1 *)((long)param_1 + 0x38a349) = 0;
        if ((uVar7 >> 4 & 1) != 0) {
          *(undefined1 *)((long)param_1 + 0x38a34a) = 0;
          *(short *)(param_1 + 0x71463) = (short)param_1[0x71462];
          uVar9 = FUN_03f4df84(param_1 + 0x71460);
          uVar7 = (uint)*(byte *)(param_1 + 0x69c25);
          if ((uVar9 & 1) == 0) {
            uVar7 = *(byte *)(param_1 + 0x69c25) & 0xffffffef;
            *(char *)(param_1 + 0x69c25) = (char)uVar7;
            *(byte *)((long)param_1 + 0x34e129) = *(byte *)((long)param_1 + 0x34e129) | 0x10;
          }
        }
        *(undefined1 *)((long)param_1 + 0x38a39b) = 0;
        *(undefined1 *)((long)param_1 + 0x38a399) = 0;
        if ((uVar7 >> 5 & 1) != 0) {
          *(undefined1 *)((long)param_1 + 0x38a39a) = 0;
          *(short *)(param_1 + 0x7146d) = (short)param_1[0x7146c];
          uVar9 = FUN_03f4df84(param_1 + 0x7146a);
          uVar7 = (uint)*(byte *)(param_1 + 0x69c25);
          if ((uVar9 & 1) == 0) {
            uVar7 = *(byte *)(param_1 + 0x69c25) & 0xffffffdf;
            *(char *)(param_1 + 0x69c25) = (char)uVar7;
            *(byte *)((long)param_1 + 0x34e129) = *(byte *)((long)param_1 + 0x34e129) | 0x20;
          }
        }
        *(undefined1 *)((long)param_1 + 0x38a3eb) = 0;
        *(undefined1 *)((long)param_1 + 0x38a3e9) = 0;
        if ((uVar7 >> 6 & 1) != 0) {
          *(undefined1 *)((long)param_1 + 0x38a3ea) = 0;
          *(short *)(param_1 + 0x71477) = (short)param_1[0x71476];
          uVar9 = FUN_03f4df84(param_1 + 0x71474);
          uVar7 = (uint)*(byte *)(param_1 + 0x69c25);
          if ((uVar9 & 1) == 0) {
            uVar7 = *(byte *)(param_1 + 0x69c25) & 0xffffffbf;
            *(char *)(param_1 + 0x69c25) = (char)uVar7;
            *(byte *)((long)param_1 + 0x34e129) = *(byte *)((long)param_1 + 0x34e129) | 0x40;
          }
        }
        *(undefined1 *)((long)param_1 + 0x38a43b) = 0;
        *(undefined1 *)((long)param_1 + 0x38a439) = 0;
        if (uVar7 >> 7 != 0) {
          *(undefined1 *)((long)param_1 + 0x38a43a) = 0;
          *(short *)(param_1 + 0x71481) = (short)param_1[0x71480];
          uVar9 = FUN_03f4df84(param_1 + 0x7147e);
          if ((uVar9 & 1) == 0) {
            *(byte *)(param_1 + 0x69c25) = *(byte *)(param_1 + 0x69c25) & 0x7f;
            *(byte *)((long)param_1 + 0x34e129) = *(byte *)((long)param_1 + 0x34e129) | 0x80;
          }
        }
      }
      *(undefined1 *)((long)param_1 + 0x34e0f5) = 0;
    }
    if (*(char *)((long)param_1 + 0x34e12c) == '\0') {
      sVar11 = *(short *)((long)param_1 + 0x34e122);
      iVar14 = (int)sVar11;
    }
    else {
      sVar11 = *(short *)((long)param_1 + 0x34e122);
      iVar14 = (int)sVar11;
      if (*(char *)((long)param_1 + 0x34e12d) == '\0') {
        if ((int)sVar11 == (uint)*(ushort *)((long)param_1 + 0x34e13c)) {
          *(undefined4 *)((long)param_1 + 0x34e0bc) = 0;
          *pbVar1 = *pbVar1 | 0x40;
          *(byte *)(param_1 + 0x71489) = *(byte *)(param_1 + 0x71489) | 0x40;
          bVar4 = (char)param_1[0x7148b] == '\0';
          if (!bVar4) {
            *(undefined1 *)(param_1 + 0x7148b) = 0;
            *(int *)((long)param_1 + 0x34e0b4) = *(int *)((long)param_1 + 0x34e0b4) + 1;
          }
          *(uint *)((long)param_1 + 0x38a454) = (uint)bVar4;
          if ((char)param_1[0x68e2] != '\0') {
            *(int *)plVar2 = 0;
          }
        }
      }
      else if (*(int *)((long)param_1 + 0x34e144) == (int)sVar11) {
        iVar16 = (int)param_1[0x69c14];
        if (iVar16 < *(int *)(*param_1 + 0x1c)) {
          uVar9 = 2;
          *(undefined4 *)((long)param_1 + 0x34e08c) = 0;
          *(undefined2 *)(param_1 + 0x69c15) = 2;
        }
        else {
          bVar4 = *(int *)(*param_1 + 0x20) <= iVar16;
          if (bVar4) {
            uVar15 = 2;
            *(undefined2 *)(param_1 + 0x69c15) = 1;
          }
          else {
            *(undefined2 *)(param_1 + 0x69c15) = 0;
            uVar15 = 1;
          }
          uVar9 = (ulong)bVar4;
          *(undefined4 *)((long)param_1 + 0x34e08c) = uVar15;
        }
        *(undefined4 *)((long)param_1 + uVar9 * 4 + 0x34e080) = 3;
      }
    }
    if (*(ushort *)((long)param_1 + 0x7a0cc) + 1 == iVar14) {
      plVar2 = param_1 + 0x4b640;
      if ((char)param_1[0xf4be] == '\0') {
        uVar6 = *(ushort *)((long)param_1 + 0x766fe);
        *(ushort *)((long)param_1 + 0x766fa) = uVar6;
        *(ushort *)((long)param_1 + 0x766fc) = uVar6 & ((uVar6 >> 9) * 0x1e0 ^ 0xffff);
      }
      *(undefined2 *)(param_1 + 0x69c25) = 0;
      *(undefined1 *)(param_1 + 0x69c29) = 1;
      if (*(char *)((long)param_1 + 0x34e12b) != '\0') {
        *(byte *)(param_1 + 0x71489) = *(byte *)(param_1 + 0x71489) | 0x80;
        *pbVar1 = *pbVar1 | 0x80;
        *(undefined4 *)(param_1 + 0x7148a) = 4;
      }
      *(undefined1 *)(*plVar2 + 0x78029) = 0;
      *(undefined1 *)(*plVar2 + 0x7802a) = 0;
      *(char *)(*plVar2 + 0x7802b) = *(char *)(*plVar2 + 0x7802b) + '\x01';
      *(undefined1 *)(*plVar2 + (ulong)*(byte *)(*plVar2 + 0x7802b) * 3 + 0x7802c) =
           *(undefined1 *)((long)param_1 + 0x7a0cc);
      *(undefined1 *)(*plVar2 + (ulong)*(byte *)(*plVar2 + 0x7802b) * 3 + 0x7802e) =
           *(undefined1 *)((long)param_1 + 0x7a5f1);
      *(char *)(*plVar2 + (ulong)*(byte *)(*plVar2 + 0x7802b) * 3 + 0x7802d) =
           *(char *)((long)param_1 + 0x34b21f) + -1;
      lVar8 = *plVar2;
      if (*(char *)(lVar8 + 0x7802b) != '\0') {
        uVar9 = 0;
        lVar10 = 0x7802f;
        do {
          pcVar3 = (char *)(lVar8 + lVar10);
          uVar9 = uVar9 + 1;
          lVar10 = lVar10 + 3;
          *(char *)(lVar8 + (ulong)(byte)pcVar3[-2] + 0x78029) =
               (*pcVar3 - pcVar3[-3]) + *(char *)(lVar8 + (ulong)(byte)pcVar3[-2] + 0x78029);
          lVar8 = *plVar2;
        } while (uVar9 < *(byte *)(lVar8 + 0x7802b));
      }
      *(undefined1 *)(lVar8 + 0x782f9) = 1;
      if (*(int *)(param_1[0xf4bd] + 0x5c) != 0) {
        *(undefined1 *)((long)param_1 + 0x34b222) = 0;
      }
      *(undefined1 *)((long)param_1 + 0x38a459) = 1;
    }
    else if (*(int *)(*param_1 + 0x2c) + (uint)*(ushort *)((long)param_1 + 0x7a0cc) == iVar14) {
      FUN_03f83600(param_1 + 0x69c20);
    }
    else if (sVar11 == 1) {
      *(undefined1 *)(param_1 + 0x69c29) = 0;
      *(byte *)(param_1 + 0x71489) = *(byte *)(param_1 + 0x71489) & 0x7f;
      FUN_03fc6030(param_1 + 0x68f0);
    }
    FUN_03f85710(param_1 + 0x200c,DAT_04c56b90);
    break;
  case 3:
    if (*(char *)((long)param_1 + 0x34e12d) != '\0') {
      *(int *)((long)param_1 + 0x34e0bc) = (int)param_1[0x69c14];
      *pbVar1 = *pbVar1 | 0x20;
      *(byte *)(param_1 + 0x71489) = *(byte *)(param_1 + 0x71489) | 0x40;
      bVar4 = (char)param_1[0x7148b] == '\0';
      if (!bVar4) {
        *(undefined1 *)(param_1 + 0x7148b) = 0;
        *(int *)((long)param_1 + 0x34e0b4) = *(int *)((long)param_1 + 0x34e0b4) + 1;
      }
      *(uint *)((long)param_1 + 0x38a454) = (uint)bVar4;
      if (*(char *)((long)param_1 + 0x34e12c) != '\0') {
        *(undefined4 *)((long)param_1 + (ulong)*(ushort *)(param_1 + 0x69c15) * 4 + 0x34e080) =
             *(undefined4 *)((long)param_1 + 0x34e08c);
      }
    }
    break;
  case 4:
    uVar9 = (ulong)*(byte *)((long)param_1 + 0x44);
    if (*(byte *)((long)param_1 + 0x44) < 3) {
      iVar14 = *(int *)((long)param_1 + 0x34);
      do {
        *(byte *)((long)param_1 + uVar9 + 0x15d) =
             *(char *)((long)param_1 + uVar9 + 0x15d) + 1U & 0xf;
        uVar18 = (uint)uVar9 & 0xff;
        piVar17 = (int *)((long)param_1 + uVar9 * 0xc + 0xc);
        *piVar17 = iVar14;
        iVar16 = piVar17[1];
        uVar7 = uVar18 + (uVar18 * 0x5556 + 0x5556 >> 0x10) * -3 + 1;
        uVar19 = uVar7 & 0xffff;
        iVar5 = *(int *)((long)param_1 + (ulong)uVar19 * 0xc + 0x10);
        if ((iVar5 != 0) &&
           (iVar5 = *(int *)((long)param_1 + (ulong)uVar19 * 0xc + 0xc) + (iVar5 - iVar14),
           iVar5 < iVar16)) {
          uVar7 = uVar7 & 0xffff;
          uVar9 = (ulong)uVar7;
          *(char *)((long)param_1 + 0x44) = (char)uVar7;
          iVar16 = iVar5;
        }
        uVar7 = uVar18 + (uVar18 * 0x5556 + 0xaaac >> 0x10) * -3 + 2;
        uVar18 = uVar7 & 0xffff;
        iVar5 = *(int *)((long)param_1 + (ulong)uVar18 * 0xc + 0x10);
        if ((iVar5 != 0) &&
           (iVar5 = *(int *)((long)param_1 + (ulong)uVar18 * 0xc + 0xc) + (iVar5 - iVar14),
           iVar5 < iVar16)) {
          uVar7 = uVar7 & 0xffff;
          uVar9 = (ulong)uVar7;
          *(char *)((long)param_1 + 0x44) = (char)uVar7;
          iVar16 = iVar5;
        }
      } while (iVar16 == 0);
      *(int *)((long)param_1 + 0x34) = iVar16 + iVar14;
      lVar10 = param_1[9];
      lVar13 = (long)*(int *)(lVar10 + 0x34) * (long)iVar16;
      lVar8 = lVar13 + 0xff;
      if (-1 < lVar13) {
        lVar8 = lVar13;
      }
      lVar8 = (long)(int)param_1[8] + (lVar8 >> 8);
      sVar11 = 0;
      if ((long)*(int *)(lVar10 + 0x28) != 0) {
        sVar11 = (short)(lVar8 / (long)*(int *)(lVar10 + 0x28));
      }
      *(short *)((long)param_1 + 0x3c) = sVar11;
      *(int *)(param_1 + 8) = (int)lVar8 - *(int *)(lVar10 + 0x28) * (int)sVar11;
    }
  }
LAB_03fe8654:
  uVar7 = *(uint *)((long)param_1 + (ulong)*(ushort *)((long)param_1 + 0x34e0ac) * 4 + 0x34e080);
  uVar6 = (ushort)uVar7;
  *(ushort *)((long)param_1 + 0x34e0ac) = uVar6;
  iVar14 = *(int *)((long)param_1 + (ulong)uVar6 * 4 + 0x34e094);
  *(int *)(param_1 + 0x69c16) = iVar14;
  if (((*(short *)((long)param_1 + 0x3c) == 0) && (*(byte *)((long)param_1 + 0x44) < 3)) &&
     ((int)param_1[8] <= iVar14)) {
    *(int *)(param_1 + 0x69c16) = (int)param_1[8];
    *(uint *)(param_1 + 0x69c12) = uVar7 & 0xffff;
    *(undefined2 *)((long)param_1 + 0x34e0ac) = 4;
  }
  return;
}

