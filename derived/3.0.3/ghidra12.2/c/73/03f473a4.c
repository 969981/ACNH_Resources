
undefined8 FUN_03f473a4(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (((0 < (int)param_2[6]) && (0 < (int)param_2[7])) &&
     (uVar2 = param_2[1], (int)param_2[3] <= (int)(uVar2 * 2))) {
    uVar3 = *param_2;
    if ((int)param_2[4] < (int)uVar3) {
      return 0;
    }
    if ((uVar3 & 0xf) != 0) {
      return 0;
    }
    if ((int)uVar2 <= (int)param_2[5]) {
      if ((int)param_2[6] < (int)param_2[4]) {
        return 0;
      }
      if ((int)param_2[7] < (int)param_2[5]) {
        return 0;
      }
      if (*(ulong *)(param_2 + 8) != 0) {
        if ((*(ulong *)(param_2 + 8) & 0xf) != 0) {
          return 0;
        }
        if ((long)(int)param_2[2] * (long)(int)uVar2 != *(long *)(param_2 + 10)) {
          return 0;
        }
        if (((uint)param_1 >> 3 & 1) != 0) {
          return 0;
        }
        if ((uVar3 & 3) == 0) {
          *param_1 = 0x3c;
          *(undefined8 *)(param_1 + 1) = 0x3dae147b3dae147b;
          uVar2 = param_2[6];
          uVar3 = param_2[7];
          local_40 = 0;
          uStack_38 = 0;
          uVar4 = param_2[4];
          uVar5 = param_2[5];
          *(undefined1 *)(param_1 + 4) = 1;
          param_1[3] = ((float)(int)uVar2 * (float)(int)uVar3 * 0.2) /
                       ((float)(int)uVar4 * (float)(int)uVar5);
          param_1[0xb] = param_2[2];
          param_1[0xc] = *param_2;
          iVar1 = param_2[1] + param_2[3] * -2;
          param_1[0xd] = iVar1;
          param_1[0xf] = iVar1;
          param_1[0xe] = param_2[3];
          param_1[0x10] = 4.0 / (float)(iVar1 + -1);
          FUN_03f476f4(param_1 + 0x11,&local_40);
          local_40 = 0;
          uStack_38 = 0;
          FUN_03f476f4(param_1 + 0x75,&local_40);
          local_40 = 0;
          uStack_38 = 0;
          FUN_03f476f4(param_1 + 0xd9,&local_40);
          local_40 = 0;
          uStack_38 = 0;
          *(undefined8 *)(param_1 + 0x13e) = *(undefined8 *)(param_2 + 8);
          FUN_03f476f4(param_1 + 0x140,&local_40);
          local_40 = 0;
          uStack_38 = 0;
          *(undefined8 *)(param_1 + 0x1a4) = 0xffffffff42000000;
          param_1[0x1a6] = 0x14;
          FUN_03f476f4(param_1 + 0x1a7,&local_40);
          local_40 = 0;
          uStack_38 = 0;
          *(undefined8 *)(param_1 + 0x20b) = 0xbf800000bf800000;
          *(undefined8 *)(param_1 + 0x20d) = 0xbf800000bf800000;
          *(undefined8 *)(param_1 + 0x20f) = 0xbf800000bf800000;
          *(undefined8 *)(param_1 + 0x211) = 0xbf800000bf800000;
          *(undefined8 *)(param_1 + 0x213) = 0xbf800000bf800000;
          *(undefined8 *)(param_1 + 0x215) = 0xbf800000bf800000;
          *(undefined8 *)(param_1 + 0x217) = 0xbf800000bf800000;
          *(undefined8 *)(param_1 + 0x219) = 0xbf800000bf800000;
          *(undefined8 *)(param_1 + 0x21b) = 0xbf800000bf800000;
          *(undefined8 *)(param_1 + 0x21d) = 0xbf800000bf800000;
          *(undefined8 *)(param_1 + 0x21f) = 0xbf800000bf800000;
          *(undefined8 *)(param_1 + 0x221) = 0xbf800000bf800000;
          param_1[0x223] = 0xbf800000;
          FUN_03f476f4(param_1 + 0x224,&local_40);
          *(undefined8 *)(param_1 + 0x288) = 0xbf800000bf800000;
          *(undefined8 *)(param_1 + 0x28a) = 0xbf800000bf800000;
          *(undefined8 *)(param_1 + 0x2a0) = 0x3f800000bf800000;
          *(undefined1 **)(param_1 + 0x2a2) = &DAT_3f8000003f800000;
          *(undefined1 **)(param_1 + 0x2a4) = &DAT_3f8000003f800000;
          *(undefined1 **)(param_1 + 0x2a6) = &DAT_3f8000003f800000;
          *(undefined1 **)(param_1 + 0x2a8) = &DAT_3f8000003f800000;
          *(undefined1 **)(param_1 + 0x2aa) = &DAT_3f8000003f800000;
          *(undefined1 **)(param_1 + 0x2ac) = &DAT_3f8000003f800000;
          *(undefined1 **)(param_1 + 0x2ae) = &DAT_3f8000003f800000;
          *(undefined1 **)(param_1 + 0x2b0) = &DAT_3f8000003f800000;
          *(undefined1 **)(param_1 + 0x2b2) = &DAT_3f8000003f800000;
          *(undefined1 **)(param_1 + 0x2b4) = &DAT_3f8000003f800000;
          *(undefined1 **)(param_1 + 0x2b6) = &DAT_3f8000003f800000;
          *(undefined1 **)(param_1 + 0x2b8) = &DAT_3f8000003f800000;
          *(undefined8 *)(param_1 + 0x28c) = 0xbf800000bf800000;
          *(undefined8 *)(param_1 + 0x28e) = 0xbf800000bf800000;
          *(undefined8 *)(param_1 + 0x290) = 0xbf800000bf800000;
          *(undefined8 *)(param_1 + 0x292) = 0xbf800000bf800000;
          *(undefined8 *)(param_1 + 0x294) = 0xbf800000bf800000;
          *(undefined8 *)(param_1 + 0x296) = 0xbf800000bf800000;
          *(undefined8 *)(param_1 + 0x298) = 0xbf800000bf800000;
          *(undefined8 *)(param_1 + 0x29a) = 0xbf800000bf800000;
          *(undefined8 *)(param_1 + 0x29c) = 0xbf800000bf800000;
          *(undefined8 *)(param_1 + 0x29e) = 0xbf800000bf800000;
          *(undefined8 *)(param_1 + 0x419) = 0;
          memset(param_1 + 0x2d4,0,0x513);
          *(undefined8 *)(param_1 + 0x2c4) = 0x400000002;
          *(undefined8 *)(param_1 + 0x2ba) = 0x200000001;
          *(undefined8 *)(param_1 + 700) = 0x200000002;
          *(undefined8 *)(param_1 + 0x2be) = 0x200000001;
          *(undefined8 *)(param_1 + 0x2c8) = 0x200000002;
          *(undefined8 *)(param_1 + 0x2ce) = 0x200000001;
          *(undefined8 *)(param_1 + 0x2d0) = 0x200000002;
          *(undefined8 *)(param_1 + 0x2c0) = 0x400000004;
          *(undefined8 *)(param_1 + 0x2c6) = 0x400000004;
          *(undefined8 *)(param_1 + 0x2ca) = 0x400000004;
          param_1[5] = 1;
          *(undefined8 *)(param_1 + 0x2c2) = 0x200000004;
          *(undefined8 *)(param_1 + 0x2cc) = 0x200000004;
          *(undefined8 *)(param_1 + 0x2d2) = 0x4000000001;
          param_1[10] = 2;
          *(undefined8 *)(param_1 + 6) = 0x3f80000000000001;
          *(undefined8 *)(param_1 + 8) = 0x3c8888893ea3d70a;
          param_1[3] = (float)param_1[3] /
                       (1.0 - ((float)(int)param_1[0xe] + (float)(int)param_1[0xe]) /
                              (float)(int)param_1[0xd]);
          return 1;
        }
        return 0;
      }
    }
  }
  return 0;
}

