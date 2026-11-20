
undefined8 FUN_03f4a0c4(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if ((int)param_2[6] < 1) {
    return 0;
  }
  if ((0 < (int)param_2[7]) && (uVar6 = param_2[1], (int)param_2[3] <= (int)(uVar6 * 2))) {
    uVar7 = *param_2;
    if ((int)param_2[4] < (int)uVar7) {
      return 0;
    }
    if ((uVar7 & 0xf) != 0) {
      return 0;
    }
    if ((int)uVar6 <= (int)param_2[5]) {
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
        if ((long)(int)param_2[2] * (long)(int)uVar6 != *(long *)(param_2 + 10)) {
          return 0;
        }
        if (((uint)param_1 >> 3 & 1) != 0) {
          return 0;
        }
        if ((uVar7 & 7) != 0) {
          return 0;
        }
        *param_1 = 0x3c;
        *(undefined8 *)(param_1 + 1) = 0x3dae147b3dae147b;
        uVar6 = param_2[6];
        uVar7 = param_2[7];
        uVar8 = param_2[4];
        uVar9 = param_2[5];
        *(undefined1 *)(param_1 + 4) = 1;
        param_1[3] = ((float)(int)uVar6 * (float)(int)uVar7 * 0.2) /
                     ((float)(int)uVar8 * (float)(int)uVar9);
        param_1[0xb] = param_2[2];
        param_1[0xc] = *param_2;
        iVar5 = param_2[1] + param_2[3] * -2;
        param_1[0xd] = iVar5;
        param_1[0xf] = iVar5;
        param_1[0xe] = param_2[3];
        param_1[0x10] = 8.0 / (float)(iVar5 + -1);
        memset(param_1 + 0x11,0,0xf30);
        *(undefined8 *)(param_1 + 0x3de) = *(undefined8 *)(param_2 + 8);
        memset(param_1 + 0x3e0,0,0x510);
        param_1[0x526] = 0x14;
        *(undefined8 *)(param_1 + 0x524) = 0xffffffff42000000;
        memset(param_1 + 0x527,0,0x510);
        *(undefined8 *)(param_1 + 0x66b) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x66d) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x66f) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x671) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x673) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x675) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x677) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x679) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x67b) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x67d) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x67f) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x681) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x683) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x685) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x687) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x689) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x68b) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x68d) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x68f) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x691) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x693) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x695) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x697) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x699) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x69b) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x69d) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x69f) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x6a1) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x6a3) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x6a5) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x6a7) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x6a9) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x6ab) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x6ad) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x6af) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x6b1) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x6b3) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x6b5) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x6b7) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x6b9) = 0xbf800000bf800000;
        param_1[0x6bb] = 0xbf800000;
        memset(param_1 + 0x6bc,0,0x510);
        *(undefined8 *)(param_1 + 0x800) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x802) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x850) = 0x3f800000bf800000;
        *(undefined1 **)(param_1 + 0x852) = &DAT_3f8000003f800000;
        *(undefined1 **)(param_1 + 0x854) = &DAT_3f8000003f800000;
        *(undefined1 **)(param_1 + 0x856) = &DAT_3f8000003f800000;
        *(undefined1 **)(param_1 + 0x858) = &DAT_3f8000003f800000;
        *(undefined1 **)(param_1 + 0x85a) = &DAT_3f8000003f800000;
        *(undefined1 **)(param_1 + 0x85c) = &DAT_3f8000003f800000;
        *(undefined1 **)(param_1 + 0x85e) = &DAT_3f8000003f800000;
        *(undefined1 **)(param_1 + 0x860) = &DAT_3f8000003f800000;
        *(undefined1 **)(param_1 + 0x862) = &DAT_3f8000003f800000;
        *(undefined1 **)(param_1 + 0x864) = &DAT_3f8000003f800000;
        *(undefined1 **)(param_1 + 0x866) = &DAT_3f8000003f800000;
        *(undefined1 **)(param_1 + 0x868) = &DAT_3f8000003f800000;
        *(undefined1 **)(param_1 + 0x86a) = &DAT_3f8000003f800000;
        *(undefined1 **)(param_1 + 0x86c) = &DAT_3f8000003f800000;
        *(undefined1 **)(param_1 + 0x86e) = &DAT_3f8000003f800000;
        *(undefined1 **)(param_1 + 0x870) = &DAT_3f8000003f800000;
        *(undefined1 **)(param_1 + 0x872) = &DAT_3f8000003f800000;
        *(undefined1 **)(param_1 + 0x874) = &DAT_3f8000003f800000;
        *(undefined1 **)(param_1 + 0x876) = &DAT_3f8000003f800000;
        *(undefined1 **)(param_1 + 0x878) = &DAT_3f8000003f800000;
        *(undefined1 **)(param_1 + 0x87a) = &DAT_3f8000003f800000;
        *(undefined1 **)(param_1 + 0x87c) = &DAT_3f8000003f800000;
        *(undefined1 **)(param_1 + 0x87e) = &DAT_3f8000003f800000;
        *(undefined1 **)(param_1 + 0x880) = &DAT_3f8000003f800000;
        *(undefined1 **)(param_1 + 0x882) = &DAT_3f8000003f800000;
        *(undefined1 **)(param_1 + 0x884) = &DAT_3f8000003f800000;
        *(undefined1 **)(param_1 + 0x886) = &DAT_3f8000003f800000;
        *(undefined1 **)(param_1 + 0x888) = &DAT_3f8000003f800000;
        *(undefined1 **)(param_1 + 0x88a) = &DAT_3f8000003f800000;
        *(undefined1 **)(param_1 + 0x88c) = &DAT_3f8000003f800000;
        *(undefined1 **)(param_1 + 0x88e) = &DAT_3f8000003f800000;
        *(undefined1 **)(param_1 + 0x890) = &DAT_3f8000003f800000;
        *(undefined1 **)(param_1 + 0x892) = &DAT_3f8000003f800000;
        *(undefined1 **)(param_1 + 0x894) = &DAT_3f8000003f800000;
        *(undefined1 **)(param_1 + 0x896) = &DAT_3f8000003f800000;
        *(undefined1 **)(param_1 + 0x898) = &DAT_3f8000003f800000;
        *(undefined1 **)(param_1 + 0x89a) = &DAT_3f8000003f800000;
        *(undefined1 **)(param_1 + 0x89c) = &DAT_3f8000003f800000;
        *(undefined1 **)(param_1 + 0x89e) = &DAT_3f8000003f800000;
        *(undefined1 **)(param_1 + 0x8a0) = &DAT_3f8000003f800000;
        *(undefined8 *)(param_1 + 0x804) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x806) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x808) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x80a) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x80c) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x80e) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x810) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x812) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x814) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x816) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x818) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x81a) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x81c) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x81e) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x820) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x822) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x824) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x826) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x828) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x82a) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x82c) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x82e) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x830) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x832) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x834) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x836) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x838) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x83a) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x83c) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x83e) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x840) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x842) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x844) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x846) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x848) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x84a) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x84c) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0x84e) = 0xbf800000bf800000;
        *(undefined8 *)(param_1 + 0xcd9) = 0;
        memset(param_1 + 0x8f4,0,0xf93);
        uVar3 = 0;
        param_1[0x8f3] = 0;
        puVar4 = param_1 + 0x8aa;
        param_1[3] = (float)param_1[3] /
                     (1.0 - ((float)(int)param_1[0xe] + (float)(int)param_1[0xe]) /
                            (float)(int)param_1[0xd]);
        do {
          bVar2 = (uVar3 & 0x7ffffff7) != 0;
          uVar3 = uVar3 + 1;
          uVar6 = 2;
          if (bVar2) {
            uVar6 = 4;
          }
          puVar4[-8] = uVar6 >> 1;
          iVar1 = param_1[0x8f3];
          puVar4[-1] = uVar6;
          *puVar4 = uVar6 >> 1;
          iVar5 = 0xc;
          if (bVar2) {
            iVar5 = 0x18;
          }
          puVar4[-7] = uVar6;
          puVar4[-6] = uVar6;
          puVar4[-5] = uVar6;
          puVar4[-4] = uVar6;
          puVar4[-3] = uVar6;
          puVar4[-2] = uVar6;
          puVar4 = puVar4 + 9;
          param_1[0x8f3] = uVar6 * 2 + iVar5 + iVar1;
        } while (uVar3 != 9);
        *(undefined8 *)(param_1 + 5) = 0x100000001;
        *(undefined8 *)(param_1 + 7) = 0x3ea3d70a3f800000;
        *(undefined8 *)(param_1 + 9) = 0x23c888889;
        return 1;
      }
    }
  }
  return 0;
}

