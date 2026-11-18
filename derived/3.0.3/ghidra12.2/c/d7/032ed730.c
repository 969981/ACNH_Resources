
void FUN_032ed730(void)

{
  void *__src;
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  uint *puVar6;
  long lVar7;
  undefined2 uVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  ushort *puVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined2 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined2 local_68;
  
  puVar6 = DAT_05731078;
  lVar7 = DAT_05730eb0;
  lVar15 = *(long *)(DAT_05355a60 + 0xa70);
  uVar2 = *(uint *)(DAT_05355a60 + 0xbe4);
  if (lVar15 != 0 && uVar2 != 0) {
    uVar9 = *DAT_05731078;
    puVar6[2] = 0;
    puVar6[3] = 0;
    if (-1 < (int)uVar9) {
      lVar10 = (ulong)uVar9 * 0x50;
      __src = (void *)(lVar7 + 0x78ef0);
      *(undefined8 *)(puVar6 + 2) = *(undefined8 *)((long)__src + lVar10);
      *(undefined8 *)((long)__src + lVar10) = 0;
      memcpy((void *)(lVar7 + 0x6f528),__src,0x6d0);
      FUN_001008b0(lVar7 + 0x18,lVar7 + 0x79c90);
    }
    if (0 < (int)uVar2) {
      uVar16 = 0;
LAB_032ed810:
      puVar11 = (undefined8 *)(lVar15 + uVar16 * 100);
      uVar9 = 0;
      local_98 = *puVar11;
      local_90 = puVar11[1];
      uStack_88 = puVar11[2];
      local_68 = *(undefined2 *)(puVar11 + 6);
      local_78 = puVar11[4];
      uStack_70 = puVar11[5];
      local_80 = puVar11[3];
      local_a0 = *(undefined2 *)((long)puVar11 + 0x62);
      local_b0 = *(undefined8 *)((long)puVar11 + 0x52);
      uStack_a8 = *(undefined8 *)((long)puVar11 + 0x5a);
      local_b8 = *(undefined8 *)((long)puVar11 + 0x4a);
      local_c8 = *(undefined8 *)((long)puVar11 + 0x3a);
      uStack_c0 = *(undefined8 *)((long)puVar11 + 0x42);
      puVar12 = (ushort *)&local_98;
      local_d0 = *(undefined8 *)((long)puVar11 + 0x32);
      do {
        uVar3 = *puVar12;
        if (uVar3 == 0xe) {
          uVar4 = puVar12[3] >> 1;
          puVar12 = puVar12 + 3 + uVar4;
          uVar9 = uVar9 + uVar4 + 3;
        }
        else if (uVar3 == 0) goto code_r0x032ed8c0;
        uVar14 = uVar9 + 2;
        if (uVar3 != 0xf) {
          uVar14 = uVar9;
        }
        uVar9 = uVar14 + 1;
        puVar12 = puVar12 + (ulong)(uVar3 == 0xf) * 2 + 1;
      } while( true );
    }
LAB_032eda14:
    if (-1 < (int)*DAT_05731078) {
      *(undefined8 *)(lVar7 + 0x78ef0 + (ulong)*DAT_05731078 * 0x50) =
           *(undefined8 *)(DAT_05731078 + 2);
      memcpy((void *)(lVar7 + 0x6f528),(void *)(lVar7 + 0x78ef0),0x6d0);
      FUN_001008b0(lVar7 + 0x18,lVar7 + 0x79c90);
    }
  }
  return;
code_r0x032ed8c0:
  puVar12 = (ushort *)&local_d0;
  uVar14 = 0;
  do {
    uVar3 = *puVar12;
    if (uVar3 == 0xe) {
      uVar4 = puVar12[3] >> 1;
      puVar12 = puVar12 + 3 + uVar4;
      uVar14 = uVar14 + uVar4 + 3;
    }
    else if (uVar3 == 0) break;
    uVar1 = uVar14 + 2;
    if (uVar3 != 0xf) {
      uVar1 = uVar14;
    }
    uVar14 = uVar1 + 1;
    puVar12 = puVar12 + (ulong)(uVar3 == 0xf) * 2 + 1;
  } while( true );
  if ((0xffffffe7 < uVar9 - 0x19) && (0xffffffe7 < uVar14 - 0x19)) {
    uVar13 = 0;
    uVar17 = (ulong)uVar14;
    do {
      uVar3 = *(ushort *)((long)&local_d0 + uVar13 * 2);
      if (uVar3 == 0) break;
      lVar10 = 0;
      bVar5 = false;
      do {
        if (*(ushort *)((long)&DAT_0418dd00 + lVar10) <= uVar3) {
          bVar5 = (bool)(uVar3 <= *(ushort *)((long)&DAT_0418dd02 + lVar10) | bVar5);
        }
        if (*(ushort *)((long)&DAT_0418dd04 + lVar10) <= uVar3) {
          bVar5 = (bool)(uVar3 <= *(ushort *)((long)&DAT_0418dd06 + lVar10) | bVar5);
        }
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0x398);
      if (!bVar5) goto LAB_032ed804;
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar17);
    if (0 < (int)uVar9) {
      puVar11 = &local_98;
      uVar13 = (ulong)uVar9;
      do {
        uVar8 = FUN_038cd950(*(undefined2 *)puVar11);
        uVar13 = uVar13 - 1;
        *(undefined2 *)puVar11 = uVar8;
        puVar11 = (undefined8 *)((long)puVar11 + 2);
      } while (uVar13 != 0);
    }
    uVar13 = 0;
    *(undefined2 *)((long)&local_98 + (ulong)uVar9 * 2) = 0;
    do {
      lVar10 = uVar13 * 2;
      uVar8 = FUN_038cd950(*(undefined2 *)((long)&local_d0 + lVar10));
      uVar13 = uVar13 + 1;
      *(undefined2 *)((long)&local_d0 + lVar10) = uVar8;
    } while (uVar17 != uVar13);
    *(undefined2 *)((long)&local_d0 + uVar17 * 2) = 0;
    FUN_032f9770(DAT_05731078,lVar7 + 0x10,&local_98,&local_d0);
  }
LAB_032ed804:
  uVar16 = uVar16 + 1;
  if (uVar16 == uVar2) goto LAB_032eda14;
  goto LAB_032ed810;
}

