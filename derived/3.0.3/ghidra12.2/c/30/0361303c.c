
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0361303c(long param_1,long *param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  ushort uVar7;
  ushort uVar8;
  code *pcVar9;
  undefined7 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong *puVar20;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 uVar21;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  int iVar22;
  uint extraout_w8_03;
  long lVar23;
  uint uVar24;
  uint uVar25;
  undefined4 uVar26;
  ulong uVar27;
  ulong local_60;
  uint local_58;
  uint local_54;
  ulong local_38;
  
  puVar15 = &local_60;
  puVar16 = &local_60;
  puVar17 = &local_60;
  puVar18 = &local_60;
  puVar19 = &local_60;
  puVar14 = &local_60;
  puVar20 = &local_60;
  uVar11 = FUN_04000a28(param_1,param_2,0x30,0x7c,&local_54,&local_58);
  if ((uVar11 & 1) == 0) {
    return 0;
  }
  iVar4 = (int)param_2[1];
  if (iVar4 == 0) {
    if (*(char *)((long)param_2 + 0xc) == '\0') {
LAB_03613130:
      local_38 = local_38 & 0xffffffff00000000;
      (**(code **)(*param_2 + 0x20))(param_2,&local_38,4);
      uVar24 = ((uint)local_38 & 0xff00ff00) >> 8 | ((uint)local_38 & 0xff00ff) << 8;
      uVar24 = uVar24 >> 0x10 | uVar24 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar24 = (uint)local_38;
      }
    }
    else {
      local_38 = CONCAT71(local_38._1_7_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_38,1);
      if ((int)param_2[1] != 2) {
        if ((int)param_2[1] == 1) goto LAB_036131a4;
        goto LAB_03613130;
      }
      (**(code **)(*param_2 + 0x20))(param_2,&local_60,4);
      uVar24 = (uint)local_60;
    }
    if (uVar24 != *(byte *)(param_1 + 0xd2)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)UndefinedInstructionException(0x8002,0x3614b4c);
      (*pcVar9)();
    }
LAB_03613204:
    iVar22 = (int)param_2[1];
  }
  else {
    if (iVar4 == 2) {
      if (*(char *)((long)param_2 + 0xc) != '\0') {
        local_38 = CONCAT71(local_38._1_7_,4);
        (**(code **)(*param_2 + 0x20))(param_2,&local_38,1);
        if ((int)param_2[1] != 2) {
          if ((int)param_2[1] == 1) goto LAB_036131a4;
LAB_036131bc:
          local_38 = local_38 & 0xffffffff00000000;
        }
      }
      lVar23 = *param_2;
      puVar14 = &local_38;
LAB_036131c8:
      (**(code **)(lVar23 + 0x20))(param_2,puVar14,4);
      goto LAB_03613204;
    }
    iVar22 = iVar4;
    if (iVar4 == 1) {
      bVar5 = *(byte *)(param_1 + 0xd2);
      local_60 = CONCAT44(local_60._4_4_,(uint)bVar5);
      if (*(char *)((long)param_2 + 0xc) != '\0') {
        local_38 = CONCAT71(local_38._1_7_,4);
        (**(code **)(*param_2 + 0x20))(param_2,&local_38,1);
        if ((int)param_2[1] == 2) {
          lVar23 = *param_2;
          goto LAB_036131c8;
        }
        if ((int)param_2[1] != 1) goto LAB_036131bc;
      }
      uVar24 = (uint)bVar5 << 0x18;
      if ((int)param_2[2] != 0xff00) {
        uVar24 = (uint)bVar5;
      }
      local_38 = CONCAT44(local_38._4_4_,uVar24);
LAB_036131a4:
      (**(code **)(*param_2 + 0x38))(param_2,&local_38);
      goto LAB_03613204;
    }
  }
  if (iVar22 == 2) {
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_38 = CONCAT71(local_38._1_7_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_38,1);
      if ((int)param_2[1] != 2) {
        if ((int)param_2[1] != 1) {
LAB_03613364:
          local_38 = local_38 & 0xffffffff00000000;
          goto LAB_03613368;
        }
        goto LAB_0361330c;
      }
    }
LAB_03613368:
    lVar23 = *param_2;
    puVar15 = &local_38;
LAB_03613370:
    (**(code **)(lVar23 + 0x20))(param_2,puVar15,4);
LAB_03613380:
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  else if (iVar22 == 1) {
    bVar5 = *(byte *)(param_1 + 0xd3);
    local_60 = CONCAT44(local_60._4_4_,(uint)bVar5);
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_38 = CONCAT71(local_38._1_7_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_38,1);
      if ((int)param_2[1] != 2) {
        if ((int)param_2[1] != 1) goto LAB_03613364;
        goto LAB_036132f4;
      }
      lVar23 = *param_2;
      goto LAB_03613370;
    }
LAB_036132f4:
    uVar24 = (uint)bVar5 << 0x18;
    if ((int)param_2[2] != 0xff00) {
      uVar24 = (uint)bVar5;
    }
    local_38 = CONCAT44(local_38._4_4_,uVar24);
LAB_0361330c:
    (**(code **)(*param_2 + 0x38))(param_2,&local_38);
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  else {
    if (iVar22 != 0) goto LAB_03613380;
    if (*(char *)((long)param_2 + 0xc) == '\0') {
LAB_0361332c:
      local_38 = local_38 & 0xffffffff00000000;
      (**(code **)(*param_2 + 0x20))(param_2,&local_38,4);
      uVar24 = (uint)local_38 >> 0x18;
      if ((int)param_2[2] != 0xff00) {
        uVar24 = (uint)local_38;
      }
      uVar21 = (char)uVar24;
    }
    else {
      local_38 = CONCAT71(local_38._1_7_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_38,1);
      if ((int)param_2[1] == 2) {
        (**(code **)(*param_2 + 0x20))(param_2,&local_60,4);
        uVar21 = (char)local_60;
      }
      else {
        if ((int)param_2[1] != 1) goto LAB_0361332c;
        (**(code **)(*param_2 + 0x38))(param_2,&local_38);
        uVar21 = extraout_w8;
      }
    }
    *(undefined1 *)(param_1 + 0xd3) = uVar21;
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar6 != '\0') {
    local_38._1_7_ = (undefined7)(local_38 >> 8);
    local_38 = CONCAT71(local_38._1_7_,8);
    (**(code **)(*param_2 + 0x20))(param_2,&local_38,1);
  }
  puVar14 = (ulong *)(param_1 + 0x108);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar14,8);
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar27 = *puVar14;
    uVar11 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
    local_38 = uVar11 >> 0x20 | uVar11 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      local_38 = uVar27;
    }
    (**(code **)(*param_2 + 0x40))(param_2,&local_38);
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_38 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_38,8);
    uVar11 = (local_38 & 0xff00ff00ff00ff00) >> 8 | (local_38 & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
    uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      uVar11 = local_38;
    }
    *puVar14 = uVar11;
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar6 != '\0') {
    local_38._1_7_ = (undefined7)(local_38 >> 8);
    local_38 = CONCAT71(local_38._1_7_,8);
    (**(code **)(*param_2 + 0x20))(param_2,&local_38,1);
  }
  puVar14 = (ulong *)(param_1 + 0x110);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar14,8);
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar27 = *puVar14;
    uVar11 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
    local_38 = uVar11 >> 0x20 | uVar11 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      local_38 = uVar27;
    }
    (**(code **)(*param_2 + 0x40))(param_2,&local_38);
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_38 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_38,8);
    uVar11 = (local_38 & 0xff00ff00ff00ff00) >> 8 | (local_38 & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
    uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      uVar11 = local_38;
    }
    *puVar14 = uVar11;
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar6 != '\0') {
    local_38._1_7_ = (undefined7)(local_38 >> 8);
    local_38 = CONCAT71(local_38._1_7_,8);
    (**(code **)(*param_2 + 0x20))(param_2,&local_38,1);
  }
  puVar14 = (ulong *)(param_1 + 0x128);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar14,8);
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar27 = *puVar14;
    uVar11 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
    local_38 = uVar11 >> 0x20 | uVar11 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      local_38 = uVar27;
    }
    (**(code **)(*param_2 + 0x40))(param_2,&local_38);
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_38 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_38,8);
    uVar11 = (local_38 & 0xff00ff00ff00ff00) >> 8 | (local_38 & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
    uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      uVar11 = local_38;
    }
    *puVar14 = uVar11;
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar6 != '\0') {
    local_38._1_7_ = (undefined7)(local_38 >> 8);
    local_38 = CONCAT71(local_38._1_7_,8);
    (**(code **)(*param_2 + 0x20))(param_2,&local_38,1);
  }
  puVar14 = (ulong *)(param_1 + 0x130);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar14,8);
  }
  else if ((int)param_2[1] == 1) {
    uVar27 = *puVar14;
    uVar11 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
    local_38 = uVar11 >> 0x20 | uVar11 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      local_38 = uVar27;
    }
    (**(code **)(*param_2 + 0x40))(param_2,&local_38);
  }
  else {
    local_38 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_38,8);
    uVar11 = (local_38 & 0xff00ff00ff00ff00) >> 8 | (local_38 & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
    uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      uVar11 = local_38;
    }
    *puVar14 = uVar11;
  }
  if (iVar4 == 0) {
    uVar11 = *(ulong *)(param_1 + 0x128);
    if (*(ulong *)(param_1 + 0x130) <= *(ulong *)(param_1 + 0x128)) {
      uVar11 = *(ulong *)(param_1 + 0x130);
    }
    *(ulong *)(param_1 + 0x138) = uVar11;
    *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_1 + 0x110);
  }
  local_38._1_7_ = (undefined7)(local_38 >> 8);
  local_38 = CONCAT71(local_38._1_7_,*(undefined1 *)(param_1 + 0xd7));
  (**(code **)(*param_2 + 0x28))(param_2,&local_38);
  *(bool *)(param_1 + 0xd7) = (char)local_38 != '\0';
  iVar22 = (int)param_2[1];
  if (iVar22 == 2) {
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_38 = CONCAT71(local_38._1_7_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_38,1);
      if ((int)param_2[1] != 2) {
        if ((int)param_2[1] != 1) {
LAB_03613878:
          local_38 = local_38 & 0xffffffff00000000;
          goto LAB_0361387c;
        }
        goto LAB_03613828;
      }
    }
LAB_0361387c:
    lVar23 = *param_2;
    puVar16 = &local_38;
LAB_03613884:
    (**(code **)(lVar23 + 0x20))(param_2,puVar16,4);
LAB_036138f0:
    iVar22 = (int)param_2[1];
  }
  else {
    if (iVar22 == 1) {
      bVar5 = *(byte *)(param_1 + 0x140);
      local_60 = CONCAT44(local_60._4_4_,(uint)bVar5);
      if (*(char *)((long)param_2 + 0xc) != '\0') {
        local_38 = CONCAT71(local_38._1_7_,4);
        (**(code **)(*param_2 + 0x20))(param_2,&local_38,1);
        if ((int)param_2[1] != 2) {
          if ((int)param_2[1] != 1) goto LAB_03613878;
          goto LAB_03613810;
        }
        lVar23 = *param_2;
        goto LAB_03613884;
      }
LAB_03613810:
      uVar24 = (uint)bVar5 << 0x18;
      if ((int)param_2[2] != 0xff00) {
        uVar24 = (uint)bVar5;
      }
      local_38 = CONCAT44(local_38._4_4_,uVar24);
LAB_03613828:
      (**(code **)(*param_2 + 0x38))(param_2,&local_38);
      goto LAB_036138f0;
    }
    if (iVar22 == 0) {
      if (*(char *)((long)param_2 + 0xc) == '\0') {
LAB_03613840:
        local_38 = local_38 & 0xffffffff00000000;
        (**(code **)(*param_2 + 0x20))(param_2,&local_38,4);
        uVar24 = (uint)local_38 >> 0x18;
        if ((int)param_2[2] != 0xff00) {
          uVar24 = (uint)local_38;
        }
        uVar21 = (char)uVar24;
      }
      else {
        local_38 = CONCAT71(local_38._1_7_,4);
        (**(code **)(*param_2 + 0x20))(param_2,&local_38,1);
        if ((int)param_2[1] == 2) {
          (**(code **)(*param_2 + 0x20))(param_2,&local_60,4);
          uVar21 = (char)local_60;
        }
        else {
          if ((int)param_2[1] != 1) goto LAB_03613840;
          (**(code **)(*param_2 + 0x38))(param_2,&local_38);
          uVar21 = extraout_w8_00;
        }
      }
      *(undefined1 *)(param_1 + 0x140) = uVar21;
      goto LAB_036138f0;
    }
  }
  puVar1 = (ushort *)(param_1 + 0x142);
  if (iVar22 == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar1,2);
  }
  else if (iVar22 == 1) {
    uVar7 = *puVar1;
    uVar8 = uVar7 >> 8 | uVar7 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar8 = uVar7;
    }
    local_38 = CONCAT62(local_38._2_6_,uVar8);
    (**(code **)(*param_2 + 0x30))(param_2,&local_38);
  }
  else {
    local_38 = (ulong)local_38._2_6_ << 0x10;
    (**(code **)(*param_2 + 0x20))(param_2,&local_38,2);
    uVar8 = (ushort)local_38 >> 8 | (ushort)local_38 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar8 = (ushort)local_38;
    }
    *puVar1 = uVar8;
  }
  FUN_035ef300(param_2,param_1 + 0x144);
  iVar22 = (int)param_2[1];
  if (iVar22 == 2) {
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_38 = CONCAT71(local_38._1_7_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_38,1);
      if ((int)param_2[1] != 2) {
        if ((int)param_2[1] != 1) {
LAB_03613afc:
          local_38 = local_38 & 0xffffffff00000000;
          goto LAB_03613b00;
        }
        goto LAB_03613aac;
      }
    }
LAB_03613b00:
    lVar23 = *param_2;
    puVar17 = &local_38;
LAB_03613b08:
    (**(code **)(lVar23 + 0x20))(param_2,puVar17,4);
LAB_03613b48:
    iVar22 = (int)param_2[1];
  }
  else {
    if (iVar22 == 1) {
      bVar5 = *(byte *)(param_1 + 0x146);
      local_60 = CONCAT44(local_60._4_4_,(uint)bVar5);
      if (*(char *)((long)param_2 + 0xc) != '\0') {
        local_38 = CONCAT71(local_38._1_7_,4);
        (**(code **)(*param_2 + 0x20))(param_2,&local_38,1);
        if ((int)param_2[1] != 2) {
          if ((int)param_2[1] != 1) goto LAB_03613afc;
          goto LAB_03613a94;
        }
        lVar23 = *param_2;
        goto LAB_03613b08;
      }
LAB_03613a94:
      uVar24 = (uint)bVar5 << 0x18;
      if ((int)param_2[2] != 0xff00) {
        uVar24 = (uint)bVar5;
      }
      local_38 = CONCAT44(local_38._4_4_,uVar24);
LAB_03613aac:
      (**(code **)(*param_2 + 0x38))(param_2,&local_38);
      goto LAB_03613b48;
    }
    if (iVar22 == 0) {
      if (*(char *)((long)param_2 + 0xc) == '\0') {
LAB_03613ac4:
        local_38 = local_38 & 0xffffffff00000000;
        (**(code **)(*param_2 + 0x20))(param_2,&local_38,4);
        uVar24 = (uint)local_38 >> 0x18;
        if ((int)param_2[2] != 0xff00) {
          uVar24 = (uint)local_38;
        }
        uVar21 = (char)uVar24;
      }
      else {
        local_38 = CONCAT71(local_38._1_7_,4);
        (**(code **)(*param_2 + 0x20))(param_2,&local_38,1);
        if ((int)param_2[1] == 2) {
          (**(code **)(*param_2 + 0x20))(param_2,&local_60,4);
          uVar21 = (char)local_60;
        }
        else {
          if ((int)param_2[1] != 1) goto LAB_03613ac4;
          (**(code **)(*param_2 + 0x38))(param_2,&local_38);
          uVar21 = extraout_w8_01;
        }
      }
      *(undefined1 *)(param_1 + 0x146) = uVar21;
      goto LAB_03613b48;
    }
  }
  puVar2 = (ushort *)(param_1 + 0x148);
  if (iVar22 == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar2,2);
  }
  else if (iVar22 == 1) {
    uVar7 = *puVar2;
    uVar8 = uVar7 >> 8 | uVar7 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar8 = uVar7;
    }
    local_38 = CONCAT62(local_38._2_6_,uVar8);
    (**(code **)(*param_2 + 0x30))(param_2,&local_38);
  }
  else {
    local_38 = (ulong)local_38._2_6_ << 0x10;
    (**(code **)(*param_2 + 0x20))(param_2,&local_38,2);
    uVar8 = (ushort)local_38 >> 8 | (ushort)local_38 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar8 = (ushort)local_38;
    }
    *puVar2 = uVar8;
  }
  puVar2 = (ushort *)(param_1 + 0x14a);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar2,2);
  }
  else if ((int)param_2[1] == 1) {
    uVar7 = *puVar2;
    uVar8 = uVar7 >> 8 | uVar7 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar8 = uVar7;
    }
    local_38 = CONCAT62(local_38._2_6_,uVar8);
    (**(code **)(*param_2 + 0x30))(param_2,&local_38);
  }
  else {
    local_38 = (ulong)local_38._2_6_ << 0x10;
    (**(code **)(*param_2 + 0x20))(param_2,&local_38,2);
    uVar8 = (ushort)local_38 >> 8 | (ushort)local_38 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar8 = (ushort)local_38;
    }
    *puVar2 = uVar8;
  }
  iVar22 = (int)param_2[1];
  if (iVar22 == 2) {
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_38 = CONCAT71(local_38._1_7_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_38,1);
      if ((int)param_2[1] != 2) {
        if ((int)param_2[1] != 1) {
LAB_03613df0:
          local_38 = local_38 & 0xffffffff00000000;
          goto LAB_03613df4;
        }
        goto LAB_03613da0;
      }
    }
LAB_03613df4:
    lVar23 = *param_2;
    puVar18 = &local_38;
LAB_03613dfc:
    (**(code **)(lVar23 + 0x20))(param_2,puVar18,4);
LAB_03613e3c:
    iVar22 = (int)param_2[1];
  }
  else {
    if (iVar22 == 1) {
      bVar5 = *(byte *)(param_1 + 0x14c);
      local_60 = CONCAT44(local_60._4_4_,(uint)bVar5);
      if (*(char *)((long)param_2 + 0xc) != '\0') {
        local_38 = CONCAT71(local_38._1_7_,4);
        (**(code **)(*param_2 + 0x20))(param_2,&local_38,1);
        if ((int)param_2[1] != 2) {
          if ((int)param_2[1] != 1) goto LAB_03613df0;
          goto LAB_03613d88;
        }
        lVar23 = *param_2;
        goto LAB_03613dfc;
      }
LAB_03613d88:
      uVar24 = (uint)bVar5 << 0x18;
      if ((int)param_2[2] != 0xff00) {
        uVar24 = (uint)bVar5;
      }
      local_38 = CONCAT44(local_38._4_4_,uVar24);
LAB_03613da0:
      (**(code **)(*param_2 + 0x38))(param_2,&local_38);
      goto LAB_03613e3c;
    }
    if (iVar22 == 0) {
      if (*(char *)((long)param_2 + 0xc) == '\0') {
LAB_03613db8:
        local_38 = local_38 & 0xffffffff00000000;
        (**(code **)(*param_2 + 0x20))(param_2,&local_38,4);
        uVar24 = (uint)local_38 >> 0x18;
        if ((int)param_2[2] != 0xff00) {
          uVar24 = (uint)local_38;
        }
        uVar21 = (char)uVar24;
      }
      else {
        local_38 = CONCAT71(local_38._1_7_,4);
        (**(code **)(*param_2 + 0x20))(param_2,&local_38,1);
        if ((int)param_2[1] == 2) {
          (**(code **)(*param_2 + 0x20))(param_2,&local_60,4);
          uVar21 = (char)local_60;
        }
        else {
          if ((int)param_2[1] != 1) goto LAB_03613db8;
          (**(code **)(*param_2 + 0x38))(param_2,&local_38);
          uVar21 = extraout_w8_02;
        }
      }
      *(undefined1 *)(param_1 + 0x14c) = uVar21;
      goto LAB_03613e3c;
    }
  }
  puVar2 = (ushort *)(param_1 + 0x14e);
  if (iVar22 == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar2,2);
  }
  else if (iVar22 == 1) {
    uVar7 = *puVar2;
    uVar8 = uVar7 >> 8 | uVar7 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar8 = uVar7;
    }
    local_38 = CONCAT62(local_38._2_6_,uVar8);
    (**(code **)(*param_2 + 0x30))(param_2,&local_38);
  }
  else {
    local_38 = (ulong)local_38._2_6_ << 0x10;
    (**(code **)(*param_2 + 0x20))(param_2,&local_38,2);
    uVar8 = (ushort)local_38 >> 8 | (ushort)local_38 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar8 = (ushort)local_38;
    }
    *puVar2 = uVar8;
  }
  uVar3 = local_54;
  uVar24 = local_58;
  iVar22 = (int)param_2[1];
  if (iVar22 == 2) {
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_38 = CONCAT71(local_38._1_7_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_38,1);
      if ((int)param_2[1] != 2) {
        if ((int)param_2[1] != 1) {
LAB_03614044:
          local_38 = local_38 & 0xffffffff00000000;
          goto LAB_03614048;
        }
        goto LAB_03613ff4;
      }
    }
LAB_03614048:
    lVar23 = *param_2;
    puVar19 = &local_38;
LAB_03614050:
    (**(code **)(lVar23 + 0x20))(param_2,puVar19,4);
LAB_03614060:
    uVar25 = (uint)*(byte *)(param_1 + 0x150);
  }
  else {
    if (iVar22 == 1) {
      bVar5 = *(byte *)(param_1 + 0x150);
      local_60 = CONCAT44(local_60._4_4_,(uint)bVar5);
      if (*(char *)((long)param_2 + 0xc) != '\0') {
        local_38 = CONCAT71(local_38._1_7_,4);
        (**(code **)(*param_2 + 0x20))(param_2,&local_38,1);
        if ((int)param_2[1] != 2) {
          if ((int)param_2[1] != 1) goto LAB_03614044;
          goto LAB_03613fdc;
        }
        lVar23 = *param_2;
        goto LAB_03614050;
      }
LAB_03613fdc:
      uVar25 = (uint)bVar5 << 0x18;
      if ((int)param_2[2] != 0xff00) {
        uVar25 = (uint)bVar5;
      }
      local_38 = CONCAT44(local_38._4_4_,uVar25);
LAB_03613ff4:
      (**(code **)(*param_2 + 0x38))(param_2,&local_38);
      goto LAB_03614060;
    }
    if (iVar22 != 0) goto LAB_03614060;
    if (*(char *)((long)param_2 + 0xc) == '\0') {
LAB_0361400c:
      local_38 = local_38 & 0xffffffff00000000;
      (**(code **)(*param_2 + 0x20))(param_2,&local_38,4);
      uVar25 = (uint)local_38 >> 0x18;
      if ((int)param_2[2] != 0xff00) {
        uVar25 = (uint)local_38;
      }
    }
    else {
      local_38 = CONCAT71(local_38._1_7_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_38,1);
      if ((int)param_2[1] == 2) {
        (**(code **)(*param_2 + 0x20))(param_2,&local_38,4);
        uVar25 = (uint)local_38;
      }
      else {
        if ((int)param_2[1] != 1) goto LAB_0361400c;
        (**(code **)(*param_2 + 0x38))(param_2,&local_38);
        uVar25 = extraout_w8_03;
      }
    }
    *(char *)(param_1 + 0x150) = (char)uVar25;
  }
  uVar10 = local_38._1_7_;
  switch(uVar25 & 0xff) {
  case 1:
  case 8:
  case 0x11:
  case 0x21:
  case 0x31:
  case 0xc2:
  case 0xc3:
  case 0xc4:
  case 0xca:
  case 0xcc:
  case 0xcd:
  case 0xd2:
  case 0xd4:
  case 0xda:
  case 0xdc:
  case 0xea:
  case 0xfa:
    uVar8 = *(ushort *)(param_1 + 0x152);
    local_60 = CONCAT62(local_60._2_6_,uVar8);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,&local_60,2);
      *(undefined2 *)(param_1 + 0x152) = (undefined2)local_60;
    }
    else if ((int)param_2[1] == 1) {
      uVar7 = uVar8 >> 8 | uVar8 << 8;
      if ((int)param_2[2] != 0xff00) {
        uVar7 = uVar8;
      }
      local_38 = CONCAT62(local_38._2_6_,uVar7);
      (**(code **)(*param_2 + 0x30))(param_2,&local_38);
      *(ushort *)(param_1 + 0x152) = uVar8;
    }
    else {
      local_38 = (ulong)local_38._2_6_ << 0x10;
      (**(code **)(*param_2 + 0x20))(param_2,&local_38,2);
      uVar8 = (ushort)local_38 >> 8 | (ushort)local_38 << 8;
      if ((int)param_2[2] != 0xff00) {
        uVar8 = (ushort)local_38;
      }
      *(ushort *)(param_1 + 0x152) = uVar8;
    }
    break;
  case 6:
  case 0xe:
  case 0x16:
  case 0x18:
  case 0x1e:
  case 0x20:
  case 0x26:
  case 0x28:
  case 0x2e:
  case 0x30:
  case 0x36:
  case 0x38:
  case 0x3e:
  case 0xc6:
  case 0xce:
  case 0xd6:
  case 0xde:
  case 0xe0:
  case 0xe6:
  case 0xe8:
  case 0xee:
  case 0xf0:
  case 0xf6:
  case 0xf8:
  case 0xfe:
    local_38 = CONCAT71(uVar10,*(undefined1 *)(param_1 + 0x152));
    (**(code **)(*param_2 + 0x28))(param_2,&local_38);
    *(char *)(param_1 + 0x152) = (char)local_38;
    break;
  case 0xcb:
    iVar22 = (int)param_2[1];
    bVar5 = *(byte *)(param_1 + 0x152);
    uVar24 = (uint)bVar5;
    if (iVar22 == 2) {
      if (*(char *)((long)param_2 + 0xc) != '\0') {
        local_38 = CONCAT71(uVar10,4);
        (**(code **)(*param_2 + 0x20))(param_2,&local_38,1);
        if ((int)param_2[1] != 2) {
          if ((int)param_2[1] != 1) {
LAB_0361493c:
            local_38 = local_38 & 0xffffffff00000000;
            goto LAB_03614940;
          }
          goto LAB_036148e4;
        }
      }
LAB_03614940:
      lVar23 = *param_2;
      puVar20 = &local_38;
LAB_03614948:
      (**(code **)(lVar23 + 0x20))(param_2,puVar20,4);
    }
    else {
      if (iVar22 == 1) {
        local_60 = CONCAT44(local_60._4_4_,uVar24);
        if (*(char *)((long)param_2 + 0xc) == '\0') {
LAB_036148cc:
          uVar3 = uVar24 << 0x18;
          if ((int)param_2[2] != 0xff00) {
            uVar3 = uVar24;
          }
          local_38 = CONCAT44(local_38._4_4_,uVar3);
LAB_036148e4:
          (**(code **)(*param_2 + 0x38))(param_2,&local_38);
          *(byte *)(param_1 + 0x152) = bVar5;
          break;
        }
        local_38 = CONCAT71(uVar10,4);
        (**(code **)(*param_2 + 0x20))(param_2,&local_38,1);
        if ((int)param_2[1] != 2) {
          if ((int)param_2[1] != 1) goto LAB_0361493c;
          goto LAB_036148cc;
        }
        lVar23 = *param_2;
        goto LAB_03614948;
      }
      if (iVar22 == 0) {
        if (*(char *)((long)param_2 + 0xc) != '\0') {
          local_38 = CONCAT71(uVar10,4);
          (**(code **)(*param_2 + 0x20))(param_2,&local_38,1);
          if ((int)param_2[1] == 2) {
            (**(code **)(*param_2 + 0x20))(param_2,&local_60,4);
            *(char *)(param_1 + 0x152) = (char)local_60;
            break;
          }
          if ((int)param_2[1] == 1) {
            (**(code **)(*param_2 + 0x38))(param_2,&local_38);
            *(byte *)(param_1 + 0x152) = bVar5;
            break;
          }
        }
        local_38 = local_38 & 0xffffffff00000000;
        (**(code **)(*param_2 + 0x20))(param_2,&local_38,4);
        uVar24 = (uint)local_38 >> 0x18;
        if ((int)param_2[2] != 0xff00) {
          uVar24 = (uint)local_38;
        }
        *(char *)(param_1 + 0x152) = (char)uVar24;
        break;
      }
    }
    *(byte *)(param_1 + 0x152) = bVar5;
    break;
  case 0xd3:
  case 0xdd:
    if ((0x2e < uVar3) && (0x79 < uVar24)) {
      puVar2 = (ushort *)(param_1 + 0x152);
      if ((int)param_2[1] == 2) {
        (**(code **)(*param_2 + 0x20))(param_2,puVar2,2);
      }
      else if ((int)param_2[1] == 1) {
        uVar7 = *puVar2;
        uVar8 = uVar7 >> 8 | uVar7 << 8;
        if ((int)param_2[2] != 0xff00) {
          uVar8 = uVar7;
        }
        local_38 = CONCAT62(local_38._2_6_,uVar8);
        (**(code **)(*param_2 + 0x30))(param_2,&local_38);
      }
      else {
        local_38 = (ulong)local_38._2_6_ << 0x10;
        (**(code **)(*param_2 + 0x20))(param_2,&local_38,2);
        uVar8 = (ushort)local_38 >> 8 | (ushort)local_38 << 8;
        if ((int)param_2[2] != 0xff00) {
          uVar8 = (ushort)local_38;
        }
        *puVar2 = uVar8;
      }
    }
  }
  puVar2 = (ushort *)(param_1 + 0x154);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar2,2);
  }
  else if ((int)param_2[1] == 1) {
    uVar7 = *puVar2;
    uVar8 = uVar7 >> 8 | uVar7 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar8 = uVar7;
    }
    local_38 = CONCAT62(local_38._2_6_,uVar8);
    (**(code **)(*param_2 + 0x30))(param_2,&local_38);
  }
  else {
    local_38 = (ulong)local_38._2_6_ << 0x10;
    (**(code **)(*param_2 + 0x20))(param_2,&local_38,2);
    uVar8 = (ushort)local_38 >> 8 | (ushort)local_38 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar8 = (ushort)local_38;
    }
    *puVar2 = uVar8;
  }
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x1a0);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x1a1);
  puVar2 = (ushort *)(param_1 + 0x1a2);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar2,2);
  }
  else if ((int)param_2[1] == 1) {
    uVar7 = *puVar2;
    uVar8 = uVar7 >> 8 | uVar7 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar8 = uVar7;
    }
    local_38 = CONCAT62(local_38._2_6_,uVar8);
    (**(code **)(*param_2 + 0x30))(param_2,&local_38);
  }
  else {
    local_38 = (ulong)local_38._2_6_ << 0x10;
    (**(code **)(*param_2 + 0x20))(param_2,&local_38,2);
    uVar8 = (ushort)local_38 >> 8 | (ushort)local_38 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar8 = (ushort)local_38;
    }
    *puVar2 = uVar8;
  }
  puVar2 = (ushort *)(param_1 + 0x1a4);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar2,2);
  }
  else if ((int)param_2[1] == 1) {
    uVar7 = *puVar2;
    uVar8 = uVar7 >> 8 | uVar7 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar8 = uVar7;
    }
    local_38 = CONCAT62(local_38._2_6_,uVar8);
    (**(code **)(*param_2 + 0x30))(param_2,&local_38);
  }
  else {
    local_38 = (ulong)local_38._2_6_ << 0x10;
    (**(code **)(*param_2 + 0x20))(param_2,&local_38,2);
    uVar8 = (ushort)local_38 >> 8 | (ushort)local_38 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar8 = (ushort)local_38;
    }
    *puVar2 = uVar8;
  }
  puVar14 = (ulong *)(param_1 + 0x4128);
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_38 = CONCAT71(local_38._1_7_,8);
    (**(code **)(*param_2 + 0x20))(param_2,&local_38,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar14,8);
  }
  else if ((int)param_2[1] == 1) {
    uVar27 = *puVar14;
    uVar11 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
    local_38 = uVar11 >> 0x20 | uVar11 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      local_38 = uVar27;
    }
    (**(code **)(*param_2 + 0x40))(param_2,&local_38);
  }
  else {
    local_38 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_38,8);
    uVar11 = (local_38 & 0xff00ff00ff00ff00) >> 8 | (local_38 & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
    uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      uVar11 = local_38;
    }
    *puVar14 = uVar11;
  }
  puVar14 = (ulong *)(param_1 + 0x4130);
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_38 = CONCAT71(local_38._1_7_,8);
    (**(code **)(*param_2 + 0x20))(param_2,&local_38,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar14,8);
  }
  else if ((int)param_2[1] == 1) {
    uVar27 = *puVar14;
    uVar11 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
    local_38 = uVar11 >> 0x20 | uVar11 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      local_38 = uVar27;
    }
    (**(code **)(*param_2 + 0x40))(param_2,&local_38);
  }
  else {
    local_38 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_38,8);
    uVar11 = (local_38 & 0xff00ff00ff00ff00) >> 8 | (local_38 & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
    uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      uVar11 = local_38;
    }
    *puVar14 = uVar11;
  }
  uVar11 = FUN_04002180(param_2,0,0,&local_38);
  if ((uVar11 & 1) != 0) {
    (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x10c0,0xc);
    FUN_03606c10(param_2,param_1 + 0x10cc);
    if (iVar4 == 0) {
      if (*(byte *)(param_1 + 0xd2) < 3) {
        FUN_0361e944();
      }
      else {
        FUN_0361ec10(param_1,*(undefined2 *)(param_1 + 0x10c8));
      }
    }
    uVar11 = FUN_035b3804(param_1 + 0x280,param_2);
    if (((((uVar11 & 1) != 0) &&
         (uVar11 = switchD_035e6abc::caseD_8c(param_1 + 0x2600,param_2), (uVar11 & 1) != 0)) &&
        (uVar11 = FUN_035ee3f0(param_1 + 0x2c0,param_2), (uVar11 & 1) != 0)) &&
       (uVar11 = FUN_04002180(param_2,0,0,&local_38), (uVar11 & 1) != 0)) {
      (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x241);
      (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x242);
      uVar11 = FUN_0360df60(param_1 + 0x1100,param_2);
      if ((uVar11 & 1) != 0) {
        uVar11 = FUN_035b79fc((char *)(param_1 + 0x200),param_2);
        if (((((uVar11 & 1) != 0) &&
             (uVar11 = FUN_03600200(param_1 + 0xec0,param_2), (uVar11 & 1) != 0)) &&
            ((uVar11 = FUN_035b286c(param_1 + 0x1c0,param_2), (uVar11 & 1) != 0 &&
             ((uVar11 = FUN_036076c4(param_1 + 0x2640,param_2), (uVar11 & 1) != 0 &&
              (uVar11 = FUN_035b7b14(param_1 + 0x40c0,param_2), (uVar11 & 1) != 0)))))) &&
           (uVar11 = FUN_03602844(param_1 + 0x4100,param_2), (uVar11 & 1) != 0)) {
          if (iVar4 == 0) {
            FUN_03613008(param_1);
            *(undefined2 *)(param_1 + 0x462) = *(undefined2 *)(param_1 + 0x4120);
            FUN_035c4240(param_1 + 0x438,*(undefined8 *)(param_1 + 0x4128),
                         *(undefined8 *)(param_1 + 0x4130));
            if ((*(byte *)(param_1 + 0x140) - 0xb < 2) && ((ulong)*puVar1 != 0)) {
              if (*(byte *)(param_1 + 0xd2) < 3) {
                uVar26 = 0;
              }
              else if (*(char *)(param_1 + 0x200) < '\0') {
                uVar26 = 3;
              }
              else {
                uVar26 = 1;
                if ((*(byte *)(param_1 + 0xec3) & 4) == 0) {
                  uVar26 = 2;
                }
              }
              uVar12 = FUN_03614c3c(param_1,uVar26,*(undefined1 *)(param_1 + 0x150),
                                    (ulong)*puVar1 << 2);
            }
            else {
              uVar12 = 0;
            }
            *(undefined8 *)(param_1 + 0x4138) = uVar12;
          }
          uVar24 = *(uint *)(param_1 + 0xe0);
          uVar3 = *(uint *)(param_1 + 0xe4);
          local_38 = ((ulong)uVar3 - (ulong)uVar24) + 4;
          if (uVar24 <= uVar3) {
            local_38 = (ulong)(uVar3 - uVar24);
          }
          FUN_03614b50(param_2,&local_38);
          if (iVar4 == 0) {
            *(undefined8 *)(param_1 + 0xe0) = 0;
            if (local_38 != 0) {
              uVar11 = 0;
              do {
                FUN_03614b50(param_2,&local_60);
                uVar3 = *(uint *)(param_1 + 0xe0);
                uVar25 = *(uint *)(param_1 + 0xe4);
                *(ulong *)((uint *)(param_1 + 0xe0) + (ulong)uVar25 * 2 + 2) = local_60;
                uVar24 = uVar25 + 1 & 3;
                *(uint *)(param_1 + 0xe4) = uVar24;
                if (uVar24 == uVar3) {
                  *(uint *)(param_1 + 0xe0) = uVar25 + 2 & 3;
                }
                uVar11 = uVar11 + 1;
              } while (uVar11 < local_38);
            }
          }
          else if (local_38 != 0) {
            uVar11 = 0;
            do {
              local_60 = *(ulong *)((int *)(param_1 + 0xe0) +
                                   ((ulong)(uint)((int)uVar11 + *(int *)(param_1 + 0xe0)) & 3) * 2 +
                                   2);
              FUN_03614b50(param_2,&local_60);
              uVar11 = uVar11 + 1;
            } while (uVar11 < local_38);
          }
          plVar13 = *(long **)(param_1 + 0x58);
          if (plVar13 == (long *)0x0) {
            return 0;
          }
          uVar11 = (**(code **)(*plVar13 + 0x48))(plVar13,local_54,local_58,param_2,param_1);
          if ((uVar11 & 1) != 0) {
            local_60._0_1_ = *(char *)(param_1 + 0x4126);
            (**(code **)(*param_2 + 0x28))(param_2,&local_60);
            *(bool *)(param_1 + 0x4126) = (char)local_60 != '\0';
            local_60 = CONCAT71(local_60._1_7_,*(undefined1 *)(param_1 + 0x4127));
            (**(code **)(*param_2 + 0x28))(param_2,&local_60);
            *(bool *)(param_1 + 0x4127) = (char)local_60 != '\0';
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

