
void FUN_029cf3f0(long *param_1,long param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  byte bVar12;
  int iVar13;
  byte *local_158;
  undefined8 local_150;
  int local_148;
  byte abStack_144 [28];
  undefined2 local_128 [2];
  undefined8 local_124;
  undefined8 local_11c;
  undefined4 local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined1 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  int local_90;
  byte *local_88;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  local_158 = *(byte **)(param_2 + 0x40);
  local_bc = 0xffffffffffffffff;
  local_b4 = 0xffffffffffffffff;
  local_110 = 0xbf800000;
  uStack_108 = 0;
  local_128[0] = 0;
  local_124 = 0xffffffffffffffff;
  local_11c = 0xffffffffffffffff;
  local_114 = 0xffffffff;
  local_c0 = 0;
  local_ac = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = (byte *)0x0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_100 = 0xffffffffffffffff;
  uStack_f8 = 0xffffffff00000000;
  local_f0 = 0xffffffff00000000;
  uStack_e8 = 0xffffffffffffffff;
  local_e0 = 0;
  uStack_d8 = 0xffffffff;
  local_d0 = 0xffffffff00000000;
  uStack_c8 = 0xffffffff00000000;
  local_a8 = 0xffffffffffffffff;
  uStack_a0 = 0xffffffffbf800000;
  local_150 = CONCAT44(local_150._4_4_,(int)*(undefined8 *)(param_2 + 0x48));
  FUN_029a7b28(*(long *)PTR_DAT_04bb26a8 + 0x6d8,local_128,&local_158);
  local_158 = abStack_144;
  local_148 = 0;
  local_150 = 0x18;
  if (local_88 == (byte *)0x0) goto LAB_029cf824;
  uVar7 = (uint)*local_88;
  iVar6 = (int)*(char *)(param_2 + 6);
  if ((int)*(char *)(param_2 + 6) < (int)(uint)*local_88) {
    cVar5 = '\0';
    do {
      uVar7 = uVar7 - 0xc;
      cVar5 = cVar5 + '\f';
    } while (iVar6 < (int)(uVar7 & 0xff));
  }
  else {
    cVar5 = '\0';
  }
  cVar9 = *(char *)(param_2 + 7);
  if (local_90 == 0) {
LAB_029cf68c:
    iVar11 = local_90;
  }
  else {
    iVar11 = local_90 + -1;
    do {
      bVar12 = local_88[iVar11] - cVar5;
      if ((int)(uint)bVar12 < (int)cVar9) goto LAB_029cf68c;
      if (((int)(uint)bVar12 <= iVar6) && (local_148 < (int)local_150)) {
        local_148 = local_148 + 1;
        iVar8 = (int)local_150;
        if (0 < local_150._4_4_) {
          iVar8 = local_150._4_4_;
        }
        local_150 = CONCAT44(iVar8 + -1,(int)local_150);
        iVar13 = (int)local_150;
        if (iVar8 <= (int)local_150) {
          iVar13 = 0;
        }
        local_158[(iVar8 + -1) - iVar13] = bVar12;
      }
      iVar11 = iVar11 + -1;
    } while (iVar11 != -1);
    if (local_90 == 0) goto LAB_029cf68c;
    iVar11 = local_90 + -1;
    do {
      bVar12 = (local_88[iVar11] - cVar5) - 0xc;
      if ((int)(uint)bVar12 < (int)cVar9) goto LAB_029cf68c;
      if (((int)(uint)bVar12 <= iVar6) && (local_148 < (int)local_150)) {
        local_148 = local_148 + 1;
        iVar8 = (int)local_150;
        if (0 < local_150._4_4_) {
          iVar8 = local_150._4_4_;
        }
        local_150 = CONCAT44(iVar8 + -1,(int)local_150);
        iVar13 = (int)local_150;
        if (iVar8 <= (int)local_150) {
          iVar13 = 0;
        }
        local_158[(iVar8 + -1) - iVar13] = bVar12;
      }
      iVar11 = iVar11 + -1;
    } while (iVar11 != -1);
    if (local_90 != 0) {
      iVar11 = local_90 + -1;
      do {
        bVar12 = (local_88[iVar11] - cVar5) - 0x18;
        if ((int)(uint)bVar12 < (int)cVar9) break;
        if (((int)(uint)bVar12 <= iVar6) && (local_148 < (int)local_150)) {
          local_148 = local_148 + 1;
          iVar8 = (int)local_150;
          if (0 < local_150._4_4_) {
            iVar8 = local_150._4_4_;
          }
          local_150 = CONCAT44(iVar8 + -1,(int)local_150);
          iVar13 = (int)local_150;
          if (iVar8 <= (int)local_150) {
            iVar13 = 0;
          }
          local_158[(iVar8 + -1) - iVar13] = bVar12;
        }
        iVar11 = iVar11 + -1;
      } while (iVar11 != -1);
      goto LAB_029cf68c;
    }
    iVar11 = 0;
  }
  bVar12 = local_88[(long)iVar11 + -1];
  cVar5 = '\f';
  do {
    cVar10 = cVar5;
    bVar12 = bVar12 + 0xc;
    iVar8 = (int)cVar9;
    cVar5 = cVar10 + '\f';
  } while ((int)(uint)bVar12 < iVar8);
  if (iVar11 != 0) {
    iVar13 = 0;
    do {
      bVar12 = local_88[iVar13] + cVar10;
      if (iVar6 < (int)(uint)bVar12) goto LAB_029cf824;
      if ((iVar8 <= (int)(uint)bVar12) && (local_148 < (int)local_150)) {
        iVar1 = 0;
        if ((int)local_150 <= local_150._4_4_ + local_148) {
          iVar1 = (int)local_150;
        }
        local_158[(local_150._4_4_ + local_148) - iVar1] = bVar12;
        local_148 = local_148 + 1;
      }
      iVar13 = iVar13 + 1;
    } while (iVar11 != iVar13);
    if (local_90 != 0) {
      iVar11 = 0;
      do {
        bVar12 = local_88[iVar11] + cVar10 + '\f';
        if (iVar6 < (int)(uint)bVar12) goto LAB_029cf824;
        if ((iVar8 <= (int)(uint)bVar12) && (local_148 < (int)local_150)) {
          iVar13 = 0;
          if ((int)local_150 <= local_150._4_4_ + local_148) {
            iVar13 = (int)local_150;
          }
          local_158[(local_150._4_4_ + local_148) - iVar13] = bVar12;
          local_148 = local_148 + 1;
        }
        iVar11 = iVar11 + 1;
      } while (local_90 != iVar11);
      if (local_90 != 0) {
        iVar11 = 0;
        do {
          bVar12 = cVar10 + '\x18' + local_88[iVar11];
          if (iVar6 < (int)(uint)bVar12) break;
          if ((iVar8 <= (int)(uint)bVar12) && (local_148 < (int)local_150)) {
            iVar13 = 0;
            if ((int)local_150 <= local_150._4_4_ + local_148) {
              iVar13 = (int)local_150;
            }
            local_158[(local_150._4_4_ + local_148) - iVar13] = bVar12;
            local_148 = local_148 + 1;
          }
          iVar11 = iVar11 + 1;
        } while (local_90 != iVar11);
      }
    }
  }
LAB_029cf824:
  puVar4 = PTR_DAT_04bb2120;
  if (local_148 < 1) {
    *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
    param_1[1] = (long)puVar4;
  }
  else {
    cVar5 = FUN_029cf940(param_2,param_3,&local_158,0);
    if (('\x01' < *(char *)(param_2 + 3)) && (*(char *)(param_2 + 4) == cVar5)) {
      cVar5 = FUN_029cf940(param_2,param_3,&local_158,1);
    }
    puVar4 = PTR_DAT_04bb2120;
    *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
    param_1[1] = (long)puVar4;
    if (cVar5 != '\0') {
      cVar9 = *(char *)(param_2 + 2) + '\x01';
      bVar12 = (cVar5 + param_4 * '\x19') - 0x37;
      uVar7 = cVar9 * 0x2b;
      puVar2 = &DAT_055ea278 + (ulong)bVar12 * 2;
      if (99 < bVar12) {
        puVar2 = &DAT_055ea8a8;
      }
      cVar10 = *(char *)(param_2 + 3);
      param_1[1] = puVar2[1];
      cVar3 = *(char *)(param_2 + 4);
      *(char *)(param_2 + 4) = cVar5;
      *(byte *)(param_2 + 2) = cVar9 + (((byte)(uVar7 >> 0xf) & 1) + (char)(uVar7 >> 9)) * -0xc;
      cVar9 = '\x01';
      if (cVar3 == cVar5) {
        cVar9 = cVar10 + '\x01';
      }
      *(char *)(param_2 + 3) = cVar9;
    }
  }
  return;
}

