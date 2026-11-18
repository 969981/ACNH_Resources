
/* WARNING: Type propagation algorithm not settling */

uint FUN_0363eb00(long param_1,long *param_2,long param_3,ulong param_4)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  uint extraout_w8;
  uint extraout_w8_00;
  int iVar7;
  uint extraout_w8_01;
  uint extraout_w8_02;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint local_68;
  uint local_64;
  uint local_48;
  uint local_44;
  
  uVar5 = FUN_04002180(param_2,0xb,6,&local_68);
  if ((uVar5 & 1) != 0) {
    local_44._0_1_ = *(char *)(param_1 + 8);
    (**(code **)(*param_2 + 0x28))(param_2,&local_44);
    *(bool *)(param_1 + 8) = (char)local_44 != '\0';
    local_44._0_1_ = *(char *)(param_1 + 9);
    (**(code **)(*param_2 + 0x28))(param_2,&local_44);
    *(bool *)(param_1 + 9) = (char)local_44 != '\0';
    local_44._0_1_ = *(char *)(param_1 + 10);
    (**(code **)(*param_2 + 0x28))(param_2,&local_44);
    *(bool *)(param_1 + 10) = (char)local_44 != '\0';
    local_44 = CONCAT31(local_44._1_3_,*(undefined1 *)(param_1 + 0xb));
    (**(code **)(*param_2 + 0x28))(param_2,&local_44);
    *(bool *)(param_1 + 0xb) = (char)local_44 != '\0';
    iVar7 = (int)param_2[1];
    if (iVar7 == 2) {
      if (*(char *)((long)param_2 + 0xc) != '\0') {
        local_44 = CONCAT31(local_44._1_3_,4);
        (**(code **)(*param_2 + 0x20))(param_2,&local_44,1);
        if ((int)param_2[1] != 2) {
          if ((int)param_2[1] != 1) {
LAB_0363ed50:
            local_44 = 0;
            goto LAB_0363ed54;
          }
          goto LAB_0363ed00;
        }
      }
LAB_0363ed54:
      lVar8 = *param_2;
      puVar6 = &local_44;
LAB_0363ed5c:
      (**(code **)(lVar8 + 0x20))(param_2,puVar6,4);
    }
    else if (iVar7 == 1) {
      uVar4 = *(uint *)(param_1 + 0xc);
      local_48 = uVar4;
      if (*(char *)((long)param_2 + 0xc) != '\0') {
        local_44 = CONCAT31(local_44._1_3_,4);
        (**(code **)(*param_2 + 0x20))(param_2,&local_44,1);
        if ((int)param_2[1] != 2) {
          if ((int)param_2[1] != 1) goto LAB_0363ed50;
          goto LAB_0363ece8;
        }
        lVar8 = *param_2;
        puVar6 = &local_48;
        goto LAB_0363ed5c;
      }
LAB_0363ece8:
      uVar3 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      local_44 = uVar3 >> 0x10 | uVar3 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_44 = uVar4;
      }
LAB_0363ed00:
      (**(code **)(*param_2 + 0x38))(param_2,&local_44);
    }
    else if (iVar7 == 0) {
      if (*(char *)((long)param_2 + 0xc) == '\0') {
LAB_0363ed18:
        local_44 = 0;
        (**(code **)(*param_2 + 0x20))(param_2,&local_44,4);
        uVar4 = (local_44 & 0xff00ff00) >> 8 | (local_44 & 0xff00ff) << 8;
        uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
        if ((int)param_2[2] != 0xff00) {
          uVar4 = local_44;
        }
      }
      else {
        local_44 = CONCAT31(local_44._1_3_,4);
        (**(code **)(*param_2 + 0x20))(param_2,&local_44,1);
        if ((int)param_2[1] == 2) {
          (**(code **)(*param_2 + 0x20))(param_2,&local_48,4);
          uVar4 = local_48;
        }
        else {
          if ((int)param_2[1] != 1) goto LAB_0363ed18;
          (**(code **)(*param_2 + 0x38))(param_2,&local_44);
          uVar4 = extraout_w8;
        }
      }
      *(uint *)(param_1 + 0xc) = uVar4;
    }
    local_44._0_1_ = *(char *)(param_1 + 0x10);
    (**(code **)(*param_2 + 0x28))(param_2,&local_44);
    *(bool *)(param_1 + 0x10) = (char)local_44 != '\0';
    local_44._0_1_ = *(char *)(param_1 + 0x11);
    (**(code **)(*param_2 + 0x28))(param_2,&local_44);
    *(bool *)(param_1 + 0x11) = (char)local_44 != '\0';
    local_44 = CONCAT31(local_44._1_3_,*(undefined1 *)(param_1 + 0x12));
    (**(code **)(*param_2 + 0x28))(param_2,&local_44);
    *(bool *)(param_1 + 0x12) = (char)local_44 != '\0';
    if (local_68 < 8) {
      local_44 = local_44 & 0xffffff00;
      (**(code **)(*param_2 + 0x28))(param_2,&local_44);
    }
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_44 = CONCAT31(local_44._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_44,1);
    }
    puVar6 = (uint *)(param_1 + 0x14);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar6,4);
      cVar2 = *(char *)((long)param_2 + 0xc);
    }
    else if ((int)param_2[1] == 1) {
      uVar4 = *puVar6;
      uVar3 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      local_44 = uVar3 >> 0x10 | uVar3 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_44 = uVar4;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_44);
      cVar2 = *(char *)((long)param_2 + 0xc);
    }
    else {
      local_44 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_44,4);
      uVar4 = (local_44 & 0xff00ff00) >> 8 | (local_44 & 0xff00ff) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar4 = local_44;
      }
      *puVar6 = uVar4;
      cVar2 = *(char *)((long)param_2 + 0xc);
    }
    if (cVar2 != '\0') {
      local_44._1_3_ = (undefined3)(local_44 >> 8);
      local_44 = CONCAT31(local_44._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_44,1);
    }
    puVar6 = (uint *)(param_1 + 0x18);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar6,4);
      cVar2 = *(char *)((long)param_2 + 0xc);
    }
    else if ((int)param_2[1] == 1) {
      uVar4 = *puVar6;
      uVar3 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      local_44 = uVar3 >> 0x10 | uVar3 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_44 = uVar4;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_44);
      cVar2 = *(char *)((long)param_2 + 0xc);
    }
    else {
      local_44 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_44,4);
      uVar4 = (local_44 & 0xff00ff00) >> 8 | (local_44 & 0xff00ff) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar4 = local_44;
      }
      *puVar6 = uVar4;
      cVar2 = *(char *)((long)param_2 + 0xc);
    }
    if (cVar2 != '\0') {
      local_44._1_3_ = (undefined3)(local_44 >> 8);
      local_44 = CONCAT31(local_44._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_44,1);
    }
    puVar6 = (uint *)(param_1 + 0x1c);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar6,4);
    }
    else if ((int)param_2[1] == 1) {
      uVar4 = *puVar6;
      uVar3 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      local_44 = uVar3 >> 0x10 | uVar3 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_44 = uVar4;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_44);
    }
    else {
      local_44 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_44,4);
      uVar4 = (local_44 & 0xff00ff00) >> 8 | (local_44 & 0xff00ff) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar4 = local_44;
      }
      *puVar6 = uVar4;
    }
    iVar7 = (int)param_2[1];
    if (iVar7 == 2) {
      if (*(char *)((long)param_2 + 0xc) != '\0') {
        local_44 = CONCAT31(local_44._1_3_,4);
        (**(code **)(*param_2 + 0x20))(param_2,&local_44,1);
        if ((int)param_2[1] != 2) {
          if ((int)param_2[1] != 1) {
LAB_0363f208:
            local_44 = 0;
            goto LAB_0363f20c;
          }
          goto LAB_0363f1b8;
        }
      }
LAB_0363f20c:
      lVar8 = *param_2;
      puVar6 = &local_44;
LAB_0363f214:
      (**(code **)(lVar8 + 0x20))(param_2,puVar6,4);
LAB_0363f254:
      iVar7 = (int)param_2[1];
    }
    else {
      if (iVar7 == 1) {
        uVar4 = *(uint *)(param_1 + 0x20);
        local_48 = uVar4;
        if (*(char *)((long)param_2 + 0xc) != '\0') {
          local_44 = CONCAT31(local_44._1_3_,4);
          (**(code **)(*param_2 + 0x20))(param_2,&local_44,1);
          if ((int)param_2[1] != 2) {
            if ((int)param_2[1] != 1) goto LAB_0363f208;
            goto LAB_0363f1a0;
          }
          lVar8 = *param_2;
          puVar6 = &local_48;
          goto LAB_0363f214;
        }
LAB_0363f1a0:
        uVar3 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
        local_44 = uVar3 >> 0x10 | uVar3 << 0x10;
        if ((int)param_2[2] != 0xff00) {
          local_44 = uVar4;
        }
LAB_0363f1b8:
        (**(code **)(*param_2 + 0x38))(param_2,&local_44);
        goto LAB_0363f254;
      }
      if (iVar7 == 0) {
        if (*(char *)((long)param_2 + 0xc) == '\0') {
LAB_0363f1d0:
          local_44 = 0;
          (**(code **)(*param_2 + 0x20))(param_2,&local_44,4);
          uVar4 = (local_44 & 0xff00ff00) >> 8 | (local_44 & 0xff00ff) << 8;
          uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
          if ((int)param_2[2] != 0xff00) {
            uVar4 = local_44;
          }
        }
        else {
          local_44 = CONCAT31(local_44._1_3_,4);
          (**(code **)(*param_2 + 0x20))(param_2,&local_44,1);
          if ((int)param_2[1] == 2) {
            (**(code **)(*param_2 + 0x20))(param_2,&local_48,4);
            uVar4 = local_48;
          }
          else {
            if ((int)param_2[1] != 1) goto LAB_0363f1d0;
            (**(code **)(*param_2 + 0x38))(param_2,&local_44);
            uVar4 = extraout_w8_00;
          }
        }
        *(uint *)(param_1 + 0x20) = uVar4;
        goto LAB_0363f254;
      }
    }
    if (iVar7 == 2) {
      if (*(char *)((long)param_2 + 0xc) != '\0') {
        local_44 = CONCAT31(local_44._1_3_,4);
        (**(code **)(*param_2 + 0x20))(param_2,&local_44,1);
        if ((int)param_2[1] != 2) {
          if ((int)param_2[1] != 1) {
LAB_0363f3b4:
            local_44 = 0;
            goto LAB_0363f3b8;
          }
          goto LAB_0363f35c;
        }
      }
LAB_0363f3b8:
      lVar8 = *param_2;
      puVar6 = &local_44;
LAB_0363f3c0:
      (**(code **)(lVar8 + 0x20))(param_2,puVar6,4);
LAB_0363f3d0:
      cVar2 = *(char *)((long)param_2 + 0xc);
    }
    else if (iVar7 == 1) {
      uVar4 = *(uint *)(param_1 + 0x24);
      local_48 = uVar4;
      if (*(char *)((long)param_2 + 0xc) != '\0') {
        local_44 = CONCAT31(local_44._1_3_,4);
        (**(code **)(*param_2 + 0x20))(param_2,&local_44,1);
        if ((int)param_2[1] != 2) {
          if ((int)param_2[1] != 1) goto LAB_0363f3b4;
          goto LAB_0363f344;
        }
        lVar8 = *param_2;
        puVar6 = &local_48;
        goto LAB_0363f3c0;
      }
LAB_0363f344:
      uVar3 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      local_44 = uVar3 >> 0x10 | uVar3 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_44 = uVar4;
      }
LAB_0363f35c:
      (**(code **)(*param_2 + 0x38))(param_2,&local_44);
      cVar2 = *(char *)((long)param_2 + 0xc);
    }
    else {
      if (iVar7 != 0) goto LAB_0363f3d0;
      if (*(char *)((long)param_2 + 0xc) == '\0') {
LAB_0363f37c:
        local_44 = 0;
        (**(code **)(*param_2 + 0x20))(param_2,&local_44,4);
        uVar4 = (local_44 & 0xff00ff00) >> 8 | (local_44 & 0xff00ff) << 8;
        uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
        if ((int)param_2[2] != 0xff00) {
          uVar4 = local_44;
        }
      }
      else {
        local_44 = CONCAT31(local_44._1_3_,4);
        (**(code **)(*param_2 + 0x20))(param_2,&local_44,1);
        if ((int)param_2[1] == 2) {
          (**(code **)(*param_2 + 0x20))(param_2,&local_48,4);
          uVar4 = local_48;
        }
        else {
          if ((int)param_2[1] != 1) goto LAB_0363f37c;
          (**(code **)(*param_2 + 0x38))(param_2,&local_44);
          uVar4 = extraout_w8_01;
        }
      }
      *(uint *)(param_1 + 0x24) = uVar4;
      cVar2 = *(char *)((long)param_2 + 0xc);
    }
    if (cVar2 != '\0') {
      local_44._1_3_ = (undefined3)(local_44 >> 8);
      local_44 = CONCAT31(local_44._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_44,1);
    }
    puVar6 = (uint *)(param_1 + 0x28);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar6,4);
      cVar2 = *(char *)((long)param_2 + 0xc);
    }
    else if ((int)param_2[1] == 1) {
      uVar4 = *puVar6;
      uVar3 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      local_44 = uVar3 >> 0x10 | uVar3 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_44 = uVar4;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_44);
      cVar2 = *(char *)((long)param_2 + 0xc);
    }
    else {
      local_44 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_44,4);
      uVar4 = (local_44 & 0xff00ff00) >> 8 | (local_44 & 0xff00ff) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar4 = local_44;
      }
      *puVar6 = uVar4;
      cVar2 = *(char *)((long)param_2 + 0xc);
    }
    if (cVar2 != '\0') {
      local_44._1_3_ = (undefined3)(local_44 >> 8);
      local_44 = CONCAT31(local_44._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_44,1);
    }
    puVar6 = (uint *)(param_1 + 0x2c);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar6,4);
      cVar2 = *(char *)((long)param_2 + 0xc);
    }
    else if ((int)param_2[1] == 1) {
      uVar4 = *puVar6;
      uVar3 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      local_44 = uVar3 >> 0x10 | uVar3 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_44 = uVar4;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_44);
      cVar2 = *(char *)((long)param_2 + 0xc);
    }
    else {
      local_44 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_44,4);
      uVar4 = (local_44 & 0xff00ff00) >> 8 | (local_44 & 0xff00ff) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar4 = local_44;
      }
      *puVar6 = uVar4;
      cVar2 = *(char *)((long)param_2 + 0xc);
    }
    if (cVar2 != '\0') {
      local_44._1_3_ = (undefined3)(local_44 >> 8);
      local_44 = CONCAT31(local_44._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_44,1);
    }
    puVar6 = (uint *)(param_1 + 0x30);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar6,4);
      cVar2 = *(char *)((long)param_2 + 0xc);
    }
    else if ((int)param_2[1] == 1) {
      uVar4 = *puVar6;
      uVar3 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      local_44 = uVar3 >> 0x10 | uVar3 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_44 = uVar4;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_44);
      cVar2 = *(char *)((long)param_2 + 0xc);
    }
    else {
      local_44 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_44,4);
      uVar4 = (local_44 & 0xff00ff00) >> 8 | (local_44 & 0xff00ff) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar4 = local_44;
      }
      *puVar6 = uVar4;
      cVar2 = *(char *)((long)param_2 + 0xc);
    }
    if (cVar2 != '\0') {
      local_44._1_3_ = (undefined3)(local_44 >> 8);
      local_44 = CONCAT31(local_44._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_44,1);
    }
    puVar6 = (uint *)(param_1 + 0x34);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar6,4);
    }
    else if ((int)param_2[1] == 1) {
      uVar4 = *puVar6;
      uVar3 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      local_44 = uVar3 >> 0x10 | uVar3 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_44 = uVar4;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_44);
    }
    else {
      local_44 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_44,4);
      uVar4 = (local_44 & 0xff00ff00) >> 8 | (local_44 & 0xff00ff) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar4 = local_44;
      }
      *puVar6 = uVar4;
    }
    local_44._0_1_ = *(char *)(param_1 + 0x38);
    (**(code **)(*param_2 + 0x28))(param_2,&local_44);
    *(bool *)(param_1 + 0x38) = (char)local_44 != '\0';
    local_44._0_1_ = *(char *)(param_1 + 0x39);
    (**(code **)(*param_2 + 0x28))(param_2,&local_44);
    *(bool *)(param_1 + 0x39) = (char)local_44 != '\0';
    local_44 = CONCAT31(local_44._1_3_,*(undefined1 *)(param_1 + 0x3a));
    (**(code **)(*param_2 + 0x28))(param_2,&local_44);
    *(bool *)(param_1 + 0x3a) = (char)local_44 != '\0';
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_44 = CONCAT31(local_44._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_44,1);
    }
    puVar6 = (uint *)(param_1 + 0x3c);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar6,4);
      cVar2 = *(char *)((long)param_2 + 0xc);
    }
    else if ((int)param_2[1] == 1) {
      uVar4 = *puVar6;
      uVar3 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      local_44 = uVar3 >> 0x10 | uVar3 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_44 = uVar4;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_44);
      cVar2 = *(char *)((long)param_2 + 0xc);
    }
    else {
      local_44 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_44,4);
      uVar4 = (local_44 & 0xff00ff00) >> 8 | (local_44 & 0xff00ff) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar4 = local_44;
      }
      *puVar6 = uVar4;
      cVar2 = *(char *)((long)param_2 + 0xc);
    }
    if (cVar2 != '\0') {
      local_44._1_3_ = (undefined3)(local_44 >> 8);
      local_44 = CONCAT31(local_44._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_44,1);
    }
    puVar6 = (uint *)(param_1 + 0x40);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar6,4);
    }
    else if ((int)param_2[1] == 1) {
      uVar4 = *puVar6;
      uVar3 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      local_44 = uVar3 >> 0x10 | uVar3 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_44 = uVar4;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_44);
    }
    else {
      local_44 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_44,4);
      uVar4 = (local_44 & 0xff00ff00) >> 8 | (local_44 & 0xff00ff) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar4 = local_44;
      }
      *puVar6 = uVar4;
    }
    local_44._0_1_ = *(char *)(param_1 + 0x50);
    (**(code **)(*param_2 + 0x28))(param_2,&local_44);
    *(bool *)(param_1 + 0x50) = (char)local_44 != '\0';
    local_44._0_1_ = *(char *)(param_1 + 0x98);
    (**(code **)(*param_2 + 0x28))(param_2,&local_44);
    *(bool *)(param_1 + 0x98) = (char)local_44 != '\0';
    local_44 = CONCAT31(local_44._1_3_,*(undefined1 *)(param_1 + 0x99));
    (**(code **)(*param_2 + 0x28))(param_2,&local_44);
    *(bool *)(param_1 + 0x99) = (char)local_44 != '\0';
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_44 = CONCAT31(local_44._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_44,1);
    }
    puVar6 = (uint *)(param_1 + 0x9c);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar6,4);
      cVar2 = *(char *)((long)param_2 + 0xc);
    }
    else if ((int)param_2[1] == 1) {
      uVar4 = *puVar6;
      uVar3 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      local_44 = uVar3 >> 0x10 | uVar3 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_44 = uVar4;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_44);
      cVar2 = *(char *)((long)param_2 + 0xc);
    }
    else {
      local_44 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_44,4);
      uVar4 = (local_44 & 0xff00ff00) >> 8 | (local_44 & 0xff00ff) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar4 = local_44;
      }
      *puVar6 = uVar4;
      cVar2 = *(char *)((long)param_2 + 0xc);
    }
    if (cVar2 != '\0') {
      local_44._1_3_ = (undefined3)(local_44 >> 8);
      local_44 = CONCAT31(local_44._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_44,1);
    }
    puVar6 = (uint *)(param_1 + 0xa0);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar6,4);
    }
    else if ((int)param_2[1] == 1) {
      uVar4 = *puVar6;
      uVar3 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      local_44 = uVar3 >> 0x10 | uVar3 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_44 = uVar4;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_44);
    }
    else {
      local_44 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_44,4);
      uVar4 = (local_44 & 0xff00ff00) >> 8 | (local_44 & 0xff00ff) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar4 = local_44;
      }
      *puVar6 = uVar4;
    }
    uVar5 = FUN_03642b00(param_1 + 0xb0,param_2);
    if ((uVar5 & 1) != 0) {
      iVar7 = (int)param_2[1];
      if (iVar7 == 2) {
        if (*(char *)((long)param_2 + 0xc) != '\0') {
          local_44 = CONCAT31(local_44._1_3_,4);
          (**(code **)(*param_2 + 0x20))(param_2,&local_44,1);
          if ((int)param_2[1] != 2) {
            if ((int)param_2[1] != 1) {
LAB_0363fd20:
              local_44 = 0;
              goto LAB_0363fd24;
            }
            goto LAB_0363fc84;
          }
        }
LAB_0363fd24:
        lVar8 = *param_2;
        puVar6 = &local_44;
LAB_0363fd2c:
        (**(code **)(lVar8 + 0x20))(param_2,puVar6,4);
LAB_0363fd3c:
        cVar2 = *(char *)((long)param_2 + 0xc);
      }
      else if (iVar7 == 1) {
        uVar4 = *(uint *)(param_1 + 0x88);
        local_48 = uVar4;
        if (*(char *)((long)param_2 + 0xc) != '\0') {
          local_44 = CONCAT31(local_44._1_3_,4);
          (**(code **)(*param_2 + 0x20))(param_2,&local_44,1);
          if ((int)param_2[1] != 2) {
            if ((int)param_2[1] != 1) goto LAB_0363fd20;
            goto LAB_0363fc6c;
          }
          lVar8 = *param_2;
          puVar6 = &local_48;
          goto LAB_0363fd2c;
        }
LAB_0363fc6c:
        uVar3 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
        local_44 = uVar3 >> 0x10 | uVar3 << 0x10;
        if ((int)param_2[2] != 0xff00) {
          local_44 = uVar4;
        }
LAB_0363fc84:
        (**(code **)(*param_2 + 0x38))(param_2,&local_44);
        cVar2 = *(char *)((long)param_2 + 0xc);
      }
      else {
        if (iVar7 != 0) goto LAB_0363fd3c;
        if (*(char *)((long)param_2 + 0xc) == '\0') {
LAB_0363fca4:
          local_44 = 0;
          (**(code **)(*param_2 + 0x20))(param_2,&local_44,4);
          uVar4 = (local_44 & 0xff00ff00) >> 8 | (local_44 & 0xff00ff) << 8;
          uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
          if ((int)param_2[2] != 0xff00) {
            uVar4 = local_44;
          }
        }
        else {
          local_44 = CONCAT31(local_44._1_3_,4);
          (**(code **)(*param_2 + 0x20))(param_2,&local_44,1);
          if ((int)param_2[1] == 2) {
            (**(code **)(*param_2 + 0x20))(param_2,&local_48,4);
            uVar4 = local_48;
          }
          else {
            if ((int)param_2[1] != 1) goto LAB_0363fca4;
            (**(code **)(*param_2 + 0x38))(param_2,&local_44);
            uVar4 = extraout_w8_02;
          }
        }
        *(uint *)(param_1 + 0x88) = uVar4;
        cVar2 = *(char *)((long)param_2 + 0xc);
      }
      if (cVar2 != '\0') {
        local_44._1_3_ = (undefined3)(local_44 >> 8);
        local_44 = CONCAT31(local_44._1_3_,4);
        (**(code **)(*param_2 + 0x20))(param_2,&local_44,1);
      }
      puVar6 = (uint *)(param_1 + 0x8c);
      if ((int)param_2[1] == 2) {
        (**(code **)(*param_2 + 0x20))(param_2,puVar6,4);
      }
      else if ((int)param_2[1] == 1) {
        uVar4 = *puVar6;
        uVar3 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
        local_44 = uVar3 >> 0x10 | uVar3 << 0x10;
        if ((int)param_2[2] != 0xff00) {
          local_44 = uVar4;
        }
        (**(code **)(*param_2 + 0x38))(param_2,&local_44);
      }
      else {
        local_44 = 0;
        (**(code **)(*param_2 + 0x20))(param_2,&local_44,4);
        uVar4 = (local_44 & 0xff00ff00) >> 8 | (local_44 & 0xff00ff) << 8;
        uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
        if ((int)param_2[2] != 0xff00) {
          uVar4 = local_44;
        }
        *puVar6 = uVar4;
      }
      puVar6 = (uint *)(param_1 + 0x94);
      if (local_68 < 7) {
        *puVar6 = 0;
LAB_0363fe88:
        *(undefined1 *)(param_1 + 0x47e8) = 0;
switchD_03600464_caseD_363fe8c:
        *(undefined2 *)(param_1 + 0x47e9) = 0;
        iVar7 = (int)param_2[1];
      }
      else {
        if (*(char *)((long)param_2 + 0xc) != '\0') {
          local_44 = CONCAT31(local_44._1_3_,4);
          (**(code **)(*param_2 + 0x20))(param_2,&local_44,1);
        }
        if ((int)param_2[1] == 2) {
          (**(code **)(*param_2 + 0x20))(param_2,puVar6,4);
        }
        else if ((int)param_2[1] == 1) {
          uVar4 = *puVar6;
          uVar3 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
          local_44 = uVar3 >> 0x10 | uVar3 << 0x10;
          if ((int)param_2[2] != 0xff00) {
            local_44 = uVar4;
          }
          (**(code **)(*param_2 + 0x38))(param_2,&local_44);
        }
        else {
          local_44 = 0;
          (**(code **)(*param_2 + 0x20))(param_2,&local_44,4);
          uVar4 = (local_44 & 0xff00ff00) >> 8 | (local_44 & 0xff00ff) << 8;
          uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
          if ((int)param_2[2] != 0xff00) {
            uVar4 = local_44;
          }
          *puVar6 = uVar4;
        }
        if (*(char *)((long)param_2 + 0xc) != '\0') {
          local_44 = CONCAT31(local_44._1_3_,4);
          (**(code **)(*param_2 + 0x20))(param_2,&local_44,1);
        }
        puVar6 = (uint *)(param_1 + 0x90);
        if ((int)param_2[1] == 2) {
          (**(code **)(*param_2 + 0x20))(param_2,puVar6,4);
        }
        else if ((int)param_2[1] == 1) {
          uVar4 = *puVar6;
          uVar3 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
          local_44 = uVar3 >> 0x10 | uVar3 << 0x10;
          if ((int)param_2[2] != 0xff00) {
            local_44 = uVar4;
          }
          (**(code **)(*param_2 + 0x38))(param_2,&local_44);
        }
        else {
          local_44 = 0;
          (**(code **)(*param_2 + 0x20))(param_2,&local_44,4);
          uVar4 = (local_44 & 0xff00ff00) >> 8 | (local_44 & 0xff00ff) << 8;
          uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
          if ((int)param_2[2] != 0xff00) {
            uVar4 = local_44;
          }
          *puVar6 = uVar4;
        }
        if (local_68 < 9) goto LAB_0363fe88;
        local_44._1_3_ = (undefined3)(local_44 >> 8);
        local_44 = CONCAT31(local_44._1_3_,*(undefined1 *)(param_1 + 0x47e8));
        (**(code **)(*param_2 + 0x28))(param_2,&local_44);
        *(bool *)(param_1 + 0x47e8) = (char)local_44 != '\0';
        if (local_68 == 9) goto switchD_03600464_caseD_363fe8c;
        local_44._0_1_ = *(char *)(param_1 + 0x47e9);
        (**(code **)(*param_2 + 0x28))(param_2,&local_44);
        *(bool *)(param_1 + 0x47e9) = (char)local_44 != '\0';
        local_44 = CONCAT31(local_44._1_3_,*(undefined1 *)(param_1 + 0x47ea));
        (**(code **)(*param_2 + 0x28))(param_2,&local_44);
        *(bool *)(param_1 + 0x47ea) = (char)local_44 != '\0';
        iVar7 = (int)param_2[1];
      }
      if ((iVar7 == 0) && (*(int *)(param_1 + 0x88) != 2)) {
        (**(code **)(param_1 + 0x47b0))(*(int *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x47b8));
      }
      local_44 = CONCAT31(local_44._1_3_,*(undefined1 *)(param_1 + 0x47d0));
      (**(code **)(*param_2 + 0x28))(param_2,&local_44);
      *(undefined1 *)(param_1 + 0x47d0) = (char)local_44 != '\0';
      if (local_68 < 0xb) {
        uVar4 = FUN_03640670(param_1,param_2,param_3,param_4);
        goto LAB_036400f8;
      }
      if (*(ulong *)(param_1 + 0x60) == param_4) {
        if ((int)param_2[1] == 0) {
          iVar7 = *(int *)(param_1 + 0x40);
          FUN_0363e9a4(param_1,param_3,param_4,*(undefined4 *)(param_1 + 0x68));
          memset(*(void **)(param_1 + 0x80),0,*(size_t *)(param_1 + 0x78));
          while( true ) {
            if (*(char *)((long)param_2 + 0xc) != '\0') {
              local_44 = CONCAT31(local_44._1_3_,4);
              (**(code **)(*param_2 + 0x20))(param_2,&local_44,1);
            }
            if ((int)param_2[1] == 2) {
              (**(code **)(*param_2 + 0x20))(param_2,&local_48,4);
            }
            else if ((int)param_2[1] == 1) {
              uVar4 = (local_48 & 0xff00ff00) >> 8 | (local_48 & 0xff00ff) << 8;
              local_44 = uVar4 >> 0x10 | uVar4 << 0x10;
              if ((int)param_2[2] != 0xff00) {
                local_44 = local_48;
              }
              (**(code **)(*param_2 + 0x38))(param_2,&local_44);
            }
            else {
              local_44 = 0;
              (**(code **)(*param_2 + 0x20))(param_2,&local_44,4);
              uVar4 = (local_44 & 0xff00ff00) >> 8 | (local_44 & 0xff00ff) << 8;
              local_48 = uVar4 >> 0x10 | uVar4 << 0x10;
              if ((int)param_2[2] != 0xff00) {
                local_48 = local_44;
              }
            }
            if (local_48 == 0xffffffff) break;
            if (*(char *)((long)param_2 + 0xc) != '\0') {
              local_44._1_3_ = (undefined3)(local_44 >> 8);
              local_44 = CONCAT31(local_44._1_3_,4);
              (**(code **)(*param_2 + 0x20))(param_2,&local_44,1);
            }
            if ((int)param_2[1] == 2) {
              (**(code **)(*param_2 + 0x20))(param_2,&local_64,4);
            }
            else if ((int)param_2[1] == 1) {
              uVar4 = (local_64 & 0xff00ff00) >> 8 | (local_64 & 0xff00ff) << 8;
              local_44 = uVar4 >> 0x10 | uVar4 << 0x10;
              if ((int)param_2[2] != 0xff00) {
                local_44 = local_64;
              }
              (**(code **)(*param_2 + 0x38))(param_2,&local_44);
            }
            else {
              local_44 = 0;
              (**(code **)(*param_2 + 0x20))(param_2,&local_44,4);
              uVar4 = (local_44 & 0xff00ff00) >> 8 | (local_44 & 0xff00ff) << 8;
              local_64 = uVar4 >> 0x10 | uVar4 << 0x10;
              if ((int)param_2[2] != 0xff00) {
                local_64 = local_44;
              }
            }
            (**(code **)(*param_2 + 0x20))
                      (param_2,*(long *)(param_1 + 0x58) + (ulong)local_48,local_64);
            uVar5 = (ulong)local_48;
            if (local_48 < local_64 + local_48) {
              uVar9 = (ulong)(local_48 >> 10);
              do {
                uVar5 = uVar5 + 0x400;
                *(undefined1 *)(*(long *)(param_1 + 0x80) + uVar9) = 1;
                uVar9 = uVar9 + 1;
              } while (uVar5 < local_64 + local_48);
            }
          }
          if (iVar7 != -1) {
            *(int *)(param_1 + 0x40) = iVar7;
            *(ulong *)(param_1 + 0x48) =
                 *(long *)(param_1 + 0x58) + (ulong)(uint)(*(int *)(param_1 + 0x70) * iVar7);
          }
        }
        else {
          if (param_4 != 0) {
            uVar5 = 0;
            do {
              while (*(char *)(*(long *)(param_1 + 0x80) + (uVar5 >> 10)) != '\x01') {
                uVar9 = param_4;
                if (0x3ff < param_4) {
                  uVar9 = 0x400;
                }
                uVar5 = uVar9 + uVar5;
                param_4 = param_4 - uVar9;
                if (param_4 == 0) goto LAB_03640360;
              }
              uVar9 = 0;
              do {
                if (*(char *)(*(long *)(param_1 + 0x58) + uVar5 + uVar9) !=
                    *(char *)(param_3 + uVar5 + uVar9)) goto LAB_03640180;
                uVar9 = uVar9 + 1;
              } while (param_4 != uVar9);
              uVar9 = param_4;
LAB_03640180:
              lVar8 = param_4 - uVar9;
              if (lVar8 == 0) break;
              lVar1 = uVar9 + uVar5;
              lVar10 = 0;
              if (lVar8 != 0) {
                do {
                  if (*(char *)(*(long *)(param_1 + 0x58) + lVar1 + lVar10) ==
                      *(char *)(param_3 + lVar1 + lVar10)) goto LAB_036401c0;
                  lVar10 = lVar10 + 1;
                } while (lVar8 != lVar10);
                lVar10 = lVar8;
              }
LAB_036401c0:
              local_48 = (uint)lVar1;
              if (*(char *)((long)param_2 + 0xc) != '\0') {
                local_44 = CONCAT31(local_44._1_3_,4);
                (**(code **)(*param_2 + 0x20))(param_2,&local_44,1);
              }
              if ((int)param_2[1] == 2) {
                (**(code **)(*param_2 + 0x20))(param_2,&local_48,4);
              }
              else if ((int)param_2[1] == 1) {
                uVar4 = (local_48 & 0xff00ff00) >> 8 | (local_48 & 0xff00ff) << 8;
                local_44 = uVar4 >> 0x10 | uVar4 << 0x10;
                if ((int)param_2[2] != 0xff00) {
                  local_44 = local_48;
                }
                (**(code **)(*param_2 + 0x38))(param_2,&local_44);
              }
              else {
                local_44 = 0;
                (**(code **)(*param_2 + 0x20))(param_2,&local_44,4);
                uVar4 = (local_44 & 0xff00ff00) >> 8 | (local_44 & 0xff00ff) << 8;
                local_48 = uVar4 >> 0x10 | uVar4 << 0x10;
                if ((int)param_2[2] != 0xff00) {
                  local_48 = local_44;
                }
              }
              local_64 = (uint)lVar10;
              if (*(char *)((long)param_2 + 0xc) != '\0') {
                local_44 = CONCAT31(local_44._1_3_,4);
                (**(code **)(*param_2 + 0x20))(param_2,&local_44,1);
              }
              if ((int)param_2[1] == 2) {
                (**(code **)(*param_2 + 0x20))(param_2,&local_64,4);
              }
              else if ((int)param_2[1] == 1) {
                uVar4 = (local_64 & 0xff00ff00) >> 8 | (local_64 & 0xff00ff) << 8;
                local_44 = uVar4 >> 0x10 | uVar4 << 0x10;
                if ((int)param_2[2] != 0xff00) {
                  local_44 = local_64;
                }
                (**(code **)(*param_2 + 0x38))(param_2,&local_44);
              }
              else {
                local_44 = 0;
                (**(code **)(*param_2 + 0x20))(param_2,&local_44,4);
                uVar4 = (local_44 & 0xff00ff00) >> 8 | (local_44 & 0xff00ff) << 8;
                local_64 = uVar4 >> 0x10 | uVar4 << 0x10;
                if ((int)param_2[2] != 0xff00) {
                  local_64 = local_44;
                }
              }
              (**(code **)(*param_2 + 0x20))(param_2,*(long *)(param_1 + 0x58) + lVar1,lVar10);
              uVar5 = lVar10 + lVar1;
              param_4 = lVar8 - lVar10;
            } while (param_4 != 0);
          }
LAB_03640360:
          local_48 = 0xffffffff;
          if (*(char *)((long)param_2 + 0xc) != '\0') {
            local_44 = CONCAT31(local_44._1_3_,4);
            (**(code **)(*param_2 + 0x20))(param_2,&local_44,1);
          }
          if ((int)param_2[1] == 2) {
            lVar8 = *param_2;
            puVar6 = &local_48;
          }
          else {
            if ((int)param_2[1] == 1) {
              local_44 = 0xffffffff;
              (**(code **)(*param_2 + 0x38))(param_2,&local_44);
              goto LAB_03640660;
            }
            lVar8 = *param_2;
            local_44 = 0;
            puVar6 = &local_44;
          }
          (**(code **)(lVar8 + 0x20))(param_2,puVar6,4);
        }
LAB_03640660:
        uVar4 = 1;
        goto LAB_036400f8;
      }
    }
  }
  uVar4 = 0;
LAB_036400f8:
  return uVar4 & 1;
}

