
void FUN_03472ad0(long *param_1,int *param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *__src;
  undefined1 *__src_00;
  byte *__src_01;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  byte bVar11;
  undefined4 uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  byte *pbVar16;
  uint uVar17;
  long lVar18;
  void *__dest;
  long lVar19;
  byte *__dest_00;
  undefined1 *__dest_01;
  undefined *puVar20;
  int iVar21;
  long local_1f8;
  void *local_1f0;
  undefined8 local_1c0;
  undefined1 *local_1b8;
  undefined1 uStack_181;
  undefined *local_180;
  byte *local_178;
  int local_170;
  byte local_16c [255];
  undefined1 local_6d;
  
  if (0 < *param_2) {
    lVar13 = 0;
    puVar14 = *(undefined8 **)(param_2 + 4);
    do {
      puVar15 = *(undefined8 **)(*(long *)(param_2 + 2) + lVar13 * 8);
      lVar13 = lVar13 + 1;
      *puVar15 = puVar14;
      *(undefined8 **)(param_2 + 4) = puVar15;
      puVar14 = puVar15;
    } while (lVar13 < *param_2);
  }
  uVar8 = param_3 - 0x3d2;
  *param_2 = 0;
  puVar1 = PTR_DAT_04bc9d18;
  if (7 < uVar8) {
    return;
  }
  if ((0xf7U >> (ulong)(uVar8 & 0x1f) & 1) == 0) {
    return;
  }
  iVar6 = *(int *)(&DAT_04057720 + (long)(int)uVar8 * 4);
  lVar13 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x408) + 8);
  local_170 = 0x100;
  local_6d = 0;
  local_16c[0] = 0;
  local_178 = local_16c;
  local_180 = PTR_DAT_04bb21f8 + 0x10;
  (**(code **)(*(long *)PTR_DAT_04bc9d18 + 0x18))(PTR_DAT_04bc9d18);
  FUN_038d1270(&local_180,"%s.msbt",*(undefined8 *)(puVar1 + 8));
  if (*(long *)(lVar13 + 0x10) == lVar13 + 8) {
    return;
  }
  lVar19 = (long)*(int *)(lVar13 + 0x1c);
  lVar18 = *(long *)(lVar13 + 0x10) - lVar19;
  do {
    if (lVar18 != 0) {
      lVar9 = FUN_03d54360(lVar18,&local_180);
      if (lVar9 != 0) {
        *(undefined1 *)(param_1 + 7) = 0;
        uVar17 = 1;
        if (param_3 - 0x3d6U < 3) {
          uVar17 = 2;
        }
        uVar3 = 0;
        if (2 < uVar8) {
          uVar3 = uVar17;
        }
        FUN_038d1270(param_1,"%04d_Header",iVar6);
        (**(code **)(*param_1 + 0x18))(param_1);
        FUN_006d8678(&local_180,"%s%02d",param_1[1],0);
        uVar10 = FUN_03d52ee0(&uStack_181,PTR_DAT_04bc9d18,&local_180);
        local_1c0 = (undefined *)((ulong)local_1c0._4_4_ << 0x20);
        if ((uVar10 & 1) == 0) {
          bVar11 = *(byte *)(param_1 + 7) & 0xfe;
        }
        else {
          bVar11 = *(byte *)(param_1 + 7) | 1;
        }
        *(byte *)(param_1 + 7) = bVar11;
        (**(code **)(*param_1 + 0x18))(param_1);
        FUN_006d8678(&local_180,"%s%02d",param_1[1],1);
        uVar10 = FUN_03d52ee0(&uStack_181,PTR_DAT_04bc9d18,&local_180);
        local_1c0._0_4_ = 1;
        if ((uVar10 & 1) == 0) {
          bVar11 = *(byte *)(param_1 + 7) & 0xfd;
        }
        else {
          bVar11 = *(byte *)(param_1 + 7) | 2;
        }
        *(byte *)(param_1 + 7) = bVar11;
        (**(code **)(*param_1 + 0x18))(param_1);
        FUN_006d8678(&local_180,"%s%02d",param_1[1],2);
        uVar10 = FUN_03d52ee0(&uStack_181,PTR_DAT_04bc9d18,&local_180);
        local_1c0 = (undefined *)CONCAT44(local_1c0._4_4_,2);
        if ((uVar10 & 1) == 0) {
          bVar11 = *(byte *)(param_1 + 7) & 0xfb;
        }
        else {
          bVar11 = *(byte *)(param_1 + 7) | 4;
        }
        *(byte *)(param_1 + 7) = bVar11;
        iVar21 = 0;
        puVar1 = PTR_DAT_04bb2028 + 0x10;
        puVar2 = PTR_DAT_04bb2020 + 0x10;
        puVar20 = PTR_DAT_04bc9d18;
        break;
      }
    }
    lVar18 = *(long *)(lVar18 + lVar19 + 8) - lVar19;
    if (lVar18 == (lVar13 + 8) - lVar19) {
      return;
    }
  } while( true );
LAB_03472e10:
  iVar7 = iVar6 + iVar21 * 100;
  FUN_006d8678(&local_180,&DAT_040e92c2,iVar7);
  uVar8 = FUN_03d52ee0(&uStack_181,puVar20,&local_180);
  pbVar16 = local_178;
  if ((uVar8 & 1) == 0) {
    local_1b8 = &DAT_04093b88;
    local_1c0 = puVar2;
    (**(code **)(local_180 + 0x18))(&local_180);
    lVar13 = 0;
    do {
      if (local_178[lVar13] == 0) goto LAB_03472eac;
      if (local_178[lVar13 + 1] == 0) {
        lVar13 = lVar13 + 1;
        goto LAB_03472eac;
      }
      if (local_178[lVar13 + 2] == 0) {
        lVar13 = lVar13 + 2;
        goto LAB_03472eac;
      }
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0x80001);
    lVar13 = 0;
LAB_03472eac:
    uVar17 = (uint)lVar13 & ((int)(uint)lVar13 >> 0x1f ^ 0xffffffffU);
    (**(code **)(local_1c0 + 0x18))(&local_1c0);
    lVar13 = 0;
    do {
      if (local_1b8[lVar13] == '\0') goto LAB_03472f0c;
      if (local_1b8[lVar13 + 1] == '\0') {
        lVar13 = lVar13 + 1;
        goto LAB_03472f0c;
      }
      if (local_1b8[lVar13 + 2] == '\0') {
        lVar13 = lVar13 + 2;
        goto LAB_03472f0c;
      }
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0x80001);
    lVar13 = 0;
LAB_03472f0c:
    uVar4 = (uint)lVar13;
    if ((int)(local_170 - uVar17) <= (int)(uint)lVar13) {
      uVar4 = local_170 + ~uVar17;
    }
    if (0 < (int)uVar4) {
      (**(code **)(local_1c0 + 0x18))(&local_1c0);
      puVar20 = PTR_DAT_04bc9d18;
      memcpy(pbVar16 + uVar17,local_1b8,(ulong)uVar4);
      pbVar16[(int)(uVar4 + uVar17)] = 0;
    }
    uVar10 = FUN_03d52ee0(&uStack_181,puVar20,&local_180);
    if ((uVar10 & 1) != 0) goto LAB_03472f7c;
  }
  else {
LAB_03472f7c:
    FUN_006d8678(&local_1c0,&DAT_040e92c2,iVar7 + 10);
    uVar10 = FUN_03d52ee0(&uStack_181,puVar20,&local_1c0);
    if ((uVar10 & 1) != 0) {
      pbVar16 = *(byte **)(param_2 + 4);
      if (pbVar16 != (byte *)0x0) {
        *(undefined8 *)(param_2 + 4) = *(undefined8 *)pbVar16;
      }
      __dest_00 = pbVar16 + 0x24;
      pbVar16[0x48] = 0;
      pbVar16[0x49] = 0;
      pbVar16[0x4a] = 0;
      pbVar16[0x4b] = 0;
      pbVar16[0x4c] = 0;
      pbVar16[0x4d] = 0;
      pbVar16[0x4e] = 0;
      pbVar16[0x4f] = 0;
      pbVar16[0x50] = 0;
      pbVar16[0x51] = 0;
      pbVar16[0x52] = 0;
      pbVar16[0x53] = 0;
      pbVar16[0x54] = 0;
      pbVar16[0x55] = 0;
      pbVar16[0x56] = 0;
      pbVar16[0x57] = 0;
      pbVar16[8] = 0;
      pbVar16[9] = 0;
      pbVar16[10] = 0;
      pbVar16[0xb] = 0;
      pbVar16[0xc] = 0;
      pbVar16[0xd] = 0;
      pbVar16[0xe] = 0;
      pbVar16[0xf] = 0;
      pbVar16[0x10] = 0;
      pbVar16[0x11] = 0;
      pbVar16[0x12] = 0;
      pbVar16[0x13] = 0;
      pbVar16[0x14] = 0;
      pbVar16[0x15] = 0;
      pbVar16[0x16] = 0;
      pbVar16[0x17] = 0;
      pbVar16[8] = 0xff;
      pbVar16[9] = 0xff;
      pbVar16[10] = 0xff;
      pbVar16[0xb] = 0xff;
      pbVar16[0x48] = 0xff;
      pbVar16[0x49] = 0xff;
      pbVar16[0x4a] = 0xff;
      pbVar16[0x4b] = 0xff;
      pbVar16[0] = 0;
      pbVar16[1] = 0;
      pbVar16[2] = 0;
      pbVar16[3] = 0;
      pbVar16[4] = 0;
      pbVar16[5] = 0;
      pbVar16[6] = 0;
      pbVar16[7] = 0;
      pbVar16[0x58] = 0;
      pbVar16[0x59] = 0;
      pbVar16[0x5a] = 0;
      pbVar16[0x5b] = 0;
      pbVar16[0x5c] = 0;
      pbVar16[0x5d] = 0;
      pbVar16[0x5e] = 0;
      pbVar16[0x5f] = 0;
      pbVar16[0x60] = 0;
      pbVar16[0x61] = 0;
      pbVar16[0x62] = 0;
      pbVar16[99] = 0;
      pbVar16[100] = 0;
      pbVar16[0x65] = 0;
      pbVar16[0x66] = 0;
      pbVar16[0x67] = 0;
      pbVar16[0x60] = 0x20;
      pbVar16[0x61] = 0;
      pbVar16[0x62] = 0;
      pbVar16[99] = 0;
      *(undefined **)(pbVar16 + 0x50) = puVar1;
      *(byte **)(pbVar16 + 0x58) = pbVar16 + 100;
      pbVar16[0xb0] = 0;
      pbVar16[0xb1] = 0;
      pbVar16[0xb2] = 0;
      pbVar16[0xb3] = 0;
      pbVar16[0xb4] = 0;
      pbVar16[0xb5] = 0;
      pbVar16[0xb6] = 0;
      pbVar16[0xb7] = 0;
      pbVar16[0xb8] = 0;
      pbVar16[0xb9] = 0;
      pbVar16[0xba] = 0;
      pbVar16[0xbb] = 0;
      pbVar16[0xbc] = 0;
      pbVar16[0xbd] = 0;
      pbVar16[0xbe] = 0;
      pbVar16[0xbf] = 0;
      pbVar16[0xa0] = 0;
      pbVar16[0xa1] = 0;
      pbVar16[0xa2] = 0;
      pbVar16[0xa3] = 0;
      pbVar16[0xa4] = 0;
      pbVar16[0xa5] = 0;
      pbVar16[0xa6] = 0;
      pbVar16[0xa7] = 0;
      pbVar16[0xa8] = 0;
      pbVar16[0xa9] = 0;
      pbVar16[0xaa] = 0;
      pbVar16[0xab] = 0;
      pbVar16[0xac] = 0;
      pbVar16[0xad] = 0;
      pbVar16[0xae] = 0;
      pbVar16[0xaf] = 0;
      pbVar16[0x88] = 0;
      pbVar16[0x89] = 0;
      pbVar16[0x8a] = 0;
      pbVar16[0x8b] = 0;
      pbVar16[0x8c] = 0;
      pbVar16[0x8d] = 0;
      pbVar16[0x8e] = 0;
      pbVar16[0x8f] = 0;
      pbVar16[0x90] = 0;
      pbVar16[0x91] = 0;
      pbVar16[0x92] = 0;
      pbVar16[0x93] = 0;
      pbVar16[0x94] = 0;
      pbVar16[0x95] = 0;
      pbVar16[0x96] = 0;
      pbVar16[0x97] = 0;
      *(undefined **)(pbVar16 + 0x88) = puVar1;
      pbVar16[0x78] = 0;
      pbVar16[0x79] = 0;
      pbVar16[0x7a] = 0;
      pbVar16[0x7b] = 0;
      pbVar16[0x7c] = 0;
      pbVar16[0x7d] = 0;
      pbVar16[0x7e] = 0;
      pbVar16[0x7f] = 0;
      pbVar16[0x80] = 0;
      pbVar16[0x81] = 0;
      pbVar16[0x82] = 0;
      pbVar16[0x83] = 0;
      pbVar16[0x84] = 0;
      pbVar16[0x85] = 0;
      pbVar16[0x86] = 0;
      pbVar16[0x87] = 0;
      pbVar16[0x68] = 0;
      pbVar16[0x69] = 0;
      pbVar16[0x6a] = 0;
      pbVar16[0x6b] = 0;
      pbVar16[0x6c] = 0;
      pbVar16[0x6d] = 0;
      pbVar16[0x6e] = 0;
      pbVar16[0x6f] = 0;
      pbVar16[0x70] = 0;
      pbVar16[0x71] = 0;
      pbVar16[0x72] = 0;
      pbVar16[0x73] = 0;
      pbVar16[0x74] = 0;
      pbVar16[0x75] = 0;
      pbVar16[0x76] = 0;
      pbVar16[0x77] = 0;
      pbVar16[0x38] = 0;
      pbVar16[0x39] = 0;
      pbVar16[0x3a] = 0;
      pbVar16[0x3b] = 0;
      pbVar16[0x3c] = 0;
      pbVar16[0x3d] = 0;
      pbVar16[0x3e] = 0;
      pbVar16[0x3f] = 0;
      pbVar16[0x40] = 0;
      pbVar16[0x41] = 0;
      pbVar16[0x42] = 0;
      pbVar16[0x43] = 0;
      pbVar16[0x44] = 0;
      pbVar16[0x45] = 0;
      pbVar16[0x46] = 0;
      pbVar16[0x47] = 0;
      pbVar16[0x28] = 0;
      pbVar16[0x29] = 0;
      pbVar16[0x2a] = 0;
      pbVar16[0x2b] = 0;
      pbVar16[0x2c] = 0;
      pbVar16[0x2d] = 0;
      pbVar16[0x2e] = 0;
      pbVar16[0x2f] = 0;
      pbVar16[0x30] = 0;
      pbVar16[0x31] = 0;
      pbVar16[0x32] = 0;
      pbVar16[0x33] = 0;
      pbVar16[0x34] = 0;
      pbVar16[0x35] = 0;
      pbVar16[0x36] = 0;
      pbVar16[0x37] = 0;
      pbVar16[0x18] = 0;
      pbVar16[0x19] = 0;
      pbVar16[0x1a] = 0;
      pbVar16[0x1b] = 0;
      pbVar16[0x1c] = 0;
      pbVar16[0x1d] = 0;
      pbVar16[0x1e] = 0;
      pbVar16[0x1f] = 0;
      pbVar16[0x20] = 0;
      pbVar16[0x21] = 0;
      pbVar16[0x22] = 0;
      pbVar16[0x23] = 0;
      pbVar16[0x24] = 0;
      pbVar16[0x25] = 0;
      pbVar16[0x26] = 0;
      pbVar16[0x27] = 0;
      pbVar16[0x20] = 0x20;
      pbVar16[0x21] = 0;
      pbVar16[0x22] = 0;
      pbVar16[0x23] = 0;
      *(undefined **)(pbVar16 + 0x10) = puVar1;
      *(byte **)(pbVar16 + 0x18) = __dest_00;
      *(byte **)(pbVar16 + 0x90) = pbVar16 + 0x9c;
      pbVar16[0x98] = 0;
      pbVar16[0x99] = 0;
      pbVar16[0x9a] = 0;
      pbVar16[0x9b] = 0;
      pbVar16[0x9c] = 0;
      pbVar16[0x9d] = 0;
      pbVar16[0x9e] = 0;
      pbVar16[0x9f] = 0;
      pbVar16[0x98] = 0x20;
      pbVar16[0x99] = 0;
      pbVar16[0x9a] = 0;
      pbVar16[0x9b] = 0;
      if (*param_2 < param_2[1]) {
        *(byte **)(*(long *)(param_2 + 2) + (long)*param_2 * 8) = pbVar16;
        *param_2 = *param_2 + 1;
        __dest_00 = *(byte **)(pbVar16 + 0x18);
      }
      *pbVar16 = (byte)(uVar8 ^ 1) & 1;
      uVar12 = 2;
      if ((uVar8 & 1) == 0) {
        uVar12 = 3;
      }
      *(uint *)(pbVar16 + 4) = uVar3;
      *(undefined4 *)(pbVar16 + 8) = uVar12;
      (**(code **)(local_180 + 0x18))(&local_180);
      __src_01 = local_178;
      if (__dest_00 != local_178) {
        (**(code **)(local_180 + 0x18))(&local_180);
        lVar13 = 0;
        do {
          if (local_178[lVar13] == 0) goto LAB_034730dc;
          if (local_178[lVar13 + 1] == 0) {
            lVar13 = lVar13 + 1;
            goto LAB_034730dc;
          }
          if (local_178[lVar13 + 2] == 0) {
            lVar13 = lVar13 + 2;
            goto LAB_034730dc;
          }
          lVar13 = lVar13 + 3;
        } while (lVar13 != 0x80001);
        lVar13 = 0;
LAB_034730dc:
        iVar5 = (int)lVar13;
        if (*(int *)(pbVar16 + 0x20) <= (int)lVar13) {
          iVar5 = *(int *)(pbVar16 + 0x20) + -1;
        }
        memcpy(__dest_00,__src_01,(long)iVar5);
        __dest_00[iVar5] = 0;
      }
      __dest_01 = *(undefined1 **)(pbVar16 + 0x58);
      *(undefined4 *)(pbVar16 + 0x48) =
           *(undefined4 *)(&UNK_0418ec08 + ((ulong)(uVar8 ^ 1) & 1) * 4 + (ulong)uVar3 * 8);
      (**(code **)(local_1c0 + 0x18))(&local_1c0);
      __src_00 = local_1b8;
      if (__dest_01 != local_1b8) {
        (**(code **)(local_1c0 + 0x18))(&local_1c0);
        lVar13 = 0;
        do {
          if (local_1b8[lVar13] == '\0') goto LAB_0347319c;
          if (local_1b8[lVar13 + 1] == '\0') {
            lVar13 = lVar13 + 1;
            goto LAB_0347319c;
          }
          if (local_1b8[lVar13 + 2] == '\0') {
            lVar13 = lVar13 + 2;
            goto LAB_0347319c;
          }
          lVar13 = lVar13 + 3;
        } while (lVar13 != 0x80001);
        lVar13 = 0;
LAB_0347319c:
        iVar5 = (int)lVar13;
        if (*(int *)(pbVar16 + 0x60) <= (int)lVar13) {
          iVar5 = *(int *)(pbVar16 + 0x60) + -1;
        }
        memcpy(__dest_01,__src_00,(long)iVar5);
        __dest_01[iVar5] = 0;
      }
      FUN_006d8678(&local_1f8,&DAT_040e92c2,iVar7 + 0x14);
      puVar20 = PTR_DAT_04bc9d18;
      if (((uVar8 & 1) != 0) &&
         (uVar10 = FUN_03d52ee0(&uStack_181,PTR_DAT_04bc9d18,&local_1f8), (uVar10 & 1) != 0)) {
        __dest = *(void **)(pbVar16 + 0x90);
        (**(code **)(local_1f8 + 0x18))(&local_1f8);
        __src = local_1f0;
        if (__dest != local_1f0) {
          (**(code **)(local_1f8 + 0x18))(&local_1f8);
          lVar13 = 0;
          do {
            if (*(char *)((long)local_1f0 + lVar13) == '\0') goto LAB_03472ddc;
            if (*(char *)((long)local_1f0 + lVar13 + 1) == '\0') {
              lVar13 = lVar13 + 1;
              goto LAB_03472ddc;
            }
            if (*(char *)((long)local_1f0 + lVar13 + 2) == '\0') {
              lVar13 = lVar13 + 2;
              goto LAB_03472ddc;
            }
            lVar13 = lVar13 + 3;
          } while (lVar13 != 0x80001);
          lVar13 = 0;
LAB_03472ddc:
          iVar7 = (int)lVar13;
          if (*(int *)(pbVar16 + 0x98) <= (int)lVar13) {
            iVar7 = *(int *)(pbVar16 + 0x98) + -1;
          }
          memcpy(__dest,__src,(long)iVar7);
          *(undefined1 *)((long)__dest + (long)iVar7) = 0;
        }
      }
    }
  }
  iVar21 = iVar21 + 1;
  if (iVar21 == 6) {
    return;
  }
  goto LAB_03472e10;
}

