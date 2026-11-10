
undefined8 FUN_0010c9a0(long param_1,char param_2,uint *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar10;
  byte bVar9;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  uint *puVar14;
  uint local_44;
  
  if (param_1 == 0) {
    return 0xae30;
  }
  if (param_3 == (uint *)0x0) {
    return 0x8f30;
  }
  if (1 < (param_4 & 0xff)) {
    return 0x9a30;
  }
  if ((param_2 != '\x03') && (param_2 != '\0')) {
    return 0xa630;
  }
  if (param_5 < 0x1d) {
    return 0x9330;
  }
  if (param_2 == '\x03') {
    uVar11 = param_3[0x1c];
    if ((1 < uVar11 + 0xbffb0000) && (uVar11 != 0x40000006)) {
      return 0xa630;
    }
    uVar11 = FUN_00129f60(param_1,uVar11 & 0xfffff,*(undefined8 *)param_3,param_3[0x1e]);
    if (uVar11 != param_5) {
      return 0x9330;
    }
    puVar14 = *(uint **)(param_3 + 2);
    bVar9 = (byte)puVar14[3];
    bVar3 = *(byte *)((long)puVar14 + 0xd);
    bVar4 = *(byte *)((long)puVar14 + 0xe);
    bVar5 = *(byte *)((long)puVar14 + 0xf);
    bVar10 = (byte)puVar14[4];
    bVar6 = *(byte *)((long)puVar14 + 0x11);
    bVar7 = *(byte *)((long)puVar14 + 0x12);
    bVar8 = *(byte *)((long)puVar14 + 0x13);
    if (param_3[0x1d] !=
        ((uint)bVar9 << 0x18 | (uint)bVar3 << 0x10 | (uint)bVar4 << 8 | (uint)bVar5) +
        ((uint)bVar10 << 0x18 | (uint)bVar6 << 0x10 | (uint)bVar7 << 8 | (uint)bVar8) + 0x1c) {
      return 0x9330;
    }
  }
  else {
    bVar9 = (byte)param_3[3];
    bVar3 = *(byte *)((long)param_3 + 0xd);
    bVar4 = *(byte *)((long)param_3 + 0xe);
    bVar5 = *(byte *)((long)param_3 + 0xf);
    bVar6 = *(byte *)((long)param_3 + 0x11);
    bVar10 = (byte)param_3[4];
    bVar7 = *(byte *)((long)param_3 + 0x12);
    bVar8 = *(byte *)((long)param_3 + 0x13);
    if (((uint)bVar9 << 0x18 | (uint)bVar3 << 0x10 | (uint)bVar4 << 8 | (uint)bVar5) +
        ((uint)bVar10 << 0x18 | (uint)bVar6 << 0x10 | (uint)bVar7 << 8 | (uint)bVar8) + 0x1c !=
        param_5) {
      return 0x9330;
    }
    if (param_2 != '\0') {
      return 0x9028;
    }
    puVar14 = param_3;
  }
  uVar11 = (*puVar14 & 0xff00ff00) >> 8 | (*puVar14 & 0xff00ff) << 8;
  if ((uVar11 >> 0x10 | uVar11 << 0x10) != 0x4e4a4443) {
    return 0x9028;
  }
  uVar11 = (puVar14[1] & 0xff00ff00) >> 8 | (puVar14[1] & 0xff00ff) << 8;
  uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
  if ((int)uVar11 < 0x30000) {
    if ((1 < uVar11 - 0x20000) && (uVar11 != 0x10000)) {
      return 0x9028;
    }
  }
  else if ((uVar11 != 0x40000) && (uVar11 != 0x30000)) {
    return 0x9028;
  }
  if (0x6e < ((ulong)(byte)puVar14[5] << 0x18 | (ulong)*(byte *)((long)puVar14 + 0x15) << 0x10 |
              (ulong)*(byte *)((long)puVar14 + 0x16) << 8 | (ulong)*(byte *)((long)puVar14 + 0x17)))
  {
    return 0x9028;
  }
  uVar2 = puVar14[2];
  if (0x6e < ((ulong)(byte)puVar14[6] << 0x18 | (ulong)*(byte *)((long)puVar14 + 0x19) << 0x10 |
              (ulong)*(byte *)((long)puVar14 + 0x1a) << 8 | (ulong)*(byte *)((long)puVar14 + 0x1b)))
  {
    return 0x9028;
  }
  uVar1 = ((uint)bVar10 << 0x18 | (uint)bVar6 << 0x10 | (uint)bVar7 << 8 | (uint)bVar8) +
          ((uint)bVar9 << 0x18 | (uint)bVar3 << 0x10 | (uint)bVar4 << 8 | (uint)bVar5);
  if (param_2 == '\x03') {
    iVar12 = FUN_0010db70(param_3,uVar1 + 0x18,4,&local_44);
    if (iVar12 < 0) {
      return 0x9028;
    }
    uVar1 = (local_44 & 0xff00ff00) >> 8 | (local_44 & 0xff00ff) << 8;
    uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  }
  else {
    uVar1 = *(uint *)((long)(puVar14 + 6) + (ulong)uVar1);
    uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
    uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  }
  if (uVar1 != 0x4e4a4443) {
    return 0x9028;
  }
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  if ((int)uVar2 < 0x10000) {
    if (0 < (int)uVar2) {
      if (4 < uVar2 - 2) {
        if (uVar2 != 1) {
          return 0x8e28;
        }
        uVar11 = uVar11 | 0x10000;
joined_r0x0010cda8:
        if (uVar11 == 0x30000) {
          return 0;
        }
        return 0x9028;
      }
      goto LAB_0010cd30;
    }
    if (uVar2 != 0x80020000) {
      if (uVar2 != 0x80030000) {
        if (uVar2 != 0) {
          return 0x8e28;
        }
        goto LAB_0010cd30;
      }
      if ((uVar11 | 0x10000) != 0x30000) {
        return 0x9028;
      }
      goto LAB_0010cd74;
    }
  }
  else {
    if (0xeffff < (int)uVar2) {
      if (1 < uVar2 + 0xbffb0000) {
        if (uVar2 == 0xf0000) {
          if (uVar11 == 0x20001) {
            return 0;
          }
          goto joined_r0x0010cda8;
        }
        if (uVar2 != 0x40000006) {
          return 0x8e28;
        }
      }
LAB_0010cd30:
      if (uVar11 == 0x20000) {
        return 0;
      }
      return 0x9028;
    }
    if (0x3ffff < (int)uVar2) {
      if (1 < uVar2 - 0x50000) {
        if (uVar2 != 0x40000) {
          return 0x8e28;
        }
        if (uVar11 == 0x10000) {
          return 0;
        }
      }
      goto LAB_0010cd30;
    }
    if (uVar2 == 0x10000) {
      if (uVar11 == 0x10000) {
        return 0;
      }
      return 0x9028;
    }
    if (uVar2 == 0x20002) goto LAB_0010cd30;
    if (uVar2 != 0x20003) {
      return 0x8e28;
    }
  }
  if (((uVar11 != 0x20000) && (uVar11 != 0x40000)) && (uVar11 != 0x30000)) {
    return 0x9028;
  }
  if (uVar2 != 0x80020000) {
    return 0;
  }
LAB_0010cd74:
  uVar13 = FUN_0011ce20(param_1,param_3,param_4);
  return uVar13;
}

