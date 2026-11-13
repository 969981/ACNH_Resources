
void FUN_00dd88ac(long param_1,undefined *param_2)

{
  undefined **ppuVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  byte bVar14;
  uint *puVar15;
  uint *puVar16;
  long lVar17;
  long lVar18;
  undefined *local_98;
  char *pcStack_90;
  undefined8 local_88;
  undefined **local_80;
  char *local_78;
  undefined8 local_70;
  int local_5c;
  uint local_58;
  
  puVar3 = PTR_DAT_04bb32e0;
  pbVar2 = PTR_DAT_04bb32e0;
  if (*(long *)(param_1 + 8) != 0) {
    pbVar2 = (byte *)(*(long *)(param_1 + 8) + 0x2a8);
  }
  FUN_01b488b4(param_2,1);
  puVar8 = PTR_DAT_04bb2020;
  local_58 = (uint)(param_2[0xb8] == '\x01');
  if (*(long *)(param_1 + 8) != 0) {
    puVar3 = (undefined *)(*(long *)(param_1 + 8) + 0x2a8);
  }
  pcStack_90 = (&PTR_s_send_message_card_player_04a86330)[(int)local_58];
  local_98 = PTR_DAT_04bb2020 + 0x10;
  FUN_025ffac8(&local_80,&local_98,puVar3);
  ppuVar1 = (undefined **)(PTR_DAT_04bc3400 + 0x10);
  pcStack_90 = (char *)0x0;
  local_88 = 0;
  local_98 = param_2;
  local_80 = ppuVar1;
  FUN_025d4e10(&local_80,&local_98);
  local_80 = ppuVar1;
  iVar9 = FUN_025d517c(&local_80);
  if (iVar9 == -1) {
LAB_00dd899c:
    if (local_5c == 0) {
      local_5c = 1;
    }
  }
  else {
    iVar9 = (*(code *)local_80[4])(&local_80);
    local_98 = (undefined *)CONCAT44(local_98._4_4_,iVar9);
    if (0xc < iVar9) goto LAB_00dd899c;
  }
  FUN_02601530(&local_80);
  local_80 = (undefined **)(puVar8 + 0x10);
  local_78 = "SendLetter";
  FUN_0279a9f0(pbVar2,&local_80,1);
  puVar3 = PTR_DAT_04bb43c0;
  lVar18 = *(long *)PTR_DAT_04bb43c0;
  uVar10 = FUN_0277d6c4(param_2 + 0xc0);
  lVar17 = *(long *)puVar3;
  if (lVar17 != 0) {
    lVar18 = *(long *)(lVar18 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
    if ((uVar10 < *(uint *)(lVar18 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
      local_70 = 0;
      local_78 = *(char **)(param_2 + 0xc0);
      local_80 = &PTR_FUN_04a36b50;
      uVar10 = FUN_0277d6c4(&local_78);
      if (*(long *)puVar3 == 0) {
LAB_00dd8b54:
        local_98 = (undefined *)CONCAT44(local_98._4_4_,0x56);
        uVar10 = 0xbc;
      }
      else {
        lVar17 = *(long *)(lVar17 + 0x57e58);
        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if ((*(uint *)(lVar17 + 0x1d8) <= uVar10) ||
           (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8) == 0)) goto LAB_00dd8b54;
        lVar17 = *(long *)PTR_DAT_04bc0428;
        uVar10 = FUN_0277d6c4(param_2 + 0xc0);
        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if ((*(uint *)(lVar17 + 0x1d8) <= uVar10) ||
           (puVar15 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8),
           puVar15 == (uint *)0x0)) goto LAB_00dd8b54;
        uVar10 = 0;
        local_98 = (undefined *)CONCAT44(local_98._4_4_,0x56);
        uVar7 = *puVar15;
        if ((uVar7 != 0) && (puVar15 != (uint *)(ulong)uVar7)) {
          puVar16 = (uint *)((long)puVar15 - (long)(ulong)uVar7);
          uVar10 = 0;
          if (*puVar16 != 0) {
            uVar10 = puVar16[1];
            if ((uVar10 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
              lVar17 = 0xc;
              if (*(char *)((long)puVar16 + 10) != '\0') {
                lVar17 = 0x1c;
              }
              lVar17 = (long)puVar16 + lVar17 + (ulong)(ushort)puVar16[2] * 8;
              if (lVar17 != 0) {
                uVar7 = 0;
                if ((ulong)uVar10 != 0) {
                  uVar7 = (uint)((ulong)((long)puVar15 - lVar17) / (ulong)uVar10);
                }
                if (*puVar16 <= uVar7) {
                  uVar7 = 0xffffffff;
                }
                if ((uVar7 < DAT_05326ec0) &&
                   (uVar10 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar7 * 2), uVar10 < 0xbd))
                goto LAB_00dd8b60;
              }
            }
            uVar10 = 0;
          }
        }
      }
LAB_00dd8b60:
      if (uVar10 == (uint)local_98) {
        local_98 = puVar8 + 0x10;
        pcStack_90 = "EDSendFlower";
        FUN_0279b044(pbVar2,&local_98,1);
      }
    }
  }
  bVar14 = *pbVar2;
  if (7 < bVar14) {
    bVar14 = 0xff;
  }
  local_80 = (undefined **)CONCAT71(local_80._1_7_,bVar14);
  lVar17 = FUN_02583354(DAT_055021a0,&local_80,1);
  if (lVar17 == 0) {
    return;
  }
  lVar18 = lVar17 + 0x194b0;
  if (*(long *)(lVar17 + 0x194b8) == 0) {
    lVar18 = *(long *)(DAT_05574040 + 0x20);
  }
  lVar17 = *(long *)(lVar18 + 0x8410);
  if (lVar17 == 0) {
    uVar11 = 0;
  }
  else {
    if (*(undefined8 **)(lVar17 + 0x10) == (undefined8 *)0x0) {
      uVar11 = 0;
      plVar12 = *(long **)(lVar17 + 0x20);
    }
    else {
      uVar11 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
      uVar11 = uVar11 & 0xffffffff;
      if (*(long *)(lVar18 + 0x8410) == 0) goto LAB_00dd8c58;
      plVar12 = *(long **)(*(long *)(lVar18 + 0x8410) + 0x20);
    }
    if (plVar12 != (long *)0x0) {
      local_80 = *(undefined ***)(lVar18 + 0x83f0);
      local_78 = *(char **)(lVar18 + 0x83f8);
      local_70 = 0x808;
      (**(code **)(*plVar12 + 0x20))(plVar12,&local_80);
    }
  }
LAB_00dd8c58:
  puVar13 = (undefined8 *)(*(long *)(lVar18 + 0x83f8) + *(long *)(lVar18 + 0x83f0));
  uVar5 = *(undefined8 *)(param_2 + 0x346);
  uVar4 = *(undefined8 *)(param_2 + 0x32e);
  uVar6 = *(undefined8 *)(param_2 + 0x336);
  puVar13[6] = *(undefined8 *)(param_2 + 0x33e);
  puVar13[7] = uVar5;
  puVar13[4] = uVar4;
  puVar13[5] = uVar6;
  uVar5 = *(undefined8 *)(param_2 + 0x366);
  uVar4 = *(undefined8 *)(param_2 + 0x34e);
  uVar6 = *(undefined8 *)(param_2 + 0x356);
  puVar13[10] = *(undefined8 *)(param_2 + 0x35e);
  puVar13[0xb] = uVar5;
  puVar13[8] = uVar4;
  puVar13[9] = uVar6;
  uVar4 = *(undefined8 *)(param_2 + 0x30e);
  uVar5 = *(undefined8 *)(param_2 + 0x316);
  uVar6 = *(undefined8 *)(param_2 + 0x326);
  puVar13[2] = *(undefined8 *)(param_2 + 0x31e);
  puVar13[3] = uVar6;
  *puVar13 = uVar4;
  puVar13[1] = uVar5;
  uVar10 = *DAT_04ccdcc0;
  if (0xf < uVar10) {
    uVar10 = 0;
  }
  *(uint *)(puVar13 + 0xc) = uVar10;
  if ((((uVar11 & 1) != 0) && (*(long *)(lVar18 + 0x8410) != 0)) &&
     (puVar13 = *(undefined8 **)(*(long *)(lVar18 + 0x8410) + 0x18), puVar13 != (undefined8 *)0x0))
  {
    (**(code **)*puVar13)();
  }
  return;
}

