
void FUN_0208b870(undefined8 param_1,undefined1 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 ****ppppuVar4;
  uint uVar5;
  int ****ppppiVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int ****ppppiVar10;
  int ****local_218;
  int ****local_210;
  int local_208;
  undefined8 ****local_200;
  undefined8 ****ppppuStack_1f8;
  int local_1f0;
  undefined8 ****local_1e8 [3];
  undefined8 ****local_1d0 [3];
  undefined8 ****local_1b8 [3];
  undefined8 ****local_1a0 [3];
  undefined8 ****local_188 [3];
  undefined8 ****local_170 [3];
  undefined8 ****local_158 [3];
  undefined8 ****local_140 [3];
  undefined8 ****local_128 [3];
  undefined8 ****local_110 [3];
  undefined8 ****local_f8 [3];
  undefined8 ****local_e0 [3];
  undefined8 ****local_c8 [3];
  undefined8 ***local_b0 [3];
  undefined8 **local_98 [3];
  undefined8 *local_80 [3];
  undefined8 local_68 [3];
  uint local_50;
  uint uStack_4c;
  undefined4 local_48;
  int iStack_44;
  
  iVar7 = 0;
  do {
    if ((&DAT_05454358)[(long)iVar7 * 0x2d8] != '\0') {
      (&DAT_05454550)[(long)iVar7 * 0x5b] = 0x1244db4da;
      lVar3 = (long)iVar7;
      iVar9 = (&DAT_05454398)[lVar3 * 0xb6];
      iVar8 = (&DAT_05454390)[lVar3 * 0xb6];
      if (iVar8 <= iVar9) {
        if (0 < iVar9) {
          iVar2 = 0;
          if ((&DAT_05454394)[lVar3 * 0xb6] + 1 < iVar8) {
            iVar2 = (&DAT_05454394)[lVar3 * 0xb6] + 1;
          }
          (&DAT_05454394)[lVar3 * 0xb6] = iVar2;
          (&DAT_05454398)[lVar3 * 0xb6] = iVar9 + -1;
          iVar9 = iVar9 + -1;
        }
        if (iVar8 <= iVar9) goto LAB_0208b8f0;
      }
      (&DAT_05454398)[lVar3 * 0xb6] = iVar9 + 1;
      iVar2 = 0;
      if (iVar8 <= (&DAT_05454394)[lVar3 * 0xb6] + iVar9) {
        iVar2 = iVar8;
      }
      puVar1 = (undefined8 *)
               ((&DAT_05454388)[lVar3 * 0x5b] +
               (long)(((&DAT_05454394)[lVar3 * 0xb6] + iVar9) - iVar2) * 0x10);
      *puVar1 = 0x300000000;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined2 *)((long)puVar1 + 0xc) = 0;
    }
LAB_0208b8f0:
    iVar7 = iVar7 + 1;
    if (iVar7 == 0x11) {
      local_208 = 0;
      DAT_05453fec = 0xffffffffffffffff;
      local_1e8[0] = local_1d0;
      local_1d0[0] = local_1b8;
      local_68[0] = 0;
      local_1b8[0] = local_1a0;
      iVar7 = 0;
      local_188[0] = local_170;
      iVar8 = 0;
      local_158[0] = local_140;
      iVar9 = 0;
      local_1a0[0] = local_188;
      ppppiVar10 = (int ****)&local_210;
      local_128[0] = local_110;
      local_170[0] = local_158;
      local_f8[0] = local_e0;
      local_140[0] = local_128;
      local_c8[0] = local_b0;
      local_110[0] = local_f8;
      local_98[0] = local_80;
      local_e0[0] = local_c8;
      local_200 = local_1e8;
      local_b0[0] = local_98;
      local_80[0] = local_68;
      local_1f0 = 0x11;
      local_218 = (int ****)&local_218;
      local_210 = (int ****)&local_218;
      ppppuStack_1f8 = local_200;
      do {
        ppppuVar4 = local_200;
        if ((&DAT_05454358)[(long)iVar8 * 0x2d8] != '\0' && iVar7 < local_1f0) {
          if (local_200 != (undefined8 ****)0x0) {
            local_200 = (undefined8 ****)*local_200;
          }
          *(int *)ppppuVar4 = iVar9;
          ppppiVar6 = (int ****)(ppppuVar4 + 1);
          *ppppiVar6 = (int ***)0x0;
          ppppuVar4[2] = &local_218;
          *ppppiVar6 = (int ***)local_218;
          if (local_218 != (int ****)0x0) {
            local_218[1] = (int ***)ppppiVar6;
          }
          iVar7 = local_208 + 1;
          local_218 = ppppiVar6;
          local_208 = iVar7;
        }
        iVar9 = iVar9 + 1;
        iVar8 = iVar8 + 1;
      } while (iVar9 != 0x11);
      uVar5 = nn::os::GetSystemTick();
      local_50 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
      uStack_4c = (local_50 ^ local_50 >> 0x1e) * 0x6c078965 + 2;
      local_48 = (uStack_4c ^ uStack_4c >> 0x1e) * 0x6c078965 + 3;
      iStack_44 = (local_48 ^ local_48 >> 0x1e) * 0x6c078965 + 4;
      FUN_038aaa70(&local_218,&local_50);
      local_50 = FUN_0208bb48();
      uStack_4c = 0;
      local_48 = CONCAT31(local_48._1_3_,param_2) & 0xffffff01;
      local_48 = CONCAT22(local_48._2_2_,CONCAT11(param_3,(undefined1)local_48)) & 0xffff01ff;
      local_48._0_3_ = (uint3)(ushort)local_48;
      FUN_0208bea0(param_1,&local_218,&local_50);
      do {
        ppppiVar6 = (int ****)*ppppiVar10;
        ppppiVar10 = ppppiVar6 + 1;
      } while ((int *****)ppppiVar6 != &local_218);
      return;
    }
  } while( true );
}

