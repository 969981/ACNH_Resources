
void FUN_0208d480(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 ****ppppuVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  int ****ppppiVar10;
  short *psVar11;
  int iVar12;
  int ****ppppiVar13;
  int ****local_238;
  int ****local_230;
  int local_228;
  undefined8 ****local_220;
  undefined8 ****ppppuStack_218;
  int local_210;
  undefined8 ****local_208 [3];
  undefined8 ****local_1f0 [3];
  undefined8 ****local_1d8 [3];
  undefined8 ****local_1c0 [3];
  undefined8 ****local_1a8 [3];
  undefined8 ****local_190 [3];
  undefined8 ****local_178 [3];
  undefined8 ****local_160 [3];
  undefined8 ****local_148 [3];
  undefined8 ****local_130 [3];
  undefined8 ****local_118 [3];
  undefined8 ****local_100 [3];
  undefined8 ****local_e8 [3];
  undefined8 ***local_d0 [3];
  undefined8 **local_b8 [3];
  undefined8 *local_a0 [3];
  undefined8 local_88 [3];
  undefined8 local_6c;
  undefined2 local_64;
  undefined1 local_62;
  undefined8 local_60;
  uint local_58;
  int iStack_54;
  
  if ((param_2 & 1) == 0) {
    FUN_0208b870(param_1,1,0,0);
    return;
  }
  iVar6 = 0;
  ppppiVar13 = (int ****)&local_230;
  do {
    if ((&DAT_05454358)[(long)iVar6 * 0x2d8] != '\0') {
      (&DAT_05454550)[(long)iVar6 * 0x5b] = 0x1244db4da;
      lVar7 = (long)iVar6;
      iVar12 = (&DAT_05454398)[lVar7 * 0xb6];
      iVar9 = (&DAT_05454390)[lVar7 * 0xb6];
      if (iVar9 <= iVar12) {
        if (0 < iVar12) {
          iVar2 = 0;
          if ((&DAT_05454394)[lVar7 * 0xb6] + 1 < iVar9) {
            iVar2 = (&DAT_05454394)[lVar7 * 0xb6] + 1;
          }
          (&DAT_05454394)[lVar7 * 0xb6] = iVar2;
          (&DAT_05454398)[lVar7 * 0xb6] = iVar12 + -1;
          iVar12 = iVar12 + -1;
        }
        if (iVar9 <= iVar12) goto LAB_0208d510;
      }
      (&DAT_05454398)[lVar7 * 0xb6] = iVar12 + 1;
      iVar2 = 0;
      if (iVar9 <= (&DAT_05454394)[lVar7 * 0xb6] + iVar12) {
        iVar2 = iVar9;
      }
      puVar1 = (undefined8 *)
               ((&DAT_05454388)[lVar7 * 0x5b] +
               (long)(((&DAT_05454394)[lVar7 * 0xb6] + iVar12) - iVar2) * 0x10);
      *puVar1 = 0x300000000;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined2 *)((long)puVar1 + 0xc) = 0;
    }
LAB_0208d510:
    iVar6 = iVar6 + 1;
    if (iVar6 == 0x11) {
      DAT_05453fec = 0xffffffffffffffff;
      psVar11 = (short *)(DAT_04da6480 + 0x4068);
      if (*psVar11 == 0) {
        local_60 = *(undefined8 *)(DAT_04da6480 + 0x4060);
        if ((char)(local_60 >> 0x20) < '\x05') {
          lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_60);
          local_238 = (int ****)(lVar7 + -0x15180);
          local_60 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_238);
        }
        psVar11 = (short *)&local_60;
        uVar8 = local_60 >> 0x30;
        local_60._0_6_ = CONCAT24(5,(undefined4)local_60);
        local_60 = CONCAT26((short)uVar8,(undefined6)local_60) & 0xff00ffffffffffff;
      }
      local_238 = *(int *****)psVar11;
      uVar8 = FUN_00873540(*(undefined8 *)PTR_DAT_04bb32f0,&local_238,1,1);
      if ((uVar8 & 1) == 0) {
        local_208[0] = local_1f0;
        local_1f0[0] = local_1d8;
        local_6c = 1;
        local_1d8[0] = local_1c0;
        iVar6 = 0;
        local_1a8[0] = local_190;
        iVar9 = 0;
        local_178[0] = local_160;
        iVar12 = 0;
        local_1c0[0] = local_1a8;
        local_148[0] = local_130;
        local_190[0] = local_178;
        local_118[0] = local_100;
        local_160[0] = local_148;
        local_e8[0] = local_d0;
        local_130[0] = local_118;
        local_b8[0] = local_a0;
        local_100[0] = local_e8;
        local_220 = local_208;
        local_d0[0] = local_b8;
        local_a0[0] = local_88;
        local_64 = 1;
        local_62 = 1;
        local_228 = 0;
        local_88[0] = 0;
        local_210 = 0x11;
        local_238 = (int ****)&local_238;
        local_230 = (int ****)&local_238;
        ppppuStack_218 = local_220;
        do {
          ppppuVar4 = local_220;
          if ((&DAT_05454358)[(long)iVar9 * 0x2d8] != '\0' && iVar6 < local_210) {
            if (local_220 != (undefined8 ****)0x0) {
              local_220 = (undefined8 ****)*local_220;
            }
            *(int *)ppppuVar4 = iVar12;
            ppppiVar10 = (int ****)(ppppuVar4 + 1);
            *ppppiVar10 = (int ***)0x0;
            ppppuVar4[2] = &local_238;
            *ppppiVar10 = (int ***)local_238;
            if (local_238 != (int ****)0x0) {
              local_238[1] = (int ***)ppppiVar10;
            }
            iVar6 = local_228 + 1;
            local_238 = ppppiVar10;
            local_228 = iVar6;
          }
          iVar12 = iVar12 + 1;
          iVar9 = iVar9 + 1;
        } while (iVar12 != 0x11);
        uVar5 = nn::os::GetSystemTick();
        uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
        uVar3 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 2;
        local_60 = CONCAT44(uVar3,uVar5);
        local_58 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 3;
        iStack_54 = (local_58 ^ local_58 >> 0x1e) * 0x6c078965 + 4;
        FUN_038aaa70(&local_238,&local_60);
        FUN_0208d820(param_1,&local_238);
        iVar6 = FUN_0208db10();
        if (iVar6 == 0) {
          FUN_0208e320(&local_238,&local_6c);
        }
        do {
          ppppiVar10 = (int ****)*ppppiVar13;
          ppppiVar13 = ppppiVar10 + 1;
        } while ((int *****)ppppiVar10 != &local_238);
      }
      return;
    }
  } while( true );
}

