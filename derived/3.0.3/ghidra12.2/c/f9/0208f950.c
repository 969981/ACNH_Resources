
/* WARNING: Type propagation algorithm not settling */

void FUN_0208f950(undefined8 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined8 *******pppppppuVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int ******ppppppiVar10;
  int *******pppppppiVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int *******pppppppiVar15;
  int *******local_218;
  int *******local_210;
  uint local_208;
  undefined8 *******local_200;
  undefined8 *******pppppppuStack_1f8;
  int local_1f0;
  undefined8 *******local_1e8 [3];
  undefined8 *******local_1d0 [3];
  undefined8 *******local_1b8 [3];
  undefined8 *******local_1a0 [3];
  undefined8 *******local_188 [3];
  undefined8 *******local_170 [3];
  undefined8 *******local_158 [3];
  undefined8 *******local_140 [3];
  undefined8 *******local_128 [3];
  undefined8 *******local_110 [3];
  undefined8 ******local_f8 [3];
  undefined8 *****local_e0 [3];
  undefined8 ****local_c8 [3];
  undefined8 ***local_b0 [3];
  undefined8 **local_98 [3];
  undefined8 *local_80 [3];
  undefined8 local_68 [3];
  uint local_50;
  uint uStack_4c;
  uint local_48;
  int iStack_44;
  
  if ((*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) && (0xfffffffd < param_2 - 7U)) {
    local_208 = 0;
    local_1d0[0] = local_1b8;
    local_170[0] = local_158;
    local_1b8[0] = local_1a0;
    local_188[0] = local_170;
    pppppppiVar15 = (int *******)&local_210;
    local_158[0] = local_140;
    local_140[0] = local_128;
    local_128[0] = local_110;
    local_110[0] = local_f8;
    local_f8[0] = local_e0;
    uVar14 = 0;
    local_e0[0] = local_c8;
    iVar8 = 0;
    local_1a0[0] = local_188;
    iVar9 = 0;
    local_c8[0] = local_b0;
    iVar12 = 0;
    local_b0[0] = local_98;
    local_210 = (int *******)&local_218;
    local_1e8[0] = local_1d0;
    local_98[0] = local_80;
    local_80[0] = local_68;
    local_1f0 = 0x11;
    local_200 = local_1e8;
    pppppppuStack_1f8 = local_1e8;
    local_68[0] = 0;
    local_218 = (int *******)&local_218;
    do {
      pppppppuVar5 = local_200;
      if ((&DAT_05454358)[(long)iVar9 * 0x2d8] != '\0') {
        lVar3 = (long)iVar9;
        if ((&DAT_054543c4)[lVar3 * 0x2d8] == '\0') {
          if ((int)(&DAT_05454398)[lVar3 * 0xb6] < 1) {
            puVar7 = (uint *)PTR_DAT_04bc2808;
          }
          else {
            iVar4 = (&DAT_05454398)[lVar3 * 0xb6] + (&DAT_05454394)[lVar3 * 0xb6] + -1;
            iVar2 = 0;
            if ((int)(&DAT_05454390)[lVar3 * 0xb6] <= iVar4) {
              iVar2 = (&DAT_05454390)[lVar3 * 0xb6];
            }
            puVar7 = (uint *)((&DAT_05454388)[lVar3 * 0x5b] + (long)(iVar4 - iVar2) * 0x10 + 4);
          }
          local_50 = *puVar7;
          if (*puVar7 == 0) {
            iVar8 = iVar8 + 1;
            if ((int)uVar14 < local_1f0) {
              if (local_200 != (undefined8 *******)0x0) {
                local_200 = (undefined8 *******)*local_200;
              }
              *(int *)pppppppuVar5 = iVar12;
              pppppppiVar11 = (int *******)(pppppppuVar5 + 1);
              *pppppppiVar11 = (int ******)0x0;
              pppppppuVar5[2] = &local_218;
              *pppppppiVar11 = (int ******)local_218;
              if (local_218 != (int *******)0x0) {
                local_218[1] = (int ******)pppppppiVar11;
              }
              uVar14 = local_208 + 1;
              local_208 = uVar14;
              local_218 = pppppppiVar11;
            }
          }
        }
        else {
          local_50 = (&DAT_054543c0)[lVar3 * 0xb6];
          if ((&DAT_054543c0)[lVar3 * 0xb6] == 0) {
            iVar8 = iVar8 + 1;
          }
        }
      }
      iVar12 = iVar12 + 1;
      iVar9 = iVar9 + 1;
    } while (iVar12 != 0x11);
    uVar14 = iVar8 - (7 - param_2);
    if (7 - param_2 < iVar8) {
      uVar6 = nn::os::GetSystemTick();
      local_50 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
      uStack_4c = (local_50 ^ local_50 >> 0x1e) * 0x6c078965 + 2;
      local_48 = (uStack_4c ^ uStack_4c >> 0x1e) * 0x6c078965 + 3;
      iStack_44 = (local_48 ^ local_48 >> 0x1e) * 0x6c078965 + 4;
      FUN_038aaa70(&local_218,&local_50);
      if (0 < (int)uVar14) {
        uVar6 = 1;
        uVar13 = 0;
        do {
          ppppppiVar10 = (int ******)(ulong)local_208;
          uVar1 = uVar13 + 1;
          if (uVar13 < local_208) {
            pppppppiVar11 = pppppppiVar15;
            if (6 < uVar13) {
              uVar13 = uVar6 & 0xfffffff8;
              do {
                uVar13 = uVar13 - 8;
                ppppppiVar10 = *(int *******)(*(long *)((*pppppppiVar11)[1][1][1][1][1] + 2) + 8);
                pppppppiVar11 = (int *******)(ppppppiVar10 + 1);
              } while (uVar13 != 0);
            }
            if ((uVar1 & 7) != 0) {
              uVar13 = uVar6 & 7;
              do {
                ppppppiVar10 = *pppppppiVar11;
                uVar13 = uVar13 - 1;
                pppppppiVar11 = (int *******)(ppppppiVar10 + 1);
              } while (uVar13 != 0);
            }
          }
          else {
            ppppppiVar10 = (int ******)0x0;
          }
          FUN_0208f100(param_1,*(undefined4 *)(ppppppiVar10 + -1),1,1,0);
          uVar6 = uVar6 + 1;
          uVar13 = uVar1;
        } while (uVar1 != uVar14);
      }
    }
    do {
      pppppppiVar11 = (int *******)*pppppppiVar15;
      pppppppiVar15 = pppppppiVar11 + 1;
    } while ((int ********)pppppppiVar11 != &local_218);
  }
  return;
}

