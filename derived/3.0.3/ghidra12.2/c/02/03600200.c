
/* WARNING: Removing unreachable block (ram,0x03609074) */
/* WARNING: Removing unreachable block (ram,0x03610bf0) */
/* WARNING: Removing unreachable block (ram,0x03610bf8) */
/* WARNING: Removing unreachable block (ram,0x03610d3c) */
/* WARNING: Removing unreachable block (ram,0x03610c00) */
/* WARNING: Removing unreachable block (ram,0x03610bf4) */
/* WARNING: Removing unreachable block (ram,0x03602028) */
/* WARNING: Removing unreachable block (ram,0x03608b8c) */
/* WARNING: Removing unreachable block (ram,0x03610da4) */
/* WARNING: Removing unreachable block (ram,0x03610db0) */
/* WARNING: Removing unreachable block (ram,0x03610db8) */
/* WARNING: Removing unreachable block (ram,0x03610d20) */
/* WARNING: Removing unreachable block (ram,0x03610d28) */
/* WARNING: Removing unreachable block (ram,0x03610d2c) */
/* WARNING: Removing unreachable block (ram,0x03610e04) */
/* WARNING: Removing unreachable block (ram,0x03610e10) */
/* WARNING: Removing unreachable block (ram,0x03610e18) */
/* WARNING: Removing unreachable block (ram,0x03610e1c) */
/* WARNING: Removing unreachable block (ram,0x03609068) */
/* WARNING: Removing unreachable block (ram,0x0360909c) */
/* WARNING: Removing unreachable block (ram,0x03632fe8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_03600200(code *param_1,code *param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  code *pcVar1;
  long lVar2;
  ushort uVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  code cVar16;
  short sVar17;
  uint uVar18;
  int iVar19;
  undefined4 uVar20;
  uint uVar21;
  ulong uVar22;
  code *pcVar23;
  void *__s;
  size_t sVar24;
  undefined8 uVar25;
  long *plVar26;
  code *extraout_x0;
  uint uVar27;
  code *pcVar28;
  undefined8 *puVar29;
  uint uVar30;
  code *pcVar31;
  undefined8 *puVar32;
  byte bVar33;
  undefined2 uVar34;
  uint extraout_w8;
  uint extraout_w8_00;
  code *pcVar35;
  ulong extraout_x8;
  long lVar36;
  code cVar37;
  uint uVar38;
  code *pcVar39;
  ulong uVar40;
  long lVar41;
  ushort uVar42;
  code *pcVar43;
  ulong extraout_x12;
  code *pcVar44;
  uint uVar45;
  ulong extraout_x13;
  ulong uVar46;
  uint extraout_w14;
  code *pcVar47;
  uint extraout_w15;
  code *pcVar48;
  uint uVar49;
  undefined8 unaff_x19;
  uint uVar50;
  undefined8 unaff_x20;
  char *pcVar51;
  undefined8 unaff_x21;
  code *pcVar52;
  undefined8 unaff_x22;
  code *pcVar53;
  int iVar54;
  undefined8 unaff_x23;
  code *pcVar55;
  uint uVar56;
  long *unaff_x24;
  code *unaff_x25;
  code *unaff_x26;
  code *unaff_x27;
  long *unaff_x28;
  code *unaff_x29;
  code *unaff_x30;
  undefined2 uStack0000000000000000;
  undefined2 uStack0000000000000004;
  undefined2 uStack0000000000000008;
  undefined2 uStack000000000000000c;
  undefined2 uStack0000000000000010;
  undefined2 uStack0000000000000014;
  undefined2 uStack0000000000000018;
  undefined2 uStack000000000000001c;
  undefined2 uStack0000000000000020;
  undefined2 uStack0000000000000024;
  undefined2 uStack0000000000000028;
  undefined2 uStack000000000000002c;
  undefined2 uStack0000000000000030;
  undefined2 uStack0000000000000034;
  undefined2 uStack0000000000000038;
  undefined2 uStack000000000000003c;
  undefined2 uStack0000000000000040;
  undefined2 uStack0000000000000044;
  undefined2 uStack0000000000000048;
  undefined2 uStack000000000000004c;
  undefined2 uStack0000000000000050;
  undefined2 uStack0000000000000054;
  undefined2 uStack0000000000000058;
  undefined2 uStack000000000000005c;
  undefined2 uStack0000000000000060;
  undefined2 uStack0000000000000064;
  undefined2 uStack0000000000000068;
  undefined2 uStack000000000000006c;
  undefined2 uStack0000000000000070;
  undefined2 uStack0000000000000074;
  undefined2 uStack0000000000000078;
  undefined2 uStack000000000000007c;
  undefined2 uStack0000000000000080;
  undefined2 uStack0000000000000084;
  undefined2 uStack0000000000000088;
  undefined2 uStack000000000000008c;
  undefined2 uStack0000000000000090;
  undefined2 uStack0000000000000094;
  undefined2 uStack0000000000000098;
  undefined2 uStack000000000000009c;
  undefined2 uStack00000000000000a0;
  undefined1 uStack00000000000000a8;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  long *in_stack_ffffffffffffffa0;
  long *plVar57;
  undefined8 local_58;
  uint5 uVar58;
  
  puVar29 = &local_70;
  pcVar52 = (code *)&DAT_00000005;
  puVar32 = &local_68;
  uVar22 = FUN_04002180(param_2,5,4);
  if ((uVar22 & 1) == 0) {
    return (code *)0x0;
  }
  uVar21 = *(uint *)(param_2 + 8);
  pcVar53 = (code *)(ulong)uVar21;
  if ((uVar21 == 1) && (uVar38 = (uint)(byte)param_1[0x150], ((byte)param_1[0x150] >> 6 & 1) == 0))
  {
    if (0x3fffff < (ulong)(*(long *)(param_1 + -0xdb0) - *(long *)(param_1 + 0x138))) {
      uVar27 = (uint)(byte)param_1[0x14c];
      lVar41 = -*(long *)(param_1 + 0x138);
      uVar18 = (uint)(byte)param_1[0x14d];
      uVar30 = (uint)(byte)param_1[0x14e];
      puVar32 = (undefined8 *)(ulong)(byte)param_1[0x14f];
      do {
        lVar41 = lVar41 + -0x400000;
        uVar27 = uVar27 + (uVar18 + (uVar30 + ((uVar38 & 1) << 8 | (uint)puVar32) * 0x18) * 0x3c) *
                          0x3c;
        uVar45 = uVar27 + 1;
        uVar30 = uVar38 | 0xffffff80;
        if (uVar27 < 0x2a2ffff) {
          uVar30 = uVar38;
        }
        uVar38 = uVar45 / 0x1518000 & 1 | uVar30;
        uVar27 = uVar45 % 0x3c;
        uVar18 = uVar45 / 0x3c + (uVar45 / 0xe10) * -0x3c;
        puVar32 = (undefined8 *)((ulong)uVar45 / 0x15180 & 0xff);
        uVar30 = uVar45 / 0xe10 + ((uVar45 / 0xe10 & 0xffff) / 0x18) * -0x18 & 0xffff;
      } while ((ulong)(*(long *)(param_1 + -0xdb0) + lVar41) >> 0x16 != 0);
      param_1[0x14c] = SUB41(uVar27,0);
      param_1[0x14d] = SUB41(uVar18,0);
      param_1[0x14e] = SUB41(uVar30,0);
      param_1[0x14f] = SUB81((ulong)uVar45 / 0x15180,0);
      param_1[0x150] = SUB41(uVar38,0);
      *(long *)(param_1 + 0x138) = -lVar41;
      param_5 = 0;
    }
  }
  pcVar55 = param_1 + -0xec0;
  uVar25 = 0x2000;
  if (2 < (byte)param_1[-0xdee]) {
    uVar25 = 0x4000;
  }
  pcVar23 = (code *)(**(code **)(*(long *)param_2 + 0x20))
                              (param_2,*(undefined8 *)(param_1 + 0x10),uVar25);
  bVar6 = 1 < *(uint *)(param_1 + 0xa8);
  if (*(uint *)(param_1 + 0xa8) == 2) {
    pcVar28 = *(code **)(param_1 + 0x18);
switchD_03600464_caseD_3600388:
    pcVar31 = (code *)0x2000;
    goto switchD_03600464_caseD_360038c;
  }
  pcVar35 = (code *)(ulong)*(byte *)(*(long *)(param_1 + 8) + 0x149);
  if (*(byte *)(*(long *)(param_1 + 8) + 0x149) == 0) goto LAB_0360039c;
switchD_03600464_caseD_3600444:
  pcVar28 = *(code **)(param_1 + 0x18);
  iVar19 = (int)pcVar35;
  uVar38 = iVar19 - 1;
  pcVar35 = (code *)(ulong)uVar38;
  pcVar39 = (code *)&switchD_03600464::switchdataD_0419353a;
  uVar42 = *(ushort *)(&switchD_03600464::switchdataD_0419353a + (long)pcVar35 * 2);
  pcVar43 = (code *)(ulong)uVar42;
  lVar41 = (long)pcVar43 * 4;
  pcVar44 = (code *)(lVar41 + 0x3600388);
  pcVar31 = (code *)0x800;
  uVar45 = (uint)extraout_x13;
  uVar56 = (uint)unaff_x24;
  uVar30 = (uint)pcVar44;
  cVar16 = SUB81(pcVar28,0);
  iVar54 = (int)pcVar55;
  uVar50 = (uint)param_2;
  uVar49 = (uint)param_1;
  bVar14 = false;
  bVar13 = false;
  bVar11 = false;
  bVar8 = false;
  bVar10 = false;
  bVar12 = false;
  bVar9 = false;
  bVar7 = false;
  bVar15 = false;
  uVar22 = extraout_x12;
  uVar46 = extraout_x13;
  plVar26 = unaff_x24;
  uVar27 = extraout_w14;
  uVar18 = extraout_w15;
  plVar57 = in_stack_ffffffffffffffa0;
  pcVar47 = unaff_x26;
  pcVar48 = unaff_x25;
  switch(pcVar44) {
  case (code *)0x3600388:
    goto switchD_03600464_caseD_3600388;
  case (code *)0x360038c:
    break;
  case (code *)0x36003ac:
    goto switchD_03600464_caseD_36003ac;
  case (code *)0x36003b8:
    goto switchD_03600464_caseD_36003b8;
  case (code *)0x36003bc:
    goto switchD_03600464_caseD_36003bc;
  case (code *)0x3600444:
    goto switchD_03600464_caseD_3600444;
  case (code *)0x3600468:
    pcVar31 = (code *)0x8000;
    break;
  case (code *)0x3600480:
    goto switchD_03600464_caseD_3600480;
  case (code *)0x3600544:
    goto switchD_03600464_caseD_3600544;
  case (code *)0x3600554:
    goto switchD_03600464_caseD_3600554;
  case (code *)0x3600594:
    goto switchD_03600464_caseD_3600594;
  case (code *)0x36005ac:
    goto switchD_03600464_caseD_36005ac;
  case (code *)0x36005e0:
    goto switchD_03600464_caseD_36005e0;
  case (code *)0x3600618:
    goto switchD_03600464_caseD_3600618;
  case (code *)0x36006a8:
    goto switchD_03600464_caseD_36006a8;
  case (code *)0x36006e8:
    goto switchD_03600464_caseD_36006e8;
  case (code *)0x3600720:
    goto switchD_03600464_caseD_3600720;
  case (code *)0x36007b4:
    goto switchD_03600464_caseD_36007b4;
  case (code *)0x3600ad8:
    pcVar31 = (code *)0x20000;
    break;
  case (code *)0x3600ae0:
    pcVar31 = (code *)0x10000;
    break;
  case (code *)0x3600f94:
    (**(code **)(*(long *)param_2 + 0x28))(param_2,(long)register0x00000008 + -0x60);
    uVar38 = uVar38 & 0xff;
    pcVar28 = (code *)((long)register0x00000008 + -0x60);
  case (code *)0x3600fb4:
    param_1[0xb2] = (code)(uVar38 != 0);
    cVar16 = param_1[0xb3];
    (**(code **)(*(long *)param_2 + 0x28))(param_2,pcVar28);
    param_1[0xb3] = (code)(cVar16 != (code)0x0);
    (**(code **)(*(long *)param_2 + 0x20))(param_2,param_1 + 0xb4,0x36);
    (**(code **)(*(long *)param_2 + 0x20))(param_2,param_1 + 0xea,0x36);
    if (param_2[0xc] != (code)0x0) {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)register0x00000008 + -0x60,1);
    }
    pcVar52 = param_1 + 0x120;
    if (*(uint *)(param_2 + 8) != 2) {
      if (*(uint *)(param_2 + 8) == 1) {
        (**(code **)(*(long *)param_2 + 0x40))(param_2,(long)register0x00000008 + -0x60);
      }
      else {
        (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)register0x00000008 + -0x60,8);
        *(undefined8 *)pcVar52 = 0;
      }
      goto LAB_036017ac;
    }
    lVar41 = *(long *)param_2;
    pcVar31 = (code *)&DAT_00000008;
    pcVar23 = param_2;
    goto LAB_036017a4;
  case (code *)0x36013cc:
    (*pcVar35)();
    if (*(uint *)(param_2 + 8) == 2) {
      lVar36 = *(long *)param_2;
      lVar41 = (long)&local_58 + 4;
LAB_036014b0:
      (**(code **)(lVar36 + 0x20))(param_2,lVar41,4);
    }
    else {
      if (*(uint *)(param_2 + 8) != 1) {
        lVar36 = *(long *)param_2;
        lVar41 = (long)register0x00000008 + -0x60;
        goto LAB_036014b0;
      }
      (**(code **)(*(long *)param_2 + 0x38))(param_2,(long)register0x00000008 + -0x60);
    }
    (**(code **)(*(long *)param_2 + 0x28))(param_2,param_1 + 0xbc);
    (**(code **)(*(long *)param_2 + 0x28))(param_2,param_1 + 0xbd);
    if (*(uint *)(param_2 + 8) == 2) {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,param_1 + 0xbe,2);
    }
    else if (*(uint *)(param_2 + 8) == 1) {
      (**(code **)(*(long *)param_2 + 0x30))(param_2,(long)register0x00000008 + -0x60);
    }
    else {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)register0x00000008 + -0x60,2);
      *(undefined2 *)(param_1 + 0xbe) = 0;
    }
    (**(code **)(*(long *)param_2 + 0x28))(param_2,param_1 + 0xc0);
    (**(code **)(*(long *)param_2 + 0x28))(param_2,param_1 + 0xc1);
    (**(code **)(*(long *)param_2 + 0x28))(param_2,param_1 + 0xc2);
    if (*(uint *)(param_2 + 8) == 2) {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,param_1 + 0xc4,2);
    }
    else if (*(uint *)(param_2 + 8) == 1) {
      (**(code **)(*(long *)param_2 + 0x30))(param_2,(long)register0x00000008 + -0x60);
    }
    else {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)register0x00000008 + -0x60,2);
      *(undefined2 *)(param_1 + 0xc4) = 0;
    }
    cVar16 = param_1[0xc6];
    (**(code **)(*(long *)param_2 + 0x28))(param_2,(long)register0x00000008 + -0x60);
    param_1[0xc6] = (code)(cVar16 != (code)0x0);
    if (*(uint *)(param_2 + 8) == 2) {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,param_1 + 200,2);
    }
    else if (*(uint *)(param_2 + 8) == 1) {
      (**(code **)(*(long *)param_2 + 0x30))(param_2,(long)register0x00000008 + -0x60);
    }
    else {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)register0x00000008 + -0x60,2);
      *(undefined2 *)(param_1 + 200) = 0;
    }
    pcVar31 = (code *)((ulong)*(ushort *)(param_1 + 200) << 1);
    pcVar23 = param_2;
  case (code *)0x360179c:
    goto switchD_03600464_caseD_360179c;
  case (code *)0x36017e4:
    FUN_035ff468(pcVar23,param_1);
    if ((uVar21 == 1) && (((byte)param_1[0x150] >> 6 & 1) == 0)) {
      *(long *)(param_1 + 0x130) = *(long *)(param_1 + -0xdb0) - *(long *)(param_1 + 0x138);
    }
    if (param_2[0xc] != (code)0x0) {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)register0x00000008 + -0x60,1);
    }
    pcVar52 = param_1 + 0x130;
    if (*(uint *)(param_2 + 8) == 2) {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,pcVar52,8);
    }
    else {
      if (*(uint *)(param_2 + 8) != 1) {
        pcVar39 = (code *)0x0;
        (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)register0x00000008 + -0x60,8);
        bVar8 = *(uint *)(param_2 + 0x10) == 0xff00;
        pcVar44 = (code *)0x0;
        goto switchD_03600464_caseD_3601ad0;
      }
      (**(code **)(*(long *)param_2 + 0x40))(param_2,(long)register0x00000008 + -0x60);
    }
LAB_03601ad8:
    uVar38 = *(uint *)(param_2 + 8);
    if (uVar38 == 2) {
      if (param_2[0xc] != (code)0x0) {
        (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)register0x00000008 + -0x60,1);
        if ((*(uint *)(param_2 + 8) != 2) && (*(uint *)(param_2 + 8) == 1)) goto LAB_03601be0;
      }
LAB_03601c34:
      lVar36 = *(long *)param_2;
      lVar41 = (long)register0x00000008 + -0x60;
LAB_03601c3c:
      (**(code **)(lVar36 + 0x20))(param_2,lVar41,4);
    }
    else if (uVar38 == 1) {
      pcVar52 = (code *)(ulong)*(uint *)(param_1 + 0x140);
switchD_03600464_caseD_3601b88:
      local_58 = (code *)CONCAT44((int)pcVar52,(uint)local_58);
      if (param_2[0xc] != (code)0x0) {
        (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)register0x00000008 + -0x60,1);
        if (*(uint *)(param_2 + 8) == 2) {
          lVar36 = *(long *)param_2;
          lVar41 = (long)&local_58 + 4;
          goto LAB_03601c3c;
        }
        if (*(uint *)(param_2 + 8) != 1) goto LAB_03601c34;
      }
LAB_03601be0:
      (**(code **)(*(long *)param_2 + 0x38))(param_2,(long)register0x00000008 + -0x60);
    }
    else if (uVar38 == 0) {
      if (param_2[0xc] == (code)0x0) {
LAB_03601bf8:
        (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)register0x00000008 + -0x60,4);
        uVar38 = 0;
      }
      else {
        (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)register0x00000008 + -0x60,1);
        if (*(uint *)(param_2 + 8) == 2) {
          (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)&local_58 + 4,4);
          uVar38 = local_58._4_4_;
        }
        else {
          if (*(uint *)(param_2 + 8) != 1) goto LAB_03601bf8;
          (**(code **)(*(long *)param_2 + 0x38))(param_2,(long)register0x00000008 + -0x60);
          uVar38 = extraout_w8;
        }
      }
      *(uint *)(param_1 + 0x140) = uVar38;
    }
    (**(code **)(*(long *)param_2 + 0x20))(param_2,param_1 + 0x144,0x10);
    (**(code **)(*(long *)param_2 + 0x20))(param_2,param_1 + 0x154,0x10);
    if (*(uint *)(param_2 + 8) == 2) {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,param_1 + 6,2);
    }
    else if (*(uint *)(param_2 + 8) == 1) {
      pcVar28 = (code *)((long)register0x00000008 + -0x60);
switchD_03600464_caseD_3601cc4:
      (**(code **)(*(long *)param_2 + 0x30))(param_2,pcVar28);
    }
    else {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)register0x00000008 + -0x60,2);
      *(undefined2 *)(param_1 + 6) = 0;
    }
    if (*(uint *)(param_2 + 8) == 2) {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,param_1 + 0x164,2);
    }
    else if (*(uint *)(param_2 + 8) == 1) {
      (**(code **)(*(long *)param_2 + 0x30))(param_2,(long)register0x00000008 + -0x60);
    }
    else {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)register0x00000008 + -0x60,2);
      *(undefined2 *)(param_1 + 0x164) = 0;
    }
    if (*(uint *)(param_2 + 8) == 2) {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,param_1 + 0x166,2);
    }
    else if (*(uint *)(param_2 + 8) == 1) {
      (**(code **)(*(long *)param_2 + 0x30))(param_2,(long)register0x00000008 + -0x60);
    }
    else {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)register0x00000008 + -0x60,2);
      *(undefined2 *)(param_1 + 0x166) = 0;
    }
    if ((uVar21 == 0) && (((byte)param_1[0x150] >> 6 & 1) == 0)) {
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + -0xdb0) - *(long *)(param_1 + 0x130);
    }
    return (code *)0x1;
  case (code *)0x3601ad0:
switchD_03600464_caseD_3601ad0:
    if (!bVar8) {
      pcVar44 = pcVar39;
    }
    *(code **)pcVar52 = pcVar44;
    goto LAB_03601ad8;
  case (code *)0x3601b88:
    goto switchD_03600464_caseD_3601b88;
  case (code *)0x3601cc4:
    goto switchD_03600464_caseD_3601cc4;
  case (code *)0x3601fa4:
    bVar6 = uVar38 == 2;
    if (bVar6) {
      pcVar23 = *(code **)(param_2 + 0x18);
switchD_03601ffc_caseD_2:
      sVar24 = 0x2000;
switchD_03601ffc_caseD_1:
      pcVar23 = memcpy(pcVar23,param_1,sVar24);
switchD_03601ffc_caseD_17:
      bVar6 = *(uint *)(param_2 + 0xa8) == 2;
switchD_03601ffc_caseD_11:
      if (bVar6) {
switchD_03601ffc_caseD_1f:
      }
      else {
switchD_03601ffc_caseD_9:
      }
    }
    else {
      uVar21 = (uint)*(byte *)(*(long *)(param_2 + 8) + 0x149);
switchD_03601ffc_caseD_22:
      if (uVar21 != 0) {
        pcVar23 = *(code **)(param_2 + 0x18);
        uVar38 = uVar21 - 1;
        pcVar35 = (code *)(ulong)uVar38;
        uVar21 = 0x4193568;
switchD_03601ffc_caseD_7:
switchD_03601ffc_caseD_15:
        sVar24 = 0x800;
        switch((ulong)(byte)pcVar35[0x4193568] * 4 + 0x3601fb0) {
        case 0x3601fb0:
          goto switchD_03601ffc_caseD_2;
        case 0x3601fb4:
          goto switchD_03601ffc_caseD_1;
        case 0x3601fbc:
          goto switchD_03601ffc_caseD_17;
        case 0x3601fc4:
          goto switchD_03601ffc_caseD_11;
        case 0x3601fcc:
          goto switchD_03601ffc_caseD_1f;
        case 0x3601fd8:
          goto switchD_03601ffc_caseD_22;
        case 0x3601fec:
          goto switchD_03601ffc_caseD_7;
        case 0x3601ff8:
          goto switchD_03601ffc_caseD_15;
        case 0x3602000:
          sVar24 = 0x8000;
          goto switchD_03601ffc_caseD_1;
        case 0x360200c:
          goto switchD_03601ffc_caseD_9;
        case 0x3602070:
          goto switchD_03601ffc_caseD_b;
        case 0x3602078:
          goto switchD_03601ffc_caseD_c;
        case 0x3602080:
          goto switchD_03601ffc_caseD_f;
        case 0x3602088:
          sVar24 = 0x20000;
          goto switchD_03601ffc_caseD_1;
        case 0x3602090:
          sVar24 = 0x10000;
          goto switchD_03601ffc_caseD_1;
        case 0x36020bc:
          pcVar23[0x1cc] = SUB41(uVar38,0);
          pcVar23[0x1ce] = SUB41(uVar38,0);
          cVar37 = *pcVar23;
          *pcVar23 = (code)((byte)cVar37 | (byte)cVar16);
          uVar38 = (uint)(cVar37 != (code)0x0 || ((ulong)pcVar28 & 0xff) != 0) << 1;
        case 0x36020dc:
          pcVar23[0x1d0] = (code)0x68;
          pcVar23[0x1d2] = (code)0x68;
          pcVar23[0x1c0] = SUB41(uVar38,0);
          pcVar23[0x1d4] = (code)0x5;
          pcVar23[0x1d6] = (code)0x5;
          pcVar23[0x1d8] = (code)0x6;
          uVar38 = 7;
switchD_03601ffc_caseD_26:
          pcVar23[0x1da] = SUB41(uVar38,0);
          pcVar23[0x1dc] = (code)0x8;
          return pcVar23;
        case 0x3602100:
          goto switchD_03601ffc_caseD_26;
        case 0x360211c:
          pcVar52 = pcVar23;
          if ((((uint)(byte)pcVar23[3] ^ (uint)pcVar28 & 0xff) >> 2 & 1) != 0) {
            pcVar23[-0xdf0] = (code)0x1;
            plVar26 = *(long **)(pcVar23 + -0xe68);
            pcVar23[-0xdef] = (code)((byte)pcVar23[-0xdef] | 4);
            pcVar52 = (code *)0x0;
            if (plVar26 != (long *)0x0) {
              pcVar52 = (code *)(**(code **)(*plVar26 + 0x10))(plVar26,4);
            }
          }
          pcVar23[3] = cVar16;
          return pcVar52;
        default:
          *(uint *)(param_1 + 0xa8) = 3;
          goto LAB_036024d8;
        }
      }
      if (((int)pcVar35 == 6) && (*(ushort *)(param_2 + 200) != 0)) {
        pcVar23 = memcpy(*(void **)(param_2 + 0xd0),param_1,(ulong)*(ushort *)(param_2 + 200) << 1);
switchD_03601ffc_caseD_b:
switchD_03601ffc_caseD_c:
switchD_03601ffc_caseD_f:
      }
    }
    return pcVar23;
  case (code *)0x36023a0:
    param_1[5] = (code)((byte)param_1[5] | 2);
    if (((code *)0x43fff < param_2) &&
       (((((_switchdataD_0419353a == *(long *)pcVar35 && _USHORT_04193542 == *(long *)(pcVar35 + 8))
          && _USHORT_0419354a == *(long *)(pcVar35 + 0x10)) &&
         _USHORT_04193552 == *(long *)(pcVar35 + 0x18)) &&
        _USHORT_0419355a == *(long *)(pcVar35 + 0x20)) &&
        _USHORT_04193562 == *(long *)(pcVar35 + 0x28))) {
      *(uint *)(param_1 + 0xa8) = 1;
      param_1[0xb4] = (code)0x1;
    }
    goto LAB_036024d8;
  case (code *)0x3602428:
    *(uint *)(param_1 + 0xa8) = uVar38;
    param_1[5] = (code)((byte)param_1[5] | 2);
LAB_036024d8:
    uVar25 = 0x2000;
    if (2 < (byte)param_1[-0xdee]) {
      uVar25 = 0x4000;
    }
    uVar25 = (**(code **)(**(long **)pcVar53 + 0x10))(*(long **)pcVar53,uVar25,0);
    *(undefined8 *)(param_1 + 0x10) = uVar25;
    uVar25 = 0x2000;
    if (2 < (byte)param_1[-0xdee]) {
      uVar25 = 0x8000;
    }
    uVar25 = (**(code **)(**(long **)pcVar53 + 0x10))(*(long **)pcVar53,uVar25,0);
    *(undefined8 *)(param_1 + 0x20) = uVar25;
    uVar25 = (**(code **)(**(long **)pcVar53 + 0x10))(*(long **)pcVar53,0x100,0);
    *(undefined8 *)(param_1 + 0x28) = uVar25;
    uVar25 = (**(code **)(**(long **)pcVar53 + 0x10))(*(long **)pcVar53,0x7f,0);
    *(undefined8 *)(param_1 + 0x30) = uVar25;
    if (*(uint *)(param_1 + 0xa8) != 2) {
                    /* WARNING: Could not recover jumptable at 0x036025e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar52 = (code *)(*(code *)((ulong)*(byte *)((long)&USHORT_0419366c +
                                                   (ulong)*(byte *)(*(long *)(param_1 + 8) + 0x149)
                                                   + 1) * 4 + 0x3602574))();
      return pcVar52;
    }
    __s = (void *)(**(code **)(**(long **)pcVar53 + 0x10))(*(long **)pcVar53,0x2000,0);
    *(void **)(param_1 + 0x18) = __s;
    pcVar52 = param_1 + -0xe78;
    if ((*(ulong *)(param_1 + -0xe88) & 1) != 0) {
      pcVar52 = *(code **)(param_1 + -0xe78);
    }
    iVar19 = strcmp((char *)pcVar52,"95127b901bbce2407daf43cce9f45d4c27ef635d");
    if (iVar19 == 0) {
      if (*(uint *)(param_1 + 0xa8) != 2) {
        sVar24 = *(size_t *)(&DAT_04194b68 + (long)*(char *)(*(long *)(param_1 + 8) + 0x149) * 8);
      }
      else {
        sVar24 = 0x2000;
      }
      iVar19 = 0;
    }
    else {
      if (*(uint *)(param_1 + 0xa8) != 2) {
        sVar24 = *(size_t *)(&DAT_04194b68 + (long)*(char *)(*(long *)(param_1 + 8) + 0x149) * 8);
      }
      else {
        sVar24 = 0x2000;
      }
      iVar19 = 0xff;
    }
    memset(__s,iVar19,sVar24);
    if (*(uint *)(param_1 + 0xa8) == 6) {
      if (param_2 == (code *)0x200000) {
        uVar25 = (**(code **)(**(long **)pcVar53 + 0x10))(*(long **)pcVar53,0x200,0);
        uVar34 = 0x100;
      }
      else {
        uVar25 = (**(code **)(**(long **)pcVar53 + 0x10))(*(long **)pcVar53,0x100,0);
        uVar34 = 0x80;
      }
      *(undefined8 *)(param_1 + 0xd0) = uVar25;
      *(undefined2 *)(param_1 + 200) = uVar34;
    }
    FUN_035fef88(param_1);
    return (code *)0x1;
  case (code *)0x3602c94:
    *(uint *)(pcVar23 + 0xc30) = 0;
    *(undefined8 *)(pcVar23 + 0xc28) = 0;
    *(undefined8 *)(pcVar23 + 0xc20) = 0;
    *(undefined8 *)(pcVar23 + 0xc18) = 0;
    *(undefined8 *)(param_1 + 0xc10) = 0;
    nn::os::InitializeLightEvent(pcVar23 + 0xc38);
    pcVar52 = (code *)nn::os::InitializeMutex((MutexType *)(param_1 + 0xc58),true,0);
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    return pcVar52;
  case (code *)0x3603710:
    uVar22 = 0;
    do {
      lVar41 = uVar22 * 8;
      uVar46 = FUN_03614c88(*(undefined8 *)(param_1 + lVar41 + 0x140),
                            *(undefined8 *)(pcVar28 + lVar41),*(undefined8 *)(pcVar55 + lVar41),
                            *(undefined8 *)(param_2 + lVar41),*(undefined8 *)(pcVar53 + lVar41),
                            *(undefined8 *)(lVar41 + 5));
      if ((uVar46 & 1) == 0) {
        return (code *)0x0;
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 < (byte)param_1[0x138]);
    pcVar51 = *(char **)param_2;
    local_58 = *(code **)PTR_DAT_04bdf328;
    sVar24 = strlen(pcVar51);
    local_68 = (code *)0x0;
    iVar19 = FUN_03605e64(&local_68,0,pcVar51,sVar24);
    if (iVar19 != 0) {
                    /* WARNING: Does not return */
      pcVar52 = (code *)UndefinedInstructionException(0x8002,0x36037f8);
      (*pcVar52)();
    }
    if (((byte)param_1[0x38] & 1) != 0) {
      (**(code **)(**(long **)(param_1 + 0x40) + 0x18))
                (*(long **)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
    }
    *(code **)(param_1 + 0x30) = local_68;
    *(undefined8 *)(param_1 + 0x38) = 0x1e;
    *(code **)(param_1 + 0x50) = unaff_x30;
    *(code **)(param_1 + 0x40) = local_58;
    *(undefined8 *)(param_1 + 0x48) = 0;
    return (code *)0x1;
  case (code *)0x3603850:
    do {
      lVar41 = *(long *)(pcVar55 + (long)pcVar52 * 8);
      FUN_036026d4(lVar41 + 0xec0);
      local_58 = (code *)*unaff_x24;
      *(undefined8 *)(lVar41 + 0x20) = 0;
      *(undefined8 *)(lVar41 + 0x28) = 0;
      local_68 = (code *)0x0;
      pcVar23 = (code *)FUN_03605e64(&local_68,0,param_2,0);
      if ((int)pcVar23 != 0) {
                    /* WARNING: Does not return */
        pcVar52 = (code *)UndefinedInstructionException(0x8002,0x360399c);
        (*pcVar52)();
      }
      if ((*(byte *)(lVar41 + 0x38) & 1) != 0) {
        pcVar23 = (code *)(**(code **)(**(long **)(lVar41 + 0x40) + 0x18))
                                    (*(long **)(lVar41 + 0x40),*(undefined8 *)(lVar41 + 0x48));
      }
      pcVar52 = pcVar52 + 1;
      *(code **)(lVar41 + 0x30) = local_68;
      *(code **)(lVar41 + 0x38) = unaff_x25;
      uVar25 = *(undefined8 *)pcVar53;
      *(undefined8 *)(lVar41 + 0x50) = *(undefined8 *)(pcVar53 + 8);
      *(code **)(lVar41 + 0x40) = local_58;
      *(undefined8 *)(lVar41 + 0x48) = uVar25;
      *(undefined4 *)(lVar41 + 0x18) = 0;
    } while (pcVar52 < (code *)(ulong)(byte)param_1[0x138]);
    pcVar52 = param_1 + 0x48;
    if ((*(ulong *)(param_1 + 0x38) & 1) != 0) {
      pcVar52 = *(code **)(param_1 + 0x48);
    }
    *pcVar52 = (code)0x0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (1 < (byte)param_1[0x138]) {
      lVar41 = *(long *)(param_1 + 0x140);
      *(undefined8 *)(lVar41 + 0x3fa8) = 0;
      *(undefined1 *)(lVar41 + 0x264c) = 0;
      lVar41 = *(long *)(param_1 + 0x148);
      *(undefined1 *)(lVar41 + 0x264c) = 0;
      *(undefined8 *)(lVar41 + 0x3fa8) = 0;
      lVar41 = *(long *)(param_1 + 0x140);
      *(undefined8 *)(lVar41 + 0x40d8) = 0;
      *(undefined1 *)(lVar41 + 0x40d2) = 0;
      lVar41 = *(long *)(param_1 + 0x148);
      *(undefined8 *)(lVar41 + 0x40d8) = 0;
      *(undefined1 *)(lVar41 + 0x40d2) = 0;
      lVar41 = *(long *)(param_1 + 0x140);
      if (*(int *)(lVar41 + 0xf68) == 7) {
        *(undefined8 *)(lVar41 + 0xf80) = 0;
        *(undefined1 *)(lVar41 + 0xf7a) = 0;
      }
      lVar41 = *(long *)(param_1 + 0x148);
      if (*(int *)(lVar41 + 0xf68) == 7) {
        *(undefined8 *)(lVar41 + 0xf80) = 0;
        *(undefined1 *)(lVar41 + 0xf7a) = 0;
      }
      lVar41 = *(long *)(param_1 + 0x140);
      *(undefined8 *)(lVar41 + 0x4108) = 0;
      *(undefined1 *)(lVar41 + 0x4100) = 0;
      lVar41 = *(long *)(param_1 + 0x148);
      *(undefined8 *)(lVar41 + 0x4108) = 0;
      *(undefined1 *)(lVar41 + 0x4100) = 0;
    }
    return pcVar23;
  case (code *)0x3603b70:
    uVar21 = (uint)(extraout_x12 >> 4) & 0xfffffff;
    uVar27 = (uVar45 ^ 0xffffffff) & 0x419353a;
    if ((extraout_x13 & 0x10) != 0) {
      uVar21 = 0xffffffff;
    }
    pcVar43 = (code *)(ulong)(uVar21 & 0x419353a);
    uVar22 = (ulong)(uVar21 & 0x419353a | uVar45 & 0x30);
switchD_03600464_caseD_3603b90:
    *(char *)(lVar41 + 0x36005c9) = (char)uVar22;
    if ((uVar27 == 0) && ((int)pcVar43 != 0xf)) {
      *(byte *)(lVar41 + 0x3600609) = *(byte *)(lVar41 + 0x3600609) | 0x10;
    }
    lVar41 = *(long *)pcVar35;
    uVar21 = *(byte *)(lVar41 + 0x242) & 0xffffffdf;
    uVar38 = *(byte *)(lVar41 + 0x242) & 0xf;
    bVar33 = *(byte *)(lVar41 + 0x241);
    *(char *)(lVar41 + 0x242) = (char)uVar21;
    if ((bVar33 & 0x20) != 0) {
      uVar38 = 0x419353a;
    }
    uVar21 = uVar21 >> 4;
    if ((bVar33 & 0x10) != 0) {
      uVar21 = 0xffffffff;
    }
    *(byte *)(lVar41 + 0x241) = (byte)(uVar38 & uVar21) | bVar33 & 0x30;
    if ((((bVar33 ^ 0xffffffff) & 0x419353a) == 0) && ((uVar38 & uVar21) != 0xf)) {
      *(byte *)(lVar41 + 0x281) = *(byte *)(lVar41 + 0x281) | 0x10;
    }
    lVar41 = *(long *)pcVar35;
    bVar33 = *(byte *)(lVar41 + 0x241);
    uVar21 = *(byte *)(lVar41 + 0x242) & 0xffffffbf;
    uVar38 = *(byte *)(lVar41 + 0x242) & 0xf;
    *(char *)(lVar41 + 0x242) = (char)uVar21;
    if ((bVar33 & 0x20) != 0) {
      uVar38 = 0xf;
    }
    uVar21 = uVar21 >> 4;
    if ((bVar33 & 0x10) != 0) {
      uVar21 = 0xffffffff;
    }
    *(byte *)(lVar41 + 0x241) = (byte)(uVar38 & uVar21) | bVar33 & 0x30;
    if ((((bVar33 ^ 0xff) & 0xf) == 0) && ((uVar38 & uVar21) != 0xf)) {
      *(byte *)(lVar41 + 0x281) = *(byte *)(lVar41 + 0x281) | 0x10;
    }
    lVar41 = *(long *)pcVar35;
    bVar33 = *(byte *)(lVar41 + 0x241);
    uVar38 = *(byte *)(lVar41 + 0x242) & 0x7f;
    uVar21 = *(byte *)(lVar41 + 0x242) & 0xf;
    if ((bVar33 & 0x20) != 0) {
      uVar21 = 0xf;
    }
    uVar30 = uVar38 >> 4;
    *(char *)(lVar41 + 0x242) = (char)uVar38;
    if ((bVar33 & 0x10) != 0) {
      uVar30 = 0xffffffff;
    }
    *(byte *)(lVar41 + 0x241) = (byte)(uVar21 & uVar30) | bVar33 & 0x30;
    if ((((bVar33 ^ 0xff) & 0xf) == 0) && ((uVar21 & uVar30) != 0xf)) {
      *(byte *)(lVar41 + 0x281) = *(byte *)(lVar41 + 0x281) | 0x10;
    }
    return pcVar23;
  case (code *)0x3603b90:
    goto switchD_03600464_caseD_3603b90;
  case (code *)0x3603dec:
    do {
      if (bVar6) {
        pcVar44 = pcVar35;
      }
      if (pcVar44 == (code *)0x0) {
        do {
          pcVar52 = pcVar52 + 1;
          if ((code *)(ulong)(byte)param_1[0x138] <= pcVar52) {
            return pcVar23;
          }
          pcVar53 = *(code **)(param_1 + (long)pcVar52 * 8 + 0x140);
          uVar21 = *(uint *)(pcVar53 + 0xe0);
          pcVar39 = (code *)(ulong)uVar21;
          uVar38 = *(uint *)(pcVar53 + 0xe4);
          uVar22 = ((ulong)uVar38 - (long)pcVar39) + 4;
          if (uVar21 <= uVar38) {
            uVar22 = (ulong)(uVar38 - uVar21);
          }
        } while (uVar22 == 0);
        param_2 = pcVar53 + 0x438;
      }
      pcVar55 = pcVar53 + 0xe0;
      *(uint *)pcVar55 = (int)pcVar39 + 1U & 3;
      uVar25 = *(undefined8 *)(pcVar55 + (long)pcVar39 * 8 + 8);
      *(undefined8 *)(pcVar53 + 0x4130) = *(undefined8 *)(pcVar53 + 0x4128);
      *(undefined8 *)(pcVar53 + 0x4128) = uVar25;
      pcVar23 = (code *)FUN_035c4240(param_2);
      uVar21 = *(uint *)pcVar55;
      pcVar39 = (code *)(ulong)uVar21;
      uVar38 = *(uint *)(pcVar53 + 0xe4);
      bVar6 = uVar21 <= uVar38;
      pcVar35 = (code *)(ulong)(uVar38 - uVar21);
      pcVar44 = (code *)(((ulong)uVar38 - (long)pcVar39) + 4);
    } while( true );
  case (code *)0x3603f50:
    do {
      Yield();
    } while ((*(uint *)param_2 >> 3 & 1) != 0);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar6) {
        *(uint *)param_2 = *(uint *)param_2 | 2;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    return pcVar23;
  case (code *)0x3603fc4:
    unaff_x26 = (code *)0x0;
    unaff_x27 = pcVar23 + 0x58;
    unaff_x28 = (long *)((long)puVar32 << 2);
    local_70 = (long *)0x1064d4e80;
    local_68 = (code *)0x419353a0;
    pcVar55 = (code *)0x280;
    pcVar52 = pcVar23;
    do {
      if (unaff_x27[(long)unaff_x26 * 0x70 + 0x18] != (code)0x0) {
        pcVar53 = (code *)((ulong)unaff_x26 >> 1);
        unaff_x25 = (code *)(-((ulong)unaff_x26 & 1) & 0xa0);
        FUN_035c4140((long)register0x00000008 + -0x60,
                     *(long *)(pcVar52 + (long)unaff_x26 * 8 + 0x140) + 0x438);
        bVar9 = param_1 == (code *)&DAT_000000a0;
        unaff_x24 = in_stack_ffffffffffffffa0 + 8;
switchD_03600464_caseD_3604040:
        if (bVar9) {
          pcVar23 = memcpy(param_2 + (long)(unaff_x25 + (long)local_68 * (long)pcVar53) * 4,
                           unaff_x24,0x16800);
        }
        else {
          lVar41 = 0x90;
          pcVar53 = param_2 + (long)local_70 * (long)pcVar53 + (long)unaff_x25 * 4;
          do {
            memcpy(pcVar53,unaff_x24,(size_t)pcVar55);
            pcVar53 = pcVar53 + (long)unaff_x28;
            memcpy(pcVar53,unaff_x24 + 0x50,(size_t)pcVar55);
            pcVar53 = pcVar53 + (long)unaff_x28;
            memcpy(pcVar53,unaff_x24 + 0xa0,(size_t)pcVar55);
            pcVar53 = pcVar53 + (long)unaff_x28;
            memcpy(pcVar53,unaff_x24 + 0xf0,(size_t)pcVar55);
            pcVar53 = pcVar53 + (long)unaff_x28;
            memcpy(pcVar53,unaff_x24 + 0x140,(size_t)pcVar55);
            pcVar23 = memcpy(pcVar53 + (long)unaff_x28,unaff_x24 + 400,(size_t)pcVar55);
            lVar41 = lVar41 + -6;
            pcVar53 = pcVar53 + (long)unaff_x28 + (long)unaff_x28;
            unaff_x24 = unaff_x24 + 0x1e0;
          } while (lVar41 != 0);
        }
        if (local_58 != (code *)0x0) {
          pcVar53 = local_58 + 8;
          do {
            lVar41 = *(long *)pcVar53;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pcVar53,0x10);
            if (bVar6) {
              *(long *)pcVar53 = lVar41 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar41 == 0) {
            (**(code **)(*(long *)local_58 + 0x10))(local_58);
            pcVar23 = (code *)std::__shared_weak_count::__release_weak();
          }
        }
        pcVar35 = (code *)(ulong)(byte)pcVar52[0x138];
      }
      unaff_x26 = unaff_x26 + 1;
    } while (unaff_x26 < pcVar35);
    return pcVar23;
  case (code *)0x3604040:
    goto switchD_03600464_caseD_3604040;
  case (code *)0x36047a8:
    goto switchD_03600464_caseD_36047a8;
  case (code *)0x36047c0:
    goto switchD_03600464_caseD_36047c0;
  case (code *)0x3604ab4:
    goto switchD_03600464_caseD_3604ab4;
  case (code *)0x3604b54:
    goto switchD_03600464_caseD_3604b54;
  case (code *)0x3604bd0:
    do {
      *(code **)pcVar39 = pcVar35;
      uVar21 = *(uint *)(param_1 + 0xc44);
      while ((uVar21 & 1) != 0) {
        Yield();
        uVar21 = *(uint *)pcVar52;
      }
      cVar16 = param_1[0x138];
      if (cVar16 != (code)0x0) {
        lVar41 = *(long *)(param_1 + 0x140);
        uVar21 = (uint)*(byte *)(lVar41 + 0xd1);
        if ((*(byte *)(lVar41 + 0xd1) >> 3 & 1) != 0) {
LAB_03604d34:
          if ((uVar21 >> 1 & 1) != 0) {
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(pcVar52,0x10);
              if (bVar6) {
                *(uint *)pcVar52 = *(uint *)pcVar52 | 2;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          return pcVar23;
        }
        uVar22 = 0;
        do {
          if ((ulong)(byte)cVar16 - 1 == uVar22) goto LAB_03604c34;
          lVar36 = uVar22 * 8;
          uVar22 = uVar22 + 1;
        } while ((*(byte *)(*(long *)(param_1 + lVar36 + 0x148) + 0xd1) >> 3 & 1) == 0);
        if (uVar22 < (byte)cVar16) goto LAB_03604d34;
LAB_03604c34:
        if (((1 < (byte)cVar16) && (*(char *)(lVar41 + 0x264c) == '\x01')) &&
           (*(long *)(lVar41 + 0x3fa8) == *(long *)(param_1 + 0x148) + 0x2640)) {
          pcVar23 = (code *)FUN_036042e0(param_1,0,
                                         *(long *)(lVar41 + 0x110) - *(long *)(lVar41 + 0x120),0);
        }
      }
      pcVar55 = unaff_x27;
      pcVar28 = unaff_x25;
      if ((int)unaff_x25 != 0) {
        do {
          lVar41 = *(long *)pcVar55;
          pcVar51 = (char *)(lVar41 + (long)unaff_x24);
          pcVar51[1] = *pcVar51;
          if (*(int *)(lVar41 + 0xf68) == 7) {
            *(undefined1 *)(lVar41 + 0xf79) = *(undefined1 *)(lVar41 + 0xf78);
          }
          if (pcVar51[0x40] != '\0') {
            iVar19 = *(int *)(pcVar51 + 0x44);
            if (iVar19 == 1) {
              iVar19 = 0;
              pcVar51[0x42] = (char)pcVar53;
              pcVar51[0x44] = '\0';
              pcVar51[0x45] = '\0';
              pcVar51[0x46] = '\0';
              pcVar51[0x47] = '\0';
              pcVar51[0x41] = pcVar51[0x43];
            }
            lVar36 = *(long *)(lVar41 + 0x4108);
            if ((lVar36 != 0) && (*(int *)(lVar36 + 0x14) == 1)) {
              *(undefined1 *)(lVar36 + 0x11) = *(undefined1 *)(lVar36 + 0x13);
              *(char *)(*(long *)(lVar41 + 0x4108) + 0x12) = (char)pcVar53;
              *(undefined4 *)(*(long *)(lVar41 + 0x4108) + 0x14) = 0;
              iVar19 = *(int *)(pcVar51 + 0x44);
            }
            if (iVar19 == 2) {
              if (*(long *)(lVar41 + 0x4108) != 0) {
                *(undefined1 *)(*(long *)(lVar41 + 0x4108) + 0x12) = 0;
              }
              pcVar51[0x44] = '\0';
              pcVar51[0x45] = '\0';
              pcVar51[0x46] = '\0';
              pcVar51[0x47] = '\0';
            }
          }
          pcVar28 = pcVar28 + -1;
          pcVar55 = pcVar55 + 8;
        } while (pcVar28 != (code *)0x0);
      }
      uVar21 = (uint)*(byte *)(*(long *)(param_1 + 0x140) + 0xd1);
      if ((*(byte *)(*(long *)(param_1 + 0x140) + 0xd1) & 3) != 0) goto LAB_03604d34;
      if ((int)unaff_x25 == 0) {
        param_1[0x9c9] = (code)0x0;
        pcVar35 = (code *)0x30d40;
      }
      else {
switchD_03600464_caseD_36047a8:
        pcVar52 = *(code **)(param_1 + 0x140);
        pcVar39 = *(code **)(param_1 + 0x148);
        pcVar43 = (code *)0x40d2;
        pcVar35 = (code *)(ulong)(byte)param_1[0x9b4];
        uVar46 = 0x1b8;
        uVar27 = 0x1070;
        uVar22 = (ulong)(byte)param_1[0x9b2];
switchD_03600464_caseD_36047c0:
        pcVar53 = (code *)0x30d40;
        local_58 = pcVar39 + (long)unaff_x24;
        cVar16 = param_1[0x9b0];
        uVar18 = (uint)pcVar35;
        uVar27 = uVar27 + (int)((ulong)pcVar35 >> 4) * (int)uVar46;
        iVar54 = (uVar18 & 0xf) * 0x1054;
        iVar19 = iVar54 + 52000;
        cVar37 = param_1[0x138];
        uVar30 = *(uint *)(param_1 + 0x9a8);
        uVar21 = iVar54 + 0x11650 + uVar27 * -3;
        uVar38 = uVar21;
        if ((uVar22 & 0xff) != 0 || cVar16 != (code)0x0) {
          uVar38 = uVar27;
        }
        uVar27 = 0xcb70;
        if (3 < uVar18) {
          uVar27 = (uVar18 + 0xc & 0xf) * 0x1054 + 52000;
        }
        lVar41 = *(long *)(param_1 + 0x180);
        if (cVar16 != (code)0x0) {
          iVar19 = 0x1930;
        }
        local_68 = (code *)CONCAT44(iVar19,(uint)local_68);
        if (cVar16 != (code)0x0) {
          uVar27 = 0x18ec;
        }
        if (param_1[0x9b7] != (code)0x0) {
          uVar27 = uVar21;
        }
        if (param_1[0x9b6] != (code)0x0) {
          uVar38 = iVar54 + 0xcb90;
        }
        local_70 = (long *)(ulong)*(uint *)(param_1 + 0x9ac);
        do {
          lVar36 = *(long *)unaff_x27;
          bVar33 = *(byte *)(lVar36 + 0x200);
          uVar22 = FUN_03608864(lVar36 + 0x2640);
          pcVar55 = (code *)0x30d40;
          if ((1 < (byte)cVar37) &&
             (((pcVar52[(long)pcVar43] != (code)0x0 && (*(code **)(pcVar52 + 0x40d8) == local_58))
              || ((pcVar55 = (code *)0x30d40, *(uint *)(pcVar52 + 0xf68) == 7 &&
                  ((pcVar55 = (code *)0x30d40, pcVar52[0xf7a] != (code)0x0 &&
                   (pcVar55 = (code *)0x30d40, *(code **)(pcVar52 + 0xf80) == pcVar39 + 0xf78)))))))
             ) {
            pcVar55 = (code *)0x2;
            if (-1 < (char)bVar33) {
              pcVar55 = (code *)&DAT_00000004;
            }
            if (*(char *)(lVar36 + 0x4110) != '\0') {
              pcVar55 = (code *)0xfa0;
            }
          }
          pcVar23 = (code *)(uVar22 >> (ulong)(bVar33 >> 7));
          if (*(long *)(lVar36 + 0x4118) == 0) {
            pcVar28 = (code *)0x30d40;
            if (lVar41 != 0) {
              uVar21 = local_68._4_4_;
              if ((uVar30 != 1) && (uVar21 = uVar27, uVar30 != 0)) {
                uVar21 = uVar38;
              }
              pcVar28 = (code *)((ulong)uVar21 - (long)local_70);
            }
            pcVar44 = (code *)(*(long *)(lVar36 + 0x128) - *(long *)(lVar36 + 0x110));
            pcVar35 = (code *)0x11110;
            if (pcVar44 != (code *)0x0) {
              pcVar35 = pcVar44;
            }
            pcVar44 = (code *)0x1007e;
            if ((*(byte *)(lVar36 + 0xec3) & 4) != 0) {
              pcVar44 = (code *)0x10080;
            }
            pcVar47 = pcVar44;
            if (*(char *)(lVar36 + 0x2c0) < '\0') {
              bVar33 = *(byte *)(lVar36 + 0x2c4);
              pcVar47 = (code *)0x2;
              if ((*(byte *)(lVar36 + 0xec3) & 4) != 0) {
                pcVar47 = (code *)&DAT_00000004;
              }
              if ((bVar33 != 0x90) || ((*(byte *)(lVar36 + 0x2c1) & 3) == 1)) {
                lVar2 = (ulong)(0x8f - bVar33) * 0x1c8;
                if (0x8f < bVar33) {
                  lVar2 = 0x10080;
                }
                pcVar31 = *(code **)(lVar36 + 0x3b0);
                if (pcVar31 <= *(code **)(lVar36 + 0x110)) {
                  pcVar31 = *(code **)(lVar36 + 0x110) + -(long)pcVar31;
                }
                pcVar48 = pcVar47 + (lVar2 - (long)pcVar31) + 0x1c8;
                pcVar47 = pcVar44 + -0x1c8;
                if (pcVar31 <= pcVar44) {
                  pcVar47 = pcVar48;
                }
              }
            }
            pcVar44 = (code *)(*(long *)(lVar36 + 0x130) - *(long *)(lVar36 + 0x110));
            if (pcVar47 <= pcVar44) {
              pcVar44 = pcVar47;
            }
            if (pcVar55 <= pcVar23) {
              pcVar23 = pcVar55;
            }
            if (pcVar28 <= pcVar23) {
              pcVar23 = pcVar28;
            }
            if (pcVar35 <= pcVar23) {
              pcVar23 = pcVar35;
            }
            if (pcVar44 <= pcVar23) {
              pcVar23 = pcVar44;
            }
          }
          else if (pcVar55 <= pcVar23) {
            pcVar23 = pcVar55;
          }
          unaff_x27 = unaff_x27 + 8;
          if (pcVar23 <= pcVar53) {
            pcVar53 = pcVar23;
          }
          unaff_x25 = unaff_x25 + -1;
        } while (unaff_x25 != (code *)0x0);
        pcVar35 = (code *)((ulong)pcVar53 & 3);
        param_1[0x9c9] = (code)(pcVar35 == (code *)0x2);
        pcVar52 = unaff_x30;
        unaff_x25 = unaff_x29;
        unaff_x27 = local_58;
        if ((uint)unaff_x29 < 4) {
          lVar36 = 0;
          unaff_x24 = (long *)0x40d0;
          if (unaff_x26 != (code *)0x0) goto LAB_03604b2c;
switchD_03600464_caseD_3604ab4:
        }
        else {
          lVar36 = 0;
          unaff_x24 = (long *)0x40d0;
          pcVar55 = local_68;
          do {
            lVar36 = lVar36 + -4;
            *(undefined8 *)(*(long *)(pcVar55 + -0x18) + 0x120) =
                 *(undefined8 *)(*(long *)(pcVar55 + -0x18) + 0x110);
            *(undefined8 *)(*(long *)(pcVar55 + -0x10) + 0x120) =
                 *(undefined8 *)(*(long *)(pcVar55 + -0x10) + 0x110);
            *(undefined8 *)(*(long *)(pcVar55 + -8) + 0x120) =
                 *(undefined8 *)(*(long *)(pcVar55 + -8) + 0x110);
            *(undefined8 *)(*(long *)pcVar55 + 0x120) = *(undefined8 *)(*(long *)pcVar55 + 0x110);
            pcVar55 = pcVar55 + 0x20;
          } while (lVar41 != lVar36);
          lVar36 = -lVar36;
          if (unaff_x26 != (code *)0x0) {
LAB_03604b2c:
            unaff_x24 = (long *)0x40d0;
            pcVar23 = local_58 + lVar36 * 8;
            pcVar55 = unaff_x26;
            do {
              pcVar55 = pcVar55 + -1;
              *(undefined8 *)(*(long *)pcVar23 + 0x120) = *(undefined8 *)(*(long *)pcVar23 + 0x110);
              pcVar23 = pcVar23 + 8;
            } while (pcVar55 != (code *)0x0);
          }
        }
        bVar6 = pcVar35 != (code *)0x2;
        pcVar35 = pcVar53 + 2;
        if (bVar6) {
          pcVar35 = pcVar53;
        }
switchD_03600464_caseD_3604b54:
        pcVar53 = (code *)0x1;
      }
      lVar41 = *(long *)(param_1 + 0x140);
      lVar36 = *(long *)(param_1 + 0x148);
      param_1[0x9c1] = *(code *)(lVar41 + 0x2648);
      param_1[0x9c2] = *(code *)(lVar41 + 0x2649);
      param_1[0x9c4] = *(code *)(lVar41 + 0x264a);
      param_1[0x9c3] = *(code *)(lVar41 + 0x264b);
      param_1[0x9c5] = *(code *)(lVar36 + 0x2648);
      param_1[0x9c6] = *(code *)(lVar36 + 0x2649);
      param_1[0x9c8] = *(code *)(lVar36 + 0x264a);
      cVar16 = *(code *)(lVar36 + 0x264b);
      *(code **)(param_1 + 0xc48) = pcVar35;
      param_1[0x9c7] = cVar16;
      *(uint *)(param_1 + 0xc44) = (uint)pcVar53;
      pcVar23 = (code *)FUN_0361e030(lVar41,pcVar35 + *(long *)(lVar41 + 0x120));
      pcVar39 = (code *)(*(long *)(param_1 + 0x140) + 0x118);
      pcVar35 = *(code **)(*(long *)(param_1 + 0x140) + 0x110);
    } while( true );
  case (code *)0x3604f88:
switchD_03600464_caseD_3604f88:
    unaff_x27 = (code *)(ulong)(byte)pcVar53[0x200];
    pcVar23 = (code *)FUN_03608864(pcVar53 + 0x2640);
    pcVar28 = (code *)0x30d40;
    plVar57 = in_stack_ffffffffffffffa0;
    if (1 < (uint)unaff_x26) {
      if ((*unaff_x25 == (code)0x0) || (*(code **)(pcVar55 + 0x40d8) != local_58)) {
        pcVar28 = (code *)0x30d40;
        if ((*(uint *)(pcVar55 + 0xf68) == 7) &&
           (pcVar28 = (code *)0x30d40, pcVar55[0xf7a] != (code)0x0)) {
          bVar10 = *(code **)(pcVar55 + 0xf80) == pcVar47;
switchD_03600464_caseD_3604ff0:
          pcVar28 = (code *)0x30d40;
          if (bVar10) goto LAB_03604f30;
        }
      }
      else {
LAB_03604f30:
        pcVar28 = (code *)0x2;
        if (-1 < (char)unaff_x27) {
          pcVar28 = (code *)&DAT_00000004;
        }
        if (pcVar53[0x4110] != (code)0x0) {
          pcVar28 = (code *)0xfa0;
        }
      }
    }
    pcVar35 = local_58;
    pcVar23 = (code *)((ulong)pcVar23 >> ((ulong)unaff_x27 >> 7 & 0x3f));
    if (*(long *)(pcVar53 + 0x4118) == 0) {
      pcVar44 = (code *)0x30d40;
      if (plVar57 != (long *)0x0) {
        uVar21 = local_68._4_4_;
        if ((int)unaff_x24 != 1) {
          uVar21 = uStack_78._4_4_;
          if ((int)unaff_x24 != 0) {
            uVar21 = (uint)((ulong)unaff_x30 >> 0x20);
          }
        }
        pcVar44 = (code *)((ulong)uVar21 - (long)local_70);
      }
      pcVar43 = (code *)(*(long *)(pcVar53 + 0x128) - *(long *)(pcVar53 + 0x110));
      pcVar39 = (code *)0x11110;
      if (pcVar43 != (code *)0x0) {
        pcVar39 = pcVar43;
      }
      pcVar43 = (code *)0x1007e;
      if (((byte)pcVar53[0xec3] & 4) != 0) {
        pcVar43 = (code *)0x10080;
      }
      pcVar31 = pcVar43;
      if ((char)pcVar53[0x2c0] < '\0') {
        cVar16 = pcVar53[0x2c4];
        pcVar31 = (code *)0x2;
        if (((byte)pcVar53[0xec3] & 4) != 0) {
          pcVar31 = (code *)&DAT_00000004;
        }
        if ((cVar16 != (code)0x90) || (((byte)pcVar53[0x2c1] & 3) == 1)) {
          lVar41 = (ulong)(0x8f - (byte)cVar16) * 0x1c8;
          if (0x8f < (byte)cVar16) {
            lVar41 = 0x10080;
          }
          pcVar48 = *(code **)(pcVar53 + 0x3b0);
          if (pcVar48 <= *(code **)(pcVar53 + 0x110)) {
            pcVar48 = *(code **)(pcVar53 + 0x110) + -(long)pcVar48;
          }
          pcVar1 = pcVar31 + (lVar41 - (long)pcVar48) + 0x1c8;
          pcVar31 = pcVar43 + -0x1c8;
          if (pcVar48 <= pcVar43) {
            pcVar31 = pcVar1;
          }
        }
      }
      pcVar53 = (code *)(*(long *)(pcVar53 + 0x130) - *(long *)(pcVar53 + 0x110));
      if (pcVar31 <= pcVar53) {
        pcVar53 = pcVar31;
      }
      if (pcVar28 <= pcVar23) {
        pcVar23 = pcVar28;
      }
      if (pcVar44 <= pcVar23) {
        pcVar23 = pcVar44;
      }
      if (pcVar39 <= pcVar23) {
        pcVar23 = pcVar39;
      }
      if (pcVar53 <= pcVar23) {
        pcVar23 = pcVar53;
      }
    }
    else if (pcVar28 <= pcVar23) {
      pcVar23 = pcVar28;
    }
    if (pcVar23 <= pcVar52) {
      pcVar52 = pcVar23;
    }
    param_2 = param_2 + -1;
    unaff_x28 = unaff_x28 + 1;
    in_stack_ffffffffffffffa0 = plVar57;
    if (param_2 == (code *)0x0) {
      param_1[0x9c9] = (code)(((ulong)pcVar52 & 3) == 2);
      uVar21 = (uint)local_58;
      if (uVar21 < 4) {
        lVar41 = 0;
      }
      else {
        pcVar53 = (code *)0x0;
        plVar26 = local_70;
        do {
          pcVar53 = pcVar53 + -4;
          *(undefined8 *)(plVar26[-3] + 0x120) = *(undefined8 *)(plVar26[-3] + 0x110);
          *(undefined8 *)(plVar26[-2] + 0x120) = *(undefined8 *)(plVar26[-2] + 0x110);
          *(undefined8 *)(plVar26[-1] + 0x120) = *(undefined8 *)(plVar26[-1] + 0x110);
          *(undefined8 *)(*plVar26 + 0x120) = *(undefined8 *)(*plVar26 + 0x110);
          plVar26 = plVar26 + 4;
        } while (local_68 != pcVar53);
        lVar41 = -(long)pcVar53;
      }
      if (unaff_x29 != (code *)0x0) {
        plVar26 = plVar57 + lVar41;
        pcVar53 = unaff_x29;
        do {
          pcVar53 = pcVar53 + -1;
          *(undefined8 *)(*plVar26 + 0x120) = *(undefined8 *)(*plVar26 + 0x110);
          plVar26 = plVar26 + 1;
        } while (pcVar53 != (code *)0x0);
      }
      pcVar53 = pcVar52 + 2;
      if (((ulong)pcVar52 & 3) != 2) {
        pcVar53 = pcVar52;
      }
      do {
        lVar41 = *(long *)(param_1 + 0x140);
        lVar36 = *(long *)(param_1 + 0x148);
        param_1[0x9c1] = *(code *)(lVar41 + 0x2648);
        param_1[0x9c2] = *(code *)(lVar41 + 0x2649);
        param_1[0x9c4] = *(code *)(lVar41 + 0x264a);
        param_1[0x9c3] = *(code *)(lVar41 + 0x264b);
        param_1[0x9c5] = *(code *)(lVar36 + 0x2648);
        param_1[0x9c6] = *(code *)(lVar36 + 0x2649);
        param_1[0x9c8] = *(code *)(lVar36 + 0x264a);
        param_1[0x9c7] = *(code *)(lVar36 + 0x264b);
        pcVar52 = (code *)FUN_0361e030(lVar41,pcVar53 + *(long *)(lVar41 + 0x120));
        *(undefined8 *)(*(long *)(param_1 + 0x140) + 0x118) =
             *(undefined8 *)(*(long *)(param_1 + 0x140) + 0x110);
        if (1 < uVar21) {
          pcVar55 = (code *)0x1;
          do {
            pcVar52 = *(code **)(param_1 + (long)pcVar55 * 8 + 0x140);
            lVar41 = *(long *)(pcVar52 + 0x120);
            pcVar23 = *(code **)(pcVar52 + 0x110);
            if (pcVar23 < pcVar53 + lVar41) {
              do {
                if (((byte)pcVar52[0xd1] >> 3 & 1) != 0) break;
                if ((byte)pcVar52[0xd2] < 3) {
                  FUN_0361bf5c();
                }
                else if ((char)pcVar52[0x200] < '\0') {
                  FUN_0361d4d4();
                }
                else if (((byte)pcVar52[0xec3] >> 2 & 1) == 0) {
                  FUN_0361cd78();
                }
                else {
                  FUN_0361c670();
                }
                pcVar52 = *(code **)(param_1 + (long)pcVar55 * 8 + 0x140);
                pcVar23 = *(code **)(pcVar52 + 0x110);
              } while (pcVar23 < pcVar53 + lVar41);
            }
            pcVar55 = pcVar55 + 1;
            *(code **)(pcVar52 + 0x118) = pcVar23;
          } while (pcVar55 != pcVar35);
        }
        cVar16 = param_1[0x138];
        if (cVar16 != (code)0x0) {
          lVar41 = *(long *)(param_1 + 0x140);
          if ((*(byte *)(lVar41 + 0xd1) >> 3 & 1) != 0) {
            return pcVar52;
          }
          uVar22 = 0;
          do {
            if ((ulong)(byte)cVar16 - 1 == uVar22) goto LAB_03605334;
            lVar36 = uVar22 * 8;
            uVar22 = uVar22 + 1;
          } while ((*(byte *)(*(long *)(param_1 + lVar36 + 0x148) + 0xd1) >> 3 & 1) == 0);
          if (uVar22 < (byte)cVar16) {
            return pcVar52;
          }
LAB_03605334:
          if (((1 < (byte)cVar16) && (*(char *)(lVar41 + 0x264c) == '\x01')) &&
             (*(long *)(lVar41 + 0x3fa8) == *(long *)(param_1 + 0x148) + 0x2640)) {
            pcVar52 = (code *)FUN_036042e0(param_1,0,
                                           *(long *)(lVar41 + 0x110) - *(long *)(lVar41 + 0x120),0);
          }
        }
        plVar26 = plVar57;
        pcVar53 = pcVar35;
        if (uVar21 != 0) {
          do {
            lVar41 = *plVar26;
            *(undefined1 *)(lVar41 + 0x40d1) = *(undefined1 *)(lVar41 + 0x40d0);
            if (*(int *)(lVar41 + 0xf68) == 7) {
              *(undefined1 *)(lVar41 + 0xf79) = *(undefined1 *)(lVar41 + 0xf78);
            }
            if (*(char *)(lVar41 + 0x4110) != '\0') {
              iVar19 = *(int *)(lVar41 + 0x4114);
              if (iVar19 == 1) {
                iVar19 = 0;
                *(undefined1 *)(lVar41 + 0x4112) = 1;
                *(undefined4 *)(lVar41 + 0x4114) = 0;
                *(undefined1 *)(lVar41 + 0x4111) = *(undefined1 *)(lVar41 + 0x4113);
              }
              lVar36 = *(long *)(lVar41 + 0x4108);
              if ((lVar36 != 0) && (*(int *)(lVar36 + 0x14) == 1)) {
                *(undefined1 *)(lVar36 + 0x11) = *(undefined1 *)(lVar36 + 0x13);
                *(undefined1 *)(*(long *)(lVar41 + 0x4108) + 0x12) = 1;
                *(undefined4 *)(*(long *)(lVar41 + 0x4108) + 0x14) = 0;
                iVar19 = *(int *)(lVar41 + 0x4114);
              }
              if (iVar19 == 2) {
                if (*(long *)(lVar41 + 0x4108) != 0) {
                  *(undefined1 *)(*(long *)(lVar41 + 0x4108) + 0x12) = 0;
                }
                *(undefined4 *)(lVar41 + 0x4114) = 0;
              }
            }
            pcVar53 = pcVar53 + -1;
            plVar26 = plVar26 + 1;
          } while (pcVar53 != (code *)0x0);
        }
        if ((*(byte *)(*(long *)(param_1 + 0x140) + 0xd1) & 3) != 0) {
          return pcVar52;
        }
        if (uVar21 != 0) goto code_r0x03604e44;
        param_1[0x9c9] = (code)0x0;
        pcVar53 = (code *)0x30d40;
      } while( true );
    }
    goto LAB_03604f84;
  case (code *)0x3604ff0:
    goto switchD_03600464_caseD_3604ff0;
  case (code *)0x3607b88:
    goto switchD_03600464_caseD_3607b88;
  case (code *)0x3607b98:
    pcVar31 = (code *)&DAT_00000004;
    pcVar35 = *(code **)(pcVar35 + 0x20);
  case (code *)0x3607ba0:
    (*pcVar35)(pcVar23,pcVar28,pcVar31);
    cVar16 = param_2[0xc];
joined_r0x03607ba8:
    if (cVar16 != (code)0x0) {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)register0x00000008 + -0x38,1);
    }
    if (*(uint *)(param_2 + 8) == 2) {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)register0x00000008 + -0x5c,4);
      cVar16 = param_2[0xc];
    }
    else if (*(uint *)(param_2 + 8) == 1) {
      (**(code **)(*(long *)param_2 + 0x38))(param_2,(long)register0x00000008 + -0x38);
      cVar16 = param_2[0xc];
    }
    else {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)register0x00000008 + -0x38,4);
      cVar16 = param_2[0xc];
    }
    if (cVar16 != (code)0x0) {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)register0x00000008 + -0x38,1);
    }
    if (*(uint *)(param_2 + 8) == 2) {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,pcVar55,8);
      cVar16 = param_2[0xc];
    }
    else if (*(uint *)(param_2 + 8) == 1) {
      (**(code **)(*(long *)param_2 + 0x40))(param_2,(long)register0x00000008 + -0x38);
      cVar16 = param_2[0xc];
    }
    else {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)register0x00000008 + -0x38,8);
      *(undefined8 *)pcVar55 = 0;
      cVar16 = param_2[0xc];
    }
    if (cVar16 != (code)0x0) {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)register0x00000008 + -0x38,1);
    }
    if (*(uint *)(param_2 + 8) == 2) {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,pcVar53,4);
      cVar16 = param_2[0xc];
    }
    else if (*(uint *)(param_2 + 8) == 1) {
      (**(code **)(*(long *)param_2 + 0x38))(param_2,(long)register0x00000008 + -0x38);
      cVar16 = param_2[0xc];
    }
    else {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)register0x00000008 + -0x38,4);
      *(uint *)pcVar53 = 0;
      cVar16 = param_2[0xc];
    }
    if (cVar16 != (code)0x0) {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)register0x00000008 + -0x38,1);
    }
    if (*(uint *)(param_2 + 8) == 2) {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,5,4);
    }
    else if (*(uint *)(param_2 + 8) == 1) {
      (**(code **)(*(long *)param_2 + 0x38))(param_2,(long)register0x00000008 + -0x38);
switchD_03600464_caseD_3607b88:
    }
    else {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)register0x00000008 + -0x38,4);
      bVar11 = *(uint *)(param_2 + 0x10) == 0xff00;
      pcVar39 = (code *)0x0;
      pcVar44 = (code *)0x0;
switchD_03600464_caseD_3607d78:
      uVar20 = SUB84(pcVar44,0);
      if (!bVar11) {
        uVar20 = SUB84(pcVar39,0);
      }
      DAT_00000005 = (byte)uVar20;
      DAT_00000006 = (byte)((uint)uVar20 >> 8);
      _DAT_00000007 = (undefined2)((uint)uVar20 >> 0x10);
    }
    cVar16 = param_1[0xd];
    (**(code **)(*(long *)param_2 + 0x28))(param_2,(long)register0x00000008 + -0x38);
    param_1[0xd] = (code)(cVar16 != (code)0x0);
    uVar46 = *(ulong *)(param_1 + -0x30);
    uVar40 = *(long *)(unaff_x25 + 0x108) - uVar46;
    uVar22 = (uVar40 & 0xffffffffffffff80) + uVar46;
    if ((uVar40 & 0x80) != 0) {
      uVar22 = uVar22 - 0x80;
    }
    if (uVar22 == 0xffffffffffffffff) {
LAB_03607de8:
      local_68 = (code *)0x0;
    }
    else if (uVar22 == uVar46) {
      if ((long)uVar46 < 0) goto LAB_03607de8;
      local_68 = *(code **)(param_1 + 0x20);
    }
    else {
      local_68 = (code *)(uVar22 & ((long)uVar22 >> 0x3f ^ 0xffffffffffffffffU));
    }
    uVar22 = (uVar40 & 0xfffffffffffffffc) + uVar46;
    if ((uVar40 & 4) != 0) {
      uVar22 = uVar22 - 4;
    }
    if (uVar22 != 0xffffffffffffffff) {
      if (uVar22 != uVar46) {
        local_70 = (long *)(uVar22 & ((long)uVar22 >> 0x3f ^ 0xffffffffffffffffU));
        goto LAB_03607e34;
      }
      if (-1 < (long)uVar46) {
        local_70 = *(long **)(param_1 + 0x28);
        goto LAB_03607e34;
      }
    }
    local_70 = (long *)0x0;
LAB_03607e34:
    if (param_2[0xc] != (code)0x0) {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)register0x00000008 + -0x38,1);
    }
    if (*(uint *)(param_2 + 8) == 2) {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,&local_68,8);
      cVar16 = param_2[0xc];
    }
    else if (*(uint *)(param_2 + 8) == 1) {
      (**(code **)(*(long *)param_2 + 0x40))(param_2,(long)register0x00000008 + -0x38);
      cVar16 = param_2[0xc];
    }
    else {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)register0x00000008 + -0x38,8);
      local_68 = (code *)0x0;
      cVar16 = param_2[0xc];
    }
    if (cVar16 != (code)0x0) {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)register0x00000008 + -0x38,1);
    }
    if (*(uint *)(param_2 + 8) == 2) {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,&local_70,8);
      cVar16 = param_2[0xc];
    }
    else if (*(uint *)(param_2 + 8) == 1) {
      (**(code **)(*(long *)param_2 + 0x40))(param_2,(long)register0x00000008 + -0x38);
      cVar16 = param_2[0xc];
    }
    else {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)register0x00000008 + -0x38,8);
      local_70 = (long *)0x0;
      cVar16 = param_2[0xc];
    }
    if (cVar16 != (code)0x0) {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)register0x00000008 + -0x38,1);
    }
    if (*(uint *)(param_2 + 8) == 2) {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,param_1 + 0x20,8);
      cVar16 = param_2[0xc];
    }
    else if (*(uint *)(param_2 + 8) == 1) {
      (**(code **)(*(long *)param_2 + 0x40))(param_2,(long)register0x00000008 + -0x38);
      cVar16 = param_2[0xc];
    }
    else {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)register0x00000008 + -0x38,8);
      *(undefined8 *)(param_1 + 0x20) = 0;
      cVar16 = param_2[0xc];
    }
    if (cVar16 != (code)0x0) {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)register0x00000008 + -0x38,1);
    }
    if (*(uint *)(param_2 + 8) == 2) {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,param_1 + 0x28,8);
    }
    else if (*(uint *)(param_2 + 8) == 1) {
      (**(code **)(*(long *)param_2 + 0x40))(param_2,(long)register0x00000008 + -0x38);
    }
    else {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)register0x00000008 + -0x38,8);
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    cVar16 = param_1[0xe];
    (**(code **)(*(long *)param_2 + 0x28))(param_2,(long)register0x00000008 + -0x38);
    param_1[0xe] = (code)(cVar16 != (code)0x0);
    if (uVar56 == 0) {
      FUN_036081dc(param_1);
    }
    return (code *)0x1;
  case (code *)0x3607bb0:
    (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)register0x00000008 + -0x38,4);
    local_58 = (code *)((ulong)local_58 & 0xffffffff00000000);
    cVar16 = param_2[0xc];
    goto joined_r0x03607ba8;
  case (code *)0x3607d78:
    goto switchD_03600464_caseD_3607d78;
  case (code *)0x360839c:
    pcVar52 = pcVar44 + ((long)pcVar35 - (long)pcVar44 & 0xffffffffffffff80);
    if (((long)pcVar35 - (long)pcVar44 & 0x80U) != 0) {
      pcVar52 = pcVar44 + ((long)pcVar35 - (long)pcVar44 & 0xffffffffffffff80) + -0x80;
    }
    if ((*(long *)(pcVar23 + 0x20) == -1) || (pcVar44 < pcVar52)) {
      *(code **)(pcVar23 + 0x20) = pcVar52;
    }
    uVar22 = extraout_x12 >> 3;
    if ((uVar45 >> 2 & 1) != 0) {
      iVar19 = (int)uVar22 + 1;
      *(code **)(pcVar23 + 0x28) = pcVar35;
      goto LAB_03608428;
    }
    pcVar43 = *(code **)(pcVar43 + 0x108);
    uVar46 = *(ulong *)(pcVar23 + -0x30);
  case (code *)0x36083dc:
    pcVar43 = pcVar43 + -uVar46;
switchD_035e3b44_caseD_26:
    uVar40 = (ulong)pcVar43 & 4;
    pcVar43 = (code *)(((ulong)pcVar43 & 0xfffffffffffffffc) + uVar46);
    if (uVar40 != 0) {
      pcVar43 = pcVar43 + -4;
    }
    bVar12 = *(long *)(pcVar23 + 0x28) == -1;
switchD_03600464_caseD_36083fc:
    iVar19 = (int)uVar22;
    if ((bVar12) || (pcVar44 < pcVar43)) {
      *(code **)(pcVar23 + 0x28) = pcVar43;
    }
LAB_03608428:
    *(code **)(pcVar23 + 0x10) = pcVar35;
    *(uint *)(pcVar23 + 0x18) = *(uint *)(pcVar23 + 0x18) + 0x419353a;
    *(uint *)(pcVar23 + 0x1c) = *(uint *)(pcVar23 + 0x1c) + iVar19;
    return pcVar23;
  case (code *)0x36083e0:
    goto switchD_035e3b44_caseD_26;
  case (code *)0x36083fc:
    goto switchD_03600464_caseD_36083fc;
  case (code *)0x3608458:
    pcVar52 = pcVar44 + (long)pcVar43;
    if ((extraout_x12 & 4) != 0) {
      pcVar52 = pcVar44 + (long)pcVar43 + -4;
    }
    if (pcVar52 == (code *)0xffffffffffffffff) {
      uVar22 = 0;
    }
    else if (pcVar52 == pcVar43) {
      uVar22 = *(ulong *)(pcVar23 + 0x28);
    }
    else {
      uVar22 = (ulong)pcVar52 & ((long)pcVar52 >> 0x3f ^ 0xffffffffffffffffU);
    }
    pcVar52 = pcVar43 + (extraout_x12 & 0xffffffffffffff80);
    if ((extraout_x12 & 0x80) != 0) {
      pcVar52 = pcVar43 + (extraout_x12 & 0xffffffffffffff80) + -0x80;
    }
    if (pcVar52 == (code *)0xffffffffffffffff) {
      uVar46 = 0;
    }
    else if (pcVar52 == pcVar43) {
      uVar46 = *(ulong *)(pcVar23 + 0x20);
    }
    else {
      uVar46 = (ulong)pcVar52 & ((long)pcVar52 >> 0x3f ^ 0xffffffffffffffffU);
    }
    lVar41 = *(long *)(pcVar23 + 0x10);
    uVar40 = (long)pcVar35 - lVar41;
    if (((int)lVar41 - (uint)uVar42 & 4) != 0) {
      uVar40 = ((long)pcVar35 - lVar41) + 4;
    }
    uVar18 = *(uint *)(pcVar23 + 0x18);
    *(uint *)(pcVar23 + 0x1c) = *(uint *)(pcVar23 + 0x1c) + (int)(uVar40 >> 3);
    lVar36 = _BYTE_04193642;
    *(ulong *)(pcVar23 + 0x20) = uVar46;
    *(ulong *)(pcVar23 + 0x28) = uVar22;
    *(code **)(pcVar23 + 0x10) = pcVar35;
    bVar13 = (lVar41 - *(long *)(pcVar23 + -0x30) & 0x80U) == 0;
    pcVar39 = (code *)((lVar36 - lVar41) + (lVar41 - *(long *)(pcVar23 + -0x30) & 0x7fU));
  case (code *)0x3608518:
    if (!bVar13) {
      pcVar39 = pcVar39 + 0x80;
    }
    *(uint *)(pcVar23 + 0x18) = uVar18 + (int)((ulong)pcVar39 >> 8);
    return pcVar23;
  case (code *)0x3608578:
    *(uint *)(pcVar23 + 0x1a40) = uVar30;
    *(uint *)(pcVar35 + 0x80) = uVar30;
    *(undefined8 *)(pcVar23 + 0x1a38) = 0xb;
    pcVar23[8] = cVar16;
    return pcVar23;
  case (code *)0x36085c8:
    FUN_03604170(*(undefined8 *)param_1);
    return (code *)(ulong)(byte)param_1[8];
  case (code *)0x360878c:
    pcVar52 = (code *)0x100;
    uVar22 = (long)&switchD_03600464::switchdataD_0419353a -
             (extraout_x12 & ((long)extraout_x12 >> 0x3f ^ 0xffffffffffffffffU));
    if (uVar22 < 0x101) {
      pcVar53 = (code *)(0x200 - uVar22);
      pcVar52 = (code *)&DAT_00000004;
      if (pcVar53 != (code *)0x0) {
        pcVar52 = pcVar53;
      }
    }
    return pcVar52;
  case (code *)0x3608a44:
    pcVar23[0x27] = cVar16;
    if (((((uint)pcVar28 >> 3 & 1) == 0) && (pcVar23[0x29] != (code)0x0)) &&
       (pcVar23[0x2b] != (code)0x0)) {
      *pcVar23 = (code)0x0;
      pcVar23[-4] = (code)((byte)pcVar23[-4] & 0xfe);
      uVar42 = (ushort)(byte)pcVar23[1];
      if (((pcVar23[1] != (code)0x0) && (uVar42 = 0x17f, *pcVar23 != (code)0x0)) &&
         (pcVar23[0x22] == (code)0x0)) {
        uVar42 = 0x17f;
        if (pcVar23[0x2f] != (code)0x0) {
          uVar42 = *(short *)(pcVar23 + 0x32) + 0x17f;
        }
      }
      *(ushort *)(pcVar23 + 0xe4) = uVar42;
    }
    return pcVar23;
  case (code *)0x3608b74:
    uVar22 = extraout_x12 & 0xf;
    if (((uVar38 & 0xf) == 0) && (pcVar23[-0x1446] == (code)0x0)) {
      if ((((uint)extraout_x12 & 7) == 2) && (((byte)pcVar23[-0x1408] >> 4 & 1) != 0)) {
        uVar22 = (ulong)((int)uVar22 + 1);
      }
      else {
        uVar22 = (ulong)(byte)(&DAT_04102530)[uVar22];
      }
    }
    pcVar23[0x26] = SUB81(uVar22,0);
    sVar4 = *(short *)(&DAT_04057c80 + uVar22 * 2);
    *(short *)(pcVar23 + 0x32) = sVar4;
    sVar17 = 0x17f;
    if (pcVar23[0x2f] != (code)0x0) {
      sVar17 = sVar4 + 0x17f;
    }
    *(short *)(pcVar23 + 0xe4) = sVar17;
    return pcVar23;
  case (code *)0x3609010:
    sVar17 = 0x17f;
    if ((*pcVar23 != (code)0x0) && (pcVar23[0x22] == (code)0x0)) {
      sVar17 = 0x17f;
      if (pcVar23[0x2f] != (code)0x0) {
        sVar17 = *(short *)(pcVar23 + 0x32) + 0x17f;
      }
    }
    *(short *)(pcVar23 + 0xae) = sVar17;
    if (pcVar23[1] == (code)0x0) {
      *pcVar23 = (code)0x0;
      pcVar23[-0x3c] = (code)((byte)pcVar23[-0x3c] & 0xfd);
      uVar42 = (ushort)(byte)pcVar23[1];
      if (((pcVar23[1] != (code)0x0) && (uVar42 = 0x17f, *pcVar23 != (code)0x0)) &&
         (pcVar23[0x22] == (code)0x0)) {
        uVar42 = 0x17f;
        if (pcVar23[0x2f] != (code)0x0) {
          uVar42 = *(short *)(pcVar23 + 0x32) + 0x17f;
        }
      }
    }
    else {
      if (*pcVar23 == (code)0x0) {
        return pcVar23;
      }
      if (pcVar23[0x22] != (code)0x0) {
        return pcVar23;
      }
      uVar21 = (uint)(byte)pcVar23[0x26];
      if (((uVar38 ^ 0x419353a) & 8) != 0) {
        uVar21 = 0x10 - (byte)pcVar23[0x26];
      }
      uVar22 = (ulong)uVar21 & 0xf;
      if (((uVar38 & 0xf) == 0) && (pcVar23[-0x147e] == (code)0x0)) {
        if (((uVar21 & 7) == 2) && (((byte)pcVar23[-0x1440] >> 4 & 1) != 0)) {
          uVar22 = (ulong)((int)uVar22 + 1);
        }
        else {
          uVar22 = (ulong)(byte)(&DAT_04102530)[uVar22];
        }
      }
      pcVar23[0x26] = SUB81(uVar22,0);
      sVar17 = *(short *)(&DAT_04057c80 + uVar22 * 2);
      *(short *)(pcVar23 + 0x32) = sVar17;
      uVar42 = 0x17f;
      if (pcVar23[0x2f] != (code)0x0) {
        uVar42 = sVar17 + 0x17f;
      }
    }
    *(ushort *)(pcVar23 + 0xae) = uVar42;
    return pcVar23;
  case (code *)0x36093d4:
    if ((uVar30 != 0) && (pcVar23[0x22] == (code)0x0)) {
      uVar38 = *(ushort *)(pcVar23 + 0x32) + 0x17f;
    }
    *(short *)(pcVar23 + 0xae) = (short)uVar38;
    bVar33 = 0;
    if ((*(uint *)(pcVar23 + 0x14) != 0 && *pcVar23 != (code)0x0) && pcVar23[1] != (code)0x0) {
      bVar33 = 2;
    }
    pcVar23[-0x3c] = (code)(bVar33 | (byte)pcVar23[-0x3c] & 0xfd);
    return pcVar23;
  case (code *)0x360a510:
    *(undefined4 *)pcVar35 = 0x419353a;
    iVar19 = *(int *)pcVar35;
    do {
      if (iVar19 == 0) {
        *(undefined8 *)(param_1 + 0x14a8) = 0;
LAB_0360a570:
        FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
LAB_0360a588:
        pcVar52 = (code *)nn::os::StartThread((ThreadType *)(param_1 + 0xe48));
        *(uint *)(param_1 + 0x1060) = 2;
        return pcVar52;
      }
      DataMemoryBarrier(2,1);
      lVar41 = *(long *)(param_1 + (ulong)(iVar19 - 1U) * 8);
      while (*(int *)pcVar35 == iVar19) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pcVar35,0x10);
        if (bVar6) {
          *(uint *)pcVar35 = iVar19 - 1U;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          *(undefined4 *)(lVar41 + 0x200) = 0;
          *(long *)(param_1 + 0x14a8) = lVar41;
          if (lVar41 != 0) goto LAB_0360a588;
          goto LAB_0360a570;
        }
      }
      ClearExclusiveLocal();
      iVar19 = *(int *)pcVar35;
    } while( true );
  case (code *)0x360c00c:
    pcVar35[0x4ad] = (code)0x3a;
    cVar16 = param_1[0x489];
    goto joined_r0x0360c014;
  case (code *)0x360c8e0:
    uVar34 = 0;
    if (uVar38 != 0) {
      uVar34 = 0x186;
    }
    *(undefined2 *)(param_1 + 0x500) = uVar34;
    if ((param_1[0x488] == (code)0x0) || (param_1[0x4aa] != (code)0x0)) {
      param_1[0x4bb] = (code)0x4;
      if (param_1[0x489] != (code)0x0) {
        sVar17 = 0x186;
        param_1[0x4bd] = (code)0x0;
        goto LAB_0360c9b8;
      }
LAB_0360c990:
      *(undefined2 *)(param_1 + 0x500) = 0;
      param_1[0x4bd] = (code)0x0;
      if (param_1[0x488] != (code)0x0) goto LAB_0360c9c4;
LAB_0360c9e0:
      cVar16 = (code)0x37;
      goto LAB_0360dd0c;
    }
    if (param_1[0x4c1] == (code)0x0) {
      param_1[((ulong)((byte)param_1[0x4ac] >> 1) & 0xf) + 0x4ad] = (code)0x4;
    }
    if (param_1[0x489] == (code)0x0) goto LAB_0360c990;
    uVar21 = 4;
    if (param_1[0x4bf] == (code)0x0) {
      uVar21 = ((uint)(byte)param_1[0x4ac] << 2 ^ 0xffffffff) & 4;
    }
    uVar21 = (byte)param_1[0x4ab] >> (ulong)uVar21 & 0xf;
    param_1[0x4bd] = SUB41(uVar21,0);
    if (param_1[0x4be] == (code)0x0) {
      sVar17 = 0x186;
    }
    else {
      sVar17 = (short)(uVar21 >> (ulong)(0x2104U >> (ulong)(((byte)param_1[0x4be] & 7) << 2) & 7)) *
               -0x34 + 0x186;
    }
LAB_0360c9b8:
    *(short *)(param_1 + 0x500) = sVar17;
    if (param_1[0x488] == (code)0x0) goto LAB_0360c9e0;
LAB_0360c9c4:
    if (param_1[0x4aa] != (code)0x0) goto LAB_0360c9e0;
    if (param_1[0x4c1] == (code)0x0) {
      cVar16 = param_1[0x4ac];
      cVar37 = (code)0x37;
      goto LAB_0360dc9c;
    }
    goto LAB_0360dca8;
  case (code *)0x360cc48:
    *(short *)(param_1 + 0x500) = (short)((uVar38 & 0xf) >> (ulong)(uVar30 >> 0x1a)) * -0x34 + 0x186
    ;
    if ((param_1[0x488] == (code)0x0) || (param_1[0x4aa] != (code)0x0)) {
      param_1[0x4b0] = (code)0xff;
      if (param_1[0x489] != (code)0x0) {
        sVar17 = 0x186;
        param_1[0x4bd] = (code)0x0;
        goto LAB_0360ce80;
      }
LAB_0360cdd0:
      *(undefined2 *)(param_1 + 0x500) = 0;
      if (param_1[0x488] == (code)0x0) goto LAB_0360cf00;
LAB_0360ce8c:
      if (param_1[0x4aa] != (code)0x0) goto LAB_0360cf00;
      if (param_1[0x4c1] == (code)0x0) {
        param_1[((ulong)((byte)param_1[0x4ac] >> 1) & 0xf) + 0x4ad] = (code)0x0;
      }
      uVar42 = (ushort)(byte)param_1[0x489];
      if (param_1[0x489] != (code)0x0) {
        uVar21 = 4;
        if (param_1[0x4bf] == (code)0x0) {
          uVar21 = ((uint)(byte)param_1[0x4ac] << 2 ^ 0xffffffff) & 4;
        }
        if (param_1[0x4be] == (code)0x0) {
          uVar42 = 0x186;
        }
        else {
          uVar42 = (short)(((byte)param_1[0x4ab] >> (ulong)uVar21 & 0xf) >>
                          (ulong)(0x2104U >> (ulong)(((byte)param_1[0x4be] & 7) << 2) & 7)) * -0x34
                   + 0x186;
        }
      }
    }
    else {
      if (param_1[0x4c1] == (code)0x0) {
        param_1[((ulong)((byte)param_1[0x4ac] >> 1) & 0xf) + 0x4ad] = (code)0xff;
      }
      if (param_1[0x489] == (code)0x0) goto LAB_0360cdd0;
      uVar21 = 4;
      if (param_1[0x4bf] == (code)0x0) {
        uVar21 = ((uint)(byte)param_1[0x4ac] << 2 ^ 0xffffffff) & 4;
      }
      if (param_1[0x4be] == (code)0x0) {
        sVar17 = 0x186;
      }
      else {
        sVar17 = (short)(((byte)param_1[0x4ab] >> (ulong)uVar21 & 0xf) >>
                        (ulong)(0x2104U >> (ulong)(((byte)param_1[0x4be] & 7) << 2) & 7)) * -0x34 +
                 0x186;
      }
LAB_0360ce80:
      *(short *)(param_1 + 0x500) = sVar17;
      if (param_1[0x488] != (code)0x0) goto LAB_0360ce8c;
LAB_0360cf00:
      param_1[0x4b1] = (code)0x0;
      uVar42 = 0;
      if (param_1[0x489] != (code)0x0) {
        uVar42 = 0x186;
      }
    }
    *(ushort *)(param_1 + 0x500) = uVar42;
    if ((param_1[0x488] != (code)0x0) && (param_1[0x4aa] == (code)0x0)) {
      if (param_1[0x4c1] == (code)0x0) {
        pcVar35 = (code *)(ulong)(byte)param_1[0x4ac];
        pcVar39 = (code *)0xff;
        goto switchD_03600464_caseD_360cfdc;
      }
      goto LAB_0360cfe8;
    }
    param_1[0x4b2] = (code)0xff;
    uVar42 = 0;
    if (param_1[0x489] != (code)0x0) {
      uVar42 = 0x186;
    }
    goto LAB_0360d110;
  case (code *)0x360cfdc:
switchD_03600464_caseD_360cfdc:
    param_1[((ulong)pcVar35 >> 1 & 0xf) + 0x4ad] = SUB81(pcVar39,0);
LAB_0360cfe8:
    uVar42 = (ushort)(byte)param_1[0x489];
    if (param_1[0x489] != (code)0x0) {
      uVar21 = 4;
      if (param_1[0x4bf] == (code)0x0) {
        uVar21 = ((uint)(byte)param_1[0x4ac] << 2 ^ 0xffffffff) & 4;
      }
      if (param_1[0x4be] == (code)0x0) {
        uVar42 = 0x186;
      }
      else {
        uVar42 = (short)(((byte)param_1[0x4ab] >> (ulong)uVar21 & 0xf) >>
                        (ulong)(0x2104U >> (ulong)(((byte)param_1[0x4be] & 7) << 2) & 7)) * -0x34 +
                 0x186;
      }
    }
LAB_0360d110:
    *(ushort *)(param_1 + 0x500) = uVar42;
    if ((param_1[0x488] == (code)0x0) || (param_1[0x4aa] != (code)0x0)) {
      param_1[0x4b3] = (code)0x0;
      if (param_1[0x489] != (code)0x0) {
        sVar17 = 0x186;
        param_1[0x4bd] = (code)0x0;
        goto LAB_0360d260;
      }
LAB_0360d1ac:
      *(undefined2 *)(param_1 + 0x500) = 0;
      param_1[0x4bd] = (code)0x0;
      if (param_1[0x488] == (code)0x0) goto LAB_0360d2e4;
LAB_0360d26c:
      if (param_1[0x4aa] != (code)0x0) goto LAB_0360d2e4;
      if (param_1[0x4c1] == (code)0x0) {
        param_1[((ulong)((byte)param_1[0x4ac] >> 1) & 0xf) + 0x4ad] = (code)0xff;
      }
      uVar42 = (ushort)(byte)param_1[0x489];
      if (param_1[0x489] != (code)0x0) {
        uVar21 = 4;
        if (param_1[0x4bf] == (code)0x0) {
          uVar21 = ((uint)(byte)param_1[0x4ac] << 2 ^ 0xffffffff) & 4;
        }
        if (param_1[0x4be] == (code)0x0) {
          uVar42 = 0x186;
        }
        else {
          uVar42 = (short)(((byte)param_1[0x4ab] >> (ulong)uVar21 & 0xf) >>
                          (ulong)(0x2104U >> (ulong)(((byte)param_1[0x4be] & 7) << 2) & 7)) * -0x34
                   + 0x186;
        }
      }
    }
    else {
      if (param_1[0x4c1] == (code)0x0) {
        param_1[((ulong)((byte)param_1[0x4ac] >> 1) & 0xf) + 0x4ad] = (code)0x0;
      }
      if (param_1[0x489] == (code)0x0) goto LAB_0360d1ac;
      uVar21 = 4;
      if (param_1[0x4bf] == (code)0x0) {
        uVar21 = ((uint)(byte)param_1[0x4ac] << 2 ^ 0xffffffff) & 4;
      }
      uVar21 = (byte)param_1[0x4ab] >> (ulong)uVar21 & 0xf;
      param_1[0x4bd] = SUB41(uVar21,0);
      if (param_1[0x4be] == (code)0x0) {
        sVar17 = 0x186;
      }
      else {
        sVar17 = (short)(uVar21 >> (ulong)(0x2104U >> (ulong)(((byte)param_1[0x4be] & 7) << 2) & 7))
                 * -0x34 + 0x186;
      }
LAB_0360d260:
      *(short *)(param_1 + 0x500) = sVar17;
      if (param_1[0x488] != (code)0x0) goto LAB_0360d26c;
LAB_0360d2e4:
      param_1[0x4b4] = (code)0xff;
      uVar42 = 0;
      if (param_1[0x489] != (code)0x0) {
        uVar42 = 0x186;
      }
    }
    *(ushort *)(param_1 + 0x500) = uVar42;
    if ((param_1[0x488] == (code)0x0) || (param_1[0x4aa] != (code)0x0)) {
      param_1[0x4b5] = (code)0x0;
      if (param_1[0x489] != (code)0x0) {
        sVar17 = 0x186;
        param_1[0x4bd] = (code)0x0;
        goto LAB_0360d508;
      }
LAB_0360d448:
      *(undefined2 *)(param_1 + 0x500) = 0;
      if (param_1[0x488] == (code)0x0) goto LAB_0360d58c;
LAB_0360d514:
      if (param_1[0x4aa] != (code)0x0) goto LAB_0360d58c;
      if (param_1[0x4c1] == (code)0x0) {
        param_1[((ulong)((byte)param_1[0x4ac] >> 1) & 0xf) + 0x4ad] = (code)0xff;
      }
      if (param_1[0x489] != (code)0x0) {
        uVar21 = 4;
        if (param_1[0x4bf] == (code)0x0) {
          uVar21 = ((uint)(byte)param_1[0x4ac] << 2 ^ 0xffffffff) & 4;
        }
        if (param_1[0x4be] == (code)0x0) {
          sVar17 = 0x186;
        }
        else {
          sVar17 = (short)(((byte)param_1[0x4ab] >> (ulong)uVar21 & 0xf) >>
                          (ulong)(0x2104U >> (ulong)(((byte)param_1[0x4be] & 7) << 2) & 7)) * -0x34
                   + 0x186;
        }
        goto LAB_0360d658;
      }
LAB_0360d5a8:
      *(undefined2 *)(param_1 + 0x500) = 0;
      if (param_1[0x488] == (code)0x0) goto LAB_0360d6d8;
LAB_0360d664:
      if (param_1[0x4aa] != (code)0x0) goto LAB_0360d6d8;
      if (param_1[0x4c1] == (code)0x0) {
        param_1[((ulong)((byte)param_1[0x4ac] >> 1) & 0xf) + 0x4ad] = (code)0x0;
      }
      uVar42 = (ushort)(byte)param_1[0x489];
      if (param_1[0x489] != (code)0x0) {
        uVar21 = 4;
        if (param_1[0x4bf] == (code)0x0) {
          uVar21 = ((uint)(byte)param_1[0x4ac] << 2 ^ 0xffffffff) & 4;
        }
        if (param_1[0x4be] == (code)0x0) {
          uVar42 = 0x186;
        }
        else {
          uVar42 = (short)(((byte)param_1[0x4ab] >> (ulong)uVar21 & 0xf) >>
                          (ulong)(0x2104U >> (ulong)(((byte)param_1[0x4be] & 7) << 2) & 7)) * -0x34
                   + 0x186;
        }
      }
    }
    else {
      if (param_1[0x4c1] == (code)0x0) {
        param_1[((ulong)((byte)param_1[0x4ac] >> 1) & 0xf) + 0x4ad] = (code)0x0;
      }
      if (param_1[0x489] == (code)0x0) goto LAB_0360d448;
      uVar21 = 4;
      if (param_1[0x4bf] == (code)0x0) {
        uVar21 = ((uint)(byte)param_1[0x4ac] << 2 ^ 0xffffffff) & 4;
      }
      if (param_1[0x4be] == (code)0x0) {
        sVar17 = 0x186;
      }
      else {
        sVar17 = (short)(((byte)param_1[0x4ab] >> (ulong)uVar21 & 0xf) >>
                        (ulong)(0x2104U >> (ulong)(((byte)param_1[0x4be] & 7) << 2) & 7)) * -0x34 +
                 0x186;
      }
LAB_0360d508:
      *(short *)(param_1 + 0x500) = sVar17;
      if (param_1[0x488] != (code)0x0) goto LAB_0360d514;
LAB_0360d58c:
      param_1[0x4b6] = (code)0xff;
      if (param_1[0x489] == (code)0x0) goto LAB_0360d5a8;
      sVar17 = 0x186;
      param_1[0x4bd] = (code)0x0;
LAB_0360d658:
      *(short *)(param_1 + 0x500) = sVar17;
      if (param_1[0x488] != (code)0x0) goto LAB_0360d664;
LAB_0360d6d8:
      param_1[0x4b7] = (code)0x0;
      uVar42 = 0;
      if (param_1[0x489] != (code)0x0) {
        uVar42 = 0x186;
      }
    }
    *(ushort *)(param_1 + 0x500) = uVar42;
    if ((param_1[0x488] == (code)0x0) || (param_1[0x4aa] != (code)0x0)) {
      param_1[0x4b8] = (code)0xff;
      if (param_1[0x489] != (code)0x0) {
        sVar17 = 0x186;
        param_1[0x4bd] = (code)0x0;
        goto LAB_0360d8f0;
      }
LAB_0360d840:
      *(undefined2 *)(param_1 + 0x500) = 0;
      if (param_1[0x488] == (code)0x0) goto LAB_0360d970;
LAB_0360d8fc:
      if (param_1[0x4aa] != (code)0x0) goto LAB_0360d970;
      if (param_1[0x4c1] == (code)0x0) {
        param_1[((ulong)((byte)param_1[0x4ac] >> 1) & 0xf) + 0x4ad] = (code)0x0;
      }
      uVar42 = (ushort)(byte)param_1[0x489];
      if (param_1[0x489] != (code)0x0) {
        uVar21 = 4;
        if (param_1[0x4bf] == (code)0x0) {
          uVar21 = ((uint)(byte)param_1[0x4ac] << 2 ^ 0xffffffff) & 4;
        }
        if (param_1[0x4be] == (code)0x0) {
          uVar42 = 0x186;
        }
        else {
          uVar42 = (short)(((byte)param_1[0x4ab] >> (ulong)uVar21 & 0xf) >>
                          (ulong)(0x2104U >> (ulong)(((byte)param_1[0x4be] & 7) << 2) & 7)) * -0x34
                   + 0x186;
        }
      }
    }
    else {
      if (param_1[0x4c1] == (code)0x0) {
        param_1[((ulong)((byte)param_1[0x4ac] >> 1) & 0xf) + 0x4ad] = (code)0xff;
      }
      if (param_1[0x489] == (code)0x0) goto LAB_0360d840;
      uVar21 = 4;
      if (param_1[0x4bf] == (code)0x0) {
        uVar21 = ((uint)(byte)param_1[0x4ac] << 2 ^ 0xffffffff) & 4;
      }
      if (param_1[0x4be] == (code)0x0) {
        sVar17 = 0x186;
      }
      else {
        sVar17 = (short)(((byte)param_1[0x4ab] >> (ulong)uVar21 & 0xf) >>
                        (ulong)(0x2104U >> (ulong)(((byte)param_1[0x4be] & 7) << 2) & 7)) * -0x34 +
                 0x186;
      }
LAB_0360d8f0:
      *(short *)(param_1 + 0x500) = sVar17;
      if (param_1[0x488] != (code)0x0) goto LAB_0360d8fc;
LAB_0360d970:
      param_1[0x4b9] = (code)0x0;
      uVar42 = 0;
      if (param_1[0x489] != (code)0x0) {
        uVar42 = 0x186;
      }
    }
    *(ushort *)(param_1 + 0x500) = uVar42;
    if ((param_1[0x488] == (code)0x0) || (param_1[0x4aa] != (code)0x0)) {
      param_1[0x4ba] = (code)0xff;
      uVar42 = 0;
      if (param_1[0x489] != (code)0x0) {
        uVar42 = 0x186;
      }
    }
    else {
      if (param_1[0x4c1] == (code)0x0) {
        param_1[((ulong)((byte)param_1[0x4ac] >> 1) & 0xf) + 0x4ad] = (code)0xff;
      }
      uVar42 = (ushort)(byte)param_1[0x489];
      if (param_1[0x489] != (code)0x0) {
        uVar21 = 4;
        if (param_1[0x4bf] == (code)0x0) {
          uVar21 = ((uint)(byte)param_1[0x4ac] << 2 ^ 0xffffffff) & 4;
        }
        if (param_1[0x4be] == (code)0x0) {
          uVar42 = 0x186;
        }
        else {
          uVar42 = (short)(((byte)param_1[0x4ab] >> (ulong)uVar21 & 0xf) >>
                          (ulong)(0x2104U >> (ulong)(((byte)param_1[0x4be] & 7) << 2) & 7)) * -0x34
                   + 0x186;
        }
      }
    }
    *(ushort *)(param_1 + 0x500) = uVar42;
    if ((param_1[0x488] == (code)0x0) || (param_1[0x4aa] != (code)0x0)) {
      param_1[0x4bb] = (code)0x0;
      if (param_1[0x489] == (code)0x0) goto LAB_0360dc1c;
      sVar17 = 0x186;
      param_1[0x4bd] = (code)0x0;
LAB_0360dc78:
      *(short *)(param_1 + 0x500) = sVar17;
      if (param_1[0x488] == (code)0x0) goto LAB_0360dd08;
LAB_0360dc84:
      if (param_1[0x4aa] != (code)0x0) goto LAB_0360dd08;
      if (param_1[0x4c1] == (code)0x0) {
        cVar16 = param_1[0x4ac];
        cVar37 = (code)0xff;
LAB_0360dc9c:
        param_1[((ulong)((byte)cVar16 >> 1) & 0xf) + 0x4ad] = cVar37;
      }
LAB_0360dca8:
      cVar16 = param_1[0x489];
joined_r0x0360c014:
      if (cVar16 == (code)0x0) goto LAB_0360dd28;
      uVar21 = 4;
      if (param_1[0x4bf] == (code)0x0) {
        uVar21 = ((uint)(byte)param_1[0x4ac] << 2 ^ 0xffffffff) & 4;
      }
      uVar21 = (byte)param_1[0x4ab] >> (ulong)uVar21 & 0xf;
      param_1[0x4bd] = SUB41(uVar21,0);
      if (param_1[0x4be] == (code)0x0) {
        sVar17 = 0x186;
      }
      else {
        sVar17 = (short)(uVar21 >> (ulong)(0x2104U >> (ulong)(((byte)param_1[0x4be] & 7) << 2) & 7))
                 * -0x34 + 0x186;
      }
    }
    else {
      if (param_1[0x4c1] == (code)0x0) {
        param_1[((ulong)((byte)param_1[0x4ac] >> 1) & 0xf) + 0x4ad] = (code)0x0;
      }
      if (param_1[0x489] != (code)0x0) {
        uVar21 = 4;
        if (param_1[0x4bf] == (code)0x0) {
          uVar21 = ((uint)(byte)param_1[0x4ac] << 2 ^ 0xffffffff) & 4;
        }
        pcVar39 = (code *)(ulong)(byte)param_1[0x4be];
        uVar38 = (byte)param_1[0x4ab] >> (ulong)uVar21 & 0xf;
switchD_03600464_caseD_360dbd8:
        param_1[0x4bd] = SUB41(uVar38,0);
        if ((uint)pcVar39 == 0) {
          sVar17 = 0x186;
        }
        else {
          sVar17 = (short)(uVar38 >> (ulong)(0x2104U >> (ulong)(((uint)pcVar39 & 7) << 2) & 7)) *
                   -0x34 + 0x186;
        }
        goto LAB_0360dc78;
      }
LAB_0360dc1c:
      *(undefined2 *)(param_1 + 0x500) = 0;
      param_1[0x4bd] = (code)0x0;
      if (param_1[0x488] != (code)0x0) goto LAB_0360dc84;
LAB_0360dd08:
      cVar16 = (code)0xff;
LAB_0360dd0c:
      param_1[0x4bc] = cVar16;
      if (param_1[0x489] == (code)0x0) {
LAB_0360dd28:
        *(undefined2 *)(param_1 + 0x500) = 0;
        param_1[0x4bd] = (code)0x0;
        goto LAB_0360dd30;
      }
      sVar17 = 0x186;
      param_1[0x4bd] = (code)0x0;
    }
    *(short *)(param_1 + 0x500) = sVar17;
LAB_0360dd30:
    cVar16 = param_1[0x4f9];
    uVar42 = ((byte)param_1[0x4f8] >> 4 & 7) + 1;
    uVar3 = ((byte)param_1[0x4f8] & 7) + 1;
    *(ushort *)(param_1 + 0x50c) = -((byte)cVar16 & 1) & uVar3;
    uVar21 = (uint)(byte)cVar16;
    *(ushort *)(param_1 + 0x504) = uVar42 & (ushort)((int)((uint)(byte)cVar16 << 0x1b) >> 0x1f);
    *(ushort *)(param_1 + 0x50e) = uVar3 & (ushort)((int)(uVar21 << 0x1e) >> 0x1f);
    *(ushort *)(param_1 + 0x506) = uVar42 & (ushort)((int)(uVar21 << 0x1a) >> 0x1f);
    *(ushort *)(param_1 + 0x508) = uVar42 & (ushort)((int)(uVar21 << 0x19) >> 0x1f);
    *(ushort *)(param_1 + 0x50a) = uVar42 & (ushort)((uint)(int)(char)cVar16 >> 7);
    *(ushort *)(param_1 + 0x510) = uVar3 & (ushort)((int)((uint)(byte)cVar16 << 0x1d) >> 0x1f);
    *(ushort *)(param_1 + 0x512) = uVar3 & (ushort)((int)((uint)(byte)cVar16 << 0x1c) >> 0x1f);
    return pcVar23;
  case (code *)0x360dbd8:
    goto switchD_03600464_caseD_360dbd8;
  case (code *)0x360ef20:
    bVar33 = 0;
    if ((*(uint *)(param_2 + 0x464) != 0 && param_2[0x450] != (code)0x0) &&
        param_2[0x451] != (code)0x0) {
      bVar33 = 2;
    }
    param_2[0x414] = (code)(bVar33 | (byte)param_2[0x414] & 0xfd);
    (**(code **)(*(long *)param_1 + 0x28))(param_1,param_2 + 0x473);
    (**(code **)(*(long *)param_1 + 0x28))(param_1,param_2 + 0x474);
    local_58._0_1_ = param_2[0x475];
    (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_58);
    param_2[0x475] = (code)(local_58._0_1_ != (code)0x0);
    local_58._0_1_ = param_2[0x476];
    (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_58);
    if (*(uint *)(param_1 + 8) == 0) {
      param_2[0x476] = local_58._0_1_;
    }
    if (iVar54 == 0) {
      sVar17 = *(short *)(&DAT_04057c80 + (ulong)(byte)param_2[0x476] * 2);
      *(short *)(param_2 + 0x482) = sVar17;
      uVar42 = (ushort)(byte)param_2[0x451];
      if (((param_2[0x451] != (code)0x0) && (uVar42 = 0x17f, param_2[0x450] != (code)0x0)) &&
         (param_2[0x472] == (code)0x0)) {
        uVar42 = 0x17f;
        if (param_2[0x47f] != (code)0x0) {
          uVar42 = sVar17 + 0x17f;
        }
      }
      *(ushort *)(param_2 + 0x4fe) = uVar42;
    }
    (**(code **)(*(long *)param_1 + 0x28))(param_1,param_2 + 0x477);
    (**(code **)(*(long *)param_1 + 0x28))(param_1,param_2 + 0x478);
    local_58._0_1_ = param_2[0x479];
    (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_58);
    param_2[0x479] = (code)(local_58._0_1_ != (code)0x0);
    (**(code **)(*(long *)param_1 + 0x28))(param_1,param_2 + 0x47a);
    local_58 = (code *)CONCAT71(local_58._1_7_,param_2[0x47b]);
    (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_58);
    pcVar52 = param_2 + 0x480;
    param_2[0x47b] = (code)(local_58._0_1_ != (code)0x0);
    if (*(uint *)(param_1 + 8) == 2) {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,pcVar52,2);
    }
    else if (*(uint *)(param_1 + 8) == 1) {
      uVar3 = *(ushort *)pcVar52;
      uVar42 = uVar3 >> 8 | uVar3 << 8;
      if (*(uint *)(param_1 + 0x10) != 0xff00) {
        uVar42 = uVar3;
      }
      local_58 = (code *)CONCAT62(local_58._2_6_,uVar42);
      (**(code **)(*(long *)param_1 + 0x30))(param_1,&local_58);
    }
    else {
      local_58 = (code *)((ulong)local_58._2_6_ << 0x10);
      (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_58,2);
      uVar42 = (ushort)local_58 >> 8 | (ushort)local_58 << 8;
      if (*(uint *)(param_1 + 0x10) != 0xff00) {
        uVar42 = (ushort)local_58;
      }
      *(ushort *)pcVar52 = uVar42;
    }
    (**(code **)(*(long *)param_1 + 0x28))(param_1,param_2 + 0x47c);
    (**(code **)(*(long *)param_1 + 0x28))(param_1,param_2 + 0x47d);
    local_58._0_1_ = param_2[0x484];
    (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_58);
    param_2[0x484] = (code)(local_58._0_1_ != (code)0x0);
    if (iVar54 == 0) {
      uVar38 = 0x7ee18180 >> (ulong)(((byte)param_2[0x47d] & 3) << 3);
      param_2[0x47e] = SUB41(uVar38,0);
      uVar21 = 0;
      if (local_58._0_1_ == (code)0x0) {
        uVar21 = (uVar38 & 0xff) >> (ulong)((byte)param_2[0x47c] & 0x1f) & 1;
      }
      param_2[0x47f] = SUB41(uVar21,0);
      uVar42 = (ushort)(byte)param_2[0x451];
      if (((param_2[0x451] != (code)0x0) && (uVar42 = 0x17f, param_2[0x450] != (code)0x0)) &&
         (param_2[0x472] == (code)0x0)) {
        uVar42 = 0x17f;
        if (uVar21 != 0) {
          uVar42 = *(short *)(param_2 + 0x482) + 0x17f;
        }
      }
      *(ushort *)(param_2 + 0x4fe) = uVar42;
    }
    pcVar55 = (code *)(ulong)*(uint *)(param_1 + 8);
    local_58 = (code *)CONCAT71(local_58._1_7_,param_2[0x488]);
    (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_58);
    param_2[0x488] = (code)(local_58._0_1_ != (code)0x0);
    if (param_1[0xc] != (code)0x0) {
      local_58 = (code *)CONCAT71(local_58._1_7_,4);
      (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_58,1);
    }
    pcVar52 = param_2 + 0x49c;
    if (*(uint *)(param_1 + 8) == 2) {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,pcVar52,4);
      cVar16 = param_1[0xc];
    }
    else if (*(uint *)(param_1 + 8) == 1) {
      uVar38 = *(uint *)pcVar52;
      uVar21 = (uVar38 & 0xff00ff00) >> 8 | (uVar38 & 0xff00ff) << 8;
      uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
      if (*(uint *)(param_1 + 0x10) != 0xff00) {
        uVar21 = uVar38;
      }
      local_58 = (code *)CONCAT44(local_58._4_4_,uVar21);
      (**(code **)(*(long *)param_1 + 0x38))(param_1,&local_58);
      cVar16 = param_1[0xc];
    }
    else {
      local_58 = (code *)((ulong)local_58._4_4_ << 0x20);
      (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_58,4);
      uVar21 = ((uint)local_58 & 0xff00ff00) >> 8 | ((uint)local_58 & 0xff00ff) << 8;
      uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
      if (*(uint *)(param_1 + 0x10) != 0xff00) {
        uVar21 = (uint)local_58;
      }
      *(uint *)pcVar52 = uVar21;
      cVar16 = param_1[0xc];
    }
    if (cVar16 != (code)0x0) {
      local_58._1_7_ = (undefined7)((ulong)local_58 >> 8);
      local_58 = (code *)CONCAT71(local_58._1_7_,4);
      (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_58,1);
    }
    pcVar52 = param_2 + 0x4a0;
    if (*(uint *)(param_1 + 8) == 2) {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,pcVar52,4);
      cVar16 = param_1[0xc];
    }
    else if (*(uint *)(param_1 + 8) == 1) {
      uVar38 = *(uint *)pcVar52;
      uVar21 = (uVar38 & 0xff00ff00) >> 8 | (uVar38 & 0xff00ff) << 8;
      uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
      if (*(uint *)(param_1 + 0x10) != 0xff00) {
        uVar21 = uVar38;
      }
      local_58 = (code *)CONCAT44(local_58._4_4_,uVar21);
      (**(code **)(*(long *)param_1 + 0x38))(param_1,&local_58);
      cVar16 = param_1[0xc];
    }
    else {
      local_58 = (code *)((ulong)local_58._4_4_ << 0x20);
      (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_58,4);
      uVar21 = ((uint)local_58 & 0xff00ff00) >> 8 | ((uint)local_58 & 0xff00ff) << 8;
      uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
      if (*(uint *)(param_1 + 0x10) != 0xff00) {
        uVar21 = (uint)local_58;
      }
      *(uint *)pcVar52 = uVar21;
      cVar16 = param_1[0xc];
    }
    if (cVar16 != (code)0x0) {
      local_58._1_7_ = (undefined7)((ulong)local_58 >> 8);
      local_58 = (code *)CONCAT71(local_58._1_7_,8);
      (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_58,1);
    }
    pcVar52 = param_2 + 0x490;
    if (*(uint *)(param_1 + 8) == 2) {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,pcVar52,8);
    }
    else if (*(uint *)(param_1 + 8) == 1) {
      uVar46 = *(ulong *)pcVar52;
      uVar22 = (uVar46 & 0xff00ff00ff00ff00) >> 8 | (uVar46 & 0xff00ff00ff00ff) << 8;
      uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
      local_58 = (code *)(uVar22 >> 0x20 | uVar22 << 0x20);
      if (*(uint *)(param_1 + 0x10) != 0xff00) {
        local_58 = (code *)uVar46;
      }
      (**(code **)(*(long *)param_1 + 0x40))(param_1,&local_58);
    }
    else {
      local_58 = (code *)0x0;
      (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_58,8);
      uVar22 = ((ulong)local_58 & 0xff00ff00ff00ff00) >> 8 |
               ((ulong)local_58 & 0xff00ff00ff00ff) << 8;
      uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
      uVar22 = uVar22 >> 0x20 | uVar22 << 0x20;
      if (*(uint *)(param_1 + 0x10) != 0xff00) {
        uVar22 = (ulong)local_58;
      }
      *(ulong *)pcVar52 = uVar22;
    }
    local_58 = (code *)CONCAT71(local_58._1_7_,param_2[0x4a4]);
    (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_58);
    pcVar52 = param_2 + 0x4a6;
    param_2[0x4a4] = (code)(local_58._0_1_ != (code)0x0);
    if (*(uint *)(param_1 + 8) == 2) {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,pcVar52,2);
    }
    else if (*(uint *)(param_1 + 8) == 1) {
      uVar3 = *(ushort *)pcVar52;
      uVar42 = uVar3 >> 8 | uVar3 << 8;
      if (*(uint *)(param_1 + 0x10) != 0xff00) {
        uVar42 = uVar3;
      }
      local_58 = (code *)CONCAT62(local_58._2_6_,uVar42);
      (**(code **)(*(long *)param_1 + 0x30))(param_1,&local_58);
    }
    else {
      local_58 = (code *)((ulong)local_58._2_6_ << 0x10);
      (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_58,2);
      uVar42 = (ushort)local_58 >> 8 | (ushort)local_58 << 8;
      if (*(uint *)(param_1 + 0x10) != 0xff00) {
        uVar42 = (ushort)local_58;
      }
      *(ushort *)pcVar52 = uVar42;
    }
    pcVar52 = param_2 + 0x4a8;
    if (*(uint *)(param_1 + 8) == 2) {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,pcVar52,2);
    }
    else if (*(uint *)(param_1 + 8) == 1) {
      uVar3 = *(ushort *)pcVar52;
      uVar42 = uVar3 >> 8 | uVar3 << 8;
      if (*(uint *)(param_1 + 0x10) != 0xff00) {
        uVar42 = uVar3;
      }
      local_58 = (code *)CONCAT62(local_58._2_6_,uVar42);
      (**(code **)(*(long *)param_1 + 0x30))(param_1,&local_58);
    }
    else {
      local_58 = (code *)((ulong)local_58._2_6_ << 0x10);
      (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_58,2);
      uVar42 = (ushort)local_58 >> 8 | (ushort)local_58 << 8;
      if (*(uint *)(param_1 + 0x10) != 0xff00) {
        uVar42 = (ushort)local_58;
      }
      *(ushort *)pcVar52 = uVar42;
    }
    local_58._0_1_ = param_2[0x489];
    (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_58);
    param_2[0x489] = (code)(local_58._0_1_ != (code)0x0);
    (**(code **)(*(long *)param_1 + 0x28))(param_1,param_2 + 0x498);
    local_58._0_1_ = param_2[0x4aa];
    (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_58);
    param_2[0x4aa] = (code)(local_58._0_1_ != (code)0x0);
    if (*(uint *)(param_1 + 8) == 0) {
      bVar33 = 0;
      if ((*(uint *)(param_2 + 0x49c) != 0 && param_2[0x488] != (code)0x0) &&
          param_2[0x489] != (code)0x0) {
        bVar33 = 4;
      }
      param_2[0x414] = (code)(bVar33 | (byte)param_2[0x414] & 0xfb);
    }
    (**(code **)(*(long *)param_1 + 0x28))(param_1,param_2 + 0x4be);
    (**(code **)(*(long *)param_1 + 0x28))(param_1,param_2 + 0x4ab);
    pcVar53 = param_2 + 0x4ac;
    (**(code **)(*(long *)param_1 + 0x28))(param_1,pcVar53);
    (**(code **)(*(long *)param_1 + 0x20))(param_1,param_2 + 0x4ad,0x10);
    local_58._0_1_ = param_2[0x4c0];
    (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_58);
    param_2[0x4c0] = (code)(local_58._0_1_ != (code)0x0);
    local_58._0_1_ = param_2[0x4c1];
    (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_58);
    param_2[0x4c1] = (code)(local_58._0_1_ != (code)0x0);
    local_58 = (code *)CONCAT71(local_58._1_7_,param_2[0x4bf]);
    (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_58);
    uVar38 = (uint)(byte)local_58._0_1_;
    pcVar39 = (code *)(ulong)(local_58._0_1_ != (code)0x0);
  case (code *)0x360f7b8:
    param_2[0x4bf] = SUB81(pcVar39,0);
    if ((int)pcVar55 == 0) {
      if (param_2[0x489] == (code)0x0) {
        *(undefined2 *)(param_2 + 0x500) = 0;
        param_2[0x4bd] = (code)0x0;
      }
      else if ((param_2[0x488] == (code)0x0) || (param_2[0x4aa] != (code)0x0)) {
        param_2[0x4bd] = (code)0x0;
        *(undefined2 *)(param_2 + 0x500) = 0x186;
      }
      else {
        uVar21 = 4;
        if (uVar38 == 0) {
          uVar21 = ((uint)(byte)*pcVar53 << 2 ^ 0xffffffff) & 4;
        }
        uVar21 = (byte)param_2[0x4ab] >> (ulong)uVar21 & 0xf;
        param_2[0x4bd] = SUB41(uVar21,0);
        if (param_2[0x4be] == (code)0x0) {
          sVar17 = 0x186;
        }
        else {
          sVar17 = (short)(uVar21 >>
                          (ulong)(0x2104U >> (ulong)(((byte)param_2[0x4be] & 7) << 2) & 7)) * -0x34
                   + 0x186;
        }
        *(short *)(param_2 + 0x500) = sVar17;
      }
    }
    local_58 = (code *)CONCAT71(local_58._1_7_,param_2[0x4c8]);
    (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_58);
    param_2[0x4c8] = (code)(local_58._0_1_ != (code)0x0);
    if (param_1[0xc] != (code)0x0) {
      local_58 = (code *)CONCAT71(local_58._1_7_,4);
      (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_58,1);
    }
    pcVar52 = param_2 + 0x4dc;
    if (*(uint *)(param_1 + 8) == 2) {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,pcVar52,4);
      cVar16 = param_1[0xc];
    }
    else if (*(uint *)(param_1 + 8) == 1) {
      uVar38 = *(uint *)pcVar52;
      uVar21 = (uVar38 & 0xff00ff00) >> 8 | (uVar38 & 0xff00ff) << 8;
      uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
      if (*(uint *)(param_1 + 0x10) != 0xff00) {
        uVar21 = uVar38;
      }
      local_58 = (code *)CONCAT44(local_58._4_4_,uVar21);
      (**(code **)(*(long *)param_1 + 0x38))(param_1,&local_58);
      cVar16 = param_1[0xc];
    }
    else {
      local_58 = (code *)((ulong)local_58._4_4_ << 0x20);
      (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_58,4);
      uVar21 = ((uint)local_58 & 0xff00ff00) >> 8 | ((uint)local_58 & 0xff00ff) << 8;
      uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
      if (*(uint *)(param_1 + 0x10) != 0xff00) {
        uVar21 = (uint)local_58;
      }
      *(uint *)pcVar52 = uVar21;
      cVar16 = param_1[0xc];
    }
    if (cVar16 != (code)0x0) {
      local_58._1_7_ = (undefined7)((ulong)local_58 >> 8);
      local_58 = (code *)CONCAT71(local_58._1_7_,4);
      (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_58,1);
    }
    pcVar52 = param_2 + 0x4e0;
    if (*(uint *)(param_1 + 8) == 2) {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,pcVar52,4);
      cVar16 = param_1[0xc];
    }
    else if (*(uint *)(param_1 + 8) == 1) {
      uVar38 = *(uint *)pcVar52;
      uVar21 = (uVar38 & 0xff00ff00) >> 8 | (uVar38 & 0xff00ff) << 8;
      uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
      if (*(uint *)(param_1 + 0x10) != 0xff00) {
        uVar21 = uVar38;
      }
      local_58 = (code *)CONCAT44(local_58._4_4_,uVar21);
      (**(code **)(*(long *)param_1 + 0x38))(param_1,&local_58);
      cVar16 = param_1[0xc];
    }
    else {
      local_58 = (code *)((ulong)local_58._4_4_ << 0x20);
      (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_58,4);
      uVar21 = ((uint)local_58 & 0xff00ff00) >> 8 | ((uint)local_58 & 0xff00ff) << 8;
      uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
      if (*(uint *)(param_1 + 0x10) != 0xff00) {
        uVar21 = (uint)local_58;
      }
      *(uint *)pcVar52 = uVar21;
      cVar16 = param_1[0xc];
    }
    if (cVar16 != (code)0x0) {
      local_58._1_7_ = (undefined7)((ulong)local_58 >> 8);
      local_58 = (code *)CONCAT71(local_58._1_7_,8);
      (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_58,1);
    }
    pcVar52 = param_2 + 0x4d0;
    if (*(uint *)(param_1 + 8) == 2) {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,pcVar52,8);
    }
    else if (*(uint *)(param_1 + 8) == 1) {
      uVar46 = *(ulong *)pcVar52;
      uVar22 = (uVar46 & 0xff00ff00ff00ff00) >> 8 | (uVar46 & 0xff00ff00ff00ff) << 8;
      uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
      local_58 = (code *)(uVar22 >> 0x20 | uVar22 << 0x20);
      if (*(uint *)(param_1 + 0x10) != 0xff00) {
        local_58 = (code *)uVar46;
      }
      (**(code **)(*(long *)param_1 + 0x40))(param_1,&local_58);
    }
    else {
      local_58 = (code *)0x0;
      (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_58,8);
      uVar22 = ((ulong)local_58 & 0xff00ff00ff00ff00) >> 8 |
               ((ulong)local_58 & 0xff00ff00ff00ff) << 8;
      uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
      uVar22 = uVar22 >> 0x20 | uVar22 << 0x20;
      if (*(uint *)(param_1 + 0x10) != 0xff00) {
        uVar22 = (ulong)local_58;
      }
      *(ulong *)pcVar52 = uVar22;
    }
    local_58 = (code *)CONCAT71(local_58._1_7_,param_2[0x4e4]);
    (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_58);
    pcVar52 = param_2 + 0x4e6;
    param_2[0x4e4] = (code)(local_58._0_1_ != (code)0x0);
    if (*(uint *)(param_1 + 8) == 2) {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,pcVar52,2);
    }
    else if (*(uint *)(param_1 + 8) == 1) {
      uVar3 = *(ushort *)pcVar52;
      uVar42 = uVar3 >> 8 | uVar3 << 8;
      if (*(uint *)(param_1 + 0x10) != 0xff00) {
        uVar42 = uVar3;
      }
      local_58 = (code *)CONCAT62(local_58._2_6_,uVar42);
      (**(code **)(*(long *)param_1 + 0x30))(param_1,&local_58);
    }
    else {
      local_58 = (code *)((ulong)local_58._2_6_ << 0x10);
      (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_58,2);
      uVar42 = (ushort)local_58 >> 8 | (ushort)local_58 << 8;
      if (*(uint *)(param_1 + 0x10) != 0xff00) {
        uVar42 = (ushort)local_58;
      }
      *(ushort *)pcVar52 = uVar42;
    }
    pcVar52 = param_2 + 0x4e8;
    if (*(uint *)(param_1 + 8) == 2) {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,pcVar52,2);
    }
    else if (*(uint *)(param_1 + 8) == 1) {
      pcVar39 = (code *)(ulong)*(ushort *)pcVar52;
switchD_03600464_caseD_360fbb8:
      uVar42 = (ushort)((ulong)pcVar39 >> 8) & 0xff | (ushort)(((uint)pcVar39 & 0xff00ff) << 8);
      if (*(uint *)(param_1 + 0x10) != 0xff00) {
        uVar42 = (ushort)pcVar39;
      }
      local_58 = (code *)CONCAT62(local_58._2_6_,uVar42);
      (**(code **)(*(long *)param_1 + 0x30))(param_1,&local_58);
    }
    else {
      local_58 = (code *)((ulong)local_58 & 0xffffffffffff0000);
      (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_58,2);
      uVar42 = (ushort)local_58 >> 8 | (ushort)local_58 << 8;
      if (*(uint *)(param_1 + 0x10) != 0xff00) {
        uVar42 = (ushort)local_58;
      }
      *(ushort *)pcVar52 = uVar42;
    }
    uVar38 = (uint)(byte)param_2[0x4c9];
    pcVar28 = (code *)&local_58;
    pcVar23 = param_1;
switchD_03600464_caseD_360fc50:
    local_58._0_1_ = SUB41(uVar38,0);
    (**(code **)(*(long *)param_1 + 0x28))(pcVar23,pcVar28);
    param_2[0x4c9] = (code)(local_58._0_1_ != (code)0x0);
    (**(code **)(*(long *)param_1 + 0x28))(param_1,param_2 + 0x4d8);
    local_58._0_1_ = param_2[0x4ea];
    (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_58);
    param_2[0x4ea] = (code)(local_58._0_1_ != (code)0x0);
    if (*(uint *)(param_1 + 8) == 0) {
      bVar33 = 0;
      if ((*(uint *)(param_2 + 0x4dc) != 0 && param_2[0x4c8] != (code)0x0) &&
          param_2[0x4c9] != (code)0x0) {
        bVar33 = 8;
      }
      param_2[0x414] = (code)(bVar33 | (byte)param_2[0x414] & 0xf7);
    }
    (**(code **)(*(long *)param_1 + 0x28))(param_1,param_2 + 0x4eb);
    (**(code **)(*(long *)param_1 + 0x28))(param_1,param_2 + 0x4ec);
    pcVar28 = (code *)&local_58;
    local_58 = (code *)CONCAT71(local_58._1_7_,param_2[0x4ed]);
    pcVar35 = *(code **)param_1;
    pcVar23 = param_1;
switchD_03600464_caseD_360fd24:
    (**(code **)(pcVar35 + 0x28))(pcVar23,pcVar28);
    param_2[0x4ed] = (code)(local_58._0_1_ != (code)0x0);
    local_58 = (code *)CONCAT71(local_58._1_7_,param_2[0x4ee]);
    (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_58);
    uVar21 = *(uint *)(param_1 + 8);
    if (uVar21 == 0) {
      param_2[0x4ee] = local_58._0_1_;
      uVar21 = *(uint *)(param_1 + 8);
    }
    pcVar52 = param_2 + 0x4f0;
    if (uVar21 == 2) {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,pcVar52,2);
    }
    else if (uVar21 == 1) {
      uVar3 = *(ushort *)pcVar52;
      uVar42 = uVar3 >> 8 | uVar3 << 8;
      if (*(uint *)(param_1 + 0x10) != 0xff00) {
        uVar42 = uVar3;
      }
      local_58 = (code *)CONCAT62(local_58._2_6_,uVar42);
      (**(code **)(*(long *)param_1 + 0x30))(param_1,&local_58);
    }
    else {
      local_58 = (code *)((ulong)local_58._2_6_ << 0x10);
      (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_58,2);
      uVar42 = (ushort)local_58 >> 8 | (ushort)local_58 << 8;
      if (*(uint *)(param_1 + 0x10) != 0xff00) {
        uVar42 = (ushort)local_58;
      }
      *(ushort *)pcVar52 = uVar42;
    }
    (**(code **)(*(long *)param_1 + 0x28))(param_1,param_2 + 0x4f2);
    local_58 = (code *)CONCAT71(local_58._1_7_,param_2[0x4f3]);
    (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_58);
    param_2[0x4f3] = (code)(local_58._0_1_ != (code)0x0);
    (**(code **)(*(long *)param_1 + 0x28))(param_1,param_2 + 0x4f4);
    (**(code **)(*(long *)param_1 + 0x28))(param_1,param_2 + 0x4ef);
    if (*(uint *)(param_1 + 8) == 0) {
      uVar42 = (ushort)(byte)param_2[0x4c9];
      if (((param_2[0x4c9] != (code)0x0) && (uVar42 = 0x17d, param_2[0x4c8] != (code)0x0)) &&
         (param_2[0x4ea] == (code)0x0)) {
        sVar17 = *(short *)(&DAT_040579c0 + (ulong)(byte)param_2[0x4ee] * 2);
        *(short *)(param_2 + 0x4f6) = sVar17;
        uVar42 = 0x17d;
        if ((*(ushort *)(param_2 + 0x4f0) & 1) != 0) {
          uVar42 = sVar17 + 0x17d;
        }
      }
      *(ushort *)(param_2 + 0x502) = uVar42;
    }
    (**(code **)(*(long *)param_1 + 0x28))(param_1,param_2 + 0x4f8);
    (**(code **)(*(long *)param_1 + 0x28))(param_1,param_2 + 0x4f9);
    (**(code **)(*(long *)param_1 + 0x28))(param_1,param_2 + 0x4fa);
    if (uVar56 == 0) {
      cVar16 = param_2[0x4f9];
      uVar21 = ((byte)param_2[0x4f8] >> 4 & 7) + 1;
      uVar38 = ((byte)param_2[0x4f8] & 7) + 1;
      uVar3 = (ushort)uVar21;
      uVar42 = (ushort)uVar38;
      *(ushort *)(param_2 + 0x50c) = -((byte)cVar16 & 1) & uVar42;
      uVar30 = (uint)(byte)cVar16;
      *(ushort *)(param_2 + 0x504) = uVar3 & (ushort)((int)((uint)(byte)cVar16 << 0x1b) >> 0x1f);
      *(ushort *)(param_2 + 0x50e) = uVar42 & (ushort)((int)(uVar30 << 0x1e) >> 0x1f);
      *(ushort *)(param_2 + 0x506) = uVar3 & (ushort)((int)(uVar30 << 0x1a) >> 0x1f);
      *(ushort *)(param_2 + 0x508) = uVar3 & (ushort)((int)(uVar30 << 0x19) >> 0x1f);
      pcVar44 = (code *)(ulong)(uVar21 & (uint)(int)(char)cVar16 >> 7);
      pcVar39 = (code *)(ulong)((uint)(byte)cVar16 << 0x1c);
      uVar42 = uVar42 & (ushort)((int)((uint)(byte)cVar16 << 0x1d) >> 0x1f);
switchD_03600464_caseD_360ff6c:
      *(short *)(param_2 + 0x50a) = (short)pcVar44;
      *(ushort *)(param_2 + 0x510) = uVar42;
      *(ushort *)(param_2 + 0x512) = (ushort)uVar38 & (short)((ulong)pcVar39 >> 0x10) >> 0xf;
    }
    pcVar52 = param_2 + 0x106e;
    if (*(uint *)(param_1 + 8) == 2) {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,pcVar52,2);
    }
    else if (*(uint *)(param_1 + 8) == 1) {
      uVar3 = *(ushort *)pcVar52;
      uVar42 = uVar3 >> 8 | uVar3 << 8;
      if (*(uint *)(param_1 + 0x10) != 0xff00) {
        uVar42 = uVar3;
      }
      local_58 = (code *)CONCAT62(local_58._2_6_,uVar42);
      (**(code **)(*(long *)param_1 + 0x30))(param_1,&local_58);
    }
    else {
      local_58 = (code *)((ulong)local_58._2_6_ << 0x10);
      (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_58,2);
      uVar42 = (ushort)local_58 >> 8 | (ushort)local_58 << 8;
      if (*(uint *)(param_1 + 0x10) != 0xff00) {
        uVar42 = (ushort)local_58;
      }
      *(ushort *)pcVar52 = uVar42;
    }
    FUN_0360ddc0(param_2,1);
    if (param_1[0xc] != (code)0x0) {
      local_58 = (code *)CONCAT71(local_58._1_7_,4);
      (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_58,1);
    }
    pcVar52 = param_2 + 0x540;
    if (*(uint *)(param_1 + 8) == 2) {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,pcVar52,4);
      cVar16 = param_1[0xc];
    }
    else if (*(uint *)(param_1 + 8) == 1) {
      uVar38 = *(uint *)pcVar52;
      uVar21 = (uVar38 & 0xff00ff00) >> 8 | (uVar38 & 0xff00ff) << 8;
      uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
      if (*(uint *)(param_1 + 0x10) != 0xff00) {
        uVar21 = uVar38;
      }
      local_58 = (code *)CONCAT44(local_58._4_4_,uVar21);
      (**(code **)(*(long *)param_1 + 0x38))(param_1,&local_58);
      cVar16 = param_1[0xc];
    }
    else {
      local_58 = (code *)((ulong)local_58._4_4_ << 0x20);
      (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_58,4);
      uVar21 = ((uint)local_58 & 0xff00ff00) >> 8 | ((uint)local_58 & 0xff00ff) << 8;
      uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
      if (*(uint *)(param_1 + 0x10) != 0xff00) {
        uVar21 = (uint)local_58;
      }
      *(uint *)pcVar52 = uVar21;
      cVar16 = param_1[0xc];
    }
    if (cVar16 != (code)0x0) {
      local_58._1_7_ = (undefined7)((ulong)local_58 >> 8);
      local_58 = (code *)CONCAT71(local_58._1_7_,4);
      (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_58,1);
    }
    pcVar52 = param_2 + 0x544;
    if (*(uint *)(param_1 + 8) == 2) {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,pcVar52,4);
    }
    else if (*(uint *)(param_1 + 8) == 1) {
      uVar38 = *(uint *)pcVar52;
      uVar21 = (uVar38 & 0xff00ff00) >> 8 | (uVar38 & 0xff00ff) << 8;
      uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
      if (*(uint *)(param_1 + 0x10) != 0xff00) {
        uVar21 = uVar38;
      }
      local_58 = (code *)CONCAT44(local_58._4_4_,uVar21);
      (**(code **)(*(long *)param_1 + 0x38))(param_1,&local_58);
    }
    else {
      local_58 = (code *)((ulong)local_58._4_4_ << 0x20);
      (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_58,4);
      uVar21 = ((uint)local_58 & 0xff00ff00) >> 8 | ((uint)local_58 & 0xff00ff) << 8;
      uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
      if (*(uint *)(param_1 + 0x10) != 0xff00) {
        uVar21 = (uint)local_58;
      }
      *(uint *)pcVar52 = uVar21;
    }
    uVar21 = *(uint *)(param_2 + 0x514);
    pcVar52 = (code *)(ulong)uVar21;
    local_68 = pcVar52;
    if (param_1[0xc] != (code)0x0) {
      local_58 = (code *)CONCAT71(local_58._1_7_,8);
      (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_58,1);
    }
    if (*(uint *)(param_1 + 8) == 2) {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_68,8);
      *(uint *)(param_2 + 0x514) = (uint)local_68;
    }
    else if (*(uint *)(param_1 + 8) == 1) {
      uVar22 = ((ulong)pcVar52 & 0xff00ff00ff00ff00) >> 8 | ((ulong)pcVar52 & 0xff00ff00ff00ff) << 8
      ;
      local_58 = (code *)((uVar22 >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10) << 0x20);
      if (*(uint *)(param_1 + 0x10) != 0xff00) {
        local_58 = pcVar52;
      }
      (**(code **)(*(long *)param_1 + 0x40))(param_1,&local_58);
      *(uint *)(param_2 + 0x514) = uVar21;
    }
    else {
      local_58 = (code *)0x0;
      (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_58,8);
      uVar22 = ((ulong)local_58 & 0xff00ff00ff00ff00) >> 8 |
               ((ulong)local_58 & 0xff00ff00ff00ff) << 8;
      uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
      local_68 = (code *)(uVar22 >> 0x20 | uVar22 << 0x20);
      if (*(uint *)(param_1 + 0x10) != 0xff00) {
        local_68 = local_58;
      }
      *(uint *)(param_2 + 0x514) = (uint)local_68;
    }
    if (uVar56 == 0) {
      nn::os::LockMutex((MutexType *)(param_2 + 0x14c0));
      *(ulong *)(param_2 + 0x14a0) = (ulong)(*(uint *)(param_2 + 0x514) >> 1);
      nn::os::UnlockMutex((MutexType *)(param_2 + 0x14c0));
    }
    uVar21 = *(uint *)(param_2 + 0x530);
    local_70 = (long *)CONCAT44(uVar21,(undefined4)local_70);
    if (param_1[0xc] != (code)0x0) {
      local_58 = (code *)CONCAT71(local_58._1_7_,4);
      (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_58,1);
    }
    if (*(uint *)(param_1 + 8) == 2) {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)&local_70 + 4,4);
    }
    else if (*(uint *)(param_1 + 8) == 1) {
      uVar38 = (uVar21 & 0xff00ff00) >> 8 | (uVar21 & 0xff00ff) << 8;
      uVar38 = uVar38 >> 0x10 | uVar38 << 0x10;
      if (*(uint *)(param_1 + 0x10) != 0xff00) {
        uVar38 = uVar21;
      }
      local_58 = (code *)CONCAT44(local_58._4_4_,uVar38);
      (**(code **)(*(long *)param_1 + 0x38))(param_1,&local_58);
    }
    else {
      local_58 = (code *)((ulong)local_58._4_4_ << 0x20);
      (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_58,4);
      uVar21 = ((uint)local_58 & 0xff00ff00) >> 8 | ((uint)local_58 & 0xff00ff) << 8;
      uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
      if (*(uint *)(param_1 + 0x10) != 0xff00) {
        uVar21 = (uint)local_58;
      }
      local_70 = (long *)CONCAT44(uVar21,(undefined4)local_70);
    }
    if (uVar56 == 0) {
      uVar22 = (ulong)local_70 >> 0x20;
      if (*(ulong *)(param_2 + 0x538) < uVar22) {
        uVar46 = uVar22;
        if (uVar22 < 5) {
          uVar46 = 4;
        }
        iVar19 = FUN_0360a5c0(param_2 + 0x518,uVar46);
        if (iVar19 != 0) {
          FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
          goto LAB_036103f8;
        }
      }
      *(ulong *)(param_2 + 0x530) = uVar22;
    }
LAB_036103f8:
    if (local_70._4_4_ != 0) {
      FUN_03611b50(param_1,*(long *)(param_2 + 0x528),
                   *(long *)(param_2 + 0x528) + (ulong)local_70._4_4_ * 2);
    }
    uVar22 = FUN_04002180(param_1,4,0,(long)&local_58 + 4);
    if ((uVar22 & 1) == 0) goto LAB_0361083c;
    uVar21 = *(uint *)(param_1 + 8);
    pcVar55 = (code *)(ulong)uVar21;
    uVar38 = uVar21;
    if (param_1[0xc] != (code)0x0) {
      local_58 = (code *)CONCAT71(local_58._1_7_,4);
      (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_58,1);
      uVar38 = *(uint *)(param_1 + 8);
    }
    pcVar52 = param_2 + 0x950;
    if (uVar38 == 2) {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,pcVar52,4);
    }
    else if (uVar38 == 1) {
      uVar30 = *(uint *)pcVar52;
      uVar38 = (uVar30 & 0xff00ff00) >> 8 | (uVar30 & 0xff00ff) << 8;
      uVar38 = uVar38 >> 0x10 | uVar38 << 0x10;
      if (*(uint *)(param_1 + 0x10) != 0xff00) {
        uVar38 = uVar30;
      }
      local_58 = (code *)CONCAT44(local_58._4_4_,uVar38);
      (**(code **)(*(long *)param_1 + 0x38))(param_1,&local_58);
    }
    else {
      local_58 = (code *)((ulong)local_58._4_4_ << 0x20);
      (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_58,4);
      uVar38 = ((uint)local_58 & 0xff00ff00) >> 8 | ((uint)local_58 & 0xff00ff) << 8;
      uVar38 = uVar38 >> 0x10 | uVar38 << 0x10;
      if (*(uint *)(param_1 + 0x10) != 0xff00) {
        uVar38 = (uint)local_58;
      }
      *(uint *)pcVar52 = uVar38;
    }
    uVar38 = local_58._4_4_;
    plVar26 = (long *)(ulong)local_58._4_4_;
    if (local_58._4_4_ < 3) {
      pcVar53 = (code *)&local_58;
      FUN_03611e60(param_1,&local_58,&uStack00000000000000a8);
      bVar14 = uVar38 == 2;
      *(short *)(param_2 + 0x550) = (short)local_58;
      *(short *)(param_2 + 0x554) = (short)((ulong)local_58 >> 0x20);
      *(short *)(param_2 + 0x558) = (short)unaff_x29;
      *(short *)(param_2 + 0x55c) = (short)((ulong)unaff_x29 >> 0x20);
      *(short *)(param_2 + 0x560) = (short)unaff_x30;
      *(short *)(param_2 + 0x564) = (short)((ulong)unaff_x30 >> 0x20);
      *(short *)(param_2 + 0x568) = (short)unaff_x26;
      *(short *)(param_2 + 0x56c) = (short)((ulong)unaff_x26 >> 0x20);
      *(short *)(param_2 + 0x570) = (short)unaff_x25;
      *(short *)(param_2 + 0x574) = (short)((ulong)unaff_x25 >> 0x20);
      *(short *)(param_2 + 0x578) = (short)unaff_x24;
      *(short *)(param_2 + 0x57c) = (short)((ulong)unaff_x24 >> 0x20);
      *(short *)(param_2 + 0x580) = (short)unaff_x23;
      *(short *)(param_2 + 0x584) = (short)((ulong)unaff_x23 >> 0x20);
      *(short *)(param_2 + 0x588) = (short)unaff_x22;
      *(short *)(param_2 + 0x58c) = (short)((ulong)unaff_x22 >> 0x20);
      *(short *)(param_2 + 0x590) = (short)unaff_x21;
      *(short *)(param_2 + 0x594) = (short)((ulong)unaff_x21 >> 0x20);
      *(short *)(param_2 + 0x598) = (short)unaff_x20;
      *(short *)(param_2 + 0x59c) = (short)((ulong)unaff_x20 >> 0x20);
      *(short *)(param_2 + 0x5a0) = (short)unaff_x19;
      *(short *)(param_2 + 0x5a4) = (short)((ulong)unaff_x19 >> 0x20);
      *(undefined2 *)(param_2 + 0x5a8) = uStack0000000000000000;
      *(undefined2 *)(param_2 + 0x5ac) = uStack0000000000000004;
      *(undefined2 *)(param_2 + 0x5b0) = uStack0000000000000008;
      *(undefined2 *)(param_2 + 0x5b4) = uStack000000000000000c;
      *(undefined2 *)(param_2 + 0x5b8) = uStack0000000000000010;
      *(undefined2 *)(param_2 + 0x5bc) = uStack0000000000000014;
      *(undefined2 *)(param_2 + 0x5c0) = uStack0000000000000018;
      *(undefined2 *)(param_2 + 0x5c4) = uStack000000000000001c;
      *(undefined2 *)(param_2 + 0x5c8) = uStack0000000000000020;
      *(undefined2 *)(param_2 + 0x5cc) = uStack0000000000000024;
      *(undefined2 *)(param_2 + 0x5d0) = uStack0000000000000028;
      *(undefined2 *)(param_2 + 0x5d4) = uStack000000000000002c;
      *(undefined2 *)(param_2 + 0x5d8) = uStack0000000000000030;
      *(undefined2 *)(param_2 + 0x5dc) = uStack0000000000000034;
      *(undefined2 *)(param_2 + 0x5e0) = uStack0000000000000038;
      *(undefined2 *)(param_2 + 0x5e4) = uStack000000000000003c;
      *(undefined2 *)(param_2 + 0x5e8) = uStack0000000000000040;
      *(undefined2 *)(param_2 + 0x5ec) = uStack0000000000000044;
      *(undefined2 *)(param_2 + 0x5f0) = uStack0000000000000048;
      *(undefined2 *)(param_2 + 0x5f4) = uStack000000000000004c;
      *(undefined2 *)(param_2 + 0x5f8) = uStack0000000000000050;
      *(undefined2 *)(param_2 + 0x5fc) = uStack0000000000000054;
      *(undefined2 *)(param_2 + 0x600) = uStack0000000000000058;
      *(undefined2 *)(param_2 + 0x604) = uStack000000000000005c;
      *(undefined2 *)(param_2 + 0x608) = uStack0000000000000060;
      *(undefined2 *)(param_2 + 0x60c) = uStack0000000000000064;
      *(undefined2 *)(param_2 + 0x610) = uStack0000000000000068;
      *(undefined2 *)(param_2 + 0x614) = uStack000000000000006c;
      *(undefined2 *)(param_2 + 0x618) = uStack0000000000000070;
      *(undefined2 *)(param_2 + 0x61c) = uStack0000000000000074;
      *(undefined2 *)(param_2 + 0x620) = uStack0000000000000078;
      *(undefined2 *)(param_2 + 0x624) = uStack000000000000007c;
      *(undefined2 *)(param_2 + 0x628) = uStack0000000000000080;
      *(undefined2 *)(param_2 + 0x62c) = uStack0000000000000084;
      *(undefined2 *)(param_2 + 0x630) = uStack0000000000000088;
      *(undefined2 *)(param_2 + 0x634) = uStack000000000000008c;
      *(undefined2 *)(param_2 + 0x638) = uStack0000000000000090;
      *(undefined2 *)(param_2 + 0x63c) = uStack0000000000000094;
      *(undefined2 *)(param_2 + 0x640) = uStack0000000000000098;
      *(undefined2 *)(param_2 + 0x644) = uStack000000000000009c;
      *(undefined2 *)(param_2 + 0x648) = uStack00000000000000a0;
      pcVar39 = (code *)(_uStack00000000000000a0 >> 0x20);
switchD_03600464_caseD_3610708:
      uVar38 = (uint)plVar26;
      uVar21 = (uint)pcVar55;
      *(short *)(param_2 + 0x64c) = (short)pcVar39;
      if (bVar14) goto LAB_03610710;
      FUN_03611e60(param_1,&local_58,pcVar53 + 0x4000);
      memcpy(param_2 + 0x750,&local_58,0x100);
      if (uVar21 == 0) {
        lVar41 = 0;
        pcVar52 = param_2 + 0x754;
        do {
          lVar36 = lVar41 + 0x650;
          lVar41 = lVar41 + 4;
          *(short *)(param_2 + lVar36) = (short)*(uint *)(pcVar52 + -4);
          *(short *)(param_2 + lVar36 + 2) = (short)*(uint *)pcVar52;
          pcVar52 = pcVar52 + 8;
        } while (lVar41 != 0x80);
      }
LAB_036107d0:
      if (uVar21 == 0) {
        lVar41 = 0;
        pcVar52 = param_2 + 0x850;
        do {
          lVar36 = lVar41 + 0x6d0;
          lVar41 = lVar41 + 2;
          *(uint *)pcVar52 = *(uint *)(pcVar52 + -0x100);
          *(undefined2 *)(param_2 + lVar36) = *(undefined2 *)(param_2 + lVar36 + -0x80);
          pcVar52 = pcVar52 + 4;
        } while (lVar41 != 0x80);
      }
      if (uVar38 == 0) {
        param_2[0x954] = (code)0x0;
        goto LAB_0361083c;
      }
    }
    else {
      FUN_03611b50(param_1,param_2 + 0x550,param_2 + 0x650);
      if (uVar38 == 3) {
LAB_03610710:
        FUN_03611e60(param_1,param_2 + 0x750,param_2 + 0x850);
        if (uVar21 == 0) {
          lVar41 = 0;
          pcVar52 = param_2 + 0x754;
          do {
            lVar36 = lVar41 + 0x650;
            lVar41 = lVar41 + 4;
            *(short *)(param_2 + lVar36) = (short)*(uint *)(pcVar52 + -4);
            *(short *)(param_2 + lVar36 + 2) = (short)*(uint *)pcVar52;
            uVar21 = 0;
            pcVar52 = pcVar52 + 8;
          } while (lVar41 != 0x80);
          goto LAB_036107d0;
        }
      }
      else {
        FUN_03611b50(param_1,param_2 + 0x650,param_2 + 0x6d0);
        if (uVar21 == 0) {
          lVar41 = 0;
          pcVar52 = param_2 + 0x652;
          do {
            lVar36 = lVar41 + 0x750;
            lVar41 = lVar41 + 8;
            *(int *)(param_2 + lVar36) = (int)*(short *)(pcVar52 + -2);
            sVar17 = *(short *)pcVar52;
            pcVar52 = pcVar52 + 4;
            *(int *)(param_2 + lVar36 + 4) = (int)sVar17;
          } while (lVar41 != 0x100);
          uVar21 = 0;
          goto LAB_036107d0;
        }
      }
    }
    local_58 = (code *)CONCAT71(local_58._1_7_,param_2[0x954]);
    (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_58);
    param_2[0x954] = (code)(local_58._0_1_ != (code)0x0);
LAB_0361083c:
    FUN_03ffcda0(param_2 + 0x960,param_1);
    return (code *)0x1;
  case (code *)0x360fbb8:
    goto switchD_03600464_caseD_360fbb8;
  case (code *)0x360fc50:
    goto switchD_03600464_caseD_360fc50;
  case (code *)0x360fd24:
    goto switchD_03600464_caseD_360fd24;
  case (code *)0x360ff6c:
    goto switchD_03600464_caseD_360ff6c;
  case (code *)0x3610708:
    goto switchD_03600464_caseD_3610708;
  case (code *)0x3610b50:
    *(undefined2 *)(param_1 + 0x4f8) = 0;
    *(undefined8 *)(param_1 + 0x42c) = 0;
    *(undefined8 *)(param_1 + 0x504) = 0;
    *(undefined8 *)(param_1 + 0x50c) = 0;
    param_1[0x4fa] = (code)0x0;
    *(undefined2 *)(param_1 + 0x418) = 0;
    *(undefined8 *)(param_1 + 0x420) = 0xffffffffffffffff;
    param_1[0x434] = (code)0x0;
    *(undefined2 *)(param_1 + 0x436) = 0;
    param_1[0x428] = (code)0x0;
    param_1[0x43a] = (code)0x0;
    *(uint *)(param_1 + 0x448) = 0;
    param_1[0x447] = (code)0x0;
    *(undefined2 *)(param_1 + 0x450) = 0;
    param_1[0x414] = (code)((byte)param_1[0x414] & 0xfe);
    *(undefined4 *)(param_1 + 0x43b) = 0;
    *(undefined2 *)(param_1 + 0x4fc) = 0;
    *(undefined4 *)(param_1 + 0x442) = 0;
    *(undefined4 *)(param_1 + 0x43f) = 0;
    *(undefined8 *)(param_1 + 0x464) = 0;
    param_1[0x446] = (code)0x80;
    param_1[0x47e] = (code)0x80;
    param_1[0x44c] = (code)0x1;
    *(undefined8 *)(param_1 + 0x458) = 0xffffffffffffffff;
    param_1[0x46c] = (code)0x0;
    *(undefined2 *)(param_1 + 0x46e) = 0;
    param_1[0x460] = (code)0x0;
    param_1[0x472] = (code)0x0;
    param_1[0x414] = (code)((byte)param_1[0x414] & 0xfd);
    *(undefined4 *)(param_1 + 0x473) = 0;
    *(undefined2 *)(param_1 + 0x4fe) = 0;
    *(undefined4 *)(param_1 + 0x47a) = 0;
    *(undefined4 *)(param_1 + 0x477) = 0;
    *(undefined8 *)(param_1 + 0x49c) = 0;
    *(uint *)(param_1 + 0x480) = 0;
    param_1[0x484] = (code)0x1;
    param_1[0x47f] = (code)0x0;
    *(undefined2 *)(param_1 + 0x488) = 0;
    *(undefined8 *)(param_1 + 0x490) = 0xffffffffffffffff;
    param_1[0x4a4] = (code)0x0;
    *(undefined2 *)(param_1 + 0x4a6) = 0;
    param_1[0x498] = (code)0x0;
    param_1[0x4aa] = (code)0x0;
    *(undefined2 *)(param_1 + 0x4be) = 0;
    param_1[0x414] = (code)((byte)param_1[0x414] & 0xfb);
    *(undefined2 *)(param_1 + 0x4ab) = 0;
    *(undefined2 *)(param_1 + 0x500) = 0;
    param_1[0x4bd] = (code)0x0;
    param_1[0x4c1] = (code)0x0;
    *(undefined2 *)(param_1 + 0x4c8) = 0;
    *(undefined8 *)(param_1 + 0x4dc) = 0;
    *(undefined8 *)(param_1 + 0x4d0) = 0xffffffffffffffff;
    param_1[0x4e4] = (code)0x0;
    *(undefined2 *)(param_1 + 0x4e6) = 0;
    param_1[0x4d8] = (code)0x0;
    param_1[0x4ea] = (code)0x0;
    param_1[0x414] = (code)((byte)param_1[0x414] & 0xf7);
    *(undefined2 *)(param_1 + 0x4f3) = 0;
    *(undefined8 *)(param_1 + 0x4eb) = 0;
    *(undefined8 *)(param_1 + 0x4d0) = 0xffffffffffffffff;
    *(undefined2 *)(param_1 + 0x502) = 0;
    *(undefined2 *)(param_1 + 0x4c8) = 0;
    *(undefined8 *)(param_1 + 0x4dc) = 0x800000000;
    param_1[0x4e4] = (code)0x0;
    *(undefined2 *)(param_1 + 0x4e6) = 0;
    param_1[0x4d8] = (code)0x0;
    param_1[0x4ea] = (code)0x0;
    *(undefined8 *)(param_1 + 0x4eb) = 0;
    *(undefined2 *)(param_1 + 0x4f3) = 0;
    param_1[0x414] = (code)((byte)param_1[0x414] & 0xf7);
    *(undefined2 *)(param_1 + 0x502) = 0;
    return pcVar23;
  case (code *)0x3610f08:
    FUN_03611480();
    FUN_036110c0(param_1 + 0x418);
    FUN_03611308(param_1 + 0x450);
    cVar16 = param_1[0x498];
    if (((byte)cVar16 & 1) == 0) {
      FUN_036094bc(param_1 + 0x488);
      cVar16 = param_1[0x498];
    }
    param_1[0x498] = (code)((char)cVar16 + 1U & 7);
    FUN_03609a3c(param_1 + 0x4c8);
    *(uint *)(param_1 + 0x410) = *(uint *)(param_1 + 0x410) - 2;
    if (*(uint *)(param_1 + 0x40c) != 0) {
      FUN_03611480(param_1);
    }
    uVar21 = (uint)(byte)param_1[0x447];
    if (param_1[0x43a] != (code)0x0 || param_1[0x418] == (code)0x0) {
      uVar21 = 0;
    }
    uVar38 = (uint)(byte)param_1[0x47f];
    if (param_1[0x472] != (code)0x0 || param_1[0x450] == (code)0x0) {
      uVar38 = 0;
    }
    return (code *)(ulong)(uVar21 * (byte)param_1[0x43e] | (byte)param_1[0x476] * uVar38 * 0x10);
  case (code *)0x3612308:
    (**(code **)(pcVar35 + 0x20))();
    *(undefined8 *)pcVar53 = 0;
    (**(code **)(CONCAT44(_DAT_00000009,CONCAT22(_DAT_00000007,CONCAT11(DAT_00000006,DAT_00000005)))
                + 0x28))(5,param_1 + 6);
    (**(code **)(CONCAT44(_DAT_00000009,CONCAT22(_DAT_00000007,CONCAT11(DAT_00000006,DAT_00000005)))
                + 0x28))(5,param_1 + 7);
    (**(code **)(CONCAT44(_DAT_00000009,CONCAT22(_DAT_00000007,CONCAT11(DAT_00000006,DAT_00000005)))
                + 0x28))(5,param_1 + 8);
    cVar16 = *param_1;
    (**(code **)(CONCAT44(_DAT_00000009,CONCAT22(_DAT_00000007,CONCAT11(DAT_00000006,DAT_00000005)))
                + 0x28))(5,(long)register0x00000008 + -0x38);
    *param_1 = (code)(cVar16 != (code)0x0);
    cVar16 = param_1[1];
    (**(code **)(CONCAT44(_DAT_00000009,CONCAT22(_DAT_00000007,CONCAT11(DAT_00000006,DAT_00000005)))
                + 0x28))(5,(long)register0x00000008 + -0x38);
    param_1[1] = (code)(cVar16 != (code)0x0);
    if (iVar54 == 0) {
      cVar16 = param_1[8];
      if (((byte)cVar16 >> 2 & 1) == 0) {
        sVar17 = 0xfff;
      }
      else {
        sVar17 = (short)(0x10 << (ulong)((uint)(byte)cVar16 * 2 + 6 & 6)) + -1;
      }
      *(short *)(param_1 + 2) = sVar17;
    }
    return (code *)(ulong)(uVar50 & 1);
  case (code *)0x3612fb0:
    pcVar52 = (code *)(**(code **)(pcVar35 + 0x40))(pcVar23,param_1);
    uVar22 = 0;
    if ((long)pcVar53 - (long)pcVar55 != 0) {
      uVar22 = ((long)pcVar53 - (long)pcVar55) + 5;
    }
    uVar46 = uVar22 - 2;
    if ((uVar22 & 3) != 2) {
      uVar46 = uVar22;
    }
    uVar46 = 5 - uVar46;
    *(ulong *)(param_1 + 0x128) = uVar46;
    if (*(ulong *)(param_1 + 0x130) <= uVar46) {
      uVar46 = *(ulong *)(param_1 + 0x130);
    }
    *(ulong *)(param_1 + 0x138) = uVar46;
    return pcVar52;
  case (code *)0x3614008:
    switch(param_2[0x150]) {
    case (code)0x1:
    case (code)0x8:
    case (code)0x11:
    case (code)0x21:
    case (code)0x31:
    case (code)0xc2:
    case (code)0xc3:
    case (code)0xc4:
    case (code)0xca:
    case (code)0xcc:
    case (code)0xcd:
    case (code)0xd2:
    case (code)0xd4:
    case (code)0xda:
    case (code)0xdc:
    case (code)0xea:
    case (code)0xfa:
      uVar34 = *(undefined2 *)(param_2 + 0x152);
      local_70 = (long *)CONCAT62(local_70._2_6_,uVar34);
      if (*(uint *)(param_1 + 8) == 2) {
        (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_70,2);
        *(undefined2 *)(param_2 + 0x152) = (undefined2)local_70;
      }
      else if (*(uint *)(param_1 + 8) == 1) {
        (**(code **)(*(long *)param_1 + 0x30))(param_1,(long)register0x00000008 + -0x38);
        *(undefined2 *)(param_2 + 0x152) = uVar34;
      }
      else {
        (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x38,2);
        *(undefined2 *)(param_2 + 0x152) = 0;
      }
      break;
    case (code)0x6:
    case (code)0xe:
    case (code)0x16:
    case (code)0x18:
    case (code)0x1e:
    case (code)0x20:
    case (code)0x26:
    case (code)0x28:
    case (code)0x2e:
    case (code)0x30:
    case (code)0x36:
    case (code)0x38:
    case (code)0x3e:
    case (code)0xc6:
    case (code)0xce:
    case (code)0xd6:
    case (code)0xde:
    case (code)0xe0:
    case (code)0xe6:
    case (code)0xe8:
    case (code)0xee:
    case (code)0xf0:
    case (code)0xf6:
    case (code)0xf8:
    case (code)0xfe:
      cVar16 = param_2[0x152];
      (**(code **)(*(long *)param_1 + 0x28))(param_1,(long)register0x00000008 + -0x38);
      param_2[0x152] = cVar16;
      break;
    case (code)0xcb:
      uVar21 = *(uint *)(param_1 + 8);
      cVar16 = param_2[0x152];
      if (uVar21 == 2) {
        if (param_1[0xc] != (code)0x0) {
          (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x38,1);
          if ((*(uint *)(param_1 + 8) != 2) && (*(uint *)(param_1 + 8) == 1)) goto LAB_036148e4;
        }
LAB_03614940:
        lVar41 = *(long *)param_1;
        puVar29 = (undefined8 *)((long)register0x00000008 + -0x38);
LAB_03614948:
        (**(code **)(lVar41 + 0x20))(param_1,puVar29,4);
      }
      else {
        if (uVar21 == 1) {
          local_70 = (long *)CONCAT44(local_70._4_4_,(uint)(byte)cVar16);
          if (param_1[0xc] != (code)0x0) {
            (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x38,1);
            if (*(uint *)(param_1 + 8) == 2) {
              lVar41 = *(long *)param_1;
              goto LAB_03614948;
            }
            if (*(uint *)(param_1 + 8) != 1) goto LAB_03614940;
          }
LAB_036148e4:
          (**(code **)(*(long *)param_1 + 0x38))(param_1,(long)register0x00000008 + -0x38);
          param_2[0x152] = cVar16;
          break;
        }
        if (uVar21 == 0) {
          if (param_1[0xc] != (code)0x0) {
            (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x38,1);
            if (*(uint *)(param_1 + 8) == 2) {
              (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_70,4);
              param_2[0x152] = SUB81(local_70,0);
              break;
            }
            if (*(uint *)(param_1 + 8) == 1) {
              (**(code **)(*(long *)param_1 + 0x38))(param_1,(long)register0x00000008 + -0x38);
              param_2[0x152] = cVar16;
              break;
            }
          }
          (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x38,4);
          param_2[0x152] = (code)0x0;
          break;
        }
      }
      param_2[0x152] = cVar16;
      break;
    case (code)0xd3:
    case (code)0xdd:
      if ((0x2e < uVar56) && (0x79 < uVar21)) {
        if (*(uint *)(param_1 + 8) == 2) {
          (**(code **)(*(long *)param_1 + 0x20))(param_1,param_2 + 0x152,2);
        }
        else if (*(uint *)(param_1 + 8) == 1) {
          (**(code **)(*(long *)param_1 + 0x30))(param_1,(long)register0x00000008 + -0x38);
        }
        else {
          (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x38,2);
          *(undefined2 *)(param_2 + 0x152) = 0;
        }
      }
    }
    if (*(uint *)(param_1 + 8) == 2) {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,param_2 + 0x154,2);
    }
    else if (*(uint *)(param_1 + 8) == 1) {
      (**(code **)(*(long *)param_1 + 0x30))(param_1,(long)register0x00000008 + -0x38);
    }
    else {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x38,2);
      *(undefined2 *)(param_2 + 0x154) = 0;
    }
    (**(code **)(*(long *)param_1 + 0x28))(param_1,param_2 + 0x1a0);
    (**(code **)(*(long *)param_1 + 0x28))(param_1,param_2 + 0x1a1);
    if (*(uint *)(param_1 + 8) == 2) {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,param_2 + 0x1a2,2);
    }
    else if (*(uint *)(param_1 + 8) == 1) {
      (**(code **)(*(long *)param_1 + 0x30))(param_1,(long)register0x00000008 + -0x38);
    }
    else {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x38,2);
      *(undefined2 *)(param_2 + 0x1a2) = 0;
    }
    if (*(uint *)(param_1 + 8) == 2) {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,param_2 + 0x1a4,2);
    }
    else if (*(uint *)(param_1 + 8) == 1) {
      (**(code **)(*(long *)param_1 + 0x30))(param_1,(long)register0x00000008 + -0x38);
    }
    else {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x38,2);
      *(undefined2 *)(param_2 + 0x1a4) = 0;
    }
    if (param_1[0xc] != (code)0x0) {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x38,1);
    }
    if (*(uint *)(param_1 + 8) == 2) {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,param_2 + 0x4128,8);
    }
    else if (*(uint *)(param_1 + 8) == 1) {
      (**(code **)(*(long *)param_1 + 0x40))(param_1,(long)register0x00000008 + -0x38);
    }
    else {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x38,8);
      *(undefined8 *)(param_2 + 0x4128) = 0;
    }
    if (param_1[0xc] != (code)0x0) {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x38,1);
    }
    if (*(uint *)(param_1 + 8) == 2) {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,param_2 + 0x4130,8);
    }
    else if (*(uint *)(param_1 + 8) == 1) {
      (**(code **)(*(long *)param_1 + 0x40))(param_1,(long)register0x00000008 + -0x38);
    }
    else {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x38,8);
      *(undefined8 *)(param_2 + 0x4130) = 0;
    }
    uVar22 = FUN_04002180(param_1,0,0,(long)register0x00000008 + -0x38);
    if ((uVar22 & 1) != 0) {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,param_2 + 0x10c0,0xc);
      FUN_03606c10(param_1,param_2 + 0x10cc);
      if (iVar54 == 0) {
        if ((byte)param_2[0xd2] < 3) {
          FUN_0361e944();
        }
        else {
          FUN_0361ec10(param_2,*(undefined2 *)(param_2 + 0x10c8));
        }
      }
      uVar22 = FUN_035b3804(param_2 + 0x280,param_1);
      if (((((uVar22 & 1) != 0) &&
           (uVar22 = switchD_035e6abc::caseD_8c(param_2 + 0x2600,param_1), (uVar22 & 1) != 0)) &&
          (uVar22 = FUN_035ee3f0(param_2 + 0x2c0,param_1), (uVar22 & 1) != 0)) &&
         (uVar22 = FUN_04002180(param_1,0,0,(long)register0x00000008 + -0x38), (uVar22 & 1) != 0)) {
        (**(code **)(*(long *)param_1 + 0x28))(param_1,param_2 + 0x241);
        (**(code **)(*(long *)param_1 + 0x28))(param_1,param_2 + 0x242);
        uVar22 = FUN_0360df60(param_2 + 0x1100,param_1);
        if ((uVar22 & 1) != 0) {
          uVar22 = FUN_035b79fc(param_2 + 0x200,param_1);
          if (((((uVar22 & 1) != 0) &&
               (uVar22 = FUN_03600200(param_2 + 0xec0,param_1), (uVar22 & 1) != 0)) &&
              ((uVar22 = FUN_035b286c(param_2 + 0x1c0,param_1), (uVar22 & 1) != 0 &&
               ((uVar22 = FUN_036076c4(param_2 + 0x2640,param_1), (uVar22 & 1) != 0 &&
                (uVar22 = FUN_035b7b14(param_2 + 0x40c0,param_1), (uVar22 & 1) != 0)))))) &&
             (uVar22 = FUN_03602844(param_2 + 0x4100,param_1), (uVar22 & 1) != 0)) {
            if (iVar54 == 0) {
              FUN_03613008(param_2);
              *(undefined2 *)(param_2 + 0x462) = *(undefined2 *)(param_2 + 0x4120);
              FUN_035c4240(param_2 + 0x438,*(undefined8 *)(param_2 + 0x4128),
                           *(undefined8 *)(param_2 + 0x4130));
              if (((byte)param_2[0x140] - 0xb < 2) &&
                 ((ulong)CONCAT11(DAT_00000006,DAT_00000005) != 0)) {
                if ((byte)param_2[0xd2] < 3) {
                  uVar20 = 0;
                }
                else if ((char)param_2[0x200] < '\0') {
                  uVar20 = 3;
                }
                else {
                  uVar20 = 1;
                  if (((byte)param_2[0xec3] & 4) == 0) {
                    uVar20 = 2;
                  }
                }
                uVar25 = FUN_03614c3c(param_2,uVar20,param_2[0x150],
                                      (ulong)CONCAT11(DAT_00000006,DAT_00000005) << 2);
              }
              else {
                uVar25 = 0;
              }
              *(undefined8 *)(param_2 + 0x4138) = uVar25;
            }
            uVar21 = *(uint *)(param_2 + 0xe0);
            uVar38 = *(uint *)(param_2 + 0xe4);
            uVar22 = ((ulong)uVar38 - (ulong)uVar21) + 4;
            if (uVar21 <= uVar38) {
              uVar22 = (ulong)(uVar38 - uVar21);
            }
            FUN_03614b50(param_1,(long)register0x00000008 + -0x38);
            if (iVar54 == 0) {
              *(undefined8 *)(param_2 + 0xe0) = 0;
              if (uVar22 != 0) {
                uVar46 = 0;
                do {
                  FUN_03614b50(param_1,&local_70);
                  uVar38 = *(uint *)(param_2 + 0xe0);
                  uVar30 = *(uint *)(param_2 + 0xe4);
                  *(long **)(param_2 + 0xe0 + (ulong)uVar30 * 8 + 8) = local_70;
                  uVar21 = uVar30 + 1 & 3;
                  *(uint *)(param_2 + 0xe4) = uVar21;
                  if (uVar21 == uVar38) {
                    *(uint *)(param_2 + 0xe0) = uVar30 + 2 & 3;
                  }
                  uVar46 = uVar46 + 1;
                } while (uVar46 < uVar22);
              }
            }
            else if (uVar22 != 0) {
              uVar46 = 0;
              do {
                local_70 = *(long **)(param_2 + 0xe0 +
                                     ((ulong)((int)uVar46 + *(uint *)(param_2 + 0xe0)) & 3) * 8 + 8)
                ;
                FUN_03614b50(param_1,&local_70);
                uVar46 = uVar46 + 1;
              } while (uVar46 < uVar22);
            }
            plVar26 = *(long **)(param_2 + 0x58);
            if (plVar26 == (long *)0x0) {
              return (code *)0x0;
            }
            uVar22 = (**(code **)(*plVar26 + 0x48))
                               (plVar26,local_58._4_4_,(ulong)local_68 & 0xffffffff,param_1,param_2)
            ;
            if ((uVar22 & 1) != 0) {
              local_70._0_1_ = param_2[0x4126];
              (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_70);
              param_2[0x4126] = (code)(local_70._0_1_ != (code)0x0);
              local_70 = (long *)CONCAT71(local_70._1_7_,param_2[0x4127]);
              (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_70);
              param_2[0x4127] = (code)(local_70._0_1_ != (code)0x0);
              return (code *)0x1;
            }
          }
        }
      }
    }
    return (code *)0x0;
  case (code *)0x3614cd8:
    local_58 = pcVar35;
    strlen((char *)pcVar23);
    local_68 = (code *)0x0;
    iVar19 = FUN_03605e64(&local_68,0);
    if (iVar19 != 0) {
                    /* WARNING: Does not return */
      pcVar52 = (code *)UndefinedInstructionException(0x8002,0x3614da0);
      (*pcVar52)();
    }
    if (((byte)param_1[0x38] & 1) != 0) {
      (**(code **)(**(long **)(param_1 + 0x40) + 0x18))
                (*(long **)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
    }
    *(code **)(param_1 + 0x30) = local_68;
    *(code **)(param_1 + 0x38) = pcVar44;
    *(code **)(param_1 + 0x50) = unaff_x30;
    *(code **)(param_1 + 0x40) = local_58;
    *(ulong *)(param_1 + 0x48) = (ulong)unaff_x29 & 0xffffffffffffff00;
    uVar21 = FUN_0360217c(param_1 + 0xec0,pcVar28,0x800);
    if ((uVar21 & 1) != 0) {
      FUN_03612b18(param_1);
      if (param_5 != 0) {
        FUN_03614da4(param_1,param_5,param_2);
      }
      *(uint *)(param_1 + 0x18) = 3;
    }
    return (code *)(ulong)(uVar21 & 1);
  case (code *)0x3615720:
    return *(code **)((long)&PTR_LAB_04b416d0 + ((ulong)pcVar35 & 0xfffffffffffffff8));
  case (code *)0x3616118:
    return (code *)&LAB_03622c00;
  case (code *)0x3617324:
    return (code *)&LAB_036240d0;
  case (code *)0x36185b0:
    uVar21 = iVar19 + 0x4193539;
    bVar33 = 0x40;
    if ((uVar21 & 0xff) == 0) {
      bVar33 = 0xc0;
    }
    DAT_00000005 = bVar33 | DAT_00000005 & 0x10 | (byte)(((uVar38 ^ uVar21) & 0x10) << 1);
    DAT_00000006 = (char)uVar21;
    return (code *)0x0;
  case (code *)0x3618ff4:
    param_1[0xd0] = (code)0x1;
    param_1[0xd1] = (code)((byte)param_1[0xd1] | 8);
    *(uint *)(param_1 + 0xd8) = 1;
    return *(code **)(param_1 + 0x4138);
  case (code *)0x3619f3c:
    pcVar52 = (code *)(**(code **)(pcVar35 + 0x419353a))
                                (pcVar23,(ulong)param_2 & 0xffffffff,*(uint *)(param_1 + 0x15c));
    if (((uint)pcVar52 & 0xff) == 0xfb) {
      *(short *)(param_1 + 0x10ca) = *(short *)(param_1 + 0x10ca) + -1;
    }
    *(uint *)(param_1 + 0x10cc) = 1;
    return pcVar52;
  case (code *)0x361beb8:
    pcVar52 = pcVar23;
    if (((byte)pcVar23[0x282] & (byte)pcVar23[0x281]) != 0) {
      if (pcVar23[0x280] == (code)0x0) {
        pcVar23[0xd7] = (code)0x1;
        return pcVar23;
      }
      uVar22 = (ulong)(*(ushort *)(pcVar23 + 0x10ca) - 2);
      if ((ulong)*(ushort *)(pcVar23 + 0x15a) <=
          (uVar22 & 0xffff) - (ulong)*(ushort *)(pcVar23 + 0x158)) {
        FUN_0362c548(pcVar23,uVar22);
      }
      pcVar52 = *(code **)(pcVar23 + 0x160);
      if ((*(ulong *)(pcVar23 + 0x168) & 1) != 0) {
        pcVar52 = *(code **)(pcVar52 +
                            *(long *)(pcVar23 + ((long)*(ulong *)(pcVar23 + 0x168) >> 1) + 0xec0));
      }
      pcVar52 = (code *)(*pcVar52)(pcVar23 + ((long)*(ulong *)(pcVar23 + 0x168) >> 1) + 0xec0,uVar22
                                   ,*(uint *)(pcVar23 + 0x15c));
      if (((uint)pcVar52 & 0xff) == 0xfb) {
        *(short *)(pcVar23 + 0x10ca) = *(short *)(pcVar23 + 0x10ca) + -1;
      }
    }
    *(uint *)(pcVar23 + 0x10cc) = 1;
    return pcVar52;
  case (code *)0x361e164:
    param_1[0xd0] = (code)0x1;
    pcVar52 = param_2 + (long)pcVar35 + 0x3fc;
    param_1[0xd1] = (code)((byte)param_1[0xd1] | 1);
    pcVar53 = *(code **)(param_1 + 0x128);
    if (pcVar52 <= *(code **)(param_1 + 0x128)) {
      pcVar53 = pcVar52;
    }
    *(code **)(param_1 + 0x130) = pcVar52;
    *(code **)(param_1 + 0x138) = pcVar53;
    if (param_1[0x1050] == (code)0x0) {
      lVar41 = *(long *)(param_1 + 0x1060);
    }
    else {
      lVar41 = *(long *)(param_1 + 0x1058);
      *(long *)(param_1 + 0x1058) = *(long *)(param_1 + 0x110);
      lVar41 = (*(long *)(param_1 + 0x110) - lVar41) + *(long *)(param_1 + 0x1060);
    }
    lVar36 = *(long *)(param_1 + 0x1068);
    *(long *)(param_1 + 0x1068) = lVar41;
    *(undefined8 *)(param_1 + 0x1060) = 0;
    plVar26 = *(long **)(param_1 + 0x58);
    uVar22 = lVar36 + lVar41;
    if (0x2249f < (ulong)(lVar36 + lVar41)) {
      uVar22 = 0x224a0;
    }
    *(ulong *)(param_1 + 0x1070) = uVar22;
    if (plVar26 == (long *)0x0) {
      return (code *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x0361e200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar52 = (code *)(**(code **)(*plVar26 + 0x10))(plVar26,1);
    return pcVar52;
  case (code *)0x361efa0:
    cVar16 = (code)(*pcVar35)(pcVar23,(ulong)param_2 & 0xffffffff);
    FUN_03638610(param_1);
    param_1[0x1a0] = cVar16;
    *(short *)(param_1 + 0x10ca) = *(short *)(param_1 + 0x10ca) + 1;
    return (code *)&LAB_03627d90;
  case (code *)0x36203c8:
    FUN_03638610(param_1);
    param_1[0x152] = SUB81(param_2,0);
    *(short *)(param_1 + 0x10ca) = *(short *)(param_1 + 0x10ca) + 1;
    uVar38 = (uint)DAT_00000006;
    uVar21 = uVar38 + (uVar50 & 0xff);
    DAT_00000006 = (char)uVar21;
    DAT_00000005 = ((uVar21 & 0xff) == 0) << 7 |
                   (0xff < uVar21) << 4 | (byte)(((uVar38 ^ uVar50 ^ uVar21) >> 4 & 1) << 5);
    return (code *)0x0;
  case (code *)0x3620480:
    if ((ulong)*(ushort *)(pcVar23 + 0x174) <= (long)param_2 - (ulong)*(ushort *)(pcVar23 + 0x172))
    {
      FUN_0361e944(pcVar23,(ulong)param_2 & 0xffffffff);
    }
    pcVar52 = *(code **)(pcVar23 + 0x180);
    if ((*(ulong *)(pcVar23 + 0x188) & 1) != 0) {
      pcVar52 = *(code **)(pcVar52 +
                          *(long *)(pcVar23 + ((long)*(ulong *)(pcVar23 + 0x188) >> 1) + 0xec0));
    }
    cVar16 = (code)(*pcVar52)(pcVar23 + ((long)*(ulong *)(pcVar23 + 0x188) >> 1) + 0xec0,
                              (ulong)param_2 & 0xffffffff,*(uint *)(pcVar23 + 0x178));
    FUN_03638610(pcVar23);
    pcVar23[0x1a0] = cVar16;
    return FUN_036289f0;
  case (code *)0x3622080:
    uVar38 = FUN_035f9898(pcVar23 + 0xec0,*(undefined2 *)(pcVar23 + 0x10c6));
    FUN_0363885c(pcVar23);
    cVar16 = pcVar23[0x10c1];
    uVar21 = (uint)(byte)cVar16 + (uVar38 & 0xff) + ((byte)pcVar23[0x10c0] >> 4 & 1);
    pcVar23[0x10c1] = SUB41(uVar21,0);
    pcVar23[0x10c0] =
         (code)(((uVar21 & 0xff) == 0) << 7 |
               (byte)(uVar21 >> 4) & 0x10 | (byte)((((byte)cVar16 ^ uVar38 ^ uVar21) >> 4 & 1) << 5)
               );
    return (code *)0x0;
  case (code *)0x3622404:
    return pcVar23;
  case (code *)0x3622c10:
    uVar22 = (ulong)*(ushort *)(pcVar23 + 0x10ca);
    if ((ulong)*(ushort *)(pcVar23 + 0x15a) <= uVar22 - *(ushort *)(pcVar23 + 0x158)) {
      FUN_0361e6d4(pcVar23,uVar22);
    }
    pcVar52 = *(code **)(pcVar23 + 0x160);
    if ((*(ulong *)(pcVar23 + 0x168) & 1) != 0) {
      pcVar52 = *(code **)(pcVar52 +
                          *(long *)(pcVar23 + ((long)*(ulong *)(pcVar23 + 0x168) >> 1) + 0xec0));
    }
    uVar21 = (*pcVar52)(pcVar23 + ((long)*(ulong *)(pcVar23 + 0x168) >> 1) + 0xec0,uVar22,
                        *(uint *)(pcVar23 + 0x15c));
    FUN_0363885c(pcVar23);
    *(short *)(pcVar23 + 0x10ca) = *(short *)(pcVar23 + 0x10ca) + 1;
    if ((pcVar23[0x4127] == (code)0x0) || (3 < (uVar21 & 0xff) - 1)) {
      plVar26 = *(long **)(pcVar23 + 0x58);
      if (plVar26 == (long *)0x0) {
        pcVar23[0xd0] = (code)0x1;
        pcVar23[0xd1] = (code)((byte)pcVar23[0xd1] | 8);
      }
      else {
        iVar19 = (**(code **)(*plVar26 + 0x28))(plVar26,*(undefined2 *)(pcVar23 + 0x154),pcVar23);
        if (iVar19 != -1) goto LAB_03622da8;
        plVar26 = *(long **)(pcVar23 + 0x58);
        pcVar23[0xd0] = (code)0x1;
        pcVar23[0xd1] = (code)((byte)pcVar23[0xd1] | 8);
        if (plVar26 != (long *)0x0) {
          (**(code **)(*plVar26 + 0x10))(plVar26,8);
        }
      }
      *(uint *)(pcVar23 + 0xd8) = 1;
      goto LAB_03622da8;
    }
    pcVar52 = pcVar23 + 0x10c0;
    switch(uVar21 & 0xff) {
    case 1:
      pcVar23[0x4113] = pcVar23[0x10c1];
      *(uint *)(pcVar23 + 0x4114) = 1;
      break;
    case 2:
      cVar16 = (code)0x0;
      if (*(long *)(pcVar23 + 0x4108) != 0) {
        cVar16 = *(code *)(*(long *)(pcVar23 + 0x4108) + 0x11);
      }
      pcVar23[0x10c1] = cVar16;
      *(uint *)(pcVar23 + 0x4114) = 2;
      break;
    case 3:
      bVar33 = 0xa0;
      if (pcVar23[0x4112] != (code)0x0) {
        bVar33 = 0x20;
      }
      cVar16 = (code)(bVar33 | (byte)*pcVar52 & 0x10);
      goto LAB_03622da4;
    case 4:
      bVar33 = 0;
      if (*(long *)(pcVar23 + 0x4108) != 0) {
        bVar33 = *(char *)(*(long *)(pcVar23 + 0x4108) + 0x12) << 7;
      }
      cVar16 = (code)(((byte)*pcVar52 & 0x10 | bVar33) ^ 0xa0);
LAB_03622da4:
      *pcVar52 = cVar16;
    }
LAB_03622da8:
    pcVar23 = (code *)0x0;
switchD_03600464_caseD_3622db0:
    return pcVar23;
  case (code *)0x3622db0:
    goto switchD_03600464_caseD_3622db0;
  case (code *)0x3624490:
    return pcVar23;
  case (code *)0x3624880:
    cVar16 = (code)(*pcVar35)(pcVar23,(ulong)param_2 & 0xffffffff);
    FUN_03638a84(param_1);
    param_1[0x1a0] = cVar16;
    return (code *)&LAB_0362b3a0;
  case (code *)0x3625ebc:
    FUN_0362c548(pcVar23,(ulong)param_2 & 0xffffffff);
    pcVar52 = *(code **)(param_1 + 0x160);
    if ((*(ulong *)(param_1 + 0x168) & 1) != 0) {
      pcVar52 = *(code **)(pcVar52 +
                          *(long *)(param_1 + ((long)*(ulong *)(param_1 + 0x168) >> 1) + 0xec0));
    }
    cVar16 = (code)(*pcVar52)(param_1 + ((long)*(ulong *)(param_1 + 0x168) >> 1) + 0xec0,
                              (ulong)param_2 & 0xffffffff,*(uint *)(param_1 + 0x15c));
    FUN_03638cac(param_1);
    param_1[0x152] = cVar16;
    *(short *)(param_1 + 0x10ca) = *(short *)(param_1 + 0x10ca) + 1;
    pcVar52 = (code *)&LAB_0362c910;
    if ((char)param_1[0x10c0] < '\0') {
      pcVar52 = (code *)0x0;
    }
    return pcVar52;
  case (code *)0x36267c8:
    FUN_03638cac(param_1);
    uVar38 = (uint)DAT_00000006;
    uVar21 = uVar38 + ((uint)pcVar23 & 0xff) + (DAT_00000005 >> 4 & 1);
    DAT_00000006 = (char)uVar21;
    DAT_00000005 = ((uVar21 & 0xff) == 0) << 7 |
                   (byte)(uVar21 >> 4) & 0x10 |
                   (byte)(((uVar38 ^ (uint)pcVar23 ^ uVar21) >> 4 & 1) << 5);
    return (code *)0x0;
  case (code *)0x3628384:
    if ((ulong)*(ushort *)(pcVar23 + 0x15a) <= 5U - (long)pcVar35) {
      FUN_0361e468(param_2,5);
    }
    pcVar52 = *(code **)(param_2 + 0x160);
    if ((*(ulong *)(param_2 + 0x168) & 1) != 0) {
      pcVar52 = *(code **)(pcVar52 +
                          *(long *)(param_2 + ((long)*(ulong *)(param_2 + 0x168) >> 1) + 0xec0));
    }
    sVar17 = (*pcVar52)(param_2 + ((long)*(ulong *)(param_2 + 0x168) >> 1) + 0xec0,5,
                        *(uint *)(param_2 + 0x15c));
    FUN_03638610(param_2);
    *(short *)(param_2 + 0x10ca) = *(short *)(param_2 + 0x10ca) + 1;
    *(ushort *)(param_2 + 0x152) = (ushort)(byte)param_2[0x1a0] | sVar17 << 8;
                    /* WARNING: Could not recover jumptable at 0x03628408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar52 = (code *)(*(code *)(&UNK_0362840c +
                                (ulong)(byte)(&DAT_04194e9a)
                                             [uVar49 - 0xc2 >> 3 | (uVar49 - 0xc2) * 0x20000000] * 4
                                ))();
    return pcVar52;
  case (code *)0x36307e4:
                    /* WARNING: Does not return */
    pcVar52 = (code *)UndefinedInstructionException(0,0x36307e4);
    (*pcVar52)();
  case (code *)0x3631798:
    return pcVar23;
  case (code *)0x3632fe8:
    *param_1 = (code)(-(byte)uVar42 | 0x10 | (byte)uVar38 * '\x02' & 0x20);
    return pcVar23;
  case (code *)0x3633050:
    *param_1 = (code)((byte)uVar42 | 0x10 | (byte)uVar38 & 0x20);
    return pcVar23;
  case (code *)0x3633520:
    FUN_03638a84();
    cVar16 = pcVar23[0x10c1];
    pcVar23[0x10c0] = (code)(((byte)cVar16 & 1) << 4);
    pcVar23[0x10c1] = (code)((byte)cVar16 >> 1 | (char)cVar16 << 7);
    return (code *)0x0;
  case (code *)0x36337f0:
    pcVar23 = pcVar23 + (long)pcVar35;
    FUN_03638a84();
    cVar16 = pcVar23[7];
    uVar21 = (byte)cVar16 + 1;
    pcVar23[7] = SUB41(uVar21,0);
    *pcVar23 = (code)((byte)*pcVar23 & 0x10 |
                     (byte)(uVar21 >> 1) & 0x80 | (byte)(((uVar21 ^ (byte)cVar16) >> 4 & 1) << 5));
    return (code *)0x0;
  case (code *)0x3633eac:
    return pcVar23;
  case (code *)0x36373c0:
    uVar30 = uVar42 + uVar30;
    param_1[1] = SUB41(uVar30,0);
    *param_1 = (code)(((uVar30 & 0xff) == 0) << 7 |
                     (byte)(uVar30 >> 4) & 0x10 |
                     (byte)(((uVar38 ^ 0x419353a ^ uVar30) >> 4 & 1) << 5));
    return pcVar23;
  case (code *)0x3637b20:
    if (((byte)param_1[1] & uVar38) != 0) {
      uVar30 = 0x20;
    }
    param_1[1] = SUB41((byte)param_1[1] & uVar38,0);
    *param_1 = SUB41(uVar30,0);
    return (code *)0x0;
  case (code *)0x3638c50:
    pcVar52 = (code *)FUN_036119a8();
    if (*(ulong *)(param_1 + 0x108) < *(ulong *)(param_1 + 0x2670)) {
      return pcVar52;
    }
    pcVar52 = (code *)FUN_036072a4(param_1 + 0x2640);
    return pcVar52;
  case (code *)0x3638f54:
    if (uVar38 == 0) {
      uVar42 = *(ushort *)(param_2 + 4);
      param_2[1] = (code)0x0;
      uVar21 = uVar42 + 4;
      *(short *)(param_2 + 4) = (short)uVar21;
      if ((*(ushort *)(param_2 + 2) & uVar21) == 0) {
        if (((uVar21 ^ uVar42) >> 0xc & 1) != 0) {
          *(uint *)(param_2 + -0x10f0) = *(uint *)(param_2 + -0x10f0) + 1;
        }
        if (((byte)param_2[8] >> 2 & 1) != 0) {
          cVar16 = param_2[6];
          param_2[6] = SUB41((byte)cVar16 + 1,0);
          *param_2 = SUB41((byte)cVar16 + 1 >> 8,0);
        }
      }
    }
    else {
      if (*(uint *)(param_2 + -0x1534) == 1) {
        param_2[-0x237c] = (code)((byte)param_2[-0x237c] | 4);
        param_2[-0x237b] = (code)0x1;
      }
      else {
        param_2[-0x237f] = (code)((byte)param_2[-0x237f] | 4);
      }
      param_2[6] = param_2[7];
      uVar42 = *(ushort *)(param_2 + 4);
      uVar21 = uVar42 + 4;
      *(short *)(param_2 + 4) = (short)uVar21;
      if ((*(ushort *)(param_2 + 2) & uVar21) == 0) {
        if (((uVar21 ^ uVar42) >> 0xc & 1) != 0) {
          *(uint *)(param_2 + -0x10f0) = *(uint *)(param_2 + -0x10f0) + 1;
        }
        if (((byte)param_2[8] >> 2 & 1) == 0) goto LAB_03639028;
        cVar16 = (code)(param_2[7] == (code)0x0);
      }
      else {
LAB_03639028:
        cVar16 = (code)0x0;
      }
      *param_2 = cVar16;
      param_2[1] = (code)0x1;
    }
    pcVar52 = param_1 + 0x1c0;
    if ((param_1[0x1cc] == (code)0x0) ||
       ((param_1[0x1cc] != (code)0x1 && (param_1[0x1cd] == (code)0x0)))) {
      uVar21 = *(uint *)(param_1 + 0x39c) + 4;
      if ((byte)param_1[0x1c6] < 0xa2) {
        if (uVar21 < *(uint *)(param_1 + 0x3a0)) {
          *(uint *)(param_1 + 0x39c) = uVar21;
        }
        else {
          FUN_035d5870(param_1 + 0x2c0,uVar21,1);
        }
        FUN_035b19e4(pcVar52);
        goto LAB_03639110;
      }
      if (*(uint *)(param_1 + 0x3a0) <= uVar21) {
        FUN_035c8f50(param_1 + 0x2c0,uVar21,1);
        goto LAB_03639110;
      }
    }
    else {
      FUN_035b24cc(pcVar52);
      uVar21 = *(uint *)(param_1 + 0x39c) + 2;
      if (uVar21 < *(uint *)(param_1 + 0x3a0)) {
        *(uint *)(param_1 + 0x39c) = uVar21;
      }
      else {
        FUN_035e1540(param_1 + 0x2c0,uVar21,0);
      }
      FUN_035b24cc(pcVar52);
      uVar21 = *(uint *)(param_1 + 0x39c) + 2;
      if (*(uint *)(param_1 + 0x3a0) <= uVar21) {
        FUN_035e1540(param_1 + 0x2c0,uVar21,0);
        goto LAB_03639110;
      }
    }
    *(uint *)(param_1 + 0x39c) = uVar21;
LAB_03639110:
    pcVar52 = param_1 + 0x1100;
    uVar21 = *(uint *)(param_1 + 0x1504);
    *(uint *)(param_1 + 0x1504) = uVar21 + 4;
    if ((char)param_1[0x15fa] < '\0') {
      *(uint *)(param_1 + 0x150c) = *(uint *)(param_1 + 0x150c) + 4;
    }
    if (7 < uVar21 + 4) {
      pcVar52 = (code *)FUN_036119a8();
    }
    if (*(ulong *)(param_1 + 0x108) < *(ulong *)(param_1 + 0x2670)) {
      return pcVar52;
    }
    pcVar52 = (code *)FUN_03606f24(param_1 + 0x2640);
    return pcVar52;
  case (code *)0x3639be4:
    do {
      pcVar39 = pcVar39 + 1;
    } while (pcVar39 < (code *)(ulong)(byte)pcVar35[0x138]);
    return pcVar23;
  case (code *)0x3639c58:
    do {
      pcVar28 = (code *)0x1;
      pcVar23 = param_1;
switchD_03600464_caseD_3639c60:
      FUN_036039bc(pcVar23,pcVar28,uVar21);
switchD_03600464_caseD_3639c68:
      lVar41 = *(long *)(param_1 + 0x140);
      *(short *)(lVar41 + 0x1024) = (short)pcVar55;
      *(short *)(lVar41 + 0x1026) = (short)unaff_x24;
      lVar41 = *(long *)(param_1 + 0x148);
      *(short *)(lVar41 + 0x1024) = (short)unaff_x25;
      *(short *)(lVar41 + 0x1026) = (short)unaff_x26;
      if (*(code **)(param_2 + 0x270) != (code *)0x0) {
        (**(code **)(param_2 + 0x270))(*(undefined8 *)(param_2 + 0x278));
      }
      do {
        (**(code **)(*(long *)param_2 + 0x70))(param_2);
        if ((((byte)unaff_x27[0xd1] >> 1 & 1) != 0) || (*(uint *)(param_2 + 0xc) == 1)) {
          if (param_1[0x138] != (code)0x0) {
            uVar22 = 0;
            do {
              lVar41 = *(long *)(param_1 + uVar22 * 8 + 0x140);
              FUN_0360ddc0(lVar41 + 0x1100,0);
              *(undefined2 *)(lVar41 + 0x216e) = 0;
              uVar22 = uVar22 + 1;
              *(undefined8 *)(lVar41 + 0x1630) = 0;
            } while (uVar22 < (byte)param_1[0x138]);
          }
          pcVar52 = (code *)FUN_03603d40(param_1);
          if (param_1[0x138] != (code)0x0) {
            uVar22 = 0;
            do {
              uVar22 = uVar22 + 1;
            } while (uVar22 < (byte)param_1[0x138]);
          }
          return pcVar52;
        }
      } while (((byte)unaff_x27[0xd1] >> 1 & 1) == 0);
      FUN_036039bc(param_1,0,5);
    } while( true );
  case (code *)0x3639c60:
    goto switchD_03600464_caseD_3639c60;
  case (code *)0x3639c68:
    goto switchD_03600464_caseD_3639c68;
  default:
    do {
      FUN_03612b18(*(undefined8 *)((long)param_2 * 8 + 5));
      param_2 = param_2 + 1;
    } while (param_2 < (code *)(ulong)(byte)param_1[0x138]);
    pcVar52 = memset(param_1 + 0x180,0,0x81c);
    *(undefined8 *)(param_1 + 0x9a8) = 0;
    *(undefined8 *)(param_1 + 0x9b0) = 0;
    *(uint *)(param_1 + 0x9b8) = 0xcb70;
    *(undefined8 *)(param_1 + 0x9a0) = 0;
    return pcVar52;
  case (code *)0x363abec:
                    /* WARNING: Does not return */
    pcVar52 = (code *)UndefinedInstructionException(0,0x363abec);
    (*pcVar52)();
  case (code *)0x363c3b8:
    *(code **)pcVar35 = pcVar53;
    *(code **)(pcVar28 + 0xa48) = pcVar53;
    *(code **)(pcVar28 + 0xa30) = pcVar55;
    *(code **)(pcVar28 + 0xa38) = pcVar53;
    *(uint *)(pcVar28 + 0xa40) = (uint)unaff_x27;
    *(uint *)(pcVar28 + 0xa44) = (uint)unaff_x27;
    *(uint *)(pcVar28 + 0xa50) = uVar56;
    *(uint *)(pcVar28 + 0xa54) = 0xe5;
    FUN_001001d0(param_2,pcVar28 + 0xa30,param_1);
    DAT_05aa9a60 = 5;
    DAT_05aa9a64 = 5;
    DAT_05aa9a78 = 5;
    DAT_05aa9a7c = 5;
    DAT_05aa9a88 = 0x7f;
    DAT_05aa9a8c = 0x6f;
    DAT_05aa9a58 = unaff_x25;
    DAT_05aa9a68 = unaff_x26;
    DAT_05aa9a70 = unaff_x25;
    DAT_05aa9a80 = unaff_x25;
    FUN_001001d0();
    DAT_05aa9a98 = 5;
    DAT_05aa9a9c = 5;
    DAT_05aa9ab0 = 5;
    DAT_05aa9ab4 = 5;
    DAT_05aa9ac0 = 0x7f;
    DAT_05aa9ac4 = 0x6f;
    DAT_05aa9a90 = unaff_x25;
    DAT_05aa9aa0 = unaff_x26;
    DAT_05aa9aa8 = unaff_x25;
    DAT_05aa9ab8 = unaff_x25;
    FUN_001001d0();
    DAT_05aa9ad0 = 0;
    DAT_05aa9af8 = 0x3f;
    DAT_05aa9afc = 0x3f;
    DAT_05aa9ae8 = 0;
    DAT_05aa9ac8 = pcVar53;
    DAT_05aa9ad8 = pcVar55;
    DAT_05aa9ae0 = pcVar53;
    DAT_05aa9af0 = pcVar53;
    FUN_001001d0(param_2,&DAT_05aa9ad8,param_1);
    DAT_05aa9b08 = 0x16;
    DAT_05aa9b0c = 0x16;
    DAT_05aa9b20 = 0x16;
    DAT_05aa9b24 = 0x16;
    DAT_05aa9b30 = 0x29;
    DAT_05aa9b34 = 0x29;
    DAT_05aa9b00 = pcVar53;
    DAT_05aa9b10 = pcVar55;
    DAT_05aa9b18 = pcVar53;
    DAT_05aa9b28 = pcVar53;
    FUN_001001d0(param_2,&DAT_05aa9b10,param_1);
    DAT_05aa9b48 = 0xffff0001;
    DAT_05aa9b4c = 0xffff0001;
    DAT_05aa9b58 = 0xffff;
    DAT_05aa9b5c = 0xffff;
    DAT_05aa9b38 = pcVar55;
    DAT_05aa9b40 = pcVar53;
    DAT_05aa9b50 = pcVar53;
    pcVar52 = (code *)FUN_001001d0(param_2,&DAT_05aa9b38,param_1);
    return pcVar52;
  case (code *)0x363c710:
    if (pcVar23 == (code *)0x0) {
      free(param_1);
      return extraout_x0;
    }
    plVar26 = (long *)FUN_038cb610(pcVar23,param_1);
    if (plVar26 == (long *)0x0) {
      return (code *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x0363c738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar52 = (code *)(**(code **)(*plVar26 + 0x38))(plVar26,param_1);
    return pcVar52;
  case (code *)0x363cfe8:
    if (uVar38 == 0x12) {
      if (param_1[0x1862a] != (code)0x0) {
        lVar41 = *(long *)(param_1 + 0x110);
        *(undefined1 *)(lVar41 + 0x1f00) = 0xd;
        *(undefined1 *)(lVar41 + 0x1f10) = 0xd;
        *(undefined1 *)(lVar41 + 0x1f14) = *(undefined1 *)(lVar41 + 0x1f04);
        *(undefined1 *)(lVar41 + 0x1f18) = *(undefined1 *)(lVar41 + 0x1f08);
        *(undefined1 *)(lVar41 + 0x1f1c) = *(undefined1 *)(lVar41 + 0x1f0c);
      }
      if (*(uint *)(param_1 + 0xd8) == 1) {
        *(uint *)(param_1 + 0xd8) = 0;
        pcVar23 = (code *)0x1;
        param_1[0xd3] = (code)((byte)param_1[0xd3] | 4);
        *(short *)(param_1 + 0xd6) = *(short *)(param_1 + 0xd6) + 1;
      }
      else if (*(uint *)(param_1 + 0xd8) == 0) {
        pcVar23 = (code *)0x1;
        param_1[0xcc] = (code)0x1;
        *(uint *)(param_1 + 0xd8) = 1;
      }
      else {
        pcVar23 = (code *)0x0;
      }
    }
    return pcVar23;
  case (code *)0x363d808:
    pcVar51 = (char *)(*(long *)(param_1 + 0x41936090) + (ulong)uVar38);
    if ((int)uVar21 < 0xee17) {
      pcVar52 = param_1 + 0x13e40;
      if (0xe532 < (int)uVar21) {
        if ((uVar21 != 0xe533) && (uVar21 != 0xe563)) {
          return (code *)&DAT_ffffffff;
        }
        if (*pcVar51 != '\x12') {
          return (code *)&DAT_ffffffff;
        }
        if (*(char *)((long)unaff_x24 + 1) == '\0') {
          uVar42 = *(ushort *)(param_1 + 0xd6);
          cVar16 = param_1[0xd4];
          *(char *)(*(long *)(param_1 + 0xf8) + (ulong)(byte)cVar16 + 0x100) =
               (char)(uVar42 + 2 >> 8);
          *(char *)(*(long *)(param_1 + 0xf8) + ((ulong)(byte)cVar16 + 0xff | 0x100)) =
               (char)(uVar42 + 2);
          param_1[0xd4] = (code)((char)param_1[0xd4] + -2);
          *(undefined2 *)(param_1 + 0xd6) = 0xe7a3;
          return (code *)&DAT_00000006;
        }
        FUN_03640e48(pcVar52);
        param_1[0xd0] =
             *(code *)(*(long *)(param_1 + 0x13e88) + (ulong)*(uint *)(param_1 + 0x13e6c));
        sVar17 = -0x1aca;
LAB_0363dcc4:
        *(short *)(param_1 + 0xd6) = sVar17;
        return (code *)0x1;
      }
      pcVar53 = param_1 + 0xf0;
      if (uVar21 != 0xe220) {
        if (uVar21 != 0xe4da) {
          return (code *)&DAT_ffffffff;
        }
        if (*pcVar51 != '\x12') {
          return (code *)&DAT_ffffffff;
        }
        uVar21 = *(uint *)(param_1 + 0x138);
        uVar38 = 6 - *(uint *)(param_1 + 0x13c);
        uVar30 = 0;
        if (uVar21 != 0) {
          uVar30 = uVar38 / uVar21;
        }
        iVar19 = (**(code **)(param_1 + 0x158))
                           (pcVar53,(uVar38 - uVar30 * uVar21) + *(uint *)(param_1 + 0x13c));
        if ((char)*unaff_x24 != '\0') {
          uVar21 = iVar19 << 1;
          uVar38 = uVar21 & 0xfe;
          while (uVar38 != 0) {
            FUN_03640e48(pcVar52);
            uVar21 = uVar21 - (*(uint *)(param_1 + 0x13e60) == 2);
            uVar38 = uVar21 & 0xff;
          }
          do {
            FUN_03640e48(pcVar52);
          } while (*(uint *)(param_1 + 0x13e60) - 3 < 2);
          pcVar52 = *(code **)(param_1 + 0x148);
          uVar21 = *(uint *)(param_1 + 0x138);
          if ((*(ulong *)(param_1 + 0x150) & 1) != 0) {
            pcVar52 = *(code **)(pcVar52 +
                                *(long *)(pcVar53 + ((long)*(ulong *)(param_1 + 0x150) >> 1)));
          }
          uVar38 = 6 - *(uint *)(param_1 + 0x13c);
          uVar30 = 0;
          if (uVar21 != 0) {
            uVar30 = uVar38 / uVar21;
          }
          (*pcVar52)(pcVar53 + ((long)*(ulong *)(param_1 + 0x150) >> 1),
                     (uVar38 - uVar30 * uVar21) + *(uint *)(param_1 + 0x13c),0);
        }
        cVar16 = *(code *)(*(long *)(param_1 + 0xf8) + (ulong)(byte)pcVar51[1]);
        param_1[0xd0] = cVar16;
        *(short *)(param_1 + 0xd6) = *(short *)(param_1 + 0xd6) + 2;
        uVar21 = *(uint *)(param_1 + 0x138);
        param_1[0xd3] =
             (code)((byte)cVar16 & 0x80 | (cVar16 == (code)0x0) << 1 | (byte)param_1[0xd3] & 0x7d);
        pcVar52 = *(code **)(param_1 + 0x148);
        if ((*(ulong *)(param_1 + 0x150) & 1) != 0) {
          pcVar52 = *(code **)(pcVar52 +
                              *(long *)(pcVar53 + ((long)*(ulong *)(param_1 + 0x150) >> 1)));
        }
        uVar38 = 6 - *(uint *)(param_1 + 0x13c);
        uVar30 = 0;
        if (uVar21 != 0) {
          uVar30 = uVar38 / uVar21;
        }
        (*pcVar52)(pcVar53 + ((long)*(ulong *)(param_1 + 0x150) >> 1),
                   (uVar38 - uVar30 * uVar21) + *(uint *)(param_1 + 0x13c),iVar19);
        return (code *)0x3;
      }
      if (*pcVar51 != '\x12') {
        return (code *)&DAT_ffffffff;
      }
      if (*(char *)((long)unaff_x24 + 1) != '\0') {
        uVar21 = *(uint *)(param_1 + 0x138);
        uVar38 = 6 - *(uint *)(param_1 + 0x13c);
        uVar30 = 0;
        if (uVar21 != 0) {
          uVar30 = uVar38 / uVar21;
        }
        uVar20 = (**(code **)(param_1 + 0x158))
                           (pcVar53,(uVar38 - uVar30 * uVar21) + *(uint *)(param_1 + 0x13c));
        FUN_03641170(pcVar52,uVar20,pcVar53,param_1 + 0x2060);
        pcVar52 = *(code **)(param_1 + 0x148);
        uVar21 = *(uint *)(param_1 + 0x138);
        if ((*(ulong *)(param_1 + 0x150) & 1) != 0) {
          pcVar52 = *(code **)(pcVar52 +
                              *(long *)(pcVar53 + ((long)*(ulong *)(param_1 + 0x150) >> 1)));
        }
        uVar38 = 6 - *(uint *)(param_1 + 0x13c);
        uVar30 = 0;
        if (uVar21 != 0) {
          uVar30 = uVar38 / uVar21;
        }
        (*pcVar52)(pcVar53 + ((long)*(ulong *)(param_1 + 0x150) >> 1),
                   (uVar38 - uVar30 * uVar21) + *(uint *)(param_1 + 0x13c),0);
        *(char *)((long)unaff_x24 + 1) = '\0';
      }
      cVar16 = *(code *)(*(long *)(param_1 + 0xf8) + (ulong)(byte)pcVar51[1]);
      param_1[0xd0] = cVar16;
      param_1[0xd3] =
           (code)((byte)cVar16 & 0x80 | (cVar16 == (code)0x0) << 1 | (byte)param_1[0xd3] & 0x7d);
      sVar17 = *(short *)(param_1 + 0xd6) + 2;
    }
    else if ((int)uVar21 < 0xefa4) {
      if (uVar21 == 0xee17) {
        if (*pcVar51 != '\x12') {
          return (code *)&DAT_ffffffff;
        }
        if (*(char *)((long)unaff_x24 + 2) != '\0') {
          lVar41 = *(long *)(param_1 + 0x110);
          *(undefined1 *)(lVar41 + 0x1f00) = 0xd;
          *(undefined1 *)(lVar41 + 0x1f10) = 0xd;
          *(undefined1 *)(lVar41 + 0x1f14) = *(undefined1 *)(lVar41 + 0x1f04);
          *(undefined1 *)(lVar41 + 0x1f18) = *(undefined1 *)(lVar41 + 0x1f08);
          *(undefined1 *)(lVar41 + 0x1f1c) = *(undefined1 *)(lVar41 + 0x1f0c);
        }
        if (*(uint *)(param_1 + 0xd8) != 1) {
          if (*(uint *)(param_1 + 0xd8) == 0) {
            param_1[0xcc] = (code)0x1;
            *(uint *)(param_1 + 0xd8) = 1;
            return (code *)0x1;
          }
          return (code *)0x0;
        }
        *(uint *)(param_1 + 0xd8) = 0;
        param_1[0xd3] = (code)((byte)param_1[0xd3] | 4);
        sVar17 = *(short *)(param_1 + 0xd6) + 1;
        goto LAB_0363dcc4;
      }
      if (uVar21 != 0xeeb0) {
        return (code *)&DAT_ffffffff;
      }
      if (*pcVar51 != '\x12') {
        return (code *)&DAT_ffffffff;
      }
      if (*(char *)((long)unaff_x24 + 2) == '\0') {
        uVar21 = (uint)(byte)param_1[0xd0] - (uint)(byte)pcVar51[1];
        sVar17 = *(short *)(param_1 + 0xd6);
        param_1[0xd3] =
             (code)(((byte)param_1[0xd3] & 0x7c | (byte)(uVar21 >> 8) & 1 |
                    (byte)uVar21 & 0x80 | ((uVar21 & 0xff) == 0) << 1) ^ 1);
        goto LAB_0363dc7c;
      }
      *(char *)((long)unaff_x24 + 1) = '\x01';
      sVar17 = -0x10b7;
    }
    else {
      if (uVar21 != 0xefa4) {
        if (uVar21 != 0xf402) {
          return (code *)&DAT_ffffffff;
        }
        if (*(char *)(*(long *)(param_1 + 0x1c30) + 2) != '\x12') {
          return (code *)&DAT_ffffffff;
        }
        cVar16 = param_1[0xd0];
        if (*(uint *)(param_1 + 0xd8) == 0) {
          cVar16 = (code)((byte)cVar16 >> 3);
          param_1[0xd0] = cVar16;
        }
        cVar16 = (code)(*(byte *)(*(long *)(param_1 + 0x1c30) + 3) & (byte)cVar16);
        sVar17 = *(short *)(param_1 + 0xd6);
        param_1[0xd0] = cVar16;
        param_1[0xd3] =
             (code)((byte)param_1[0xd3] & 0x7d | (byte)cVar16 & 0x80 | (cVar16 == (code)0x0) << 1);
LAB_0363dc7c:
        *(short *)(param_1 + 0xd6) = sVar17 + 2;
        return (code *)0x2;
      }
      if (*pcVar51 != '\x12') {
        return (code *)&DAT_ffffffff;
      }
      if (*(char *)((long)unaff_x24 + 2) == '\0') {
        *(code *)(*(long *)(param_1 + 0xf8) + (ulong)(byte)pcVar51[1]) = param_1[0xd0];
        sVar17 = *(short *)(param_1 + 0xd6) + 2;
      }
      else {
        sVar17 = -0x1040;
      }
    }
    *(short *)(param_1 + 0xd6) = sVar17;
    return (code *)0x3;
  case (code *)0x363e008:
    (**(code **)(pcVar35 + 0x20))(pcVar23,pcVar28,4);
    local_58._4_4_ = 0;
    if (param_1[0xc] != (code)0x0) {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x34,1);
    }
    if (*(uint *)(param_1 + 8) == 2) {
      lVar36 = *(long *)param_1;
      lVar41 = (long)&local_58 + 4;
    }
    else {
      if (*(uint *)(param_1 + 8) == 1) {
        (**(code **)(*(long *)param_1 + 0x38))(param_1,(long)register0x00000008 + -0x34);
        return (code *)0x1;
      }
      lVar36 = *(long *)param_1;
      lVar41 = (long)register0x00000008 + -0x34;
    }
    (**(code **)(lVar36 + 0x20))(param_1,lVar41,4);
    return (code *)0x1;
  case (code *)0x363e808:
    lVar41 = *(long *)pcVar23;
    *(uint *)(lVar41 + 0xf330) = uVar49;
    *(undefined8 *)(lVar41 + 0xf328) = *(undefined8 *)(lVar41 + 0x70);
    if (*(char *)(lVar41 + 0x3c) == '\0') {
      uVar21 = *(uint *)(lVar41 + 0x40) & 0xff00 | uVar49 & 0xff;
      *(undefined1 *)(lVar41 + 0x58) = 1;
      *(uint *)(lVar41 + 0x40) = uVar21;
      *(uint *)(lVar41 + 0x4c) = uVar21;
      bVar33 = 0;
    }
    else {
      *(uint *)(lVar41 + 0x40) = *(uint *)(lVar41 + 0x40) & 0xff | (uVar49 & 0x3f) << 8;
      if ((((uVar49 >> 4 & 1) == 0) || ((*(byte *)(lVar41 + 0x45) >> 4 & 1) != 0)) ||
         (*(int *)(*(long *)(lVar41 + 0x90) + 0x298) != 4)) {
        bVar33 = 1;
      }
      else {
        pcVar23 = (code *)FUN_0364d444(*(long *)(lVar41 + 0x90) + 0x1c68);
        bVar33 = *(byte *)(lVar41 + 0x3c);
      }
      *(byte *)(lVar41 + 0x39) = *(byte *)(lVar41 + 0x39) & 0xfc | (byte)(uVar49 >> 2) & 3;
    }
    *(byte *)(lVar41 + 0x3c) = bVar33 ^ 1;
    return pcVar23;
  case (code *)0x363f480:
    (**(code **)(*(long *)param_1 + 0x38))(param_1,(long)register0x00000008 + -0x34);
    if (param_1[0xc] != (code)0x0) {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x34,1);
    }
    if (*(uint *)(param_1 + 8) == 2) {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,param_2 + 0x30,4);
      cVar16 = param_1[0xc];
    }
    else if (*(uint *)(param_1 + 8) == 1) {
      (**(code **)(*(long *)param_1 + 0x38))(param_1,(long)register0x00000008 + -0x34);
      cVar16 = param_1[0xc];
    }
    else {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x34,4);
      *(uint *)(param_2 + 0x30) = 0;
      cVar16 = param_1[0xc];
    }
    if (cVar16 != (code)0x0) {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x34,1);
    }
    if (*(uint *)(param_1 + 8) == 2) {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,param_2 + 0x34,4);
    }
    else if (*(uint *)(param_1 + 8) == 1) {
      (**(code **)(*(long *)param_1 + 0x38))(param_1,(long)register0x00000008 + -0x34);
    }
    else {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x34,4);
      *(uint *)(param_2 + 0x34) = 0;
    }
    cVar16 = param_2[0x38];
    (**(code **)(*(long *)param_1 + 0x28))(param_1,(long)register0x00000008 + -0x34);
    param_2[0x38] = (code)(cVar16 != (code)0x0);
    cVar16 = param_2[0x39];
    (**(code **)(*(long *)param_1 + 0x28))(param_1,(long)register0x00000008 + -0x34);
    param_2[0x39] = (code)(cVar16 != (code)0x0);
    cVar16 = param_2[0x3a];
    (**(code **)(*(long *)param_1 + 0x28))(param_1,(long)register0x00000008 + -0x34);
    param_2[0x3a] = (code)(cVar16 != (code)0x0);
    if (param_1[0xc] != (code)0x0) {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x34,1);
    }
    if (*(uint *)(param_1 + 8) == 2) {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,param_2 + 0x3c,4);
      cVar16 = param_1[0xc];
    }
    else if (*(uint *)(param_1 + 8) == 1) {
      (**(code **)(*(long *)param_1 + 0x38))(param_1,(long)register0x00000008 + -0x34);
      cVar16 = param_1[0xc];
    }
    else {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x34,4);
      *(uint *)(param_2 + 0x3c) = 0;
      cVar16 = param_1[0xc];
    }
    if (cVar16 != (code)0x0) {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x34,1);
    }
    if (*(uint *)(param_1 + 8) == 2) {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,param_2 + 0x40,4);
    }
    else if (*(uint *)(param_1 + 8) == 1) {
      (**(code **)(*(long *)param_1 + 0x38))(param_1,(long)register0x00000008 + -0x34);
    }
    else {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x34,4);
      *(uint *)(param_2 + 0x40) = 0;
    }
    cVar16 = param_2[0x50];
    (**(code **)(*(long *)param_1 + 0x28))(param_1,(long)register0x00000008 + -0x34);
    param_2[0x50] = (code)(cVar16 != (code)0x0);
    cVar16 = param_2[0x98];
    (**(code **)(*(long *)param_1 + 0x28))(param_1,(long)register0x00000008 + -0x34);
    param_2[0x98] = (code)(cVar16 != (code)0x0);
    cVar16 = param_2[0x99];
    uVar58 = CONCAT14(cVar16,(int)unaff_x25);
    (**(code **)(*(long *)param_1 + 0x28))(param_1,(long)register0x00000008 + -0x34);
    param_2[0x99] = (code)(cVar16 != (code)0x0);
    if (param_1[0xc] != (code)0x0) {
      uVar58 = CONCAT14(4,(int)unaff_x25);
      (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x34,1);
    }
    unaff_x25 = (code *)(ulong)uVar58;
    if (*(uint *)(param_1 + 8) == 2) {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,param_2 + 0x9c,4);
      cVar16 = param_1[0xc];
    }
    else if (*(uint *)(param_1 + 8) == 1) {
      unaff_x25 = (code *)(ulong)(uint)uVar58;
      (**(code **)(*(long *)param_1 + 0x38))(param_1,(long)register0x00000008 + -0x34);
      cVar16 = param_1[0xc];
    }
    else {
      unaff_x25 = (code *)((ulong)uVar58 & 0xffffffff);
      (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x34,4);
      *(uint *)(param_2 + 0x9c) = 0;
      cVar16 = param_1[0xc];
    }
    if (cVar16 != (code)0x0) {
      unaff_x25 = (code *)(ulong)CONCAT14(4,(uint)uVar58);
      (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x34,1);
    }
    if (*(uint *)(param_1 + 8) == 2) {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,param_2 + 0xa0,4);
    }
    else if (*(uint *)(param_1 + 8) == 1) {
      unaff_x25 = (code *)((ulong)unaff_x25 & 0xffffffff);
      (**(code **)(*(long *)param_1 + 0x38))(param_1,(long)register0x00000008 + -0x34);
    }
    else {
      unaff_x25 = (code *)((ulong)unaff_x25 & 0xffffffff);
      (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x34,4);
      *(uint *)(param_2 + 0xa0) = 0;
    }
    uVar22 = FUN_03642b00(param_2 + 0xb0,param_1);
    if ((uVar22 & 1) != 0) {
      uVar38 = *(uint *)(param_1 + 8);
      pcVar55 = (code *)0x47d0;
      uVar21 = (uint)unaff_x25;
      if (uVar38 == 2) {
        if (param_1[0xc] != (code)0x0) {
          unaff_x25 = (code *)(ulong)CONCAT14(4,uVar21);
          (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x34,1);
          if (*(uint *)(param_1 + 8) != 2) {
            if (*(uint *)(param_1 + 8) != 1) {
LAB_0363fd20:
              unaff_x25 = (code *)((ulong)unaff_x25 & 0xffffffff);
              goto LAB_0363fd24;
            }
            goto LAB_0363fc84;
          }
        }
LAB_0363fd24:
        lVar36 = *(long *)param_1;
        lVar41 = (long)register0x00000008 + -0x34;
LAB_0363fd2c:
        (**(code **)(lVar36 + 0x20))(param_1,lVar41,4);
      }
      else {
        if (uVar38 == 1) {
          uVar21 = *(uint *)(param_2 + 0x88);
          if (param_1[0xc] == (code)0x0) {
LAB_0363fc6c:
            unaff_x25 = (code *)(ulong)uVar21;
LAB_0363fc84:
            (**(code **)(*(long *)param_1 + 0x38))(param_1,(long)register0x00000008 + -0x34);
            goto switchD_03600464_caseD_363fc98;
          }
          unaff_x25 = (code *)(ulong)CONCAT14(4,uVar21);
          (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x34,1);
          if (*(uint *)(param_1 + 8) != 2) {
            if (*(uint *)(param_1 + 8) != 1) goto LAB_0363fd20;
            goto LAB_0363fc6c;
          }
          lVar36 = *(long *)param_1;
          lVar41 = (long)register0x00000008 + -0x38;
          goto LAB_0363fd2c;
        }
        if (uVar38 == 0) {
          if (param_1[0xc] == (code)0x0) {
LAB_0363fca4:
            unaff_x25 = (code *)((ulong)unaff_x25 & 0xffffffff);
            (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x34,4);
            uVar21 = 0;
          }
          else {
            unaff_x25 = (code *)(ulong)CONCAT14(4,uVar21);
            (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x34,1);
            if (*(uint *)(param_1 + 8) == 2) {
              (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x38,4);
            }
            else {
              if (*(uint *)(param_1 + 8) != 1) goto LAB_0363fca4;
              (**(code **)(*(long *)param_1 + 0x38))(param_1,(long)register0x00000008 + -0x34);
              uVar21 = extraout_w8_00;
            }
          }
          uVar20 = SUB84(unaff_x25,0);
          *(uint *)(param_2 + 0x88) = uVar21;
          cVar16 = param_1[0xc];
          pcVar48 = unaff_x25;
          goto joined_r0x0363fc9c;
        }
      }
      uVar20 = SUB84(unaff_x25,0);
      cVar16 = param_1[0xc];
      pcVar48 = unaff_x25;
      goto joined_r0x0363fc9c;
    }
    goto LAB_036400f4;
  case (code *)0x363fc98:
switchD_03600464_caseD_363fc98:
    uVar20 = SUB84(unaff_x25,0);
    cVar16 = param_1[0xc];
    pcVar48 = unaff_x25;
joined_r0x0363fc9c:
    if (cVar16 != (code)0x0) {
      pcVar48 = (code *)(ulong)CONCAT14(4,uVar20);
      (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x34,1);
    }
    uVar38 = *(uint *)(param_1 + 8);
    unaff_x25 = param_2 + (long)pcVar55;
    pcVar55 = param_2 + 0x8c;
    bVar15 = uVar38 == 2;
switchD_03600464_caseD_363fd74:
    if (bVar15) {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,pcVar55,4);
    }
    else if (uVar38 == 1) {
      pcVar28 = (code *)((long)register0x00000008 + -0x34);
      pcVar23 = param_1;
switchD_03600464_caseD_363fd94:
      pcVar48 = (code *)((ulong)pcVar48 & 0xffffffff);
      (**(code **)(*(long *)param_1 + 0x38))(pcVar23,pcVar28);
    }
    else {
      pcVar48 = (code *)((ulong)pcVar48 & 0xffffffff);
      (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x34,4);
      *(uint *)pcVar55 = 0;
    }
    pcVar52 = param_2 + 0x94;
    if (uVar56 < 7) {
      *(uint *)pcVar52 = 0;
LAB_0363fe88:
      unaff_x25[0x18] = (code)0x0;
switchD_03600464_caseD_363fe8c:
      uVar30 = (uint)pcVar48;
      *(undefined2 *)(unaff_x25 + 0x19) = 0;
      uVar21 = *(uint *)(param_1 + 8);
    }
    else {
      if (param_1[0xc] != (code)0x0) {
        pcVar48 = (code *)(ulong)CONCAT14(4,(int)pcVar48);
        (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x34,1);
      }
      if (*(uint *)(param_1 + 8) == 2) {
        (**(code **)(*(long *)param_1 + 0x20))(param_1,pcVar52,4);
      }
      else if (*(uint *)(param_1 + 8) == 1) {
        pcVar48 = (code *)((ulong)pcVar48 & 0xffffffff);
        (**(code **)(*(long *)param_1 + 0x38))(param_1,(long)register0x00000008 + -0x34);
      }
      else {
        pcVar48 = (code *)((ulong)pcVar48 & 0xffffffff);
        (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x34,4);
        *(uint *)pcVar52 = 0;
      }
      if (param_1[0xc] != (code)0x0) {
        pcVar48 = (code *)(ulong)CONCAT14(4,(int)pcVar48);
        (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x34,1);
      }
      uVar20 = SUB84(pcVar48,0);
      if (*(uint *)(param_1 + 8) == 2) {
        (**(code **)(*(long *)param_1 + 0x20))(param_1,param_2 + 0x90,4);
      }
      else {
        if (*(uint *)(param_1 + 8) == 1) {
          (**(code **)(*(long *)param_1 + 0x38))(param_1,(long)register0x00000008 + -0x34);
        }
        else {
          (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x34,4);
          *(uint *)(param_2 + 0x90) = 0;
        }
        pcVar48 = (code *)((ulong)pcVar48 & 0xffffffff);
      }
      if (uVar56 < 9) goto LAB_0363fe88;
      cVar16 = unaff_x25[0x18];
      pcVar48 = (code *)(ulong)CONCAT14(cVar16,uVar20);
      (**(code **)(*(long *)param_1 + 0x28))(param_1,(long)register0x00000008 + -0x34);
      unaff_x25[0x18] = (code)(cVar16 != (code)0x0);
      if (uVar56 == 9) goto switchD_03600464_caseD_363fe8c;
      uVar38 = (uint)(byte)unaff_x25[0x19];
switchD_03600464_caseD_3640020:
      uVar30 = (uint)pcVar48;
      (**(code **)(*(long *)param_1 + 0x28))(param_1,(long)register0x00000008 + -0x34);
      unaff_x25[0x19] = (code)((char)uVar38 != '\0');
      cVar16 = unaff_x25[0x1a];
      (**(code **)(*(long *)param_1 + 0x28))(param_1,(long)register0x00000008 + -0x34);
      unaff_x25[0x1a] = (code)(cVar16 != (code)0x0);
      uVar21 = *(uint *)(param_1 + 8);
    }
    if ((uVar21 == 0) && (*(uint *)(param_2 + 0x88) != 2)) {
      (**(code **)(param_2 + 0x47b0))(*(uint *)(param_2 + 0x88),*(undefined8 *)(param_2 + 0x47b8));
    }
    cVar16 = *unaff_x25;
    (**(code **)(*(long *)param_1 + 0x28))(param_1,(long)register0x00000008 + -0x34);
    *unaff_x25 = (code)(cVar16 != (code)0x0);
    if (uVar56 < 0xb) {
      uVar21 = FUN_03640670(param_2,param_1,5,pcVar53);
      goto LAB_036400f8;
    }
    if (*(code **)(param_2 + 0x60) != pcVar53) {
LAB_036400f4:
      uVar21 = 0;
      goto LAB_036400f8;
    }
    if (*(uint *)(param_1 + 8) == 0) {
      uVar21 = *(uint *)(param_2 + 0x40);
      FUN_0363e9a4(param_2,5,pcVar53,*(uint *)(param_2 + 0x68));
      memset(*(void **)(param_2 + 0x80),0,*(size_t *)(param_2 + 0x78));
LAB_036403f0:
      if (param_1[0xc] != (code)0x0) {
        (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x34,1);
      }
      if (*(uint *)(param_1 + 8) == 2) {
        (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x38,4);
LAB_03640478:
        if (uVar30 == 0xffffffff) goto LAB_036405dc;
      }
      else {
        if (*(uint *)(param_1 + 8) == 1) {
          (**(code **)(*(long *)param_1 + 0x38))(param_1,(long)register0x00000008 + -0x34);
          goto LAB_03640478;
        }
        (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x34,4);
        uVar30 = 0;
      }
      if (param_1[0xc] != (code)0x0) {
        (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x34,1);
      }
      if (*(uint *)(param_1 + 8) == 2) {
        (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)&local_58 + 4,4);
      }
      else if (*(uint *)(param_1 + 8) == 1) {
        (**(code **)(*(long *)param_1 + 0x38))(param_1,(long)register0x00000008 + -0x34);
      }
      else {
        (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x34,4);
        local_58 = (code *)((ulong)local_58 & 0xffffffff);
      }
      (**(code **)(*(long *)param_1 + 0x20))
                (param_1,*(long *)(param_2 + 0x58) + (ulong)uVar30,local_58._4_4_);
      uVar22 = (ulong)uVar30;
      if (uVar30 < local_58._4_4_ + uVar30) {
        uVar46 = (ulong)(uVar30 >> 10);
        do {
          uVar22 = uVar22 + 0x400;
          *(undefined1 *)(*(long *)(param_2 + 0x80) + uVar46) = 1;
          uVar46 = uVar46 + 1;
        } while (uVar22 < local_58._4_4_ + uVar30);
      }
      goto LAB_036403f0;
    }
    if (pcVar53 != (code *)0x0) {
      pcVar52 = (code *)0x0;
      do {
        while (*(char *)(*(long *)(param_2 + 0x80) + ((ulong)pcVar52 >> 10)) != '\x01') {
          pcVar55 = pcVar53;
          if ((code *)0x3ff < pcVar53) {
            pcVar55 = (code *)0x400;
          }
          pcVar52 = pcVar55 + (long)pcVar52;
          pcVar53 = pcVar53 + -(long)pcVar55;
          if (pcVar53 == (code *)0x0) goto LAB_03640360;
        }
        pcVar55 = (code *)0x0;
        do {
          if ((pcVar52 + *(long *)(param_2 + 0x58))[(long)pcVar55] != (pcVar52 + 5)[(long)pcVar55])
          goto LAB_03640180;
          pcVar55 = pcVar55 + 1;
        } while (pcVar53 != pcVar55);
        pcVar55 = pcVar53;
LAB_03640180:
        lVar41 = (long)pcVar53 - (long)pcVar55;
        if (lVar41 == 0) break;
        pcVar55 = pcVar55 + (long)pcVar52;
        lVar36 = 0;
        if (lVar41 != 0) {
          do {
            if (pcVar55[lVar36 + *(long *)(param_2 + 0x58)] == pcVar55[lVar36 + 5])
            goto LAB_036401c0;
            lVar36 = lVar36 + 1;
          } while (lVar41 != lVar36);
          lVar36 = lVar41;
        }
LAB_036401c0:
        if (param_1[0xc] != (code)0x0) {
          (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x34,1);
        }
        if (*(uint *)(param_1 + 8) == 2) {
          (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x38,4);
        }
        else if (*(uint *)(param_1 + 8) == 1) {
          (**(code **)(*(long *)param_1 + 0x38))(param_1,(long)register0x00000008 + -0x34);
        }
        else {
          (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x34,4);
        }
        local_58 = (code *)CONCAT44((int)lVar36,(uint)local_58);
        if (param_1[0xc] != (code)0x0) {
          (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x34,1);
        }
        if (*(uint *)(param_1 + 8) == 2) {
          (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)&local_58 + 4,4);
        }
        else if (*(uint *)(param_1 + 8) == 1) {
          (**(code **)(*(long *)param_1 + 0x38))(param_1,(long)register0x00000008 + -0x34);
        }
        else {
          (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)register0x00000008 + -0x34,4);
          local_58 = (code *)((ulong)local_58 & 0xffffffff);
        }
        (**(code **)(*(long *)param_1 + 0x20))(param_1,pcVar55 + *(long *)(param_2 + 0x58),lVar36);
        pcVar52 = pcVar55 + lVar36;
        pcVar53 = (code *)(lVar41 - lVar36);
      } while (pcVar53 != (code *)0x0);
    }
LAB_03640360:
    if (param_1[0xc] != (code)0x0) {
      pcVar28 = (code *)((long)register0x00000008 + -0x34);
      pcVar35 = *(code **)param_1;
switchD_03600464_caseD_3640380:
      (**(code **)(pcVar35 + 0x20))(param_1,pcVar28,1);
    }
    if (*(uint *)(param_1 + 8) == 2) {
      lVar36 = *(long *)param_1;
      lVar41 = (long)register0x00000008 + -0x38;
LAB_03640650:
      (**(code **)(lVar36 + 0x20))(param_1,lVar41,4);
    }
    else {
      if (*(uint *)(param_1 + 8) != 1) {
        lVar36 = *(long *)param_1;
        lVar41 = (long)register0x00000008 + -0x34;
        goto LAB_03640650;
      }
      (**(code **)(*(long *)param_1 + 0x38))(param_1,(long)register0x00000008 + -0x34);
    }
LAB_03640660:
    uVar21 = 1;
LAB_036400f8:
    return (code *)(ulong)(uVar21 & 1);
  case (code *)0x363fd74:
    goto switchD_03600464_caseD_363fd74;
  case (code *)0x363fd94:
    goto switchD_03600464_caseD_363fd94;
  case (code *)0x363fe8c:
    goto switchD_03600464_caseD_363fe8c;
  case (code *)0x3640020:
    goto switchD_03600464_caseD_3640020;
  case (code *)0x3640380:
    goto switchD_03600464_caseD_3640380;
  }
switchD_03600464_caseD_360038c:
  (**(code **)(*(long *)param_2 + 0x20))(param_2,pcVar28,pcVar31);
LAB_0360039c:
  uVar38 = (uint)(byte)param_1[-0xdee];
  pcVar28 = *(code **)(param_1 + 0x20);
  pcVar23 = param_2;
  pcVar39 = (code *)0x2000;
switchD_03600464_caseD_36003ac:
  pcVar31 = pcVar39;
  if (2 < uVar38) {
    pcVar31 = (code *)0x8000;
  }
switchD_03600464_caseD_36003b8:
  pcVar35 = *(code **)param_2;
switchD_03600464_caseD_36003bc:
  (**(code **)(pcVar35 + 0x20))(pcVar23,pcVar28,pcVar31);
  (**(code **)(*(long *)param_2 + 0x20))(param_2,*(undefined8 *)(param_1 + 0x28),0x100);
  (**(code **)(*(long *)param_2 + 0x20))(param_2,*(undefined8 *)(param_1 + 0x30),0x7f);
  (**(code **)(*(long *)param_2 + 0x28))(param_2,param_1);
  if (uVar21 == 0) {
    uVar38 = (uint)(byte)*param_1;
    pcVar39 = (code *)&DAT_00000008;
    param_1[0x1d4] = (code)0x5;
    param_1[0x1d6] = (code)0x5;
switchD_03600464_caseD_3600480:
    param_1[0x1dc] = SUB81(pcVar39,0);
    param_1[0x1de] = (code)0x0;
    param_1[0x1c0] = (code)((uVar38 != 0) << 1);
    param_1[0x1c2] = (code)0x2;
    param_1[0x1c4] = (code)0x2;
    param_1[0x1c6] = (code)0x2;
    param_1[0x1c8] = (code)0x3;
    param_1[0x1ca] = (code)0x3;
    param_1[0x1cc] = (code)0x3;
    param_1[0x1ce] = (code)0x3;
    param_1[0x1d0] = (code)0x4;
    param_1[0x1d2] = (code)0x4;
    param_1[0x1d8] = (code)0x6;
    param_1[0x1da] = (code)0x7;
    (**(code **)(*(long *)param_2 + 0x28))(param_2,param_1 + 1);
    if (((byte)param_1[3] >> 2 & 1) == 0) {
      cVar16 = param_1[1];
      param_1[1] = SUB81((ulong)(byte)cVar16 & 1,0);
      *(ulong *)(param_1 + 0x58) = *(long *)(param_1 + 0x10) + ((ulong)(byte)cVar16 & 1) * 0x2000;
    }
    pcVar52 = param_1 + 2;
    (**(code **)(*(long *)param_2 + 0x28))(param_2,pcVar52);
    cVar16 = param_1[2];
    uVar38 = (uint)(byte)cVar16;
    if ((byte)param_1[-0xdee] < 3) {
      if (*param_1 == (code)0x0) {
        pcVar39 = (code *)(ulong)((byte)cVar16 & 7);
        bVar7 = ((byte)cVar16 & 6) == 0;
switchD_03600464_caseD_3600544:
        uVar21 = (uint)pcVar39;
        *pcVar52 = SUB81(pcVar39,0);
        if (bVar7) {
          uVar21 = 1;
        }
        uVar21 = uVar21 & 1;
        goto LAB_0360057c;
      }
    }
    else {
switchD_03600464_caseD_3600554:
      if ((((char)param_1[-0xcc0] < '\0') || (((byte)param_1[3] >> 2 & 1) == 0)) ||
         (*param_1 == (code)0x0)) {
        uVar21 = uVar38 & 7;
        *pcVar52 = SUB41(uVar21,0);
        if ((uVar38 & 6) == 0) {
          uVar21 = 1;
        }
LAB_0360057c:
        lVar41 = *(long *)(param_1 + 0x20) + (ulong)uVar21 * 0x1000;
        *(long *)(param_1 + 0x70) = lVar41;
        *(long *)(param_1 + 0x80) = lVar41;
      }
    }
  }
  else {
    (**(code **)(*(long *)param_2 + 0x28))(param_2,param_1 + 1);
    (**(code **)(*(long *)param_2 + 0x28))(param_2,param_1 + 2);
  }
  pcVar35 = *(code **)param_2;
switchD_03600464_caseD_3600594:
  (**(code **)(pcVar35 + 0x28))(param_2,param_1 + 3);
  pcVar35 = *(code **)param_2;
  pcVar28 = param_1 + 4;
switchD_03600464_caseD_36005ac:
  (**(code **)(pcVar35 + 0x28))(param_2,pcVar28);
  (**(code **)(*(long *)param_2 + 0x28))(param_2,param_1 + 5);
  unaff_x24 = (long *)0x0;
switchD_03600464_caseD_3600618:
  do {
    unaff_x26 = param_1 + (long)unaff_x24;
    (**(code **)(*(long *)param_2 + 0x28))(param_2,unaff_x26 + 0x168);
    (**(code **)(*(long *)param_2 + 0x28))(param_2,unaff_x26 + 0x169);
    if (*(uint *)(param_2 + 8) == 2) {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,unaff_x26 + 0x16a,2);
switchD_03600464_caseD_36006a8:
    }
    else if (*(uint *)(param_2 + 8) == 1) {
      (**(code **)(*(long *)param_2 + 0x30))(param_2,(long)register0x00000008 + -0x60);
    }
    else {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)register0x00000008 + -0x60,2);
      *(undefined2 *)(unaff_x26 + 0x16a) = 0;
    }
switchD_03600464_caseD_36006e8:
    pcVar52 = unaff_x26 + 0x16c;
    if (*(uint *)(param_2 + 8) == 2) {
switchD_03600464_caseD_36005e0:
      (**(code **)(*(long *)param_2 + 0x20))(param_2,pcVar52,2);
    }
    else if (*(uint *)(param_2 + 8) == 1) {
      pcVar28 = (code *)((long)register0x00000008 + -0x60);
      pcVar23 = param_2;
switchD_03600464_caseD_3600720:
      (**(code **)(*(long *)param_2 + 0x30))(pcVar23,pcVar28);
    }
    else {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)register0x00000008 + -0x60,2);
      *(undefined2 *)pcVar52 = 0;
    }
    (**(code **)(*(long *)param_2 + 0x28))(param_2,unaff_x26 + 0x16e);
    unaff_x24 = unaff_x24 + 1;
  } while (unaff_x24 != (long *)&DAT_00000028);
  if ((uint)local_68 < 5) {
    param_1[400] = (code)0x0;
    *(undefined8 *)(param_1 + 0x198) = 0;
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    *(undefined8 *)(param_1 + 0x1b0) = 0;
  }
  else {
    cVar16 = param_1[400];
    (**(code **)(*(long *)param_2 + 0x28))(param_2,(long)register0x00000008 + -0x60);
    param_1[400] = (code)(cVar16 != (code)0x0);
    if (param_2[0xc] != (code)0x0) {
switchD_03600464_caseD_36007b4:
      (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)register0x00000008 + -0x60,1);
    }
    if (*(uint *)(param_2 + 8) == 2) {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,param_1 + 0x198,8);
    }
    else if (*(uint *)(param_2 + 8) == 1) {
      (**(code **)(*(long *)param_2 + 0x40))(param_2,(long)register0x00000008 + -0x60);
    }
    else {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)register0x00000008 + -0x60,8);
      *(undefined8 *)(param_1 + 0x198) = 0;
    }
    pcVar52 = param_1 + 0x1b0;
    FUN_035efdb0(param_2,param_1 + 0x1a0,pcVar52);
    if (param_2[0xc] != (code)0x0) {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)register0x00000008 + -0x60,1);
    }
    if (*(uint *)(param_2 + 8) == 2) {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,pcVar52,8);
    }
    else if (*(uint *)(param_2 + 8) == 1) {
      (**(code **)(*(long *)param_2 + 0x40))(param_2,(long)register0x00000008 + -0x60);
    }
    else {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)register0x00000008 + -0x60,8);
      *(undefined8 *)pcVar52 = 0;
    }
  }
  uVar21 = *(uint *)(param_2 + 8);
  if (uVar21 == 2) {
    if (param_2[0xc] != (code)0x0) {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)register0x00000008 + -0x60,1);
      if ((*(uint *)(param_2 + 8) != 2) && (*(uint *)(param_2 + 8) == 1)) goto LAB_03600a64;
    }
LAB_03600ab8:
    lVar36 = *(long *)param_2;
    lVar41 = (long)register0x00000008 + -0x60;
LAB_03600ac0:
    (**(code **)(lVar36 + 0x20))(param_2,lVar41,4);
  }
  else if (uVar21 == 1) {
    local_58 = (code *)CONCAT44(*(uint *)(param_1 + 0xa8),(uint)local_58);
    if (param_2[0xc] != (code)0x0) {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)register0x00000008 + -0x60,1);
      if (*(uint *)(param_2 + 8) == 2) {
        lVar36 = *(long *)param_2;
        lVar41 = (long)&local_58 + 4;
        goto LAB_03600ac0;
      }
      if (*(uint *)(param_2 + 8) != 1) goto LAB_03600ab8;
    }
LAB_03600a64:
    (**(code **)(*(long *)param_2 + 0x38))(param_2,(long)register0x00000008 + -0x60);
  }
  else if (uVar21 == 0) {
    if (param_2[0xc] == (code)0x0) {
LAB_03600a7c:
      (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)register0x00000008 + -0x60,4);
      uVar21 = 0;
    }
    else {
      (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)register0x00000008 + -0x60,1);
      if (*(uint *)(param_2 + 8) != 2) {
        if (*(uint *)(param_2 + 8) == 1) {
          (**(code **)(*(long *)param_2 + 0x38))(param_2,(long)register0x00000008 + -0x60);
          *(uint *)(param_1 + 0xa8) = (uint)extraout_x8;
          uVar22 = extraout_x8;
          goto LAB_03600b08;
        }
        goto LAB_03600a7c;
      }
      (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)&local_58 + 4,4);
      uVar21 = local_58._4_4_;
    }
    uVar22 = (ulong)uVar21;
    *(uint *)(param_1 + 0xa8) = uVar21;
    goto LAB_03600b08;
  }
  uVar22 = (ulong)*(uint *)(param_1 + 0xa8);
LAB_03600b08:
                    /* WARNING: Could not recover jumptable at 0x03600b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar52 = (code *)(*(code *)(&UNK_03600b24 + (ulong)(&USHORT_04193544)[uVar22 & 0xffffffff] * 4))
                              ();
  return pcVar52;
code_r0x03604e44:
  pcVar55 = *(code **)(param_1 + 0x140);
  cVar16 = param_1[0x9b4];
  pcVar52 = (code *)0x30d40;
  local_58 = (code *)(*(long *)(param_1 + 0x148) + 0x40d0);
  unaff_x25 = pcVar55 + 0x40d2;
  cVar37 = param_1[0x9b0];
  pcVar47 = (code *)(*(long *)(param_1 + 0x148) + 0xf78);
  uVar30 = (uint)((byte)cVar16 >> 4) * 0x1b8 + 0x1070;
  iVar54 = ((byte)cVar16 & 0xf) * 0x1054;
  iVar19 = iVar54 + 52000;
  unaff_x26 = (code *)(ulong)(byte)param_1[0x138];
  uVar21 = iVar54 + 0x11650 + uVar30 * -3;
  unaff_x24 = (long *)(ulong)*(uint *)(param_1 + 0x9a8);
  uVar38 = uVar21;
  if (param_1[0x9b2] != (code)0x0 || cVar37 != (code)0x0) {
    uVar38 = uVar30;
  }
  uVar30 = 0xcb70;
  if (3 < (byte)cVar16) {
    uVar30 = ((byte)cVar16 + 0xc & 0xf) * 0x1054 + 52000;
  }
  in_stack_ffffffffffffffa0 = *(long **)(param_1 + 0x180);
  if (cVar37 != (code)0x0) {
    iVar19 = 0x1930;
  }
  local_68 = (code *)CONCAT44(iVar19,(uint)local_68);
  if (cVar37 != (code)0x0) {
    uVar30 = 0x18ec;
  }
  if (param_1[0x9b7] != (code)0x0) {
    uVar30 = uVar21;
  }
  if (param_1[0x9b6] != (code)0x0) {
    uVar38 = iVar54 + 0xcb90;
  }
  uStack_78 = (ulong)uVar30 << 0x20;
  unaff_x30 = (code *)((ulong)uVar38 << 0x20);
  local_70 = (long *)(ulong)*(uint *)(param_1 + 0x9ac);
  param_2 = pcVar35;
  unaff_x28 = plVar57;
LAB_03604f84:
  pcVar53 = (code *)*unaff_x28;
  goto switchD_03600464_caseD_3604f88;
LAB_036405dc:
  if (uVar21 != 0xffffffff) {
    *(uint *)(param_2 + 0x40) = uVar21;
    *(ulong *)(param_2 + 0x48) =
         *(long *)(param_2 + 0x58) + (ulong)(*(uint *)(param_2 + 0x70) * uVar21);
  }
  goto LAB_03640660;
switchD_03600464_caseD_360179c:
  lVar41 = *(long *)param_2;
  pcVar52 = *(code **)(param_1 + 0xd0);
LAB_036017a4:
  (**(code **)(lVar41 + 0x20))(pcVar23,pcVar52,pcVar31);
LAB_036017ac:
                    /* WARNING: Could not recover jumptable at 0x036017c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar52 = (code *)(*(code *)(&UNK_036017c8 +
                              (ulong)*(byte *)((long)&USHORT_0419355c +
                                              (ulong)*(uint *)(param_1 + 0xa8)) * 4))();
  return pcVar52;
}

