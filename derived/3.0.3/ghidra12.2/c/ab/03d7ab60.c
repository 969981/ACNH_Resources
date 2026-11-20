
void FUN_03d7ab60(undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  undefined *puVar1;
  undefined2 *puVar2;
  short *psVar3;
  float fVar4;
  float fVar5;
  undefined *puVar6;
  undefined *puVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ushort uVar13;
  uint uVar14;
  int iVar15;
  ushort *puVar16;
  long *plVar17;
  ushort *puVar18;
  undefined *local_948;
  undefined2 *local_940;
  int local_938;
  undefined2 local_934 [31];
  undefined2 local_8f6;
  undefined2 local_136;
  undefined8 local_130;
  short *local_128;
  int local_120;
  short local_11c [31];
  undefined2 local_de;
  undefined *local_d8;
  undefined2 *local_d0;
  undefined4 local_c8;
  undefined2 local_c4 [31];
  undefined2 local_86;
  
  puVar7 = PTR_DAT_04bc0cb8;
  puVar1 = PTR_DAT_04bc0840;
  if (*(int *)(param_5 + 0xb34) == 0) {
    plVar17 = *(long **)(param_5 + 600);
    (**(code **)(PTR_PTR_04c4b990 + 0x18))(&PTR_PTR_04c4b990);
    puVar1 = PTR_DAT_04c4b998;
    local_940._0_4_ = 0x47;
    local_948 = puVar7 + 0x10;
    (**(code **)(*plVar17 + 0x18))(plVar17,&local_948);
    (**(code **)(plVar17[3] + 0x488))(plVar17[1],puVar1);
    plVar17 = *(long **)(param_5 + 600);
    local_940 = (undefined2 *)CONCAT44(local_940._4_4_,7);
    local_948 = puVar7 + 0x10;
    (**(code **)(*plVar17 + 0x18))(plVar17,&local_948);
    (**(code **)(plVar17[3] + 0x88))(plVar17[1],0);
    return;
  }
  local_86 = 0;
  local_d0 = local_c4;
  local_c4[0] = 0;
  *(undefined2 *)(param_5 + 0xb74) = 0;
  local_c8 = 0x20;
  local_948 = puVar1 + 0x10;
  *(undefined1 *)(param_5 + 0xb88) = 0;
  local_d8 = local_948;
  if (*(int *)(param_5 + 0xb5c) < *(int *)(param_5 + 0xb34)) {
    uVar9 = FUN_03d7b580(param_5,&local_d8);
    local_938 = 0x20;
    local_940 = local_934;
    local_8f6 = 0;
    local_934[0] = 0;
    FUN_03d7beb0(&local_948,&local_d8);
    puVar6 = PTR_DAT_04bb2da0;
    puVar2 = local_940;
    if (local_938 < 1) {
      puVar2 = (undefined2 *)PTR_DAT_04bb2da0;
    }
    *(undefined2 *)(param_5 + 0xb74) = *puVar2;
    if (*(int *)(param_5 + 0xb84) < 1) {
      if (*(char *)(param_5 + 0xb89) != '\0') {
        plVar17 = *(long **)(param_5 + 0x260);
        *(undefined4 *)(param_5 + 0xb8c) = 0xffffffff;
        (**(code **)(*plVar17 + 0x18))(plVar17);
        uVar13 = *(ushort *)plVar17[1];
        if (uVar13 != 0) {
          iVar10 = 0;
          puVar16 = (ushort *)plVar17[1];
          do {
            if ((uVar13 & 0xfffe) == 0xe) {
              if (uVar13 == 0xf) {
                puVar18 = puVar16 + 3;
                uVar13 = puVar16[1];
joined_r0x03d7b1f4:
                if (uVar13 != 0) goto LAB_03d7b1f8;
LAB_03d7b22c:
                if ((puVar16[2] == 2) && (*(int *)(param_5 + 0xb5c) < iVar10)) {
                  fVar4 = (float)NEON_ucvtf((uint)puVar16[4]);
                  *(float *)(param_5 + 0xb90) = fVar4 / 100.0;
                  uVar13 = puVar16[1];
                  if (uVar13 != 0xfc) goto LAB_03d7b200;
                  goto LAB_03d7b264;
                }
LAB_03d7b330:
                puVar11 = *(undefined8 **)(param_5 + 0xc48);
                if ((puVar11 != (undefined8 *)0x0) &&
                   (uVar12 = (**(code **)*puVar11)(puVar11,puVar16), (uVar12 & 1) != 0))
                goto LAB_03d7b34c;
              }
              else {
                if (uVar13 != 0xe) {
                  puVar18 = puVar16;
                  uVar13 = uRam0000000000000002;
                  puVar16 = (ushort *)0x0;
                  goto joined_r0x03d7b1f4;
                }
                puVar18 = (ushort *)((long)puVar16 + (ulong)puVar16[3] + 8);
                uVar13 = puVar16[1];
                if (uVar13 == 0) goto LAB_03d7b22c;
LAB_03d7b1f8:
                if (uVar13 == 0xfc) {
LAB_03d7b264:
                  if (puVar16[2] == 0) {
                    uVar13 = 0xfc;
                    if ((*(int *)(param_5 + 0xb5c) <= iVar10) && (*(int *)(param_5 + 0xb8c) == -1))
                    {
                      *(int *)(param_5 + 0xb8c) = iVar10;
                      uVar13 = puVar16[1];
                    }
                    iVar10 = iVar10 + 1;
LAB_03d7b294:
                    if (uVar13 == 1) {
                      uVar13 = puVar16[2];
                      goto LAB_03d7b2a0;
                    }
                  }
                  goto LAB_03d7b330;
                }
LAB_03d7b200:
                if (uVar13 != 1) goto LAB_03d7b294;
                uVar13 = puVar16[2];
                if (uVar13 == 0) {
                  iVar10 = iVar10 + 1;
                }
                if (uVar13 == 2) {
                  iVar10 = iVar10 + 1;
                }
LAB_03d7b2a0:
                uVar14 = (uint)uVar13;
                iVar15 = *(int *)(param_5 + 0xb5c);
                if ((uVar13 == 1) && (iVar15 < iVar10)) {
                  *(undefined4 *)(param_5 + 0xb80) = *(undefined4 *)(puVar16 + 4);
                  if (puVar16[1] != 1) goto LAB_03d7b330;
                  uVar14 = (uint)puVar16[2];
                }
                if ((uVar14 == 3) && (iVar15 < iVar10)) {
                  if ((*(int *)(param_5 + 0xb8c) < iVar15) || (iVar10 < *(int *)(param_5 + 0xb8c)))
                  {
                    *(undefined1 *)(param_5 + 0xb9d) = 1;
                    *(undefined4 *)(param_5 + 0xba0) = *(undefined4 *)(puVar16 + 4);
                    if (puVar16[1] == 1) {
                      uVar14 = (uint)puVar16[2];
                      goto LAB_03d7b30c;
                    }
                  }
                  goto LAB_03d7b330;
                }
LAB_03d7b30c:
                if ((uVar14 < 0xb) && ((1 << (ulong)(uVar14 & 0x1f) & 0x770U) != 0)) {
                  iVar10 = iVar10 + 1;
                }
                if (uVar14 != 7) goto LAB_03d7b330;
LAB_03d7b34c:
                iVar10 = iVar10 + 1;
              }
              puVar11 = *(undefined8 **)(param_5 + 0xc40);
              if ((puVar11 != (undefined8 *)0x0) && (*(int *)(param_5 + 0xb5c) < iVar10)) {
                (**(code **)*puVar11)(puVar11,puVar16);
              }
            }
            else {
              iVar10 = iVar10 + 1;
              puVar18 = puVar16 + 1;
            }
            uVar13 = *puVar18;
            puVar16 = puVar18;
          } while (uVar13 != 0);
        }
        iVar10 = *(int *)(param_5 + 0xb8c);
        if (iVar10 == -1) {
          iVar10 = *(int *)(param_5 + 0xb34);
        }
        else {
          iVar15 = *(int *)(param_5 + 0xb5c);
          if (iVar15 < iVar10) {
            cVar8 = *(char *)(param_5 + 0xb76);
            do {
              if (cVar8 != '\0') {
                *(undefined1 *)(param_5 + 0xb76) = 0;
                *(int *)(param_5 + 0xb60) = *(int *)(param_5 + 0xb60) + 1;
              }
              FUN_03d7b580(param_5,&local_d8,iVar15);
              local_120 = 0x20;
              local_de = 0;
              local_11c[0] = 0;
              local_130 = puVar1 + 0x10;
              local_128 = local_11c;
              FUN_03d7beb0(&local_130,&local_d8);
              iVar15 = iVar15 + 1;
              psVar3 = local_128;
              if (local_120 < 1) {
                psVar3 = (short *)puVar6;
              }
              cVar8 = *psVar3 == 10;
              *(char *)(param_5 + 0xb76) = cVar8;
              *(short *)(param_5 + 0xb78) = *psVar3;
              iVar10 = *(int *)(param_5 + 0xb8c);
            } while (iVar15 < iVar10);
          }
          iVar10 = iVar10 + 1;
        }
        *(int *)(param_5 + 0xb5c) = iVar10;
        if ((*(char *)(param_5 + 0xb9d) != '\0') && (*(int *)(param_5 + 0xba4) == -1)) {
          *(undefined4 *)(param_5 + 0xba4) = *(undefined4 *)(param_5 + 0xba0);
        }
        *(undefined1 *)(param_5 + 0xb89) = 0;
LAB_03d7b47c:
        FUN_03d7ab60(param_5);
        return;
      }
      if (*(char *)(param_5 + 0xb94) != '\0') {
        *(undefined1 *)(param_5 + 0xb94) = 0;
        *(int *)(param_5 + 0xb5c) = *(int *)(param_5 + 0xb5c) + 1;
        goto LAB_03d7b47c;
      }
      plVar17 = *(long **)(param_5 + 600);
      (**(code **)(local_d8 + 0x18))(&local_d8);
      puVar2 = local_d0;
      puVar1 = PTR_DAT_04bc0878 + 0x10;
      local_128._0_4_ = 9;
      local_130 = puVar1;
      (**(code **)(*plVar17 + 0x18))(plVar17,&local_130);
      (**(code **)(plVar17[3] + 0x5e0))(plVar17[1],puVar2,uVar9);
      plVar17 = *(long **)(param_5 + 600);
      local_130 = puVar7 + 0x10;
      local_128._0_4_ = 7;
      (**(code **)(*plVar17 + 0x18))(plVar17,&local_130);
      (**(code **)(plVar17[3] + 0x88))(plVar17[1],1);
      plVar17 = *(long **)(param_5 + 600);
      local_128 = (short *)CONCAT44(local_128._4_4_,0xf);
      local_130 = puVar1;
      (**(code **)(*plVar17 + 0x18))(plVar17,&local_130);
      (**(code **)(plVar17[3] + 0x610))(plVar17[1]);
    }
    else {
      plVar17 = *(long **)(param_5 + 600);
      (**(code **)(PTR_PTR_04c4b990 + 0x18))(&PTR_PTR_04c4b990);
      puVar1 = PTR_DAT_04c4b998;
      local_128._0_4_ = 0x47;
      local_130 = puVar7 + 0x10;
      (**(code **)(*plVar17 + 0x18))(plVar17,&local_130);
      (**(code **)(plVar17[3] + 0x488))(plVar17[1],puVar1);
      plVar17 = *(long **)(param_5 + 600);
      local_128 = (short *)CONCAT44(local_128._4_4_,7);
      local_130 = puVar7 + 0x10;
      (**(code **)(*plVar17 + 0x18))(plVar17,&local_130);
      (**(code **)(plVar17[3] + 0x88))(plVar17[1],0);
      *(undefined1 *)(param_5 + 0xb88) = 1;
    }
    FUN_03d7c0a0(param_5,&local_d8);
    if (-1 < *(int *)(param_5 + 0xb5c)) goto LAB_03d7ae7c;
LAB_03d7ace4:
    plVar17 = *(long **)(param_5 + 0x250);
    (**(code **)(PTR_PTR_04c4b990 + 0x18))(&PTR_PTR_04c4b990);
    puVar1 = PTR_DAT_04c4b998;
    local_948 = puVar7 + 0x10;
    local_940 = (undefined2 *)CONCAT44(local_940._4_4_,0x47);
    (**(code **)(*plVar17 + 0x18))(plVar17,&local_948);
    (**(code **)(plVar17[3] + 0x488))(plVar17[1],puVar1);
  }
  else {
    plVar17 = *(long **)(param_5 + 600);
    (**(code **)(PTR_PTR_04c4b990 + 0x18))(&PTR_PTR_04c4b990);
    puVar1 = PTR_DAT_04c4b998;
    local_940._0_4_ = 0x47;
    local_948 = puVar7 + 0x10;
    (**(code **)(*plVar17 + 0x18))(plVar17,&local_948);
    (**(code **)(plVar17[3] + 0x488))(plVar17[1],puVar1);
    plVar17 = *(long **)(param_5 + 600);
    *(undefined1 *)(param_5 + 0xb76) = 0;
    local_940 = (undefined2 *)CONCAT44(local_940._4_4_,7);
    local_948 = puVar7 + 0x10;
    (**(code **)(*plVar17 + 0x18))(plVar17,&local_948);
    (**(code **)(plVar17[3] + 0x88))(plVar17[1],0);
    *(int *)(param_5 + 0xb58) = *(int *)(param_5 + 0xb58) + 1;
    if (*(int *)(param_5 + 0xb5c) < 0) goto LAB_03d7ace4;
LAB_03d7ae7c:
    local_136 = 0;
    local_938 = 0x400;
    local_940 = local_934;
    local_934[0] = 0;
    local_948 = PTR_DAT_04bb62a0 + 0x10;
    uVar9 = FUN_03d7ca10(param_5,&local_948);
    plVar17 = *(long **)(param_5 + 0x250);
    (**(code **)(local_948 + 0x18))(&local_948);
    puVar2 = local_940;
    puVar1 = PTR_DAT_04bc0878 + 0x10;
    local_128._0_4_ = 9;
    local_130 = puVar1;
    (**(code **)(*plVar17 + 0x18))(plVar17,&local_130);
    (**(code **)(plVar17[3] + 0x5e0))(plVar17[1],puVar2,uVar9);
    plVar17 = *(long **)(param_5 + 0x250);
    local_128 = (short *)CONCAT44(local_128._4_4_,0xf);
    local_130 = puVar1;
    (**(code **)(*plVar17 + 0x18))(plVar17,&local_130);
    (**(code **)(plVar17[3] + 0x610))(plVar17[1]);
  }
  plVar17 = *(long **)(param_5 + 0x250);
  local_940._0_4_ = 0x3f;
  local_948 = puVar7 + 0x10;
  (**(code **)(*plVar17 + 0x20))(plVar17,&local_948);
  fVar4 = (float)(**(code **)(plVar17[3] + 0x410))(plVar17[1]);
  local_130 = *(undefined **)(param_5 + 0xb40);
  plVar17 = *(long **)(param_5 + 0x250);
  local_128 = (short *)CONCAT44(local_128._4_4_,*(undefined4 *)(param_5 + 0xb48));
  local_940._0_4_ = 0x36;
  local_948 = puVar7 + 0x10;
  (**(code **)(*plVar17 + 0x20))(plVar17,&local_948);
  iVar10 = (**(code **)(plVar17[3] + 0x380))(plVar17[1]);
  if (iVar10 == 2) {
    fVar5 = (float)local_130 - *(float *)(param_5 + 0xb38);
    param_3 = param_3 - fVar4;
LAB_03d7b040:
    fVar5 = param_3 + fVar5;
LAB_03d7b044:
    local_130 = (undefined *)CONCAT44(local_130._4_4_,fVar5);
  }
  else if (iVar10 == 0) {
    fVar5 = (float)local_130 - *(float *)(param_5 + 0xb38) * 0.5;
    param_3 = (param_3 - fVar4) * 0.5;
    if (*(char *)(param_5 + 0xc78) == '\0') goto LAB_03d7b040;
    uVar14 = 0;
    if (param_3 != (float)(int)param_3) {
      uVar14 = (uint)(0.0 <= param_3);
    }
    fVar5 = fVar5 + (float)(int)(uVar14 + (int)param_3);
    goto LAB_03d7b044;
  }
  plVar17 = *(long **)(param_5 + 0x250);
  local_948 = puVar7 + 0x10;
  local_940._0_4_ = 0x37;
  (**(code **)(*plVar17 + 0x20))(plVar17,&local_948);
  iVar10 = (**(code **)(plVar17[3] + 0x390))(plVar17[1]);
  if (iVar10 == 2) {
    fVar4 = *(float *)(param_5 + 0xb3c) + local_130._4_4_;
    param_4 = param_4 - param_2;
  }
  else {
    if (iVar10 != 0) goto LAB_03d7b0f4;
    fVar4 = local_130._4_4_ + *(float *)(param_5 + 0xb3c) * 0.5;
    param_4 = (param_4 - param_2) * 0.5;
    if (*(char *)(param_5 + 0xc78) != '\0') {
      uVar14 = 0;
      if (param_4 != (float)(int)param_4) {
        uVar14 = (uint)(0.0 <= param_4);
      }
      param_4 = (float)(int)(uVar14 + (int)param_4);
    }
  }
  local_130 = (undefined *)CONCAT44(fVar4 - param_4,(float)local_130);
LAB_03d7b0f4:
  plVar17 = *(long **)(param_5 + 0x250);
  local_948 = puVar7 + 0x10;
  local_940 = (undefined2 *)CONCAT44(local_940._4_4_,8);
  (**(code **)(*plVar17 + 0x18))(plVar17,&local_948);
  (**(code **)(plVar17[3] + 0x98))(plVar17[1],&local_130);
  puVar11 = *(undefined8 **)(param_5 + 0xc50);
  if (puVar11 != (undefined8 *)0x0) {
    local_948 = (undefined *)CONCAT44(local_948._4_4_,*(undefined4 *)(param_5 + 0xb58));
    local_940 = *(undefined2 **)(param_5 + 0x260);
    (**(code **)*puVar11)(puVar11,&local_948);
  }
  return;
}

