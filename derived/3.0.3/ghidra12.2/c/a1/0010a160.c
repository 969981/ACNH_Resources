
ulong FUN_0010a160(long param_1,long param_2,undefined4 param_3,char *param_4)

{
  char cVar1;
  bool bVar2;
  short sVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  byte *pbVar7;
  undefined1 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  long local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_6c;
  undefined2 local_68;
  
  uVar12 = 0;
  bVar2 = false;
  uVar13 = 0;
  *param_4 = '\x01';
  do {
    lVar9 = param_2 + uVar12 * 0x70;
    *(undefined1 *)(param_1 + uVar12 + 0x6f4fc) = 0;
    plVar10 = (long *)(lVar9 + 0x60);
    lVar6 = *plVar10;
    if (lVar6 != 0) {
      cVar1 = *(char *)(param_2 + uVar12 * 0x70 + 0xb8);
      if (cVar1 == '\x01') {
        uVar5 = 0xe0000;
        lVar6 = *(long *)(param_2 + uVar12 * 0x70 + 0x70);
      }
      else if (cVar1 == '\x02') {
        uVar5 = 0xe0001;
        lVar6 = *(long *)(param_2 + uVar12 * 0x70 + 0x70);
      }
      else if (cVar1 == '\x03') {
        uVar5 = *(uint *)(lVar6 + 0x70);
        lVar6 = *(long *)(param_2 + uVar12 * 0x70 + 0x70);
      }
      else {
        uVar5 = (*(uint *)(lVar6 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar6 + 8) & 0xff00ff) << 8;
        uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
        lVar6 = *(long *)(param_2 + uVar12 * 0x70 + 0x70);
      }
      if (lVar6 != 0) {
        lVar6 = *(long *)(*(long *)(param_2 + 0x28) + uVar12 * 0x50 + 0x40);
        if (lVar6 != 0) {
          *(undefined1 *)(lVar6 + 0x2050) = 0;
          lVar6 = uVar12 * 0x50;
          *(undefined1 *)(*(long *)(*(long *)(param_2 + 0x28) + lVar6 + 0x40) + 0x2051) = 0;
          *(undefined2 *)(*(long *)(*(long *)(param_2 + 0x28) + lVar6 + 0x40) + 0x1fe0) = 0;
          *(undefined2 *)(*(long *)(*(long *)(param_2 + 0x28) + lVar6 + 0x40) + 0x1fe2) = 0;
        }
        bVar2 = true;
      }
      lVar9 = lVar9 + 0x58;
      if ((int)uVar5 < 0x20002) {
        if ((int)uVar5 < 0) {
          if ((uVar5 != 0x80020000) && (uVar5 != 0x80030000)) {
            return 0x8e3c;
          }
LAB_0010a3c4:
          uVar4 = FUN_00114f80(param_1,param_2,lVar9,param_3);
          sVar3 = (short)uVar4;
        }
        else {
          if (uVar5 < 6) {
            uVar4 = FUN_0010dde0(param_2,lVar9);
            sVar3 = (short)uVar4;
joined_r0x0010a3a4:
            if (sVar3 < 0) {
              return uVar4;
            }
            goto LAB_0010a464;
          }
          if (uVar5 == 6) {
LAB_0010a408:
            uVar4 = FUN_00132970(param_1,param_2,lVar9,param_3,uVar12 & 0xffffffff);
            sVar3 = (short)uVar4;
          }
          else {
            if (uVar5 != 0x10000) {
              return 0x8e3c;
            }
            uVar4 = FUN_001145c0(param_2,lVar9);
            sVar3 = (short)uVar4;
          }
        }
joined_r0x0010a35c:
        if (sVar3 < 0) {
          return uVar4;
        }
      }
      else {
        if ((int)uVar5 < 0xe0000) {
          if (1 < uVar5 - 0x20002) {
            if (uVar5 - 0x50000 < 2) goto LAB_0010a408;
            if (uVar5 != 0x40000) {
              return 0x8e3c;
            }
            uVar4 = FUN_0013d430(param_1,param_2,lVar9,uVar12 & 0xffffffff);
            sVar3 = (short)uVar4;
            goto joined_r0x0010a35c;
          }
          goto LAB_0010a3c4;
        }
        if (1 < uVar5 - 0xe0000) {
          if ((1 < uVar5 + 0xbffb0000) && (uVar5 != 0x40000006)) {
            return 0x8e3c;
          }
          uVar4 = FUN_0011f890(param_1,param_2,lVar9,param_3,uVar12 & 0xffffffff);
          sVar3 = (short)uVar4;
          goto joined_r0x0010a3a4;
        }
        local_6c = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_a0 = *(undefined8 *)(param_2 + 0x28);
        local_68 = (undefined2)uVar12;
        local_b0 = param_2;
        lStack_a8 = lVar9;
        sVar3 = (*(code *)*plVar10)(param_1,1,&local_b0);
        uVar5 = (uint)sVar3;
        uVar4 = (ulong)uVar5;
        if ((int)uVar5 < 0) {
          return (ulong)(uVar5 << 8 | 0xffff8090);
        }
      }
LAB_0010a464:
      if ((uVar4 & 0xffff) == 0) {
        pbVar7 = (byte *)(param_2 + uVar12 * 0x70 + 0xb7);
        if (((*pbVar7 & 0xf) == 3) && (*param_4 == '\x01')) {
          *param_4 = '\0';
        }
        *pbVar7 = 3;
      }
      else {
        uVar13 = 1;
        *param_4 = '\0';
      }
    }
    uVar12 = uVar12 + 1;
    if (0x13 < uVar12) {
      if ((uVar13 != 0) || (!bVar2)) {
        return (ulong)uVar13;
      }
      if ((*(char *)(param_2 + 0x53) < '\0') || (1 < *(byte *)(param_2 + 0x50))) {
        return 0;
      }
      lVar9 = 0;
      uVar8 = 5;
      if (*(byte *)(param_2 + 0x50) != 0) {
        uVar8 = 6;
      }
      *(undefined1 *)(param_2 + 0x50) = uVar8;
      do {
        lVar6 = param_2 + lVar9;
        lVar11 = *(long *)(lVar6 + 0x60);
        if (lVar11 == 0) goto LAB_0010a584;
        if (*(byte *)(lVar6 + 0xb8) - 1 < 2) {
LAB_0010a578:
          if (*(long *)(lVar6 + 0x70) != 0) {
LAB_0010a580:
            *(undefined1 *)(lVar6 + 0xb7) = 1;
          }
        }
        else {
          if (*(byte *)(lVar6 + 0xb8) == 3) {
            uVar13 = *(uint *)(lVar11 + 0x70);
          }
          else {
            uVar13 = (*(uint *)(lVar11 + 8) & 0xff00ff00) >> 8 |
                     (*(uint *)(lVar11 + 8) & 0xff00ff) << 8;
            uVar13 = uVar13 >> 0x10 | uVar13 << 0x10;
          }
          if (0xdffff < (int)uVar13) {
            if (((1 < uVar13 - 0xe0000) && (1 < uVar13 + 0xbffb0000)) && (uVar13 != 0x40000006))
            goto LAB_0010a584;
            goto LAB_0010a578;
          }
          if (uVar13 - 0x50000 < 2) goto LAB_0010a578;
          if (uVar13 == 0x80020000) {
            if (((*(char *)(param_1 + 3) == '\0') && (*(ushort *)(param_1 + 0x6d63a) - 2 < 3)) &&
               (*(ushort *)(param_1 + 0x6d642) <= *(ushort *)(param_1 + 0x6f4a6)))
            goto LAB_0010a584;
            goto LAB_0010a580;
          }
          if (uVar13 == 6) goto LAB_0010a578;
        }
LAB_0010a584:
        lVar9 = lVar9 + 0x70;
      } while (lVar9 != 0x8c0);
      uVar12 = 0;
      uVar13 = 0;
    }
  } while( true );
}

