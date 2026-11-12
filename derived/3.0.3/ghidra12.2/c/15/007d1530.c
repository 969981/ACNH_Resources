
/* WARNING: Removing unreachable block (ram,0x007d23f0) */
/* WARNING: Removing unreachable block (ram,0x007d23f8) */
/* WARNING: Removing unreachable block (ram,0x007d2400) */
/* WARNING: Removing unreachable block (ram,0x007d2528) */
/* WARNING: Removing unreachable block (ram,0x007d2530) */
/* WARNING: Removing unreachable block (ram,0x007d2538) */
/* WARNING: Removing unreachable block (ram,0x007d2540) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_007d1530(long param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ushort uVar24;
  ushort uVar25;
  ushort uVar26;
  ushort uVar27;
  ushort uVar28;
  ushort uVar29;
  ushort uVar30;
  uint5 uVar31;
  undefined *puVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  int iVar35;
  long lVar36;
  undefined8 ****ppppuVar37;
  undefined8 ****ppppuVar38;
  undefined8 ****ppppuVar39;
  undefined **ppuVar40;
  undefined8 ****ppppuVar41;
  undefined8 ****ppppuVar42;
  uint local_328;
  uint uStack_324;
  uint local_320;
  uint uStack_31c;
  undefined8 local_318;
  undefined8 local_310;
  int local_308;
  undefined8 ****local_300;
  undefined8 *local_2f8;
  int local_2f0;
  undefined8 local_2e8;
  undefined8 ****local_2e0;
  undefined8 ****local_2d8;
  undefined8 ***local_2d0;
  undefined8 ****local_2c8;
  undefined8 ****local_2c0;
  undefined8 ****local_2b8 [3];
  undefined8 ****local_2a0 [3];
  undefined8 ****local_288 [3];
  undefined8 ****local_270 [3];
  undefined8 ****local_258 [3];
  undefined8 ****local_240 [3];
  undefined8 ****local_228 [3];
  undefined8 ****local_210 [3];
  undefined8 ****local_1f8 [3];
  undefined8 ****local_1e0 [3];
  undefined8 ***local_1c8 [3];
  undefined8 **local_1b0 [3];
  undefined8 *local_198 [3];
  undefined8 local_180 [3];
  AesImpl<16ul> aAStack_168 [176];
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_80;
  AesImpl<16ul> *local_78;
  undefined *local_70;
  undefined4 local_68;
  
  uVar20 = (param_2 ^ param_2 >> 0x1e) * 0x6c078965 + 1;
  uVar21 = (uVar20 ^ uVar20 >> 0x1e) * 0x6c078965 + 2;
  uVar22 = (uVar21 ^ uVar21 >> 0x1e) * 0x6c078965 + 3;
  uVar23 = (uVar22 ^ uVar22 >> 0x1e) * 0x6c078965 + 4;
  nn::os::GetSystemTick();
  uVar20 = uVar20 ^ uVar20 * 0x800;
  uVar21 = uVar21 ^ uVar21 * 0x800;
  uVar2 = uVar20 ^ uVar23;
  uVar3 = uVar23 ^ uVar23 * 0x800;
  uVar20 = uVar20 >> 8 ^ uVar23 >> 0x13 ^ uVar2;
  uVar23 = uVar21 ^ uVar20;
  uVar4 = uVar20 ^ uVar20 << 0xb;
  uVar20 = uVar21 >> 8 ^ uVar20 >> 0x13 ^ uVar23;
  uVar22 = uVar22 ^ uVar22 * 0x800;
  uVar21 = uVar22 ^ uVar20;
  uVar5 = uVar20 ^ uVar20 << 0xb;
  uVar6 = uVar22 >> 8 ^ uVar20 >> 0x13 ^ uVar21;
  uVar20 = uVar3 ^ uVar6;
  uVar7 = uVar3 >> 8 ^ uVar6 >> 0x13 ^ uVar20;
  uVar3 = uVar4 ^ uVar7;
  uVar8 = uVar4 >> 8 ^ uVar7 >> 0x13 ^ uVar3;
  uVar4 = uVar5 ^ uVar8;
  uVar22 = uVar5 >> 8 ^ uVar8 >> 0x13 ^ uVar4;
  uVar6 = uVar6 ^ uVar6 << 0xb;
  uVar7 = uVar7 ^ uVar7 << 0xb;
  uVar5 = uVar6 ^ uVar22;
  uVar9 = uVar22 ^ uVar22 << 0xb;
  uVar22 = uVar6 >> 8 ^ uVar22 >> 0x13 ^ uVar5;
  uVar6 = uVar7 ^ uVar22;
  uVar10 = uVar22 ^ uVar22 << 0xb;
  uVar22 = uVar7 >> 8 ^ uVar22 >> 0x13 ^ uVar6;
  local_318._0_4_ =
       (*(uint *)(&DAT_0414f674 + (ulong)(uVar2 >> 0x1a) * 4) >> (ulong)(uVar23 >> 0x1b & 0x18)) <<
       0x18 | (*(uint *)(&DAT_0414f674 + (ulong)(uVar21 >> 0x1a) * 4) >>
               (ulong)(uVar20 >> 0x1b & 0x18) & 0xff) << 0x10 |
       (*(uint *)(&DAT_0414f674 + (ulong)(uVar3 >> 0x1a) * 4) >> (ulong)(uVar4 >> 0x1b & 0x18) &
       0xff) << 8 |
       *(uint *)(&DAT_0414f674 + (ulong)(uVar5 >> 0x1a) * 4) >> (ulong)(uVar6 >> 0x1b & 0x18) & 0xff
  ;
  uVar8 = uVar8 ^ uVar8 << 0xb;
  uVar20 = uVar8 ^ uVar22;
  uVar21 = uVar22 ^ uVar22 << 0xb;
  uVar2 = uVar8 >> 8 ^ uVar22 >> 0x13 ^ uVar20;
  uVar3 = uVar9 ^ uVar2;
  uVar23 = uVar2 ^ uVar2 << 0xb;
  uVar2 = uVar9 >> 8 ^ uVar2 >> 0x13 ^ uVar3;
  uVar4 = uVar10 ^ uVar2;
  uVar22 = uVar2 ^ uVar2 << 0xb;
  uVar2 = uVar10 >> 8 ^ uVar2 >> 0x13 ^ uVar4;
  uVar5 = uVar21 ^ uVar2;
  uVar6 = uVar2 ^ uVar2 << 0xb;
  uVar21 = uVar21 >> 8 ^ uVar2 >> 0x13 ^ uVar5;
  uVar2 = uVar23 ^ uVar21;
  uVar7 = uVar21 ^ uVar21 << 0xb;
  uVar21 = uVar23 >> 8 ^ uVar21 >> 0x13 ^ uVar2;
  uVar23 = uVar22 ^ uVar21;
  uVar9 = uVar21 ^ uVar21 << 0xb;
  uVar8 = uVar22 >> 8 ^ uVar21 >> 0x13 ^ uVar23;
  uVar21 = uVar6 ^ uVar8;
  uVar22 = uVar6 >> 8 ^ uVar8 >> 0x13 ^ uVar21;
  uVar6 = uVar7 ^ uVar22;
  uVar10 = uVar22 ^ uVar22 << 0xb;
  uVar22 = uVar7 >> 8 ^ uVar22 >> 0x13 ^ uVar6;
  local_318._4_4_ =
       (*(uint *)(&DAT_0414f674 + (ulong)(uVar20 >> 0x1a) * 4) >> (ulong)(uVar3 >> 0x1b & 0x18)) <<
       0x18 | (*(uint *)(&DAT_0414f674 + (ulong)(uVar4 >> 0x1a) * 4) >>
               (ulong)(uVar5 >> 0x1b & 0x18) & 0xff) << 0x10 |
       (*(uint *)(&DAT_0414f674 + (ulong)(uVar2 >> 0x1a) * 4) >> (ulong)(uVar23 >> 0x1b & 0x18) &
       0xff) << 8 |
       *(uint *)(&DAT_0414f674 + (ulong)(uVar21 >> 0x1a) * 4) >> (ulong)(uVar6 >> 0x1b & 0x18) &
       0xff;
  uVar20 = uVar9 ^ uVar22;
  uVar21 = uVar22 ^ uVar22 << 0xb;
  uVar8 = uVar8 ^ uVar8 << 0xb;
  uVar2 = uVar9 >> 8 ^ uVar22 >> 0x13 ^ uVar20;
  uVar3 = uVar8 ^ uVar2;
  uVar23 = uVar2 ^ uVar2 << 0xb;
  uVar2 = uVar8 >> 8 ^ uVar2 >> 0x13 ^ uVar3;
  uVar4 = uVar10 ^ uVar2;
  uVar22 = uVar2 ^ uVar2 << 0xb;
  uVar2 = uVar10 >> 8 ^ uVar2 >> 0x13 ^ uVar4;
  uVar5 = uVar21 ^ uVar2;
  uVar6 = uVar2 ^ uVar2 << 0xb;
  uVar21 = uVar21 >> 8 ^ uVar2 >> 0x13 ^ uVar5;
  uVar2 = uVar23 ^ uVar21;
  uVar7 = uVar21 ^ uVar21 << 0xb;
  uVar8 = uVar23 >> 8 ^ uVar21 >> 0x13 ^ uVar2;
  uVar21 = uVar22 ^ uVar8;
  uVar10 = uVar22 >> 8 ^ uVar8 >> 0x13 ^ uVar21;
  uVar23 = uVar6 ^ uVar10;
  uVar22 = uVar6 >> 8 ^ uVar10 >> 0x13 ^ uVar23;
  uVar6 = uVar7 ^ uVar22;
  uVar9 = uVar22 ^ uVar22 << 0xb;
  uVar22 = uVar7 >> 8 ^ uVar22 >> 0x13 ^ uVar6;
  uVar10 = uVar10 ^ uVar10 << 0xb;
  local_310._0_4_ =
       (*(uint *)(&DAT_0414f674 + (ulong)(uVar20 >> 0x1a) * 4) >> (ulong)(uVar3 >> 0x1b & 0x18)) <<
       0x18 | (*(uint *)(&DAT_0414f674 + (ulong)(uVar4 >> 0x1a) * 4) >>
               (ulong)(uVar5 >> 0x1b & 0x18) & 0xff) << 0x10 |
       (*(uint *)(&DAT_0414f674 + (ulong)(uVar2 >> 0x1a) * 4) >> (ulong)(uVar21 >> 0x1b & 0x18) &
       0xff) << 8 |
       *(uint *)(&DAT_0414f674 + (ulong)(uVar23 >> 0x1a) * 4) >> (ulong)(uVar6 >> 0x1b & 0x18) &
       0xff;
  uVar8 = uVar8 ^ uVar8 << 0xb;
  uVar20 = uVar8 ^ uVar22;
  uVar21 = uVar22 ^ uVar22 << 0xb;
  uVar2 = uVar8 >> 8 ^ uVar22 >> 0x13 ^ uVar20;
  uVar3 = uVar10 ^ uVar2;
  uVar23 = uVar2 ^ uVar2 << 0xb;
  uVar2 = uVar10 >> 8 ^ uVar2 >> 0x13 ^ uVar3;
  uVar4 = uVar9 ^ uVar2;
  uVar22 = uVar2 ^ uVar2 << 0xb;
  uVar2 = uVar9 >> 8 ^ uVar2 >> 0x13 ^ uVar4;
  uVar5 = uVar21 ^ uVar2;
  uVar6 = uVar2 ^ uVar2 << 0xb;
  uVar7 = uVar21 >> 8 ^ uVar2 >> 0x13 ^ uVar5;
  uVar21 = uVar23 ^ uVar7;
  uVar9 = uVar23 >> 8 ^ uVar7 >> 0x13 ^ uVar21;
  uVar2 = uVar22 ^ uVar9;
  uVar10 = uVar22 >> 8 ^ uVar9 >> 0x13 ^ uVar2;
  uVar23 = uVar6 ^ uVar10;
  uVar8 = uVar6 >> 8 ^ uVar10 >> 0x13 ^ uVar23;
  uVar7 = uVar7 ^ uVar7 << 0xb;
  uVar22 = uVar7 ^ uVar8;
  uVar6 = uVar7 >> 8 ^ uVar8 >> 0x13 ^ uVar22;
  local_310._4_4_ =
       (*(uint *)(&DAT_0414f674 + (ulong)(uVar20 >> 0x1a) * 4) >> (ulong)(uVar3 >> 0x1b & 0x18)) <<
       0x18 | (*(uint *)(&DAT_0414f674 + (ulong)(uVar4 >> 0x1a) * 4) >>
               (ulong)(uVar5 >> 0x1b & 0x18) & 0xff) << 0x10 |
       (*(uint *)(&DAT_0414f674 + (ulong)(uVar21 >> 0x1a) * 4) >> (ulong)(uVar2 >> 0x1b & 0x18) &
       0xff) << 8 |
       *(uint *)(&DAT_0414f674 + (ulong)(uVar23 >> 0x1a) * 4) >> (ulong)(uVar22 >> 0x1b & 0x18) &
       0xff;
  FUN_007d2960(param_1 + 8,0x10,&DAT_0414f674,0x100,&local_318,0x10);
  nn::os::GetSystemTick();
  uVar9 = uVar9 ^ uVar9 << 0xb;
  uVar10 = uVar10 ^ uVar10 << 0xb;
  uVar20 = uVar9 ^ uVar6;
  uVar21 = uVar6 ^ uVar6 << 0xb;
  uVar2 = uVar9 >> 8 ^ uVar6 >> 0x13 ^ uVar20;
  uVar3 = uVar10 ^ uVar2;
  uVar23 = uVar2 ^ uVar2 << 0xb;
  uVar2 = uVar10 >> 8 ^ uVar2 >> 0x13 ^ uVar3;
  uVar8 = uVar8 ^ uVar8 << 0xb;
  uVar4 = uVar8 ^ uVar2;
  uVar22 = uVar2 ^ uVar2 << 0xb;
  uVar5 = uVar8 >> 8 ^ uVar2 >> 0x13 ^ uVar4;
  uVar2 = uVar21 ^ uVar5;
  uVar6 = uVar21 >> 8 ^ uVar5 >> 0x13 ^ uVar2;
  uVar21 = uVar23 ^ uVar6;
  uVar8 = uVar23 >> 8 ^ uVar6 >> 0x13 ^ uVar21;
  uVar23 = uVar22 ^ uVar8;
  uVar22 = uVar22 >> 8 ^ uVar8 >> 0x13 ^ uVar23;
  uVar5 = uVar5 ^ uVar5 << 0xb;
  uVar6 = uVar6 ^ uVar6 << 0xb;
  uVar7 = uVar5 ^ uVar22;
  uVar9 = uVar22 ^ uVar22 << 0xb;
  uVar22 = uVar5 >> 8 ^ uVar22 >> 0x13 ^ uVar7;
  uVar5 = uVar6 ^ uVar22;
  uVar10 = uVar22 ^ uVar22 << 0xb;
  uVar22 = uVar6 >> 8 ^ uVar22 >> 0x13 ^ uVar5;
  uVar8 = uVar8 ^ uVar8 << 0xb;
  uVar6 = uVar8 ^ uVar22;
  uVar11 = uVar22 ^ uVar22 << 0xb;
  uVar22 = uVar8 >> 8 ^ uVar22 >> 0x13 ^ uVar6;
  uVar8 = uVar9 ^ uVar22;
  uVar12 = uVar22 ^ uVar22 << 0xb;
  uVar22 = uVar9 >> 8 ^ uVar22 >> 0x13 ^ uVar8;
  uVar9 = uVar10 ^ uVar22;
  uVar13 = uVar22 ^ uVar22 << 0xb;
  uVar22 = uVar10 >> 8 ^ uVar22 >> 0x13 ^ uVar9;
  uVar10 = uVar11 ^ uVar22;
  uVar14 = uVar22 ^ uVar22 << 0xb;
  uVar22 = uVar11 >> 8 ^ uVar22 >> 0x13 ^ uVar10;
  uVar11 = uVar12 ^ uVar22;
  uVar15 = uVar22 ^ uVar22 << 0xb;
  uVar22 = uVar12 >> 8 ^ uVar22 >> 0x13 ^ uVar11;
  uVar12 = uVar13 ^ uVar22;
  uVar16 = uVar22 ^ uVar22 << 0xb;
  uVar17 = uVar13 >> 8 ^ uVar22 >> 0x13 ^ uVar12;
  uVar22 = uVar14 ^ uVar17;
  uVar13 = uVar14 >> 8 ^ uVar17 >> 0x13 ^ uVar22;
  uVar14 = uVar15 ^ uVar13;
  uVar18 = uVar13 ^ uVar13 << 0xb;
  uVar13 = uVar15 >> 8 ^ uVar13 >> 0x13 ^ uVar14;
  uVar15 = uVar16 ^ uVar13;
  uVar19 = uVar13 ^ uVar13 << 0xb;
  local_318 = (undefined8 ****)
              CONCAT44((*(uint *)(&DAT_0414f674 + (ulong)(uVar6 >> 0x1a) * 4) >>
                       (ulong)(uVar8 >> 0x1b & 0x18)) << 0x18 |
                       (*(uint *)(&DAT_0414f674 + (ulong)(uVar9 >> 0x1a) * 4) >>
                        (ulong)(uVar10 >> 0x1b & 0x18) & 0xff) << 0x10 |
                       (*(uint *)(&DAT_0414f674 + (ulong)(uVar11 >> 0x1a) * 4) >>
                        (ulong)(uVar12 >> 0x1b & 0x18) & 0xff) << 8 |
                       *(uint *)(&DAT_0414f674 + (ulong)(uVar22 >> 0x1a) * 4) >>
                       (ulong)(uVar14 >> 0x1b & 0x18) & 0xff,
                       (*(uint *)(&DAT_0414f674 + (ulong)(uVar20 >> 0x1a) * 4) >>
                       (ulong)(uVar3 >> 0x1b & 0x18)) << 0x18 |
                       (*(uint *)(&DAT_0414f674 + (ulong)(uVar4 >> 0x1a) * 4) >>
                        (ulong)(uVar2 >> 0x1b & 0x18) & 0xff) << 0x10 |
                       (*(uint *)(&DAT_0414f674 + (ulong)(uVar21 >> 0x1a) * 4) >>
                        (ulong)(uVar23 >> 0x1b & 0x18) & 0xff) << 8 |
                       *(uint *)(&DAT_0414f674 + (ulong)(uVar7 >> 0x1a) * 4) >>
                       (ulong)(uVar5 >> 0x1b & 0x18) & 0xff);
  uVar17 = uVar17 ^ uVar17 << 0xb;
  uVar20 = uVar16 >> 8 ^ uVar13 >> 0x13 ^ uVar15;
  uVar21 = uVar17 ^ uVar20;
  uVar2 = uVar20 ^ uVar20 << 0xb;
  uVar20 = uVar17 >> 8 ^ uVar20 >> 0x13 ^ uVar21;
  uVar3 = uVar18 ^ uVar20;
  uVar23 = uVar20 ^ uVar20 << 0xb;
  uVar20 = uVar18 >> 8 ^ uVar20 >> 0x13 ^ uVar3;
  uVar4 = uVar19 ^ uVar20;
  uVar22 = uVar20 ^ uVar20 << 0xb;
  uVar20 = uVar19 >> 8 ^ uVar20 >> 0x13 ^ uVar4;
  uVar5 = uVar2 ^ uVar20;
  uVar6 = uVar20 ^ uVar20 << 0xb;
  uVar10 = uVar2 >> 8 ^ uVar20 >> 0x13 ^ uVar5;
  uVar20 = uVar23 ^ uVar10;
  uVar9 = uVar23 >> 8 ^ uVar10 >> 0x13 ^ uVar20;
  uVar2 = uVar22 ^ uVar9;
  uVar23 = uVar22 >> 8 ^ uVar9 >> 0x13 ^ uVar2;
  uVar22 = uVar6 ^ uVar23;
  uVar7 = uVar23 ^ uVar23 << 0xb;
  uVar23 = uVar6 >> 8 ^ uVar23 >> 0x13 ^ uVar22;
  uVar9 = uVar9 ^ uVar9 << 0xb;
  uVar10 = uVar10 ^ uVar10 << 0xb;
  uVar6 = uVar10 ^ uVar23;
  uVar8 = uVar23 ^ uVar23 << 0xb;
  uVar23 = uVar10 >> 8 ^ uVar23 >> 0x13 ^ uVar6;
  uVar10 = uVar9 ^ uVar23;
  uVar11 = uVar23 ^ uVar23 << 0xb;
  uVar23 = uVar9 >> 8 ^ uVar23 >> 0x13 ^ uVar10;
  uVar9 = uVar7 ^ uVar23;
  uVar12 = uVar23 ^ uVar23 << 0xb;
  uVar23 = uVar7 >> 8 ^ uVar23 >> 0x13 ^ uVar9;
  uVar7 = uVar8 ^ uVar23;
  uVar13 = uVar23 ^ uVar23 << 0xb;
  uVar14 = uVar8 >> 8 ^ uVar23 >> 0x13 ^ uVar7;
  uVar23 = uVar11 ^ uVar14;
  uVar16 = uVar11 >> 8 ^ uVar14 >> 0x13 ^ uVar23;
  uVar8 = uVar12 ^ uVar16;
  uVar18 = uVar12 >> 8 ^ uVar16 >> 0x13 ^ uVar8;
  uVar11 = uVar13 ^ uVar18;
  uVar13 = uVar13 >> 8 ^ uVar18 >> 0x13 ^ uVar11;
  uVar14 = uVar14 ^ uVar14 << 0xb;
  uVar12 = uVar14 ^ uVar13;
  uVar14 = uVar14 >> 8 ^ uVar13 >> 0x13 ^ uVar12;
  local_310 = (undefined8 ****)
              CONCAT44((*(uint *)(&DAT_0414f674 + (ulong)(uVar6 >> 0x1a) * 4) >>
                       (ulong)(uVar10 >> 0x1b & 0x18)) << 0x18 |
                       (*(uint *)(&DAT_0414f674 + (ulong)(uVar9 >> 0x1a) * 4) >>
                        (ulong)(uVar7 >> 0x1b & 0x18) & 0xff) << 0x10 |
                       (*(uint *)(&DAT_0414f674 + (ulong)(uVar23 >> 0x1a) * 4) >>
                        (ulong)(uVar8 >> 0x1b & 0x18) & 0xff) << 8 |
                       *(uint *)(&DAT_0414f674 + (ulong)(uVar11 >> 0x1a) * 4) >>
                       (ulong)(uVar12 >> 0x1b & 0x18) & 0xff,
                       (*(uint *)(&DAT_0414f674 + (ulong)(uVar15 >> 0x1a) * 4) >>
                       (ulong)(uVar21 >> 0x1b & 0x18)) << 0x18 |
                       (*(uint *)(&DAT_0414f674 + (ulong)(uVar3 >> 0x1a) * 4) >>
                        (ulong)(uVar4 >> 0x1b & 0x18) & 0xff) << 0x10 |
                       (*(uint *)(&DAT_0414f674 + (ulong)(uVar5 >> 0x1a) * 4) >>
                        (ulong)(uVar20 >> 0x1b & 0x18) & 0xff) << 8 |
                       *(uint *)(&DAT_0414f674 + (ulong)(uVar2 >> 0x1a) * 4) >>
                       (ulong)(uVar22 >> 0x1b & 0x18) & 0xff);
  FUN_007d2960(param_1 + 0x18,0x10,&DAT_0414f674,0x100,&local_318,0x10);
  nn::os::GetSystemTick();
  uVar16 = uVar16 ^ uVar16 << 0xb;
  uVar18 = uVar18 ^ uVar18 << 0xb;
  uVar20 = uVar16 ^ uVar14;
  local_b8 = 0;
  local_80 = 0;
  local_68 = 0;
  uVar21 = uVar16 >> 8 ^ uVar14 >> 0x13 ^ uVar20;
  uVar13 = uVar13 ^ uVar13 << 0xb;
  uVar2 = uVar18 ^ uVar21;
  uVar3 = uVar21 ^ uVar21 << 0xb;
  uVar21 = uVar18 >> 8 ^ uVar21 >> 0x13 ^ uVar2;
  uVar14 = uVar14 ^ uVar14 << 0xb;
  uVar23 = uVar13 ^ uVar21;
  uVar4 = uVar21 ^ uVar21 << 0xb;
  uVar21 = uVar13 >> 8 ^ uVar21 >> 0x13 ^ uVar23;
  uVar22 = uVar14 ^ uVar21;
  uVar5 = uVar21 ^ uVar21 << 0xb;
  uVar21 = uVar14 >> 8 ^ uVar21 >> 0x13 ^ uVar22;
  uVar6 = uVar3 ^ uVar21;
  uVar7 = uVar21 ^ uVar21 << 0xb;
  uVar21 = uVar3 >> 8 ^ uVar21 >> 0x13 ^ uVar6;
  uVar3 = uVar4 ^ uVar21;
  uVar9 = uVar21 ^ uVar21 << 0xb;
  uVar21 = uVar4 >> 8 ^ uVar21 >> 0x13 ^ uVar3;
  uVar4 = uVar5 ^ uVar21;
  uVar10 = uVar21 ^ uVar21 << 0xb;
  uVar5 = uVar5 >> 8 ^ uVar21 >> 0x13 ^ uVar4;
  uVar21 = uVar7 ^ uVar5;
  uVar8 = uVar7 >> 8 ^ uVar5 >> 0x13 ^ uVar21;
  uVar5 = uVar5 ^ uVar5 << 0xb;
  uVar7 = uVar9 ^ uVar8;
  uVar11 = uVar9 >> 8 ^ uVar8 >> 0x13 ^ uVar7;
  uVar8 = uVar8 ^ uVar8 << 0xb;
  uVar9 = uVar10 ^ uVar11;
  uVar10 = uVar10 >> 8 ^ uVar11 >> 0x13 ^ uVar9;
  local_328 = (*(uint *)(&DAT_0414f674 + (ulong)(uVar20 >> 0x1a) * 4) >>
              (ulong)(uVar2 >> 0x1b & 0x18)) << 0x18 |
              (*(uint *)(&DAT_0414f674 + (ulong)(uVar23 >> 0x1a) * 4) >>
               (ulong)(uVar22 >> 0x1b & 0x18) & 0xff) << 0x10 |
              (*(uint *)(&DAT_0414f674 + (ulong)(uVar6 >> 0x1a) * 4) >>
               (ulong)(uVar3 >> 0x1b & 0x18) & 0xff) << 8 |
              *(uint *)(&DAT_0414f674 + (ulong)(uVar4 >> 0x1a) * 4) >>
              (ulong)(uVar21 >> 0x1b & 0x18) & 0xff;
  uVar11 = uVar11 ^ uVar11 << 0xb;
  uVar20 = uVar5 ^ uVar10;
  uVar21 = uVar10 ^ uVar10 << 0xb;
  uVar2 = uVar5 >> 8 ^ uVar10 >> 0x13 ^ uVar20;
  uVar3 = uVar8 ^ uVar2;
  uVar23 = uVar2 ^ uVar2 << 0xb;
  uVar2 = uVar8 >> 8 ^ uVar2 >> 0x13 ^ uVar3;
  uVar4 = uVar11 ^ uVar2;
  uVar22 = uVar2 ^ uVar2 << 0xb;
  uVar2 = uVar11 >> 8 ^ uVar2 >> 0x13 ^ uVar4;
  uVar5 = uVar21 ^ uVar2;
  uVar6 = uVar2 ^ uVar2 << 0xb;
  uVar21 = uVar21 >> 8 ^ uVar2 >> 0x13 ^ uVar5;
  uVar2 = uVar23 ^ uVar21;
  uVar10 = uVar21 ^ uVar21 << 0xb;
  uVar21 = uVar23 >> 8 ^ uVar21 >> 0x13 ^ uVar2;
  uVar23 = uVar22 ^ uVar21;
  uVar8 = uVar21 ^ uVar21 << 0xb;
  uVar21 = uVar22 >> 8 ^ uVar21 >> 0x13 ^ uVar23;
  uVar22 = uVar6 ^ uVar21;
  uVar11 = uVar21 ^ uVar21 << 0xb;
  uVar21 = uVar6 >> 8 ^ uVar21 >> 0x13 ^ uVar22;
  uStack_324 = (*(uint *)(&DAT_0414f674 + (ulong)(uVar7 >> 0x1a) * 4) >>
               (ulong)(uVar9 >> 0x1b & 0x18)) << 0x18 |
               (*(uint *)(&DAT_0414f674 + (ulong)(uVar20 >> 0x1a) * 4) >>
                (ulong)(uVar3 >> 0x1b & 0x18) & 0xff) << 0x10 |
               (*(uint *)(&DAT_0414f674 + (ulong)(uVar4 >> 0x1a) * 4) >>
                (ulong)(uVar5 >> 0x1b & 0x18) & 0xff) << 8 |
               *(uint *)(&DAT_0414f674 + (ulong)(uVar2 >> 0x1a) * 4) >>
               (ulong)(uVar23 >> 0x1b & 0x18) & 0xff;
  uVar20 = uVar10 ^ uVar21;
  uVar2 = uVar21 ^ uVar21 << 0xb;
  uVar21 = uVar10 >> 8 ^ uVar21 >> 0x13 ^ uVar20;
  uVar3 = uVar8 ^ uVar21;
  uVar23 = uVar21 ^ uVar21 << 0xb;
  uVar21 = uVar8 >> 8 ^ uVar21 >> 0x13 ^ uVar3;
  uVar4 = uVar11 ^ uVar21;
  uVar5 = uVar21 ^ uVar21 << 0xb;
  uVar21 = uVar11 >> 8 ^ uVar21 >> 0x13 ^ uVar4;
  uVar6 = uVar2 ^ uVar21;
  uVar7 = uVar21 ^ uVar21 << 0xb;
  uVar21 = uVar2 >> 8 ^ uVar21 >> 0x13 ^ uVar6;
  uVar2 = uVar23 ^ uVar21;
  uVar9 = uVar21 ^ uVar21 << 0xb;
  uVar21 = uVar23 >> 8 ^ uVar21 >> 0x13 ^ uVar2;
  uVar23 = uVar5 ^ uVar21;
  uVar10 = uVar21 ^ uVar21 << 0xb;
  uVar21 = uVar5 >> 8 ^ uVar21 >> 0x13 ^ uVar23;
  uVar5 = uVar7 ^ uVar21;
  uVar8 = uVar21 ^ uVar21 << 0xb;
  uVar7 = uVar7 >> 8 ^ uVar21 >> 0x13 ^ uVar5;
  uVar21 = uVar9 ^ uVar9 >> 8 ^ uVar7;
  uVar7 = uVar7 ^ uVar7 << 0xb;
  uVar9 = uVar10 ^ uVar10 >> 8 ^ uVar21;
  uVar10 = uVar8 ^ uVar8 >> 8 ^ uVar9;
  local_320 = (*(uint *)(&DAT_0414f674 + (ulong)(uVar22 >> 0x1a) * 4) >>
              (ulong)(uVar20 >> 0x1b & 0x18)) << 0x18 |
              (*(uint *)(&DAT_0414f674 + (ulong)(uVar3 >> 0x1a) * 4) >>
               (ulong)(uVar4 >> 0x1b & 0x18) & 0xff) << 0x10 |
              (*(uint *)(&DAT_0414f674 + (ulong)(uVar6 >> 0x1a) * 4) >>
               (ulong)(uVar2 >> 0x1b & 0x18) & 0xff) << 8 |
              *(uint *)(&DAT_0414f674 + (ulong)(uVar23 >> 0x1a) * 4) >>
              (ulong)(uVar5 >> 0x1b & 0x18) & 0xff;
  uVar20 = uVar7 ^ uVar7 >> 8 ^ uVar10;
  uVar2 = uVar21 ^ uVar21 << 0xb ^ uVar20;
  uVar3 = uVar9 ^ uVar9 << 0xb ^ uVar2;
  uVar23 = uVar10 ^ uVar10 << 0xb ^ uVar3;
  uStack_31c = (*(uint *)(&DAT_0414f674 + (ulong)(uVar21 >> 0x1a) * 4) >>
               (ulong)(uVar9 >> 0x1b & 0x18)) << 0x18 |
               (*(uint *)(&DAT_0414f674 + (ulong)(uVar10 >> 0x1a) * 4) >>
                (ulong)(uVar20 >> 0x1b & 0x18) & 0xff) << 0x10 |
               (*(uint *)(&DAT_0414f674 + (ulong)(uVar2 >> 0x1a) * 4) >>
                (ulong)(uVar3 >> 0x1b & 0x18) & 0xff) << 8 |
               *(uint *)(&DAT_0414f674 + (ulong)(uVar23 >> 0x1a) * 4) >>
               (ulong)((uVar20 ^ uVar20 << 0xb ^ uVar23) >> 0x1b & 0x18) & 0xff;
  nn::crypto::detail::AesImpl<16ul>::Initialize(aAStack_168,(ulong)&local_328,true);
  local_ac = 0;
  local_b4 = 0;
  nn::crypto::detail::AesImpl<16ul>::EncryptBlock
            (aAStack_168,(ulong)&local_b4,&DAT_00000010,(ulong)&local_b4);
  uVar34 = local_ac;
  uVar33 = local_b4;
  iVar35 = (int)(char)local_b4;
  uVar31 = CONCAT41(iVar35,local_b4._1_1_);
  uVar24 = CONCAT11(local_b4._1_1_,local_b4._2_1_);
  local_b4._3_1_ = SUB81(uVar33,3);
  uVar25 = CONCAT11(local_b4._2_1_,local_b4._3_1_);
  local_b4._4_1_ = SUB81(uVar33,4);
  uVar26 = CONCAT11(local_b4._3_1_,local_b4._4_1_);
  local_b4._5_1_ = SUB81(uVar33,5);
  uVar27 = CONCAT11(local_b4._4_1_,local_b4._5_1_);
  local_b4._6_1_ = SUB81(uVar33,6);
  uVar28 = CONCAT11(local_b4._5_1_,local_b4._6_1_);
  local_b4._7_1_ = SUB81(uVar33,7);
  uVar29 = CONCAT11(local_b4._6_1_,local_b4._7_1_);
  local_b4 = CONCAT17((char)(CONCAT11(local_b4._7_1_,(undefined1)local_ac) >> 7),
                      CONCAT16((char)(uVar29 >> 7),
                               CONCAT15((char)(uVar28 >> 7),
                                        CONCAT14((char)(uVar27 >> 7),
                                                 CONCAT13((char)(uVar26 >> 7),
                                                          CONCAT12((char)(uVar25 >> 7),
                                                                   CONCAT11((char)(uVar24 >> 7),
                                                                            (char)(uVar31 >> 7))))))
                              ));
  uVar24 = CONCAT11((undefined1)local_ac,local_ac._1_1_);
  uVar25 = CONCAT11(local_ac._1_1_,local_ac._2_1_);
  local_ac._3_1_ = SUB81(uVar34,3);
  uVar26 = CONCAT11(local_ac._2_1_,local_ac._3_1_);
  local_ac._4_1_ = SUB81(uVar34,4);
  uVar27 = CONCAT11(local_ac._3_1_,local_ac._4_1_);
  local_ac._5_1_ = SUB81(uVar34,5);
  uVar28 = CONCAT11(local_ac._4_1_,local_ac._5_1_);
  local_ac._6_1_ = SUB81(uVar34,6);
  uVar29 = CONCAT11(local_ac._5_1_,local_ac._6_1_);
  local_ac._7_1_ = SUB81(uVar34,7);
  uVar30 = CONCAT11(local_ac._6_1_,local_ac._7_1_);
  local_228[0] = local_210;
  bVar1 = local_ac._7_1_ << 1 ^ 0x87;
  if (-1 < iVar35) {
    bVar1 = local_ac._7_1_ << 1;
  }
  local_240[0] = local_228;
  local_2b8[0] = local_2a0;
  local_ac = CONCAT17(bVar1,CONCAT16((char)(uVar30 >> 7),
                                     CONCAT15((char)(uVar29 >> 7),
                                              CONCAT14((char)(uVar28 >> 7),
                                                       CONCAT13((char)(uVar27 >> 7),
                                                                CONCAT12((char)(uVar26 >> 7),
                                                                         CONCAT11((char)(uVar25 >> 7
                                                                                        ),(char)(
                                                  uVar24 >> 7))))))));
  local_210[0] = local_1f8;
  local_1f8[0] = local_1e0;
  local_288[0] = local_270;
  local_80 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_68 = 1;
  local_b8 = 1;
  local_180[0] = 0;
  local_2f0 = 0x10;
  local_1e0[0] = local_1c8;
  local_1c8[0] = local_1b0;
  local_258[0] = local_240;
  local_1b0[0] = local_198;
  local_198[0] = local_180;
  local_70 = PTR_LAB_04bb4ae0;
  local_2a0[0] = local_288;
  local_270[0] = local_258;
  local_2f8 = &local_2e8;
  local_310 = &local_2e0;
  local_2e8 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb43c0 + 0x57e58) + 0xb0);
  local_2d0 = *(undefined8 ****)(*(long *)(*(long *)PTR_DAT_04bb43c0 + 0x57e68) + 0xb0);
  local_300 = &local_2d0;
  if (&local_2d0 != (undefined8 ****)0x0) {
    local_300 = local_2b8;
  }
  ppppuVar41 = local_300;
  local_2c0 = (undefined8 ****)&local_318;
  local_2c8 = local_310;
  local_2d8 = (undefined8 ****)&local_318;
  if (local_310 != (undefined8 ****)0x0) {
    local_2d8 = &local_2c8;
  }
  if (local_300 != (undefined8 ****)0x0) {
    local_300 = (undefined8 ****)*local_300;
  }
  ppppuVar42 = local_300;
  local_78 = aAStack_168;
  *ppppuVar41 = *(undefined8 ****)(*(long *)PTR_DAT_04bb4138 + 0xb0);
  ppppuVar37 = ppppuVar41 + 1;
  *ppppuVar37 = (undefined8 ***)0x0;
  ppppuVar41[2] = (undefined8 ***)&local_318;
  *ppppuVar37 = &local_2c8;
  if (&local_2c8 != (undefined8 *****)0x0) {
    local_2c0 = ppppuVar37;
  }
  if (local_300 != (undefined8 ****)0x0) {
    local_300 = (undefined8 ****)*local_300;
  }
  ppppuVar39 = local_300;
  *ppppuVar42 = *(undefined8 ****)(*(long *)PTR_DAT_04bb4130 + 0xb0);
  ppppuVar38 = ppppuVar42 + 1;
  *ppppuVar38 = (undefined8 ***)0x0;
  ppppuVar42[2] = (undefined8 ***)&local_318;
  *ppppuVar38 = ppppuVar37;
  if (ppppuVar37 != (undefined8 ****)0x0) {
    ppppuVar41[2] = ppppuVar38;
  }
  lVar36 = *(long *)PTR_DAT_04bb2208;
  if (local_300 != (undefined8 ****)0x0) {
    local_300 = (undefined8 ****)*local_300;
  }
  ppppuVar41 = local_300;
  *ppppuVar39 = *(undefined8 ****)(lVar36 + 0x930);
  ppppuVar37 = ppppuVar39 + 1;
  *ppppuVar37 = (undefined8 ***)0x0;
  ppppuVar39[2] = (undefined8 ***)&local_318;
  *ppppuVar37 = ppppuVar38;
  if (ppppuVar38 != (undefined8 ****)0x0) {
    ppppuVar42[2] = ppppuVar37;
  }
  if (local_300 != (undefined8 ****)0x0) {
    local_300 = (undefined8 ****)*local_300;
  }
  ppppuVar42 = local_300;
  *ppppuVar41 = *(undefined8 ****)(lVar36 + 0xb0);
  ppppuVar38 = ppppuVar41 + 1;
  *ppppuVar38 = (undefined8 ***)0x0;
  ppppuVar41[2] = (undefined8 ***)&local_318;
  *ppppuVar38 = ppppuVar37;
  if (ppppuVar37 != (undefined8 ****)0x0) {
    ppppuVar39[2] = ppppuVar38;
  }
  if (local_300 != (undefined8 ****)0x0) {
    local_300 = (undefined8 ****)*local_300;
  }
  ppppuVar37 = local_300;
  *ppppuVar42 = *(undefined8 ****)(lVar36 + 0x2d0);
  ppppuVar39 = ppppuVar42 + 1;
  *ppppuVar39 = (undefined8 ***)0x0;
  ppppuVar42[2] = (undefined8 ***)&local_318;
  *ppppuVar39 = ppppuVar38;
  if (ppppuVar38 != (undefined8 ****)0x0) {
    ppppuVar41[2] = ppppuVar39;
  }
  if (local_300 != (undefined8 ****)0x0) {
    local_300 = (undefined8 ****)*local_300;
  }
  *ppppuVar37 = *(undefined8 ****)(lVar36 + 0xf70);
  local_318 = ppppuVar37 + 1;
  *local_318 = (undefined8 ***)0x0;
  ppppuVar37[2] = (undefined8 ***)&local_318;
  *local_318 = ppppuVar39;
  if (ppppuVar39 != (undefined8 ****)0x0) {
    ppppuVar42[2] = local_318;
  }
  local_308 = 8;
  local_2e0 = (undefined8 ****)&local_318;
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f0b40 & 1) == 0) {
      iVar35 = __cxa_guard_acquire(&DAT_054f0b40);
      ppuVar40 = &DAT_054f0968;
      if (iVar35 != 0) {
        DAT_054f0a03 = 0;
        DAT_054f0978 = &DAT_054f0984;
        DAT_054f0980 = 0x80;
        DAT_054f0968 = PTR_DAT_04bcb440 + 0x10;
        DAT_054f0984 = 0;
        DAT_054f0970 = PTR_DAT_04bb2d88 + 0x10;
        DAT_054f0a08 = FUN_006bd550(&DAT_0407ebb1,0);
        DAT_054f0a10 = 0;
        DAT_054f0a18 = 0;
        DAT_054f0a20._0_5_ = 0;
        DAT_054f0a20._5_3_ = 0;
        uRam00000000054f0a28 = 0;
        DAT_054f0968 = PTR_DAT_04bc3188 + 0x10;
        DAT_054f0a40 = PTR_DAT_04bc3190 + 0x10;
        DAT_054f0a30 = 0;
        DAT_054f0a38 = 0;
        DAT_054f0a60 = PTR_DAT_04bc3198 + 0x10;
        DAT_054f0ab0 = 0x40;
        DAT_054f0af3 = 0;
        DAT_054f0a80 = PTR_DAT_04bb4a78 + 0x10;
        DAT_054f0aa8 = &DAT_054f0ab4;
        DAT_054f0ab4 = 0;
        DAT_054f0b20 = 0;
        DAT_054f0b00 = 0;
        DAT_054f0b08 = 0;
        DAT_054f0b10 = 0;
        DAT_054f0aa0 = PTR_DAT_04bb2bc0 + 0x10;
        DAT_054f0b18 = 0;
        DAT_054f0af8 = 0xffffffff;
        DAT_054f0b28 = 0xffffffff;
        DAT_054f0b30 = 0;
        DAT_054f0b38 = 0;
        *PTR_DAT_04bc2fe0 = 1;
        puVar32 = PTR_DAT_04bc2fe8;
        *(undefined8 *)PTR_DAT_04bc2fe8 = 0xffffffffffffffff;
        *(undefined8 *)(puVar32 + 8) = 0xffffffffffffffff;
        *(undefined8 *)(puVar32 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar32 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar32 + 0xa0) = 0xffffffffffffffff;
        *(undefined8 *)(puVar32 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar32 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar32 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar32 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar32 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar32 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar32 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar32 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar32 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar32 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar32 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar32 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar32 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar32 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar32 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar32 + 0x98) = 0xffffffffffffffff;
        FUN_001001d0(PTR_FUN_04bc31a8,&DAT_054f0968,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_054f0b40);
      }
    }
    else {
      ppuVar40 = &DAT_054f0968;
    }
  }
  else {
    ppuVar40 = (undefined **)(*(long *)PTR_DAT_04bb4718 + 0x20);
  }
  ppppuVar41 = local_300;
  if (local_308 < local_2f0) {
    if (local_300 != (undefined8 ****)0x0) {
      local_300 = (undefined8 ****)*local_300;
    }
    *ppppuVar41 = (undefined8 ***)ppuVar40[0x16];
    ppppuVar42 = ppppuVar41 + 1;
    *ppppuVar42 = (undefined8 ***)0x0;
    ppppuVar41[2] = (undefined8 ***)&local_318;
    *ppppuVar42 = local_318;
    if (local_318 != (undefined8 ****)0x0) {
      local_318[1] = ppppuVar42;
    }
    local_308 = local_308 + 1;
    local_318 = ppppuVar42;
  }
  ppppuVar41 = (undefined8 ****)&local_310;
  if (local_310 != (undefined8 ****)&local_318) {
    ppppuVar42 = local_310;
    do {
      nn::crypto::detail::CbcMacImpl::Update<nn::crypto::AesEncryptor<16ul>>
                ((CbcMacImpl *)&local_a0,(ulong)ppppuVar42[-1][1]);
      ppppuVar42 = (undefined8 ****)ppppuVar42[1];
    } while (ppppuVar42 + -1 != (undefined8 ****)&local_320);
  }
  FUN_007d2b7c(&local_b8,param_1 + 0x28,0x10);
  do {
    ppppuVar42 = (undefined8 ****)*ppppuVar41;
    ppppuVar41 = ppppuVar42 + 1;
  } while (ppppuVar42 != (undefined8 ****)&local_318);
  nn::crypto::detail::ClearMemory(&local_b8,0x58);
  nn::crypto::detail::CbcMacImpl::~CbcMacImpl((CbcMacImpl *)&local_a0);
  nn::crypto::detail::AesImpl<16ul>::~AesImpl(aAStack_168);
  return;
}

