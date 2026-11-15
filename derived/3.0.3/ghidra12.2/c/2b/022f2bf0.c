
void FUN_022f2bf0(void)

{
  uint *puVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ushort uVar9;
  long lVar10;
  byte bVar11;
  long *plVar12;
  byte *pbVar13;
  long lVar14;
  short sVar15;
  ulong uVar16;
  ushort *puVar17;
  short sVar18;
  undefined8 local_78;
  undefined8 uStack_70;
  byte local_68;
  undefined1 local_67;
  
  puVar6 = PTR_DAT_04bb32e0;
  uVar16 = 0;
  puVar17 = &DAT_05486940;
  do {
    if ((*puVar17 & 1) != 0) {
      local_68 = *puVar6;
      local_67 = 0;
      local_78 = &PTR_LAB_04a7ef60;
      uStack_70 = 0x11;
      if (7 < local_68) {
        local_68 = 0xff;
      }
      uVar8 = FUN_022f228c(&local_78,uVar16 & 0xffffffff);
      if ((uVar8 & 1) != 0) {
        *puVar17 = *puVar17 & 0xfffe;
      }
    }
    puVar5 = PTR_DAT_04bb27d0;
    uVar16 = uVar16 + 1;
    puVar17 = puVar17 + 0x20;
  } while (uVar16 != 0x14);
  lVar10 = **(long **)PTR_DAT_04bb27d0;
  if (*(byte *)(lVar10 + 0x476) < 2) {
    return;
  }
  bVar11 = *(byte *)(lVar10 + 0x473);
  if ((long)(char)bVar11 != 0xffffffffffffffff) {
    pbVar13 = (byte *)(lVar10 + 0x48) + ((long)(char)bVar11 & 0xffffffffU) * 0x80;
    if (7 < bVar11) {
      pbVar13 = (byte *)(lVar10 + 0x48);
    }
    if (((*pbVar13 >> 3 & 1) != 0) && (*(byte *)(lVar10 + 0x472) != bVar11)) goto LAB_022f2e10;
  }
  lVar10 = 0;
  sVar18 = 0;
  do {
    if (*(long *)((long)&DAT_05486910 + lVar10) != -1) {
      bVar11 = *(byte *)((long)&DAT_05486945 + lVar10 + 1);
      uVar4 = (uint)bVar11 - (bVar11 >> 1 & 0x55555555);
      uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
      uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
      uVar4 = uVar4 + (uVar4 >> 8);
      if ((uVar4 + (uVar4 >> 0x10) & 0x3f) == 0) {
        *(undefined8 *)((long)&DAT_05486928 + lVar10) = 0;
        *(undefined4 *)((long)&DAT_05486938 + lVar10) = 0;
        *(undefined8 *)((long)&DAT_05486910 + lVar10) = 0xffffffffffffffff;
        uVar9 = 3;
        *(undefined8 *)((long)&DAT_0548693c + lVar10) = 0xffff000000000000;
        *(undefined1 *)((long)&DAT_05486945 + lVar10 + 1) = 0;
        *(undefined2 *)(&DAT_05486944 + lVar10) = 0;
      }
      else {
        uVar4 = (uint)*(byte *)((long)&DAT_05486945 + lVar10) -
                (*(byte *)((long)&DAT_05486945 + lVar10) >> 1 & 0x55555555);
        uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
        uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
        uVar4 = uVar4 + (uVar4 >> 8);
        if ((uVar4 + (uVar4 >> 0x10) & 0x3f) != 0) goto LAB_022f2d14;
        FUN_022f2f74();
        uVar9 = 10;
      }
      DAT_05486880 = uVar9 | sVar18 << 8;
      local_78._6_2_ = (ushort)((ulong)local_78 >> 0x30) & 0xff00;
      local_78 = (undefined **)CONCAT26(local_78._6_2_,0xff0000000000);
      if (-1 < DAT_05486858) {
        FUN_01db1df0(**(long **)puVar5 + 0x480,DAT_05486858,&local_78,&DAT_05486880,2,0);
      }
    }
LAB_022f2d14:
    lVar10 = lVar10 + 0x40;
    sVar18 = sVar18 + 1;
  } while (lVar10 != 0x500);
LAB_022f2e10:
  puVar7 = PTR_DAT_04bc1220;
  puVar6 = PTR_DAT_04bb6298;
  sVar18 = 0;
  lVar10 = 0;
  do {
    if (*(long *)((long)&DAT_05486910 + lVar10) != -1) {
      sVar2 = *(short *)((long)&DAT_05486942 + lVar10);
      sVar3 = *(short *)puVar6;
      if ((uint)(sVar2 == sVar3) != (*(ushort *)((long)&DAT_05486940 + lVar10) & 0x20) >> 5) {
        *(ushort *)((long)&DAT_05486940 + lVar10) =
             *(ushort *)((long)&DAT_05486940 + lVar10) & 0xffdf | (ushort)(sVar2 == sVar3) << 5;
        plVar12 = *(long **)puVar5;
        lVar14 = *plVar12;
        bVar11 = *(byte *)(lVar14 + 0x473);
        pbVar13 = puVar7;
        if ((long)(char)bVar11 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar11 & 0xffffffffU) * 0x20;
          if (7 < bVar11) {
            puVar1 = (uint *)(lVar14 + 0x48);
          }
          if (((*puVar1 >> 3 & 1) != 0) && (*(byte *)(lVar14 + 0x472) != bVar11)) {
            sVar15 = 0xb;
            if (sVar2 != sVar3) {
              sVar15 = 0xc;
            }
            local_78._6_2_ = (ushort)((ulong)local_78 >> 0x30) & 0xff00;
            DAT_05486880 = sVar15 + sVar18;
            local_78 = (undefined **)CONCAT26(local_78._6_2_,0xff0100000000);
            if (-1 < DAT_05486858) {
              FUN_01db1df0(*plVar12 + 0x480,DAT_05486858,&local_78,&DAT_05486880,2,0);
            }
            goto LAB_022f2e4c;
          }
          if ((*puVar1 & 8) != 0) {
            pbVar13 = (byte *)(lVar14 + 0x473);
          }
        }
        bVar11 = (byte)(1 << (ulong)(*pbVar13 & 0x1f));
        if (sVar2 == sVar3) {
          bVar11 = *(byte *)((long)&DAT_05486945 + lVar10) | bVar11;
        }
        else {
          bVar11 = *(byte *)((long)&DAT_05486945 + lVar10) & (bVar11 ^ 0xff);
        }
        *(byte *)((long)&DAT_05486945 + lVar10) = bVar11;
      }
    }
LAB_022f2e4c:
    lVar10 = lVar10 + 0x40;
    sVar18 = sVar18 + 0x100;
    if (lVar10 == 0x500) {
      return;
    }
  } while( true );
}

