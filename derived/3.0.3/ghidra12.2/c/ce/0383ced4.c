
void FUN_0383ced4(long param_1,char *param_2,long param_3)

{
  uint uVar1;
  char cVar2;
  ulong uVar3;
  undefined *puVar4;
  int iVar5;
  byte *pbVar6;
  byte bVar7;
  char *pcVar8;
  long lVar9;
  float fVar10;
  undefined8 local_e8;
  undefined ***local_e0;
  long local_d8;
  undefined **local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long lStack_98;
  undefined **local_90;
  undefined1 *puStack_88;
  undefined1 local_80;
  byte *local_78;
  undefined8 uStack_70;
  long local_68;
  undefined **ppuStack_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48;
  
  bVar7 = *(byte *)(param_1 + 8);
  if ((bVar7 >> 5 & 1) == 0) {
    *(byte *)(param_1 + 8) = bVar7 | 2;
    return;
  }
  cVar2 = *param_2;
  if ((bVar7 & 1) != 0) {
    return;
  }
  if (((bVar7 & 4) != 0 && param_3 == 0) && cVar2 == '\0') {
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 0:
    if (*(long *)(param_2 + 8) != 0) {
      local_c8 = 0;
      local_c0 = 0;
      local_d0 = (undefined **)0x0;
      local_50 = 0;
      local_48 = 0;
      lVar9 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0xb4510);
      local_e8 = *(undefined8 *)(lVar9 + 0x130);
      local_e0 = (undefined ***)CONCAT44(local_e0._4_4_,(int)*(undefined8 *)(lVar9 + 0x138));
      FUN_02a1e144(lVar9,&local_50,*(long *)(param_2 + 8),&local_e8,0);
      FUN_02a1e4c0(local_50,local_48,lVar9,&local_d0);
      fVar10 = local_d0._0_4_ * local_d0._0_4_;
      if (((param_3 != 0) && (0.0 <= fVar10)) && (fVar10 < 40000.0)) {
        pbVar6 = (byte *)(param_1 + 0x38);
        *(undefined4 *)(param_1 + 0x10) = 1;
        puVar4 = PTR_DAT_04bb28b0;
        pcVar8 = *(char **)(param_3 + 0x28);
        if (*pcVar8 == '\0') {
          *pbVar6 = *pbVar6 | 1;
        }
        else {
          uVar3 = (ulong)local_c8 >> 0x10;
          local_c8 = CONCAT62((uint6)uVar3 & 0xffffffffff00,1);
          local_d8 = param_1 + 0x48;
          local_80 = 1;
          *(byte *)(param_1 + 0x38) = *pbVar6 & 0xfe;
          lVar9 = *(long *)puVar4;
          local_90 = &PTR_LAB_048f9770;
          puStack_88 = &DAT_0419b684;
          uStack_70 = 0;
          local_e0 = &local_d0;
          ppuStack_60 = &PTR_LAB_048f9770;
          local_b0 = lVar9 + 0x558;
          uStack_a8 = 0;
          lStack_98 = lVar9 + 0x578;
          local_a0 = 0;
          local_e8 = 0;
          local_d0 = &PTR_FUN_04b5d1d8;
          local_c0 = *(undefined8 *)(lVar9 + 0x198);
          uStack_b8 = 0;
          local_78 = pbVar6;
          local_68 = local_d8;
          local_58 = pcVar8;
          FUN_03f45184(lVar9 + 0x1a8,&local_e8);
        }
      }
      if (*(int *)(param_1 + 0x10) == 1) {
        FUN_0383d538(fVar10,param_1);
      }
    }
    break;
  case 1:
    if (*(long *)(param_2 + 8) == 0) {
      fVar10 = -1.0;
    }
    else {
      local_c8 = 0;
      local_c0 = 0;
      local_d0 = (undefined **)0x0;
      local_50 = 0;
      local_48 = 0;
      lVar9 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0xb4510);
      local_e8 = *(undefined8 *)(lVar9 + 0x130);
      local_e0 = (undefined ***)CONCAT44(local_e0._4_4_,(int)*(undefined8 *)(lVar9 + 0x138));
      FUN_02a1e144(lVar9,&local_50,*(long *)(param_2 + 8),&local_e8,0);
      FUN_02a1e4c0(local_50,local_48,lVar9,&local_d0);
      fVar10 = local_d0._0_4_ * local_d0._0_4_;
    }
    FUN_0383d538(fVar10,param_1);
    iVar5 = *(int *)(param_1 + 0x10);
LAB_0383d394:
    if (iVar5 == 2) {
LAB_0383d444:
      FUN_0383d65c(fVar10,param_1,param_3);
    }
    break;
  case 2:
    if (*(long *)(param_2 + 8) == 0) {
      fVar10 = -1.0;
    }
    else {
      local_c8 = 0;
      local_c0 = 0;
      local_d0 = (undefined **)0x0;
      local_50 = 0;
      local_48 = 0;
      lVar9 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0xb4510);
      local_e8 = *(undefined8 *)(lVar9 + 0x130);
      local_e0 = (undefined ***)CONCAT44(local_e0._4_4_,(int)*(undefined8 *)(lVar9 + 0x138));
      FUN_02a1e144(lVar9,&local_50,*(long *)(param_2 + 8),&local_e8,0);
      FUN_02a1e4c0(local_50,local_48,lVar9,&local_d0);
      fVar10 = local_d0._0_4_ * local_d0._0_4_;
    }
    FUN_0383d65c(fVar10,param_1,param_3);
    if (*(int *)(param_1 + 0x10) == 3) {
      FUN_0383d7d0(fVar10,param_1);
    }
    break;
  case 3:
    if (*(long *)(param_2 + 8) == 0) {
      fVar10 = -1.0;
    }
    else {
      local_c8 = 0;
      local_c0 = 0;
      local_d0 = (undefined **)0x0;
      local_50 = 0;
      local_48 = 0;
      lVar9 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0xb4510);
      local_e8 = *(undefined8 *)(lVar9 + 0x130);
      local_e0 = (undefined ***)CONCAT44(local_e0._4_4_,(int)*(undefined8 *)(lVar9 + 0x138));
      FUN_02a1e144(lVar9,&local_50,*(long *)(param_2 + 8),&local_e8,0);
      FUN_02a1e4c0(local_50,local_48,lVar9,&local_d0);
      fVar10 = local_d0._0_4_ * local_d0._0_4_;
      if ((0.0 <= fVar10) && (32400.0 <= fVar10)) {
        FUN_03f45838(param_1 + 0x80);
      }
    }
    if (*(int *)(param_1 + 0x88) == 3) {
      *(undefined4 *)(param_1 + 0x10) = 2;
    }
    else {
      if (*(int *)(param_1 + 0x88) == 2) goto LAB_0383d458;
      if (*(int *)(param_1 + 0x10) == 4) goto LAB_0383d46c;
    }
    break;
  case 4:
    if (*(long *)(param_2 + 8) == 0) {
      fVar10 = -1.0;
    }
    else {
      local_c8 = 0;
      local_c0 = 0;
      local_d0 = (undefined **)0x0;
      local_50 = 0;
      local_48 = 0;
      lVar9 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0xb4510);
      local_e8 = *(undefined8 *)(lVar9 + 0x130);
      local_e0 = (undefined ***)CONCAT44(local_e0._4_4_,(int)*(undefined8 *)(lVar9 + 0x138));
      FUN_02a1e144(lVar9,&local_50,*(long *)(param_2 + 8),&local_e8,0);
      FUN_02a1e4c0(local_50,local_48,lVar9,&local_d0);
      fVar10 = local_d0._0_4_ * local_d0._0_4_;
    }
    FUN_0383d844(fVar10,param_1,param_3,cVar2 != '\0');
    if (*(int *)(param_1 + 0x10) == 5) goto LAB_0383d4a8;
    break;
  case 5:
    fVar10 = 0.0;
    if ((bVar7 >> 2 & 1) != 0) {
      if (*(long *)(param_2 + 8) == 0) {
        fVar10 = -1.0;
      }
      else {
        local_d0 = (undefined **)0x0;
        local_c8 = 0;
        local_c0 = 0;
        FUN_02a556cc(0,&local_d0,*(long *)(param_2 + 8),0);
        fVar10 = local_d0._0_4_ * local_d0._0_4_;
      }
    }
LAB_0383d4a8:
    FUN_0383daa0(fVar10,param_1,cVar2 != '\0');
    break;
  case 6:
    if (*(long *)(param_2 + 8) == 0) {
      fVar10 = -1.0;
    }
    else {
      local_c8 = 0;
      local_c0 = 0;
      local_d0 = (undefined **)0x0;
      local_50 = 0;
      local_48 = 0;
      lVar9 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0xb4510);
      local_e8 = *(undefined8 *)(lVar9 + 0x130);
      local_e0 = (undefined ***)CONCAT44(local_e0._4_4_,(int)*(undefined8 *)(lVar9 + 0x138));
      FUN_02a1e144(lVar9,&local_50,*(long *)(param_2 + 8),&local_e8,0);
      FUN_02a1e4c0(local_50,local_48,lVar9,&local_d0);
      fVar10 = local_d0._0_4_ * local_d0._0_4_;
      if ((0.0 <= fVar10) && (fVar10 < 28900.0)) {
        FUN_03f45838(param_1 + 0x80);
      }
    }
    if (*(int *)(param_1 + 0x88) != 3) {
      if (*(int *)(param_1 + 0x88) != 2) {
        iVar5 = *(int *)(param_1 + 0x10);
        if (iVar5 == 4) goto LAB_0383d46c;
        goto LAB_0383d394;
      }
      *(undefined4 *)(param_1 + 0x10) = 2;
      goto LAB_0383d444;
    }
LAB_0383d458:
    *(undefined4 *)(param_1 + 0x10) = 4;
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 2;
LAB_0383d46c:
    FUN_0383d844(fVar10,param_1,param_3,cVar2 != '\0');
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((*(uint *)(param_1 + 0xc) == uVar1) || ((uVar1 & 0xfffffffe) != 4)) {
    bVar7 = *(byte *)(param_1 + 8);
  }
  else {
    bVar7 = *(byte *)(param_1 + 8);
    if (*(int *)(param_1 + 0xc) != 5) {
      bVar7 = bVar7 | 0x40;
      goto LAB_0383d4f4;
    }
  }
  bVar7 = bVar7 & 0xbf;
LAB_0383d4f4:
  *(byte *)(param_1 + 8) = bVar7;
  *(uint *)(param_1 + 0xc) = uVar1;
  return;
}

