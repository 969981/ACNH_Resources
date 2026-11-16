
void FUN_026b7690(byte *param_1,undefined2 *param_2,int *param_3,undefined4 param_4,uint param_5)

{
  undefined8 uVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  byte *pbVar16;
  byte *pbVar17;
  undefined *local_98;
  char *pcStack_90;
  undefined1 auStack_88 [8];
  undefined *local_80;
  undefined1 *puStack_78;
  undefined4 local_70;
  undefined1 local_6c [7];
  undefined1 local_65;
  
  puVar4 = PTR_DAT_04bb43c0;
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(param_2);
  if (*(long *)puVar4 == 0) {
    return;
  }
  lVar12 = *(long *)(lVar12 + 0x57e58);
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
  if (*(uint *)(lVar12 + 0x1d8) <= uVar5) {
    return;
  }
  if (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) == 0) {
    return;
  }
  uVar13 = 0;
  pbVar8 = param_1 + 0x112ec;
  lVar12 = *(long *)puVar4;
  pbVar16 = pbVar8;
  do {
    uVar5 = FUN_0277d6c4(pbVar16);
    if (*(long *)puVar4 == 0) {
LAB_026b7780:
      if ((uVar13 & 0xffffffc0) == 0) goto LAB_026b78b8;
      break;
    }
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((*(uint *)(lVar12 + 0x1d8) <= uVar5) ||
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_026b7780;
    uVar13 = uVar13 + 1;
    pbVar16 = pbVar16 + 0x4c;
    lVar12 = *(long *)puVar4;
  } while (uVar13 != 0x40);
  uVar15 = 0xffffffff;
  uVar5 = 0;
  lVar12 = 0;
  lVar14 = 0x11334;
  uVar11 = 0xffffffff;
  do {
    bVar2 = param_1[lVar14];
    if ((int)uVar15 < (int)(uint)bVar2) {
      uVar5 = 1;
      uVar11 = (int)lVar12;
      uVar15 = (uint)bVar2;
    }
    else if (uVar15 == bVar2) {
      if (DAT_05594b4c == '\x01') {
        uVar6 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
        DAT_05582b70 = DAT_05582b74;
        DAT_05582b74 = DAT_05582b78;
        uVar6 = uVar6 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar6 ^ DAT_05582b7c;
        DAT_05582b78 = DAT_05582b7c;
        DAT_05582b7c = uVar6;
      }
      else {
        uVar6 = nn::os::GetSystemTick();
        uVar3 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
        uVar6 = uVar3 ^ uVar3 * 0x800;
        uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 2;
        uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 3;
        uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 4;
        uVar6 = uVar6 >> 8 ^ uVar3 >> 0x13 ^ uVar6 ^ uVar3;
      }
      uVar5 = uVar5 + 1;
      if (((ulong)uVar6 * (ulong)uVar5 & 0xffffffff00000000) == 0) {
        uVar11 = (int)lVar12;
      }
    }
    lVar12 = lVar12 + 1;
    lVar14 = lVar14 + 0x4c;
  } while (lVar12 != 0x40);
  FUN_026b7b40(param_1,uVar11,param_5 & 1);
  uVar13 = 0x3f;
LAB_026b78b8:
  uVar13 = uVar13 & 0xffffffff;
  pbVar17 = pbVar8 + uVar13 * 0x4c;
  *(undefined2 *)pbVar17 = *param_2;
  pbVar17[2] = *(byte *)(param_2 + 1);
  pbVar17[3] = *(byte *)((long)param_2 + 3);
  *(undefined4 *)(pbVar17 + 4) = *(undefined4 *)(param_2 + 2);
  pbVar16 = pbVar17 + 8;
  if (*(int *)(param_2 + 4) == 0) {
    pbVar17[0x20] = 0;
    pbVar17[0x21] = 0;
    pbVar17[0x22] = 0;
    pbVar17[0x23] = 0;
    pbVar16[0] = 0;
    pbVar16[1] = 0;
    pbVar16[2] = 0;
    pbVar16[3] = 0;
    pbVar16[4] = 0;
    pbVar16[5] = 0;
    pbVar16[6] = 0;
    pbVar16[7] = 0;
    pbVar17[0x10] = 0;
    pbVar17[0x11] = 0;
    pbVar17[0x12] = 0;
    pbVar17[0x13] = 0;
    pbVar17[0x14] = 0;
    pbVar17[0x15] = 0;
    pbVar17[0x16] = 0;
    pbVar17[0x17] = 0;
    pbVar17[0x18] = 0;
    pbVar17[0x19] = 0;
    pbVar17[0x1a] = 0;
    pbVar17[0x1b] = 0;
    pbVar17[0x1c] = 0;
    pbVar17[0x1d] = 0;
    pbVar17[0x1e] = 0;
    pbVar17[0x1f] = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_2 + 4);
    uVar1 = *(undefined8 *)(param_2 + 8);
    uVar10 = *(undefined8 *)(param_2 + 0xc);
    *(undefined4 *)(pbVar17 + 0x20) = *(undefined4 *)(param_2 + 0x10);
    *(undefined8 *)pbVar16 = uVar7;
    *(undefined8 *)(pbVar17 + 0x10) = uVar1;
    *(undefined8 *)(pbVar17 + 0x18) = uVar10;
  }
  if ((param_3 == (int *)0x0) || (*param_3 == 0)) {
    pbVar16 = pbVar8 + uVar13 * 0x4c + 0x3c;
    pbVar16[0] = 0;
    pbVar16[1] = 0;
    pbVar16[2] = 0;
    pbVar16[3] = 0;
    pbVar16 = pbVar8 + uVar13 * 0x4c + 0x34;
    pbVar16[0] = 0;
    pbVar16[1] = 0;
    pbVar16[2] = 0;
    pbVar16[3] = 0;
    pbVar16[4] = 0;
    pbVar16[5] = 0;
    pbVar16[6] = 0;
    pbVar16[7] = 0;
    pbVar16 = pbVar8 + uVar13 * 0x4c + 0x2c;
    pbVar16[0] = 0;
    pbVar16[1] = 0;
    pbVar16[2] = 0;
    pbVar16[3] = 0;
    pbVar16[4] = 0;
    pbVar16[5] = 0;
    pbVar16[6] = 0;
    pbVar16[7] = 0;
    pbVar16 = pbVar8 + uVar13 * 0x4c + 0x24;
    pbVar16[0] = 0;
    pbVar16[1] = 0;
    pbVar16[2] = 0;
    pbVar16[3] = 0;
    pbVar16[4] = 0;
    pbVar16[5] = 0;
    pbVar16[6] = 0;
    pbVar16[7] = 0;
  }
  else {
    uVar7 = *(undefined8 *)param_3;
    uVar1 = *(undefined8 *)(param_3 + 2);
    uVar10 = *(undefined8 *)(param_3 + 4);
    *(int *)(pbVar8 + uVar13 * 0x4c + 0x3c) = param_3[6];
    *(undefined8 *)(pbVar8 + uVar13 * 0x4c + 0x34) = uVar10;
    *(undefined8 *)(pbVar8 + uVar13 * 0x4c + 0x2c) = uVar1;
    *(undefined8 *)(pbVar8 + uVar13 * 0x4c + 0x24) = uVar7;
  }
  *(undefined4 *)(pbVar8 + uVar13 * 0x4c + 0x40) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)(pbVar8 + uVar13 * 0x4c + 0x44) = param_4;
  pbVar8[uVar13 * 0x4c + 0x48] = 0;
  if ((param_5 & 1) != 0) {
    uVar7 = FUN_021d7d60(param_1);
    FUN_020edee4(uVar7,pbVar17);
  }
  if (param_3 != (int *)0x0) {
    local_65 = 0;
    local_70 = 8;
    puStack_78 = local_6c;
    local_6c[0] = 0;
    local_80 = PTR_DAT_04bb3768 + 0x10;
    FUN_038d1270(&local_80,"-----");
    if ((ulong)*param_1 < 0x23) {
      FUN_038d1270(&local_80,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*param_1 * 8 + 0xb0)
                   ,param_1[1]);
    }
    FUN_021f5aa0(auStack_88,&local_80);
    lVar12 = *(long *)puVar4;
    uVar5 = FUN_0277d6c4(auStack_88);
    if (*(long *)puVar4 != 0) {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if (((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
          (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
         (uVar13 = FUN_0277d7b4(auStack_88,param_2), (uVar13 & 1) != 0)) {
        pbVar8 = (byte *)FUN_026917f4(param_1,param_3);
        if (pbVar8 == (byte *)0x0) {
          iVar9 = 0;
          do {
            lVar12 = (long)iVar9 * 0x158;
            if ((*(int *)(param_1 + lVar12 + 0x2fa0) == *param_3) &&
               ((*(long *)(param_3 + 1) == *(long *)(param_1 + lVar12 + 0x2fa4) &&
                *(long *)(param_3 + 3) == *(long *)(param_1 + lVar12 + 0x2fac)) &&
                param_3[5] == *(int *)(param_1 + lVar12 + 0x2fb4))) {
              pbVar8 = param_1 + (long)iVar9 * 0x158 + 0x2f84;
              goto LAB_026b7a90;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 != 0xa0);
        }
        else {
LAB_026b7a90:
          local_98 = PTR_DAT_04bb2020 + 0x10;
          pcStack_90 = "BromideRewardSkipCount";
          FUN_02747170(pbVar8 + 0x38,&local_98,10);
        }
      }
    }
  }
  return;
}

