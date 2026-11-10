
void FUN_001314d0(long param_1,void *param_2,void *param_3,uint param_4,ushort param_5,
                 ushort *param_6)

{
  ushort *puVar1;
  uint uVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  uint local_64;
  
  memcpy(param_2,param_3,0x6d0);
  uVar11 = param_4 - 1;
  uVar2 = uVar11 & 0xffff;
  if (uVar2 < 8) {
    uVar6 = -((ulong)(uVar11 >> 0xf) & 1) & 0xfffffffffff80000 | ((ulong)uVar11 & 0xffff) << 3;
    lVar9 = *(long *)(&DAT_040593d0 + uVar6);
    lVar7 = *(long *)(&DAT_04059410 + uVar6);
  }
  else {
    lVar9 = 0;
    lVar7 = 1;
  }
  lVar8 = 0;
  do {
    lVar12 = *(long *)((long)param_2 + lVar8);
    if (lVar12 == 0) goto joined_r0x001317d8;
    puVar1 = (ushort *)((long)param_2 + lVar8 + lVar9 * 4 + 0x30);
    uVar4 = puVar1[1];
    uVar5 = *puVar1;
    if (uVar4 < uVar5) goto LAB_00131900;
    cVar3 = *(char *)((long)param_2 + lVar8 + 0x48);
    if (cVar3 != '\x01') {
      uVar11 = 0xe0001;
      if (cVar3 != '\x02') {
        if (cVar3 == '\x03') {
          uVar11 = *(uint *)(lVar12 + 0x70);
          goto joined_r0x001315f8;
        }
        uVar11 = (*(uint *)(lVar12 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar12 + 8) & 0xff00ff) << 8
        ;
        uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
      }
      if (3 < uVar2) goto LAB_0013164c;
LAB_0013160c:
      if (param_5 < *(byte *)((long)param_2 + lVar8 + 0x49)) goto LAB_00131900;
      if (uVar11 == 0x80020000) {
        if ((((*param_6 >> 3 & 1) != 0) || (param_6[1] == 0)) || (param_6[2] == 0))
        goto LAB_00131900;
        goto LAB_001317c4;
      }
      if (((*param_6 >> 4 & 1) != 0) || (param_6[2] == 0)) goto LAB_00131900;
      if ((int)uVar11 < 0x20002) {
        switch(uVar11) {
        case 0:
        case 1:
          goto switchD_00131670_caseD_0;
        case 2:
          goto switchD_00131670_caseD_2;
        case 3:
          goto switchD_00131670_caseD_3;
        case 4:
          goto switchD_00131670_caseD_4;
        case 5:
          goto switchD_00131670_caseD_5;
        case 6:
          goto switchD_00131670_caseD_6;
        default:
          if (uVar11 != 0x80030000) {
            if (uVar11 == 0x10000) {
LAB_0013182c:
              if ((param_4 & 0xffff) - 1 < 2) {
                if (*(short *)(param_1 + 0x6f4a8) == 0) {
LAB_00131850:
                  if (uVar11 - 0x20002 < 2) goto LAB_001318bc;
                  if (uVar11 == 0x10000) goto LAB_00131770;
                  if (uVar11 == 0x40000) {
                    local_64 = (uint)*(byte *)(lVar12 + 7);
                    uVar10 = (uint)*(byte *)(lVar12 + 4) << 0x18 |
                             (uint)*(byte *)(lVar12 + 5) << 0x10 | (uint)*(byte *)(lVar12 + 6) << 8;
                    goto LAB_0013188c;
                  }
                }
              }
              else if ((param_4 & 0xffff) != 3) goto LAB_00131850;
            }
            goto LAB_00131900;
          }
          goto LAB_00131748;
        }
      }
      if ((int)uVar11 < 0xe0000) {
        if (1 < uVar11 - 0x20002) {
          if (uVar11 - 0x50000 < 2) goto switchD_00131670_caseD_6;
          if (uVar11 != 0x40000) goto LAB_00131900;
          uVar10 = (uint)*(byte *)(lVar12 + 4) << 0x18 | (uint)*(byte *)(lVar12 + 5) << 0x10 |
                   (uint)*(byte *)(lVar12 + 6) << 8;
          local_64 = (uint)*(byte *)(lVar12 + 7);
          if ((uVar10 | local_64) == 0x10000) goto LAB_0013182c;
LAB_0013188c:
          if ((uVar10 | local_64) == 0x20000) {
            if ((param_4 & 0xffff) - 1 < 2) {
              if (*(short *)(param_1 + 0x6f4a8) < 2) goto LAB_00131770;
            }
            else if ((param_4 & 0xffff) != 3) goto LAB_001317c4;
            goto LAB_00131900;
          }
          goto LAB_00131770;
        }
        goto LAB_001318bc;
      }
LAB_00131718:
      if (1 < uVar11 - 0xe0000) {
        if ((1 < uVar11 + 0xbffb0000) && (uVar11 != 0x40000006)) goto LAB_00131900;
switchD_00131670_caseD_6:
        if ((param_4 & 0xffff) == 9) goto LAB_00131900;
      }
      goto LAB_001317c4;
    }
    uVar11 = 0xe0000;
joined_r0x001315f8:
    if (uVar2 < 4) goto LAB_0013160c;
LAB_0013164c:
    if (0x20001 < (int)uVar11) {
      if ((int)uVar11 < 0xe0000) {
        if (uVar11 - 0x20002 < 2) {
LAB_001318bc:
          if ((param_4 & 0xffff) < 10) {
            uVar11 = 1 << (ulong)(param_4 & 0x1f) & 0x260;
joined_r0x00131760:
            if (uVar11 != 0) goto LAB_00131900;
          }
          goto LAB_001317c4;
        }
        if (uVar11 - 0x50000 < 2) goto switchD_00131670_caseD_6;
        if (uVar11 == 0x40000) goto LAB_00131770;
        goto LAB_00131900;
      }
      goto LAB_00131718;
    }
    if ((int)uVar11 < 0) {
      if (uVar11 != 0x80020000) {
        if (uVar11 != 0x80030000) goto LAB_00131900;
LAB_00131748:
        if ((param_4 & 0xffff) < 10) {
          uVar11 = 1 << (ulong)(param_4 & 0x1f) & 0x206;
          goto joined_r0x00131760;
        }
        goto LAB_001317c4;
      }
      goto switchD_00131670_caseD_6;
    }
    switch(uVar11) {
    case 0:
    case 1:
switchD_00131670_caseD_0:
      if (3 < (param_4 - 5 & 0xffff)) break;
      goto LAB_001317c4;
    case 2:
switchD_00131670_caseD_2:
      uVar11 = param_4 - 7;
      goto joined_r0x00131804;
    case 3:
switchD_00131670_caseD_3:
      if (((param_4 & 0xffff) < 9) && ((1 << (ulong)(param_4 & 0x1f) & 0x198U) != 0))
      goto LAB_001317c4;
      break;
    case 4:
switchD_00131670_caseD_4:
      uVar11 = param_4 - 3;
joined_r0x00131804:
      if (1 < (uVar11 & 0xffff)) break;
LAB_001317c4:
      *(ushort *)((long)param_2 + lVar8 + 0x30) = uVar5;
      *(ushort *)((long)param_2 + lVar8 + 0x32) = uVar4;
      *(undefined8 *)((long)param_2 + lVar8 + 0x34) = 0;
      goto joined_r0x001317d8;
    case 5:
switchD_00131670_caseD_5:
      if ((param_4 - 3 & 0xffff) < 6) goto LAB_001317c4;
      break;
    case 6:
      goto switchD_00131670_caseD_6;
    default:
      if (uVar11 == 0x10000) {
LAB_00131770:
        if (((param_4 & 0xffff) == 2) || ((param_4 & 0xffff) == 4)) goto LAB_001317c4;
      }
    }
LAB_00131900:
    *(undefined8 *)((long)param_2 + lVar8) = 0;
joined_r0x001317d8:
    lVar8 = lVar8 + 0x50;
    if (lVar8 == 0x640) {
      *(undefined8 *)((long)param_2 + 0x640) = *(undefined8 *)((long)param_3 + lVar7 * 8 + 0x640);
      *(undefined8 *)((long)param_2 + 0x650) = 0;
      *(undefined8 *)((long)param_2 + 0x648) = 0;
      return;
    }
  } while( true );
}

